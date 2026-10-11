/**
 * X-Men Legends - Recompiled code chunk 41
 * Functions: 250 (0x001B8BF0 - 0x001C2E30)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001B8BF0
 * Original: 0x001B8BF0 - 0x001B8BFA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8BF0(void)
{

loc_001B8BF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x50) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8C00
 * Original: 0x001B8C00 - 0x001B8C91 (145 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8C00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8C1F; /* je: equal / zero */

loc_001B8C0A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B8C1F; /* jne: not equal / not zero */

loc_001B8C1A: ;
    PUSH32(esp, 0x001B8C1Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B8C1F: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8C3B; /* je: equal / zero */

loc_001B8C26: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B8C3B; /* jne: not equal / not zero */

loc_001B8C36: ;
    PUSH32(esp, 0x001B8C3Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B8C3B: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8C57; /* je: equal / zero */

loc_001B8C42: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B8C57; /* jne: not equal / not zero */

loc_001B8C52: ;
    PUSH32(esp, 0x001B8C57u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B8C57: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8C73; /* je: equal / zero */

loc_001B8C5E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B8C73; /* jne: not equal / not zero */

loc_001B8C6E: ;
    PUSH32(esp, 0x001B8C73u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B8C73: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001B8C90; /* je: equal / zero */

loc_001B8C7B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B8C90; /* jne: not equal / not zero */

loc_001B8C8B: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001B8C90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8CA0
 * Original: 0x001B8CA0 - 0x001B8E7A (474 bytes, 158 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8CA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8CA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB1AC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B8CB2u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001B8CB2: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x468920);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001B8CC2u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001B8CC2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B8CCAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8CCA: ;
    ebp = eax;
    eax = MEM32(0x5BB1B4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8CF0; /* jne: not equal / not zero */

loc_001B8CD7: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8CE2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B8CE2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8CE8u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001B8CE8: ;
    esp = esp + 8;
    MEM32(0x5BB1B4) = eax;

loc_001B8CF0: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x001B8CFEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8CFE: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x001B8D0Au); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001B8D0A: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001B8D15u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8D15: ;
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B8D23u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8D23: ;
    ebp = eax;
    PUSH32(esp, 0x001B8D2Au); RECOMP_ABI_CALL(0x00229BE0u, sub_00229BE0); /* call 0x00229BE0 */

loc_001B8D2A: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x3C) = eax;
    PUSH32(esp, 0x001B8D38u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8D38: ;
    ebp = eax;
    eax = MEM32(0x5BB178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8D5D; /* jne: not equal / not zero */

loc_001B8D43: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B8D4Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B8D4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8D55u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001B8D55: ;
    esp = esp + 8;
    MEM32(0x5BB178) = eax;

loc_001B8D5D: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 9;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001B8D6Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8D6E: ;
    ebp = eax;
    eax = MEM32(0x5BB144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8D93; /* jne: not equal / not zero */

loc_001B8D79: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B8D85u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B8D85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8D8Bu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001B8D8B: ;
    esp = esp + 8;
    MEM32(0x5BB144) = eax;

loc_001B8D93: ;
    edx = edi + 0xA;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001B8DA4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8DA4: ;
    ebp = eax;
    eax = MEM32(0x5BB198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8DC8; /* jne: not equal / not zero */

loc_001B8DAF: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8DBAu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B8DBA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8DC0u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001B8DC0: ;
    esp = esp + 8;
    MEM32(0x5BB198) = eax;

loc_001B8DC8: ;
    ecx = edi + 0xF;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001B8DD9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8DD9: ;
    ebp = eax;
    eax = MEM32(0x5BB18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8DFE; /* jne: not equal / not zero */

loc_001B8DE4: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B8DF0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B8DF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8DF6u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001B8DF6: ;
    esp = esp + 8;
    MEM32(0x5BB18C) = eax;

loc_001B8DFE: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B8E0Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8E0C: ;
    ecx = edi + 0x11;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001B8E1Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8E1A: ;
    edx = edi + 0x12;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001B8E28u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8E28: ;
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 0x13;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B8E36u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8E36: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x001B8E48u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001B8E48: ;
    edx = edi + 0x15;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x1AAD40;
    PUSH32(esp, 0x001B8E5Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8E5A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4688C8);
    PUSH32(esp, 0x468870);
    PUSH32(esp, 0x468818);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001B8E74u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001B8E74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B8E80
 * Original: 0x001B8E80 - 0x001B8EA4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8E80(void)
{

loc_001B8E80: ;
    esp = esp - 0x30;
    ecx = esp;
    PUSH32(esp, 0x001B8E8Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001B8E8B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E6A20;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8EB0
 * Original: 0x001B8EB0 - 0x001B8ECE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8EB0(void)
{

loc_001B8EB0: ;
    PUSH32(esp, 0x1DB2A0);
    PUSH32(esp, 0x001B8EBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B8EBA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BB1D0);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8ECDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001B8ECD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8ED0
 * Original: 0x001B8ED0 - 0x001B8F3E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8ED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB1E4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B8EE0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001B8EE0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x468984);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001B8EF0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001B8EF0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B8EF8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8EF8: ;
    ebx = eax;
    eax = MEM32(0x5BB1E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8F1C; /* jne: not equal / not zero */

loc_001B8F03: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8F0Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B8F0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8F14u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001B8F14: ;
    esp = esp + 8;
    MEM32(0x5BB1E8) = eax;

loc_001B8F1C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x468980);
    PUSH32(esp, 0x46897C);
    PUSH32(esp, 0x468978);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x001B8F3Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001B8F3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B8F40
 * Original: 0x001B8F40 - 0x001B8F66 (38 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8F40(void)
{

loc_001B8F40: ;
    ecx = MEM32(0x5BC50C);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x3E76AC);
    PUSH32(esp, 0x001B8F55u); RECOMP_ABI_CALL(0x002304D0u, sub_002304D0); /* call 0x002304D0 */

loc_001B8F55: ;
    ecx = MEM32(0x5BAC40);
    PUSH32(esp, 0x3E76AC);
    PUSH32(esp, 0x001B8F65u); RECOMP_ABI_CALL(0x0020E460u, sub_0020E460); /* call 0x0020E460 */

loc_001B8F65: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8F70
 * Original: 0x001B8F70 - 0x001B910A (410 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8F70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8F70: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8F7Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B8F7E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8F84u); RECOMP_ABI_CALL(0x002208B0u, sub_002208B0); /* call 0x002208B0 */

loc_001B8F84: ;
    esi = eax;
    eax = MEM32(0x5BC528);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_001B8FB2; /* jne: not equal / not zero */

loc_001B8F94: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001B8F9Bu); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_001B8F9B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8FAB; /* je: equal / zero */

loc_001B8FA2: ;
    ecx = eax;
    PUSH32(esp, 0x001B8FA9u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_001B8FA9: ;
    goto loc_001B8FAD;

loc_001B8FAB: ;
    eax = 0; /* xor self */

loc_001B8FAD: ;
    MEM32(0x5BC528) = eax;

loc_001B8FB2: ;
    PUSH32(esp, 0x3E7EB4);
    ecx = eax;
    PUSH32(esp, 0x001B8FBEu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_001B8FBE: ;
    ecx = esi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x001B8FC7u); RECOMP_ABI_CALL(0x00216A70u, sub_00216A70); /* call 0x00216A70 */

loc_001B8FC7: ;
    ecx = esi;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0x34) = 0x1AB140;
    PUSH32(esp, 0x001B8FDCu); RECOMP_ABI_CALL(0x001E9E90u, sub_001E9E90); /* call 0x001E9E90 */

loc_001B8FDC: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001B8FE8u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_001B8FE8: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B8FFF; /* jne: not equal / not zero */

loc_001B8FF8: ;
    ecx = esi;
    PUSH32(esp, 0x001B8FFFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B8FFF: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B900Bu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B900B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B9011u); RECOMP_ABI_CALL(0x0021DB50u, sub_0021DB50); /* call 0x0021DB50 */

loc_001B9011: ;
    esi = eax;
    eax = MEM32(0x5BC528);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_001B903F; /* jne: not equal / not zero */

loc_001B9021: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001B9028u); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_001B9028: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9038; /* je: equal / zero */

loc_001B902F: ;
    ecx = eax;
    PUSH32(esp, 0x001B9036u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_001B9036: ;
    goto loc_001B903A;

loc_001B9038: ;
    eax = 0; /* xor self */

loc_001B903A: ;
    MEM32(0x5BC528) = eax;

loc_001B903F: ;
    PUSH32(esp, 0x3E7EAC);
    ecx = eax;
    PUSH32(esp, 0x001B904Bu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_001B904B: ;
    ecx = esi;
    MEM32(ebx) = eax;
    PUSH32(esp, 0x001B9054u); RECOMP_ABI_CALL(0x00216A70u, sub_00216A70); /* call 0x00216A70 */

loc_001B9054: ;
    ecx = esi;
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x001B9062u); RECOMP_ABI_CALL(0x001E9E90u, sub_001E9E90); /* call 0x001E9E90 */

loc_001B9062: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001B906Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_001B906A: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9081; /* jne: not equal / not zero */

loc_001B907A: ;
    ecx = esi;
    PUSH32(esp, 0x001B9081u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9081: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B908Du); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B908D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B9093u); RECOMP_ABI_CALL(0x0021DB50u, sub_0021DB50); /* call 0x0021DB50 */

loc_001B9093: ;
    esi = eax;
    eax = MEM32(0x5BC528);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_001B90C1; /* jne: not equal / not zero */

loc_001B90A3: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001B90AAu); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_001B90AA: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B90BA; /* je: equal / zero */

loc_001B90B1: ;
    ecx = eax;
    PUSH32(esp, 0x001B90B8u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_001B90B8: ;
    goto loc_001B90BC;

loc_001B90BA: ;
    eax = 0; /* xor self */

loc_001B90BC: ;
    MEM32(0x5BC528) = eax;

loc_001B90C1: ;
    PUSH32(esp, 0x3E7EA4);
    ecx = eax;
    PUSH32(esp, 0x001B90CDu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_001B90CD: ;
    ecx = esi;
    MEM32(ebx) = eax;
    PUSH32(esp, 0x001B90D6u); RECOMP_ABI_CALL(0x00216A70u, sub_00216A70); /* call 0x00216A70 */

loc_001B90D6: ;
    ecx = esi;
    MEM32(esi + 8) = 8;
    PUSH32(esp, 0x001B90E4u); RECOMP_ABI_CALL(0x001E9E90u, sub_001E9E90); /* call 0x001E9E90 */

loc_001B90E4: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001B90ECu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_001B90EC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9106; /* jne: not equal / not zero */

loc_001B90FC: ;
    ecx = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001B9106: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9110
 * Original: 0x001B9110 - 0x001B9116 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9110(void)
{

loc_001B9110: ;
    eax = MEM32(0x5BB210);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9120
 * Original: 0x001B9120 - 0x001B9153 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9120(void)
{

loc_001B9120: ;
    PUSH32(esp, 0x001B9125u); RECOMP_ABI_CALL(0x001DF130u, sub_001DF130); /* call 0x001DF130 */

loc_001B9125: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3E7F14);
    PUSH32(esp, 0x1B7B70);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BB220);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B914Fu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001B914F: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9160
 * Original: 0x001B9160 - 0x001B9166 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9160(void)
{

loc_001B9160: ;
    eax = MEM32(0x5BB228);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9170
 * Original: 0x001B9170 - 0x001B91C7 (87 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9170: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B918F; /* je: equal / zero */

loc_001B917A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B918F; /* jne: not equal / not zero */

loc_001B918A: ;
    PUSH32(esp, 0x001B918Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B918F: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B91AA; /* je: equal / zero */

loc_001B9196: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001B91AA; /* jne: not equal / not zero */

loc_001B91A2: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B91AAu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001B91AA: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B91C5; /* je: equal / zero */

loc_001B91B1: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001B91C5; /* jne: not equal / not zero */

loc_001B91BD: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B91C5u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001B91C5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B91D0
 * Original: 0x001B91D0 - 0x001B92A9 (217 bytes, 73 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B91D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B91D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB228);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B91E0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001B91E0: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x4689F4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001B91F0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001B91F0: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B91FBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B91FB: ;
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    PUSH32(esp, 0x001B9207u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_001B9207: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001B9212u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B9212: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x001B921Bu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001B921B: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001B9226u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B9226: ;
    PUSH32(esp, 4);
    ecx = eax;
    PUSH32(esp, 0x001B922Fu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001B922F: ;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B923Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B923A: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x001B9243u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001B9243: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001B924Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B924E: ;
    ebx = eax;
    eax = MEM32(0x5BB22C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B9273; /* jne: not equal / not zero */

loc_001B9259: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B9265u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B9265: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B926Bu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001B926B: ;
    esp = esp + 8;
    MEM32(0x5BB22C) = eax;

loc_001B9273: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x001B9285u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B9285: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x001B928Eu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001B928E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4689D0);
    PUSH32(esp, 0x4689AC);
    PUSH32(esp, 0x468988);
    ecx = esi;
    PUSH32(esp, 0x001B92A5u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001B92A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B92B0
 * Original: 0x001B92B0 - 0x001B92B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B92B0(void)
{

loc_001B92B0: ;
    eax = MEM32(0x5BB234);
    esp += 4; return; /* ret */

}

/**
 * sub_001B92C0
 * Original: 0x001B92C0 - 0x001B92C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B92C0(void)
{

loc_001B92C0: ;
    eax = MEM32(0x5BB23C);
    esp += 4; return; /* ret */

}

/**
 * sub_001B92D0
 * Original: 0x001B92D0 - 0x001B92F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B92D0(void)
{

loc_001B92D0: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x001B92DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001B92DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E6F78;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9300
 * Original: 0x001B9300 - 0x001B9324 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9300(void)
{

loc_001B9300: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x001B930Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001B930B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E6FD8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9330
 * Original: 0x001B9330 - 0x001B9347 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9330: ;
    ecx = 0; /* xor self */
    eax = 0x4675F8;

loc_001B9337: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9346; /* jne: not equal / not zero */

loc_001B933B: ;
    eax = eax + 0xC;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x467748) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x467748 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B9337; /* jl: less (signed <) */

loc_001B9346: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9350
 * Original: 0x001B9350 - 0x001B9374 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9350(void)
{

loc_001B9350: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x001B935Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001B935B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E7030;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9380
 * Original: 0x001B9380 - 0x001B9386 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9380(void)
{

loc_001B9380: ;
    eax = MEM32(0x5BC3B4);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9390
 * Original: 0x001B9390 - 0x001B93B4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9390(void)
{

loc_001B9390: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x001B939Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001B939B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E7090;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001B93C0
 * Original: 0x001B93C0 - 0x001B9433 (115 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B93C0(void)
{

loc_001B93C0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(0x5BB264);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B93D2u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001B93D2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x468A24);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001B93E2u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001B93E2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B93EAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B93EA: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x001B9416u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001B9416: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x468A20);
    PUSH32(esp, 0x468A1C);
    PUSH32(esp, 0x468A18);
    ecx = esi;
    PUSH32(esp, 0x001B942Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001B942D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9440
 * Original: 0x001B9440 - 0x001B9446 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9440(void)
{

loc_001B9440: ;
    eax = MEM32(0x5BB26C);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9450
 * Original: 0x001B9450 - 0x001B9474 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9450(void)
{

loc_001B9450: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x001B945Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001B945B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E70E8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9480
 * Original: 0x001B9480 - 0x001B94B6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9480(void)
{

loc_001B9480: ;
    PUSH32(esp, 0x001B9485u); RECOMP_ABI_CALL(0x001DF130u, sub_001DF130); /* call 0x001DF130 */

loc_001B9485: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1AB580);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x3E81B0);
    PUSH32(esp, 0x1B83C0);
    PUSH32(esp, 0x1AA690);
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x5BB27C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B94B2u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001B94B2: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001B94C0
 * Original: 0x001B94C0 - 0x001B94CB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B94C0(void)
{

loc_001B94C0: ;
    eax = ZX16(MEM16(esp + 4));
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B94D0
 * Original: 0x001B94D0 - 0x001B94DB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B94D0(void)
{

loc_001B94D0: ;
    eax = ZX16(MEM16(esp + 4));
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B94E0
 * Original: 0x001B94E0 - 0x001B94EB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B94E0(void)
{

loc_001B94E0: ;
    eax = ZX16(MEM16(esp + 4));
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B94F0
 * Original: 0x001B94F0 - 0x001B94F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B94F0(void)
{

loc_001B94F0: ;
    eax = MEM32(0x5BB2D4);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9500
 * Original: 0x001B9500 - 0x001B9699 (409 bytes, 135 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9500(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9500: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B950Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B950E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B9514u); RECOMP_ABI_CALL(0x00225490u, sub_00225490); /* call 0x00225490 */

loc_001B9514: ;
    esi = eax;
    eax = MEM32(0x5BC528);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9542; /* jne: not equal / not zero */

loc_001B9524: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001B952Bu); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_001B952B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B953B; /* je: equal / zero */

loc_001B9532: ;
    ecx = eax;
    PUSH32(esp, 0x001B9539u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_001B9539: ;
    goto loc_001B953D;

loc_001B953B: ;
    eax = 0; /* xor self */

loc_001B953D: ;
    MEM32(0x5BC528) = eax;

loc_001B9542: ;
    PUSH32(esp, 0x3E827C);
    ecx = eax;
    PUSH32(esp, 0x001B954Eu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_001B954E: ;
    ecx = esi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x001B9557u); RECOMP_ABI_CALL(0x00216A70u, sub_00216A70); /* call 0x00216A70 */

loc_001B9557: ;
    ecx = esi;
    MEM32(esi + 8) = 0;
    MEM16(esi + 0x14) = 4;
    PUSH32(esp, 0x001B956Bu); RECOMP_ABI_CALL(0x001E9E90u, sub_001E9E90); /* call 0x001E9E90 */

loc_001B956B: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001B9577u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_001B9577: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B958E; /* jne: not equal / not zero */

loc_001B9587: ;
    ecx = esi;
    PUSH32(esp, 0x001B958Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B958E: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B959Au); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B959A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B95A0u); RECOMP_ABI_CALL(0x0021DB50u, sub_0021DB50); /* call 0x0021DB50 */

loc_001B95A0: ;
    esi = eax;
    eax = MEM32(0x5BC528);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_001B95CE; /* jne: not equal / not zero */

loc_001B95B0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001B95B7u); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_001B95B7: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B95C7; /* je: equal / zero */

loc_001B95BE: ;
    ecx = eax;
    PUSH32(esp, 0x001B95C5u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_001B95C5: ;
    goto loc_001B95C9;

loc_001B95C7: ;
    eax = 0; /* xor self */

loc_001B95C9: ;
    MEM32(0x5BC528) = eax;

loc_001B95CE: ;
    PUSH32(esp, 0x3E826C);
    ecx = eax;
    PUSH32(esp, 0x001B95DAu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_001B95DA: ;
    ecx = esi;
    MEM32(ebx) = eax;
    PUSH32(esp, 0x001B95E3u); RECOMP_ABI_CALL(0x00216A70u, sub_00216A70); /* call 0x00216A70 */

loc_001B95E3: ;
    ecx = esi;
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x001B95F1u); RECOMP_ABI_CALL(0x001E9E90u, sub_001E9E90); /* call 0x001E9E90 */

loc_001B95F1: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001B95F9u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_001B95F9: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9610; /* jne: not equal / not zero */

loc_001B9609: ;
    ecx = esi;
    PUSH32(esp, 0x001B9610u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9610: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B961Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B961C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B9622u); RECOMP_ABI_CALL(0x0021DB50u, sub_0021DB50); /* call 0x0021DB50 */

loc_001B9622: ;
    esi = eax;
    eax = MEM32(0x5BC528);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9650; /* jne: not equal / not zero */

loc_001B9632: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001B9639u); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_001B9639: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9649; /* je: equal / zero */

loc_001B9640: ;
    ecx = eax;
    PUSH32(esp, 0x001B9647u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_001B9647: ;
    goto loc_001B964B;

loc_001B9649: ;
    eax = 0; /* xor self */

loc_001B964B: ;
    MEM32(0x5BC528) = eax;

loc_001B9650: ;
    PUSH32(esp, 0x3E825C);
    ecx = eax;
    PUSH32(esp, 0x001B965Cu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_001B965C: ;
    ecx = esi;
    MEM32(ebx) = eax;
    PUSH32(esp, 0x001B9665u); RECOMP_ABI_CALL(0x00216A70u, sub_00216A70); /* call 0x00216A70 */

loc_001B9665: ;
    ecx = esi;
    MEM32(esi + 8) = 8;
    PUSH32(esp, 0x001B9673u); RECOMP_ABI_CALL(0x001E9E90u, sub_001E9E90); /* call 0x001E9E90 */

loc_001B9673: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001B967Bu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_001B967B: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9695; /* jne: not equal / not zero */

loc_001B968B: ;
    ecx = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001B9695: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B96A0
 * Original: 0x001B96A0 - 0x001B97BA (282 bytes, 87 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B96A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B96A0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB308);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B96B3u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001B96B3: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x468AC4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001B96C3u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001B96C3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B96CBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B96CB: ;
    ebx = eax;
    eax = MEM32(0x5BB2BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B96EF; /* jne: not equal / not zero */

loc_001B96D6: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B96E1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B96E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B96E7u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001B96E7: ;
    esp = esp + 8;
    MEM32(0x5BB2BC) = eax;

loc_001B96EF: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x3C) = 0;
    PUSH32(esp, 0x001B9701u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B9701: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x001B970Du); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001B970D: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001B9718u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B9718: ;
    PUSH32(esp, 0x42800000);
    ecx = eax;
    PUSH32(esp, 0x001B9724u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001B9724: ;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B972Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B972F: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x001B9753u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001B9753: ;
    edx = edi + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001B975Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B975E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x001B9767u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001B9767: ;
    eax = edi + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B9772u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B9772: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x001B977Bu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001B977B: ;
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001B9786u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B9786: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x001B978Fu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001B978F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x468A90);
    PUSH32(esp, 0x468A5C);
    PUSH32(esp, 0x468A28);
    ecx = esi;
    PUSH32(esp, 0x001B97A6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001B97A6: ;
    edx = MEM32(0x5BB308);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x3C) = 0x1DE8F0;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001B97C0
 * Original: 0x001B97C0 - 0x001B97C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B97C0(void)
{

loc_001B97C0: ;
    eax = MEM32(0x5BB31C);
    esp += 4; return; /* ret */

}

/**
 * sub_001B97D0
 * Original: 0x001B97D0 - 0x001B97DD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B97D0(void)
{

loc_001B97D0: ;
    eax = MEM32(0x5BB31C);
    MEM32(eax + 0x40) = 0x1B8010;
    esp += 4; return; /* ret */

}

/**
 * sub_001B97E0
 * Original: 0x001B97E0 - 0x001B9804 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B97E0(void)
{

loc_001B97E0: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x001B97EBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001B97EB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E7650;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9810
 * Original: 0x001B9810 - 0x001B9825 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9810(void)
{

loc_001B9810: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B9817u); RECOMP_ABI_CALL(0x002B6110u, sub_002B6110); /* call 0x002B6110 */

loc_001B9817: ;
    PUSH32(esp, 0x1B0240);
    PUSH32(esp, 0x001B9821u); RECOMP_ABI_CALL(0x002B4990u, sub_002B4990); /* call 0x002B4990 */

loc_001B9821: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9830
 * Original: 0x001B9830 - 0x001B98E8 (184 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9830(void)
{

loc_001B9830: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001B9839u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001B9839: ;
    edi = 0; /* xor self */
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi) = 0x3E8470;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    ecx = esi + 0x6C;
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 0x001B986Au); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_001B986A: ;
    ecx = esi + 0xAC;
    PUSH32(esp, 0x001B9875u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_001B9875: ;
    eax = 0; /* xor self */
    MEM32(esi + 0xF0) = eax;
    MEM32(esi + 0xF4) = eax;
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0xFC) = eax;
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x10C) = eax;
    MEM32(esi + 0x110) = eax;
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x118) = eax;
    MEM32(esi + 0x11C) = eax;
    MEM32(esi + 0x120) = eax;
    MEM32(esi + 0x124) = eax;
    MEM32(esi + 0x128) = eax;
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x130) = edi;
    MEM32(esi + 0x134) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B98F0
 * Original: 0x001B98F0 - 0x001B98F5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B98F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B98F0: ;
    g_seh_ebp = ebp; sub_00274970(); return; /* tail jmp 0x00274970 */

}

/**
 * sub_001B9900
 * Original: 0x001B9900 - 0x001B991A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9900(void)
{

loc_001B9900: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x11C); PUSH32(esp, 0x001B9917u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B9917: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B9920
 * Original: 0x001B9920 - 0x001B992D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9920(void)
{

loc_001B9920: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x138) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9930
 * Original: 0x001B9930 - 0x001B9934 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9930(void)
{

loc_001B9930: ;
    eax = MEM32(ecx + 0x68);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9940
 * Original: 0x001B9940 - 0x001B9AEA (426 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9940(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9940: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x134);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9962; /* je: equal / zero */

loc_001B994D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9962; /* jne: not equal / not zero */

loc_001B995D: ;
    PUSH32(esp, 0x001B9962u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9962: ;
    ecx = MEM32(edi + 0x130);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9981; /* je: equal / zero */

loc_001B996C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9981; /* jne: not equal / not zero */

loc_001B997C: ;
    PUSH32(esp, 0x001B9981u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9981: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x130;
    ebx = 0x10;
    edi = edi;

loc_001B9990: ;
    ecx = MEM32(esi + -4);
    esi = esi - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B99AF; /* je: equal / zero */

loc_001B999A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B99AF; /* jne: not equal / not zero */

loc_001B99AA: ;
    PUSH32(esp, 0x001B99AFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B99AF: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B9990; /* jne: not equal / not zero */

loc_001B99B2: ;
    ecx = MEM32(edi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001B99D0; /* je: equal / zero */

loc_001B99BB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B99D0; /* jne: not equal / not zero */

loc_001B99CB: ;
    PUSH32(esp, 0x001B99D0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B99D0: ;
    ecx = MEM32(edi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B99EC; /* je: equal / zero */

loc_001B99D7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B99EC; /* jne: not equal / not zero */

loc_001B99E7: ;
    PUSH32(esp, 0x001B99ECu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B99EC: ;
    ecx = MEM32(edi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9A08; /* je: equal / zero */

loc_001B99F3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9A08; /* jne: not equal / not zero */

loc_001B9A03: ;
    PUSH32(esp, 0x001B9A08u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9A08: ;
    ecx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9A24; /* je: equal / zero */

loc_001B9A0F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9A24; /* jne: not equal / not zero */

loc_001B9A1F: ;
    PUSH32(esp, 0x001B9A24u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9A24: ;
    ecx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9A40; /* je: equal / zero */

loc_001B9A2B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9A40; /* jne: not equal / not zero */

loc_001B9A3B: ;
    PUSH32(esp, 0x001B9A40u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9A40: ;
    ecx = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9A5C; /* je: equal / zero */

loc_001B9A47: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9A5C; /* jne: not equal / not zero */

loc_001B9A57: ;
    PUSH32(esp, 0x001B9A5Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9A5C: ;
    ecx = MEM32(edi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9A78; /* je: equal / zero */

loc_001B9A63: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9A78; /* jne: not equal / not zero */

loc_001B9A73: ;
    PUSH32(esp, 0x001B9A78u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9A78: ;
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9A94; /* je: equal / zero */

loc_001B9A7F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9A94; /* jne: not equal / not zero */

loc_001B9A8F: ;
    PUSH32(esp, 0x001B9A94u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9A94: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9AB0; /* je: equal / zero */

loc_001B9A9B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9AB0; /* jne: not equal / not zero */

loc_001B9AAB: ;
    PUSH32(esp, 0x001B9AB0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9AB0: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9ACC; /* je: equal / zero */

loc_001B9AB7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9ACC; /* jne: not equal / not zero */

loc_001B9AC7: ;
    PUSH32(esp, 0x001B9ACCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9ACC: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001B9AE9; /* je: equal / zero */

loc_001B9AD4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9AE9; /* jne: not equal / not zero */

loc_001B9AE4: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001B9AE9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9AF0
 * Original: 0x001B9AF0 - 0x001B9AF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9AF0(void)
{

loc_001B9AF0: ;
    eax = MEM32(0x5BB344);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9B00
 * Original: 0x001B9B00 - 0x001B9B06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9B00(void)
{

loc_001B9B00: ;
    eax = MEM32(0x5BB348);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9B10
 * Original: 0x001B9B10 - 0x001B9B1D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9B10(void)
{

loc_001B9B10: ;
    eax = MEM32(0x5BB348);
    MEM32(eax + 0x40) = 0x1B79C0;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9B20
 * Original: 0x001B9B20 - 0x001B9BCC (172 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9B20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9B3F; /* je: equal / zero */

loc_001B9B2A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9B3F; /* jne: not equal / not zero */

loc_001B9B3A: ;
    PUSH32(esp, 0x001B9B3Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9B3F: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9B5B; /* je: equal / zero */

loc_001B9B46: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9B5B; /* jne: not equal / not zero */

loc_001B9B56: ;
    PUSH32(esp, 0x001B9B5Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9B5B: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9B77; /* je: equal / zero */

loc_001B9B62: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9B77; /* jne: not equal / not zero */

loc_001B9B72: ;
    PUSH32(esp, 0x001B9B77u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9B77: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9B93; /* je: equal / zero */

loc_001B9B7E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9B93; /* jne: not equal / not zero */

loc_001B9B8E: ;
    PUSH32(esp, 0x001B9B93u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9B93: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9BAF; /* je: equal / zero */

loc_001B9B9A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9BAF; /* jne: not equal / not zero */

loc_001B9BAA: ;
    PUSH32(esp, 0x001B9BAFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9BAF: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9BCA; /* je: equal / zero */

loc_001B9BB6: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001B9BCA; /* jne: not equal / not zero */

loc_001B9BC2: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B9BCAu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001B9BCA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9BD0
 * Original: 0x001B9BD0 - 0x001B9BDD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9BD0(void)
{

loc_001B9BD0: ;
    eax = MEM32(0x5BB34C);
    MEM32(eax + 0x40) = 0x1B7990;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9BE0
 * Original: 0x001B9BE0 - 0x001B9BE4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9BE0(void)
{

loc_001B9BE0: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9BF0
 * Original: 0x001B9BF0 - 0x001B9BF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9BF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9BF0: ;
    g_seh_ebp = ebp; sub_002B6620(); return; /* tail jmp 0x002B6620 */

}

/**
 * sub_001B9C00
 * Original: 0x001B9C00 - 0x001B9CAF (175 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9C00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001B9C32; /* je: equal / zero */

loc_001B9C11: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9C32; /* jne: not equal / not zero */

loc_001B9C16: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9C32; /* jne: not equal / not zero */

loc_001B9C1B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9C32; /* je: equal / zero */

loc_001B9C20: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B9C2Au); RECOMP_ABI_CALL(0x001AC030u, sub_001AC030); /* call 0x001AC030 */

loc_001B9C2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001B9C32: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9C41; /* je: equal / zero */

loc_001B9C39: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001B9C41u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_001B9C41: ;
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebx + 8) = edi;
    MEM32(ebx + 0xC) = eax;
    PUSH32(esp, 0x001B9C5Cu); RECOMP_ABI_CALL(0x001ABED0u, sub_001ABED0); /* call 0x001ABED0 */

loc_001B9C5C: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    esp = esp + 0x10;
    PUSH32(esp, 0x80);
    MEM32(ebx + 0x10) = ecx;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebx + 0x18) = eax;
    PUSH32(esp, 0x001B9C7Au); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_001B9C7A: ;
    ecx = MEM32(ebx + 0x18);
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebx + 0x14) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_001B9C9C; /* je: equal / zero */

loc_001B9C8B: ;
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
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001B9C9C: ;
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
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B9CB0
 * Original: 0x001B9CB0 - 0x001B9D5B (171 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9CB0: ;
    eax = MEM32(0x46A688);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B9CBDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B9CBD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B9CC3u); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_001B9CC3: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 8;
    esi = eax;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001B9CD4u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_001B9CD4: ;
    ecx = esi;
    PUSH32(esp, 0x001B9CDBu); RECOMP_ABI_CALL(0x001EB710u, sub_001EB710); /* call 0x001EB710 */

loc_001B9CDB: ;
    edi = MEM32(esi + 0xC);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001B9CF7; /* js: sign (negative) */

loc_001B9CE1: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(edi + edx)) & 0xFFu; _fb = (uint32_t)(0x5F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + edx), 0x5F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9CF4; /* jne: not equal / not zero */

loc_001B9CEA: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B9CF4u); RECOMP_ABI_CALL(0x0022D240u, sub_0022D240); /* call 0x0022D240 */

loc_001B9CF4: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001B9CE1; /* jns: not sign (positive) */

loc_001B9CF7: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(0x46A3C8);
    if (TEST_Z(_fa, _fb)) goto loc_001B9D06; /* je: equal / zero */

loc_001B9D04: ;
    edi = eax;

loc_001B9D06: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B9D0E; /* jne: not equal / not zero */

loc_001B9D0A: ;
    eax = 0; /* xor self */
    goto loc_001B9D3D;

loc_001B9D0E: ;
    eax = MEM32(0x5BC528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B9D35; /* jne: not equal / not zero */

loc_001B9D17: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001B9D1Eu); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_001B9D1E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9D2E; /* je: equal / zero */

loc_001B9D25: ;
    ecx = eax;
    PUSH32(esp, 0x001B9D2Cu); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_001B9D2C: ;
    goto loc_001B9D30;

loc_001B9D2E: ;
    eax = 0; /* xor self */

loc_001B9D30: ;
    MEM32(0x5BC528) = eax;

loc_001B9D35: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x001B9D3Du); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_001B9D3D: ;
    MEM32(ebx) = eax;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9D56; /* jne: not equal / not zero */

loc_001B9D4F: ;
    ecx = esi;
    PUSH32(esp, 0x001B9D56u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9D56: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9D60
 * Original: 0x001B9D60 - 0x001B9D91 (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B9D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9D60: ;
    eax = MEM32(ecx + 0x130);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B9D8C; /* jge: greater or equal (signed >=) */

loc_001B9D6F: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9D8C; /* je: equal / zero */

loc_001B9D79: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B9D8C; /* jae: above or equal (unsigned >=) */

loc_001B9D82: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B9D8E; /* jne: not equal / not zero */

loc_001B9D8C: ;
    eax = 0; /* xor self */

loc_001B9D8E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B9DA0
 * Original: 0x001B9DA0 - 0x001B9E0B (107 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9DA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x134);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001B9DB7u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_001B9DB7: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B9DCF; /* jle: less or equal (signed <=) */

loc_001B9DC0: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B9DC0; /* jl: less (signed <) */

loc_001B9DCF: ;
    MEM32(esi + 8) = 0;
    esi = MEM32(edi + 0x130);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001B9DE9u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_001B9DE9: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B9E01; /* jle: less or equal (signed <=) */

loc_001B9DF2: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B9DF2; /* jl: less (signed <) */

loc_001B9E01: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9E10
 * Original: 0x001B9E10 - 0x001B9E33 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9E10: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9E2D; /* je: equal / zero */

loc_001B9E18: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9E2D; /* jne: not equal / not zero */

loc_001B9E28: ;
    PUSH32(esp, 0x001B9E2Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9E2D: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B9E40
 * Original: 0x001B9E40 - 0x001B9E65 (37 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9E40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B9E5F; /* jl: less (signed <) */

loc_001B9E49: ;
    ecx = MEM32(ecx + 0x134);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4 + -188);
    eax = MEM32(eax + 0xC);
    esp += 8; return; /* ret 4 */

loc_001B9E5F: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9E70
 * Original: 0x001B9E70 - 0x001B9EBF (79 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9E70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9E70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001B9E7F; /* je: equal / zero */

loc_001B9E7C: ;
    MEM32(esi + -4) = MEM32(esi + -4) + 1;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001B9E7F: ;
    eax = MEM32(edi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9E9A; /* je: equal / zero */

loc_001B9E86: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001B9E9A; /* jne: not equal / not zero */

loc_001B9E92: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B9E9Au); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001B9E9A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x58) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001B9EBA; /* je: equal / zero */

loc_001B9EA1: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001B9EBA; /* jne: not equal / not zero */

loc_001B9EAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = MEM32(eax);
    g_seh_ebp = ebp; sub_0020EF90(); return; /* tail jmp 0x0020EF90 */

loc_001B9EBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9EC0
 * Original: 0x001B9EC0 - 0x001B9F57 (151 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9EC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9EC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9EF7; /* jne: not equal / not zero */

loc_001B9ED2: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9EEF; /* je: equal / zero */

loc_001B9EDA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9EEF; /* jne: not equal / not zero */

loc_001B9EEA: ;
    PUSH32(esp, 0x001B9EEFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9EEF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001B9EF7: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    edx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001B9F11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B9F11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9F37; /* je: equal / zero */

loc_001B9F15: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 0x10000 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_001B9F37; /* jne: not equal / not zero */

loc_001B9F20: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10001 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9F37; /* jne: not equal / not zero */

loc_001B9F28: ;
    esi = MEM32(esi + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9F35; /* je: equal / zero */

loc_001B9F2F: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x10 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B9F37; /* jle: less or equal (signed <=) */

loc_001B9F35: ;
    SET_LO8(ebx, 0); /* xor self */

loc_001B9F37: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B9F4E; /* jne: not equal / not zero */

loc_001B9F47: ;
    ecx = edi;
    PUSH32(esp, 0x001B9F4Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B9F4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B9F60
 * Original: 0x001B9F60 - 0x001B9FA1 (65 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9F60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B9F6A; /* jne: not equal / not zero */

loc_001B9F68: ;
    eax = ecx;

loc_001B9F6A: ;
    edx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9F85; /* je: equal / zero */

loc_001B9F75: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10001 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9F85; /* je: equal / zero */

loc_001B9F7D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10002) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10002 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9F93; /* jne: not equal / not zero */

loc_001B9F85: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001B9F90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B9F90: ;
    esp += 8; return; /* ret 4 */

loc_001B9F93: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001B9F9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B9F9E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9FB0
 * Original: 0x001B9FB0 - 0x001BA200 (592 bytes, 199 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9FB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9FB0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA1FE; /* je: equal / zero */

loc_001B9FC1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10000 (32-bit) */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    MEM32(ebx) = 0;
    MEM32(eax) = 0;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    MEM32(eax) = 0;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    MEM32(ecx) = 0;
    MEM32(esi) = 0;
    MEM32(edx) = 0;
    MEM32(ebp) = 0;
    if (CMP_G(_fas, _fbs)) goto loc_001BA1D1; /* jg: greater (signed >) */

loc_001BA017: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001BA1C2; /* je: equal / zero */

loc_001BA01D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x23 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001BA1FB; /* ja: above (unsigned >) */

loc_001BA026: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x1BA200); /* switch: 36 entries, 20 targets */
    if (_jt == 0x001BA02Du) goto loc_001BA02D;
    if (_jt == 0x001BA038u) goto loc_001BA038;
    if (_jt == 0x001BA049u) goto loc_001BA049;
    if (_jt == 0x001BA04Fu) goto loc_001BA04F;
    if (_jt == 0x001BA05Au) goto loc_001BA05A;
    if (_jt == 0x001BA077u) goto loc_001BA077;
    if (_jt == 0x001BA083u) goto loc_001BA083;
    if (_jt == 0x001BA08Fu) goto loc_001BA08F;
    if (_jt == 0x001BA09Bu) goto loc_001BA09B;
    if (_jt == 0x001BA0A7u) goto loc_001BA0A7;
    if (_jt == 0x001BA0C4u) goto loc_001BA0C4;
    if (_jt == 0x001BA0E1u) goto loc_001BA0E1;
    if (_jt == 0x001BA0FEu) goto loc_001BA0FE;
    if (_jt == 0x001BA11Bu) goto loc_001BA11B;
    if (_jt == 0x001BA132u) goto loc_001BA132;
    if (_jt == 0x001BA14Fu) goto loc_001BA14F;
    if (_jt == 0x001BA16Cu) goto loc_001BA16C;
    if (_jt == 0x001BA189u) goto loc_001BA189;
    if (_jt == 0x001BA19Au) goto loc_001BA19A;
    if (_jt == 0x001BA1ABu) goto loc_001BA1AB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001BA02D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx) = 8;
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA038: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx) = 4;
    POP32(esp, ebx);
    MEM32(edx) = 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA049: ;
    MEM32(ebx) = 8;

loc_001BA04F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = 8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA05A: ;
    MEM32(eax) = 3;
    MEM32(ecx) = 3;
    MEM32(esi) = 2;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA077: ;
    POP32(esp, esi);
    MEM32(ebp) = 8;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA083: ;
    POP32(esp, esi);
    MEM32(ebp) = 0x10;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA08F: ;
    POP32(esp, esi);
    MEM32(ebp) = 0x18;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA09B: ;
    POP32(esp, esi);
    MEM32(ebp) = 0x20;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA0A7: ;
    MEM32(eax) = 8;
    MEM32(ecx) = 8;
    MEM32(esi) = 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA0C4: ;
    MEM32(eax) = 2;
    MEM32(ecx) = 2;
    MEM32(esi) = 2;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = 2;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA0E1: ;
    MEM32(eax) = 8;
    MEM32(ecx) = 8;
    MEM32(esi) = 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = 8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA0FE: ;
    MEM32(eax) = 5;
    MEM32(ecx) = 5;
    MEM32(esi) = 5;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA11B: ;
    MEM32(eax) = 5;
    MEM32(ecx) = 6;
    MEM32(esi) = 5;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA132: ;
    MEM32(eax) = 4;
    MEM32(ecx) = 4;
    MEM32(esi) = 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA14F: ;
    MEM32(eax) = 3;
    MEM32(ecx) = 3;
    MEM32(esi) = 2;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = 8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA16C: ;
    MEM32(eax) = 1;
    MEM32(ecx) = 1;
    MEM32(esi) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA189: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(eax) = 8;
    MEM32(ecx) = 8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA19A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(eax) = 0x10;
    MEM32(ecx) = 0x10;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA1AB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 5;
    POP32(esp, ebx);
    MEM32(ecx) = 5;
    MEM32(edx) = 6;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA1C2: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(ecx) = 8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA1D1: ;
    edi = edi - 0x10001;
    if ((edi == 0)) goto loc_001BA1F1; /* je: equal / zero */

loc_001BA1D9: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BA1FB; /* jne: not equal / not zero */

loc_001BA1DC: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(eax) = 8;
    MEM32(edx) = 8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001BA1F1: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = 4;

loc_001BA1FB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001BA1FE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BA290
 * Original: 0x001BA290 - 0x001BA2F9 (105 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BA290: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10001 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA29B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x22 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2F3; /* je: equal / zero */

loc_001BA2F0: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001BA2F3: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001BA300
 * Original: 0x001BA300 - 0x001BA349 (73 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA300: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10001 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001BA335; /* jg: greater (signed >) */

loc_001BA30C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001BA32F; /* je: equal / zero */

loc_001BA30E: ;
    eax = ecx + -2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001BA335; /* ja: above (unsigned >) */

loc_001BA316: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1BA34C); /* switch: 11 entries, 4 targets */
    if (_jt == 0x001BA31Du) goto loc_001BA31D;
    if (_jt == 0x001BA323u) goto loc_001BA323;
    if (_jt == 0x001BA329u) goto loc_001BA329;
    if (_jt == 0x001BA335u) goto loc_001BA335;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001BA31D: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_001BA323: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_001BA329: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_001BA32F: ;
    eax = 0x10000;
    esp += 4; return; /* ret */

loc_001BA335: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BA33Bu); RECOMP_ABI_CALL(0x001BA290u, sub_001BA290); /* call 0x001BA290 */

loc_001BA33B: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BA345; /* jne: not equal / not zero */

loc_001BA342: ;
    eax = ecx;
    esp += 4; return; /* ret */

loc_001BA345: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_001BA380
 * Original: 0x001BA380 - 0x001BA3B0 (48 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BA380: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    PUSH32(esp, eax);
    ecx = ecx + edx;
    PUSH32(esp, 0x001BA39Du); RECOMP_ABI_CALL(0x0013A380u, sub_0013A380); /* call 0x0013A380 */

loc_001BA39D: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    MEM8(esi + 0x48) = 0;
    if (CMP_A(_fa, _fb)) goto loc_001BA3AA; /* ja: above (unsigned >) */

loc_001BA3A6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = edi;

loc_001BA3AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BA3B0
 * Original: 0x001BA3B0 - 0x001BA41B (107 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA3B0(void)
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

loc_001BA3B0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), 1 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_001BA3D1; /* jle: less or equal (signed <=) */

loc_001BA3C1: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001BA3DA;

loc_001BA3D1: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx + 4);
    MEM32(esi) = eax;

loc_001BA3DA: ;
    edx = MEM32(ecx + 0x50);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BA3FC; /* je: equal / zero */

loc_001BA3E2: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001BA3FA; /* jnp: not parity */

loc_001BA3EE: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BA3FC; /* jne: not equal / not zero */

loc_001BA3FA: ;
    SET_LO8(ebx, 0); /* xor self */

loc_001BA3FC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BA414; /* je: equal / zero */

loc_001BA401: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BA414; /* je: equal / zero */

loc_001BA405: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMD(0x3D45C8)); /* fld double */
    PUSH32(esp, 0x001BA412u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_001BA412: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */

loc_001BA414: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BA420
 * Original: 0x001BA420 - 0x001BA58B (363 bytes, 133 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA420(void)
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

loc_001BA420: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x18); /* fadd dword ptr [esi + 0x18] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001BA4EE; /* jnp: not parity */

loc_001BA437: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001BA4EE; /* jnp: not parity */

loc_001BA448: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x001BA457u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA457: ;
    eax = MEM32(esi + 0x58);
    edx = MEM32(0x5BB378);
    ecx = MEM32(0x5BB37C);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    MEM32(0x5BB378) = edx;
    MEM32(0x5BB37C) = ecx;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001BA4AA; /* je: equal / zero */

loc_001BA47E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BA483u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA483: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x58);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001BA493u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA493: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x001BA49Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA49B: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x001BA4A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA4A8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BA4AA: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0x1C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_001BA4C9; /* ja: above (unsigned >) */

loc_001BA4B8: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1BA58C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001BA4BFu) goto loc_001BA4BF;
    if (_jt == 0x001BA4C4u) goto loc_001BA4C4;
    if (_jt == 0x001BA4F0u) goto loc_001BA4F0;
    if (_jt == 0x001BA4FCu) goto loc_001BA4FC;
    if (_jt == 0x001BA515u) goto loc_001BA515;
    if (_jt == 0x001BA52Fu) goto loc_001BA52F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001BA4BF: ;
    eax = MEM32(esi + 0x58);
    goto loc_001BA4C9;

loc_001BA4C4: ;
    eax = MEM32(esi + 0x58);

loc_001BA4C7: ;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;

loc_001BA4C9: ;
    edi = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x001BA4E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA4E0: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    POP32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x001BA4EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA4EE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BA4F0: ;
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esi + 0x58);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    goto loc_001BA4C7;

loc_001BA4FC: ;
    ecx = MEM32(esi + 0x44);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001BA50B; /* jne: not equal / not zero */

loc_001BA505: ;
    eax = MEM32(esi + 0x58);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001BA54A;

loc_001BA50B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001BA512u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA512: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001BA54A;

loc_001BA515: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edi = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_001BA526; /* jne: not equal / not zero */

loc_001BA521: ;
    eax = MEM32(esi + 0x58);
    goto loc_001BA547;

loc_001BA526: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001BA52Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA52D: ;
    goto loc_001BA547;

loc_001BA52F: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edi = 2;
    if (TEST_NZ(_fa, _fb)) goto loc_001BA540; /* jne: not equal / not zero */

loc_001BA53B: ;
    eax = MEM32(esi + 0x58);
    goto loc_001BA547;

loc_001BA540: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001BA547u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA547: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;

loc_001BA54A: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001BA4C9; /* jle: less or equal (signed <=) */

loc_001BA554: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x001BA563u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA563: ;
    edx = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x128); PUSH32(esp, 0x001BA57Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA57B: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    POP32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x001BA589u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA589: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BA5B0
 * Original: 0x001BA5B0 - 0x001BA85B (683 bytes, 209 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA5B0(void)
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

loc_001BA5B0: ;
    esp = esp - 0x10C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x88;
    PUSH32(esp, 0x001BA5C7u); RECOMP_ABI_CALL(0x001ACD50u, sub_001ACD50); /* call 0x001ACD50 */

loc_001BA5C7: ;
    ecx = esp + 0x48;
    PUSH32(esp, 0x001BA5D0u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_001BA5D0: ;
    eax = MEM32(esp + 0x11C);
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = esp + 0x24;
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(eax)); /* fld float */
    ecx = esp + 0x18;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x18) = 0;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEM32(esp + 0x1C) = 0;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(esp + 0x20) = 0xBF800000u;
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x30) = eax;
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
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6E40); /* fmul dword ptr [0x3c6e40] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001BA687u); RECOMP_ABI_CALL(0x0023FB90u, sub_0023FB90); /* call 0x0023FB90 */

loc_001BA687: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CD304)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3cd304] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001BA6BF; /* jp: parity */

loc_001BA6B2: ;
    ecx = esp + 0x48;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x001BA6BDu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_001BA6BD: ;
    goto loc_001BA700;

loc_001BA6BF: ;
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    eax = MEM32(esp + 0xC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x001BA6F4u); RECOMP_ABI_CALL(0x001AA4B0u, sub_001AA4B0); /* call 0x001AA4B0 */

loc_001BA6F4: ;
    ecx = esp + 0x50;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001BA700u); RECOMP_ABI_CALL(0x00242790u, sub_00242790); /* call 0x00242790 */

loc_001BA700: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001BA708u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA708: ;
    ebp = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x44) = ebp;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001BA84F; /* jbe: below or equal (unsigned <=) */

loc_001BA718: ;
    fp_push(MEMF(esp + 0x120)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_001BA730: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001BA739u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA739: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BA75F; /* jne: not equal / not zero */

loc_001BA73F: ;
    esi = MEM32(edi + 8);
    ebp = MEM32(esi);
    eax = esp + 0x8C;
    edx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001BA753u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA753: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x60); PUSH32(esp, 0x001BA759u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA759: ;
    ebp = MEM32(esp + 0x48);
    esi = eax;

loc_001BA75F: ;
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x001BA76Cu); RECOMP_ABI_CALL(0x00344208u, sub_00344208); /* call 0x00344208 */

loc_001BA76C: ;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(0x3E89AC); /* fmul dword ptr [0x3e89ac] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BA79B; /* jne: not equal / not zero */

loc_001BA78E: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 0x10); /* fmul dword ptr [edi + 0x10] */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    goto loc_001BA79F;

loc_001BA79B: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_001BA79F: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = MEMF(esp + 0x34) / fp_top(); /* fdivr dword ptr [esp + 0x34] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = sin(fp_top()); /* fsin */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BA7F6; /* jne: not equal / not zero */

loc_001BA7CB: ;
    SET_LO8(eax, MEM8(edi + 0x1C));
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BA7E9; /* jne: not equal / not zero */

loc_001BA7D4: ;
    PUSH32(esp, 0x001BA7D9u); RECOMP_ABI_CALL(0x00344208u, sub_00344208); /* call 0x00344208 */

loc_001BA7D9: ;
    MEM32(esp + 0x24) = eax;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = fp_top() * MEMF(0x3E89AC); /* fmul dword ptr [0x3e89ac] */
    goto loc_001BA7ED;

loc_001BA7E9: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */

loc_001BA7ED: ;
    fp_top() = fp_top() * MEMF(edi + 0xC); /* fmul dword ptr [edi + 0xc] */
    fp_top() = fp_top() * MEMF(0x3C8328); /* fmul dword ptr [0x3c8328] */

loc_001BA7F6: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(esp + 0x34);
    fp_top() = cos(fp_top()); /* fcos */
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    MEM32(esp + 0x48) = edx;
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001BA827u); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_001BA827: ;
    edx = MEM32(esp + 0x38);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(esp + 0x3C);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(esp + 0x40);
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001BA845u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA845: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BA730; /* jb: below (unsigned <) */

loc_001BA84E: ;
    POP32(esp, esi);

loc_001BA84F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BA860
 * Original: 0x001BA860 - 0x001BAB35 (725 bytes, 231 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA860(void)
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

loc_001BA860: ;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001BA86Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA86F: ;
    SET_LO8(eax, MEM8(eax + 3));
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esp + 0xB) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001BA880u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA880: ;
    eax = MEM32(eax);
    edx = MEM32(esp + 0x64);
    eax = eax >> 0x14;
    eax = eax & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BAB11; /* jle: less or equal (signed <=) */

loc_001BA898: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x70);
    ecx = ebp * 4;
    edi = ebp + ebp * 2;
    ebx = ebp * 8;
    MEM32(esp + 0x14) = ecx;
    edi = edi + edi + 5;
    MEM32(esp + 0x30) = edx;
    goto loc_001BA8C2;

loc_001BA8BE: ;
    eax = MEM32(esp + 0x34);

loc_001BA8C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BA8D9; /* jne: not equal / not zero */

loc_001BA8C6: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001BA916;

loc_001BA8D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BA8F8; /* jne: not equal / not zero */

loc_001BA8DE: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(edx + ecx)); /* fld float */
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001BA916;

loc_001BA8F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BA916; /* jne: not equal / not zero */

loc_001BA8FD: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x3C);
    edx = MEM32(eax + ebx);
    eax = eax + ebx;
    eax = MEM32(eax + 4);
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;

loc_001BA916: ;
    eax = MEM32(esi + 0x24);
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_001BA96F; /* jne: not equal / not zero */

loc_001BA928: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001BA92Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA92E: ;
    eax = esi + 0xE8;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esp + 0x60;
    PUSH32(esp, 0x001BA943u); RECOMP_ABI_CALL(0x00240420u, sub_00240420); /* call 0x00240420 */

loc_001BA943: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x64); /* fdiv dword ptr [esp + 0x64] */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001BA98A;

loc_001BA96F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001BA975u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA975: ;
    eax = esi + 0xE8;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    PUSH32(esp, 0x001BA98Au); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_001BA98A: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BA99F; /* je: equal / zero */

loc_001BA992: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x001BA99Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BA99D: ;
    goto loc_001BA9A5;

loc_001BA99F: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_001BA9A5: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esp + 0x48);
    fp_top() = cos(fp_top()); /* fcos */
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0x54) = eax;
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = edi + -5;
    PUSH32(esp, eax);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esp + 0x4C); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001BAA20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAA20: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    ecx = MEM32(esp + 0x48);
    eax = esp + 0x4C;
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esi + 0x18);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    eax = edi + -4;
    PUSH32(esp, eax);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001BAA69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAA69: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001BAA77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAA77: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    ecx = MEM32(esp + 0x48);
    eax = esp + 0x4C;
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esi + 0x18);
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_top() = fp_top() + MEMF(esp + 0x48); /* fadd dword ptr [esp + 0x48] */
    eax = edi + -3;
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001BAAA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAAA8: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = edi + -1;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001BAAB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAAB9: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    ecx = MEM32(esp + 0x48);
    eax = esp + 0x4C;
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esi + 0x18);
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    eax = edi + -2;
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001BAAEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAAEA: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x30);
    ecx = ecx + 4;
    ebx = ebx + 8;
    edi = edi + 6;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x30) = eax;
    if ((_fa != 0)) goto loc_001BA8BE; /* jne: not equal / not zero */

loc_001BAB0B: ;
    edx = MEM32(esp + 0x6C);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001BAB11: ;
    eax = MEM32(esp + 0x68);
    esi = MEM32(esi + 0x14);
    edi = MEM32(esi);
    ecx = eax + eax * 2;
    ecx = ecx << 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = edx + edx;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x11C); PUSH32(esp, 0x001BAB2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAB2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x58;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BAB40
 * Original: 0x001BAB40 - 0x001BAD10 (464 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAB40(void)
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

loc_001BAB40: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x001BAB52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAB52: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    edi = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001BAB68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAB68: ;
    ecx = MEM32(esi + 0x168);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ecx = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_001BAB86; /* jne: not equal / not zero */

loc_001BAB7A: ;
    _fa = (uint32_t)(MEM32(esi + 0x16C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x16C), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BACF4; /* je: equal / zero */

loc_001BAB86: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esi + 0x168) = eax;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    eax = esi + 0x184;
    PUSH32(esp, eax);
    edi = esi + 0x180;
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    ebx = esi + 0x17C;
    PUSH32(esp, ebx);
    MEM32(esi + 0x16C) = ecx;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    ebp = esi + 0x178;
    PUSH32(esp, ebp);
    ecx = esi + 0x174;
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esi + 0x170;
    PUSH32(esp, edx);
    ecx = esi + 0x68;
    PUSH32(esp, 0x001BABE2u); RECOMP_ABI_CALL(0x0023F240u, sub_0023F240); /* call 0x0023F240 */

loc_001BABE2: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esi + 0x184);
    fp_top() = -fp_top(); /* fchs */
    ecx = MEM32(edi);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    ecx = esi + 0xA8;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001BAC15u); RECOMP_ABI_CALL(0x0023E890u, sub_0023E890); /* call 0x0023E890 */

loc_001BAC15: ;
    fp_push(MEMF(esi + 0x174)); /* fld float */
    ecx = esi + 0x128;
    fp_top() = fp_top() - MEMF(esi + 0x170); /* fsub dword ptr [esi + 0x170] */
    eax = 0; /* xor self */
    edx = 0xBF800000u;
    MEM32(esi + 0x138) = eax;
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEM32(esi + 0x158) = eax;
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x15C) = eax;
    MEM32(esi + 0x130) = eax;
    MEM32(esi + 0x140) = eax;
    MEM32(esi + 0x150) = eax;
    MEM32(esi + 0x160) = edx;
    MEM32(esi + 0x134) = eax;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x174)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x170); /* fadd dword ptr [esi + 0x170] */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esi + 0x13C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx); /* fadd dword ptr [ebx] */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esi + 0x14C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esi + 0x154) = edx;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEM32(esi + 0x144) = eax;
    MEM32(esi + 0x164) = eax;
    MEM32(esp + 0x2C) = 0x3F800000;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001BACF2u); RECOMP_ABI_CALL(0x0023E620u, sub_0023E620); /* call 0x0023E620 */

loc_001BACF2: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001BACF4: ;
    eax = esi + 0x128;
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    ecx = esi + 0xE8;
    PUSH32(esp, 0x001BAD0Au); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_001BAD0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BAD10
 * Original: 0x001BAD10 - 0x001BAD50 (64 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BAD10: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BAD29; /* je: equal / zero */

loc_001BAD1D: ;
    ecx = MEM32(esp + 4);
    ecx = ecx + ecx * 2;
    eax = eax + ecx * 4;
    goto loc_001BAD2B;

loc_001BAD29: ;
    eax = 0; /* xor self */

loc_001BAD2B: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BAD50
 * Original: 0x001BAD50 - 0x001BAD82 (50 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BAD50: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BAD69; /* je: equal / zero */

loc_001BAD5D: ;
    ecx = MEM32(esp + 4);
    ecx = ecx + ecx * 2;
    eax = eax + ecx * 4;
    goto loc_001BAD6B;

loc_001BAD69: ;
    eax = 0; /* xor self */

loc_001BAD6B: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BAD90
 * Original: 0x001BAD90 - 0x001BADC2 (50 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAD90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BAD90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    esi = 0; /* xor self */
    ebx = ecx;
    edi = edi << 1;

loc_001BADA5: ;
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edx = edi + esi;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x001BADB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BADB5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BADA5; /* jl: less (signed <) */

loc_001BADBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BADD0
 * Original: 0x001BADD0 - 0x001BAE02 (50 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BADD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BADD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    esi = 0; /* xor self */
    ebx = ecx;
    edi = edi << 1;

loc_001BADE5: ;
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edx = edi + esi;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x001BADF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BADF5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BADE5; /* jl: less (signed <) */

loc_001BADFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BAE10
 * Original: 0x001BAE10 - 0x001BAE28 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAE10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BAE10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    eax = eax + eax * 2;
    eax = eax << 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xA8)); return; /* indirect tail jmp */

}

/**
 * sub_001BAE30
 * Original: 0x001BAE30 - 0x001BAE48 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAE30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BAE30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    eax = eax + eax * 2;
    eax = eax << 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xA4)); return; /* indirect tail jmp */

}

/**
 * sub_001BAE50
 * Original: 0x001BAE50 - 0x001BAF36 (230 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAE50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BAE50: ;
    eax = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    esi = esi + esi * 2;
    edi = ecx;
    ecx = MEM32(edi + 0x18);
    esi = esi << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_001BAE7F; /* jne: not equal / not zero */

loc_001BAE72: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x001BAE7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAE7D: ;
    goto loc_001BAE8D;

loc_001BAE7F: ;
    edx = MEM32(ecx);
    eax = esi + 3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x001BAE8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAE8D: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ebx = esi + 2;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001BAEA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAEA3: ;
    edx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax << 2;
    ecx = MEM32(eax + ebp);
    MEM32(esp + eax + 0x10) = ecx;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x001BAECBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAECB: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x001BAEE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAEE1: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ebx = esi + 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001BAEF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAEF7: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + eax * 4);
    MEM32(esp + eax * 4 + 0x10) = ecx;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x001BAF16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAF16: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi = esi + 5;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x001BAF2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BAF2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BAF40
 * Original: 0x001BAF40 - 0x001BAF76 (54 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAF40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BAF40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esp + 8);
    MEM32(esp + 4) = 0;
    eax = eax + eax * 2;
    if (TEST_NZ(_fa, _fb)) goto loc_001BAF68; /* jne: not equal / not zero */

loc_001BAF5C: ;
    eax = eax << 1;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC8)); return; /* indirect tail jmp */

loc_001BAF68: ;
    eax = eax + eax + 3;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_001BAF80
 * Original: 0x001BAF80 - 0x001BAFBE (62 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAF80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BAF80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esp + 8);
    eax = eax + eax * 2;
    if (TEST_NZ(_fa, _fb)) goto loc_001BAFA8; /* jne: not equal / not zero */

loc_001BAF94: ;
    eax = eax << 1;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC4)); return; /* indirect tail jmp */

loc_001BAFA8: ;
    eax = eax + eax + 3;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC4)); return; /* indirect tail jmp */

}

/**
 * sub_001BAFC0
 * Original: 0x001BAFC0 - 0x001BAFCB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAFC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BAFC0: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xDC)); return; /* indirect tail jmp */

}

/**
 * sub_001BAFD0
 * Original: 0x001BAFD0 - 0x001BAFDB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAFD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BAFD0: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xE0)); return; /* indirect tail jmp */

}

/**
 * sub_001BAFE0
 * Original: 0x001BAFE0 - 0x001BB265 (645 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAFE0(void)
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

loc_001BAFE0: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax));
    esp = esp - 0x18;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_001BB01C; /* je: equal / zero */

loc_001BB002: ;
    edx = MEM32(edi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001BB00Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB00F: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001BB01Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB01C: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    edx = edx >> 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB046; /* je: equal / zero */

loc_001BB029: ;
    eax = MEM32(edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x001BB039u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB039: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001BB046u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB046: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB06B; /* je: equal / zero */

loc_001BB054: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x001BB05Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB05F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001BB06Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB06B: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(eax);
    ecx = ecx >> 4;
    ecx = ecx & 0xF;
    eax = ecx + -1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BB0CB; /* jle: less or equal (signed <=) */

loc_001BB08C: ;
    /* nop */

loc_001BB090: ;
    eax = MEM32(esp + 0x38);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x001BB0A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB0A0: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x14);
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x001BB0BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB0BD: ;
    eax = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BB090; /* jl: less (signed <) */

loc_001BB0C7: ;
    ecx = MEM32(esp + 0x1C);

loc_001BB0CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BB104; /* jle: less or equal (signed <=) */

loc_001BB0CF: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001BB0F2; /* jp: parity */

loc_001BB0EA: ;
    MEM32(esp + 0x1C) = 0;

loc_001BB0F2: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x001BB104u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB104: ;
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(ecx);
    eax = eax >> 8;
    eax = eax & 0xF;
    MEM32(esp + 0x1C) = eax;
    ebx = 0;
    if (0) goto loc_001BB149; /* jbe: below or equal (unsigned <=) */

loc_001BB11B: ;
    goto loc_001BB120;

    /* nop */

loc_001BB120: ;
    eax = MEM32(esp + 0x38);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001BB130u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB130: ;
    edx = MEM32(esi);
    eax = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x001BB140u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB140: ;
    eax = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BB120; /* jb: below (unsigned <) */

loc_001BB149: ;
    eax = MEM32(esp + 0x3C);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 2));
    ebx = 0;
    ecx = ecx & 0xF;
    MEM32(esp + 0x1C) = ecx;
    if (0) goto loc_001BB18F; /* jbe: below or equal (unsigned <=) */

loc_001BB160: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(edi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001BB175u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB175: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x001BB186u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB186: ;
    eax = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BB160; /* jb: below (unsigned <) */

loc_001BB18F: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    ebx = MEM32(esp + 0x38);
    edx = edx >> 0x14;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB1C3; /* jne: not equal / not zero */

loc_001BB1A4: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x001BB1AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB1AF: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x001BB1C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB1C3: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    edx = edx >> 0x14;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB201; /* jne: not equal / not zero */

loc_001BB1D4: ;
    eax = MEM32(edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x001BB1E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB1E4: ;
    edx = MEM32(esp + 0x1C);
    esp = esp - 8;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001BB201u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB201: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(eax);
    ecx = ecx >> 0x16;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB22F; /* je: equal / zero */

loc_001BB20F: ;
    edx = MEM32(edi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001BB21Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB21F: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x001BB22Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB22F: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    edx = edx >> 0x17;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB25D; /* je: equal / zero */

loc_001BB23D: ;
    eax = MEM32(edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x001BB24Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB24D: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001BB25Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB25D: ;
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
 * sub_001BB270
 * Original: 0x001BB270 - 0x001BB29B (43 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001BB270(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001BB270: ;
    eax = MEM32(ecx + 8);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    ecx = MEM32(eax + 0x3C);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = MEM32(esp + 4);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    eax = ecx + edx * 8;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BB2A0
 * Original: 0x001BB2A0 - 0x001BB30B (107 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB2A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB2A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001BB2ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB2AB: ;
    ebp = MEM32(eax);
    eax = ebp;
    eax = eax >> 0x14;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB2D6; /* je: equal / zero */

loc_001BB2B8: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    edi = MEM32(esi + 8);
    eax = eax & 3;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0xC));
    eax = eax << 2;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001BB2D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB2D3: ;
    MEM32(edi + 0x3C) = eax;

loc_001BB2D6: ;
    eax = MEM32(esi + 8);
    ecx = ebp;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM32(eax + 0x40) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001BB304; /* je: equal / zero */

loc_001BB2EA: ;
    edi = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    esi = MEM32(esi + 8);
    edi = edi << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001BB2FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB2FF: ;
    MEM32(esi + 0x4C) = eax;
    ebx = ebx + edi;

loc_001BB304: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BB310
 * Original: 0x001BB310 - 0x001BB373 (99 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001BB31Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB31B: ;
    ebp = MEM32(eax);
    ecx = ebp;
    ecx = ecx >> 0x16;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB346; /* je: equal / zero */

loc_001BB329: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ebx = MEM32(esi + 8);
    edi = eax + eax * 2;
    edi = edi << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001BB341u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB341: ;
    MEM32(ebx + 0x44) = eax;
    ebx = edi;

loc_001BB346: ;
    eax = ebp;
    eax = eax >> 0x17;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB36C; /* je: equal / zero */

loc_001BB34F: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    esi = MEM32(esi + 8);
    edi = eax + eax * 2;
    edi = edi << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001BB367u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB367: ;
    MEM32(esi + 0x48) = eax;
    ebx = ebx + edi;

loc_001BB36C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BB380
 * Original: 0x001BB380 - 0x001BB3C3 (67 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB380(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB380: ;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BB3C0; /* jle: less or equal (signed <=) */

loc_001BB391: ;
    PUSH32(esp, edi);

loc_001BB392: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    edi = MEM32(eax + esi * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esp + 0x20); PUSH32(esp, 0x001BB3A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB3A8: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BB3BD; /* jne: not equal / not zero */

loc_001BB3AF: ;
    eax = MEM32(ebx + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BB392; /* jl: less (signed <) */

loc_001BB3B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001BB3BD: ;
    eax = edi;
    POP32(esp, edi);

loc_001BB3C0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001BB3D0
 * Original: 0x001BB3D0 - 0x001BB429 (89 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB3D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB3D0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BB423; /* jle: less or equal (signed <=) */

loc_001BB3E3: ;
    PUSH32(esp, esi);

loc_001BB3E4: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(edx + 0x10);
    esi = MEM32(eax + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB407; /* je: equal / zero */

loc_001BB3F1: ;
    ecx = MEM32(0x5BB16C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001BB3FFu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BB3FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB407; /* je: equal / zero */

loc_001BB403: ;
    eax = esi;
    goto loc_001BB409;

loc_001BB407: ;
    eax = 0; /* xor self */

loc_001BB409: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB41B; /* jne: not equal / not zero */

loc_001BB412: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB422; /* je: equal / zero */

loc_001BB41B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BB3E4; /* jl: less (signed <) */

loc_001BB420: ;
    eax = 0; /* xor self */

loc_001BB422: ;
    POP32(esp, esi);

loc_001BB423: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BB430
 * Original: 0x001BB430 - 0x001BB47A (74 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BB430: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001BB43Eu); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_001BB43E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB473; /* je: equal / zero */

loc_001BB444: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    edi = MEM32(0x5BC944);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BB452u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB452: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB468; /* je: equal / zero */

loc_001BB456: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    edi = MEM32(0x5BC938);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BB464u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB464: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB473; /* jne: not equal / not zero */

loc_001BB468: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001BB473: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BB480
 * Original: 0x001BB480 - 0x001BB49C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BB480: ;
    ecx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB49B; /* je: equal / zero */

loc_001BB489: ;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB49B; /* je: equal / zero */

loc_001BB490: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB49B; /* jne: not equal / not zero */

loc_001BB496: ;
    eax = 1;

loc_001BB49B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BB4A0
 * Original: 0x001BB4A0 - 0x001BB61C (380 bytes, 140 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB4A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB4A0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001BB4B5u); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_001BB4B5: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    edi = eax;
    PUSH32(esp, 0x001BB4C3u); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_001BB4C3: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ebx = eax;
    PUSH32(esp, 0x001BB4D1u); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_001BB4D1: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    ebp = eax;
    PUSH32(esp, 0x001BB4DFu); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_001BB4DF: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x001BB4EFu); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_001BB4EF: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x001BB4FFu); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_001BB4FF: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x001BB50Fu); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_001BB50F: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x001BB51Fu); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_001BB51F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    edi = MEM32(esp + 0x28);
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001BB52E; /* je: equal / zero */

loc_001BB52B: ;
    MEM32(edi) = MEM32(edi) | 1;

loc_001BB52E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB535; /* je: equal / zero */

loc_001BB532: ;
    MEM32(edi) = MEM32(edi) | 2;

loc_001BB535: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB53C; /* je: equal / zero */

loc_001BB539: ;
    MEM32(edi) = MEM32(edi) | 4;

loc_001BB53C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB55D; /* je: equal / zero */

loc_001BB544: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001BB54Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB54B: ;
    edx = MEM32(edi);
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    edx = edx & 0xFFFFFF0Fu;
    ecx = ecx | edx;
    MEM32(edi) = ecx;

loc_001BB55D: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB57C; /* je: equal / zero */

loc_001BB565: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001BB56Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB56C: ;
    edx = MEM32(edi);
    ecx = 0; /* xor self */
    SET_HI8(ecx, LO8(eax));
    edx = edx & 0xFFFFF0FFu;
    ecx = ecx | edx;
    MEM32(edi) = ecx;

loc_001BB57C: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB58A; /* je: equal / zero */

loc_001BB584: ;
    MEM32(edi) = MEM32(edi) | 0x800000;

loc_001BB58A: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB598; /* je: equal / zero */

loc_001BB592: ;
    MEM32(edi) = MEM32(edi) | 0x400000;

loc_001BB598: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB5DD; /* je: equal / zero */

loc_001BB5A0: ;
    ebx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB5B8; /* je: equal / zero */

loc_001BB5A7: ;
    eax = MEM32(0x5BC3F4);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001BB5B4u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BB5B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BB5BA; /* jne: not equal / not zero */

loc_001BB5B8: ;
    ebx = 0; /* xor self */

loc_001BB5BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BB5D7; /* je: equal / zero */

loc_001BB5C3: ;
    edx = MEM32(edi);
    ecx = ZX8(LO8(eax));
    ecx = ecx << 0x14;
    edx = edx & 0xFFCFFFFFu;
    ecx = ecx | edx;
    MEM32(edi) = ecx;
    goto loc_001BB5DD;

loc_001BB5D7: ;
    MEM32(edi) = MEM32(edi) & 0xFFCFFFFFu;

loc_001BB5DD: ;
    ecx = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001BB5EAu); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_001BB5EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB600; /* je: equal / zero */

loc_001BB5EE: ;
    edi = edi;

loc_001BB5F0: ;
    ecx = MEM32(esi + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001BB5FCu); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_001BB5FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BB5F0; /* jne: not equal / not zero */

loc_001BB600: ;
    ecx = MEM32(edi);
    eax = ZX8(LO8(ebx));
    eax = eax << 0x10;
    ecx = ecx & 0xFFF0FFFFu;
    eax = eax | ecx;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BB620
 * Original: 0x001BB620 - 0x001BB6DC (188 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001BB620: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC3F4);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001BB634u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB634: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001BB6D6; /* je: equal / zero */

loc_001BB63C: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    edi = MEM32(0x5BC428);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BB64Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB64A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001BB6D6; /* je: equal / zero */

loc_001BB652: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    edi = MEM32(0x5BC3F8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001BB660u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB660: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001BB6D6; /* je: equal / zero */

loc_001BB664: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    edi = MEM32(0x5BC400);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BB672u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB672: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001BB6D6; /* je: equal / zero */

loc_001BB676: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    edi = MEM32(0x5BC408);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001BB684u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB684: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001BB6D6; /* je: equal / zero */

loc_001BB688: ;
    edx = MEM32(0x5BC94C);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BB697u); RECOMP_ABI_CALL(0x001309D0u, sub_001309D0); /* call 0x001309D0 */

loc_001BB697: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001BB6A3; /* je: equal / zero */

loc_001BB69B: ;
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BB6A3: ;
    eax = MEM32(0x5BC944);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BB6B1u); RECOMP_ABI_CALL(0x001309D0u, sub_001309D0); /* call 0x001309D0 */

loc_001BB6B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001BB6BD; /* je: equal / zero */

loc_001BB6B5: ;
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BB6BD: ;
    edx = MEM32(0x5BC938);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BB6CCu); RECOMP_ABI_CALL(0x001309D0u, sub_001309D0); /* call 0x001309D0 */

loc_001BB6CC: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, edi);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    esp += 4; return; /* ret */

loc_001BB6D6: ;
    eax = MEM32(esi + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BB6E0
 * Original: 0x001BB6E0 - 0x001BB736 (86 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BB6E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC3F8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001BB6F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB6F4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB6FE; /* jne: not equal / not zero */

loc_001BB6F8: ;
    eax = MEM32(esi + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BB6FE: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    edi = MEM32(0x5BC940);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BB70Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB70C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BB718; /* jne: not equal / not zero */

loc_001BB710: ;
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BB718: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    esi = MEM32(0x5BC930);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001BB726u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB726: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 4;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001BB740
 * Original: 0x001BB740 - 0x001BB7CB (139 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB740(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB740: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_001BB79F; /* ja: above (unsigned >) */

loc_001BB752: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1BB7CC); /* switch: 10 entries, 10 targets */
    if (_jt == 0x001BB759u) goto loc_001BB759;
    if (_jt == 0x001BB760u) goto loc_001BB760;
    if (_jt == 0x001BB767u) goto loc_001BB767;
    if (_jt == 0x001BB76Eu) goto loc_001BB76E;
    if (_jt == 0x001BB775u) goto loc_001BB775;
    if (_jt == 0x001BB77Cu) goto loc_001BB77C;
    if (_jt == 0x001BB783u) goto loc_001BB783;
    if (_jt == 0x001BB78Au) goto loc_001BB78A;
    if (_jt == 0x001BB791u) goto loc_001BB791;
    if (_jt == 0x001BB798u) goto loc_001BB798;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001BB759: ;
    PUSH32(esp, 0x001BB75Eu); RECOMP_ABI_CALL(0x001AD4B0u, sub_001AD4B0); /* call 0x001AD4B0 */

loc_001BB75E: ;
    goto loc_001BB79D;

loc_001BB760: ;
    PUSH32(esp, 0x001BB765u); RECOMP_ABI_CALL(0x001AD500u, sub_001AD500); /* call 0x001AD500 */

loc_001BB765: ;
    goto loc_001BB79D;

loc_001BB767: ;
    PUSH32(esp, 0x001BB76Cu); RECOMP_ABI_CALL(0x001AD550u, sub_001AD550); /* call 0x001AD550 */

loc_001BB76C: ;
    goto loc_001BB79D;

loc_001BB76E: ;
    PUSH32(esp, 0x001BB773u); RECOMP_ABI_CALL(0x001AD590u, sub_001AD590); /* call 0x001AD590 */

loc_001BB773: ;
    goto loc_001BB79D;

loc_001BB775: ;
    PUSH32(esp, 0x001BB77Au); RECOMP_ABI_CALL(0x001AD5D0u, sub_001AD5D0); /* call 0x001AD5D0 */

loc_001BB77A: ;
    goto loc_001BB79D;

loc_001BB77C: ;
    PUSH32(esp, 0x001BB781u); RECOMP_ABI_CALL(0x001AD630u, sub_001AD630); /* call 0x001AD630 */

loc_001BB781: ;
    goto loc_001BB79D;

loc_001BB783: ;
    PUSH32(esp, 0x001BB788u); RECOMP_ABI_CALL(0x001AD680u, sub_001AD680); /* call 0x001AD680 */

loc_001BB788: ;
    goto loc_001BB79D;

loc_001BB78A: ;
    PUSH32(esp, 0x001BB78Fu); RECOMP_ABI_CALL(0x001AD6C0u, sub_001AD6C0); /* call 0x001AD6C0 */

loc_001BB78F: ;
    goto loc_001BB79D;

loc_001BB791: ;
    PUSH32(esp, 0x001BB796u); RECOMP_ABI_CALL(0x001AD700u, sub_001AD700); /* call 0x001AD700 */

loc_001BB796: ;
    goto loc_001BB79D;

loc_001BB798: ;
    PUSH32(esp, 0x001BB79Du); RECOMP_ABI_CALL(0x001AD750u, sub_001AD750); /* call 0x001AD750 */

loc_001BB79D: ;
    esi = eax;

loc_001BB79F: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BB7BB; /* je: equal / zero */

loc_001BB7A5: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001BB7ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB7AD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB7C3; /* je: equal / zero */

loc_001BB7B1: ;
    edi = MEM32(esi + 4);
    esi = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BB7A5; /* jne: not equal / not zero */

loc_001BB7BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001BB7C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BB800
 * Original: 0x001BB800 - 0x001BB8B0 (176 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB800(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB800: ;
    eax = MEM32(esp + 8);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x54) = eax;
    eax = MEM32(esi + 0x58);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x48) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_001BB84F; /* jbe: below or equal (unsigned <=) */

loc_001BB820: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BB836; /* je: equal / zero */

loc_001BB827: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x001BB833u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB833: ;
    MEM32(esi + 0x50) = ebx;

loc_001BB836: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    edx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    edx = edx << 6;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x001BB849u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB849: ;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x58) = ebp;

loc_001BB84F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    edi = MEM32(esi + 0x50);
    if (CMP_BE(_fa, _fb)) goto loc_001BB89C; /* jbe: below or equal (unsigned <=) */

loc_001BB856: ;
    eax = MEM32(esi + 0x54);
    eax = eax + ebx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001BB868u); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_001BB868: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x001BB88Cu); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_001BB88C: ;
    ecx = edi;
    PUSH32(esp, 0x001BB893u); RECOMP_ABI_CALL(0x002423F0u, sub_002423F0); /* call 0x002423F0 */

loc_001BB893: ;
    edi = edi + 0x40;
    ebx = ebx + 0x40;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BB856; /* jne: not equal / not zero */

loc_001BB89C: ;
    eax = MEM32(esi + 0x4C);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x4C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BB8B0
 * Original: 0x001BB8B0 - 0x001BBD3C (1164 bytes, 341 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB8B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB8B0: ;
    eax = MEM32(0x5BC508);
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x38);
    _fa = (uint32_t)(MEM8(esp + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x20), 1 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001BB90C; /* je: equal / zero */

loc_001BB8C7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x001BB8D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB8D1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x001BB8DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB8DD: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x1CC); PUSH32(esp, 0x001BB90Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB90C: ;
    _fa = (uint32_t)(MEM8(esp + 0x28)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x28), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBA26; /* je: equal / zero */

loc_001BB917: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0x3F800000;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x001BB946u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB946: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x001BB952u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB952: ;
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0x3F800000;
    { uint32_t _icall_target = MEM32(eax + 0x198); PUSH32(esp, 0x001BB981u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB981: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    { uint32_t _icall_target = MEM32(edx + 0x1A0); PUSH32(esp, 0x001BB9B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB9B0: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    { uint32_t _icall_target = MEM32(edx + 0x1A8); PUSH32(esp, 0x001BB9DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BB9DF: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    { uint32_t _icall_target = MEM32(edx + 0x1B0); PUSH32(esp, 0x001BBA0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBA0E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x001BBA1Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBA1A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x001BBA26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBA26: ;
    _fa = (uint32_t)(MEM8(esp + 0x28)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x28), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBA9C; /* je: equal / zero */

loc_001BBA2D: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001BBA3Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBA3A: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x200 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001BBA55; /* jg: greater (signed >) */

loc_001BBA44: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BBA50; /* jle: less or equal (signed <=) */

loc_001BBA49: ;
    ebp = 0x10;
    goto loc_001BBA5A;

loc_001BBA50: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BBA5A; /* jge: greater or equal (signed >=) */

loc_001BBA55: ;
    ebp = 1;

loc_001BBA5A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BBA9B; /* jle: less or equal (signed <=) */

loc_001BBA60: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1D4); PUSH32(esp, 0x001BBA6Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBA6D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x001BBA7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBA7A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x25C); PUSH32(esp, 0x001BBA89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBA89: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x348); PUSH32(esp, 0x001BBA96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBA96: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BBA60; /* jl: less (signed <) */

loc_001BBA9B: ;
    POP32(esp, ebp);

loc_001BBA9C: ;
    _fa = (uint32_t)(MEM8(esp + 0x28)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x28), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBABD; /* je: equal / zero */

loc_001BBAA3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x264); PUSH32(esp, 0x001BBAAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBAAF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x27C); PUSH32(esp, 0x001BBABDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBABD: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_001BBB11; /* jns: not sign (positive) */

loc_001BBAC5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x280); PUSH32(esp, 0x001BBAD1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBAD1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x288); PUSH32(esp, 0x001BBADDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBADD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x001BBAE9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBAE9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2A0); PUSH32(esp, 0x001BBAF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBAF5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2A8); PUSH32(esp, 0x001BBB01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBB01: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x298); PUSH32(esp, 0x001BBB11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBB11: ;
    _fa = (uint32_t)(MEM8(esp + 0x28)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x28), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBB89; /* je: equal / zero */

loc_001BBB18: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C8); PUSH32(esp, 0x001BBB24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBB24: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3D0); PUSH32(esp, 0x001BBB30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBB30: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3D8); PUSH32(esp, 0x001BBB3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBB3C: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    { uint32_t _icall_target = MEM32(edx + 0x3E0); PUSH32(esp, 0x001BBB6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBB6B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3E8); PUSH32(esp, 0x001BBB7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBB7A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x447A0000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3F0); PUSH32(esp, 0x001BBB89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBB89: ;
    _fa = (uint32_t)(MEM8(esp + 0x28)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x28), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBC30; /* je: equal / zero */

loc_001BBB94: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E89D4);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BBBAAu); RECOMP_ABI_CALL(0x001A5950u, sub_001A5950); /* call 0x001A5950 */

loc_001BBBAA: ;
    edx = MEM32(esi);
    esp = esp + 0x18;
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    { uint32_t _icall_target = MEM32(edx + 0x2CC); PUSH32(esp, 0x001BBBDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBBDC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2D8); PUSH32(esp, 0x001BBBEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBBEB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2E0); PUSH32(esp, 0x001BBBF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBBF7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x350); PUSH32(esp, 0x001BBC03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBC03: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x380); PUSH32(esp, 0x001BBC0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBC0F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x388); PUSH32(esp, 0x001BBC21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBC21: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x390); PUSH32(esp, 0x001BBC30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBC30: ;
    _fa = (uint32_t)(MEM8(esp + 0x28)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x28), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBD33; /* je: equal / zero */

loc_001BBC3B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E89C8);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BBC51u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001BBC51: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E89BC);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BBC67u); RECOMP_ABI_CALL(0x001A5950u, sub_001A5950); /* call 0x001A5950 */

loc_001BBC67: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E89B0);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BBC7Du); RECOMP_ABI_CALL(0x001A5950u, sub_001A5950); /* call 0x001A5950 */

loc_001BBC7D: ;
    edx = MEM32(esi);
    esp = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x368); PUSH32(esp, 0x001BBC8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBC8C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x370); PUSH32(esp, 0x001BBC98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBC98: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x378); PUSH32(esp, 0x001BBCA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBCA4: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x398); PUSH32(esp, 0x001BBCB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBCB3: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3A0); PUSH32(esp, 0x001BBCC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBCC2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3A8); PUSH32(esp, 0x001BBCCEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBCCE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3B0); PUSH32(esp, 0x001BBCDAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBCDA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3B8); PUSH32(esp, 0x001BBCE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBCE6: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C0); PUSH32(esp, 0x001BBCF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBCF5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x248); PUSH32(esp, 0x001BBD01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBD01: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2FC); PUSH32(esp, 0x001BBD0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBD0D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x001BBD1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBD1B: ;
    edi = 1;

loc_001BBD20: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xE4); PUSH32(esp, 0x001BBD2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BBD2D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BBD20; /* jl: less (signed <) */

loc_001BBD33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BBD40
 * Original: 0x001BBD40 - 0x001BBD54 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001BBD40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BBD40: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBD4F; /* je: equal / zero */

loc_001BBD47: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x8C)); return; /* indirect tail jmp */

loc_001BBD4F: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BBD60
 * Original: 0x001BBD60 - 0x001BBD7F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BBD60: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3E76FC;
    if (TEST_Z(_fa, _fb)) goto loc_001BBD79; /* je: equal / zero */

loc_001BBD70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BBD76u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001BBD76: ;
    esp = esp + 4;

loc_001BBD79: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BBD80
 * Original: 0x001BBD80 - 0x001BBDEE (110 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBD80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BBD80: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001BBDCC; /* je: equal / zero */

loc_001BBD8D: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 4;
    esi = esi + edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001BBDB5; /* js: sign (negative) */

loc_001BBD9F: ;
    edi = eax + 1;

loc_001BBDA2: ;
    esi = esi - 0x10;
    ecx = esi;
    MEM32(esi) = 0x3E7700;
    PUSH32(esp, 0x001BBDB2u); RECOMP_ABI_CALL(0x001ADC00u, sub_001ADC00); /* call 0x001ADC00 */

loc_001BBDB2: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BBDA2; /* jne: not equal / not zero */

loc_001BBDB5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBDC3; /* je: equal / zero */

loc_001BBDBA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001BBDC0u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001BBDC0: ;
    esp = esp + 4;

loc_001BBDC3: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001BBDCC: ;
    ecx = edi;
    MEM32(edi) = 0x3E7700;
    PUSH32(esp, 0x001BBDD9u); RECOMP_ABI_CALL(0x001ADC00u, sub_001ADC00); /* call 0x001ADC00 */

loc_001BBDD9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBDE7; /* je: equal / zero */

loc_001BBDDE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BBDE4u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001BBDE4: ;
    esp = esp + 4;

loc_001BBDE7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BBDF0
 * Original: 0x001BBDF0 - 0x001BBE4D (93 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BBDF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = ebx + 8;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001BBE06u); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001BBE06: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBE20; /* je: equal / zero */

loc_001BBE0D: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBE20; /* je: equal / zero */

loc_001BBE13: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edi + 4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001BBE1E; /* jl: less (signed <) */

loc_001BBE1C: ;
    eax = esi;

loc_001BBE1E: ;
    MEM32(edi) = eax;

loc_001BBE20: ;
    edi = ebx + 0x10;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001BBE2Du); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001BBE2D: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBE47; /* je: equal / zero */

loc_001BBE34: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBE47; /* je: equal / zero */

loc_001BBE3A: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(eax + 4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001BBE45; /* jl: less (signed <) */

loc_001BBE43: ;
    ecx = esi;

loc_001BBE45: ;
    MEM32(eax) = ecx;

loc_001BBE47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BBE50
 * Original: 0x001BBE50 - 0x001BBEC6 (118 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBE50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BBE50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001BBE67; /* je: equal / zero */

loc_001BBE5F: ;
    eax = MEM32(eax);
    MEM32(esp + 0xC) = eax;
    goto loc_001BBE6B;

loc_001BBE67: ;
    MEM32(esp + 0xC) = ebx;

loc_001BBE6B: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x001BBE7Bu); RECOMP_ABI_CALL(0x001ADC90u, sub_001ADC90); /* call 0x001ADC90 */

loc_001BBE7B: ;
    esi = eax;
    eax = MEM32(esp + 0xC);
    edx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BBEBD; /* jle: less or equal (signed <=) */

loc_001BBE8A: ;
    PUSH32(esp, edi);
    edi = 0xC;

loc_001BBE90: ;
    eax = MEM32(ebp + 8);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BBE9Bu); RECOMP_ABI_CALL(0x001ADC90u, sub_001ADC90); /* call 0x001ADC90 */

loc_001BBE9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BBEA7; /* jge: greater or equal (signed >=) */

loc_001BBE9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = eax;
    ebx = edx;
    if (TEST_Z(_fa, _fb)) goto loc_001BBEB3; /* je: equal / zero */

loc_001BBEA7: ;
    eax = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BBE90; /* jl: less (signed <) */

loc_001BBEB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001BBEBD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BBED0
 * Original: 0x001BBED0 - 0x001BBF6F (159 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BBED0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBEE1; /* je: equal / zero */

loc_001BBEDD: ;
    edx = MEM32(eax);
    goto loc_001BBEE3;

loc_001BBEE1: ;
    edx = 0; /* xor self */

loc_001BBEE3: ;
    ebx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BBF05; /* jle: less or equal (signed <=) */

loc_001BBEF1: ;
    ecx = MEM32(edi + 8);
    esi = MEM32(ebx);

loc_001BBEF6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 4 + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + eax * 4 + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BBF1B; /* je: equal / zero */

loc_001BBEFC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BBEF6; /* jl: less (signed <) */

loc_001BBF05: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = edi + 8;
    MEM32(esp + 0xC) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_001BBF2E; /* je: equal / zero */

loc_001BBF17: ;
    ecx = MEM32(ecx);
    goto loc_001BBF30;

loc_001BBF1B: ;
    ecx = MEM32(edi + 0x10);
    eax = ecx + eax * 4 + 8;
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001BBF2E: ;
    ecx = 0; /* xor self */

loc_001BBF30: ;
    esi = edx + edx + 1;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BBF41u); RECOMP_ABI_CALL(0x001AEC40u, sub_001AEC40); /* call 0x001AEC40 */

loc_001BBF41: ;
    ecx = MEM32(edi + 0x10);
    eax = edi + 0x10;
    esp = esp + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BBF52; /* je: equal / zero */

loc_001BBF4E: ;
    ecx = MEM32(ecx);
    goto loc_001BBF54;

loc_001BBF52: ;
    ecx = 0; /* xor self */

loc_001BBF54: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BBF65u); RECOMP_ABI_CALL(0x001AEC40u, sub_001AEC40); /* call 0x001AEC40 */

loc_001BBF65: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BBF70
 * Original: 0x001BBF70 - 0x001BBFD8 (104 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBF70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BBF70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001BBF8A; /* je: equal / zero */

loc_001BBF86: ;
    ecx = MEM32(ecx);
    goto loc_001BBF8C;

loc_001BBF8A: ;
    ecx = 0; /* xor self */

loc_001BBF8C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BBFD2; /* jle: less or equal (signed <=) */

loc_001BBF90: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 8;
    ebp = ecx;
    /* nop */

loc_001BBFA0: ;
    eax = MEM32(ebx + 8);
    eax = eax + esi;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001BBFADu); RECOMP_ABI_CALL(0x001BBE50u, sub_001BBE50); /* call 0x001BBE50 */

loc_001BBFAD: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(edi + 0x14);
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    ecx = edx + eax * 4;
    PUSH32(esp, 0x001BBFBEu); RECOMP_ABI_CALL(0x001ADC90u, sub_001ADC90); /* call 0x001ADC90 */

loc_001BBFBE: ;
    edx = MEM32(esp + 0x10);
    edx = edx + eax;
    esi = esi + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    if ((_fa != 0)) goto loc_001BBFA0; /* jne: not equal / not zero */

loc_001BBFCE: ;
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ebp);

loc_001BBFD2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BBFE0
 * Original: 0x001BBFE0 - 0x001BC419 (1081 bytes, 353 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBFE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BBFE0: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = esi + 8;
    PUSH32(esp, edi);
    ebp = 3;
    if (TEST_Z(_fa, _fb)) goto loc_001BBFFD; /* je: equal / zero */

loc_001BBFF8: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BC023; /* jge: greater or equal (signed >=) */

loc_001BBFFD: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001BC007u); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001BC007: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC021; /* je: equal / zero */

loc_001BC00E: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC021; /* je: equal / zero */

loc_001BC014: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(eax + 4) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001BC01F; /* jl: less (signed <) */

loc_001BC01D: ;
    ecx = ebp;

loc_001BC01F: ;
    MEM32(eax) = ecx;

loc_001BC021: ;
    eax = MEM32(ebx);

loc_001BC023: ;
    edi = esi + 0x10;
    MEM32(eax) = ebp;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC037; /* je: equal / zero */

loc_001BC02E: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC037; /* jl: less (signed <) */

loc_001BC033: ;
    MEM32(eax) = ebp;
    goto loc_001BC05F;

loc_001BC037: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x001BC041u); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001BC041: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC05B; /* je: equal / zero */

loc_001BC048: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC05B; /* je: equal / zero */

loc_001BC04E: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(eax + 4) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001BC059; /* jl: less (signed <) */

loc_001BC057: ;
    ecx = ebp;

loc_001BC059: ;
    MEM32(eax) = ecx;

loc_001BC05B: ;
    ecx = MEM32(edi);
    MEM32(ecx) = ebp;

loc_001BC05F: ;
    edx = MEM32(ebx);
    eax = 0; /* xor self */
    edx = edx + 8;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ebp = 0x40000000;
    if (CMP_EQ(_fa, _fb)) goto loc_001BC08B; /* je: equal / zero */

loc_001BC083: ;
    edx = MEM32(eax);
    MEM32(esp + 0x14) = edx;
    goto loc_001BC091;

loc_001BC08B: ;
    MEM32(esp + 0x14) = ecx;
    edx = ecx;

loc_001BC091: ;
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001BC183; /* jle: less or equal (signed <=) */

loc_001BC0A0: ;
    edi = 8;
    MEM32(esp + 0x1C) = edi;
    /* nop */

loc_001BC0B0: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x18) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001BC169; /* jge: greater or equal (signed >=) */

loc_001BC0C5: ;
    edi = edi + 4;
    goto loc_001BC0D0;

    /* nop */

loc_001BC0D0: ;
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0x1C);
    ecx = edi + eax;
    eax = eax + edx;
    edx = MEM32(esi + 0x14);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax);
    MEM32(edx) = eax;
    edx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    MEM32(esp + 0x20) = ecx;
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x20);
    mm2 = MMX_PXOR(mm2, mm2); /* pxor */
    mm0 = MMX_FROM32(MEM32(eax)); /* movd */
    mm1 = MMX_FROM32(MEM32(ebx)); /* movd */
    mm0 = MMX_PUNPCKLBW(mm0, mm2); /* punpcklbw */
    mm1 = MMX_PUNPCKLBW(mm1, mm2); /* punpcklbw */
    mm0 = MMX_PADDW(mm0, mm1); /* paddw */
    mm0 = MMX_PSRLW(mm0, 1u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm2); /* packuswb */
    MEM32(esp + 0x28) = mm0.ud[0]; /* movd */
    (void)0; /* emms - empty MMX state */
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x50);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001BC135u); RECOMP_ABI_CALL(0x001BBF70u, sub_001BBF70); /* call 0x001BBF70 */

loc_001BC135: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BC14B; /* jge: greater or equal (signed >=) */

loc_001BC139: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    ebp = eax;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;

loc_001BC14B: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BC0D0; /* jl: less (signed <) */

loc_001BC163: ;
    eax = MEM32(esp + 0x2C);
    edx = ecx;

loc_001BC169: ;
    edi = MEM32(esp + 0x1C);
    edi = edi + 4;
    ecx = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001BC0B0; /* jl: less (signed <) */

loc_001BC183: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 0x40);
    eax = MEM32(ecx + edx * 4 + 8);
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x38) = eax;
    ecx = MEM32(ecx + edx * 4 + 8);
    MEM32(esp + 0x3C) = ecx;
    edx = esp + 0x34;
    ecx = esp + 0x30;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = ecx;
    edi = 0; /* xor self */
    goto loc_001BC1C0;

loc_001BC1B6: ;
    eax = MEM32(esp + 0x38);
    /* nop */

loc_001BC1C0: ;
    edx = MEM32(esp + 0x3C);
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x30) = eax;
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esp + 0x34);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x2C);
    mm2 = MMX_PXOR(mm2, mm2); /* pxor */
    mm0 = MMX_FROM32(MEM32(eax)); /* movd */
    mm1 = MMX_FROM32(MEM32(ebx)); /* movd */
    mm0 = MMX_PUNPCKLBW(mm0, mm2); /* punpcklbw */
    mm1 = MMX_PUNPCKLBW(mm1, mm2); /* punpcklbw */
    mm0 = MMX_PADDW(mm0, mm1); /* paddw */
    mm0 = MMX_PSRLW(mm0, 1u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm2); /* packuswb */
    MEM32(esp + 0x24) = mm0.ud[0]; /* movd */
    (void)0; /* emms - empty MMX state */
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = edx;
    eax = ZX8(MEM8(esp + edi + 0x31));
    eax = eax - 0xC;
    edx = 0;
    SET_LO8(edx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    ecx = eax + 0x18;
    MEM32(esp + 0x1C) = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BC23B; /* jle: less or equal (signed <=) */

loc_001BC22F: ;
    MEM32(esp + 0x1C) = 0xFF;
    ecx = MEM32(esp + 0x1C);

loc_001BC23B: ;
    eax = ZX8(MEM8(esp + edi + 0x35));
    eax = eax - 0xC;
    ebx = eax + 0x18;
    MEM32(esp + 0x4C) = ebx;
    ebx = 0;
    SET_LO8(ebx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & eax;
    MEM32(esp + 0x18) = ebx;
    ebx = MEM32(esp + 0x4C);
    eax = 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BC26A; /* jle: less or equal (signed <=) */

loc_001BC266: ;
    MEM32(esp + 0x4C) = eax;

loc_001BC26A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = edx;
    MEM32(esp + 0x10) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001BC2F2; /* jg: greater (signed >) */

loc_001BC274: ;
    ebx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x4C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM8(esp + edi + 0x31) = LO8(eax);
    if (CMP_G(_fas, _fbs)) goto loc_001BC2E7; /* jg: greater (signed >) */

loc_001BC284: ;
    eax = MEM32(esi + 0x14);
    MEM8(esp + edi + 0x35) = LO8(ebx);
    SET_LO8(ecx, MEM8(esp + edi + 0x31));
    MEM8(edi + eax + 1) = LO8(ecx);
    edx = MEM32(esi + 0x14);
    SET_LO8(eax, MEM8(esp + edi + 0x35));
    MEM8(edi + edx + 9) = LO8(eax);
    ecx = ZX8(MEM8(esp + edi + 0x35));
    eax = ZX8(MEM8(esp + edi + 0x31));
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esi + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM8(edi + edx + 5) = LO8(eax);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001BC2C2u); RECOMP_ABI_CALL(0x001BBF70u, sub_001BBF70); /* call 0x001BBF70 */

loc_001BC2C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BC2D4; /* jge: greater or equal (signed >=) */

loc_001BC2C6: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(esp + edi + 0x39) = LO8(ecx);
    ebp = eax;
    MEM8(esp + edi + 0x3D) = LO8(ebx);

loc_001BC2D4: ;
    eax = MEM32(esp + 0x4C);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BC284; /* jle: less or equal (signed <=) */

loc_001BC2DF: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);

loc_001BC2E7: ;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001BC274; /* jle: less or equal (signed <=) */

loc_001BC2F2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC1B6; /* jl: less (signed <) */

loc_001BC2FF: ;
    edx = MEM32(esi + 0x14);
    eax = esp + 0x3C;
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0x38);
    ecx = esp + 0x38;
    MEM32(edx) = eax;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 8) = edx;
    eax = MEM32(esp + 0x50);
    ebx = MEM32(esp + 0x4C);
    mm2 = MMX_PXOR(mm2, mm2); /* pxor */
    mm0 = MMX_FROM32(MEM32(eax)); /* movd */
    mm1 = MMX_FROM32(MEM32(ebx)); /* movd */
    mm0 = MMX_PUNPCKLBW(mm0, mm2); /* punpcklbw */
    mm1 = MMX_PUNPCKLBW(mm1, mm2); /* punpcklbw */
    mm0 = MMX_PADDW(mm0, mm1); /* paddw */
    mm0 = MMX_PSRLW(mm0, 1u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm2); /* packuswb */
    MEM32(esp + 0x2C) = mm0.ud[0]; /* movd */
    (void)0; /* emms - empty MMX state */
    eax = MEM32(esi + 0x14);
    edi = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x2C);
    ebx = edi + 8;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC36F; /* je: equal / zero */

loc_001BC361: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC36F; /* jl: less (signed <) */

loc_001BC367: ;
    MEM32(eax) = 3;
    goto loc_001BC3A6;

loc_001BC36F: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    ecx = 3;
    PUSH32(esp, 0x001BC37Cu); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001BC37C: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC39E; /* je: equal / zero */

loc_001BC383: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC39E; /* je: equal / zero */

loc_001BC389: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    MEM32(eax + 4) = 3;
    if (CMP_L(_fas, _fbs)) goto loc_001BC39C; /* jl: less (signed <) */

loc_001BC397: ;
    ecx = 3;

loc_001BC39C: ;
    MEM32(eax) = ecx;

loc_001BC39E: ;
    edx = MEM32(ebx);
    MEM32(edx) = 3;

loc_001BC3A6: ;
    eax = MEM32(edi + 0x10);
    edi = edi + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC3B6; /* je: equal / zero */

loc_001BC3B0: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BC3E7; /* jge: greater or equal (signed >=) */

loc_001BC3B6: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = 3;
    PUSH32(esp, 0x001BC3C3u); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001BC3C3: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC3E5; /* je: equal / zero */

loc_001BC3CA: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC3E5; /* je: equal / zero */

loc_001BC3D0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    MEM32(eax + 4) = 3;
    if (CMP_L(_fas, _fbs)) goto loc_001BC3E3; /* jl: less (signed <) */

loc_001BC3DE: ;
    ecx = 3;

loc_001BC3E3: ;
    MEM32(eax) = ecx;

loc_001BC3E5: ;
    eax = MEM32(edi);

loc_001BC3E7: ;
    MEM32(eax) = 3;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    edx = MEM32(ebx);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ebx);
    eax = MEM32(ecx + 4);
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ebx);
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x10) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BC420
 * Original: 0x001BC420 - 0x001BC794 (884 bytes, 304 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC420: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = edi + 8;
    ebp = 4;
    if (TEST_Z(_fa, _fb)) goto loc_001BC43D; /* je: equal / zero */

loc_001BC438: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BC462; /* jge: greater or equal (signed >=) */

loc_001BC43D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001BC446u); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001BC446: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC460; /* je: equal / zero */

loc_001BC44D: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC460; /* je: equal / zero */

loc_001BC453: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(eax + 4) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001BC45E; /* jl: less (signed <) */

loc_001BC45C: ;
    ecx = ebp;

loc_001BC45E: ;
    MEM32(eax) = ecx;

loc_001BC460: ;
    eax = MEM32(ebx);

loc_001BC462: ;
    esi = edi + 0x10;
    MEM32(eax) = ebp;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC476; /* je: equal / zero */

loc_001BC46D: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC476; /* jl: less (signed <) */

loc_001BC472: ;
    MEM32(eax) = ebp;
    goto loc_001BC49D;

loc_001BC476: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x001BC47Fu); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001BC47F: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC499; /* je: equal / zero */

loc_001BC486: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC499; /* je: equal / zero */

loc_001BC48C: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(eax + 4) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001BC497; /* jl: less (signed <) */

loc_001BC495: ;
    ecx = ebp;

loc_001BC497: ;
    MEM32(eax) = ecx;

loc_001BC499: ;
    ecx = MEM32(esi);
    MEM32(ecx) = ebp;

loc_001BC49D: ;
    edx = MEM32(ebx);
    eax = 0; /* xor self */
    edx = edx + 8;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(edi + 0x14) = edx;
    eax = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ebp = 0x40000000;
    if (CMP_EQ(_fa, _fb)) goto loc_001BC4C9; /* je: equal / zero */

loc_001BC4C1: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    goto loc_001BC4CF;

loc_001BC4C9: ;
    MEM32(esp + 0x14) = edx;
    ecx = edx;

loc_001BC4CF: ;
    eax = ecx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001BC552; /* jle: less or equal (signed <=) */

loc_001BC4DA: ;
    ebx = 8;
    MEM32(esp + 0x18) = ebx;

loc_001BC4E3: ;
    esi = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001BC53C; /* jge: greater or equal (signed >=) */

loc_001BC4F0: ;
    ebx = ebx + 4;

loc_001BC4F3: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x18);
    edx = ebx + eax;
    ecx = ecx + eax;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001BC50Cu); RECOMP_ABI_CALL(0x001ADCE0u, sub_001ADCE0); /* call 0x001ADCE0 */

loc_001BC50C: ;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001BC518u); RECOMP_ABI_CALL(0x001BBF70u, sub_001BBF70); /* call 0x001BBF70 */

loc_001BC518: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BC52A; /* jge: greater or equal (signed >=) */

loc_001BC51C: ;
    ebp = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = esi;

loc_001BC52A: ;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC4F3; /* jl: less (signed <) */

loc_001BC536: ;
    esi = MEM32(esp + 0x1C);
    ecx = eax;

loc_001BC53C: ;
    ebx = MEM32(esp + 0x18);
    ebx = ebx + 4;
    eax = ecx + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001BC4E3; /* jl: less (signed <) */

loc_001BC552: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(eax + edx * 4 + 8);
    edx = MEM32(esp + 0x30);
    eax = MEM32(eax + edx * 4 + 8);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = eax;
    esi = 0; /* xor self */

loc_001BC573: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x1C) = ecx;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x001BC594u); RECOMP_ABI_CALL(0x001ADCE0u, sub_001ADCE0); /* call 0x001ADCE0 */

loc_001BC594: ;
    eax = ZX8(MEM8(esp + esi + 0x1D));
    eax = eax - 0xC;
    edx = 0;
    SET_LO8(edx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    ecx = eax + 0x18;
    MEM32(esp + 0x18) = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BC5C2; /* jle: less or equal (signed <=) */

loc_001BC5B6: ;
    MEM32(esp + 0x18) = 0xFF;
    ecx = MEM32(esp + 0x18);

loc_001BC5C2: ;
    eax = ZX8(MEM8(esp + esi + 0x21));
    eax = eax - 0xC;
    ebx = eax + 0x18;
    MEM32(esp + 0x38) = ebx;
    ebx = 0;
    SET_LO8(ebx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & eax;
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(esp + 0x38);
    eax = 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BC5F1; /* jle: less or equal (signed <=) */

loc_001BC5ED: ;
    MEM32(esp + 0x38) = eax;

loc_001BC5F1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = edx;
    MEM32(esp + 0x10) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001BC6A5; /* jg: greater (signed >) */

loc_001BC5FF: ;
    /* nop */

loc_001BC600: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM8(esp + esi + 0x1D) = LO8(eax);
    if (CMP_G(_fas, _fbs)) goto loc_001BC696; /* jg: greater (signed >) */

loc_001BC614: ;
    ecx = MEM32(edi + 0x14);
    MEM8(esp + esi + 0x21) = LO8(ebx);
    SET_LO8(eax, MEM8(esp + esi + 0x1D));
    MEM8(esi + ecx + 1) = LO8(eax);
    edx = MEM32(edi + 0x14);
    SET_LO8(ecx, LO8(ebx));
    MEM8(esi + edx + 0xD) = LO8(ecx);
    ecx = ZX8(LO8(eax));
    edx = ZX8(LO8(ebx));
    edx = edx + ecx * 2;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(edi + 0x14);
    MEM8(esi + edx + 5) = LO8(eax);
    eax = ZX8(LO8(ebx));
    ecx = ecx + eax * 2;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esp + 0x3C);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    edx = MEM32(edi + 0x14);
    MEM8(esi + edx + 9) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001BC671u); RECOMP_ABI_CALL(0x001BBF70u, sub_001BBF70); /* call 0x001BBF70 */

loc_001BC671: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BC683; /* jge: greater or equal (signed >=) */

loc_001BC675: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(esp + esi + 0x25) = LO8(ecx);
    ebp = eax;
    MEM8(esp + esi + 0x29) = LO8(ebx);

loc_001BC683: ;
    eax = MEM32(esp + 0x38);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BC614; /* jle: less or equal (signed <=) */

loc_001BC68E: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);

loc_001BC696: ;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001BC600; /* jle: less or equal (signed <=) */

loc_001BC6A5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC573; /* jl: less (signed <) */

loc_001BC6B2: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001BC6C3u); RECOMP_ABI_CALL(0x001ADCE0u, sub_001ADCE0); /* call 0x001ADCE0 */

loc_001BC6C3: ;
    ebx = MEM32(esp + 0x40);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = ebx + 8;
    if (TEST_Z(_fa, _fb)) goto loc_001BC6DF; /* je: equal / zero */

loc_001BC6D1: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC6DF; /* jl: less (signed <) */

loc_001BC6D7: ;
    MEM32(eax) = 4;
    goto loc_001BC716;

loc_001BC6DF: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ecx = 4;
    PUSH32(esp, 0x001BC6ECu); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001BC6EC: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC70E; /* je: equal / zero */

loc_001BC6F3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC70E; /* je: equal / zero */

loc_001BC6F9: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEM32(eax + 4) = 4;
    if (CMP_L(_fas, _fbs)) goto loc_001BC70C; /* jl: less (signed <) */

loc_001BC707: ;
    ecx = 4;

loc_001BC70C: ;
    MEM32(eax) = ecx;

loc_001BC70E: ;
    edx = MEM32(esi);
    MEM32(edx) = 4;

loc_001BC716: ;
    eax = MEM32(ebx + 0x10);
    ebx = ebx + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC726; /* je: equal / zero */

loc_001BC720: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BC757; /* jge: greater or equal (signed >=) */

loc_001BC726: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    ecx = 4;
    PUSH32(esp, 0x001BC733u); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001BC733: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC755; /* je: equal / zero */

loc_001BC73A: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BC755; /* je: equal / zero */

loc_001BC740: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEM32(eax + 4) = 4;
    if (CMP_L(_fas, _fbs)) goto loc_001BC753; /* jl: less (signed <) */

loc_001BC74E: ;
    ecx = 4;

loc_001BC753: ;
    MEM32(eax) = ecx;

loc_001BC755: ;
    eax = MEM32(ebx);

loc_001BC757: ;
    MEM32(eax) = 4;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(ecx);
    edx = MEM32(esi);
    MEM32(edx + 8) = eax;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(ecx + 4);
    edx = MEM32(esi);
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(esi);
    eax = MEM32(ecx + 8);
    MEM32(edx + 0x10) = eax;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(esi);
    eax = MEM32(ecx + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x14) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BC7A0
 * Original: 0x001BC7A0 - 0x001BC7CD (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BC7A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(ecx) = 0x3E7700;
    PUSH32(esp, 0x001BC7B1u); RECOMP_ABI_CALL(0x001ADC00u, sub_001ADC00); /* call 0x001ADC00 */

loc_001BC7B1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x3E76FC;
    if (TEST_Z(_fa, _fb)) goto loc_001BC7C7; /* je: equal / zero */

loc_001BC7BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BC7C4u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001BC7C4: ;
    esp = esp + 4;

loc_001BC7C7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BC7D0
 * Original: 0x001BC7D0 - 0x001BC96C (412 bytes, 134 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC7D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC7D0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    MEM32(esp + 0x18) = ebp;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    MEM32(esp + 0x10) = eax;
    eax = ecx;
    SET_LO8(ebx, HI8(ecx));
    eax = eax >> 0x10;
    SET_LO8(eax, LO8(eax) >> 3);
    MEM32(esp + 0x14) = ecx;
    SET_LO8(ebx, LO8(ebx) >> 2);
    SET_LO8(ecx, LO8(ecx) >> 3);
    SET_LO16(eax, ZX8(LO8(eax)));
    SET_LO16(esi, ZX8(LO8(ebx)));
    ebx = MEM32(esp + 0x10);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    eax = eax << 6;
    ebx = ebx >> 8;
    eax = eax | esi;
    eax = eax << 5;
    SET_LO8(ebx, LO8(ebx) >> 2);
    SET_LO16(esi, ZX8(LO8(ebx)));
    SET_LO8(ebx, MEM8(esp + 0x10));
    eax = eax | ecx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx >> 0x10;
    SET_LO8(ecx, LO8(ecx) >> 3);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    SET_LO8(ebx, LO8(ebx) >> 3);
    ecx = ecx << 6;
    ecx = ecx | esi;
    SET_LO16(esi, ZX8(LO8(ebx)));
    ecx = ecx << 5;
    ecx = ecx | esi;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BC85B; /* jbe: below or equal (unsigned <=) */

loc_001BC84E: ;
    edi = MEM32(esp + 0x24);
    MEM16(edi) = LO16(eax);
    MEM16(edi + 2) = LO16(ecx);
    goto loc_001BC892;

loc_001BC85B: ;
    if (CMP_AE(_fa, _fb)) goto loc_001BC94D; /* jae: above or equal (unsigned >=) */

loc_001BC861: ;
    esi = MEM32(edx + 8);
    edi = MEM32(esp + 0x10);
    MEM32(esi + 8) = edi;
    esi = MEM32(edx + 8);
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x14) = edi;
    esi = MEM32(edx + 8);
    edi = MEM32(esi + 0xC);
    ebx = MEM32(esi + 0x10);
    MEM32(esi + 0xC) = ebx;
    esi = MEM32(edx + 8);
    MEM32(esi + 0x10) = edi;
    edi = MEM32(esp + 0x24);
    MEM16(edi) = LO16(ecx);
    MEM16(edi + 2) = LO16(eax);

loc_001BC892: ;
    esi = edi + 4;
    MEM16(esi) = 0;
    MEM16(edi + 6) = 0;
    eax = MEM32(ebp);
    ecx = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BC8B4; /* jl: less (signed <) */

loc_001BC8B0: ;
    MEM32(esp + 0x24) = ecx;

loc_001BC8B4: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BC8C3; /* jl: less (signed <) */

loc_001BC8BF: ;
    MEM32(esp + 0x10) = ecx;

loc_001BC8C3: ;
    eax = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BC962; /* jle: less or equal (signed <=) */

loc_001BC8D5: ;
    ebx = MEM32(esp + 0x24);
    eax = ecx;
    eax = eax & 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    edi = eax * 8;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BC925; /* jle: less or equal (signed <=) */

loc_001BC8ED: ;
    ebx = MEM32(esp + 0x2C);
    ebp = MEM32(esp + 0x24);

loc_001BC8F5: ;
    PUSH32(esp, ebx);
    ecx = edx;
    PUSH32(esp, 0x001BC8FDu); RECOMP_ABI_CALL(0x001BBE50u, sub_001BBE50); /* call 0x001BBE50 */

loc_001BC8FD: ;
    eax = ZX16(MEM16(eax * 2 + 0x3E3C2C));
    edx = MEM32(esp + 0x28);
    ecx = edi;
    eax = eax << LO8(ecx);
    edi = edi + 2;
    ebx = ebx + 4;
    MEM16(esi) = MEM16(esi) | LO16(eax);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BC8F5; /* jne: not equal / not zero */

loc_001BC919: ;
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);

loc_001BC925: ;
    ebx = MEM32(esp + 0x2C);
    edi = MEM32(ebp);
    esi = esi + eax * 2;
    eax = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    edi = ebx + edi * 4;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001BC8D5; /* jl: less (signed <) */

loc_001BC943: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

loc_001BC94D: ;
    ecx = MEM32(esp + 0x24);
    MEM16(ecx) = LO16(eax);
    eax = 0; /* xor self */
    MEM16(ecx + 2) = LO16(eax);
    MEM16(ecx + 6) = LO16(eax);
    MEM16(ecx + 4) = LO16(eax);

loc_001BC962: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BC970
 * Original: 0x001BC970 - 0x001BCAD0 (352 bytes, 115 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC970: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = MEM32(edi + 8);
    eax = MEM32(esi + 8);
    MEM32(esp + 0xC) = eax;
    edx = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x10);
    edx = edx >> 8;
    ecx = eax;
    ecx = ecx >> 0x10;
    SET_LO8(ecx, LO8(ecx) >> 3);
    SET_LO8(edx, LO8(edx) >> 2);
    SET_LO16(eax, ZX8(LO8(ecx)));
    SET_LO16(ecx, ZX8(LO8(edx)));
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(edx, LO8(edx) >> 3);
    MEM32(esp + 0x18) = ebx;
    eax = eax << 6;
    eax = eax | ecx;
    SET_LO16(ecx, ZX8(LO8(edx)));
    eax = eax << 5;
    edx = ebx;
    edx = edx >> 0x10;
    SET_LO8(edx, LO8(edx) >> 3);
    SET_LO16(edx, ZX8(LO8(edx)));
    eax = eax | ecx;
    SET_LO8(ecx, HI8(ebx));
    SET_LO8(ecx, LO8(ecx) >> 2);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    edx = edx << 6;
    edx = edx | ecx;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) >> 3);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    edx = edx << 5;
    edx = edx | ecx;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BCA05; /* jbe: below or equal (unsigned <=) */

loc_001BC9EB: ;
    MEM32(esi + 8) = ebx;
    ecx = MEM32(edi + 8);
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 0x10) = esi;
    esi = MEM32(esp + 0x20);
    MEM16(esi) = LO16(edx);
    MEM16(esi + 2) = LO16(eax);
    goto loc_001BCA10;

loc_001BCA05: ;
    esi = MEM32(esp + 0x20);
    MEM16(esi) = LO16(eax);
    MEM16(esi + 2) = LO16(edx);

loc_001BCA10: ;
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    edi = esi + 4;
    MEM16(esi + 6) = LO16(edx);
    MEM16(edi) = LO16(edx);
    eax = MEM32(ecx);
    esi = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BCA33; /* jl: less (signed <) */

loc_001BCA2F: ;
    MEM32(esp + 0x20) = esi;

loc_001BCA33: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BCA42; /* jl: less (signed <) */

loc_001BCA3E: ;
    MEM32(esp + 0x10) = esi;

loc_001BCA42: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edx (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001BCAC7; /* jle: less or equal (signed <=) */

loc_001BCA4C: ;
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);

loc_001BCA51: ;
    eax = edx;
    eax = eax & 1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), esi (32-bit) */
    MEM32(esp + 0x2C) = eax;
    ebp = eax * 8;
    if (CMP_LE(_fas, _fbs)) goto loc_001BCAB1; /* jle: less or equal (signed <=) */

loc_001BCA69: ;
    /* nop */

loc_001BCA70: ;
    edx = MEM32(ebx + esi * 4);
    ecx = MEM32(esp + 0x28);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, eax);
    MEM8(esp + 0x17) = 0;
    PUSH32(esp, 0x001BCA8Au); RECOMP_ABI_CALL(0x001BBE50u, sub_001BBE50); /* call 0x001BBE50 */

loc_001BCA8A: ;
    eax = ZX16(MEM16(eax * 2 + 0x3E3C34));
    ecx = ebp;
    eax = eax << LO8(ecx);
    ebp = ebp + 2;
    MEM16(edi) = MEM16(edi) | LO16(eax);
    eax = MEM32(esp + 0x24);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BCA70; /* jl: less (signed <) */

loc_001BCAA5: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x2C);

loc_001BCAB1: ;
    esi = MEM32(ecx);
    edi = edi + eax * 2;
    eax = MEM32(esp + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ebx = ebx + esi * 4;
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001BCA51; /* jl: less (signed <) */

loc_001BCAC6: ;
    POP32(esp, ebp);

loc_001BCAC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BCAD0
 * Original: 0x001BCAD0 - 0x001BCC37 (359 bytes, 121 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCAD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BCAD0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 8);
    ebx = MEM32(esi + 0x10);
    eax = edx;
    eax = eax >> 0x10;
    SET_LO8(eax, LO8(eax) >> 3);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, HI8(edx));
    SET_LO8(ecx, LO8(ecx) >> 2);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    SET_LO16(eax, ZX8(LO8(eax)));
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x14) = edx;
    eax = eax << 6;
    eax = eax | ecx;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) >> 3);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    eax = eax << 5;
    eax = eax | ecx;
    ecx = ebx;
    ecx = ecx >> 0x10;
    ebx = ZX8(HI8(ebx));
    SET_LO8(ecx, LO8(ecx) >> 3);
    SET_LO8(ebx, LO8(ebx) >> 2);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    SET_LO16(ebx, ZX8(LO8(ebx)));
    ecx = ecx << 6;
    ecx = ecx | ebx;
    SET_LO8(ebx, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) >> 3);
    SET_LO16(ebx, ZX8(LO8(ebx)));
    ecx = ecx << 5;
    ecx = ecx | ebx;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BCB64; /* jbe: below or equal (unsigned <=) */

loc_001BCB4A: ;
    ebx = MEM32(esp + 0x10);
    MEM32(esi + 8) = ebx;
    esi = MEM32(ebp + 8);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(esp + 0x24);
    MEM16(edx) = LO16(ecx);
    MEM16(edx + 2) = LO16(eax);
    goto loc_001BCB6F;

loc_001BCB64: ;
    edx = MEM32(esp + 0x24);
    MEM16(edx) = LO16(eax);
    MEM16(edx + 2) = LO16(ecx);

loc_001BCB6F: ;
    esi = edx + 4;
    MEM16(esi) = 0;
    MEM16(edx + 6) = 0;
    eax = MEM32(edi);
    ecx = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BCB90; /* jge: greater or equal (signed >=) */

loc_001BCB88: ;
    ebp = eax;
    MEM32(esp + 0x24) = ebp;
    goto loc_001BCB96;

loc_001BCB90: ;
    MEM32(esp + 0x24) = ecx;
    ebp = ecx;

loc_001BCB96: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BCBA5; /* jl: less (signed <) */

loc_001BCBA1: ;
    MEM32(esp + 0x10) = ecx;

loc_001BCBA5: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BCC2D; /* jle: less or equal (signed <=) */

loc_001BCBB3: ;
    edx = eax;
    edx = edx & 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = edx;
    ebx = edx * 8;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BCC10; /* jle: less or equal (signed <=) */

loc_001BCBC7: ;
    edi = MEM32(esp + 0x2C);
    goto loc_001BCBD0;

    /* nop */

loc_001BCBD0: ;
    SET_LO8(eax, MEM8(edi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BCBDE; /* jne: not equal / not zero */

loc_001BCBD7: ;
    eax = 3;
    goto loc_001BCBF4;

loc_001BCBDE: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BCBE8u); RECOMP_ABI_CALL(0x001BBE50u, sub_001BBE50); /* call 0x001BBE50 */

loc_001BCBE8: ;
    eax = ZX16(MEM16(eax * 2 + 0x3E3C34));
    edx = MEM32(esp + 0x18);

loc_001BCBF4: ;
    ecx = ebx;
    eax = eax << LO8(ecx);
    ebx = ebx + 2;
    edi = edi + 4;
    MEM16(esi) = MEM16(esi) | LO16(eax);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BCBD0; /* jne: not equal / not zero */

loc_001BCC04: ;
    edi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x24);

loc_001BCC10: ;
    ebx = MEM32(esp + 0x2C);
    ecx = MEM32(edi);
    ecx = ebx + ecx * 4;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = esi + edx * 2;
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BCBB3; /* jl: less (signed <) */

loc_001BCC2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BCC40
 * Original: 0x001BCC40 - 0x001BCD59 (281 bytes, 114 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCC40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BCC40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_001BCD00; /* jg: greater (signed >) */

loc_001BCC5D: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BCC82; /* jl: less (signed <) */

loc_001BCC65: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001BCC78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BCC78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCCEF; /* je: equal / zero */

loc_001BCC7C: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = ebx;

loc_001BCC82: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x14);
    SET_LO8(ecx, MEM8(eax + ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = eax;

loc_001BCC8F: ;
    eax = SX8(LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esi + 0x18) = eax;
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_001BCCF9; /* jns: not sign (positive) */

loc_001BCC99: ;
    eax = eax & 0x7F;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi + 0x20);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x1C) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_001BCD00; /* jle: less or equal (signed <=) */

loc_001BCCB0: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x28) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BCCD5; /* jl: less (signed <) */

loc_001BCCB8: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001BCCCBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BCCCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCCF4; /* je: equal / zero */

loc_001BCCCF: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = ebx;

loc_001BCCD5: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x14);
    SET_LO8(ecx, MEM8(eax + ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = eax;

loc_001BCCE2: ;
    MEM8(edi + ebp) = LO8(ecx);
    eax = MEM32(esi + 0x20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BCCB0; /* jl: less (signed <) */

loc_001BCCED: ;
    goto loc_001BCD00;

loc_001BCCEF: ;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    goto loc_001BCC8F;

loc_001BCCF4: ;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    goto loc_001BCCE2;

loc_001BCCF9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = ebx;

loc_001BCD00: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BCD4D; /* jne: not equal / not zero */

loc_001BCD05: ;
    eax = MEM32(esi + 0x20);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BCD4D; /* jle: less or equal (signed <=) */

loc_001BCD0E: ;
    edi = edi;

loc_001BCD10: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x28) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BCD35; /* jl: less (signed <) */

loc_001BCD18: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001BCD2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BCD2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCD54; /* je: equal / zero */

loc_001BCD2F: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = ebx;

loc_001BCD35: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x14);
    SET_LO8(ecx, MEM8(eax + ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = eax;

loc_001BCD42: ;
    MEM8(edi + ebp) = LO8(ecx);
    eax = MEM32(esi + 0x20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BCD10; /* jl: less (signed <) */

loc_001BCD4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001BCD54: ;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    goto loc_001BCD42;

}

/**
 * sub_001BCD60
 * Original: 0x001BCD60 - 0x001BCE37 (215 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCD60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BCD60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x178);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001BCD72u); RECOMP_ABI_CALL(0x001B6D00u, sub_001B6D00); /* call 0x001B6D00 */

loc_001BCD72: ;
    edx = MEM32(esi + 0x178);
    ebx = MEM32(edx + 0x10);
    edx = MEM32(esp + 0x10);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + ebx;
    ebx = 0; /* xor self */
    MEM32(ecx + 0x1C) = 1;
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = 0x18;
    MEM32(ecx + 0xC) = 0x10;
    MEM32(ecx + 0x10) = 8;
    MEM32(ecx + 0x14) = ebx;
    MEM32(ecx + 0x18) = ebx;
    MEM32(ecx + 0x2C) = ebx;
    MEM32(ecx + 0x30) = 0xFFFFFFFFu;
    MEM32(ecx + 0x20) = ebx;
    MEM32(ecx + 0x24) = ebx;
    MEM32(ecx + 0x28) = ebx;
    MEM8(ecx + 0x34) = LO8(ebx);
    ebp = MEM32(edx);
    MEM32(ecx + 0x1C) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ecx) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(edx + 0xC);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(edx + 0x10);
    MEM32(ecx + 0x10) = ebp;
    ebp = MEM32(edx + 0x14);
    MEM32(ecx + 0xC) = ebp;
    ebp = MEM32(edx + 0x18);
    MEM32(ecx + 0x14) = ebp;
    edx = MEM32(edx + 0x1C);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ecx + 0x2C) = ebx;
    MEM32(ecx + 0x30) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_001BCE26; /* je: equal / zero */

loc_001BCE04: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001BCE23; /* jle: less or equal (signed <=) */

loc_001BCE06: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001BCE23; /* jg: greater (signed >) */

loc_001BCE0B: ;
    MEM32(ecx + 0x20) = 1;
    MEM32(esi + 0x17C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0x20000;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001BCE23: ;
    MEM32(ecx + 0x20) = ebx;

loc_001BCE26: ;
    MEM32(esi + 0x17C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0x20000;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCE40
 * Original: 0x001BCE40 - 0x001BCF27 (231 bytes, 83 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BCE40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BCE40: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    ebp = ebp & 0xFFFF;
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x178);
    esi = esi + MEM32(eax + 0x10);
    if ((esi == 0)) goto loc_001BCF21; /* je: equal / zero */

loc_001BCE63: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BCEF4; /* jne: not equal / not zero */

loc_001BCE72: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCED1; /* je: equal / zero */

loc_001BCE7A: ;
    ecx = MEM32(edi + 0x330);
    edx = MEM32(ecx + 0x10);
    eax = eax & 0xFFFF;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001BCED1; /* je: equal / zero */

loc_001BCE94: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCEB3; /* je: equal / zero */

loc_001BCE9B: ;
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x16), LO8(ebx) (8-bit) */
    PUSH32(esp, ecx);
    if (CMP_BE(_fa, _fb)) goto loc_001BCEAB; /* jbe: below or equal (unsigned <=) */

loc_001BCEA1: ;
    PUSH32(esp, 0x001BCEA6u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001BCEA6: ;
    esp = esp + 4;
    goto loc_001BCEB0;

loc_001BCEAB: ;
    PUSH32(esp, 0x001BCEB0u); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001BCEB0: ;
    MEM32(esi + 0x24) = ebx;

loc_001BCEB3: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCECE; /* je: equal / zero */

loc_001BCEB8: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCECE; /* je: equal / zero */

loc_001BCEC0: ;
    eax = MEM32(esi + 0x30);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20C); PUSH32(esp, 0x001BCECEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BCECE: ;
    MEM32(esi + 0x2C) = ebx;

loc_001BCED1: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCF14; /* je: equal / zero */

loc_001BCED8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BCEDEu); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001BCEDE: ;
    MEM32(esi + 0x28) = ebx;
    ecx = MEM32(edi + 0x178);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001BCEEDu); RECOMP_ABI_CALL(0x001B71D0u, sub_001B71D0); /* call 0x001B71D0 */

loc_001BCEED: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001BCEF4: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCF04; /* je: equal / zero */

loc_001BCEFB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BCF01u); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001BCF01: ;
    MEM32(esi + 0x28) = ebx;

loc_001BCF04: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCF14; /* je: equal / zero */

loc_001BCF0B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BCF11u); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001BCF11: ;
    MEM32(esi + 0x24) = ebx;

loc_001BCF14: ;
    ecx = MEM32(edi + 0x178);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001BCF20u); RECOMP_ABI_CALL(0x001B71D0u, sub_001B71D0); /* call 0x001B71D0 */

loc_001BCF20: ;
    POP32(esp, ebx);

loc_001BCF21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCF30
 * Original: 0x001BCF30 - 0x001BCF66 (54 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCF30(void)
{

loc_001BCF30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x178);
    edx = MEM32(edx + 0x10);
    eax = eax & 0xFFFF;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edx = MEM32(eax + edx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esi) = edx;
    ecx = MEM32(ecx + 0x178);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BCF70
 * Original: 0x001BCF70 - 0x001BCF8D (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCF70(void)
{

loc_001BCF70: ;
    eax = MEM32(ecx + 0x178);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = ecx & 0xFFFF;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = MEM32(edx + ecx + 0x1C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCF90
 * Original: 0x001BCF90 - 0x001BCFAD (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCF90(void)
{

loc_001BCF90: ;
    eax = MEM32(ecx + 0x178);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = ecx & 0xFFFF;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = MEM32(edx + ecx + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCFB0
 * Original: 0x001BCFB0 - 0x001BCFCD (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCFB0(void)
{

loc_001BCFB0: ;
    eax = MEM32(ecx + 0x178);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = ecx & 0xFFFF;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = MEM32(edx + ecx + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCFD0
 * Original: 0x001BCFD0 - 0x001BCFED (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCFD0(void)
{

loc_001BCFD0: ;
    eax = MEM32(ecx + 0x178);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = ecx & 0xFFFF;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = MEM32(edx + ecx + 0x10);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCFF0
 * Original: 0x001BCFF0 - 0x001BD00D (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCFF0(void)
{

loc_001BCFF0: ;
    eax = MEM32(ecx + 0x178);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = ecx & 0xFFFF;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = MEM32(edx + ecx + 0x14);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD010
 * Original: 0x001BD010 - 0x001BD02D (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD010(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001BD010: ;
    eax = MEM32(ecx + 0x178);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = ecx & 0xFFFF;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    fp_push(MEMF(edx + ecx + 0x18)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BD030
 * Original: 0x001BD030 - 0x001BD5E6 (1462 bytes, 430 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD030(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BD030: ;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x128);
    eax = esp + 0xEC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001BD051u); RECOMP_ABI_CALL(0x00365970u, sub_00365970); /* call 0x00365970 */

loc_001BD051: ;
    ecx = MEM32(esp + 0xEC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BD05Eu); RECOMP_ABI_CALL(0x003A6483u, sub_003A6483); /* call 0x003A6483 */

loc_001BD05E: ;
    ebp = MEM32(esp + 0x138);
    edx = esp + 0x108;
    PUSH32(esp, edx);
    ebx = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x60) = ebx;
    PUSH32(esp, 0x001BD079u); RECOMP_ABI_CALL(0x00365970u, sub_00365970); /* call 0x00365970 */

loc_001BD079: ;
    eax = MEM32(esp + 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BD086u); RECOMP_ABI_CALL(0x003A6483u, sub_003A6483); /* call 0x003A6483 */

loc_001BD086: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x50) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_001BD0C0; /* jne: not equal / not zero */

loc_001BD08E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BD0C0; /* jne: not equal / not zero */

loc_001BD092: ;
    ecx = MEM32(esp + 0x140);
    edx = MEM32(esp + 0x134);
    eax = MEM32(esp + 0x130);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BD0B1u); RECOMP_ABI_CALL(0x0035B6C0u, sub_0035B6C0); /* call 0x0035B6C0 */

loc_001BD0B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 32; return; /* ret 28 */

loc_001BD0C0: ;
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001BD0CFu); RECOMP_ABI_CALL(0x001B4510u, sub_001B4510); /* call 0x001B4510 */

loc_001BD0CF: ;
    edx = MEM32(esp + 0xEC);
    PUSH32(esp, edx);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x001BD0E0u); RECOMP_ABI_CALL(0x001B4510u, sub_001B4510); /* call 0x001B4510 */

loc_001BD0E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BD0F6; /* je: equal / zero */

loc_001BD0E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x88760818u;
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 32; return; /* ret 28 */

loc_001BD0F6: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BD0FCu); RECOMP_ABI_CALL(0x003A64C7u, sub_003A64C7); /* call 0x003A64C7 */

loc_001BD0FC: ;
    SET_LO8(ecx, MEM8(esp + 0x12C));
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    ebx = eax;
    eax = 0x80;
    if (TEST_Z(_fa, _fb)) goto loc_001BD115; /* je: equal / zero */

loc_001BD110: ;
    eax = 0xC0;

loc_001BD115: ;
    SET_LO8(ecx, MEM8(esp + 0x13C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD125; /* je: equal / zero */

loc_001BD120: ;
    esi = 0x40;

loc_001BD125: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BD133u); RECOMP_ABI_CALL(0x00365990u, sub_00365990); /* call 0x00365990 */

loc_001BD133: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001BD141u); RECOMP_ABI_CALL(0x00365990u, sub_00365990); /* call 0x00365990 */

loc_001BD141: ;
    eax = MEM32(esp + 0x134);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001BD5D7; /* jbe: below or equal (unsigned <=) */

loc_001BD150: ;
    edx = MEM32(esp + 0x140);
    ecx = MEM32(esp + 0x130);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = eax;
    goto loc_001BD170;

loc_001BD16C: ;
    edx = MEM32(esp + 0x2C);

loc_001BD170: ;
    eax = MEM32(esp + 0x130);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BD1A4; /* je: equal / zero */

loc_001BD17D: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax);
    esi = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 8);
    ebp = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x104);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x100);
    goto loc_001BD1BC;

loc_001BD1A4: ;
    ecx = MEM32(esp + 0x100);
    eax = MEM32(esp + 0x104);
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x24) = ecx;
    ebp = eax;

loc_001BD1BC: ;
    edi = MEM32(esp + 0x140);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x28) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_001BD1D6; /* je: equal / zero */

loc_001BD1CB: ;
    edi = MEM32(edx);
    MEM32(esp + 0x38) = edi;
    edi = MEM32(edx + 4);
    goto loc_001BD1DC;

loc_001BD1D6: ;
    edi = 0; /* xor self */
    MEM32(esp + 0x38) = edi;

loc_001BD1DC: ;
    edx = MEM32(esp + 0x58);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, 0);
    if (TEST_Z(_fa, _fb)) goto loc_001BD497; /* je: equal / zero */

loc_001BD1EA: ;
    edx = MEM32(esp + 0x54);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_001BD37C; /* je: equal / zero */

loc_001BD1F8: ;
    ecx = esp + 0x68;
    PUSH32(esp, 0x001BD201u); RECOMP_ABI_CALL(0x001AF240u, sub_001AF240); /* call 0x001AF240 */

loc_001BD201: ;
    edx = MEM32(esp + 0x120);
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x001BD21Fu); RECOMP_ABI_CALL(0x001AF240u, sub_001AF240); /* call 0x001AF240 */

loc_001BD21F: ;
    PUSH32(esp, esi);
    ecx = esp + 0x60;
    PUSH32(esp, 0x001BD229u); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_001BD229: ;
    PUSH32(esp, edi);
    ecx = esp + 0x84;
    MEM32(esp + 0x7C) = eax;
    PUSH32(esp, 0x001BD23Au); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_001BD23A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x9C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001BD5B2; /* jge: greater or equal (signed >=) */

loc_001BD249: ;
    edi = MEM32(esp + 0x68);
    ebp = ebp - esi;
    esi = MEM32(esp + 0x8C);
    MEM32(esp + 0x18) = ebp;
    /* nop */

loc_001BD260: ;
    ebp = MEM32(esp + 0x1C);
    ecx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_001BD28B; /* jb: below (unsigned <) */

loc_001BD273: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD281; /* je: equal / zero */

loc_001BD277: ;
    edx = ecx;
    edx = edx & MEM32(esp + 0x14);
    eax = eax | edx;
    goto loc_001BD285;

loc_001BD281: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) << 1;

loc_001BD285: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BD273; /* jbe: below or equal (unsigned <=) */

loc_001BD28B: ;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x14) = ecx;
    ecx = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 0x74) = eax;
    MEM32(esp + 0x10) = 0;
    if (CMP_B(_fa, _fb)) goto loc_001BD2C8; /* jb: below (unsigned <) */

loc_001BD2A8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD2BA; /* je: equal / zero */

loc_001BD2AC: ;
    ebp = MEM32(esp + 0x14);
    edx = ecx;
    edx = edx & ebp;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) | edx;
    goto loc_001BD2BE;

loc_001BD2BA: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) << 1;

loc_001BD2BE: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BD2A8; /* jbe: below or equal (unsigned <=) */

loc_001BD2C4: ;
    ebp = MEM32(esp + 0x1C);

loc_001BD2C8: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x98) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001BD33F; /* jge: greater or equal (signed >=) */

loc_001BD2DB: ;
    ecx = ecx - ebp;
    MEM32(esp + 0x10) = ecx;

loc_001BD2E1: ;
    ebp = MEM32(esp + 0x78);
    edi = MEM32(esp + 0x4C);
    esi = eax;
    esi = esi | ebp;
    ebp = MEM32(esp + 0x9C);
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    esi = esi + edi;
    edi = edx;
    edi = edi | ebp;
    ebp = MEM32(esp + 0x44);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    edi = edi + ebp;
    ecx = ebx;
    ebp = ecx;
    ecx = ecx >> 2;
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
    edi = MEM32(esp + 0x68);
    esi = MEM32(esp + 0x8C);
    ecx = MEM32(esp + 0x10);
    eax = eax - edi;
    edx = edx - esi;
    eax = eax & edi;
    edx = edx & esi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_001BD2E1; /* jne: not equal / not zero */

loc_001BD334: ;
    MEM32(esp + 0x98) = edx;
    MEM32(esp + 0x74) = eax;

loc_001BD33F: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x9C);
    ecx = ecx - eax;
    ecx = ecx & eax;
    eax = MEM32(esp + 0x90);
    edx = edx - eax;
    edx = edx & eax;
    eax = MEM32(esp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x9C) = edx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_001BD260; /* jne: not equal / not zero */

loc_001BD377: ;
    goto loc_001BD5B2;

loc_001BD37C: ;
    ecx = esp + 0xD4;
    PUSH32(esp, 0x001BD388u); RECOMP_ABI_CALL(0x001AF240u, sub_001AF240); /* call 0x001AF240 */

loc_001BD388: ;
    PUSH32(esp, esi);
    ecx = esp + 0xCC;
    PUSH32(esp, 0x001BD395u); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_001BD395: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001BD5B2; /* jge: greater or equal (signed >=) */

loc_001BD3A8: ;
    ecx = MEM32(esp + 0xD4);
    edi = edi - esi;
    MEM32(esp + 0x14) = edi;
    goto loc_001BD3C0;

loc_001BD3B7: ;
    edi = MEM32(esp + 0x14);
    goto loc_001BD3C0;

    /* nop */

loc_001BD3C0: ;
    edi = edi + esi;
    edx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x54) = edi;
    edi = MEM32(esp + 0x1C);
    if (CMP_B(_fa, _fb)) goto loc_001BD3ED; /* jb: below (unsigned <) */

loc_001BD3D5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD3E5; /* je: equal / zero */

loc_001BD3D9: ;
    ebp = edx;
    ebp = ebp & edi;
    eax = eax | ebp;
    ebp = MEM32(esp + 0x28);
    goto loc_001BD3E7;

loc_001BD3E5: ;
    edi = edi << 1;

loc_001BD3E7: ;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BD3D5; /* jbe: below or equal (unsigned <=) */

loc_001BD3ED: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x24) (32-bit) */
    MEM32(esp + 0xE0) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001BD46C; /* jge: greater or equal (signed >=) */

loc_001BD3FE: ;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    ecx = ecx - edi;
    MEM32(esp + 0x18) = ecx;
    /* nop */

loc_001BD410: ;
    ebp = MEM32(esp + 0xE4);
    edi = MEM32(esp + 0x4C);
    esi = eax;
    esi = esi | ebp;
    ebp = MEM32(esp + 0x44);
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    esi = esi + edi;
    edi = MEM32(esp + 0x40);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x54));
    edi = edi + edx;
    edi = edi + ebp;
    ecx = ebx;
    ebp = ecx;
    ecx = ecx >> 2;
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
    ecx = MEM32(esp + 0xD4);
    esi = MEM32(esp + 0x18);
    eax = eax - ecx;
    eax = eax & ecx;
    edx = edx + ebx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = esi;
    if ((_fa != 0)) goto loc_001BD410; /* jne: not equal / not zero */

loc_001BD45D: ;
    esi = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x28);
    MEM32(esp + 0xE0) = eax;

loc_001BD46C: ;
    edx = MEM32(esp + 0xE4);
    eax = MEM32(esp + 0xD8);
    edx = edx - eax;
    edx = edx & eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0xE4) = edx;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001BD3B7; /* jl: less (signed <) */

loc_001BD492: ;
    goto loc_001BD5B2;

loc_001BD497: ;
    eax = MEM32(esp + 0x124);
    ecx = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xB0;
    PUSH32(esp, 0x001BD4B3u); RECOMP_ABI_CALL(0x001AF240u, sub_001AF240); /* call 0x001AF240 */

loc_001BD4B3: ;
    PUSH32(esp, edi);
    ecx = esp + 0xA8;
    PUSH32(esp, 0x001BD4C0u); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_001BD4C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0xC0) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001BD5B2; /* jge: greater or equal (signed >=) */

loc_001BD4D3: ;
    ecx = MEM32(esp + 0xB0);
    /* nop */

loc_001BD4E0: ;
    esi = MEM32(esp + 0x38);
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BD504; /* jb: below (unsigned <) */

loc_001BD4EF: ;
    /* nop */

loc_001BD4F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD4FC; /* je: equal / zero */

loc_001BD4F4: ;
    edi = eax;
    edi = edi & esi;
    edx = edx | edi;
    goto loc_001BD4FE;

loc_001BD4FC: ;
    esi = esi << 1;

loc_001BD4FE: ;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BD4F0; /* jbe: below or equal (unsigned <=) */

loc_001BD504: ;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(esp + 0xBC) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001BD588; /* jge: greater or equal (signed >=) */

loc_001BD517: ;
    eax = esi;
    ecx = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    ecx = ecx - esi;
    MEM32(esp + 0x18) = ecx;
    goto loc_001BD530;

    /* nop */
    /* nop */

loc_001BD530: ;
    esi = MEM32(esp + 0x48);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x10));
    edi = MEM32(esp + 0x4C);
    ebp = MEM32(esp + 0xC0);
    esi = esi + eax;
    esi = esi + edi;
    edi = edx;
    edi = edi | ebp;
    ebp = MEM32(esp + 0x44);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    edi = edi + ebp;
    ecx = ebx;
    ebp = ecx;
    ecx = ecx >> 2;
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
    ecx = MEM32(esp + 0xB0);
    esi = MEM32(esp + 0x18);
    edx = edx - ecx;
    edx = edx & ecx;
    eax = eax + ebx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = esi;
    if ((_fa != 0)) goto loc_001BD530; /* jne: not equal / not zero */

loc_001BD57D: ;
    ebp = MEM32(esp + 0x28);
    MEM32(esp + 0xBC) = edx;

loc_001BD588: ;
    eax = MEM32(esp + 0xB4);
    edx = MEM32(esp + 0xC0);
    edx = edx - eax;
    edx = edx & eax;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0xC0) = edx;
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BD4E0; /* jl: less (signed <) */

loc_001BD5B2: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x34);
    edx = edx + 0x10;
    ecx = ecx + 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x34) = eax;
    if ((_fa != 0)) goto loc_001BD16C; /* jne: not equal / not zero */

loc_001BD5D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001BD5F0
 * Original: 0x001BD5F0 - 0x001BD735 (325 bytes, 107 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD5F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BD5F0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    eax = MEM32(0x5BC508);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E8A28);
    esi = ecx;
    MEM32(esp + 0x18) = edi;
    ecx = MEM32(eax + 0x38);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001BD61Au); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_001BD61A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001BD729; /* jne: not equal / not zero */

loc_001BD622: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001BD663; /* je: equal / zero */

loc_001BD62A: ;
    ecx = MEM32(esp + 0x20);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BD64B; /* jle: less or equal (signed <=) */

loc_001BD634: ;
    eax = MEM32(esi + 0x18C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001BD642u); RECOMP_ABI_CALL(0x001AF350u, sub_001AF350); /* call 0x001AF350 */

loc_001BD642: ;
    MEM32(esp + 0xC) = eax;
    eax = 1;

loc_001BD64B: ;
    ecx = MEM32(esi + 0x18C);
    edx = esp + 0xC;
    MEM32(esp + eax * 4 + 0xC) = ecx;
    MEM32(esp + eax * 4 + 0x10) = edi;
    MEM32(esp + 0x20) = edx;
    goto loc_001BD69A;

loc_001BD663: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(esp + 0x20);
    if (CMP_G(_fas, _fbs)) goto loc_001BD686; /* jg: greater (signed >) */

loc_001BD66E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BD67C; /* jle: less or equal (signed <=) */

loc_001BD672: ;
    MEM32(esp + 0x20) = 0x3E8A1C;
    goto loc_001BD69A;

loc_001BD67C: ;
    MEM32(esp + 0x20) = 0x3E8A04;
    goto loc_001BD69A;

loc_001BD686: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x20) = 0x3E89F8;
    if (CMP_G(_fas & _fbs, 0)) goto loc_001BD69A; /* jg: greater (signed >) */

loc_001BD692: ;
    MEM32(esp + 0x20) = 0x3E89E4;

loc_001BD69A: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001BD729; /* je: equal / zero */

loc_001BD6AE: ;
    PUSH32(esp, ebp);
    ebp = eax;
    PUSH32(esp, ebx);

loc_001BD6B2: ;
    ecx = MEM32(eax);
    eax = MEM32(esi + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001BD6F4; /* je: equal / zero */

loc_001BD6BE: ;
    SET_LO8(ebx, MEM8(esi + 0x180));
    eax = MEM32(esi + 0x148);
    edi = MEM32(eax);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = MEM32(eax + 4);
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001BD6E0u); RECOMP_ABI_CALL(0x001AF3C0u, sub_001AF3C0); /* call 0x001AF3C0 */

loc_001BD6E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BD6E8u); RECOMP_ABI_CALL(0x00367FF0u, sub_00367FF0); /* call 0x00367FF0 */

loc_001BD6E8: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x2C) = LO8(eax);
    if ((_fa != 0)) goto loc_001BD718; /* jne: not equal / not zero */

loc_001BD6F4: ;
    edi = MEM32(esp + 0x24);
    ecx = MEM32(ebp + 4);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x24) = edi;
    eax = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_001BD6B2; /* jne: not equal / not zero */

loc_001BD70A: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

loc_001BD718: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(eax + ecx * 4);
    POP32(esp, ebx);
    MEM32(esp + 0xC) = edx;
    POP32(esp, ebp);

loc_001BD729: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BD740
 * Original: 0x001BD740 - 0x001BD7A2 (98 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD740: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001BD74Eu); RECOMP_ABI_CALL(0x001BB8B0u, sub_001BB8B0); /* call 0x001BB8B0 */

loc_001BD74E: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD770; /* je: equal / zero */

loc_001BD758: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E8A3C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001BD764u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BD764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BD770; /* je: equal / zero */

loc_001BD768: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BD770u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BD770: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD79D; /* je: equal / zero */

loc_001BD777: ;
    eax = esi + 0x1C8;
    ecx = esi + 0x44C;
    edx = 8;

loc_001BD788: ;
    MEM32(ecx + -32) = ebx;
    MEM32(ecx) = ebx;
    ecx = ecx + 4;
    MEM8(eax + 0x10) = 2;
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 8) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BD788; /* jne: not equal / not zero */

loc_001BD79D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD7B0
 * Original: 0x001BD7B0 - 0x001BD91F (367 bytes, 118 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD7B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BD7B0: ;
    esp = esp - 0x434;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x001BD7C1u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_001BD7C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BD7C7u); RECOMP_ABI_CALL(0x0022A730u, sub_0022A730); /* call 0x0022A730 */

loc_001BD7C7: ;
    esp = esp + 4;
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x001BD7D3u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_001BD7D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BD7D9u); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_001BD7D9: ;
    ebx = MEM32(esp + 0x44C);
    esp = esp + 4;
    PUSH32(esp, 0x3E8A60);
    PUSH32(esp, 1);
    ecx = ebx;
    esi = eax;
    PUSH32(esp, 0x001BD7F3u); RECOMP_ABI_CALL(0x002071C0u, sub_002071C0); /* call 0x002071C0 */

loc_001BD7F3: ;
    PUSH32(esp, 0x3DA228);
    ecx = esi;
    PUSH32(esp, 0x001BD7FFu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_001BD7FF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BD80B; /* jne: not equal / not zero */

loc_001BD806: ;
    eax = MEM32(0x46A3C8);

loc_001BD80B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = ebx;
    PUSH32(esp, 0x001BD815u); RECOMP_ABI_CALL(0x002071C0u, sub_002071C0); /* call 0x002071C0 */

loc_001BD815: ;
    eax = MEM32(edi + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD8E0; /* je: equal / zero */

loc_001BD823: ;
    ecx = MEM32(edi + 0x14C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BD836u); RECOMP_ABI_CALL(0x00367ED0u, sub_00367ED0); /* call 0x00367ED0 */

loc_001BD836: ;
    edx = MEM32(esp + 0x420);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E8A58);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BD849u); RECOMP_ABI_CALL(0x002046C0u, sub_002046C0); /* call 0x002046C0 */

loc_001BD849: ;
    eax = MEM32(esi + 8);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BD858; /* jne: not equal / not zero */

loc_001BD853: ;
    eax = MEM32(0x46A3C8);

loc_001BD858: ;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = ebx;
    PUSH32(esp, 0x001BD862u); RECOMP_ABI_CALL(0x002071C0u, sub_002071C0); /* call 0x002071C0 */

loc_001BD862: ;
    eax = MEM32(esp + 0x42C);
    ecx = MEM32(esp + 0x428);
    edx = MEM32(esp + 0x424);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E8A48);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BD885u); RECOMP_ABI_CALL(0x002046C0u, sub_002046C0); /* call 0x002046C0 */

loc_001BD885: ;
    eax = MEM32(esi + 8);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BD894; /* jne: not equal / not zero */

loc_001BD88F: ;
    eax = MEM32(0x46A3C8);

loc_001BD894: ;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ecx = ebx;
    PUSH32(esp, 0x001BD89Eu); RECOMP_ABI_CALL(0x002071C0u, sub_002071C0); /* call 0x002071C0 */

loc_001BD89E: ;
    ecx = MEM32(esp + 0x41C);
    eax = MEM32(esp + 0x418);
    edx = esp + 0x10;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x001BD8C0u); RECOMP_ABI_CALL(0x001E7D70u, sub_001E7D70); /* call 0x001E7D70 */

loc_001BD8C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x001BD8CAu); RECOMP_ABI_CALL(0x00207130u, sub_00207130); /* call 0x00207130 */

loc_001BD8CA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BD8D6; /* jne: not equal / not zero */

loc_001BD8D1: ;
    eax = MEM32(0x46A3C8);

loc_001BD8D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x001BD8E0u); RECOMP_ABI_CALL(0x002071C0u, sub_002071C0); /* call 0x002071C0 */

loc_001BD8E0: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001BD8F7; /* jne: not equal / not zero */

loc_001BD8F0: ;
    ecx = esi;
    PUSH32(esp, 0x001BD8F7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001BD8F7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD912; /* je: equal / zero */

loc_001BD8FB: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001BD912; /* jne: not equal / not zero */

loc_001BD90B: ;
    ecx = ebp;
    PUSH32(esp, 0x001BD912u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001BD912: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x434;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD920
 * Original: 0x001BD920 - 0x001BD94F (47 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD920(void)
{

loc_001BD920: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x4F0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001BD930u); RECOMP_ABI_CALL(0x001B7110u, sub_001B7110); /* call 0x001B7110 */

loc_001BD930: ;
    edx = MEM32(esi + 0x4F0);
    esi = MEM32(edx + 0x10);
    ecx = eax;
    edx = 0; /* xor self */
    ecx = ecx << 4;
    ecx = ecx + esi;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BD950
 * Original: 0x001BD950 - 0x001BD972 (34 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001BD950(void)
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

loc_001BD950: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x001BD95Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BD95B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD963; /* je: equal / zero */

loc_001BD95F: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BD963: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001BD96Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BD96B: ;
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BD980
 * Original: 0x001BD980 - 0x001BDA00 (128 bytes, 46 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD980(void)
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

loc_001BD980: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x15C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001BD9FD; /* jne: not equal / not zero */

loc_001BD98E: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001BD9A9; /* je: equal / zero */

loc_001BD995: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001BD99Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BD99D: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001BD9A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BD9A9: ;
    edx = MEM32(0x5BB3A4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(0x5BB3A0);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(1)) >> 32) & 1);
    edi = edi + 1;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    PUSH32(esp, 0);
    MEM32(0x5BB3A0) = edi;
    MEM32(0x5BB3A4) = edx;
    PUSH32(esp, 0x001BD9CFu); RECOMP_ICALL_SAFE(0x00368BE0u, _icall_esp); /* manual call 0x00368BE0 */
    }

loc_001BD9CF: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001BD9FC; /* je: equal / zero */

loc_001BD9D6: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    edi = MEM32(esp + 8);
    fp_top() = fp_top() - MEMF(esi + 0x44); /* fsub dword ptr [esi + 0x44] */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001BD9EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BD9ED: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001BD9F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BD9F5: ;
    MEM32(esi + 0x40) = 0;

loc_001BD9FC: ;
    POP32(esp, edi);

loc_001BD9FD: ;
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
 * sub_001BDA00
 * Original: 0x001BDA00 - 0x001BDA3A (58 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDA00: ;
    esp = esp - 8;
    eax = MEM32(ecx + 0x17C);
    ecx = MEM32(ecx + 0x178);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + MEM32(ecx + 0x10);
    edx = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = edx;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDA36; /* je: equal / zero */

loc_001BDA25: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BDA36u); RECOMP_ABI_CALL(0x00365990u, sub_00365990); /* call 0x00365990 */

loc_001BDA36: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001BDA40
 * Original: 0x001BDA40 - 0x001BDBB6 (374 bytes, 118 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDA40(void)
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

loc_001BDA40: ;
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0xC);
    MEMF(ecx + 0x1BC) = (float)fp_top(); /* fst */
    esp = esp - 0x18;
    MEM32(ecx + 0x1B8) = eax;
    eax = MEM32(ecx + 0x17C);
    PUSH32(esp, ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ebx = MEM32(ecx + 0x178);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    MEM32(ecx + 0x1A8) = esi;
    MEM32(ecx + 0x1AC) = edi;
    MEM32(ecx + 0x1B0) = edx;
    MEM32(ecx + 0x1B4) = ebp;
    eax = eax + MEM32(ebx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDAA2; /* jge: greater or equal (signed >=) */

loc_001BDA9A: ;
    MEM32(esp + 0x34) = 1;

loc_001BDAA2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDAAC; /* jge: greater or equal (signed >=) */

loc_001BDAA7: ;
    ebp = 1;

loc_001BDAAC: ;
    edx = 0; /* xor self */
    ebx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    SET_LO8(edx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    SET_LO8(edx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & edi;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDACB; /* jge: greater or equal (signed >=) */

loc_001BDAC9: ;
    esi = edi;

loc_001BDACB: ;
    edi = MEM32(eax + 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDAD5; /* jge: greater or equal (signed >=) */

loc_001BDAD3: ;
    edx = edi;

loc_001BDAD5: ;
    edi = MEM32(esp + 0x34);
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDAE3; /* jge: greater or equal (signed >=) */

loc_001BDADF: ;
    MEM32(esp + 0x34) = ebx;

loc_001BDAE3: ;
    edi = MEM32(eax + 4);
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDAEE; /* jge: greater or equal (signed >=) */

loc_001BDAEC: ;
    ebp = edi;

loc_001BDAEE: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    MEM32(esp + 0x10) = esi;
    eax = MEM32(eax + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = eax - edx;
    edx = MEM32(esp + 0x34);
    eax = eax - ebp;
    POP32(esp, edi);
    MEM32(esp + 0x10) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    POP32(esp, esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    MEM32(esp + 0x14) = ebp;
    POP32(esp, ebp);
    MEM32(esp + 0xC) = edx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001BDB4A; /* je: equal / zero */

loc_001BDB1E: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001BDB39; /* jp: parity */

loc_001BDB2F: ;
    MEM32(esp + 0x2C) = 0x3F800000;
    goto loc_001BDB52;

loc_001BDB39: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BDB52; /* jne: not equal / not zero */

loc_001BDB4A: ;
    MEM32(esp + 0x2C) = 0;

loc_001BDB52: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDB89; /* je: equal / zero */

loc_001BDB61: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001BDB7A; /* jp: parity */

loc_001BDB70: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    goto loc_001BDB91;

loc_001BDB7A: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BDB91; /* jne: not equal / not zero */

loc_001BDB89: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_001BDB91: ;
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDBB0; /* je: equal / zero */

loc_001BDBA7: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BDBB0u); RECOMP_ABI_CALL(0x0035BA10u, sub_0035BA10); /* call 0x0035BA10 */

loc_001BDBB0: ;
    esp = esp + 0x18;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BDBC0
 * Original: 0x001BDBC0 - 0x001BDC8E (206 bytes, 63 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDBC0(void)
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

loc_001BDBC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x19C)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    ebx = 0; /* xor self */
    PUSH32(esp, 0x001BDBD8u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001BDBD8: ;
    fp_push(MEMF(esi + 0x190)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    edi = eax;
    edi = edi << 8;
    PUSH32(esp, 0x001BDBEEu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001BDBEE: ;
    fp_push(MEMF(esi + 0x194)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    edi = edi | eax;
    edi = edi << 8;
    PUSH32(esp, 0x001BDC04u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001BDC04: ;
    fp_push(MEMF(esi + 0x198)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    edi = edi | eax;
    edi = edi << 8;
    PUSH32(esp, 0x001BDC1Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001BDC1A: ;
    ecx = MEM32(esi + 0x178);
    edx = MEM32(ecx + 0x10);
    SET_LO8(ecx, MEM8(esp + 0x10));
    edi = edi | eax;
    eax = MEM32(esi + 0x17C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + edx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDC3E; /* je: equal / zero */

loc_001BDC39: ;
    ebx = 0xF0;

loc_001BDC3E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDC46; /* je: equal / zero */

loc_001BDC43: ;
    ebx = ebx | 1;

loc_001BDC46: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDC6F; /* je: equal / zero */

loc_001BDC4B: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDC6F; /* je: equal / zero */

loc_001BDC52: ;
    ecx = eax;
    eax = MEM32(esi + 0x1A4);
    edx = 1;
    edx = edx << LO8(ecx);
    ebx = ebx | 2;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BDC6F; /* jbe: below or equal (unsigned <=) */

loc_001BDC69: ;
    MEM32(esi + 0x1A4) = edx;

loc_001BDC6F: ;
    edx = MEM32(esi + 0x1A4);
    eax = MEM32(esi + 0x1A0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BDC88u); RECOMP_ABI_CALL(0x00362430u, sub_00362430); /* call 0x00362430 */

loc_001BDC88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BDC90
 * Original: 0x001BDC90 - 0x001BDC9E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDC90(void)
{

loc_001BDC90: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x1F0);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BDCA0
 * Original: 0x001BDCA0 - 0x001BDCA7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDCA0(void)
{

loc_001BDCA0: ;
    eax = MEM32(ecx + 0x238);
    esp += 4; return; /* ret */

}

/**
 * sub_001BDCB0
 * Original: 0x001BDCB0 - 0x001BDCB7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDCB0(void)
{

loc_001BDCB0: ;
    eax = MEM32(ecx + 0x234);
    esp += 4; return; /* ret */

}

/**
 * sub_001BDCC0
 * Original: 0x001BDCC0 - 0x001BDCCD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDCC0(void)
{

loc_001BDCC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BDCD0
 * Original: 0x001BDCD0 - 0x001BDD55 (133 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDCD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BDCD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001BDCDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BDCDF: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    ecx = edi;
    PUSH32(esp, 0x001BDCECu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_001BDCEC: ;
    PUSH32(esp, 0x1DDE60);
    esi = eax;
    PUSH32(esp, 0x001BDCF8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001BDCF8: ;
    ecx = MEM32(0x5BB304);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BDD07u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001BDD07: ;
    ebx = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    MEM32(ebp) = eax;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001BDD23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BDD23: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BDD50; /* jle: less or equal (signed <=) */

loc_001BDD29: ;
    /* nop */

loc_001BDD30: ;
    eax = MEM32(esp + 0x20);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(ebp);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BDD48u); RECOMP_ABI_CALL(0x001BAFE0u, sub_001BAFE0); /* call 0x001BAFE0 */

loc_001BDD48: ;
    esp = esp + 0x14;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BDD30; /* jl: less (signed <) */

loc_001BDD50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BDD60
 * Original: 0x001BDD60 - 0x001BDE85 (293 bytes, 98 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDD60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BDD60: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = eax - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if ((eax == 0)) goto loc_001BDD97; /* je: equal / zero */

loc_001BDD6F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BDD88; /* je: equal / zero */

loc_001BDD72: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BDD79; /* je: equal / zero */

loc_001BDD75: ;
    ebx = 0; /* xor self */
    goto loc_001BDDA4;

loc_001BDD79: ;
    ebx = 5;
    MEM32(esp + 0x14) = 2;
    goto loc_001BDDA4;

loc_001BDD88: ;
    ebx = 4;
    MEM32(esp + 0x14) = 2;
    goto loc_001BDDA4;

loc_001BDD97: ;
    ebx = 2;
    MEM32(esp + 0x14) = 1;

loc_001BDDA4: ;
    eax = MEM32(esi + 0x238);
    edi = MEM32(eax + 8);
    SET_LO8(eax, MEM8(esi + 0x230));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDDCB; /* je: equal / zero */

loc_001BDDB7: ;
    ecx = MEM32(esi + 0xF0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001BDDC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BDDC4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;
    goto loc_001BDDD9;

loc_001BDDCB: ;
    eax = MEM32(esi + 0x1F0);
    eax = MEM32(eax + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;

loc_001BDDD9: ;
    ecx = MEM32(esp + 0x20);
    edi = edi + ecx * 4;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esi + 0x1ED) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BDE46; /* jle: less or equal (signed <=) */

loc_001BDDEF: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    MEM32(esp + 0x24) = ecx;
    goto loc_001BDE00;

loc_001BDDFA: ;
    eax = MEM32(esp + 0x10);
    edi = edi;

loc_001BDE00: ;
    ecx = MEM32(esi + 0x234);
    edx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ecx = MEM32(esp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_001BDE24; /* je: equal / zero */

loc_001BDE10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = eax - ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x001BDE22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BDE22: ;
    goto loc_001BDE33;

loc_001BDE24: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    eax = eax - ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x001BDE33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BDE33: ;
    edx = MEM32(edi);
    eax = MEM32(esp + 0x24);
    ebp = ebp + edx;
    edi = edi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_001BDDFA; /* jne: not equal / not zero */

loc_001BDE45: ;
    POP32(esp, ebp);

loc_001BDE46: ;
    SET_LO8(eax, MEM8(esi + 0x1EC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0x1ED) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_001BDE5E; /* je: equal / zero */

loc_001BDE57: ;
    MEM8(esi + 0x1EC) = 0;

loc_001BDE5E: ;
    eax = MEM32(esi + 0x160);
    ecx = eax;
    ecx = ecx >> 0x15;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDE7E; /* je: equal / zero */

loc_001BDE6E: ;
    eax = eax & 0xFFDFFFFFu;
    MEM32(esi + 0x160) = eax;
    PUSH32(esp, 0x001BDE7Eu); RECOMP_ABI_CALL(0x0035B120u, sub_0035B120); /* call 0x0035B120 */

loc_001BDE7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001BDE90
 * Original: 0x001BDE90 - 0x001BDF0E (126 bytes, 51 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDE90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x230));
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDED1; /* je: equal / zero */

loc_001BDEA1: ;
    ebx = edi + 0xF0;

loc_001BDEA7: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDEF5; /* je: equal / zero */

loc_001BDEAC: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x458); PUSH32(esp, 0x001BDEB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BDEB7: ;
    ecx = ZX8(MEM8(eax + 0x28));
    edx = MEM32(eax + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BDEC6u); RECOMP_ABI_CALL(0x0035D360u, sub_0035D360); /* call 0x0035D360 */

loc_001BDEC6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BDEA7; /* jl: less (signed <) */

loc_001BDECF: ;
    goto loc_001BDEF5;

loc_001BDED1: ;
    ebx = edi + 0x1F0;

loc_001BDED7: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDEF5; /* je: equal / zero */

loc_001BDEDD: ;
    ecx = ZX8(MEM8(eax + 0x38));
    edx = MEM32(eax + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BDEECu); RECOMP_ABI_CALL(0x0035D360u, sub_0035D360); /* call 0x0035D360 */

loc_001BDEEC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BDED7; /* jl: less (signed <) */

loc_001BDEF5: ;
    edi = MEM32(edi + 0x234);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDF0A; /* je: equal / zero */

loc_001BDEFF: ;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BDF0Au); RECOMP_ABI_CALL(0x0035C2A0u, sub_0035C2A0); /* call 0x0035C2A0 */

loc_001BDF0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BDF10
 * Original: 0x001BDF10 - 0x001BDF2C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDF10: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x65 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDF21; /* jne: not equal / not zero */

loc_001BDF19: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x001BDF21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BDF21: ;
    ecx = esi;
    PUSH32(esp, 0x001BDF28u); RECOMP_ABI_CALL(0x001B0450u, sub_001B0450); /* call 0x001B0450 */

loc_001BDF28: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BDF30
 * Original: 0x001BDF30 - 0x001BDFA4 (116 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDF30: ;
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_001BDF90; /* je: equal / zero */

loc_001BDF41: ;
    MEM8(eax + 0x1C) = 1;
    ecx = MEM32(ecx + 0x44);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esi) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BDF96; /* jle: less or equal (signed <=) */

loc_001BDF56: ;
    PUSH32(esp, ebx);

loc_001BDF57: ;
    ebx = ZX8(MEM8(eax + 1));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + 3));
    edi = edi + 4;
    eax = eax + 4;
    SET_LO8(edx, MEM8(eax + -4));
    edx = edx << 8;
    edx = edx | ebx;
    ebx = ZX8(MEM8(eax + -2));
    edx = edx << 8;
    edx = edx | ebx;
    MEM32(edi + -4) = edx;
    edx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BDF57; /* jl: less (signed <) */

loc_001BDF81: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001BDF90: ;
    MEM32(esi) = 0;

loc_001BDF96: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BDFB0
 * Original: 0x001BDFB0 - 0x001BE1CB (539 bytes, 196 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDFB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BDFB0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001BDFBCu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_001BDFBC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BDFC2u); RECOMP_ABI_CALL(0x00231770u, sub_00231770); /* call 0x00231770 */

loc_001BDFC2: ;
    ecx = MEM32(esp + 0x1C);
    esp = esp + 4;
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DB1FC);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001BDFD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BDFD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BDFFD; /* je: equal / zero */

loc_001BDFDC: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001BDFECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BDFEC: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20534444) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x20534444 (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001BE01E; /* je: equal / zero */

loc_001BDFF8: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001BDFFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BDFFD: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001BE014; /* jne: not equal / not zero */

loc_001BE00D: ;
    ecx = edi;
    PUSH32(esp, 0x001BE014u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001BE014: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_001BE01E: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7C);
    ebp = esi + 0x5C;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001BE02Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE02D: ;
    eax = MEM32(esi + 0x68);
    ebx = MEM32(esi + 0x64);
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0xC8);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = 1;
    edx = MEM32(ebp + 4);
    eax = eax & 0xFE00;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x800000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BE05B; /* je: equal / zero */

loc_001BE058: ;
    ecx = MEM32(ebp + 0x14);

loc_001BE05B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_001BE063; /* ja: above (unsigned >) */

loc_001BE05F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001BE086; /* jbe: below or equal (unsigned <=) */

loc_001BE063: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001BE07A; /* jne: not equal / not zero */

loc_001BE073: ;
    ecx = edi;
    PUSH32(esp, 0x001BE07Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001BE07A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_001BE086: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001BE08Cu); RECOMP_ABI_CALL(0x001B0770u, sub_001B0770); /* call 0x001B0770 */

loc_001BE08C: ;
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001BE094u); RECOMP_ABI_CALL(0x001B0670u, sub_001B0670); /* call 0x001B0670 */

loc_001BE094: ;
    ecx = eax;
    PUSH32(esp, ebp);
    MEM32(esi + 0x2C) = ecx;
    PUSH32(esp, 0x001BE09Fu); RECOMP_ABI_CALL(0x001B0220u, sub_001B0220); /* call 0x001B0220 */

loc_001BE09F: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BE11A; /* je: equal / zero */

loc_001BE0A6: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BE0E2; /* jne: not equal / not zero */

loc_001BE0AD: ;
    ecx = MEM32(esi + 0x68);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001BE0BC; /* jg: greater (signed >) */

loc_001BE0B7: ;
    ecx = 1;

loc_001BE0BC: ;
    eax = ebx;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001BE0CA; /* jg: greater (signed >) */

loc_001BE0C5: ;
    eax = 1;

loc_001BE0CA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xC (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = edx * 8 + 8;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEM32(esi + 0x6C) = edx;

loc_001BE0E2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xC (32-bit) */
    eax = MEM32(esi + 0x6C);
    MEM32(esi + 0x30) = eax;
    eax = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001BE0F7; /* je: equal / zero */

loc_001BE0F2: ;
    eax = 2;

loc_001BE0F7: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM8(esi + 0x50) = 1;
    PUSH32(esp, 0x001BE112u); RECOMP_ABI_CALL(0x001B0550u, sub_001B0550); /* call 0x001B0550 */

loc_001BE112: ;
    esp = esp + 0xC;
    MEM32(esi + 0x4C) = eax;
    goto loc_001BE14B;

loc_001BE11A: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x68);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001BE136u); RECOMP_ABI_CALL(0x001AC1E0u, sub_001AC1E0); /* call 0x001AC1E0 */

loc_001BE136: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x4C) = edx;

loc_001BE14B: ;
    ecx = esi;
    MEM32(esi + 0x18) = 0x65;
    PUSH32(esp, 0x001BE159u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_001BE159: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BE171; /* jne: not equal / not zero */

loc_001BE163: ;
    eax = MEM32(0x46A6D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BE16Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001BE16E: ;
    esp = esp + 4;

loc_001BE171: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x001BE184u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE184: ;
    ecx = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    MEM32(esi + 0x34) = eax;
    MEM8(esi + 0x3C) = 1;
    edx = MEM32(edi);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001BE199u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE199: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001BE1A1u); RECOMP_ABI_CALL(0x001B08F0u, sub_001B08F0); /* call 0x001B08F0 */

loc_001BE1A1: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001BE1A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE1A8: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001BE1BF; /* jne: not equal / not zero */

loc_001BE1B8: ;
    ecx = edi;
    PUSH32(esp, 0x001BE1BFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001BE1BF: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BE1D0
 * Original: 0x001BE1D0 - 0x001BE26B (155 bytes, 48 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE1D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001BE22D; /* jg: greater (signed >) */

loc_001BE1D9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001BE215; /* je: equal / zero */

loc_001BE1DB: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_001BE1FD; /* je: equal / zero */

loc_001BE1E0: ;
    eax = eax - 6;
    if ((eax != 0)) goto loc_001BE239; /* jne: not equal / not zero */

loc_001BE1E5: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BE1F5; /* je: equal / zero */

loc_001BE1ED: ;
    eax = 0x1B0DF0;
    esp += 16; return; /* ret 12 */

loc_001BE1F5: ;
    eax = 0x1B19C0;
    esp += 16; return; /* ret 12 */

loc_001BE1FD: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BE20D; /* je: equal / zero */

loc_001BE205: ;
    eax = 0x1B1A80;
    esp += 16; return; /* ret 12 */

loc_001BE20D: ;
    eax = 0x1B1AE0;
    esp += 16; return; /* ret 12 */

loc_001BE215: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BE225; /* je: equal / zero */

loc_001BE21D: ;
    eax = 0x1B0F20;
    esp += 16; return; /* ret 12 */

loc_001BE225: ;
    eax = 0x1B1A20;
    esp += 16; return; /* ret 12 */

loc_001BE22D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE256; /* je: equal / zero */

loc_001BE232: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10001 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE23E; /* je: equal / zero */

loc_001BE239: ;
    eax = 0; /* xor self */
    esp += 16; return; /* ret 12 */

loc_001BE23E: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BE24E; /* je: equal / zero */

loc_001BE246: ;
    eax = 0x1ACBA0;
    esp += 16; return; /* ret 12 */

loc_001BE24E: ;
    eax = 0x1ACB30;
    esp += 16; return; /* ret 12 */

loc_001BE256: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = 0x1B0EB0;
    if (TEST_NZ(_fa, _fb)) goto loc_001BE268; /* jne: not equal / not zero */

loc_001BE263: ;
    eax = 0x1B1060;

loc_001BE268: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BE270
 * Original: 0x001BE270 - 0x001BE293 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE270(void)
{

loc_001BE270: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x3FF);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x001BE287u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_001BE287: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001BE28Fu); RECOMP_ABI_CALL(0x00209880u, sub_00209880); /* call 0x00209880 */

loc_001BE28F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BE2A0
 * Original: 0x001BE2A0 - 0x001BE2E6 (70 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE2A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001BE2A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE2A9: ;
    esi = MEM32(edi + 0xC);
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001BE2B9u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_001BE2B9: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BE2D1; /* jle: less or equal (signed <=) */

loc_001BE2C2: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE2C2; /* jl: less (signed <) */

loc_001BE2D1: ;
    MEM32(esi + 8) = 0;
    MEM32(edi + 8) = 0;
    MEM8(edi + 0x10) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BE2F0
 * Original: 0x001BE2F0 - 0x001BEF37 (3143 bytes, 1024 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE2F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BE2F0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001BEF2F; /* jne: not equal / not zero */

loc_001BE304: ;
    SET_LO8(eax, MEM8(0x462154));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BEF2F; /* jne: not equal / not zero */

loc_001BE311: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001BE31Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE31E: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001BEF2F; /* jle: less or equal (signed <=) */

loc_001BE328: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001BE336; /* jge: greater or equal (signed >=) */

loc_001BE32F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001BE336u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE336: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi + 0x10) = 1;
    edi = 0x800808;
    if (TEST_S(_fas, _fbs)) goto loc_001BE491; /* jl: less (signed <) */

loc_001BE34A: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E3CA0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E4);
    PUSH32(esp, 0x462158);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BE36Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE36E: ;
    ecx = eax;
    edx = ebp + -6;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = edx;
    edi = edi >> 0x1F;
    edi = edi + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    eax = 0x800008;
    ebx = esp;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = ecx;
    ecx = esi;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & edi;
    MEM32(esp + 0x24) = edx;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    MEM32(ebx + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BE3ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE3AC: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E3CA0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E4);
    PUSH32(esp, 0x462340);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BE3D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE3D0: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    ebx = esp;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edi;
    MEM32(esp + 0x24) = ecx;
    ecx = 0x800808;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = eax;
    eax = MEM32(esp + 0x24);
    ecx = esi;
    MEM32(ebx + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BE3FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE3FB: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E3CA0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E4);
    PUSH32(esp, 0x462528);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BE41Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE41F: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edi;
    MEM32(esp + 0x18) = ecx;
    ecx = 0x804008;
    esp = esp - 0xC;
    ebx = esp;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = eax;
    eax = MEM32(esp + 0x24);
    ecx = esi;
    MEM32(ebx + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BE44Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE44A: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E3CA0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E4);
    PUSH32(esp, 0x462710);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BE46Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE46E: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    ebx = esp;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edi;
    edi = 0x804808;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BE491u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE491: ;
    eax = MEM32(esi + 0x1C);
    edi = edi & 0xFFFFBC7Fu;
    edi = edi | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001BE556; /* jl: less (signed <) */

loc_001BE4A5: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x3E3CB8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E4);
    PUSH32(esp, 0x4628F8);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BE4C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE4C9: ;
    ecx = eax;
    edx = ebp + -6;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = MEM32(esi);
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC78Fu;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebx;
    MEM32(esp + 0x24) = edx;
    edx = esp;
    MEM32(edx) = edi;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001BE508u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE508: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x3E3CB8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E4);
    PUSH32(esp, 0x462AE0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BE52Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE52C: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCF8Fu;
    esp = esp - 0xC;
    edi = edi | 0x800;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BE556u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE556: ;
    ecx = MEM32(esi + 0x14);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE623; /* jl: less (signed <) */

loc_001BE566: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE623; /* jl: less (signed <) */

loc_001BE56F: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3CDC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x244);
    PUSH32(esp, 0x464888);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BE593u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE593: ;
    ecx = eax;
    edx = ebp + -8;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = MEM32(esi);
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC79Fu;
    edi = edi | 0x10;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebx;
    MEM32(esp + 0x24) = edx;
    edx = esp;
    MEM32(edx) = edi;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001BE5D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE5D5: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3CDC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x244);
    PUSH32(esp, 0x464AD0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BE5F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE5F9: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCF9Fu;
    esp = esp - 0xC;
    edi = edi | 0x810;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BE623u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE623: ;
    ecx = MEM32(esi + 0x14);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE6F0; /* jl: less (signed <) */

loc_001BE633: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE6F0; /* jl: less (signed <) */

loc_001BE63C: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3D0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x264);
    PUSH32(esp, 0x465958);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BE660u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE660: ;
    ecx = eax;
    edx = ebp + -10;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = MEM32(esi);
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC7AFu;
    edi = edi | 0x20;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebx;
    MEM32(esp + 0x24) = edx;
    edx = esp;
    MEM32(edx) = edi;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001BE6A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE6A2: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3D0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x264);
    PUSH32(esp, 0x465BC0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BE6C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE6C6: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCFAFu;
    esp = esp - 0xC;
    edi = edi | 0x820;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BE6F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE6F0: ;
    ecx = MEM32(esi + 0x14);
    eax = 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE7BD; /* jl: less (signed <) */

loc_001BE700: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE7BD; /* jl: less (signed <) */

loc_001BE709: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3D3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x294);
    PUSH32(esp, 0x466B28);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BE72Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE72D: ;
    ecx = eax;
    edx = ebp + -12;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = MEM32(esi);
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC7BFu;
    edi = edi | 0x30;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebx;
    MEM32(esp + 0x24) = edx;
    edx = esp;
    MEM32(edx) = edi;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001BE76Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE76F: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3D3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x294);
    PUSH32(esp, 0x466DC0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BE793u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE793: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCFBFu;
    esp = esp - 0xC;
    edi = edi | 0x830;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BE7BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE7BD: ;
    ecx = MEM32(esi + 0x14);
    eax = 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE889; /* jl: less (signed <) */

loc_001BE7CD: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE889; /* jl: less (signed <) */

loc_001BE7D6: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E3D6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C4);
    PUSH32(esp, 0x467058);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BE7F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE7F9: ;
    ecx = eax;
    edx = ebp + -14;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = 0; /* xor self */
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC7CFu;
    edi = edi | 0x40;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ebx;
    MEM32(esp + 0x24) = eax;
    eax = esp;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BE83Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE83B: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3D6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C4);
    PUSH32(esp, 0x467320);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BE85Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE85F: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCFCFu;
    esp = esp - 0xC;
    edi = edi | 0x840;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BE889u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE889: ;
    ecx = MEM32(esi + 0x18);
    edi = edi & 0xFFFFBF8Fu;
    eax = 1;
    edi = edi | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE961; /* jl: less (signed <) */

loc_001BE8A1: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE961; /* jl: less (signed <) */

loc_001BE8AA: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3D9C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B4);
    PUSH32(esp, 0x462CC8);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BE8CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE8CE: ;
    ecx = eax;
    edx = ebp + -9;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = MEM32(esi);
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC4FFu;
    edi = edi | 0x80;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebx;
    MEM32(esp + 0x24) = edx;
    edx = esp;
    MEM32(edx) = edi;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001BE913u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE913: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3D9C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B4);
    PUSH32(esp, 0x462F80);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BE937u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE937: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCCFFu;
    esp = esp - 0xC;
    edi = edi | 0x880;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BE961u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE961: ;
    ecx = MEM32(esi + 0x18);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEA31; /* jl: less (signed <) */

loc_001BE971: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEA31; /* jl: less (signed <) */

loc_001BE97A: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3DCC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x324);
    PUSH32(esp, 0x463238);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BE99Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE99E: ;
    ecx = eax;
    edx = ebp + -12;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = MEM32(esi);
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC57Fu;
    edi = edi | 0x100;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebx;
    MEM32(esp + 0x24) = edx;
    edx = esp;
    MEM32(edx) = edi;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001BE9E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BE9E3: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3DCC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x324);
    PUSH32(esp, 0x463560);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BEA07u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEA07: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCD7Fu;
    esp = esp - 0xC;
    edi = edi | 0x900;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BEA31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEA31: ;
    ecx = MEM32(esi + 0x18);
    eax = 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEB01; /* jl: less (signed <) */

loc_001BEA41: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEB01; /* jl: less (signed <) */

loc_001BEA4A: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3DFC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B4);
    PUSH32(esp, 0x463888);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BEA6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEA6E: ;
    ecx = eax;
    edx = ebp + -15;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = MEM32(esi);
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC5FFu;
    edi = edi | 0x180;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebx;
    MEM32(esp + 0x24) = edx;
    edx = esp;
    MEM32(edx) = edi;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001BEAB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEAB3: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3DFC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B4);
    PUSH32(esp, 0x463C40);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BEAD7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEAD7: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCDFFu;
    esp = esp - 0xC;
    edi = edi | 0x980;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BEB01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEB01: ;
    ecx = MEM32(esi + 0x18);
    eax = 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEBD0; /* jl: less (signed <) */

loc_001BEB11: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEBD0; /* jl: less (signed <) */

loc_001BEB1A: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E3E2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x444);
    PUSH32(esp, 0x463FF8);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BEB3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEB3D: ;
    ecx = eax;
    edx = ebp + -18;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = 0; /* xor self */
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC67Fu;
    edi = edi | 0x200;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ebx;
    MEM32(esp + 0x24) = eax;
    eax = esp;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BEB82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEB82: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E3E2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x444);
    PUSH32(esp, 0x464440);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BEBA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEBA6: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCE7Fu;
    esp = esp - 0xC;
    edi = edi | 0xA00;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BEBD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEBD0: ;
    ecx = MEM32(esi + 0x14);
    edi = edi & 0xFFFFBFFFu;
    eax = 1;
    edi = edi | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BECB2; /* jl: less (signed <) */

loc_001BEBE8: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BECB2; /* jl: less (signed <) */

loc_001BEBF1: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BECB2; /* jl: less (signed <) */

loc_001BEBFB: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x3E3E5C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C4);
    PUSH32(esp, 0x464D18);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BEC1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEC1F: ;
    ecx = eax;
    edx = ebp + -13;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = MEM32(esi);
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC49Fu;
    edi = edi | 0x90;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebx;
    MEM32(esp + 0x24) = edx;
    edx = esp;
    MEM32(edx) = edi;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001BEC64u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEC64: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x3E3E5C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C4);
    PUSH32(esp, 0x464FE0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BEC88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEC88: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCC9Fu;
    esp = esp - 0xC;
    edi = edi | 0x890;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BECB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BECB2: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BED87; /* jl: less (signed <) */

loc_001BECBC: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BED87; /* jl: less (signed <) */

loc_001BECC6: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BED87; /* jl: less (signed <) */

loc_001BECD0: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x3E3E98);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2F4);
    PUSH32(esp, 0x465E28);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BECF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BECF4: ;
    ecx = eax;
    edx = ebp + -13;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = MEM32(esi);
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC4AFu;
    edi = edi | 0xA0;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebx;
    MEM32(esp + 0x24) = edx;
    edx = esp;
    MEM32(edx) = edi;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001BED39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BED39: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x3E3E98);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2F4);
    PUSH32(esp, 0x466120);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BED5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BED5D: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCCAFu;
    esp = esp - 0xC;
    edi = edi | 0x8A0;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BED87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BED87: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEE5C; /* jl: less (signed <) */

loc_001BED91: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEE5C; /* jl: less (signed <) */

loc_001BED9B: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEE5C; /* jl: less (signed <) */

loc_001BEDA5: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x3E3ED4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x354);
    PUSH32(esp, 0x4652A8);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BEDC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEDC9: ;
    ecx = eax;
    edx = ebp + -16;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = MEM32(esi);
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC51Fu;
    edi = edi | 0x110;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebx;
    MEM32(esp + 0x24) = edx;
    edx = esp;
    MEM32(edx) = edi;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001BEE0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEE0E: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x3E3ED4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x354);
    PUSH32(esp, 0x465600);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4FC); PUSH32(esp, 0x001BEE32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEE32: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCD1Fu;
    esp = esp - 0xC;
    edi = edi | 0x910;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BEE5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEE5C: ;
    ecx = MEM32(esi + 0x14);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEF2F; /* jl: less (signed <) */

loc_001BEE6C: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEF2F; /* jl: less (signed <) */

loc_001BEE75: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEF2F; /* jl: less (signed <) */

loc_001BEE7F: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x3E3F10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x384);
    PUSH32(esp, 0x466418);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BEEA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEEA3: ;
    ecx = eax;
    ebp = ebp + 0xFFFFFFF0u;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebp;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    esp = esp - 0xC;
    edi = edi & 0xFFFFC52Fu;
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edi = edi | 0x120;
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ebx;
    ecx = esi;
    MEM32(ebp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BEEE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEEE1: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x3E3F10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x384);
    PUSH32(esp, 0x4667A0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x001BEF05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEF05: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = edi & 0xFFFFCD2Fu;
    esp = esp - 0xC;
    edi = edi | 0x920;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebx = esp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001BEF2Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEF2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001BEF40
 * Original: 0x001BEF40 - 0x001BF590 (1616 bytes, 515 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEF40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BEF40: ;
    esp = esp - 0x18;
    edx = MEM32(ecx + 0x50);
    eax = MEM32(ecx + 0x48);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xD (32-bit) */
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 8);
    MEM8(esp + 7) = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* setne */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001BF589; /* jle: less or equal (signed <=) */

loc_001BEF6A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);

loc_001BEF75: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 0x20);
    esi = MEM32(eax + ecx * 4);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0x1C) = 0xFFFFFFFFu;
    eax = MEM32(ecx);
    MEM32(esp + 0x2C) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001BEF95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BEF95: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF003; /* jne: not equal / not zero */

loc_001BEFAA: ;
    ecx = MEM32(edx + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF003; /* je: equal / zero */

loc_001BEFB1: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF55E; /* je: equal / zero */

loc_001BEFBD: ;
    ebx = ZX8(MEM8(esp + 0x34));
    edx = MEM32(edx + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    edx = edx + edi;
    eax = edi + ebp;
    edx = edx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BF55E; /* jae: above or equal (unsigned >=) */

loc_001BEFD7: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    edx = edx + edi;
    eax = eax + ebx;
    edx = edx + ebp;
    ecx = ecx + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BEFD7; /* jb: below (unsigned <) */

loc_001BEFFE: ;
    goto loc_001BF55E;

loc_001BF003: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF061; /* jne: not equal / not zero */

loc_001BF008: ;
    ecx = MEM32(edx + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF061; /* je: equal / zero */

loc_001BF00F: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF55E; /* je: equal / zero */

loc_001BF01B: ;
    ebx = ZX8(MEM8(esp + 0x34));
    edx = MEM32(edx + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    edx = edx + edi;
    eax = edi + ebp;
    edx = edx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BF55E; /* jae: above or equal (unsigned >=) */

loc_001BF035: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    edx = edx + edi;
    eax = eax + ebx;
    edx = edx + ebp;
    ecx = ecx + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BF035; /* jb: below (unsigned <) */

loc_001BF05C: ;
    goto loc_001BF55E;

loc_001BF061: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF15E; /* jne: not equal / not zero */

loc_001BF06A: ;
    eax = MEM32(0x5BC930);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BF078u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF078: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_001BF0DD; /* je: equal / zero */

loc_001BF07F: ;
    ebx = ZX8(MEM8(esp + 0x34));
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 0x1C) = ebx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x30));
    ebx = ebx + edi;
    eax = edi + ebp;
    ebx = ebx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001BF55E; /* jae: above or equal (unsigned >=) */

loc_001BF0A7: ;
    goto loc_001BF0B0;

    /* nop */

loc_001BF0B0: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 6);
    PUSH32(esp, 0x001BF0BBu); RECOMP_ABI_CALL(0x002404A0u, sub_002404A0); /* call 0x002404A0 */

loc_001BF0BB: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    MEM32(ecx) = eax;
    ecx = ecx + MEM32(esp + 0x1C);
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x18) = edx;
    if (CMP_B(_fa, _fb)) goto loc_001BF0B0; /* jb: below (unsigned <) */

loc_001BF0D8: ;
    goto loc_001BF55E;

loc_001BF0DD: ;
    eax = MEM32(0x5BC410);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BF0E8u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF0E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF56B; /* je: equal / zero */

loc_001BF0F0: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x10);
    ecx = ZX8(MEM8(esp + 0x34));
    MEM32(esp + 0x1C) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = ecx + edi;
    eax = edi + ebp;
    ecx = ecx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001BF55E; /* jae: above or equal (unsigned >=) */

loc_001BF119: ;
    /* nop */

loc_001BF120: ;
    eax = MEM32(edx);
    edx = ZX8(MEM8(edx + 2));
    ebx = eax;
    ebx = ebx & 0xFF;
    ebx = ebx << 0x10;
    ebx = ebx | edx;
    edx = MEM32(esp + 0x1C);
    eax = eax & 0xFF00FF00u;
    ebx = ebx | eax;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = ebx;
    eax = eax + edx;
    edx = MEM32(esp + 0x18);
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_B(_fa, _fb)) goto loc_001BF120; /* jb: below (unsigned <) */

loc_001BF159: ;
    goto loc_001BF55E;

loc_001BF15E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF2D8; /* jne: not equal / not zero */

loc_001BF167: ;
    _fa = (uint32_t)(MEM8(edx + 0x50)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x50), 0xC (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF3D9; /* je: equal / zero */

loc_001BF171: ;
    eax = MEM32(0x5BC3F4);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = 0x10;
    PUSH32(esp, 0x001BF187u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF187: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF1F5; /* je: equal / zero */

loc_001BF18B: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001BF3D9; /* ja: above (unsigned >) */

loc_001BF195: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 0x1C) = edx;
    edx = ZX8(MEM8(esp + 0x34));
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    edx = edx + edi;
    eax = edi + ebp;
    edx = edx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BF55E; /* jae: above or equal (unsigned >=) */

loc_001BF1B6: ;
    ecx = 0; /* xor self */

loc_001BF1B8: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BF1E5; /* jbe: below or equal (unsigned <=) */

loc_001BF1C8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BF1D6; /* jae: above or equal (unsigned >=) */

loc_001BF1CD: ;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx);
    MEM32(eax + ecx * 4) = ebx;

loc_001BF1D6: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 4;
    ebx = MEM32(esi + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BF1C8; /* jb: below (unsigned <) */

loc_001BF1E3: ;
    ecx = 0; /* xor self */

loc_001BF1E5: ;
    ebx = ZX8(MEM8(esp + 0x34));
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BF1B8; /* jb: below (unsigned <) */

loc_001BF1F0: ;
    goto loc_001BF55E;

loc_001BF1F5: ;
    eax = MEM32(0x5BC94C);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BF203u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF203: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_001BF249; /* je: equal / zero */

loc_001BF20A: ;
    edx = MEM32(ecx + 0x10);
    ecx = ZX8(MEM8(esp + 0x34));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = ecx + edi;
    eax = edi + ebp;
    ecx = ecx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BF55E; /* jae: above or equal (unsigned >=) */

loc_001BF224: ;
    ebx = MEM32(edx);
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    ebx = 0; /* xor self */
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    ebx = ZX8(MEM8(esp + 0x34));
    eax = eax + ebx;
    edx = edx + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BF224; /* jb: below (unsigned <) */

loc_001BF244: ;
    goto loc_001BF55E;

loc_001BF249: ;
    edx = MEM32(0x5BC944);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF255u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF255: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF2A0; /* je: equal / zero */

loc_001BF259: ;
    ecx = ZX8(MEM8(esp + 0x34));
    eax = MEM32(esi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    edx = MEM32(eax + 0x10);
    ecx = ecx + edi;
    eax = edi + ebp;
    ecx = ecx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BF55E; /* jae: above or equal (unsigned >=) */

loc_001BF276: ;
    ebx = MEM32(edx);
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(eax + 8) = ebx;
    ebx = ZX8(MEM8(esp + 0x34));
    MEM32(eax + 0xC) = 0;
    eax = eax + ebx;
    edx = edx + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BF276; /* jb: below (unsigned <) */

loc_001BF29B: ;
    goto loc_001BF55E;

loc_001BF2A0: ;
    edx = MEM32(0x5BC938);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF2AFu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF2AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF3D9; /* je: equal / zero */

loc_001BF2B7: ;
    eax = MEM32(esi + 0x18);
    ecx = ZX8(MEM8(esp + 0x34));
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi + ebp;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x001BF2D3u); RECOMP_ABI_CALL(0x001B7230u, sub_001B7230); /* call 0x001B7230 */

loc_001BF2D3: ;
    goto loc_001BF55E;

loc_001BF2D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF3E6; /* jne: not equal / not zero */

loc_001BF2E1: ;
    _fa = (uint32_t)(MEM8(edx + 0x50)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x50), 0xC (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF3D9; /* je: equal / zero */

loc_001BF2EB: ;
    edx = MEM32(0x5BC940);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = 4;
    PUSH32(esp, 0x001BF302u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF302: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF34A; /* je: equal / zero */

loc_001BF306: ;
    ecx = ZX8(MEM8(esp + 0x34));
    eax = MEM32(esi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    edx = MEM32(eax + 0x10);
    ecx = ecx + edi;
    eax = edi + ebp;
    ecx = ecx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BF55E; /* jae: above or equal (unsigned >=) */

loc_001BF323: ;
    SET_LO8(ebx, MEM8(edx));
    MEM8(eax) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx + 1));
    MEM8(eax + 1) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx + 2));
    MEM8(eax + 2) = LO8(ebx);
    ebx = ZX8(MEM8(esp + 0x34));
    MEM8(eax + 3) = 0;
    eax = eax + ebx;
    edx = edx + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BF323; /* jb: below (unsigned <) */

loc_001BF345: ;
    goto loc_001BF55E;

loc_001BF34A: ;
    edx = MEM32(0x5BC3F8);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF359u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF359: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF3C2; /* je: equal / zero */

loc_001BF35D: ;
    edx = ZX8(MEM8(esp + 0x34));
    eax = MEM32(esi + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    ecx = MEM32(eax + 0x10);
    edx = edx + edi;
    eax = edi + ebp;
    edx = edx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_001BF55E; /* jae: above or equal (unsigned >=) */

loc_001BF37E: ;
    edi = edi;

loc_001BF380: ;
    MEM8(eax) = 0;
    MEM8(eax + 1) = 0;
    MEM8(eax + 2) = 0;
    MEM8(eax + 3) = 0;
    ebx = MEM32(esi + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001BF3B2; /* jbe: below or equal (unsigned <=) */

loc_001BF398: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BF3A6; /* jae: above or equal (unsigned >=) */

loc_001BF39D: ;
    ebx = MEM32(esp + 0x1C);
    SET_LO8(ebx, MEM8(ebx));
    MEM8(ecx + eax) = LO8(ebx);

loc_001BF3A6: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(esi + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BF398; /* jb: below (unsigned <) */

loc_001BF3B2: ;
    ecx = ZX8(MEM8(esp + 0x34));
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BF380; /* jb: below (unsigned <) */

loc_001BF3BD: ;
    goto loc_001BF55E;

loc_001BF3C2: ;
    edx = MEM32(0x5BC930);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF3D1u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF3D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF542; /* jne: not equal / not zero */

loc_001BF3D9: ;
    MEM32(esp + 0x2C) = 0;
    goto loc_001BF55E;

loc_001BF3E6: ;
    edx = MEM32(0x5BC3F4);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF3F5u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF3F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF41A; /* je: equal / zero */

loc_001BF3F9: ;
    eax = MEM32(esi + 0x18);
    ecx = ZX8(MEM8(esp + 0x34));
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi + ebp;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x001BF415u); RECOMP_ABI_CALL(0x001B7370u, sub_001B7370); /* call 0x001B7370 */

loc_001BF415: ;
    goto loc_001BF55E;

loc_001BF41A: ;
    edx = MEM32(0x5BC94C);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF429u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF429: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF44E; /* je: equal / zero */

loc_001BF42D: ;
    eax = MEM32(esi + 0x18);
    ecx = ZX8(MEM8(esp + 0x34));
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi + ebp;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x001BF449u); RECOMP_ABI_CALL(0x001B73F0u, sub_001B73F0); /* call 0x001B73F0 */

loc_001BF449: ;
    goto loc_001BF55E;

loc_001BF44E: ;
    edx = MEM32(0x5BC944);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF45Du); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF45D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF482; /* je: equal / zero */

loc_001BF461: ;
    eax = MEM32(esi + 0x18);
    ecx = ZX8(MEM8(esp + 0x34));
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi + ebp;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x001BF47Du); RECOMP_ABI_CALL(0x001B7490u, sub_001B7490); /* call 0x001B7490 */

loc_001BF47D: ;
    goto loc_001BF55E;

loc_001BF482: ;
    edx = MEM32(0x5BC938);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF491u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF491: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF2B7; /* jne: not equal / not zero */

loc_001BF499: ;
    edx = MEM32(0x5BC410);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF4A8u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF4A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF4CD; /* je: equal / zero */

loc_001BF4AC: ;
    eax = MEM32(esi + 0x18);
    ecx = ZX8(MEM8(esp + 0x34));
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi + ebp;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x001BF4C8u); RECOMP_ABI_CALL(0x001B7560u, sub_001B7560); /* call 0x001B7560 */

loc_001BF4C8: ;
    goto loc_001BF55E;

loc_001BF4CD: ;
    edx = MEM32(0x5BC3F8);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF4DCu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF4DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF4FE; /* je: equal / zero */

loc_001BF4E0: ;
    eax = MEM32(esi + 0x18);
    ecx = ZX8(MEM8(esp + 0x34));
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi + ebp;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x001BF4FCu); RECOMP_ABI_CALL(0x001B75B0u, sub_001B75B0); /* call 0x001B75B0 */

loc_001BF4FC: ;
    goto loc_001BF55E;

loc_001BF4FE: ;
    edx = MEM32(0x5BC940);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF50Du); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF50D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF52F; /* je: equal / zero */

loc_001BF511: ;
    eax = MEM32(esi + 0x18);
    ecx = ZX8(MEM8(esp + 0x34));
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi + ebp;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x001BF52Du); RECOMP_ABI_CALL(0x001B7600u, sub_001B7600); /* call 0x001B7600 */

loc_001BF52D: ;
    goto loc_001BF55E;

loc_001BF52F: ;
    edx = MEM32(0x5BC930);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF53Eu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001BF53E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF56B; /* je: equal / zero */

loc_001BF542: ;
    eax = MEM32(esi + 0x18);
    ecx = ZX8(MEM8(esp + 0x34));
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = edi + ebp;
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BF55Eu); RECOMP_ABI_CALL(0x001B7310u, sub_001B7310); /* call 0x001B7310 */

loc_001BF55E: ;
    eax = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x30);
    MEM32(esi + 0x1C) = edi;
    edi = edi + eax;

loc_001BF56B: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(edx + 0x48);
    edx = MEM32(eax + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001BEF75; /* jl: less (signed <) */

loc_001BF586: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001BF589: ;
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BF590
 * Original: 0x001BF590 - 0x001BF63D (173 bytes, 81 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BF590: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = MEM32(edx);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001BF5B3; /* jne: not equal / not zero */

loc_001BF5A7: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BF5B3: ;
    ecx = esi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001BF636; /* ja: above (unsigned >) */

loc_001BF5BB: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1BF640); /* switch: 10 entries, 10 targets */
    if (_jt == 0x001BF5C2u) goto loc_001BF5C2;
    if (_jt == 0x001BF5C5u) goto loc_001BF5C5;
    if (_jt == 0x001BF5C9u) goto loc_001BF5C9;
    if (_jt == 0x001BF5D5u) goto loc_001BF5D5;
    if (_jt == 0x001BF5E8u) goto loc_001BF5E8;
    if (_jt == 0x001BF5FBu) goto loc_001BF5FB;
    if (_jt == 0x001BF60Eu) goto loc_001BF60E;
    if (_jt == 0x001BF61Cu) goto loc_001BF61C;
    if (_jt == 0x001BF62Au) goto loc_001BF62A;
    if (_jt == 0x001BF636u) goto loc_001BF636;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001BF5C2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BF636; /* je: equal / zero */

loc_001BF5C5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BF5C9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BF636; /* je: equal / zero */

loc_001BF5CC: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    if ((eax == 0)) goto loc_001BF636; /* je: equal / zero */

loc_001BF5D1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BF5D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001BF636; /* je: equal / zero */

loc_001BF5DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001BF5E4; /* jle: less or equal (signed <=) */

loc_001BF5DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001BF636; /* jle: less or equal (signed <=) */

loc_001BF5E4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BF5E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001BF636; /* jl: less (signed <) */

loc_001BF5ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001BF5F7; /* jle: less or equal (signed <=) */

loc_001BF5F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001BF636; /* jne: not equal / not zero */

loc_001BF5F7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BF5FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001BF60A; /* je: equal / zero */

loc_001BF600: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001BF636; /* jle: less or equal (signed <=) */

loc_001BF605: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001BF636; /* jg: greater (signed >) */

loc_001BF60A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BF60E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001BF636; /* jl: less (signed <) */

loc_001BF613: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001BF636; /* jg: greater (signed >) */

loc_001BF618: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BF61C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001BF5F7; /* je: equal / zero */

loc_001BF621: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001BF636; /* jne: not equal / not zero */

loc_001BF626: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BF62A: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    eax = ecx;
    esp += 4; return; /* ret */

loc_001BF636: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BF670
 * Original: 0x001BF670 - 0x001BFC9A (1578 bytes, 467 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF670(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BF670: ;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x48);
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), eax (32-bit) */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x18) = eax;
    MEM8(esp + 7) = LO8(eax);
    MEM8(esp + 6) = LO8(eax);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001BFC24; /* jle: less or equal (signed <=) */

loc_001BF6A6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_001BF6B0: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x20);
    edi = MEM32(ecx + edx * 4);
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    ebp = MEM32(edi + 0x18);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001BF6C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BF6C8: ;
    ebx = eax;
    eax = MEM32(edi + 0x10);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001BFBCC; /* ja: above (unsigned >) */

loc_001BF6DA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1BFC9C); /* switch: 15 entries, 15 targets */
    if (_jt == 0x001BF6E1u) goto loc_001BF6E1;
    if (_jt == 0x001BF70Cu) goto loc_001BF70C;
    if (_jt == 0x001BF80Cu) goto loc_001BF80C;
    if (_jt == 0x001BF8CEu) goto loc_001BF8CE;
    if (_jt == 0x001BF904u) goto loc_001BF904;
    if (_jt == 0x001BF956u) goto loc_001BF956;
    if (_jt == 0x001BF9C4u) goto loc_001BF9C4;
    if (_jt == 0x001BFA91u) goto loc_001BFA91;
    if (_jt == 0x001BFAE3u) goto loc_001BFAE3;
    if (_jt == 0x001BFB35u) goto loc_001BFB35;
    if (_jt == 0x001BFC41u) goto loc_001BFC41;
    if (_jt == 0x001BFC4Cu) goto loc_001BFC4C;
    if (_jt == 0x001BFC57u) goto loc_001BFC57;
    if (_jt == 0x001BFC62u) goto loc_001BFC62;
    if (_jt == 0x001BFC6Fu) goto loc_001BFC6F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001BF6E1: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF994; /* jne: not equal / not zero */

loc_001BF6EC: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF994; /* jne: not equal / not zero */

loc_001BF6F7: ;
    eax = MEM32(esi + 0x4C);
    SET_LO8(ecx, MEM8(esp + 0x13));
    eax = eax | 1;
    MEM8(esi + 0x2C) = LO8(ecx);
    MEM32(esi + 0x4C) = eax;
    goto loc_001BFBCC;

loc_001BF70C: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF7F8; /* jne: not equal / not zero */

loc_001BF716: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    ebp = MEM32(0x5BC3F4);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BF724u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BF724: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF730; /* jne: not equal / not zero */

loc_001BF728: ;
    eax = MEM32(edi + 0x18);
    MEM8(esi + 0x29) = LO8(eax);
    goto loc_001BF787;

loc_001BF730: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    ebp = MEM32(0x5BC94C);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001BF73Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BF73E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF74C; /* jne: not equal / not zero */

loc_001BF742: ;
    eax = 2;
    MEM8(esi + 0x29) = LO8(eax);
    goto loc_001BF787;

loc_001BF74C: ;
    edx = MEM32(0x5BC944);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BF75Bu); RECOMP_ABI_CALL(0x001309D0u, sub_001309D0); /* call 0x001309D0 */

loc_001BF75B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF769; /* je: equal / zero */

loc_001BF75F: ;
    eax = 3;
    MEM8(esi + 0x29) = LO8(eax);
    goto loc_001BF787;

loc_001BF769: ;
    eax = MEM32(0x5BC938);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BF777u); RECOMP_ABI_CALL(0x001309D0u, sub_001309D0); /* call 0x001309D0 */

loc_001BF777: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF994; /* je: equal / zero */

loc_001BF77F: ;
    eax = 4;
    MEM8(esi + 0x29) = LO8(eax);

loc_001BF787: ;
    edx = MEM32(esi + 0x50);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF7B4; /* je: equal / zero */

loc_001BF78F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001BF7B4; /* ja: above (unsigned >) */

loc_001BF794: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x12) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_001BF7A4; /* jne: not equal / not zero */

loc_001BF7A0: ;
    MEM8(esi + 0x29) = 4;

loc_001BF7A4: ;
    ebx = eax * 4;
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) | 8;
    goto loc_001BFBCC;

loc_001BF7B4: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF7FC; /* jne: not equal / not zero */

loc_001BF7BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001BF7E1; /* ja: above (unsigned >) */

loc_001BF7C0: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF7E1; /* je: equal / zero */

loc_001BF7C5: ;
    eax = MEM32(esi + 0x4C);
    eax = eax | 8;
    MEM8(esp + 0x12) = 1;
    MEM8(esi + 0x29) = 4;
    ebx = 0x10;
    MEM32(esi + 0x4C) = eax;
    goto loc_001BFBCC;

loc_001BF7E1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF7FC; /* jne: not equal / not zero */

loc_001BF7E5: ;
    MEM8(esi + 0x29) = LO8(eax);
    eax = MEM32(esi + 0x4C);
    ebx = 0; /* xor self */
    eax = eax | 8;
    MEM32(esi + 0x4C) = eax;
    goto loc_001BFBCC;

loc_001BF7F8: ;
    MEM8(esi + 0x29) = 0;

loc_001BF7FC: ;
    eax = MEM32(esi + 0x4C);
    ebx = 0; /* xor self */
    eax = eax | 8;
    MEM32(esi + 0x4C) = eax;
    goto loc_001BFBCC;

loc_001BF80C: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF8BA; /* jne: not equal / not zero */

loc_001BF816: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    ebp = MEM32(0x5BC3F8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BF824u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BF824: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF849; /* jne: not equal / not zero */

loc_001BF828: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001BF841; /* jbe: below or equal (unsigned <=) */

loc_001BF830: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001BFC02; /* ja: above (unsigned >) */

loc_001BF83A: ;
    MEM8(esp + 0x12) = 1;
    goto loc_001BF899;

loc_001BF841: ;
    SET_LO8(eax, MEM8(edi + 0x18));
    MEM8(esi + 0x2A) = LO8(eax);
    goto loc_001BF899;

loc_001BF849: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    ebp = MEM32(0x5BC940);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BF857u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BF857: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF870; /* jne: not equal / not zero */

loc_001BF85B: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001BF86A; /* jbe: below or equal (unsigned <=) */

loc_001BF863: ;
    MEM8(esp + 0x12) = 1;
    goto loc_001BF899;

loc_001BF86A: ;
    MEM8(esi + 0x2A) = 3;
    goto loc_001BF899;

loc_001BF870: ;
    eax = MEM32(0x5BC930);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BF87Eu); RECOMP_ABI_CALL(0x001309D0u, sub_001309D0); /* call 0x001309D0 */

loc_001BF87E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFC02; /* je: equal / zero */

loc_001BF886: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001BF895; /* jbe: below or equal (unsigned <=) */

loc_001BF88E: ;
    MEM8(esp + 0x12) = 1;
    goto loc_001BF899;

loc_001BF895: ;
    MEM8(esi + 0x2A) = 4;

loc_001BF899: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 0xC (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF8BA; /* je: equal / zero */

loc_001BF89F: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x4C);
    eax = eax | 0x10;
    MEM8(esi + 0x2A) = 4;
    ebx = 4;
    MEM32(esi + 0x4C) = eax;
    goto loc_001BFBCC;

loc_001BF8BA: ;
    eax = MEM32(esi + 0x4C);
    ebx = 0; /* xor self */
    eax = eax | 0x10;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esi + 0x4C) = eax;
    goto loc_001BFBCC;

loc_001BF8CE: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF994; /* jne: not equal / not zero */

loc_001BF8D9: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF994; /* jne: not equal / not zero */

loc_001BF8E4: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    eax = MEM32(esi + 0x4C);
    MEM8(esi + 0x2D) = LO8(ecx);
    ecx = MEM32(esp + 0x14);
    ecx = ecx | 0x10;
    eax = eax | 0x20;
    MEM32(esp + 0x14) = ecx;
    MEM32(esi + 0x4C) = eax;
    goto loc_001BFBCC;

loc_001BF904: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    ebp = MEM32(0x5BC3F4);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BF912u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BF912: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF92B; /* jne: not equal / not zero */

loc_001BF916: ;
    ecx = MEM32(esp + 0x18);
    ecx = ecx + ecx + 0x10;
    eax = 3;
    eax = eax << LO8(ecx);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) | eax;
    goto loc_001BF93D;

loc_001BF92B: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    ebp = MEM32(0x5BC94C);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BF939u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BF939: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF994; /* jne: not equal / not zero */

loc_001BF93D: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x4C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax | 0x80;
    MEM32(esp + 0x18) = ecx;
    MEM32(esi + 0x4C) = eax;
    goto loc_001BFBCC;

loc_001BF956: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF987; /* jne: not equal / not zero */

loc_001BF95D: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF96E; /* je: equal / zero */

loc_001BF964: ;
    MEM8(esp + 0x12) = 1;
    goto loc_001BFC02;

loc_001BF96E: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x4C);
    ecx = ecx | 0x40;
    eax = eax | 2;
    MEM32(esp + 0x14) = ecx;
    MEM32(esi + 0x4C) = eax;
    goto loc_001BFBCC;

loc_001BF987: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF9BA; /* jne: not equal / not zero */

loc_001BF98C: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_001BF99E; /* jns: not sign (positive) */

loc_001BF994: ;
    MEM8(esp + 0x12) = 1;
    goto loc_001BFC02;

loc_001BF99E: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x4C);
    ecx = ecx | 0x80;
    eax = eax | 4;
    MEM32(esp + 0x14) = ecx;
    MEM32(esi + 0x4C) = eax;
    goto loc_001BFBCC;

loc_001BF9BA: ;
    MEM8(esp + 0x12) = 1;
    goto loc_001BFBCC;

loc_001BF9C4: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFA83; /* jne: not equal / not zero */

loc_001BF9D1: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    ebp = MEM32(0x5BC3F4);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BF9DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BF9DF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF9FF; /* jne: not equal / not zero */

loc_001BF9E3: ;
    ecx = MEM32(esp + 0x18);
    ecx = ecx + ecx + 0x10;
    eax = 3;
    eax = eax << LO8(ecx);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) | eax;
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) | 0x40;
    goto loc_001BFBC8;

loc_001BF9FF: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    ebp = MEM32(0x5BC94C);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BFA0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BFA0D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFA88; /* je: equal / zero */

loc_001BFA11: ;
    eax = MEM32(0x5BC944);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFA1Fu); RECOMP_ABI_CALL(0x001309D0u, sub_001309D0); /* call 0x001309D0 */

loc_001BFA1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFA4A; /* je: equal / zero */

loc_001BFA23: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = ecx + ecx + 0x10;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esi + 0x4C);
    eax = eax | edx;
    ecx = ecx | 0x40;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_001BFBC8;

loc_001BFA4A: ;
    eax = MEM32(0x5BC938);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFA58u); RECOMP_ABI_CALL(0x001309D0u, sub_001309D0); /* call 0x001309D0 */

loc_001BFA58: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFA83; /* je: equal / zero */

loc_001BFA5C: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = ecx + ecx + 0x10;
    edx = 2;
    edx = edx << LO8(ecx);
    ecx = MEM32(esi + 0x4C);
    eax = eax | edx;
    ecx = ecx | 0x40;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_001BFBC8;

loc_001BFA83: ;
    MEM8(esp + 0x12) = 1;

loc_001BFA88: ;
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) | 0x40;
    goto loc_001BFBC8;

loc_001BFA91: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    ebp = MEM32(0x5BC944);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001BFA9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BFA9F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFACD; /* jne: not equal / not zero */

loc_001BFAA3: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = ecx + ecx + 0x10;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esi + 0x4C);
    eax = eax | edx;
    ecx = ecx | 0x100;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_001BFBC8;

loc_001BFACD: ;
    ecx = MEM32(esi + 0x4C);
    ecx = ecx | 0x100;
    MEM8(esp + 0x12) = 1;
    MEM32(esi + 0x4C) = ecx;
    goto loc_001BFBC8;

loc_001BFAE3: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    ebp = MEM32(0x5BC944);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001BFAF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BFAF1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFB1F; /* jne: not equal / not zero */

loc_001BFAF5: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = ecx + ecx + 0x10;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esi + 0x4C);
    eax = eax | edx;
    ecx = ecx | 0x200;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_001BFBC8;

loc_001BFB1F: ;
    ecx = MEM32(esi + 0x4C);
    ecx = ecx | 0x200;
    MEM8(esp + 0x12) = 1;
    MEM32(esi + 0x4C) = ecx;
    goto loc_001BFBC8;

loc_001BFB35: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    ebp = MEM32(0x5BC3F4);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001BFB43u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BFB43: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFB62; /* jne: not equal / not zero */

loc_001BFB47: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = ecx + ecx + 0x10;
    edx = 3;
    edx = edx << LO8(ecx);
    eax = eax | edx;
    MEM32(esp + 0x14) = eax;
    goto loc_001BFBC8;

loc_001BFB62: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    ebp = MEM32(0x5BC94C);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001BFB70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BFB70: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFBC8; /* je: equal / zero */

loc_001BFB74: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    ebp = MEM32(0x5BC944);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001BFB82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BFB82: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFB9B; /* jne: not equal / not zero */

loc_001BFB86: ;
    ecx = MEM32(esp + 0x18);
    ecx = ecx + ecx + 0x10;
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) | eax;
    goto loc_001BFBC8;

loc_001BFB9B: ;
    edx = MEM32(0x5BC938);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001BFBAAu); RECOMP_ABI_CALL(0x001309D0u, sub_001309D0); /* call 0x001309D0 */

loc_001BFBAA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFBC3; /* je: equal / zero */

loc_001BFBAE: ;
    ecx = MEM32(esp + 0x18);
    ecx = ecx + ecx + 0x10;
    eax = 2;
    eax = eax << LO8(ecx);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) | eax;
    goto loc_001BFBC8;

loc_001BFBC3: ;
    MEM8(esp + 0x12) = 1;

loc_001BFBC8: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BFBCC: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    SET_LO8(ecx, LO8(ecx) + LO8(ebx));
    ebx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM8(esp + 0x13) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_001BFBF3; /* je: equal / zero */

loc_001BFBDE: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFC02; /* je: equal / zero */

loc_001BFBE5: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edx + 8);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BFC02; /* jbe: below or equal (unsigned <=) */

loc_001BFBF3: ;
    eax = MEM32(edi + 0xC);
    eax = MEM32(eax + 8);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(edi + 0x18));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(edi + 0x18)); }
    MEM32(esp + 0x24) = eax;

loc_001BFC02: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BF6B0; /* jl: less (signed <) */

loc_001BFC19: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_001BFC79; /* jne: not equal / not zero */

loc_001BFC24: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    ecx = ecx | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_001BFC79; /* ja: above (unsigned >) */

loc_001BFC38: ;
    edx = eax;
    { uint32_t _jt = MEM32(edx * 4 + 0x1BFCC4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001BFC41u) goto loc_001BFC41;
    if (_jt == 0x001BFC4Cu) goto loc_001BFC4C;
    if (_jt == 0x001BFC57u) goto loc_001BFC57;
    if (_jt == 0x001BFC62u) goto loc_001BFC62;
    if (_jt == 0x001BFC6Fu) goto loc_001BFC6F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001BFC41: ;
    eax = MEM32(esp + 8);
    eax = eax | 0x100;
    goto loc_001BFC6B;

loc_001BFC4C: ;
    eax = MEM32(esp + 8);
    eax = eax | 0x200;
    goto loc_001BFC6B;

loc_001BFC57: ;
    eax = MEM32(esp + 8);
    eax = eax | 0x300;
    goto loc_001BFC6B;

loc_001BFC62: ;
    eax = MEM32(esp + 8);
    eax = eax | 0x400;

loc_001BFC6B: ;
    MEM32(esp + 8) = eax;

loc_001BFC6F: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;

loc_001BFC79: ;
    edx = MEM32(esp + 0x24);
    SET_LO8(eax, MEM8(esp + 7));
    ecx = MEM32(esp + 0x18);
    MEM8(edx) = LO8(eax);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM32(esi + 0x24) = ecx;
    MEM8(esi + 0x2B) = LO8(edx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BFC9A
 * Original: 0x001BFC9A - 0x001BFCED (83 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFC9A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BFC9A: ;
    edi = edi;
    if (_flags /* loope: loope */) { g_seh_ebp = ebp; sub_001BFC94(); return; }

loc_001BFC9E: ;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, esi);
    _cf = 1; /* stc */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    /* TODO: into  */
    _cf = 0; /* clc */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

}

/**
 * sub_001BFCE0
 * Original: 0x001BFCE0 - 0x001BFCED (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFCE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BFCE0: ;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFCEC; /* je: equal / zero */

loc_001BFCE7: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x64)); return; /* indirect tail jmp */

loc_001BFCEC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BFCF0
 * Original: 0x001BFCF0 - 0x001BFD20 (48 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFCF0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1AD200);
    ebx = ecx;
    PUSH32(esp, 0x001BFD0Cu); RECOMP_ABI_CALL(0x001BB380u, sub_001BB380); /* call 0x001BB380 */

loc_001BFD0C: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001BFD1A; /* je: equal / zero */

loc_001BFD14: ;
    eax = MEM32(eax + 0x1C);
    esp += 12; return; /* ret 8 */

loc_001BFD1A: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BFD20
 * Original: 0x001BFD20 - 0x001BFE70 (336 bytes, 123 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFD20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BFD20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001BFD35; /* je: equal / zero */

loc_001BFD30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x24) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BFD3B; /* jbe: below or equal (unsigned <=) */

loc_001BFD35: ;
    eax = MEM32(edi + 0x24);
    MEM32(esi + 8) = eax;

loc_001BFD3B: ;
    eax = MEM32(esi);
    ecx = eax + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001BFE25; /* ja: above (unsigned >) */

loc_001BFD49: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1BFE70); /* switch: 6 entries, 5 targets */
    if (_jt == 0x001BFD50u) goto loc_001BFD50;
    if (_jt == 0x001BFD87u) goto loc_001BFD87;
    if (_jt == 0x001BFDA1u) goto loc_001BFDA1;
    if (_jt == 0x001BFDEDu) goto loc_001BFDED;
    if (_jt == 0x001BFE25u) goto loc_001BFE25;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001BFD50: ;
    ecx = MEM32(edi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFD6D; /* je: equal / zero */

loc_001BFD57: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BFD6D; /* jne: not equal / not zero */

loc_001BFD5E: ;
    MEM32(esi + 0x14) = 0x10;
    ecx = MEM32(edi + 0x54);
    MEM32(esi + 0x10) = ecx;
    goto loc_001BFDC2;

loc_001BFD6D: ;
    ecx = MEM32(esi + 0xC);
    edx = ZX8(MEM8(edi + 0x28));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0x14) = edx;
    PUSH32(esp, 0x001BFD80u); RECOMP_ABI_CALL(0x001BFCF0u, sub_001BFCF0); /* call 0x001BFCF0 */

loc_001BFD80: ;
    ebx = eax;
    goto loc_001BFE4F;

loc_001BFD87: ;
    ecx = MEM32(edi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFE07; /* je: equal / zero */

loc_001BFD8E: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BFE07; /* jne: not equal / not zero */

loc_001BFD95: ;
    MEM32(esi + 0x14) = 0x10;
    eax = MEM32(edi + 0x58);
    goto loc_001BFDBF;

loc_001BFDA1: ;
    ecx = MEM32(edi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFE07; /* je: equal / zero */

loc_001BFDA8: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BFE07; /* jne: not equal / not zero */

loc_001BFDAF: ;
    ecx = ZX8(MEM8(edi + 0x29));
    ecx = ecx << 2;
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(edi + 0x5C);

loc_001BFDBC: ;
    eax = MEM32(edx + 0x10);

loc_001BFDBF: ;
    MEM32(esi + 0x10) = eax;

loc_001BFDC2: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BFE63; /* jae: above or equal (unsigned >=) */

loc_001BFDD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFDE7; /* je: equal / zero */

loc_001BFDD4: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(esi + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edi = edi + edx;
    ecx = ecx - eax;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 8) = ecx;

loc_001BFDE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001BFDED: ;
    ecx = MEM32(edi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFE07; /* je: equal / zero */

loc_001BFDF4: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BFE07; /* jne: not equal / not zero */

loc_001BFDFB: ;
    ecx = ZX8(MEM8(edi + 0x2A));
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(edi + 0x60);
    goto loc_001BFDBC;

loc_001BFE07: ;
    ecx = ZX8(MEM8(edi + 0x28));
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    MEM32(esi + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001BFE1Au); RECOMP_ABI_CALL(0x001BFCF0u, sub_001BFCF0); /* call 0x001BFCF0 */

loc_001BFE1A: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001BFE23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BFE23: ;
    goto loc_001BFE56;

loc_001BFE25: ;
    ecx = ZX8(MEM8(edi + 0x28));
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(esi + 0xC);
    ebx = MEM32(edi + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AD200);
    PUSH32(esp, 0x001BFE40u); RECOMP_ABI_CALL(0x001BB380u, sub_001BB380); /* call 0x001BB380 */

loc_001BFE40: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFE4C; /* je: equal / zero */

loc_001BFE47: ;
    ebx = MEM32(eax + 0x1C);
    goto loc_001BFE4F;

loc_001BFE4C: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_001BFE4F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001BFE56u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BFE56: ;
    eax = eax + ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001BFDC2; /* jge: greater or equal (signed >=) */

loc_001BFE63: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BFE90
 * Original: 0x001BFE90 - 0x001C0003 (371 bytes, 129 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFE90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BFE90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ebx, MEM8(esi + 0x38));
    SET_LO8(ebx, LO8(ebx) | 1);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM8(esi + 0x38) = LO8(ebx);
    eax = MEM32(edi);
    ecx = eax + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001C00A2(); return; } /* ja: above (unsigned >) */

loc_001BFEB0: ;
    PUSH32(esp, ebp);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x1C00A8)); return; /* indirect tail jmp */

    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001C00A1(); return; } /* je: equal / zero */

loc_001BFEC3: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001C00A1(); return; } /* jne: not equal / not zero */

loc_001BFECE: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001C00A1(); return; } /* jne: not equal / not zero */

loc_001BFED8: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001BFEE2u); RECOMP_ABI_CALL(0x001BFCF0u, sub_001BFCF0); /* call 0x001BFCF0 */

loc_001BFEE2: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001BFEEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BFEEB: ;
    ecx = MEM32(edi + 4);
    ebp = MEM32(esi + 0x54);
    eax = eax + ebx;
    ebx = MEM32(edi + 8);
    ecx = ecx << 4;
    ecx = ecx + ebp;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) { g_seh_ebp = ebp; sub_001C00A1(); return; } /* jbe: below or equal (unsigned <=) */

loc_001BFF05: ;
    ebx = MEM32(ecx);
    MEM32(eax) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(ecx + 8);
    MEM32(eax + 8) = ebx;
    ebx = ZX8(MEM8(esi + 0x28));
    eax = eax + ebx;
    ebx = MEM32(edi + 8);
    ecx = ecx + 0x10;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BFF05; /* jb: below (unsigned <) */

loc_001BFF26: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001C00A1(); return; } /* jne: not equal / not zero */

loc_001BFF43: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001C00A1(); return; } /* jne: not equal / not zero */

loc_001BFF4D: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001BFF57u); RECOMP_ABI_CALL(0x001BFCF0u, sub_001BFCF0); /* call 0x001BFCF0 */

loc_001BFF57: ;
    edx = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001BFF60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BFF60: ;
    ecx = MEM32(edi + 4);
    ebp = MEM32(esi + 0x58);
    eax = eax + ebx;
    ebx = MEM32(edi + 8);
    ecx = ecx << 4;
    ecx = ecx + ebp;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) { g_seh_ebp = ebp; sub_001C00A1(); return; } /* jbe: below or equal (unsigned <=) */

loc_001BFF7A: ;
    /* nop */

loc_001BFF80: ;
    ebx = MEM32(ecx);
    MEM32(eax) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(ecx + 8);
    MEM32(eax + 8) = ebx;
    ebx = ZX8(MEM8(esi + 0x28));
    eax = eax + ebx;
    ebx = MEM32(edi + 8);
    ecx = ecx + 0x10;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BFF80; /* jb: below (unsigned <) */

loc_001BFFA1: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001C00A1(); return; } /* jne: not equal / not zero */

loc_001BFFBE: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001C00A1(); return; } /* je: equal / zero */

loc_001BFFC8: ;
    _fa = (uint32_t)(MEM8(esi + 0x29)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x29), 4 (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001C00A1(); return; } /* ja: above (unsigned >) */

loc_001BFFD2: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001BFFDCu); RECOMP_ABI_CALL(0x001BFCF0u, sub_001BFCF0); /* call 0x001BFCF0 */

loc_001BFFDC: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001BFFE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001BFFE5: ;
    edx = MEM32(esi + 0x5C);
    edx = MEM32(edx + 0x10);
    ecx = MEM32(edi + 4);
    eax = eax + ebx;
    ecx = edx + ecx * 4;
    edx = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) { g_seh_ebp = ebp; sub_001C00A1(); return; } /* jbe: below or equal (unsigned <=) */

loc_001C0000: ;
    edx = 0; /* xor self */

    g_seh_ebp = ebp; sub_001C0003(); return; /* fallthrough 0x001C0003 */

}

/**
 * sub_001C0003
 * Original: 0x001C0003 - 0x001C0030 (45 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0003(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0003: ;
    PUSH32(esp, esi);
    MEM32(esi + 0xD) = MEM32(esi + 0xD) - esi;

loc_001C0007: ;
    ebp = MEM32(ecx);
    MEM32(eax) = ebp;
    ebp = ZX8(MEM8(esi + 0x29));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0007; /* jl: less (signed <) */

loc_001C0014: ;
    edx = ZX8(MEM8(esi + 0x29));
    ecx = ecx + edx * 4;
    edx = ZX8(MEM8(esi + 0x28));
    eax = eax + edx;
    edx = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001C0000(); return; } /* jb: below (unsigned <) */

loc_001C0029: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C001B
 * Original: 0x001C001B - 0x001C0030 (21 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C001B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C001B: ;
    edx = ZX8(MEM8(esi + 0x28));
    eax = eax + edx;
    edx = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001C0000(); return; } /* jb: below (unsigned <) */

loc_001C0029: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C00C0
 * Original: 0x001C00C0 - 0x001C00D0 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C00C0(void)
{

loc_001C00C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0xF0);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C00D0
 * Original: 0x001C00D0 - 0x001C00EA (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001C00D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C00D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C00E5; /* je: equal / zero */

loc_001C00DF: ;
    eax = MEM32(eax + 0x14);
    esp += 8; return; /* ret 4 */

loc_001C00E5: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C00F0
 * Original: 0x001C00F0 - 0x001C0152 (98 bytes, 34 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C00F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C00F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C013E; /* je: equal / zero */

loc_001C00FB: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 0x534);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001C0110u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C0110: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C012B; /* je: equal / zero */

loc_001C0117: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C011Du); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001C011D: ;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x24) = 0;

loc_001C012B: ;
    ecx = MEM32(esi + 0x28);
    ecx = MEM32(ecx + 0x534);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001C013Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C013E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x001C0148u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C0148: ;
    ecx = esi;
    PUSH32(esp, 0x001C014Fu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001C014F: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0160
 * Original: 0x001C0160 - 0x001C01F3 (147 bytes, 44 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001C0160(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C0160: ;
    fp_push(MEMD(0x3E2000)); /* fld double */
    eax = 0; /* xor self */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    edx = edx | 0xFFFFFFFFu;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    edx = 0x3F800000;
    MEM32(ecx) = eax;
    MEM32(ecx + 0xC) = 1;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = edx;
    PUSH32(esp, esi);
    esi = 0x3F19999A;
    MEM32(ecx + 0x30) = esi;
    MEM32(ecx + 0x34) = esi;
    MEM32(ecx + 0x38) = esi;
    MEM32(ecx + 0x3C) = esi;
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x78) = eax;
    MEM32(ecx + 0x7C) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x80) = eax;
    MEM32(ecx + 0x84) = eax;
    MEM32(ecx + 0x88) = edx;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = edx;
    MEM32(ecx + 0x70) = 0x40490FDB;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x60) = edx;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x6C) = eax;
    POP32(esp, esi);
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C0200
 * Original: 0x001C0200 - 0x001C032A (298 bytes, 101 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0200: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 9);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001C0210u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C0210: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0x2AC) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_001C0224; /* jg: greater (signed >) */

loc_001C021A: ;
    MEM32(edi + 0x2AC) = 8;

loc_001C0224: ;
    esi = edi + 0x2B4;
    ebx = 3;
    /* nop */

loc_001C0230: ;
    ecx = MEM32(esi);
    eax = MEM32(edi + 0x2AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0245; /* jl: less (signed <) */

loc_001C023D: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0245u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_001C0245: ;
    esi = esi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C0230; /* jne: not equal / not zero */

loc_001C024B: ;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x2A4));
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x001C025Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C025E: ;
    esi = MEM32(edi + 0x160);
    ecx = MEM32(edi + 0x2A8);
    esi = esi | 0xE;
    eax = 0; /* xor self */
    MEM32(edi + 0x160) = esi;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), LO16(eax) (16-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001C0314; /* jbe: below or equal (unsigned <=) */

loc_001C0282: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);

loc_001C0285: ;
    esi = MEM32(edi + 0x2A8);
    edx = ZX16(MEM16(esi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C02F3; /* jge: greater or equal (signed >=) */

loc_001C0292: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001C02F3; /* jl: less (signed <) */

loc_001C0296: ;
    edx = ZX16(MEM16(esi + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C02B4; /* jle: less or equal (signed <=) */

loc_001C02A0: ;
    ecx = MEM32(esi + 0xC);

loc_001C02A3: ;
    ebp = ZX16(MEM16(ecx));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C02F3; /* je: equal / zero */

loc_001C02AC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C02A3; /* jl: less (signed <) */

loc_001C02B4: ;
    esi = MEM32(esi + 0x10);
    SET_LO8(eax, MEM8(edi + 0x2A4));
    esi = esi + ebx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C02D1; /* jne: not equal / not zero */

loc_001C02C3: ;
    SET_LO8(eax, MEM8(edi + 0x530));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C02D1; /* je: equal / zero */

loc_001C02CD: ;
    PUSH32(esp, 0);
    goto loc_001C02DD;

loc_001C02D1: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas & _fbs, 0)) ? 1 : 0); /* setge */
    edx = ZX8(LO8(ecx));
    PUSH32(esp, edx);

loc_001C02DD: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C02E6u); RECOMP_ABI_CALL(0x0035BF00u, sub_0035BF00); /* call 0x0035BF00 */

loc_001C02E6: ;
    edx = MEM32(esi + 8);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C02F3u); RECOMP_ABI_CALL(0x0035BC40u, sub_0035BC40); /* call 0x0035BC40 */

loc_001C02F3: ;
    ecx = MEM32(edi + 0x2A8);
    eax = MEM32(esp + 0x10);
    edx = ZX16(MEM16(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x8C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001C0285; /* jl: less (signed <) */

loc_001C0313: ;
    POP32(esp, ebp);

loc_001C0314: ;
    eax = MEM32(edi);
    ecx = edi + 0x2C0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1CC); PUSH32(esp, 0x001C0325u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C0325: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0330
 * Original: 0x001C0330 - 0x001C0375 (69 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0330(void)
{

loc_001C0330: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x2A8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001C0341u); RECOMP_ABI_CALL(0x001B7050u, sub_001B7050); /* call 0x001B7050 */

loc_001C0341: ;
    esi = eax;
    eax = MEM32(edi + 0x2A8);
    edx = MEM32(eax + 0x10);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    ecx = ecx + edx;
    PUSH32(esp, 0x001C035Bu); RECOMP_ABI_CALL(0x001C0160u, sub_001C0160); /* call 0x001C0160 */

loc_001C035B: ;
    eax = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    edx = MEM32(eax * 4 + 0x3E3F4C);
    POP32(esp, edi);
    MEM32(ecx + 8) = esi;
    eax = esi;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0380
 * Original: 0x001C0380 - 0x001C03BF (63 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0380: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    esi = ecx;
    ecx = MEM32(esi + 0x2A8);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(eax + edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001C03AE; /* jl: less (signed <) */

loc_001C03A1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x001C03AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C03AE: ;
    ecx = MEM32(esi + 0x2A8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C03BAu); RECOMP_ABI_CALL(0x001B71D0u, sub_001B71D0); /* call 0x001B71D0 */

loc_001C03BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C03C0
 * Original: 0x001C03C0 - 0x001C03E3 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C03C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C03C0: ;
    eax = MEM32(ecx + 0x2A8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    PUSH32(esp, esi);
    esi = MEM32(edx + ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas & _fbs, 0)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C03F0
 * Original: 0x001C03F0 - 0x001C0409 (25 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C03F0(void)
{

loc_001C03F0: ;
    eax = MEM32(ecx + 0x2A8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    eax = MEM32(ecx + edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0410
 * Original: 0x001C0410 - 0x001C045C (76 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0410(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0410: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x2A8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    edx = MEM32(esp + 0xC);
    eax = eax + esi;
    esi = MEM32(edx);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 0x14) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 0x18) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x1C) = edx;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 2;
    ecx = eax + 0xC;
    POP32(esp, esi);
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0035BC40(); return; /* tail jmp 0x0035BC40 */

}

/**
 * sub_001C0460
 * Original: 0x001C0460 - 0x001C0494 (52 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0460(void)
{

loc_001C0460: ;
    eax = MEM32(ecx + 0x2A8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    eax = edx + ecx + 0x10;
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C04A0
 * Original: 0x001C04A0 - 0x001C04EC (76 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C04A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C04A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x2A8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    edx = MEM32(esp + 0xC);
    eax = eax + esi;
    esi = MEM32(edx);
    MEM32(eax + 0x30) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 0x34) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 0x38) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x3C) = edx;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 2;
    ecx = eax + 0xC;
    POP32(esp, esi);
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0035BC40(); return; /* tail jmp 0x0035BC40 */

}

/**
 * sub_001C04F0
 * Original: 0x001C04F0 - 0x001C0524 (52 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C04F0(void)
{

loc_001C04F0: ;
    eax = MEM32(ecx + 0x2A8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    eax = edx + ecx + 0x30;
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0530
 * Original: 0x001C0530 - 0x001C057C (76 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0530(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0530: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x2A8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    edx = MEM32(esp + 0xC);
    eax = eax + esi;
    esi = MEM32(edx);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 0x24) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 0x28) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x2C) = edx;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 2;
    ecx = eax + 0xC;
    POP32(esp, esi);
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0035BC40(); return; /* tail jmp 0x0035BC40 */

}

/**
 * sub_001C0580
 * Original: 0x001C0580 - 0x001C05B4 (52 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0580(void)
{

loc_001C0580: ;
    eax = MEM32(ecx + 0x2A8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    eax = edx + ecx + 0x20;
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C05C0
 * Original: 0x001C05C0 - 0x001C064B (139 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C05C0(void)
{

loc_001C05C0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x8C);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x2A8);
    esi = esi + MEM32(eax + 0x10);
    ecx = MEM32(edi + 0x1C4);
    eax = MEM32(ecx + 4);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0x10);
    edx = edx << 6;
    ecx = edx + eax + -64;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001C0600u); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_001C0600: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x40) = edx;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x44) = eax;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x48) = ecx;
    edx = MEM32(ebx);
    MEM32(esi + 0x74) = edx;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x78) = eax;
    ecx = MEM32(ebx + 8);
    MEM32(esi + 0x7C) = ecx;
    ebx = MEM32(edi + 0x160);
    ebx = ebx | 2;
    edx = esi + 0xC;
    MEM32(edi + 0x160) = ebx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0642u); RECOMP_ABI_CALL(0x0035BC40u, sub_0035BC40); /* call 0x0035BC40 */

loc_001C0642: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0650
 * Original: 0x001C0650 - 0x001C067E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0650(void)
{

loc_001C0650: ;
    eax = MEM32(ecx + 0x2A8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    eax = edx + ecx + 0x74;
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0680
 * Original: 0x001C0680 - 0x001C0714 (148 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0680(void)
{

loc_001C0680: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x8C);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x2A8);
    esi = esi + MEM32(eax + 0x10);
    ecx = MEM32(edi + 0x1C4);
    eax = MEM32(ecx + 4);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0x10);
    edx = edx << 6;
    ecx = edx + eax + -64;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001C06C0u); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_001C06C0: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x4C) = edx;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x50) = eax;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x54) = ecx;
    edx = MEM32(ebx);
    MEM32(esi + 0x80) = edx;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x84) = eax;
    ecx = MEM32(ebx + 8);
    MEM32(esi + 0x88) = ecx;
    ebx = MEM32(edi + 0x160);
    ebx = ebx | 2;
    edx = esi + 0xC;
    MEM32(edi + 0x160) = ebx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C070Bu); RECOMP_ABI_CALL(0x0035BC40u, sub_0035BC40); /* call 0x0035BC40 */

loc_001C070B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0720
 * Original: 0x001C0720 - 0x001C0751 (49 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0720(void)
{

loc_001C0720: ;
    eax = MEM32(ecx + 0x2A8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    eax = edx + ecx + 0x80;
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0760
 * Original: 0x001C0760 - 0x001C07B4 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0760(void)
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

loc_001C0760: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    eax = MEM32(ecx + 0x2A8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8C);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    edx = edx + esi;
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    POP32(esp, esi);
    MEMF(edx + 0x70) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3DC5D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3dc5d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C079A; /* jne: not equal / not zero */

loc_001C0793: ;
    MEM32(edx + 0x70) = 0x40490FDB;

loc_001C079A: ;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 2;
    ecx = edx + 0xC;
    edx = MEM32(edx + 8);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0035BC40(); return; /* tail jmp 0x0035BC40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C07C0
 * Original: 0x001C07C0 - 0x001C07E6 (38 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C07C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C07C0: ;
    eax = MEM32(ecx + 0x2A8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    fp_push(MEMF(edx + ecx + 0x70)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() * MEMF(0x3CA91C); /* fmul dword ptr [0x3ca91c] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C07F0
 * Original: 0x001C07F0 - 0x001C0832 (66 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C07F0(void)
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

loc_001C07F0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(ecx + 0x2A8);
    fp_top() = fp_top() * MEMF(0x3CB258); /* fmul dword ptr [0x3cb258] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    eax = eax + MEM32(edx + 0x10);
    MEMF(eax + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x160);
    edx = edx | 2;
    MEM32(ecx + 0x160) = edx;
    ecx = eax + 0xC;
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0035BC40(); return; /* tail jmp 0x0035BC40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C0840
 * Original: 0x001C0840 - 0x001C0860 (32 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0840(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C0840: ;
    eax = MEM32(ecx + 0x2A8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    fp_push(MEMF(edx + ecx + 0x5C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8398); /* fmul dword ptr [0x3c8398] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C0860
 * Original: 0x001C0860 - 0x001C08A0 (64 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0860: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x2A8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    edx = MEM32(esp + 0xC);
    eax = eax + esi;
    MEM32(eax + 0x58) = edx;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 2;
    ecx = eax + 0xC;
    POP32(esp, esi);
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0035BC40(); return; /* tail jmp 0x0035BC40 */

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
 * sub_001C08A0
 * Original: 0x001C08A0 - 0x001C08BA (26 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C08A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C08A0: ;
    eax = MEM32(ecx + 0x2A8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    fp_push(MEMF(edx + ecx + 0x58)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C08C0
 * Original: 0x001C08C0 - 0x001C0906 (70 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C08C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C08C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x2A8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    edx = MEM32(esp + 0xC);
    eax = eax + esi;
    esi = MEM32(edx);
    MEM32(eax + 0x60) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 0x64) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 0x68) = edx;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 2;
    ecx = eax + 0xC;
    POP32(esp, esi);
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0035BC40(); return; /* tail jmp 0x0035BC40 */

}

/**
 * sub_001C0910
 * Original: 0x001C0910 - 0x001C093D (45 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0910(void)
{

loc_001C0910: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x2A8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 8);
    eax = eax + edx;
    edx = MEM32(eax + 0x60);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x64);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x68);
    MEM32(ecx + 8) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0940
 * Original: 0x001C0940 - 0x001C0A14 (212 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0940(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0940: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    PUSH32(esp, 0xF);
    ebx = ecx;
    PUSH32(esp, 0x001C0950u); RECOMP_ABI_CALL(0x001F7F30u, sub_001F7F30); /* call 0x001F7F30 */

loc_001C0950: ;
    ecx = esp + 8;
    MEM32(ebx + 0x1C4) = eax;
    PUSH32(esp, 0x001C095Fu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_001C095F: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001C0968u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_001C0968: ;
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    /* nop */

loc_001C0970: ;
    ecx = ebx;
    PUSH32(esp, 0x001C0977u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_001C0977: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C097Du); RECOMP_ABI_CALL(0x001A5E40u, sub_001A5E40); /* call 0x001A5E40 */

loc_001C097D: ;
    ecx = MEM32(ebx + 0x1C4);
    MEM32(ecx + ebp) = eax;
    edx = MEM32(ebx + 0x1C4);
    edi = MEM32(edx + ebp);
    esi = MEM32(edi + 8);
    eax = MEM32(edi + 0xC);
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C09A4; /* jge: greater or equal (signed >=) */

loc_001C099C: ;
    eax = esi + 1;
    MEM32(edi + 8) = eax;
    goto loc_001C09B1;

loc_001C09A4: ;
    PUSH32(esp, 0x40);
    ecx = esi + 1;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001C09B1u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_001C09B1: ;
    eax = MEM32(edi + 0x10);
    edx = esp + 0x10;
    esi = esi << 6;
    PUSH32(esp, edx);
    esi = esi + eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C09C4u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_001C09C4: ;
    ebp = ebp + 4;
    esp = esp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0970; /* jl: less (signed <) */

loc_001C09CF: ;
    POP32(esp, edi);
    eax = ebx + 0x1C8;
    ecx = ebx + 0x44C;
    edx = 8;
    SET_LO8(ebx, 2);
    POP32(esp, esi);
    goto loc_001C09F0;

    /* nop */
    /* nop */

loc_001C09F0: ;
    MEM32(ecx + -32) = 0;
    MEM32(ecx) = 0;
    ecx = ecx + 4;
    MEM8(eax + 0x10) = LO8(ebx);
    MEM8(eax) = 0;
    MEM8(eax + 8) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C09F0; /* jne: not equal / not zero */

loc_001C0A0E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0A20
 * Original: 0x001C0A20 - 0x001C0A4F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0A20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0A20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C0A4C; /* jge: greater or equal (signed >=) */

loc_001C0A29: ;
    ecx = MEM32(ecx + 0x1C4);
    ecx = MEM32(ecx + eax * 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0A4C; /* jl: less (signed <) */

loc_001C0A3B: ;
    MEM32(esp + 8) = 0x40;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00200AD0(); return; /* tail jmp 0x00200AD0 */

loc_001C0A4C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0A50
 * Original: 0x001C0A50 - 0x001C0A6D (29 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001C0A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0A50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C0A68; /* jge: greater or equal (signed >=) */

loc_001C0A59: ;
    ecx = MEM32(ecx + 0x1C4);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(edx + 0xC);
    esp += 8; return; /* ret 4 */

loc_001C0A68: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0A70
 * Original: 0x001C0A70 - 0x001C0AA0 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0A70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C0A9D; /* jge: greater or equal (signed >=) */

loc_001C0A79: ;
    ecx = MEM32(ecx + 0x1C4);
    eax = MEM32(ecx + eax * 4);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0x10);
    edx = edx << 6;
    ecx = edx + eax + -64;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C0A9Au); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_001C0A9A: ;
    esp = esp + 8;

loc_001C0A9D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0AA0
 * Original: 0x001C0AA0 - 0x001C0B9C (252 bytes, 88 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0AA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0AA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ebp = ebp | 0xFFFFFFFFu;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_001C0B18; /* je: equal / zero */

loc_001C0AB9: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C0B18; /* jle: less or equal (signed <=) */

loc_001C0AC2: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0x384)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4 + 0x384), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0AE1; /* je: equal / zero */

loc_001C0AD7: ;
    MEM32(edi + 0x160) = MEM32(edi + 0x160) | 0x100000;

loc_001C0AE1: ;
    MEM32(edi + eax * 4 + 0x384) = ecx;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    ecx = 1;
    MEM32(esp + 0x18) = ecx;
    ecx = eax;
    eax = MEM32(esp + 0x18);
    eax = eax << LO8(ecx);
    ebp = ~ebp;
    ebx = ebx & ebp;
    ebp = MEM32(esp + 0x10);
    eax = ~eax;
    ebp = ebp & eax;
    eax = MEM32(esi + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001C0AC2; /* jl: less (signed <) */

loc_001C0B18: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = edi + 0x384;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = edx;
    /* nop */

loc_001C0B30: ;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0B7F; /* je: equal / zero */

loc_001C0B3B: ;
    esi = 1;
    ecx = eax;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C0B56; /* jne: not equal / not zero */

loc_001C0B48: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 1;
    ecx = eax;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0B48; /* je: equal / zero */

loc_001C0B56: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0B68; /* je: equal / zero */

loc_001C0B5E: ;
    MEM32(edi + 0x160) = MEM32(edi + 0x160) | 0x100000;

loc_001C0B68: ;
    MEM32(ecx) = eax;
    ecx = eax;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx = ~edx;
    esi = ~esi;
    ebx = ebx & esi;
    ebp = ebp & edx;

loc_001C0B7F: ;
    esi = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = esi;
    if (CMP_B(_fa, _fb)) goto loc_001C0B30; /* jb: below (unsigned <) */

loc_001C0B94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0BA0
 * Original: 0x001C0BA0 - 0x001C0BCB (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0BA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0BA0: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x14), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C0BAE; /* jne: not equal / not zero */

loc_001C0BA9: ;
    g_seh_ebp = ebp; sub_001BA860(); return; /* tail jmp 0x001BA860 */

loc_001C0BAE: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x188);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x001C0BC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C0BC8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0BD0
 * Original: 0x001C0BD0 - 0x001C0C0D (61 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0BD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0BD0: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0BDE; /* je: equal / zero */

loc_001C0BD9: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x6C)); return; /* indirect tail jmp */

loc_001C0BDE: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0BF4; /* je: equal / zero */

loc_001C0BE8: ;
    eax = MEM32(esp + 4);
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    goto loc_001C0BF6;

loc_001C0BF4: ;
    eax = 0; /* xor self */

loc_001C0BF6: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0C10
 * Original: 0x001C0C10 - 0x001C0C4D (61 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0C10: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0C1E; /* je: equal / zero */

loc_001C0C19: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x74)); return; /* indirect tail jmp */

loc_001C0C1E: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0C34; /* je: equal / zero */

loc_001C0C28: ;
    eax = MEM32(esp + 4);
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    goto loc_001C0C36;

loc_001C0C34: ;
    eax = 0; /* xor self */

loc_001C0C36: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0C50
 * Original: 0x001C0C50 - 0x001C0C68 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0C50: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0C63; /* je: equal / zero */

loc_001C0C59: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xA0)); return; /* indirect tail jmp */

loc_001C0C63: ;
    g_seh_ebp = ebp; sub_001BAD90(); return; /* tail jmp 0x001BAD90 */

}

/**
 * sub_001C0C70
 * Original: 0x001C0C70 - 0x001C0C88 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0C70: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0C83; /* je: equal / zero */

loc_001C0C79: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x9C)); return; /* indirect tail jmp */

loc_001C0C83: ;
    g_seh_ebp = ebp; sub_001BADD0(); return; /* tail jmp 0x001BADD0 */

}

/**
 * sub_001C0C90
 * Original: 0x001C0C90 - 0x001C0CB6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0C90: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0CA1; /* je: equal / zero */

loc_001C0C99: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xA8)); return; /* indirect tail jmp */

loc_001C0CA1: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = eax + eax * 2;
    eax = eax << 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xA8)); return; /* indirect tail jmp */

}

/**
 * sub_001C0CC0
 * Original: 0x001C0CC0 - 0x001C0CE6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0CC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0CC0: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0CD1; /* je: equal / zero */

loc_001C0CC9: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xA4)); return; /* indirect tail jmp */

loc_001C0CD1: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = eax + eax * 2;
    eax = eax << 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xA4)); return; /* indirect tail jmp */

}

/**
 * sub_001C0CF0
 * Original: 0x001C0CF0 - 0x001C0D5E (110 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0CF0(void)
{

loc_001C0CF0: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    SET_LO8(edx, 1);
    MEM8(ecx + 6) = LO8(edx);
    MEM8(ecx + 7) = LO8(edx);
    edx = 0; /* xor self */
    MEM32(ecx) = 7;
    MEM8(ecx + 4) = LO8(eax);
    MEM8(ecx + 5) = LO8(eax);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esi = ecx + 0x10;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = edx;
    edx = edx | 0xFFFFFFFFu;
    MEM32(ecx + 0x20) = edx;
    MEM8(ecx + 0x24) = LO8(eax);
    MEM32(ecx + 0x28) = edx;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x60) = eax;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x4C) = edx;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = edx;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x68) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0D60
 * Original: 0x001C0D60 - 0x001C0E30 (208 bytes, 70 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0D60: ;
    esp = esp - 8;
    eax = MEM32(0x5BC508);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x38);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esi = ecx;
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E8A78);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    MEM8(esp + 0x27) = LO8(ebx);
    MEM8(esp + 0x28) = LO8(ebx);
    PUSH32(esp, 0x001C0D8Eu); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001C0D8E: ;
    SET_LO8(eax, MEM8(esp + 0x27));
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0DA6; /* je: equal / zero */

loc_001C0D99: ;
    eax = MEM32(esi + 0x148);
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) & 0xFFFFF7FFu;

loc_001C0DA6: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E8A64);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0DBEu); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001C0DBE: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0DD5; /* je: equal / zero */

loc_001C0DC9: ;
    ecx = MEM32(esi + 0x148);
    MEM32(ecx + 0xCC) = ebx;

loc_001C0DD5: ;
    _fa = (uint32_t)(MEM32(esi + 0x490)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x490), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C0E29; /* jle: less or equal (signed <=) */

loc_001C0DDD: ;
    edi = esi + 0x334;

loc_001C0DE3: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0E14; /* je: equal / zero */

loc_001C0DEA: ;
    edx = MEM32(esi + 0x330);
    edx = MEM32(edx + 0x10);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    ecx = MEM32(edx + ecx + 4);
    ecx = ~ecx;
    MEM32(edi + 0x2C) = ecx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = eax | 0x10000;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1FC); PUSH32(esp, 0x001C0E12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C0E12: ;
    goto loc_001C0E1B;

loc_001C0E14: ;
    MEM32(edi + 0x2C) = 0xFFFFFFFFu;

loc_001C0E1B: ;
    eax = MEM32(esi + 0x490);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0DE3; /* jl: less (signed <) */

loc_001C0E29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0E30
 * Original: 0x001C0E30 - 0x001C115F (815 bytes, 224 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0E30: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C0F18; /* jle: less or equal (signed <=) */

loc_001C0E45: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, 0x40000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001C0F18; /* je: equal / zero */

loc_001C0E51: ;
    PUSH32(esp, 0xA00);
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFFFF;
    ebx = ebp;
    PUSH32(esp, 0);
    edi = ebx + ebx * 4;
    if (2) _cf = (int)(((edi) >> (32 - (2))) & 1);
    edi = edi << 2;
    ebp = edi + 0x5BAB88;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x280);
    PUSH32(esp, 0x001C0E84u); RECOMP_ABI_CALL(0x003A7DFCu, sub_003A7DFC); /* call 0x003A7DFC */

loc_001C0E84: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0E8Bu); RECOMP_ABI_CALL(0x0035B670u, sub_0035B670); /* call 0x0035B670 */

loc_001C0E8B: ;
    edx = MEM32(0x36C658);
    ebx = eax;
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    MEM32(edi + 0x5BAB8C) = eax;
    eax = 2;
    edi = 3;
    _cf = 0; /* logical op clears CF */
    edx = edx | 1;
    PUSH32(esp, ebp);
    MEM32(0x36C660) = edi;
    MEM32(0x36C664) = edi;
    MEM32(0x36C670) = eax;
    MEM32(0x36C658) = edx;
    MEM32(0x36C66C) = eax;
    PUSH32(esp, 0x001C0ED0u); RECOMP_ABI_CALL(0x0035C060u, sub_0035C060); /* call 0x0035C060 */

loc_001C0ED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0ED6u); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001C0ED6: ;
    eax = MEM32(esi + ebp * 4 + 0x334);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_001C0F01; /* jl: less (signed <) */

loc_001C0EE1: ;
    ecx = MEM32(esi + 0x330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    ebx = MEM32(ecx + 0x10);
    edx = MEM32(eax + ebx + 0x48);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax + 0x48) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C0F01; /* jge: greater or equal (signed >=) */

loc_001C0EFE: ;
    MEM32(eax + 0x68) = edi;

loc_001C0F01: ;
    POP32(esp, edi);
    MEM32(esi + ebp * 4 + 0x334) = 0xFFFFFFFFu;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_001C0F18: ;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFFFF;
    MEM32(esp + 0x20) = ebp;
    if (((int32_t)ebp < 0)) goto loc_001C1153; /* jl: less (signed <) */

loc_001C0F28: ;
    eax = MEM32(esi + 0x330);
    edx = ZX16(MEM16(eax));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001C1153; /* jge: greater or equal (signed >=) */

loc_001C0F39: ;
    ecx = MEM32(eax + 0x10);
    ebx = ebp;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6C);
    eax = MEM32(ebx + ecx + 0x68);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(ecx)) >> 32) & 1);
    ebx = ebx + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C0F67; /* jne: not equal / not zero */

loc_001C0F4C: ;
    eax = MEM32(esi);
    ecx = ebp;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x10000;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x200); PUSH32(esp, 0x001C0F5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C0F5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001C1153; /* je: equal / zero */

loc_001C0F67: ;
    edi = MEM32(esp + 0x24);
    edx = MEM32(esi + edi * 4 + 0x360);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C10A0; /* je: equal / zero */

loc_001C0F7B: ;
    SET_LO8(eax, MEM8(0x5BB47A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001C0F9B; /* je: equal / zero */

loc_001C0F84: ;
    eax = MEM32(0x4675EC);
    ecx = MEM32(0x4675F0);
    edx = MEM32(0x4675F4);
    MEM32(esp + 0x10) = eax;
    goto loc_001C0FBD;

loc_001C0F9B: ;
    eax = ZX8(MEM8(ebx + 4));
    edx = ZX8(MEM8(ebx + 5));
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    ecx = MEM32(eax + 0x3E4038);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(edx * 4 + 0x3E4038);
    edx = MEM32(eax + 0x3E4050);

loc_001C0FBD: ;
    eax = ZX8(MEM8(ebx + 6));
    ebp = MEM32(0x36C658);
    MEM32(esp + 0x24) = ecx;
    ecx = ZX8(MEM8(ebx + 7));
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx * 4 + 0x3E4028);
    ecx = MEM32(esi + edi * 4 + 0x384);
    MEM32(esp + 0x18) = edx;
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    if (7) _cf = (int)(((ecx) >> (32 - (7))) & 1);
    ecx = ecx << 7;
    eax = MEM32(eax * 4 + 0x3E4028);
    _cf = 0; /* logical op clears CF */
    ebp = ebp | edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 0x36C66C) = edx;
    MEM32(0x36C658) = ebp;
    ecx = MEM32(esi + edi * 4 + 0x384);
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    if (7) _cf = (int)(((ecx) >> (32 - (7))) & 1);
    ecx = ecx << 7;
    _cf = 0; /* logical op clears CF */
    ebp = ebp | edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x36C670) = edx;
    MEM32(0x36C658) = ebp;
    ecx = MEM32(esi + edi * 4 + 0x384);
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    if (7) _cf = (int)(((ecx) >> (32 - (7))) & 1);
    ecx = ecx << 7;
    _cf = 0; /* logical op clears CF */
    ebp = ebp | edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0x36C674) = edx;
    MEM32(0x36C658) = ebp;
    ecx = MEM32(esi + edi * 4 + 0x384);
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    if (7) _cf = (int)(((ecx) >> (32 - (7))) & 1);
    ecx = ecx << 7;
    MEM32(ecx + 0x36C660) = eax;
    eax = 1;
    _cf = 0; /* logical op clears CF */
    ebp = ebp | edx;
    MEM32(0x36C658) = ebp;
    ecx = MEM32(esi + edi * 4 + 0x384);
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    edx = ebp;
    ebp = MEM32(esp + 0x20);
    _cf = 0; /* logical op clears CF */
    edx = edx | eax;
    MEM32(0x36C658) = edx;
    edx = MEM32(esp + 0x18);
    if (7) _cf = (int)(((ecx) >> (32 - (7))) & 1);
    ecx = ecx << 7;
    MEM32(ecx + 0x36C664) = edx;
    eax = MEM32(ebx + 4);
    MEM32(esi + edi * 4 + 0x360) = eax;

loc_001C10A0: ;
    eax = MEM32(ebx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001C10B5; /* je: equal / zero */

loc_001C10A7: ;
    ecx = MEM32(esi + edi * 4 + 0x384);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C10B5u); RECOMP_ABI_CALL(0x0035C210u, sub_0035C210); /* call 0x0035C210 */

loc_001C10B5: ;
    SET_LO8(eax, MEM8(edi + esi + 0x354));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001C1106; /* je: equal / zero */

loc_001C10C0: ;
    eax = MEM32(ebx + 0x30);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C10D9; /* je: equal / zero */

loc_001C10C8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C10EA; /* jne: not equal / not zero */

loc_001C10CB: ;
    edx = MEM32(ebx + 0x44);
    eax = MEM32(esi + edi * 4 + 0x384);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_001C10E5;

loc_001C10D9: ;
    ecx = MEM32(ebx + 0x40);
    edx = MEM32(esi + edi * 4 + 0x384);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_001C10E5: ;
    PUSH32(esp, 0x001C10EAu); RECOMP_ABI_CALL(0x0035C060u, sub_0035C060); /* call 0x0035C060 */

loc_001C10EA: ;
    ecx = MEM32(0x5BB488);
    eax = MEM32(0x5BB48C);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(0x5BB488) = ecx;
    MEM32(0x5BB48C) = eax;

loc_001C1106: ;
    eax = MEM32(esi + edi * 4 + 0x334);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_001C1132; /* jl: less (signed <) */

loc_001C1111: ;
    ecx = MEM32(esi + 0x330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ecx + 0x10))) >> 32) & 1);
    eax = eax + MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x48);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax + 0x48) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C1132; /* jge: greater or equal (signed >=) */

loc_001C112B: ;
    MEM32(eax + 0x68) = 3;

loc_001C1132: ;
    MEM32(esi + edi * 4 + 0x334) = ebp;
    eax = MEM32(ebx + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x48) = eax;
    POP32(esp, ebp);
    MEM32(ebx + 0x68) = 4;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_001C1153: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C1160
 * Original: 0x001C1160 - 0x001C1338 (472 bytes, 137 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1160: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x490);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 4) = ebx;
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C131E; /* jle: less or equal (signed <=) */

loc_001C117E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x384;
    goto loc_001C1190;

    /* nop */

loc_001C1190: ;
    SET_LO8(ecx, MEM8(ebx + eax + 0x354));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C132C; /* je: equal / zero */

loc_001C119F: ;
    edi = MEM32(esi + -80);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001C132C; /* jl: less (signed <) */

loc_001C11AA: ;
    eax = MEM32(ebx + 0x330);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6C);
    ecx = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(0x5BB47A));
    edi = edi + ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C11E0; /* je: equal / zero */

loc_001C11C1: ;
    ecx = MEM32(0x4675EC);
    edx = MEM32(0x4675F0);
    eax = MEM32(0x4675F4);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    goto loc_001C120A;

loc_001C11E0: ;
    eax = ZX8(MEM8(edi + 4));
    edx = ZX8(MEM8(edi + 5));
    eax = eax << 2;
    ecx = MEM32(eax + 0x3E4038);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(edx * 4 + 0x3E4038);
    edx = MEM32(eax + 0x3E4050);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;

loc_001C120A: ;
    ecx = ZX8(MEM8(edi + 7));
    edx = MEM32(ecx * 4 + 0x3E4028);
    ecx = MEM32(esi);
    eax = ZX8(MEM8(edi + 6));
    ebp = MEM32(0x36C658);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = ecx << 7;
    eax = MEM32(eax * 4 + 0x3E4028);
    ebp = ebp | ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(ecx + 0x36C66C) = ebx;
    MEM32(0x36C658) = ebp;
    ecx = MEM32(esi);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = ecx << 7;
    ebp = ebp | ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(ecx + 0x36C670) = ebx;
    MEM32(0x36C658) = ebp;
    ecx = MEM32(esi);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = ecx << 7;
    ebp = ebp | ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(ecx + 0x36C674) = ebx;
    MEM32(0x36C658) = ebp;
    ecx = MEM32(esi);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = ecx << 7;
    MEM32(ecx + 0x36C660) = eax;
    eax = 1;
    ebp = ebp | ebx;
    MEM32(0x36C658) = ebp;
    ecx = MEM32(esi);
    eax = eax << LO8(ecx);
    ecx = ecx << 7;
    MEM32(ecx + 0x36C664) = edx;
    ebx = ebp;
    ebx = ebx | eax;
    MEM32(0x36C658) = ebx;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0xE8);
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = ecx << 7;
    MEM32(ecx + 0x36C680) = eax;
    ebx = ebx | edx;
    MEM32(0x36C658) = ebx;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C12E6; /* je: equal / zero */

loc_001C12DD: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C12E6u); RECOMP_ABI_CALL(0x0035C210u, sub_0035C210); /* call 0x0035C210 */

loc_001C12E6: ;
    eax = MEM32(edi + 0x30);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C1323; /* je: equal / zero */

loc_001C12EE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C12FD; /* jne: not equal / not zero */

loc_001C12F1: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_001C12F8: ;
    PUSH32(esp, 0x001C12FDu); RECOMP_ABI_CALL(0x0035C060u, sub_0035C060); /* call 0x0035C060 */

loc_001C12FD: ;
    ebx = MEM32(esp + 0x10);

loc_001C1301: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(ebx + 0x490);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001C1190; /* jl: less (signed <) */

loc_001C131B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001C131E: ;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_001C1323: ;
    eax = MEM32(edi + 0x40);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_001C12F8;

loc_001C132C: ;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C1336u); RECOMP_ABI_CALL(0x0035C060u, sub_0035C060); /* call 0x0035C060 */

loc_001C1336: ;
    goto loc_001C1301;

}

/**
 * sub_001C1340
 * Original: 0x001C1340 - 0x001C1386 (70 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1340(void)
{

loc_001C1340: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x330);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 8);
    eax = eax & 0xFFFF;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    eax = eax + edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x2C);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x18);
    MEM32(eax) = edx;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001C1390
 * Original: 0x001C1390 - 0x001C13EC (92 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x200); PUSH32(esp, 0x001C13A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C13A3: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x28);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001C13B8; /* jge: greater or equal (signed >=) */

loc_001C13B5: ;
    eax = MEM32(edx + 8);

loc_001C13B8: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001C13C3; /* jge: greater or equal (signed >=) */

loc_001C13C0: ;
    ecx = MEM32(edx + 0xC);

loc_001C13C3: ;
    ebp = MEM32(esp + 0x1C);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    esi = esi | 0x10000;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x4A4); PUSH32(esp, 0x001C13E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C13E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001C13F0
 * Original: 0x001C13F0 - 0x001C1440 (80 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C13F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C13F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x330);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 8);
    eax = eax & 0xFFFF;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    eax = eax + edx;
    edx = ZX8(MEM8(eax + 0x10));
    MEM32(ecx) = edx;
    edx = ZX8(MEM8(eax + 0x11));
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = ZX8(MEM8(eax + 0x12));
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    edx = ZX8(MEM8(eax + 0x13));
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    SET_LO8(ecx, MEM8(eax + 0x15));
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(edx, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    MEM8(eax) = LO8(edx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001C1440
 * Original: 0x001C1440 - 0x001C1480 (64 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1440: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x330);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 8);
    eax = eax & 0xFFFF;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    eax = eax + edx;
    edx = ZX8(MEM8(eax + 0x14));
    MEM32(ecx) = edx;
    edx = ZX8(MEM8(eax + 0x13));
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    SET_LO8(ecx, MEM8(eax + 0x15));
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(edx, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    MEM8(eax) = LO8(edx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001C1480
 * Original: 0x001C1480 - 0x001C1592 (274 bytes, 87 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001C1480: ;
    eax = MEM32(ecx + 0x330);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFF;
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6C);
    eax = MEM32(esi + edx + 8);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001C14D3; /* jne: not equal / not zero */

loc_001C14A6: ;
    edx = MEM32(ecx + 0x178);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001C14D3; /* je: equal / zero */

loc_001C14B0: ;
    eax = MEM32(ecx + 0x17C);
    edi = MEM32(edx + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    if ((eax == 0)) goto loc_001C14D3; /* je: equal / zero */

loc_001C14C0: ;
    edi = MEM32(eax + 0x30);
    edx = ebx;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x10000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C158C; /* je: equal / zero */

loc_001C14D3: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001C150B; /* je: equal / zero */

loc_001C14DA: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C1504; /* jle: less or equal (signed <=) */

loc_001C14E2: ;
    eax = ecx + 0x334;

loc_001C14E8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x490)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x490) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001C1504; /* jge: greater or equal (signed >=) */

loc_001C14F0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C14FB; /* jne: not equal / not zero */

loc_001C14F4: ;
    MEM32(eax) = 0xFFFFFFFFu;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C14FB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x48) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001C14E8; /* jl: less (signed <) */

loc_001C1504: ;
    MEM32(esi + 0x48) = 0;

loc_001C150B: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001C1544; /* je: equal / zero */

loc_001C1512: ;
    eax = MEM32(esi + 0x50);
    ebx = MEM32(0x5BB480);
    edi = MEM32(0x5BB484);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(eax)) >> 32) & 1);
    ebx = ebx + eax;
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    MEM32(0x5BB480) = ebx;
    MEM32(0x5BB484) = edi;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C153Du); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001C153D: ;
    MEM32(esi + 0x40) = 0;

loc_001C1544: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001C157D; /* je: equal / zero */

loc_001C154B: ;
    eax = MEM32(esi + 0x50);
    edi = MEM32(0x5BB480);
    ecx = MEM32(0x5BB484);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    MEM32(0x5BB480) = edi;
    MEM32(0x5BB484) = ecx;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C1576u); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001C1576: ;
    MEM32(esi + 0x44) = 0;

loc_001C157D: ;
    ecx = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x68) = edx;

loc_001C158C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C15A0
 * Original: 0x001C15A0 - 0x001C15BF (31 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C15A0(void)
{

loc_001C15A0: ;
    eax = MEM32(ecx + 0x330);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = ecx & 0xFFFF;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    eax = MEM32(edx + ecx + 0x38);
    eax = MEM32(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C15C0
 * Original: 0x001C15C0 - 0x001C16BE (254 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C15C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C15C0: ;
    esp = esp - 0xC;
    edx = MEM32(esp + 0x10);
    edx = edx & 0xFFFF;
    MEM32(esp + 0x10) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x330);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx + 8);
    edx = edx + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001C15FE; /* je: equal / zero */

loc_001C15F4: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM8(edx + 6) = LO8(ecx);
    MEM8(edx + 7) = LO8(ebx);

loc_001C15FE: ;
    _fa = (uint32_t)(MEM32(edx + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x68), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C16B6; /* jne: not equal / not zero */

loc_001C1608: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax * 4 + 0x3E4028);
    eax = MEM32(ebx * 4 + 0x3E4028);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(edx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x48), esi (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x24) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001C16B5; /* jle: less or equal (signed <=) */

loc_001C1632: ;
    eax = edi + 0x384;
    PUSH32(esp, ebp);
    /* nop */

loc_001C1640: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x490)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x490) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C16B4; /* jge: greater or equal (signed >=) */

loc_001C164C: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(eax + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -80), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C16A6; /* jne: not equal / not zero */

loc_001C1655: ;
    ecx = MEM32(eax);
    ebp = MEM32(0x36C658);
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = ecx << 7;
    ebp = ebp | edi;
    edi = MEM32(esp + 0x10);
    MEM32(ecx + 0x36C660) = edi;
    MEM32(0x36C658) = ebp;
    ecx = MEM32(eax);
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = ecx << 7;
    ebp = ebp | edi;
    edi = MEM32(esp + 0x14);
    MEM32(ecx + 0x36C664) = edi;
    SET_LO8(ecx, MEM8(esp + 0x24));
    edi = MEM32(esp + 0x18);
    MEM32(0x36C658) = ebp;
    MEM8(eax + -34) = LO8(ecx);
    MEM8(eax + -33) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C16A6: ;
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x48);
    eax = eax + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1640; /* jl: less (signed <) */

loc_001C16B4: ;
    POP32(esp, ebp);

loc_001C16B5: ;
    POP32(esp, esi);

loc_001C16B6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C16C0
 * Original: 0x001C16C0 - 0x001C16EE (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C16C0(void)
{

loc_001C16C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x330);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 8);
    eax = eax & 0xFFFF;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    eax = eax + edx;
    edx = ZX8(MEM8(eax + 6));
    MEM32(ecx) = edx;
    edx = ZX8(MEM8(eax + 7));
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C16F0
 * Original: 0x001C16F0 - 0x001C17E8 (248 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C16F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C16F0: ;
    esp = esp - 0xC;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x330);
    edx = edx & 0xFFFF;
    MEM32(esp + 0x10) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    eax = MEM32(edx + esi + 0x68);
    edx = edx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM8(edx + 4) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001C17E0; /* jne: not equal / not zero */

loc_001C1729: ;
    SET_LO8(eax, MEM8(0x5BB47A));
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1744; /* je: equal / zero */

loc_001C1734: ;
    eax = MEM32(0x4675EC);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x4675F4);
    goto loc_001C1756;

loc_001C1744: ;
    eax = MEM32(ebx * 4 + 0x3E4038);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebx * 4 + 0x3E4050);

loc_001C1756: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C17E0; /* jle: less or equal (signed <=) */

loc_001C1769: ;
    PUSH32(esp, ebp);
    eax = ecx + 0x384;
    PUSH32(esp, edi);

loc_001C1771: ;
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x490)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x490) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C17DE; /* jge: greater or equal (signed >=) */

loc_001C177D: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(eax + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -80), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C17D0; /* jne: not equal / not zero */

loc_001C1786: ;
    ecx = MEM32(eax);
    ebp = MEM32(0x36C658);
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = ecx << 7;
    ebp = ebp | edi;
    edi = MEM32(esp + 0x10);
    MEM32(ecx + 0x36C670) = edi;
    MEM32(0x36C658) = ebp;
    ecx = MEM32(eax);
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = ecx << 7;
    ebp = ebp | edi;
    edi = MEM32(esp + 0x14);
    MEM32(ecx + 0x36C674) = edi;
    ecx = MEM32(esp + 0x18);
    MEM32(0x36C658) = ebp;
    MEM8(eax + -36) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C17D0: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(edx + 0x48);
    eax = eax + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1771; /* jl: less (signed <) */

loc_001C17DE: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001C17E0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C17F0
 * Original: 0x001C17F0 - 0x001C180E (30 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C17F0(void)
{

loc_001C17F0: ;
    eax = MEM32(ecx + 0x330);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = ecx & 0xFFFF;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    eax = ZX8(MEM8(edx + ecx + 4));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1810
 * Original: 0x001C1810 - 0x001C18D9 (201 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1810: ;
    esp = esp - 8;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x330);
    edx = edx & 0xFFFF;
    MEM32(esp + 0xC) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    eax = MEM32(edx + esi + 0x68);
    edx = edx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM8(edx + 5) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001C18D1; /* jne: not equal / not zero */

loc_001C1849: ;
    SET_LO8(eax, MEM8(0x5BB47A));
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(0x4675F0);
    if (TEST_NZ(_fa, _fb)) goto loc_001C1860; /* jne: not equal / not zero */

loc_001C1859: ;
    eax = MEM32(ebx * 4 + 0x3E4038);

loc_001C1860: ;
    MEM32(esp + 8) = eax;
    eax = MEM32(edx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C18D1; /* jle: less or equal (signed <=) */

loc_001C1873: ;
    PUSH32(esp, ebp);
    eax = ecx + 0x384;
    PUSH32(esp, edi);
    goto loc_001C1880;

    /* nop */

loc_001C1880: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x490)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x490) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C18CF; /* jge: greater or equal (signed >=) */

loc_001C188C: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(eax + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -80), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C18C1; /* jne: not equal / not zero */

loc_001C1895: ;
    ecx = MEM32(eax);
    ebp = MEM32(0x36C658);
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = ecx << 7;
    ebp = ebp | edi;
    edi = MEM32(esp + 0x10);
    MEM32(ecx + 0x36C66C) = edi;
    ecx = MEM32(esp + 0x14);
    MEM32(0x36C658) = ebp;
    MEM8(eax + -35) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C18C1: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(edx + 0x48);
    eax = eax + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1880; /* jl: less (signed <) */

loc_001C18CF: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001C18D1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C18E0
 * Original: 0x001C18E0 - 0x001C18FE (30 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C18E0(void)
{

loc_001C18E0: ;
    eax = MEM32(ecx + 0x330);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    ecx = ecx & 0xFFFF;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    eax = ZX8(MEM8(edx + ecx + 5));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1900
 * Original: 0x001C1900 - 0x001C1991 (145 bytes, 56 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = ecx;
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_001C191F; /* je: equal / zero */

loc_001C1918: ;
    edi = MEM32(eax + 0xC);
    MEM32(esp + 0x10) = edi;

loc_001C191F: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x5C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1959; /* je: equal / zero */

loc_001C1928: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1935; /* je: equal / zero */

loc_001C192F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C1935u); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001C1935: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = 0xFFFFFFFFu;
    MEM32(esi + 0x5C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001C194D; /* jg: greater (signed >) */

loc_001C1949: ;
    PUSH32(esp, 3);
    goto loc_001C194E;

loc_001C194D: ;
    PUSH32(esp, eax);

loc_001C194E: ;
    PUSH32(esp, 0x001C1953u); RECOMP_ABI_CALL(0x00361600u, sub_00361600); /* call 0x00361600 */

loc_001C1953: ;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x5C) = edi;

loc_001C1959: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C1987; /* jle: less or equal (signed <=) */

loc_001C195D: ;
    eax = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C1968u); RECOMP_ABI_CALL(0x00361660u, sub_00361660); /* call 0x00361660 */

loc_001C1968: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001C1975u); RECOMP_ABI_CALL(0x001BDF30u, sub_001BDF30); /* call 0x001BDF30 */

loc_001C1975: ;
    eax = MEM32(ebx + 0x528);
    edx = eax + 1;
    MEM32(ebx + 0x528) = edx;
    MEM32(esi + 0x58) = eax;

loc_001C1987: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C19A0
 * Original: 0x001C19A0 - 0x001C1A46 (166 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C19A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C19A0: ;
    SET_LO8(eax, MEM8(0x5BB490));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C19AD; /* je: equal / zero */

loc_001C19A9: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001C19B1;

loc_001C19AD: ;
    SET_LO8(eax, MEM8(esp + 8));

loc_001C19B1: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEM8(edx + ecx + 0x354) = LO8(eax);
    esi = MEM32(ecx + 0x160);
    esi = esi | 0x180;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(ecx + 0x160) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001C1A2A; /* je: equal / zero */

loc_001C19D3: ;
    eax = MEM32(ecx + edx * 4 + 0x334);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001C1A2A; /* jl: less (signed <) */

loc_001C19DE: ;
    esi = MEM32(ecx + 0x330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    esi = MEM32(eax + edi + 0x30);
    eax = eax + edi;
    esi = esi - 0;
    POP32(esp, edi);
    if ((esi == 0)) goto loc_001C1A12; /* je: equal / zero */

loc_001C19F7: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    if ((_fa != 0)) goto loc_001C1A43; /* jne: not equal / not zero */

loc_001C19FB: ;
    eax = MEM32(eax + 0x44);
    MEM32(esp + 8) = eax;
    ecx = MEM32(ecx + edx * 4 + 0x384);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0035C060(); return; /* tail jmp 0x0035C060 */

loc_001C1A12: ;
    eax = MEM32(eax + 0x40);
    POP32(esp, esi);
    MEM32(esp + 8) = eax;
    ecx = MEM32(ecx + edx * 4 + 0x384);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0035C060(); return; /* tail jmp 0x0035C060 */

loc_001C1A2A: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0;
    edx = MEM32(ecx + edx * 4 + 0x384);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0035C060(); return; /* tail jmp 0x0035C060 */

loc_001C1A43: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C1A50
 * Original: 0x001C1A50 - 0x001C1B2A (218 bytes, 84 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 1 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C1B26; /* jb: below (unsigned <) */

loc_001C1A5D: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1B26; /* je: equal / zero */

loc_001C1A68: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esi);
    MEM32(esi + 0x64) = ecx;
    SET_LO8(eax, LO8(eax) | 1);
    ecx = esi;
    MEM8(esi + 0x38) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001C1A7Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C1A7B: ;
    ecx = ZX8(MEM8(esi + 0x2C));
    edx = ZX8(MEM8(esi + 0x28));
    eax = eax + ecx;
    SET_LO8(ecx, MEM8(esi + 0x29));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_001C1AB4; /* jne: not equal / not zero */

loc_001C1A94: ;
    ecx = MEM32(esi + 0x60);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esi + 0x5C);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(esi + 0x54);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5BC964); PUSH32(esp, 0x001C1AB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C1AB2: ;
    goto loc_001C1AD4;

loc_001C1AB4: ;
    edx = MEM32(esi + 0x60);
    eax = MEM32(edx + 0x10);
    ecx = ZX8(LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x5BC960); PUSH32(esp, 0x001C1AD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C1AD4: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    esp = esp + 0x20;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1B26; /* je: equal / zero */

loc_001C1ADF: ;
    edx = MEM32(esi + 0x4C);
    edx = edx >> 5;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1B26; /* je: equal / zero */

loc_001C1AEA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001C1AF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C1AF1: ;
    ecx = ZX8(MEM8(esi + 0x2D));
    edx = ZX8(MEM8(esi + 0x28));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x60);
    eax = eax + ecx;
    ecx = ZX8(MEM8(esi + 0x29));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x5BC964); PUSH32(esp, 0x001C1B23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C1B23: ;
    esp = esp + 0x20;

loc_001C1B26: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001C1B30
 * Original: 0x001C1B30 - 0x001C1C56 (294 bytes, 104 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1B30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1B30: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x4C);
    SET_LO8(eax, MEM8(esi + 0x1E0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM32(esi + 0x4C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001C1B54; /* jne: not equal / not zero */

loc_001C1B4A: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C4E; /* jne: not equal / not zero */

loc_001C1B54: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x58) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C1BB7; /* jle: less or equal (signed <=) */

loc_001C1B5C: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1B82; /* je: equal / zero */

loc_001C1B63: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001C1B6Bu); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_001C1B6B: ;
    eax = MEM32(esi + 0x538);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x50) = ebx;
    PUSH32(esp, 0x001C1B7Cu); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_001C1B7C: ;
    MEM32(esi + 0x538) = ebx;

loc_001C1B82: ;
    ecx = MEM32(esi + 0x48);
    ecx = ecx << 6;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C1B92u); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_001C1B92: ;
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esi + 0x48);
    edx = eax + eax * 2;
    edx = edx << 4;
    PUSH32(esp, 0x10);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001C1BABu); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_001C1BAB: ;
    MEM32(esi + 0x538) = eax;
    eax = MEM32(esi + 0x48);
    MEM32(esi + 0x58) = eax;

loc_001C1BB7: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x18), LO8(ebx) (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C1C25; /* je: equal / zero */

loc_001C1BBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = MEM32(esi + 0x50);
    if (CMP_LE(_fas, _fbs)) goto loc_001C1C4C; /* jle: less or equal (signed <=) */

loc_001C1BCA: ;
    ebp = 0; /* xor self */
    /* nop */

loc_001C1BD0: ;
    eax = MEM32(esi + 0x54);
    eax = eax + ebp;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001C1BE2u); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_001C1BE2: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x001C1C06u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_001C1C06: ;
    ecx = edi;
    PUSH32(esp, 0x001C1C0Du); RECOMP_ABI_CALL(0x002423F0u, sub_002423F0); /* call 0x002423F0 */

loc_001C1C0D: ;
    eax = MEM32(esi + 0x48);
    edi = edi + 0x40;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1BD0; /* jl: less (signed <) */

loc_001C1C1B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_001C1C25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = MEM32(esi + 0x538);
    if (CMP_LE(_fas, _fbs)) goto loc_001C1C4C; /* jle: less or equal (signed <=) */

loc_001C1C2F: ;
    ebp = 0; /* xor self */

loc_001C1C31: ;
    eax = MEM32(esi + 0x54);
    eax = eax + ebp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001C1C3Eu); RECOMP_ABI_CALL(0x0023DC90u, sub_0023DC90); /* call 0x0023DC90 */

loc_001C1C3E: ;
    eax = MEM32(esi + 0x48);
    edi = edi + 0x30;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1C31; /* jl: less (signed <) */

loc_001C1C4C: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001C1C4E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1C60
 * Original: 0x001C1C60 - 0x001C1C93 (51 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1C60: ;
    PUSH32(esp, ecx);
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C1C86; /* jle: less or equal (signed <=) */

loc_001C1C6B: ;
    esi = MEM32(eax + 0x10);
    edi = edi;

loc_001C1C70: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C7C; /* jne: not equal / not zero */

loc_001C1C77: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1C8A; /* je: equal / zero */

loc_001C1C7C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1C70; /* jl: less (signed <) */

loc_001C1C84: ;
    goto loc_001C1C8A;

loc_001C1C86: ;
    eax = MEM32(esp + 4);

loc_001C1C8A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001C1C91; /* jne: not equal / not zero */

loc_001C1C8F: ;
    eax = 0; /* xor self */

loc_001C1C91: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1CA0
 * Original: 0x001C1CA0 - 0x001C202A (906 bytes, 316 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1CA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1CA0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001C1CB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C1CB2: ;
    edi = eax;
    PUSH32(esp, 0x400);
    ecx = ebx;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x001C1CC4u); RECOMP_ABI_CALL(0x001F7ED0u, sub_001F7ED0); /* call 0x001F7ED0 */

loc_001C1CC4: ;
    esi = eax;
    MEM32(esi) = 0x20000000;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 1 (8-bit) */
    MEM32(esp + 0x20) = esi;
    ebp = 1;
    if (TEST_Z(_fa, _fb)) goto loc_001C1D2D; /* je: equal / zero */

loc_001C1CDA: ;
    eax = MEM32(esp + 0x28);
    edi = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C1D07; /* jle: less or equal (signed <=) */

loc_001C1CE7: ;
    edx = MEM32(eax + 0x10);
    /* nop */

loc_001C1CF0: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1CFD; /* jne: not equal / not zero */

loc_001C1CF7: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1D0B; /* je: equal / zero */

loc_001C1CFD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1CF0; /* jl: less (signed <) */

loc_001C1D05: ;
    goto loc_001C1D0B;

loc_001C1D07: ;
    eax = MEM32(esp + 0x28);

loc_001C1D0B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1D21; /* je: equal / zero */

loc_001C1D0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1D21; /* je: equal / zero */

loc_001C1D13: ;
    ecx = MEM32(eax + 0x1C);
    ecx = ecx | 0x40320000;
    MEM32(esi + 4) = ecx;
    goto loc_001C1D28;

loc_001C1D21: ;
    MEM32(esi + 4) = 0x50030000;

loc_001C1D28: ;
    ebp = 2;

loc_001C1D2D: ;
    SET_LO8(eax, MEM8(ebx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1DF1; /* je: equal / zero */

loc_001C1D38: ;
    SET_LO8(eax, MEM8(ebx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_BE(_fa & _fb, 0)) goto loc_001C1DF1; /* jbe: below or equal (unsigned <=) */

loc_001C1D47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001C1DF1; /* ja: above (unsigned >) */

loc_001C1D4F: ;
    eax = MEM32(esp + 0x28);
    ebx = 0; /* xor self */
    edi = 5;
    PUSH32(esp, 0x001C1D5Fu); RECOMP_ABI_CALL(0x001C1C60u, sub_001C1C60); /* call 0x001C1C60 */

loc_001C1D5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1DA9; /* je: equal / zero */

loc_001C1D63: ;
    ecx = ZX8(MEM8(esp + 0x13));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001C1DBA; /* ja: above (unsigned >) */

loc_001C1D6E: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1C202C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001C1D75u) goto loc_001C1D75;
    if (_jt == 0x001C1D83u) goto loc_001C1D83;
    if (_jt == 0x001C1D8Du) goto loc_001C1D8D;
    if (_jt == 0x001C1D9Bu) goto loc_001C1D9B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C1D75: ;
    edx = MEM32(eax + 0x1C);
    edx = edx | 0x40120000;
    MEM32(esi + ebp * 4) = edx;
    goto loc_001C1DB9;

loc_001C1D83: ;
    eax = MEM32(eax + 0x1C);
    eax = eax | 0x40220000;
    goto loc_001C1DB6;

loc_001C1D8D: ;
    ecx = MEM32(eax + 0x1C);
    ecx = ecx | 0x40320000;
    MEM32(esi + ebp * 4) = ecx;
    goto loc_001C1DB9;

loc_001C1D9B: ;
    edx = MEM32(eax + 0x1C);
    edx = edx | 0x40420000;
    MEM32(esi + ebp * 4) = edx;
    goto loc_001C1DB9;

loc_001C1DA9: ;
    eax = ZX8(MEM8(esp + 0x13));
    eax = eax | 0x5000;
    eax = eax << 0x10;

loc_001C1DB6: ;
    MEM32(esi + ebp * 4) = eax;

loc_001C1DB9: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C1DBA: ;
    eax = MEM32(esp + 0x28);
    ebx = 0; /* xor self */
    edi = 6;
    PUSH32(esp, 0x001C1DCAu); RECOMP_ABI_CALL(0x001C1C60u, sub_001C1C60); /* call 0x001C1C60 */

loc_001C1DCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1DE9; /* je: equal / zero */

loc_001C1DCE: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    edx = edx >> 8;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001C1DF1; /* jbe: below or equal (unsigned <=) */

loc_001C1DDC: ;
    eax = MEM32(eax + 0x1C);
    eax = eax | 0x40400000;
    MEM32(esi + ebp * 4) = eax;
    goto loc_001C1DF0;

loc_001C1DE9: ;
    MEM32(esi + ebp * 4) = 0x50010000;

loc_001C1DF0: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C1DF1: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    ebx = MEM32(esp + 0x28);
    edx = edx >> 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1E49; /* je: equal / zero */

loc_001C1E02: ;
    edi = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C1E28; /* jle: less or equal (signed <=) */

loc_001C1E0B: ;
    edx = MEM32(ebx + 0x10);
    edi = edi;

loc_001C1E10: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1E1E; /* jne: not equal / not zero */

loc_001C1E18: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1E2C; /* je: equal / zero */

loc_001C1E1E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1E10; /* jl: less (signed <) */

loc_001C1E26: ;
    goto loc_001C1E2C;

loc_001C1E28: ;
    eax = MEM32(esp + 0x28);

loc_001C1E2C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1E41; /* je: equal / zero */

loc_001C1E30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1E41; /* je: equal / zero */

loc_001C1E34: ;
    eax = MEM32(eax + 0x1C);
    eax = eax | 0x40320000;
    MEM32(esi + ebp * 4) = eax;
    goto loc_001C1E48;

loc_001C1E41: ;
    MEM32(esi + ebp * 4) = 0x50030000;

loc_001C1E48: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C1E49: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1E9D; /* je: equal / zero */

loc_001C1E57: ;
    edi = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C1E7C; /* jle: less or equal (signed <=) */

loc_001C1E60: ;
    edx = MEM32(ebx + 0x10);

loc_001C1E63: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1E72; /* jne: not equal / not zero */

loc_001C1E6B: ;
    ebx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1E80; /* je: equal / zero */

loc_001C1E72: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1E63; /* jl: less (signed <) */

loc_001C1E7A: ;
    goto loc_001C1E80;

loc_001C1E7C: ;
    eax = MEM32(esp + 0x28);

loc_001C1E80: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1E95; /* je: equal / zero */

loc_001C1E84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1E95; /* je: equal / zero */

loc_001C1E88: ;
    eax = MEM32(eax + 0x1C);
    eax = eax | 0x40400000;
    MEM32(esi + ebp * 4) = eax;
    goto loc_001C1E9C;

loc_001C1E95: ;
    MEM32(esi + ebp * 4) = 0x50010000;

loc_001C1E9C: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C1E9D: ;
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 2));
    ebx = 0;
    edx = edx & 0xF;
    MEM32(esp + 0x1C) = edx;
    if (0) goto loc_001C1F13; /* jbe: below or equal (unsigned <=) */

loc_001C1EB4: ;
    ecx = MEM32(esp + 0x28);
    goto loc_001C1EC0;

    /* nop */

loc_001C1EC0: ;
    edx = MEM32(esp + 0x28);
    edi = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C1EE9; /* jle: less or equal (signed <=) */

loc_001C1ECD: ;
    edx = MEM32(edx + 0x10);

loc_001C1ED0: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1EDD; /* jne: not equal / not zero */

loc_001C1ED8: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1EE5; /* je: equal / zero */

loc_001C1EDD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1ED0; /* jl: less (signed <) */

loc_001C1EE5: ;
    edx = MEM32(esp + 0x28);

loc_001C1EE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1F02; /* jne: not equal / not zero */

loc_001C1EED: ;
    ecx = 0; /* xor self */

loc_001C1EEF: ;
    MEM32(esi + ebp * 4) = 0x50020000;

loc_001C1EF6: ;
    eax = MEM32(esp + 0x1C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C1EC0; /* jb: below (unsigned <) */

loc_001C1F00: ;
    goto loc_001C1F17;

loc_001C1F02: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1EEF; /* je: equal / zero */

loc_001C1F06: ;
    eax = MEM32(ecx + 0x1C);
    eax = eax | 0x40220000;
    MEM32(esi + ebp * 4) = eax;
    goto loc_001C1EF6;

loc_001C1F13: ;
    edx = MEM32(esp + 0x28);

loc_001C1F17: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    eax = eax >> 0x16;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1F7C; /* je: equal / zero */

loc_001C1F24: ;
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1F7C; /* je: equal / zero */

loc_001C1F2F: ;
    edi = MEM32(edx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C1F6E; /* jle: less or equal (signed <=) */

loc_001C1F38: ;
    edx = MEM32(edx + 0x10);
    ebx = 7;

loc_001C1F40: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1F4D; /* jne: not equal / not zero */

loc_001C1F47: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1F55; /* je: equal / zero */

loc_001C1F4D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1F40; /* jl: less (signed <) */

loc_001C1F55: ;
    edx = MEM32(esp + 0x28);

loc_001C1F59: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1F74; /* je: equal / zero */

loc_001C1F5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1F74; /* je: equal / zero */

loc_001C1F61: ;
    eax = MEM32(eax + 0x1C);
    eax = eax | 0x40320000;
    MEM32(esi + ebp * 4) = eax;
    goto loc_001C1F7B;

loc_001C1F6E: ;
    eax = MEM32(esp + 0x28);
    goto loc_001C1F59;

loc_001C1F74: ;
    MEM32(esi + ebp * 4) = 0x50030000;

loc_001C1F7B: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C1F7C: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    eax = eax >> 0x17;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1FDE; /* je: equal / zero */

loc_001C1F89: ;
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1FDE; /* je: equal / zero */

loc_001C1F94: ;
    edi = MEM32(edx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C1FBC; /* jle: less or equal (signed <=) */

loc_001C1F9D: ;
    edx = MEM32(edx + 0x10);
    ebx = 8;

loc_001C1FA5: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1FB2; /* jne: not equal / not zero */

loc_001C1FAC: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1FC0; /* je: equal / zero */

loc_001C1FB2: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1FA5; /* jl: less (signed <) */

loc_001C1FBA: ;
    goto loc_001C1FC0;

loc_001C1FBC: ;
    eax = MEM32(esp + 0x28);

loc_001C1FC0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1FD6; /* je: equal / zero */

loc_001C1FC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1FD6; /* je: equal / zero */

loc_001C1FC8: ;
    edx = MEM32(eax + 0x1C);
    edx = edx | 0x40320000;
    MEM32(esi + ebp * 4) = edx;
    goto loc_001C1FDD;

loc_001C1FD6: ;
    MEM32(esi + ebp * 4) = 0x50030000;

loc_001C1FDD: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C1FDE: ;
    edx = MEM32(esp + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2017; /* je: equal / zero */

loc_001C1FE6: ;
    eax = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x2C);
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    edi = eax + ebp * 4;
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
    POP32(esp, edi);
    edx = edx >> 2;
    ebp = ebp + edx;
    POP32(esp, esi);
    MEM32(eax + ebp * 4) = 0xFFFFFFFFu;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

loc_001C2017: ;
    POP32(esp, edi);
    MEM32(esi + ebp * 4) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C202A
 * Original: 0x001C202A - 0x001C2040 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C202A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C202A: ;
    edi = edi;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_001C204B(); return; }

loc_001C202E: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    { uint64_t _t = (uint64_t)(MEM32(0x1D8D001C)) - (uint64_t)(0x1C) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(0x1D8D001C) = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(MEM8(ebx + -872408035)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ebx + -872408035) = MEM8(ebx + -872408035) + LO8(ebx);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_001C2040
 * Original: 0x001C2040 - 0x001C2245 (517 bytes, 157 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2040: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x400);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x001C2057u); RECOMP_ABI_CALL(0x001F7ED0u, sub_001F7ED0); /* call 0x001F7ED0 */

loc_001C2057: ;
    ebp = eax;
    MEM32(ebp) = 0x20000000;
    esi = MEM32(esi + 0x48);
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = 1;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C220C; /* jle: less or equal (signed <=) */

loc_001C207D: ;
    /* nop */

loc_001C2080: ;
    ecx = MEM32(esi + 0x10);
    esi = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001C20D2; /* jle: less or equal (signed <=) */

loc_001C2097: ;
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 0x10) = edx;
    edi = edi;

loc_001C20A0: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C20B6; /* jne: not equal / not zero */

loc_001C20AE: ;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C20D0; /* je: equal / zero */

loc_001C20B6: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001C20A0; /* jl: less (signed <) */

loc_001C20CE: ;
    goto loc_001C20D2;

loc_001C20D0: ;
    edi = ecx;

loc_001C20D2: ;
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001C21F4; /* ja: above (unsigned >) */

loc_001C20DF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1C2248); /* switch: 10 entries, 8 targets */
    if (_jt == 0x001C20E6u) goto loc_001C20E6;
    if (_jt == 0x001C20F8u) goto loc_001C20F8;
    if (_jt == 0x001C2119u) goto loc_001C2119;
    if (_jt == 0x001C2135u) goto loc_001C2135;
    if (_jt == 0x001C2147u) goto loc_001C2147;
    if (_jt == 0x001C21AAu) goto loc_001C21AA;
    if (_jt == 0x001C21D5u) goto loc_001C21D5;
    if (_jt == 0x001C21F4u) goto loc_001C21F4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C20E6: ;
    edx = MEM32(edi + 0x1C);
    edx = edx | 0x40320000;
    MEM32(ebp + ebx * 4) = edx;
    goto loc_001C21F3;

loc_001C20F8: ;
    eax = MEM32(esp + 0x18);
    SET_LO8(ecx, MEM8(eax + 0x68));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C21F4; /* je: equal / zero */

loc_001C2107: ;
    ecx = MEM32(edi + 0x1C);
    ecx = ecx | 0x40420000;
    MEM32(ebp + ebx * 4) = ecx;
    goto loc_001C21F3;

loc_001C2119: ;
    edx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(edx + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C21F4; /* je: equal / zero */

loc_001C2128: ;
    eax = MEM32(edi + 0x1C);
    eax = eax | 0x40400000;
    goto loc_001C21EF;

loc_001C2135: ;
    edx = MEM32(edi + 0x1C);
    edx = edx | 0x40400000;
    MEM32(ebp + ebx * 4) = edx;
    goto loc_001C21F3;

loc_001C2147: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(0x5BC3F4);
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001C2158u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C2158: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C216B; /* jne: not equal / not zero */

loc_001C215E: ;
    eax = MEM32(edi + 0x1C);
    eax = eax | 0x40120000;
    goto loc_001C21EF;

loc_001C216B: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(0x5BC94C);
    eax = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001C217Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C217D: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C2192; /* jne: not equal / not zero */

loc_001C2183: ;
    ecx = MEM32(edi + 0x1C);
    ecx = ecx | 0x40220000;
    MEM32(ebp + ebx * 4) = ecx;
    goto loc_001C21F3;

loc_001C2192: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(0x5BC944);
    eax = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001C21A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C21A4: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C21B9; /* jne: not equal / not zero */

loc_001C21AA: ;
    ecx = MEM32(edi + 0x1C);
    ecx = ecx | 0x40320000;
    MEM32(ebp + ebx * 4) = ecx;
    goto loc_001C21F3;

loc_001C21B9: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    esi = MEM32(0x5BC938);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001C21C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C21C7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C21F4; /* jne: not equal / not zero */

loc_001C21CB: ;
    eax = MEM32(edi + 0x1C);
    eax = eax | 0x40420000;
    goto loc_001C21EF;

loc_001C21D5: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    esi = MEM32(0x5BC944);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001C21E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C21E3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C21F4; /* jne: not equal / not zero */

loc_001C21E7: ;
    eax = MEM32(edi + 0x1C);
    eax = eax | 0x40320000;

loc_001C21EF: ;
    MEM32(ebp + ebx * 4) = eax;

loc_001C21F3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C21F4: ;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x20);
    ecx = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001C2080; /* jl: less (signed <) */

loc_001C220C: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2231; /* je: equal / zero */

loc_001C2214: ;
    esi = MEM32(esp + 0x2C);
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebp + ebx * 4;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    eax = eax >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ebx = ebx + eax;

loc_001C2231: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + ebx * 4) = 0xFFFFFFFFu;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C2270
 * Original: 0x001C2270 - 0x001C24FE (654 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2270(void)
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

loc_001C2270: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1F0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x458); PUSH32(esp, 0x001C228Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C228C: ;
    ecx = MEM32(esi + 0x160);
    ecx = ecx >> 7;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001C2367; /* je: equal / zero */

loc_001C22A2: ;
    edi = MEM32(esi + 0x490);
    eax = eax | 0xFFFFFFFFu;
    edx = esi + 0x44C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(edx);
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C22EE; /* jle: less or equal (signed <=) */

loc_001C22BC: ;
    /* nop */

loc_001C22C0: ;
    _fa = (uint32_t)(MEM8(esi + ecx + 0x354)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + ecx + 0x354), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C22E2; /* je: equal / zero */

loc_001C22CA: ;
    _fa = (uint32_t)(MEM32(edx + -280)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + -280), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C22E2; /* jl: less (signed <) */

loc_001C22D3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C22DE; /* jne: not equal / not zero */

loc_001C22D7: ;
    eax = MEM32(edx + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C22E0; /* je: equal / zero */

loc_001C22DE: ;
    SET_LO8(ebx, 0); /* xor self */

loc_001C22E0: ;
    eax = ecx;

loc_001C22E2: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C22C0; /* jl: less (signed <) */

loc_001C22EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001C2309; /* jge: greater or equal (signed >=) */

loc_001C22EE: ;
    ecx = MEM32(esi + 0x2D4);
    ecx = ecx & 0xFFFFC7FFu;
    eax = ecx;
    MEM32(esi + 0x2D4) = ecx;
    eax = eax & 0xFF8FFFFFu;
    goto loc_001C2340;

loc_001C2309: ;
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C2316; /* jb: below (unsigned <) */

loc_001C2311: ;
    ecx = 7;

loc_001C2316: ;
    edi = MEM32(esi + 0x2D4);
    ecx = ecx << 0xB;
    ecx = ecx ^ edi;
    ecx = ecx & 0x3800;
    eax = edi;
    eax = eax ^ ecx;
    ebp = ebp << 0x14;
    edx = eax;
    ebp = ebp ^ edx;
    ebp = ebp & 0x700000;
    MEM32(esi + 0x2D4) = eax;
    eax = eax ^ ebp;

loc_001C2340: ;
    edx = ZX8(LO8(ebx));
    edi = eax;
    edx = edx << 0x17;
    edx = edx ^ edi;
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x2D4) = eax;
    edx = edx & 0x800000;
    eax = eax ^ edx;
    MEM32(esi + 0x2D4) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);

loc_001C2367: ;
    SET_LO8(ecx, MEM8(esi + 0x230));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C23BA; /* je: equal / zero */

loc_001C2371: ;
    ecx = ZX8(MEM8(eax + 0x29));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C237F; /* jb: below (unsigned <) */

loc_001C237A: ;
    ecx = 7;

loc_001C237F: ;
    ebx = MEM32(esi + 0x2D4);
    ecx = ecx + ecx;
    ecx = ecx ^ ebx;
    ecx = ecx & 0xE;
    edx = ebx;
    edx = edx ^ ecx;
    MEM32(esi + 0x2D4) = edx;
    edx = MEM32(eax + 0x4C);
    edi = MEM32(esi + 0x2D4);
    edx = edx >> 1;
    eax = ZX8(LO8(edx));
    eax = eax << 0xE;
    eax = eax ^ edi;
    eax = eax & 0x4000;
    ecx = edi;
    ecx = ecx ^ eax;
    MEM32(esi + 0x2D4) = ecx;
    goto loc_001C240E;

loc_001C23BA: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001C23C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C23C1: ;
    eax = MEM32(eax);
    eax = eax >> 4;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C23D3; /* jb: below (unsigned <) */

loc_001C23CE: ;
    eax = 7;

loc_001C23D3: ;
    ebx = MEM32(esi + 0x2D4);
    eax = eax + eax;
    eax = eax ^ ebx;
    eax = eax & 0xE;
    ecx = ebx;
    ecx = ecx ^ eax;
    MEM32(esi + 0x2D4) = ecx;
    ecx = MEM32(edi + 0x34);
    edi = MEM32(esi + 0x2D4);
    ecx = ecx >> 6;
    edx = ZX8(LO8(ecx));
    edx = edx << 0xE;
    edx = edx ^ edi;
    edx = edx & 0x4000;
    eax = edi;
    eax = eax ^ edx;
    MEM32(esi + 0x2D4) = eax;

loc_001C240E: ;
    SET_LO8(eax, MEM8(esi + 0x4CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2461; /* je: equal / zero */

loc_001C2418: ;
    ecx = MEM32(esi + 0x4C4);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C2454; /* jp: parity */

loc_001C2430: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C2454; /* jp: parity */

loc_001C2442: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C2461; /* jnp: not parity */

loc_001C2454: ;
    eax = MEM32(esi + 0x2D4);
    eax = eax | 0x400;
    goto loc_001C246C;

loc_001C2461: ;
    eax = MEM32(esi + 0x2D4);
    eax = eax & 0xFFFFFBFFu;

loc_001C246C: ;
    MEM32(esi + 0x2D4) = eax;
    eax = MEM32(esi + 0x2B4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C2485; /* jb: below (unsigned <) */

loc_001C2480: ;
    eax = 7;

loc_001C2485: ;
    ebx = MEM32(esi + 0x2D4);
    eax = eax << 4;
    eax = eax ^ ebx;
    eax = eax & 0x70;
    edx = ebx;
    edx = edx ^ eax;
    MEM32(esi + 0x2D4) = edx;
    ecx = MEM32(esi + 0x2B8);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C24B0; /* jb: below (unsigned <) */

loc_001C24AB: ;
    eax = 7;

loc_001C24B0: ;
    ebx = MEM32(esi + 0x2D4);
    eax = eax << 7;
    eax = eax ^ ebx;
    eax = eax & 0x380;
    edx = ebx;
    edx = edx ^ eax;
    MEM32(esi + 0x2D4) = edx;
    edx = MEM32(esi + 0x2BC);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C24DD; /* jb: below (unsigned <) */

loc_001C24D8: ;
    eax = 1;

loc_001C24DD: ;
    edi = MEM32(esi + 0x2D4);
    eax = eax << 0xF;
    eax = eax ^ edi;
    ecx = edi;
    eax = eax & 0x8000;
    ecx = ecx ^ eax;
    POP32(esp, edi);
    MEM32(esi + 0x2D4) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C2500
 * Original: 0x001C2500 - 0x001C2533 (51 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2500: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001C250F; /* je: equal / zero */

loc_001C250C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C250F: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C252A; /* je: equal / zero */

loc_001C2515: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001C252A; /* jne: not equal / not zero */

loc_001C2525: ;
    PUSH32(esp, 0x001C252Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001C252A: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2540
 * Original: 0x001C2540 - 0x001C2573 (51 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2540: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2570; /* je: equal / zero */

loc_001C2547: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001C2570; /* jl: less (signed <) */

loc_001C254F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C2570; /* jge: greater or equal (signed >=) */

loc_001C2553: ;
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

loc_001C2570: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2580
 * Original: 0x001C2580 - 0x001C25B8 (56 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2580: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C25B5; /* je: equal / zero */

loc_001C2587: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001C25B5; /* jl: less (signed <) */

loc_001C258F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C25B5; /* jge: greater or equal (signed >=) */

loc_001C2593: ;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 8);
    eax = eax << 4;
    eax = eax + edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;

loc_001C25B5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C25C0
 * Original: 0x001C25C0 - 0x001C25F6 (54 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C25C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C25C0: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C25F3; /* je: equal / zero */

loc_001C25C7: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001C25F3; /* jl: less (signed <) */

loc_001C25CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C25F3; /* jge: greater or equal (signed >=) */

loc_001C25D3: ;
    ecx = MEM32(ecx + 0x10);
    eax = ecx + eax * 4;
    ecx = MEM32(esp + 8);
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 1));
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 3));
    MEM8(eax + 3) = LO8(ecx);

loc_001C25F3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2600
 * Original: 0x001C2600 - 0x001C2675 (117 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2600: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, eax);
    MEM32(ecx) = 0;
    PUSH32(esp, 0x001C2617u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_001C2617: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2624; /* jne: not equal / not zero */

loc_001C261F: ;
    edi = 1;

loc_001C2624: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001C262Cu); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001C262C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ebx = eax;
    edx = MEM32(ebx);
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x001C263Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C263D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x001C264Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C264D: ;
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM16(esi + 2) = LO16(edi);
    MEM16(esi) = LO16(edi);
    MEM16(esi + 4) = LO16(edi);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C266E; /* jle: less or equal (signed <=) */

loc_001C2662: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + eax * 2) = LO16(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C2662; /* jl: less (signed <) */

loc_001C266E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2680
 * Original: 0x001C2680 - 0x001C26F5 (117 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2680: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, eax);
    MEM32(ecx) = 0;
    PUSH32(esp, 0x001C2697u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_001C2697: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C26A4; /* jne: not equal / not zero */

loc_001C269F: ;
    edi = 1;

loc_001C26A4: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001C26ACu); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001C26AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ebx = eax;
    edx = MEM32(ebx);
    PUSH32(esp, 0x6C);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x001C26BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C26BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x001C26CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C26CD: ;
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM16(esi + 2) = LO16(edi);
    MEM16(esi) = LO16(edi);
    MEM16(esi + 4) = LO16(edi);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C26EE; /* jle: less or equal (signed <=) */

loc_001C26E2: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + eax * 2) = LO16(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C26E2; /* jl: less (signed <) */

loc_001C26EE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2700
 * Original: 0x001C2700 - 0x001C2775 (117 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2700: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, eax);
    MEM32(ecx) = 0;
    PUSH32(esp, 0x001C2717u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_001C2717: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2724; /* jne: not equal / not zero */

loc_001C271F: ;
    edi = 1;

loc_001C2724: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001C272Cu); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001C272C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ebx = eax;
    edx = MEM32(ebx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x001C273Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C273D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x001C274Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C274D: ;
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM16(esi + 2) = LO16(edi);
    MEM16(esi) = LO16(edi);
    MEM16(esi + 4) = LO16(edi);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C276E; /* jle: less or equal (signed <=) */

loc_001C2762: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + eax * 2) = LO16(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C2762; /* jl: less (signed <) */

loc_001C276E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2780
 * Original: 0x001C2780 - 0x001C27F5 (117 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2780: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, eax);
    MEM32(ecx) = 0;
    PUSH32(esp, 0x001C2797u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_001C2797: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C27A4; /* jne: not equal / not zero */

loc_001C279F: ;
    edi = 1;

loc_001C27A4: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001C27ACu); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001C27AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ebx = eax;
    edx = MEM32(ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x001C27BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C27BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x001C27CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C27CD: ;
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM16(esi + 2) = LO16(edi);
    MEM16(esi) = LO16(edi);
    MEM16(esi + 4) = LO16(edi);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C27EE; /* jle: less or equal (signed <=) */

loc_001C27E2: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + eax * 2) = LO16(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C27E2; /* jl: less (signed <) */

loc_001C27EE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2800
 * Original: 0x001C2800 - 0x001C2878 (120 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2800: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, eax);
    MEM32(ecx) = 0;
    PUSH32(esp, 0x001C2817u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_001C2817: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2824; /* jne: not equal / not zero */

loc_001C281F: ;
    edi = 1;

loc_001C2824: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001C282Cu); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001C282C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ebx = eax;
    edx = MEM32(ebx);
    PUSH32(esp, 0x8C);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x001C2840u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C2840: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x001C2850u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C2850: ;
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM16(esi + 2) = LO16(edi);
    MEM16(esi) = LO16(edi);
    MEM16(esi + 4) = LO16(edi);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C2871; /* jle: less or equal (signed <=) */

loc_001C2865: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + eax * 2) = LO16(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C2865; /* jl: less (signed <) */

loc_001C2871: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2880
 * Original: 0x001C2880 - 0x001C28F5 (117 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2880: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, eax);
    MEM32(ecx) = 0;
    PUSH32(esp, 0x001C2897u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_001C2897: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C28A4; /* jne: not equal / not zero */

loc_001C289F: ;
    edi = 1;

loc_001C28A4: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001C28ACu); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001C28AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ebx = eax;
    edx = MEM32(ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x001C28BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C28BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x001C28CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001C28CD: ;
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM16(esi + 2) = LO16(edi);
    MEM16(esi) = LO16(edi);
    MEM16(esi + 4) = LO16(edi);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001C28EE; /* jle: less or equal (signed <=) */

loc_001C28E2: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + eax * 2) = LO16(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C28E2; /* jl: less (signed <) */

loc_001C28EE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2900
 * Original: 0x001C2900 - 0x001C2947 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2900: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001C291F; /* je: equal / zero */

loc_001C290A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001C291F; /* jne: not equal / not zero */

loc_001C291A: ;
    PUSH32(esp, 0x001C291Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001C291F: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(eax);
    PUSH32(esp, 0x1DCD80);
    PUSH32(esp, 0x001C292Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C292F: ;
    ecx = MEM32(0x5BB2FC);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C293Eu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001C293E: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2950
 * Original: 0x001C2950 - 0x001C2985 (53 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2950: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001C2961; /* je: equal / zero */

loc_001C295E: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C2961: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C297C; /* je: equal / zero */

loc_001C2967: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001C297C; /* jne: not equal / not zero */

loc_001C2977: ;
    PUSH32(esp, 0x001C297Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001C297C: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2990
 * Original: 0x001C2990 - 0x001C29C3 (51 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2990: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001C299F; /* je: equal / zero */

loc_001C299C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C299F: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C29BB; /* je: equal / zero */

loc_001C29A6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001C29BB; /* jne: not equal / not zero */

loc_001C29B6: ;
    PUSH32(esp, 0x001C29BBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001C29BB: ;
    MEM32(esi + 0x14) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C29D0
 * Original: 0x001C29D0 - 0x001C29FC (44 bytes, 15 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001C29D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C29D0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0xC); /* fadd dword ptr [ecx + 0xc] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = fp_top() + MEMF(ecx); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C2A00
 * Original: 0x001C2A00 - 0x001C2A27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2A00: ;
    eax = MEM32(0x5BB144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2A14; /* je: equal / zero */

loc_001C2A09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2A26; /* jne: not equal / not zero */

loc_001C2A14: ;
    PUSH32(esp, 0x1DDDD0);
    PUSH32(esp, 0x001C2A1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2A1E: ;
    eax = MEM32(0x5BB144);
    esp = esp + 4;

loc_001C2A26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2A30
 * Original: 0x001C2A30 - 0x001C2A57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2A30: ;
    eax = MEM32(0x5BB170);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2A44; /* je: equal / zero */

loc_001C2A39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2A56; /* jne: not equal / not zero */

loc_001C2A44: ;
    PUSH32(esp, 0x1C2DE0);
    PUSH32(esp, 0x001C2A4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2A4E: ;
    eax = MEM32(0x5BB170);
    esp = esp + 4;

loc_001C2A56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2A60
 * Original: 0x001C2A60 - 0x001C2A87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2A60: ;
    eax = MEM32(0x5BB1D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2A74; /* je: equal / zero */

loc_001C2A69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2A86; /* jne: not equal / not zero */

loc_001C2A74: ;
    PUSH32(esp, 0x1DB2A0);
    PUSH32(esp, 0x001C2A7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2A7E: ;
    eax = MEM32(0x5BB1D0);
    esp = esp + 4;

loc_001C2A86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2A90
 * Original: 0x001C2A90 - 0x001C2AB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2A90: ;
    eax = MEM32(0x5BB1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2AA4; /* je: equal / zero */

loc_001C2A99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2AB6; /* jne: not equal / not zero */

loc_001C2AA4: ;
    PUSH32(esp, 0x1DF360);
    PUSH32(esp, 0x001C2AAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2AAE: ;
    eax = MEM32(0x5BB1DC);
    esp = esp + 4;

loc_001C2AB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2AC0
 * Original: 0x001C2AC0 - 0x001C2AE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2AC0: ;
    eax = MEM32(0x5BB1D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2AD4; /* je: equal / zero */

loc_001C2AC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2AE6; /* jne: not equal / not zero */

loc_001C2AD4: ;
    PUSH32(esp, 0x1DF9B0);
    PUSH32(esp, 0x001C2ADEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2ADE: ;
    eax = MEM32(0x5BB1D4);
    esp = esp + 4;

loc_001C2AE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2AF0
 * Original: 0x001C2AF0 - 0x001C2B17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2AF0: ;
    eax = MEM32(0x5BB1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2B04; /* je: equal / zero */

loc_001C2AF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2B16; /* jne: not equal / not zero */

loc_001C2B04: ;
    PUSH32(esp, 0x1E1A80);
    PUSH32(esp, 0x001C2B0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2B0E: ;
    eax = MEM32(0x5BB1F0);
    esp = esp + 4;

loc_001C2B16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2B20
 * Original: 0x001C2B20 - 0x001C2B47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2B20: ;
    eax = MEM32(0x5BB1EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2B34; /* je: equal / zero */

loc_001C2B29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2B46; /* jne: not equal / not zero */

loc_001C2B34: ;
    PUSH32(esp, 0x1DF3E0);
    PUSH32(esp, 0x001C2B3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2B3E: ;
    eax = MEM32(0x5BB1EC);
    esp = esp + 4;

loc_001C2B46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2B50
 * Original: 0x001C2B50 - 0x001C2B77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2B50: ;
    eax = MEM32(0x5BB304);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2B64; /* je: equal / zero */

loc_001C2B59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2B76; /* jne: not equal / not zero */

loc_001C2B64: ;
    PUSH32(esp, 0x1DDE60);
    PUSH32(esp, 0x001C2B6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2B6E: ;
    eax = MEM32(0x5BB304);
    esp = esp + 4;

loc_001C2B76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2B80
 * Original: 0x001C2B80 - 0x001C2BA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2B80: ;
    eax = MEM32(0x5BB2FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2B94; /* je: equal / zero */

loc_001C2B89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2BA6; /* jne: not equal / not zero */

loc_001C2B94: ;
    PUSH32(esp, 0x1DCD80);
    PUSH32(esp, 0x001C2B9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2B9E: ;
    eax = MEM32(0x5BB2FC);
    esp = esp + 4;

loc_001C2BA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2BB0
 * Original: 0x001C2BB0 - 0x001C2BD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2BB0: ;
    eax = MEM32(0x5BB308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2BC4; /* je: equal / zero */

loc_001C2BB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2BD6; /* jne: not equal / not zero */

loc_001C2BC4: ;
    PUSH32(esp, 0x1DDEA0);
    PUSH32(esp, 0x001C2BCEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2BCE: ;
    eax = MEM32(0x5BB308);
    esp = esp + 4;

loc_001C2BD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2BE0
 * Original: 0x001C2BE0 - 0x001C2C07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2BE0: ;
    eax = MEM32(0x5BB310);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2BF4; /* je: equal / zero */

loc_001C2BE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2C06; /* jne: not equal / not zero */

loc_001C2BF4: ;
    PUSH32(esp, 0x1DDEE0);
    PUSH32(esp, 0x001C2BFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2BFE: ;
    eax = MEM32(0x5BB310);
    esp = esp + 4;

loc_001C2C06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2C10
 * Original: 0x001C2C10 - 0x001C2C37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2C10: ;
    eax = MEM32(0x5BB324);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2C24; /* je: equal / zero */

loc_001C2C19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2C36; /* jne: not equal / not zero */

loc_001C2C24: ;
    PUSH32(esp, 0x1DF7E0);
    PUSH32(esp, 0x001C2C2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2C2E: ;
    eax = MEM32(0x5BB324);
    esp = esp + 4;

loc_001C2C36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2C40
 * Original: 0x001C2C40 - 0x001C2C67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2C40: ;
    eax = MEM32(0x5BB328);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2C54; /* je: equal / zero */

loc_001C2C49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2C66; /* jne: not equal / not zero */

loc_001C2C54: ;
    PUSH32(esp, 0x1DDF20);
    PUSH32(esp, 0x001C2C5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2C5E: ;
    eax = MEM32(0x5BB328);
    esp = esp + 4;

loc_001C2C66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2C70
 * Original: 0x001C2C70 - 0x001C2C9C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2C70(void)
{

loc_001C2C70: ;
    esp = esp - 0xC;
    ecx = esp;
    PUSH32(esp, 0x001C2C7Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001C2C7B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E79E0;
    MEM32(esp + 8) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2CA0
 * Original: 0x001C2CA0 - 0x001C2CA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2CA0(void)
{

loc_001C2CA0: ;
    eax = MEM32(0x5BB14C);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2CB0
 * Original: 0x001C2CB0 - 0x001C2CD8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2CCF; /* je: equal / zero */

loc_001C2CBA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001C2CCF; /* jne: not equal / not zero */

loc_001C2CCA: ;
    PUSH32(esp, 0x001C2CCFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001C2CCF: ;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2CE0
 * Original: 0x001C2CE0 - 0x001C2CE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2CE0(void)
{

loc_001C2CE0: ;
    eax = MEM32(0x5BB154);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2CF0
 * Original: 0x001C2CF0 - 0x001C2D36 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2CF0(void)
{

loc_001C2CF0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x001C2CFDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001C2CFD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E7A60;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x001C2D2Fu); RECOMP_ABI_CALL(0x001B8930u, sub_001B8930); /* call 0x001B8930 */

loc_001C2D2F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2D40
 * Original: 0x001C2D40 - 0x001C2D6E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2D40(void)
{

loc_001C2D40: ;
    esp = esp - 0x24;
    ecx = esp;
    PUSH32(esp, 0x001C2D4Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001C2D4B: ;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E7AC0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2D70
 * Original: 0x001C2D70 - 0x001C2D9E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2D70(void)
{

loc_001C2D70: ;
    esp = esp - 0x24;
    ecx = esp;
    PUSH32(esp, 0x001C2D7Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001C2D7B: ;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E7B28;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2DA0
 * Original: 0x001C2DA0 - 0x001C2DDC (60 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2DA0(void)
{

loc_001C2DA0: ;
    PUSH32(esp, 0x001C2DA5u); RECOMP_ABI_CALL(0x001DF130u, sub_001DF130); /* call 0x001DF130 */

loc_001C2DA5: ;
    PUSH32(esp, 0x468AF8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1AAA40);
    PUSH32(esp, 0x1C2D70);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x3E8B78);
    PUSH32(esp, 0x1B7930);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BB16C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C2DD8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001C2DD8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2DE0
 * Original: 0x001C2DE0 - 0x001C2E1C (60 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2DE0(void)
{

loc_001C2DE0: ;
    PUSH32(esp, 0x001C2DE5u); RECOMP_ABI_CALL(0x001DF130u, sub_001DF130); /* call 0x001DF130 */

loc_001C2DE5: ;
    PUSH32(esp, 0x468B00);
    PUSH32(esp, 0x1B89F0);
    PUSH32(esp, 0x1AAAD0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x3E8B88);
    PUSH32(esp, 0x1C2A30);
    PUSH32(esp, 0x1AA4A0);
    PUSH32(esp, 0x1DEBC0);
    PUSH32(esp, 0x5BB170);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001C2E18u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001C2E18: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2E20
 * Original: 0x001C2E20 - 0x001C2E2C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2E20(void)
{

loc_001C2E20: ;
    PUSH32(esp, 0x1B8A60);
    PUSH32(esp, 0x001C2E2Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001C2E2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2E30
 * Original: 0x001C2E30 - 0x001C2E54 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2E30(void)
{

loc_001C2E30: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001C2E3Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001C2E3B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E7BA0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
