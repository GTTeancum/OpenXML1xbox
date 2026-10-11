/**
 * X-Men Legends - Recompiled code chunk 36
 * Functions: 250 (0x0019CB30 - 0x001A4890)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0019CB30
 * Original: 0x0019CB30 - 0x0019CB77 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019CB30: ;
    SET_LO8(eax, MEM8(0x5BA77C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019CB40; /* jne: not equal / not zero */

loc_0019CB39: ;
    MEM8(0x5BA77C) = 1;

loc_0019CB40: ;
    PUSH32(esp, 0x461100);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19BA30);
    PUSH32(esp, 0x19C450);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x3E17F4);
    PUSH32(esp, 0x144FD0);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BA764);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019CB73u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0019CB73: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019CB80
 * Original: 0x0019CB80 - 0x0019CB9E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CB80(void)
{

loc_0019CB80: ;
    PUSH32(esp, 0x19C8A0);
    PUSH32(esp, 0x0019CB8Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019CB8A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA750);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019CB9Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0019CB9D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019CB9E
 * Original: 0x0019CB9E - 0x0019CC92 (244 bytes, 91 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019CB9E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019CB9E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x0019CBB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CBB1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 3);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    { uint32_t _icall_target = MEM32(0x3C6BA8); PUSH32(esp, 0x0019CBE3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CBE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019CC05; /* jge: greater or equal (signed >=) */

loc_0019CBE7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CBEDu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019CBED: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CBF2u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0019CBF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019CBFE; /* jne: not equal / not zero */

loc_0019CBF7: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CBFEu); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019CBFE: ;
    eax = 0; /* xor self */
    goto loc_0019CC8E;

loc_0019CC05: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BA4); PUSH32(esp, 0x0019CC1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CC1B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x0019CC26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CC26: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019CC34; /* jge: greater or equal (signed >=) */

loc_0019CC2A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CC30u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019CC30: ;
    eax = 0; /* xor self */
    goto loc_0019CC8D;

loc_0019CC34: ;
    esi = MEM32(ebp + -36);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + -32));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, MEM32(ebp + -44));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CC4Cu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0019CC4C: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -48));
    ebx = eax;
    PUSH32(esp, MEM32(ebp + -52));
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CC5Eu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0019CC5E: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019CC6D; /* je: equal / zero */

loc_0019CC65: ;
    esi = MEM32(ebp + -4);
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = esi;

loc_0019CC6D: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019CC79; /* je: equal / zero */

loc_0019CC74: ;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;

loc_0019CC79: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019CC88; /* je: equal / zero */

loc_0019CC80: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;

loc_0019CC88: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);

loc_0019CC8D: ;
    POP32(esp, esi);

loc_0019CC8E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019CC92
 * Original: 0x0019CC92 - 0x0019CEDD (587 bytes, 189 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019CC92(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0019CC92: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x22C));
    esp = esp - 0x22C;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 3);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0100000u);
    eax = ebp + -8;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ebp + -44) = esi;
    MEM32(ebp + -36) = 0x40;
    MEM32(ebp + -40) = 0x3E191C;
    { uint32_t _icall_target = MEM32(0x3C6BA8); PUSH32(esp, 0x0019CCD5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CCD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0019CED5; /* jl: less (signed <) */

loc_0019CCE0: ;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -556;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + -24) = 0x800;
    MEM32(ebp + -20) = esi;
    { uint32_t _icall_target = MEM32(0x3C6BB8); PUSH32(esp, 0x0019CD0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CD0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0019CECC; /* jl: less (signed <) */

loc_0019CD15: ;
    eax = MEM32(0x3C6BB4);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    esi = 0x97315286u;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -556)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -556), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    ebx = 0xAA550000u;
    if (CMP_NE(_fa, _fb)) goto loc_0019CD3F; /* jne: not equal / not zero */

loc_0019CD31: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019CD3F; /* jne: not equal / not zero */

loc_0019CD36: ;
    _fa = (uint32_t)(MEM32(ebp + -552)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -552), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019CD61; /* je: equal / zero */

loc_0019CD3F: ;
    ecx = 0x80;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = ebp + -556;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + -556) = esi;
    MEM32(ebp + -552) = 2;
    MEM32(ebp + -52) = ebx;

loc_0019CD61: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;
    eax = MEM32(0x3C6BB4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x29 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0019CD79; /* jbe: below or equal (unsigned <=) */

loc_0019CD76: ;
    PUSH32(esp, 0x29);
    POP32(esp, ecx);

loc_0019CD79: ;
    edi = ecx + -1;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -4) = edi;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0019CDC1; /* jbe: below or equal (unsigned <=) */

loc_0019CD87: ;
    edi = ebp + -548;

loc_0019CD8D: ;
    ebx = MEM32(ebp + -16);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019CD9A; /* jne: not equal / not zero */

loc_0019CD94: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019CDA4; /* jne: not equal / not zero */

loc_0019CD9A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0019CD8D; /* jb: below (unsigned <) */

loc_0019CDA2: ;
    goto loc_0019CDBE;

loc_0019CDA4: ;
    edx = eax + eax * 2;
    esi = MEM32(ebp + edx * 4 + -544);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(3)) >> 32) & 1);
    esi = esi + 3;
    edx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    if ((esi != 0)) goto loc_0019CE11; /* jne: not equal / not zero */

loc_0019CDBE: ;
    edi = MEM32(ebp + -4);

loc_0019CDC1: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0019CE02; /* jbe: below or equal (unsigned <=) */

loc_0019CDC9: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + -544;

loc_0019CDD3: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019CDE0; /* je: equal / zero */

loc_0019CDD9: ;
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019CDEB; /* je: equal / zero */

loc_0019CDE0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0019CDD3; /* jb: below (unsigned <) */

loc_0019CDEB: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019CDF6; /* jne: not equal / not zero */

loc_0019CDF0: ;
    esi = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(3)) >> 32) & 1);
    esi = esi + 3;

loc_0019CDF6: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0019CDC9; /* jb: below (unsigned <) */

loc_0019CDFE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0019CE14; /* jne: not equal / not zero */

loc_0019CE02: ;
    eax = edi + edi * 2;
    esi = MEM32(ebp + eax * 4 + -544);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(3)) >> 32) & 1);
    esi = esi + 3;
    goto loc_0019CE14;

loc_0019CE11: ;
    edi = MEM32(ebp + -4);

loc_0019CE14: ;
    eax = ecx + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0019CE1E; /* jb: below (unsigned <) */

loc_0019CE1B: ;
    esi = ecx + 2;

loc_0019CE1E: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = esi;
    eax = MEM32(ebp + 8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x461120) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0019CE4B; /* jae: above or equal (unsigned >=) */

loc_0019CE35: ;
    eax = edx + edx * 2;
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    PUSH32(esp, eax);
    eax = ebp + -548;
    PUSH32(esp, eax);
    eax = ebp + -536;
    goto loc_0019CE64;

loc_0019CE4B: ;
    if (CMP_BE(_fa, _fb)) goto loc_0019CE72; /* jbe: below or equal (unsigned <=) */

loc_0019CE4D: ;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    ecx = edi + edi * 2;
    eax = edx + edx * 2;
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    eax = ebp + eax * 4 + -548;
    PUSH32(esp, ecx);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);

loc_0019CE64: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CE6Au); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_0019CE6A: ;
    eax = MEM32(0x461120);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;

loc_0019CE72: ;
    ecx = MEM32(ebp + -16);
    eax = eax + eax * 2;
    MEM32(ebp + eax * 4 + -548) = ecx;
    eax = MEM32(0x461120);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFFFDu)) >> 32) & 1);
    esi = esi + 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = eax + eax * 2;
    MEM32(ebp + eax * 4 + -544) = esi;
    eax = MEM32(0x461120);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + eax * 2;
    MEM32(ebp + eax * 4 + -540) = edx;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -556;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x3C6BB0); PUSH32(esp, 0x0019CECAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CECA: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0019CECC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x0019CED5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CED5: ;
    eax = MEM32(ebp + -12);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019CEDD
 * Original: 0x0019CEDD - 0x0019CFE2 (261 bytes, 97 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019CEDD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019CEDD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CEF9u); RECOMP_ABI_CALL(0x0019CC92u, sub_0019CC92); /* call 0x0019CC92 */

loc_0019CEF9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019CFD1; /* jl: less (signed <) */

loc_0019CF03: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019CF10; /* jne: not equal / not zero */

loc_0019CF08: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0019CF17; /* je: equal / zero */

loc_0019CF10: ;
    MEM32(ebp + 8) = 1;

loc_0019CF17: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(0x10124);
    PUSH32(esp, 0x3E18FC);
    eax = ebp + -276;
    ecx = ecx >> 0x1E;
    PUSH32(esp, 0x104);
    esi = 0x4000;
    PUSH32(esp, eax);
    esi = esi << LO8(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CF40u); RECOMP_ABI_CALL(0x003433E9u, sub_003433E9); /* call 0x003433E9 */

loc_0019CF40: ;
    edi = MEM32(0x3C6BAC);
    esp = esp + 0x10;
    eax = ebp + -276;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0019CF56u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CF56: ;
    eax = ebp + -276;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0019CF63u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CF63: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) - 1;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019CF7C; /* je: equal / zero */

loc_0019CF6C: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CF76u); RECOMP_ABI_CALL(0x001A2562u, sub_001A2562); /* call 0x001A2562 */

loc_0019CF76: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019CFD9; /* je: equal / zero */

loc_0019CF7C: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CF86u); RECOMP_ABI_CALL(0x001A1E95u, sub_001A1E95); /* call 0x001A1E95 */

loc_0019CF86: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019CFB0; /* jge: greater or equal (signed >=) */

loc_0019CF8C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019CFAC; /* jne: not equal / not zero */

loc_0019CF92: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CF9Cu); RECOMP_ABI_CALL(0x001A2562u, sub_001A2562); /* call 0x001A2562 */

loc_0019CF9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019CFAC; /* je: equal / zero */

loc_0019CFA0: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CFAAu); RECOMP_ABI_CALL(0x001A1E95u, sub_001A1E95); /* call 0x001A1E95 */

loc_0019CFAA: ;
    ebx = eax;

loc_0019CFAC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019CFC1; /* jl: less (signed <) */

loc_0019CFB0: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E18EC);
    { uint32_t _icall_target = MEM32(0x3C6BBC); PUSH32(esp, 0x0019CFBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CFBF: ;
    ebx = eax;

loc_0019CFC1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas & _fbs, 0)) ? 1 : 0); /* setge */
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019CFD9; /* jne: not equal / not zero */

loc_0019CFCE: ;
    PUSH32(esp, ebx);
    goto loc_0019CFD4;

loc_0019CFD1: ;
    edi = 0; /* xor self */
    PUSH32(esp, eax);

loc_0019CFD4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CFD9u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019CFD9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019CFE2
 * Original: 0x0019CFE2 - 0x0019D081 (159 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019CFE2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019CFE2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x0019CFF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019CFF5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 3);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    { uint32_t _icall_target = MEM32(0x3C6BA8); PUSH32(esp, 0x0019D027u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019D027: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019D046; /* jge: greater or equal (signed >=) */

loc_0019D02B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D031u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019D031: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D036u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0019D036: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019D042; /* jne: not equal / not zero */

loc_0019D03B: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D042u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019D042: ;
    eax = 0; /* xor self */
    goto loc_0019D07D;

loc_0019D046: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BA4); PUSH32(esp, 0x0019D05Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019D05C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x0019D067u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019D067: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019D075; /* jge: greater or equal (signed >=) */

loc_0019D06B: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D071u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019D071: ;
    eax = 0; /* xor self */
    goto loc_0019D07C;

loc_0019D075: ;
    eax = MEM32(ebp + -36);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));

loc_0019D07C: ;
    POP32(esp, esi);

loc_0019D07D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019D081
 * Original: 0x0019D081 - 0x0019D095 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019D081(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D081: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019D08F; /* jg: greater (signed >) */

loc_0019D08A: ;
    eax = eax + 0x30;
    goto loc_0019D092;

loc_0019D08F: ;
    eax = eax + 0x37;

loc_0019D092: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019D095
 * Original: 0x0019D095 - 0x0019D127 (146 bytes, 61 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019D095(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0019D095: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0019D0F2; /* je: equal / zero */

loc_0019D0B2: ;
    edi = eax;

loc_0019D0B4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10000);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D0C6u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0019D0C6: ;
    ecx = eax;
    eax = ZX16(LO16(edi));
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFF);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    PUSH32(esp, 0xFFFFFFC5u);
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D0E0u); RECOMP_ABI_CALL(0x00343460u, sub_00343460); /* call 0x00343460 */

loc_0019D0E0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edi), LO16(edi) (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019D0B4; /* jne: not equal / not zero */

loc_0019D0F2: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0xB);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */

loc_0019D0FA: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D107u); RECOMP_ABI_CALL(0x00343440u, sub_00343440); /* call 0x00343440 */

loc_0019D107: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D110u); RECOMP_ABI_CALL(0x0019D081u, sub_0019D081); /* call 0x0019D081 */

loc_0019D110: ;
    MEM8(esi + edi) = LO8(eax);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0019D0FA; /* jle: less or equal (signed <=) */

loc_0019D11C: ;
    MEM8(edi + 0xC) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019D127
 * Original: 0x0019D127 - 0x0019D16F (72 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019D127(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D127: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019D13E; /* je: equal / zero */

loc_0019D133: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D13Eu); RECOMP_ABI_CALL(0x0019E010u, sub_0019E010); /* call 0x0019E010 */

loc_0019D13E: ;
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    eax = ebp + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D151u); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_0019D151: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019D15B; /* je: equal / zero */

loc_0019D155: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019D167; /* je: equal / zero */

loc_0019D15B: ;
    _fa = (uint32_t)(MEM16(ebp + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0xFEFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xE), 0xFEFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019D167; /* je: equal / zero */

loc_0019D163: ;
    eax = 0; /* xor self */
    goto loc_0019D16A;

loc_0019D167: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019D16A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019D16F
 * Original: 0x0019D16F - 0x0019D2F2 (387 bytes, 135 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019D16F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D16F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x130;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = 0; /* xor self */
    MEM32(ebp + -16) = esi;
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D198u); RECOMP_ABI_CALL(0x003426A9u, sub_003426A9); /* call 0x003426A9 */

loc_0019D198: ;
    POP32(esp, ecx);
    MEM32(ebp + -20) = eax;
    MEM16(ebp + -24) = LO16(esi);

loc_0019D1A0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019D1CC; /* jne: not equal / not zero */

loc_0019D1A7: ;
    PUSH32(esp, ebx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D1BBu); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_0019D1BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019D2E8; /* je: equal / zero */

loc_0019D1C3: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019D2E8; /* je: equal / zero */

loc_0019D1CC: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    ecx = ebp + -304;
    eax = edi;
    eax = eax - ecx;
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx + eax * 2;
    eax = ebp + -304;
    if (TEST_Z(_fa, _fb)) goto loc_0019D247; /* je: equal / zero */

loc_0019D1EC: ;
    PUSH32(esp, 0x3E1A24);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D1F7u); RECOMP_ABI_CALL(0x00343512u, sub_00343512); /* call 0x00343512 */

loc_0019D1F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    if (TEST_Z(_fa, _fb)) goto loc_0019D1A0; /* je: equal / zero */

loc_0019D20A: ;
    ecx = edi;
    eax = eax - ecx;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019D240; /* jae: above or equal (unsigned >=) */

loc_0019D215: ;
    ebx = ebx - eax;
    esi = ebx;
    eax = ebp + eax + -304;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D22Au); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_0019D22A: ;
    edi = ebp + esi + -304;
    esi = esi >> 1;
    eax = 0x8C;
    esp = esp + 0xC;
    eax = eax - esi;
    MEM32(ebp + -4) = eax;

loc_0019D240: ;
    esi = 0; /* xor self */
    goto loc_0019D1A0;

loc_0019D247: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D250u); RECOMP_ABI_CALL(0x00343512u, sub_00343512); /* call 0x00343512 */

loc_0019D250: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0019D28F; /* je: equal / zero */

loc_0019D256: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + ecx;
    _fa = (uint32_t)(MEM16(ecx + eax)) & 0xFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + eax), 0x3D (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019D28F; /* jne: not equal / not zero */

loc_0019D262: ;
    edi = eax + ecx + 2;
    PUSH32(esp, 0x3E1A24);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D274u); RECOMP_ABI_CALL(0x00343512u, sub_00343512); /* call 0x00343512 */

loc_0019D274: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0019D29C; /* jne: not equal / not zero */

loc_0019D27C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    goto loc_0019D1A0;

loc_0019D28F: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;
    MEM32(ebp + -8) = eax;
    goto loc_0019D1A0;

loc_0019D29C: ;
    eax = esi;
    eax = eax - edi;
    edi = MEM32(ebp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019D2AC; /* jl: less (signed <) */

loc_0019D2AA: ;
    edi = eax;

loc_0019D2AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D2B8u); RECOMP_ABI_CALL(0x003434D5u, sub_003434D5); /* call 0x003434D5 */

loc_0019D2B8: ;
    eax = MEM32(ebp + 0x10);
    MEM16(eax + edi * 2) = MEM16(eax + edi * 2) & 0;
    eax = ebp + -304;
    esi = esi - eax;
    esi = esi + 4;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019D2E1; /* jae: above or equal (unsigned >=) */

loc_0019D2D2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    esi = esi - ebx;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D2E1u); RECOMP_ABI_CALL(0x0019E010u, sub_0019E010); /* call 0x0019E010 */

loc_0019D2E1: ;
    MEM32(ebp + -16) = 1;

loc_0019D2E8: ;
    eax = MEM32(ebp + -16);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019D2F2
 * Original: 0x0019D2F2 - 0x0019D3F3 (257 bytes, 90 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019D2F2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D2F2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x10 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D30D; /* jne: not equal / not zero */

loc_0019D306: ;
    eax = 0; /* xor self */
    goto loc_0019D3EE;

loc_0019D30D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x2C;
    eax = edi;
    ecx = eax + 1;

loc_0019D317: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D317; /* jne: not equal / not zero */

loc_0019D31E: ;
    eax = eax - ecx;
    ecx = MEM32(ebp + 0xC);
    edx = esi + 0x140;
    edx = edx - ecx;

loc_0019D32B: ;
    SET_LO8(ebx, MEM8(ecx));
    MEM8(edx + ecx) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D32B; /* jne: not equal / not zero */

loc_0019D335: ;
    edx = MEM32(ebp + 0x10);
    ecx = esi + edx + 0x140;
    ecx = ecx - edi;

loc_0019D341: ;
    SET_LO8(ebx, MEM8(edi));
    MEM8(ecx + edi) = LO8(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D341; /* jne: not equal / not zero */

loc_0019D34B: ;
    edi = eax + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x103 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019D368; /* jae: above or equal (unsigned >=) */

loc_0019D356: ;
    ecx = eax + esi;
    ecx = ecx + edx;
    MEM8(ecx + 0x140) = 0x5C;
    MEM8(ecx + 0x141) = LO8(ebx);

loc_0019D368: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019D3E9; /* jge: greater or equal (signed >=) */

loc_0019D370: ;
    eax = eax + esi;
    ebx = eax + edx;
    ecx = 0x3E196C;
    eax = ebx + 0x140;
    eax = eax - ecx;

loc_0019D382: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D382; /* jne: not equal / not zero */

loc_0019D38C: ;
    PUSH32(esp, 0);
    edi = 0x80;
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    eax = esi + 0x140;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D3ABu); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_0019D3AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019D3E2; /* je: equal / zero */

loc_0019D3B3: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D3BBu); RECOMP_ABI_CALL(0x0019D127u, sub_0019D127); /* call 0x0019D127 */

loc_0019D3BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019D3DA; /* je: equal / zero */

loc_0019D3C2: ;
    PUSH32(esp, edi);
    esi = esi + 0x244;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3E19D4);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D3D7u); RECOMP_ABI_CALL(0x0019D16Fu, sub_0019D16F); /* call 0x0019D16F */

loc_0019D3D7: ;
    MEM32(ebp + -4) = eax;

loc_0019D3DA: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D3E2u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0019D3E2: ;
    MEM8(ebx + 0x141) = 0;

loc_0019D3E9: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0019D3EE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019D3F3
 * Original: 0x0019D3F3 - 0x0019D473 (128 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019D3F3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D3F3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x100;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80100000u);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D414u); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_0019D414: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019D464; /* je: equal / zero */

loc_0019D41B: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D423u); RECOMP_ABI_CALL(0x0019D127u, sub_0019D127); /* call 0x0019D127 */

loc_0019D423: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019D457; /* je: equal / zero */

loc_0019D427: ;
    PUSH32(esp, 0x80);
    eax = ebp + -256;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E19D4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D43Eu); RECOMP_ABI_CALL(0x0019D16Fu, sub_0019D16F); /* call 0x0019D16F */

loc_0019D43E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019D457; /* je: equal / zero */

loc_0019D442: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -256;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D451u); RECOMP_ABI_CALL(0x00343570u, sub_00343570); /* call 0x00343570 */

loc_0019D451: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0019D45C; /* je: equal / zero */

loc_0019D457: ;
    esi = 0x491;

loc_0019D45C: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D462u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0019D462: ;
    goto loc_0019D46B;

loc_0019D464: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D469u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0019D469: ;
    esi = eax;

loc_0019D46B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019D473
 * Original: 0x0019D473 - 0x0019D4CF (92 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019D473(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D473: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0xC0000000u);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D494u); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_0019D494: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019D4CA; /* je: equal / zero */

loc_0019D49B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -48;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -32;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BD8); PUSH32(esp, 0x0019D4B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019D4B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x28);
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6BD4); PUSH32(esp, 0x0019D4C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019D4C3: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D4C9u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0019D4C9: ;
    POP32(esp, edi);

loc_0019D4CA: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019D4CF
 * Original: 0x0019D4CF - 0x0019D732 (611 bytes, 204 insns)
 * Category: game_io
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019D4CF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D4CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x258;
    eax = MEM32(ebp + 8);
    edx = ebp + -296;
    edx = edx - eax;

loc_0019D4E3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D4E3; /* jne: not equal / not zero */

loc_0019D4ED: ;
    eax = ebp + -296;
    edx = eax + 1;

loc_0019D4F6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D4F6; /* jne: not equal / not zero */

loc_0019D4FD: ;
    eax = eax - edx;
    ecx = 0xF7;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    eax = ebp + eax + -296;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D517u); RECOMP_ABI_CALL(0x0019D095u, sub_0019D095); /* call 0x0019D095 */

loc_0019D517: ;
    eax = ebp + -296;
    ecx = eax + 1;

loc_0019D520: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D520; /* jne: not equal / not zero */

loc_0019D527: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax - ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 3 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0019D56A; /* jne: not equal / not zero */

loc_0019D534: ;
    esi = ebp + edi + -296;
    eax = 0x3E196C;
    edx = esi;
    edx = edx - eax;

loc_0019D544: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D544; /* jne: not equal / not zero */

loc_0019D54E: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -296;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D55Du); RECOMP_ABI_CALL(0x0019D3F3u, sub_0019D3F3); /* call 0x0019D3F3 */

loc_0019D55D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0019D6E2; /* je: equal / zero */

loc_0019D568: ;
    goto loc_0019D5DF;

loc_0019D56A: ;
    PUSH32(esp, 0);
    eax = ebp + -296;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D578u); RECOMP_ABI_CALL(0x001A2886u, sub_001A2886); /* call 0x001A2886 */

loc_0019D578: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D5EB; /* jne: not equal / not zero */

loc_0019D57C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D581u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0019D581: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB7 (32-bit) */
    MEM32(ebp + 0x14) = eax;
    ebx = 0x491;
    if (CMP_NE(_fa, _fb)) goto loc_0019D5CE; /* jne: not equal / not zero */

loc_0019D590: ;
    esi = ebp + edi + -296;
    eax = 0x3E196C;
    edx = esi;
    edx = edx - eax;

loc_0019D5A0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D5A0; /* jne: not equal / not zero */

loc_0019D5AA: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -296;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D5B9u); RECOMP_ABI_CALL(0x0019D3F3u, sub_0019D3F3); /* call 0x0019D3F3 */

loc_0019D5B9: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM8(esi) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0019D5E6; /* jne: not equal / not zero */

loc_0019D5C2: ;
    eax = ebp + -296;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D5CEu); RECOMP_ABI_CALL(0x0019D473u, sub_0019D473); /* call 0x0019D473 */

loc_0019D5CE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019D5DC; /* je: equal / zero */

loc_0019D5D4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019D6E2; /* je: equal / zero */

loc_0019D5DC: ;
    eax = MEM32(ebp + 0x14);

loc_0019D5DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

loc_0019D5E6: ;
    PUSH32(esp, 0x52);
    POP32(esp, eax);
    goto loc_0019D5DF;

loc_0019D5EB: ;
    esi = ebp + edi + -296;
    eax = 0x3E196C;
    edx = esi;
    edx = edx - eax;

loc_0019D5FB: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D5FB; /* jne: not equal / not zero */

loc_0019D605: ;
    eax = ebp + -296;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x0019D616u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019D616: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -28;
    MEM32(ebp + -16) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, 0xC0100000u);
    eax = ebp + 8;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0xFFFFFFFDu;
    MEM32(ebp + -12) = 0x40;
    MEM32(ebp + -8) = ebx;
    { uint32_t _icall_target = MEM32(0x3C6BDC); PUSH32(esp, 0x0019D657u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019D657: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi) = 0;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019D66C; /* jge: greater or equal (signed >=) */

loc_0019D65E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BCC); PUSH32(esp, 0x0019D665u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019D665: ;
    esi = eax;
    goto loc_0019D71F;

loc_0019D66C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), LO8(ebx) (8-bit) */
    eax = 0x3E1A6C;
    if (TEST_NZ(_fa, _fb)) goto loc_0019D67B; /* jne: not equal / not zero */

loc_0019D676: ;
    eax = 0x3E1A4C;

loc_0019D67B: ;
    PUSH32(esp, 0x3E1A2C);
    PUSH32(esp, 0x3E1A24);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x3E19D4);
    PUSH32(esp, 0xFEFF);
    PUSH32(esp, eax);
    eax = ebp + -600;
    PUSH32(esp, 0x98);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D6A6u); RECOMP_ABI_CALL(0x003435A2u, sub_003435A2); /* call 0x003435A2 */

loc_0019D6A6: ;
    eax = ebp + -600;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D6B2u); RECOMP_ABI_CALL(0x003426A9u, sub_003426A9); /* call 0x003426A9 */

loc_0019D6B2: ;
    esi = eax;
    esp = esp + 0x28;
    esi = esi << 1;
    if ((esi == 0)) goto loc_0019D6DA; /* je: equal / zero */

loc_0019D6BB: ;
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -600;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D6D1u); RECOMP_ABI_CALL(0x0019DEB6u, sub_0019DEB6); /* call 0x0019DEB6 */

loc_0019D6D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019D710; /* je: equal / zero */

loc_0019D6D5: ;
    esi = esi - MEM32(ebp + 0xC);
    if ((esi != 0)) goto loc_0019D6BB; /* jne: not equal / not zero */

loc_0019D6DA: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D6E2u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0019D6E2: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019D709; /* je: equal / zero */

loc_0019D6E9: ;
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D6FAu); RECOMP_ABI_CALL(0x001A29C5u, sub_001A29C5); /* call 0x001A29C5 */

loc_0019D6FA: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019D709; /* jae: above or equal (unsigned >=) */

loc_0019D6FF: ;
    eax = edi + esi;
    MEM8(eax) = 0x5C;
    MEM8(eax + 1) = 0;

loc_0019D709: ;
    eax = 0; /* xor self */
    goto loc_0019D5DF;

loc_0019D710: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D715u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0019D715: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D71Fu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0019D71F: ;
    eax = ebp + -296;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D72Bu); RECOMP_ABI_CALL(0x001A28F2u, sub_001A28F2); /* call 0x001A28F2 */

loc_0019D72B: ;
    eax = esi;
    goto loc_0019D5DF;

}

/**
 * sub_0019D732
 * Original: 0x0019D732 - 0x0019D802 (208 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019D732(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D732: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x144;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x3E1A94;
    edi = ebp + -324;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebp + -324;
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edx = eax + 1;

loc_0019D753: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D753; /* jne: not equal / not zero */

loc_0019D75A: ;
    ecx = MEM32(ebp + 8);
    eax = eax - edx;
    PUSH32(esp, ebx);
    ebx = ebp + eax + -324;
    edx = ebx;
    edx = edx - ecx;

loc_0019D76B: ;
    SET_LO8(eax, MEM8(ecx));
    MEM8(edx + ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D76B; /* jne: not equal / not zero */

loc_0019D775: ;
    eax = ebp + -324;
    edx = eax + 1;

loc_0019D77E: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D77E; /* jne: not equal / not zero */

loc_0019D785: ;
    eax = eax - edx;
    ecx = 0x137;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    eax = ebp + eax + -324;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D79Fu); RECOMP_ABI_CALL(0x0019D095u, sub_0019D095); /* call 0x0019D095 */

loc_0019D79F: ;
    eax = ebp + -324;
    ecx = eax + 1;

loc_0019D7A8: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D7A8; /* jne: not equal / not zero */

loc_0019D7AF: ;
    eax = eax - ecx;
    edi = eax;
    esi = ebp + edi + -324;
    eax = 0x3E196C;
    edx = esi;
    edx = edx - eax;

loc_0019D7C3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D7C3; /* jne: not equal / not zero */

loc_0019D7CD: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D7D6u); RECOMP_ABI_CALL(0x0019D3F3u, sub_0019D3F3); /* call 0x0019D3F3 */

loc_0019D7D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi) = 0;
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0019D7FC; /* jne: not equal / not zero */

loc_0019D7DE: ;
    PUSH32(esp, eax);
    MEM8(ebp + edi + -323) = LO8(eax);
    eax = ebp + -324;
    PUSH32(esp, eax);
    MEM8(esi) = 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D7F5u); RECOMP_ABI_CALL(0x001A2BA7u, sub_001A2BA7); /* call 0x001A2BA7 */

loc_0019D7F5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BCC); PUSH32(esp, 0x0019D7FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019D7FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019D802
 * Original: 0x0019D802 - 0x0019D90C (266 bytes, 98 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019D802(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D802: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x104;
    eax = MEM32(ebp + 8);
    edx = ebp + -260;
    edx = edx - eax;

loc_0019D816: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D816; /* jne: not equal / not zero */

loc_0019D820: ;
    eax = ebp + -260;
    edx = eax + 1;

loc_0019D829: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D829; /* jne: not equal / not zero */

loc_0019D830: ;
    eax = eax - edx;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    eax = 0x3E19F4;
    ecx = ebp + ebx + -260;
    PUSH32(esp, edi);
    ecx = ecx - eax;

loc_0019D845: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D845; /* jne: not equal / not zero */

loc_0019D84F: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D85Fu); RECOMP_ABI_CALL(0x001A2C82u, sub_001A2C82); /* call 0x001A2C82 */

loc_0019D85F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019D903; /* je: equal / zero */

loc_0019D86A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D874u); RECOMP_ABI_CALL(0x0019D2F2u, sub_0019D2F2); /* call 0x0019D2F2 */

loc_0019D874: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D8B8; /* jne: not equal / not zero */

loc_0019D878: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D87Fu); RECOMP_ABI_CALL(0x001A2D8Fu, sub_001A2D8F); /* call 0x001A2D8F */

loc_0019D87F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019D8A8; /* je: equal / zero */

loc_0019D886: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D890u); RECOMP_ABI_CALL(0x0019D2F2u, sub_0019D2F2); /* call 0x0019D2F2 */

loc_0019D890: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D8A2; /* jne: not equal / not zero */

loc_0019D894: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D89Bu); RECOMP_ABI_CALL(0x001A2D8Fu, sub_001A2D8F); /* call 0x001A2D8F */

loc_0019D89B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0019D886; /* jne: not equal / not zero */

loc_0019D8A2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019D8B8; /* jne: not equal / not zero */

loc_0019D8A8: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D8AEu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0019D8AE: ;
    PUSH32(esp, 0x12);
    edi = edi | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D8B8u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019D8B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019D903; /* je: equal / zero */

loc_0019D8BD: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x110);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D8CCu); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_0019D8CC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019D8F3; /* je: equal / zero */

loc_0019D8D2: ;
    PUSH32(esp, 0x104);
    PUSH32(esp, MEM32(ebp + 8));
    eax = esi + 0xC;
    PUSH32(esp, eax);
    MEM32(esi) = 0x53425645;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D8EFu); RECOMP_ABI_CALL(0x001A29C5u, sub_001A29C5); /* call 0x001A29C5 */

loc_0019D8EF: ;
    edi = esi;
    goto loc_0019D903;

loc_0019D8F3: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D8F9u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0019D8F9: ;
    PUSH32(esp, 8);
    edi = edi | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D903u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019D903: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019D90C
 * Original: 0x0019D90C - 0x0019D953 (71 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019D90C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D90C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0019D91Eu); RECOMP_ABI_CALL(0x001A2D8Fu, sub_001A2D8F); /* call 0x001A2D8F */

loc_0019D91E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019D94C; /* je: equal / zero */

loc_0019D924: ;
    PUSH32(esp, ebx);
    ebx = esi + 0xC;

loc_0019D928: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x0019D935u); RECOMP_ABI_CALL(0x0019D2F2u, sub_0019D2F2); /* call 0x0019D2F2 */

loc_0019D935: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D94B; /* jne: not equal / not zero */

loc_0019D939: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0019D945u); RECOMP_ABI_CALL(0x001A2D8Fu, sub_001A2D8F); /* call 0x001A2D8F */

loc_0019D945: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019D928; /* jne: not equal / not zero */

loc_0019D94B: ;
    POP32(esp, ebx);

loc_0019D94C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019D953
 * Original: 0x0019D953 - 0x0019D9A9 (86 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019D953(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D953: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x434F4E54) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x434F4E54 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0019D991; /* je: equal / zero */

loc_0019D964: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E49434B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4E49434B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019D981; /* je: equal / zero */

loc_0019D96C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53425645) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x53425645 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019D991; /* je: equal / zero */

loc_0019D974: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBE4BEA00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xBE4BEA00u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019D9A5; /* jne: not equal / not zero */

loc_0019D97C: ;
    esi = MEM32(ecx + 0xC);
    goto loc_0019D994;

loc_0019D981: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019D98Cu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_0019D98C: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019D9A5;

loc_0019D991: ;
    esi = MEM32(ecx + 4);

loc_0019D994: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019D99Fu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_0019D99F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019D9A5u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0019D9A5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019D9A9
 * Original: 0x0019D9A9 - 0x0019D9F4 (75 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019D9A9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D9A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x0019D9BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019D9BC: ;
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    eax = ebp + -76;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0xFFFFFFFDu;
    MEM32(ebp + -12) = 0x40;
    { uint32_t _icall_target = MEM32(0x3C6BE0); PUSH32(esp, 0x0019D9DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019D9DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019D9E7; /* jl: less (signed <) */

loc_0019D9E2: ;
    eax = MEM32(ebp + -28);
    goto loc_0019D9F0;

loc_0019D9E7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019D9EDu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019D9ED: ;
    eax = eax | 0xFFFFFFFFu;

loc_0019D9F0: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019D9F4
 * Original: 0x0019D9F4 - 0x0019DB4A (342 bytes, 130 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019D9F4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019D9F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0019DA1F; /* jne: not equal / not zero */

loc_0019DA0F: ;
    edx = ecx + 1;

loc_0019DA12: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019DA12; /* jne: not equal / not zero */

loc_0019DA19: ;
    ecx = ecx - edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = ecx;

loc_0019DA1F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019DB2C; /* jle: less or equal (signed <=) */

loc_0019DA28: ;
    MEM32(ebp + 0x10) = ebx;

loc_0019DA2B: ;
    ecx = ZX8(MEM8(edi));
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(ecx + 0x461140));
    eax = ZX16(LO16(eax));
    MEM32(ebp + -8) = eax;
    eax = eax - MEM32(ebp + 8);
    edx = 0; /* xor self */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019DB2C; /* jg: greater (signed >) */

loc_0019DA4C: ;
    ebx = MEM32(ebp + -8);
    eax = ebx;
    eax = eax - edx;
    if ((eax == 0)) goto loc_0019DA9D; /* je: equal / zero */

loc_0019DA55: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0019DA91; /* je: equal / zero */

loc_0019DA58: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0019DA85; /* je: equal / zero */

loc_0019DA5B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0019DA79; /* je: equal / zero */

loc_0019DA5E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0019DA6D; /* je: equal / zero */

loc_0019DA61: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019DAA6; /* jne: not equal / not zero */

loc_0019DA64: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx;
    edx = edx << 6;

loc_0019DA6D: ;
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << 6;

loc_0019DA79: ;
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << 6;

loc_0019DA85: ;
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << 6;

loc_0019DA91: ;
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << 6;

loc_0019DA9D: ;
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019DAA6: ;
    edx = edx - MEM32(ebx * 4 + 0x461128);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x461244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x461244) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0019DAC5; /* ja: above (unsigned >) */

loc_0019DAB5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019DB20; /* jg: greater (signed >) */

loc_0019DAC0: ;
    MEM16(esi) = LO16(edx);
    goto loc_0019DB1E;

loc_0019DAC5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x461248)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x461248) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019DAE0; /* jbe: below or equal (unsigned <=) */

loc_0019DACD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019DB20; /* jg: greater (signed >) */

loc_0019DAD8: ;
    SET_LO16(eax, MEM16(0x461240));
    goto loc_0019DB1B;

loc_0019DAE0: ;
    edx = edx - MEM32(0x461250);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019DB06; /* jg: greater (signed >) */

loc_0019DAF1: ;
    ecx = MEM32(0x46124C);
    ebx = edx;
    ebx = ebx >> LO8(ecx);
    ebx = ebx + MEM32(0x461258);
    MEM16(esi) = LO16(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019DB06: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019DB20; /* jg: greater (signed >) */

loc_0019DB0E: ;
    eax = MEM32(0x461254);
    eax = eax & edx;
    eax = eax + MEM32(0x46125C);

loc_0019DB1B: ;
    MEM16(esi) = LO16(eax);

loc_0019DB1E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019DB20: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019DA2B; /* jl: less (signed <) */

loc_0019DB2C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0019DB46; /* je: equal / zero */

loc_0019DB38: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019DB46; /* jge: greater or equal (signed >=) */

loc_0019DB3D: ;
    PUSH32(esp, 0x7A);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019DB44u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019DB44: ;
    eax = 0; /* xor self */

loc_0019DB46: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019DB4A
 * Original: 0x0019DB4A - 0x0019DC02 (184 bytes, 84 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DB4A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019DB4A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019DB63; /* jne: not equal / not zero */

loc_0019DB5B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019DB61u); RECOMP_ABI_CALL(0x003426A9u, sub_003426A9); /* call 0x003426A9 */

loc_0019DB61: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019DB63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(esp + 0x18);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0019DBE8; /* jle: less or equal (signed <=) */

loc_0019DB6B: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 0x18);

loc_0019DB72: ;
    SET_LO16(ecx, MEM16(esi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7F (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0019DB86; /* ja: above (unsigned >) */

loc_0019DB7C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019DBE2; /* jg: greater (signed >) */

loc_0019DB80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019DBE2; /* je: equal / zero */

loc_0019DB84: ;
    goto loc_0019DBDF;

loc_0019DB86: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7FF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7FF (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0019DBA0; /* ja: above (unsigned >) */

loc_0019DB8D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019DBCE; /* jg: greater (signed >) */

loc_0019DB91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019DBCE; /* je: equal / zero */

loc_0019DB95: ;
    ecx = ecx >> 6;
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    SET_LO8(ecx, LO8(ecx) | 0xC0);
    goto loc_0019DBCB;

loc_0019DBA0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019DBB4; /* jg: greater (signed >) */

loc_0019DBA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019DBB4; /* je: equal / zero */

loc_0019DBA8: ;
    ecx = ecx >> 0xC;
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(ecx, LO8(ecx) | 0xE0);
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019DBB4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019DBCE; /* jg: greater (signed >) */

loc_0019DBB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019DBCE; /* je: equal / zero */

loc_0019DBBD: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    ecx = ecx >> 6;
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    SET_LO8(ecx, LO8(ecx) | 0x80);

loc_0019DBCB: ;
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019DBCE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019DBE2; /* jg: greater (signed >) */

loc_0019DBD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019DBE2; /* je: equal / zero */

loc_0019DBD7: ;
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    SET_LO8(ecx, LO8(ecx) | 0x80);

loc_0019DBDF: ;
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019DBE2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019DB72; /* jne: not equal / not zero */

loc_0019DBE7: ;
    POP32(esp, ebx);

loc_0019DBE8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019DBFB; /* je: equal / zero */

loc_0019DBEC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019DBFB; /* jge: greater or equal (signed >=) */

loc_0019DBF0: ;
    PUSH32(esp, 0x7A);
    PUSH32(esp, 0x0019DBF7u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019DBF7: ;
    eax = 0; /* xor self */
    goto loc_0019DBFD;

loc_0019DBFB: ;
    eax = edi;

loc_0019DBFD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019DC02
 * Original: 0x0019DC02 - 0x0019DCBD (187 bytes, 70 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019DC02(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019DC02: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFDE8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFDE8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019DC1F; /* jne: not equal / not zero */

loc_0019DC11: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019DC18u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019DC18: ;
    eax = 0; /* xor self */
    goto loc_0019DCB9;

loc_0019DC1F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFDE9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFDE9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019DC3B; /* jne: not equal / not zero */

loc_0019DC28: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019DC39u); RECOMP_ABI_CALL(0x0019D9F4u, sub_0019D9F4); /* call 0x0019D9F4 */

loc_0019DC39: ;
    goto loc_0019DCB9;

loc_0019DC3B: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_0019DC55; /* jne: not equal / not zero */

loc_0019DC47: ;
    eax = edi;
    edx = eax + 1;

loc_0019DC4C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019DC4C; /* jne: not equal / not zero */

loc_0019DC53: ;
    eax = eax - edx;

loc_0019DC55: ;
    edx = MEM32(ebp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019DC62; /* jne: not equal / not zero */

loc_0019DC5D: ;
    eax = ZX16(LO16(eax));
    goto loc_0019DCB8;

loc_0019DC62: ;
    PUSH32(esp, esi);
    esi = ZX16(LO16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019DC6E; /* jge: greater or equal (signed >=) */

loc_0019DC6A: ;
    PUSH32(esp, 0x7A);
    goto loc_0019DCB0;

loc_0019DC6E: ;
    ecx = eax + -1;
    MEM16(ebp + -6) = LO16(eax);
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -12) = eax;
    eax = ecx + ecx;
    MEM16(ebp + -16) = LO16(eax);
    eax = edx + edx;
    MEM16(ebp + -14) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = edi;
    MEM16(ebp + -8) = LO16(ecx);
    { uint32_t _icall_target = MEM32(0x3C6BE8); PUSH32(esp, 0x0019DCA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DCA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019DCA8; /* jl: less (signed <) */

loc_0019DCA4: ;
    eax = esi;
    goto loc_0019DCB7;

loc_0019DCA8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BCC); PUSH32(esp, 0x0019DCAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DCAF: ;
    PUSH32(esp, eax);

loc_0019DCB0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019DCB5u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019DCB5: ;
    eax = 0; /* xor self */

loc_0019DCB7: ;
    POP32(esp, esi);

loc_0019DCB8: ;
    POP32(esp, edi);

loc_0019DCB9: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0019DCBD
 * Original: 0x0019DCBD - 0x0019DD85 (200 bytes, 71 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019DCBD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019DCBD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFDE8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFDE8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019DCDA; /* jne: not equal / not zero */

loc_0019DCCC: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019DCD3u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019DCD3: ;
    eax = 0; /* xor self */
    goto loc_0019DD81;

loc_0019DCDA: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFDE9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFDE9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019DCF9; /* jne: not equal / not zero */

loc_0019DCE3: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019DCF4u); RECOMP_ABI_CALL(0x0019DB4Au, sub_0019DB4A); /* call 0x0019DB4A */

loc_0019DCF4: ;
    goto loc_0019DD81;

loc_0019DCF9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019DCCC; /* jne: not equal / not zero */

loc_0019DCFF: ;
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019DD09; /* je: equal / zero */

loc_0019DD06: ;
    MEM32(eax) = MEM32(eax) & 0;

loc_0019DD09: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_0019DD1C; /* jne: not equal / not zero */

loc_0019DD15: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019DD1Bu); RECOMP_ABI_CALL(0x003426A9u, sub_003426A9); /* call 0x003426A9 */

loc_0019DD1B: ;
    POP32(esp, ecx);

loc_0019DD1C: ;
    ecx = MEM32(ebp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019DD29; /* jne: not equal / not zero */

loc_0019DD24: ;
    eax = ZX16(LO16(eax));
    goto loc_0019DD80;

loc_0019DD29: ;
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019DD35; /* jge: greater or equal (signed >=) */

loc_0019DD31: ;
    PUSH32(esp, 0x7A);
    goto loc_0019DD78;

loc_0019DD35: ;
    edx = MEM32(ebp + 0x18);
    MEM16(ebp + -16) = MEM16(ebp + -16) & 0;
    MEM16(ebp + -14) = LO16(ecx);
    ecx = eax + eax + 0xFFFE;
    eax = eax + eax;
    MEM16(ebp + -6) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -4) = esi;
    MEM16(ebp + -8) = LO16(ecx);
    { uint32_t _icall_target = MEM32(0x3C6BEC); PUSH32(esp, 0x0019DD68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DD68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019DD70; /* jl: less (signed <) */

loc_0019DD6C: ;
    eax = edi;
    goto loc_0019DD7F;

loc_0019DD70: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BCC); PUSH32(esp, 0x0019DD77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DD77: ;
    PUSH32(esp, eax);

loc_0019DD78: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019DD7Du); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019DD7D: ;
    eax = 0; /* xor self */

loc_0019DD7F: ;
    POP32(esp, edi);

loc_0019DD80: ;
    POP32(esp, esi);

loc_0019DD81: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0019DD85
 * Original: 0x0019DD85 - 0x0019DDA3 (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0019DD85(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019DD85: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x0019DD8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DD8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019DD98; /* jl: less (signed <) */

loc_0019DD93: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019DDA0;

loc_0019DD98: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019DD9Eu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019DD9E: ;
    eax = 0; /* xor self */

loc_0019DDA0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019DDA3
 * Original: 0x0019DDA3 - 0x0019DDC9 (38 bytes, 13 insns)
 * CC: cdecl, 7 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0019DDA3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019DDA3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(0x3C6BF0); PUSH32(esp, 0x0019DDB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DDB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019DDBE; /* jl: less (signed <) */

loc_0019DDB9: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019DDC6;

loc_0019DDBE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019DDC4u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019DDC4: ;
    eax = 0; /* xor self */

loc_0019DDC6: ;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0019DDC9
 * Original: 0x0019DDC9 - 0x0019DEB6 (237 bytes, 100 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019DDC9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0019DDC9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019DDDD; /* je: equal / zero */

loc_0019DDDB: ;
    MEM32(edi) = ebx;

loc_0019DDDD: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019DE4C; /* je: equal / zero */

loc_0019DDE4: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BB8); PUSH32(esp, 0x0019DE1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DE1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019DE37; /* jl: less (signed <) */

loc_0019DE22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019DE37; /* je: equal / zero */

loc_0019DE26: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019DE32; /* je: equal / zero */

loc_0019DE2D: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_0019DE32: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019DEAF;

loc_0019DE37: ;
    ecx = 0xC0000011u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019DEA7; /* jne: not equal / not zero */

loc_0019DE40: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019DE49; /* je: equal / zero */

loc_0019DE47: ;
    MEM32(eax) = ebx;

loc_0019DE49: ;
    PUSH32(esp, ecx);
    goto loc_0019DEA8;

loc_0019DE4C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BB8); PUSH32(esp, 0x0019DE63u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DE63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019DE7C; /* jne: not equal / not zero */

loc_0019DE6A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BF4); PUSH32(esp, 0x0019DE75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DE75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019DE87; /* jl: less (signed <) */

loc_0019DE79: ;
    eax = MEM32(ebp + -8);

loc_0019DE7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019DE87; /* jl: less (signed <) */

loc_0019DE80: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_0019DE32;

loc_0019DE87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000011u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000011u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019DE92; /* jne: not equal / not zero */

loc_0019DE8E: ;
    MEM32(edi) = ebx;
    goto loc_0019DE32;

loc_0019DE92: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019DEA7; /* jne: not equal / not zero */

loc_0019DEA2: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_0019DEA7: ;
    PUSH32(esp, eax);

loc_0019DEA8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019DEADu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019DEAD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0019DEAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0019DEB6
 * Original: 0x0019DEB6 - 0x0019DF8C (214 bytes, 90 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019DEB6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0019DEB6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019DECA; /* je: equal / zero */

loc_0019DEC8: ;
    MEM32(edi) = ebx;

loc_0019DECA: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019DF2D; /* je: equal / zero */

loc_0019DED1: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BB0); PUSH32(esp, 0x0019DF0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DF0B: ;
    ecx = 0xC0000000u;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019DF7D; /* je: equal / zero */

loc_0019DF18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019DF7D; /* je: equal / zero */

loc_0019DF1C: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019DF28; /* je: equal / zero */

loc_0019DF23: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_0019DF28: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019DF85;

loc_0019DF2D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BB0); PUSH32(esp, 0x0019DF44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DF44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019DF5D; /* jne: not equal / not zero */

loc_0019DF4B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BF4); PUSH32(esp, 0x0019DF56u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DF56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019DF68; /* jl: less (signed <) */

loc_0019DF5A: ;
    eax = MEM32(ebp + -8);

loc_0019DF5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019DF68; /* jl: less (signed <) */

loc_0019DF61: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_0019DF28;

loc_0019DF68: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019DF7D; /* jne: not equal / not zero */

loc_0019DF78: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_0019DF7D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019DF83u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019DF83: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0019DF85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0019DF8C
 * Original: 0x0019DF8C - 0x0019E010 (132 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019DF8C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019DF8C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BF8); PUSH32(esp, 0x0019DFA7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DFA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019DFB5; /* jge: greater or equal (signed >=) */

loc_0019DFAB: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019DFB1u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019DFB1: ;
    eax = 0; /* xor self */
    goto loc_0019E00C;

loc_0019DFB5: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, esi);
    esi = MEM32(0x3C6BD4);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 8);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0019DFD9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DFD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019E003; /* jl: less (signed <) */

loc_0019DFDD: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 8);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0019DFFAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019DFFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019E003; /* jl: less (signed <) */

loc_0019DFFE: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019E00B;

loc_0019E003: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E009u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019E009: ;
    eax = 0; /* xor self */

loc_0019E00B: ;
    POP32(esp, esi);

loc_0019E00C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019E010
 * Original: 0x0019E010 - 0x0019E10A (250 bytes, 104 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E010(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0019E010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0019E027; /* je: equal / zero */

loc_0019E020: ;
    edi = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    goto loc_0019E02F;

loc_0019E027: ;
    eax = MEM32(ebp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = eax;
    edi = edx;

loc_0019E02F: ;
    eax = MEM32(ebp + 0x14);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    if ((eax == 0)) goto loc_0019E091; /* je: equal / zero */

loc_0019E037: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0019E063; /* je: equal / zero */

loc_0019E03A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019E063; /* jne: not equal / not zero */

loc_0019E03D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -72;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BF8); PUSH32(esp, 0x0019E052u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E052: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0019E07C; /* jl: less (signed <) */

loc_0019E056: ;
    eax = MEM32(ebp + -32);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -28);
    goto loc_0019E08D;

loc_0019E063: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BF8); PUSH32(esp, 0x0019E078u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E078: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019E087; /* jge: greater or equal (signed >=) */

loc_0019E07C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E082u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019E082: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    goto loc_0019E103;

loc_0019E087: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(esi)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + esi;
    eax = MEM32(ebp + -4);

loc_0019E08D: ;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    goto loc_0019E096;

loc_0019E091: ;
    MEM32(ebp + -8) = esi;
    eax = edi;

loc_0019E096: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -4) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0019E0AC; /* jg: greater (signed >) */

loc_0019E09D: ;
    if (TEST_S(_fas, _fbs)) goto loc_0019E0A5; /* jl: less (signed <) */

loc_0019E09F: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0019E0AC; /* jae: above or equal (unsigned >=) */

loc_0019E0A5: ;
    PUSH32(esp, 0x83);
    goto loc_0019E0B9;

loc_0019E0AC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0019E0C0; /* jne: not equal / not zero */

loc_0019E0B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0019E0C0; /* je: equal / zero */

loc_0019E0B7: ;
    PUSH32(esp, 0x57);

loc_0019E0B9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E0BEu); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019E0BE: ;
    goto loc_0019E082;

loc_0019E0C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BD4); PUSH32(esp, 0x0019E0D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E0D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0019E0F4; /* jl: less (signed <) */

loc_0019E0D9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0019E0E2; /* je: equal / zero */

loc_0019E0DD: ;
    eax = MEM32(ebp + -4);
    MEM32(ebx) = eax;

loc_0019E0E2: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019E0EF; /* jne: not equal / not zero */

loc_0019E0E8: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E0EFu); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019E0EF: ;
    eax = MEM32(ebp + -8);
    goto loc_0019E103;

loc_0019E0F4: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E0FAu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019E0FA: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0019E103; /* je: equal / zero */

loc_0019E101: ;
    MEM32(ebx) = eax;

loc_0019E103: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019E10A
 * Original: 0x0019E10A - 0x0019E1D2 (200 bytes, 79 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E10A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0019E10A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    eax = MEM32(ebp + 0x18);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    if ((eax == 0)) goto loc_0019E174; /* je: equal / zero */

loc_0019E118: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0019E149; /* je: equal / zero */

loc_0019E11B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019E149; /* jne: not equal / not zero */

loc_0019E11E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -72;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BF8); PUSH32(esp, 0x0019E133u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E133: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0019E1C6; /* jl: less (signed <) */

loc_0019E13B: ;
    ecx = MEM32(ebp + -32);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 0xC))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 0xC);
    eax = MEM32(ebp + -28);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    goto loc_0019E17A;

loc_0019E149: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BF8); PUSH32(esp, 0x0019E15Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E15E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0019E1C6; /* jl: less (signed <) */

loc_0019E162: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(ebp + -4);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    goto loc_0019E17A;

loc_0019E174: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);

loc_0019E17A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0019E196; /* jg: greater (signed >) */

loc_0019E184: ;
    if (TEST_S(_fas, _fbs)) goto loc_0019E18A; /* jl: less (signed <) */

loc_0019E186: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_AE(_fa & _fb, 0)) goto loc_0019E196; /* jae: above or equal (unsigned >=) */

loc_0019E18A: ;
    PUSH32(esp, 0x83);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E194u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019E194: ;
    goto loc_0019E1CC;

loc_0019E196: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BD4); PUSH32(esp, 0x0019E1ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E1AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0019E1C6; /* jl: less (signed <) */

loc_0019E1AF: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0019E1C1; /* je: equal / zero */

loc_0019E1B6: ;
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;

loc_0019E1C1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019E1CE;

loc_0019E1C6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E1CCu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019E1CC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0019E1CE: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0019E1D2
 * Original: 0x0019E1D2 - 0x0019E2AB (217 bytes, 83 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E1D2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019E1D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x94;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x18);
    eax = ebp + -148;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BA4); PUSH32(esp, 0x0019E1F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E1F5: ;
    esi = 0xC0000000u;
    ecx = eax;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019E29D; /* je: equal / zero */

loc_0019E206: ;
    eax = MEM32(ebp + -140);
    edi = MEM32(0x3C6BF8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    MEM32(ebp + -40) = eax;
    PUSH32(esp, 8);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0019E226u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E226: ;
    ecx = eax;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019E29D; /* je: equal / zero */

loc_0019E22E: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -16);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0x38);
    eax = ebp + -124;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0019E24Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E24B: ;
    ecx = eax;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019E29D; /* je: equal / zero */

loc_0019E253: ;
    eax = MEM32(ebp + -76);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -124);
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + -120);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -116);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + -112);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -108);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -104);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -80);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -84);
    MEM32(ebp + -32) = eax;
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
    esi = ebp + -68;
    eax = 0; /* xor self */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019E2A5;

loc_0019E29D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E2A3u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019E2A3: ;
    eax = 0; /* xor self */

loc_0019E2A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019E2AB
 * Original: 0x0019E2AB - 0x0019E2D2 (39 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E2AB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019E2AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BFC); PUSH32(esp, 0x0019E2BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E2BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019E2C6; /* jl: less (signed <) */

loc_0019E2C1: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019E2CE;

loc_0019E2C6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E2CCu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019E2CC: ;
    eax = 0; /* xor self */

loc_0019E2CE: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019E2D2
 * Original: 0x0019E2D2 - 0x0019E310 (62 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E2D2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019E2D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BF8); PUSH32(esp, 0x0019E2EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E2ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019E2FB; /* jge: greater or equal (signed >=) */

loc_0019E2F1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E2F7u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019E2F7: ;
    eax = 0; /* xor self */
    goto loc_0019E30C;

loc_0019E2FB: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019E30C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019E310
 * Original: 0x0019E310 - 0x0019E34B (59 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019E310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E321u); RECOMP_ABI_CALL(0x0019E2D2u, sub_0019E2D2); /* call 0x0019E2D2 */

loc_0019E321: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019E340; /* je: equal / zero */

loc_0019E325: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019E331; /* je: equal / zero */

loc_0019E32C: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;

loc_0019E331: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019E344; /* jne: not equal / not zero */

loc_0019E337: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E33Eu); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019E33E: ;
    goto loc_0019E344;

loc_0019E340: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;

loc_0019E344: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019E34B
 * Original: 0x0019E34B - 0x0019E4D6 (395 bytes, 136 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E34B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019E34B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    POP32(esp, ebx);
    if ((_fa == 0)) goto loc_0019E3A0; /* je: equal / zero */

loc_0019E35F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0019E397; /* je: equal / zero */

loc_0019E362: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0019E392; /* je: equal / zero */

loc_0019E365: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0019E389; /* je: equal / zero */

loc_0019E368: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019E37A; /* jne: not equal / not zero */

loc_0019E36B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x40000000 (32-bit) */
    MEM32(ebp + 0xC) = 4;
    if (TEST_NZ(_fa, _fb)) goto loc_0019E3A7; /* jne: not equal / not zero */

loc_0019E37A: ;
    PUSH32(esp, 0xC000000Du);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E384u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019E384: ;
    goto loc_0019E4A3;

loc_0019E389: ;
    MEM32(ebp + 0xC) = 3;
    goto loc_0019E3A7;

loc_0019E392: ;
    MEM32(ebp + 0xC) = ebx;
    goto loc_0019E3A7;

loc_0019E397: ;
    MEM32(ebp + 0xC) = 5;
    goto loc_0019E3A7;

loc_0019E3A0: ;
    MEM32(ebp + 0xC) = 2;

loc_0019E3A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x0019E3B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E3B6: ;
    _fa = (uint32_t)(MEM16(ebp + -12)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -12), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019E3CC; /* jbe: below or equal (unsigned <=) */

loc_0019E3BC: ;
    eax = ZX16(MEM16(ebp + -12));
    _fa = (uint32_t)(MEM8(eax + edi + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edi + -1), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019E3CC; /* jne: not equal / not zero */

loc_0019E3C7: ;
    MEM32(ebp + 8) = ebx;
    goto loc_0019E3D0;

loc_0019E3CC: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;

loc_0019E3D0: ;
    ecx = MEM32(ebp + 0x1C);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    eax = ecx;
    eax = eax >> 4;
    edx = 0x8000000;
    eax = eax & edx;
    ebx = ecx;
    ebx = ebx & 0x20000000;
    eax = eax | ebx;
    eax = eax >> 1;
    ebx = ecx;
    ebx = ebx & edx;
    eax = eax | ebx;
    eax = eax >> 8;
    edx = ecx;
    edx = edx & 0x10000000;
    eax = eax | edx;
    eax = eax >> 6;
    edi = ecx;
    edx = ecx;
    edx = edx >> 0x19;
    edi = edi & 0x2000000;
    eax = eax | edi;
    edx = ~edx;
    eax = eax >> 0xB;
    edx = edx & 0x20;
    eax = eax | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x4000000 (32-bit) */
    MEM32(ebp + -32) = 0xFFFFFFFDu;
    MEM32(ebp + -24) = 0x40;
    if (TEST_Z(_fa, _fb)) goto loc_0019E441; /* je: equal / zero */

loc_0019E436: ;
    eax = eax | 0x1000;
    esi = esi | 0x10000;

loc_0019E441: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0019E44B; /* jne: not equal / not zero */

loc_0019E448: ;
    eax = eax | 0x40;

loc_0019E44B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ecx & 0x7FA7;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    esi = esi | 0x100080;
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BDC); PUSH32(esp, 0x0019E473u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E473: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019E4A8; /* jge: greater or equal (signed >=) */

loc_0019E479: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E47Fu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019E47F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC0000035u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019E48B; /* jne: not equal / not zero */

loc_0019E487: ;
    PUSH32(esp, 0x50);
    goto loc_0019E49E;

loc_0019E48B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC00000BAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC00000BAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019E4A3; /* jne: not equal / not zero */

loc_0019E493: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019E49C; /* je: equal / zero */

loc_0019E498: ;
    PUSH32(esp, 3);
    goto loc_0019E49E;

loc_0019E49C: ;
    PUSH32(esp, 5);

loc_0019E49E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E4A3u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019E4A3: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0019E4D0;

loc_0019E4A8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019E4B4; /* jne: not equal / not zero */

loc_0019E4AE: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019E4C0; /* je: equal / zero */

loc_0019E4B4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019E4C7; /* jne: not equal / not zero */

loc_0019E4BA: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019E4C7; /* jne: not equal / not zero */

loc_0019E4C0: ;
    PUSH32(esp, 0xB7);
    goto loc_0019E4C8;

loc_0019E4C7: ;
    PUSH32(esp, ebx);

loc_0019E4C8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E4CDu); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019E4CD: ;
    eax = MEM32(ebp + -4);

loc_0019E4D0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0019E4D6
 * Original: 0x0019E4D6 - 0x0019E7B8 (738 bytes, 264 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E4D6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0019E4D6: ;
    PUSH32(esp, ebp);
    ebp = esp + -96;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x9C));
    esp = esp - 0x9C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    eax = ebp + -20;
    ebx = 0x10000;
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = 0xFFFFFFFDu;
    MEM32(ebp + 4) = 0x40;
    MEM32(ebp) = eax;
    { uint32_t _icall_target = MEM32(0x3C6C14); PUSH32(esp, 0x0019E505u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E505: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x48) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0019E51C; /* jne: not equal / not zero */

loc_0019E50E: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0019E515u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019E515: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0019E7AF;

loc_0019E51C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    esi = MEM32(0x3C6BAC);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0019E52Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E52C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x60);
    PUSH32(esp, 1);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BA8); PUSH32(esp, 0x0019E547u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E547: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x68) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0019E567; /* jge: greater or equal (signed >=) */

loc_0019E54E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    { uint32_t _icall_target = MEM32(0x3C6C10); PUSH32(esp, 0x0019E558u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E558: ;
    PUSH32(esp, MEM32(ebp + 0x68));

loc_0019E55B: ;
    PUSH32(esp, 0x0019E560u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019E560: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0019E7AE;

loc_0019E567: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x3C6BF8); PUSH32(esp, 0x0019E57Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E57C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x68) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0019E58E; /* jge: greater or equal (signed >=) */

loc_0019E583: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x0019E58Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E58C: ;
    goto loc_0019E54E;

loc_0019E58E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x6C));
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0019E597u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E597: ;
    eax = MEM32(ebp + 0x7C);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFDu;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x80);
    eax = ebp + 0x30;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40100000);
    eax = ebp + 0x54;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BDC); PUSH32(esp, 0x0019E5CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E5CA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0019E5E9; /* jge: greater or equal (signed >=) */

loc_0019E5D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x0019E5D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E5D9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    { uint32_t _icall_target = MEM32(0x3C6C10); PUSH32(esp, 0x0019E5E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E5E3: ;
    PUSH32(esp, esi);
    goto loc_0019E55B;

loc_0019E5E9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x58) = edi;
    MEM32(ebp + 0x5C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0019E620; /* je: equal / zero */

loc_0019E5F4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, MEM32(ebp + 0x54));
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    { uint32_t _icall_target = MEM32(ebp + 0x70); PUSH32(esp, 0x0019E614u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E614: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019E6E5; /* jne: not equal / not zero */

loc_0019E61D: ;
    MEM32(ebp + 0x70) = edi;

loc_0019E620: ;
    eax = MEM32(ebp + 0x30);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 8);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = MEM32(0x3C6BD4); PUSH32(esp, 0x0019E641u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E641: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019E76A; /* jl: less (signed <) */

loc_0019E64B: ;
    eax = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x34) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0019E719; /* jg: greater (signed >) */

loc_0019E657: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0019E706; /* jge: greater or equal (signed >=) */

loc_0019E65D: ;
    eax = ebp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x3C6BB8); PUSH32(esp, 0x0019E675u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E675: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019E76A; /* jl: less (signed <) */

loc_0019E67F: ;
    eax = MEM32(ebp + 0x44);
    ecx = ebp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x48));
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = MEM32(0x3C6BB0); PUSH32(esp, 0x0019E69Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E69D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019E76A; /* jl: less (signed <) */

loc_0019E6A7: ;
    eax = MEM32(ebp + 0x58);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 0x68))) >> 32) & 1);
    eax = eax + MEM32(ebp + 0x68);
    { uint64_t _t = (uint64_t)(MEM32(ebp + 0x5C)) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + 0x5C) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x58) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019E6F8; /* je: equal / zero */

loc_0019E6B8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, MEM32(ebp + 0x54));
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    { uint32_t _icall_target = MEM32(ebp + 0x70); PUSH32(esp, 0x0019E6DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E6DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019E6F4; /* jne: not equal / not zero */

loc_0019E6E0: ;
    MEM32(ebp + 0x70) = edi;
    goto loc_0019E6F8;

loc_0019E6E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0019E620; /* je: equal / zero */

loc_0019E6ED: ;
    esi = 0xC0000240u;
    goto loc_0019E76A;

loc_0019E6F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019E714; /* jne: not equal / not zero */

loc_0019E6F8: ;
    eax = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x34) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019E65D; /* jl: less (signed <) */

loc_0019E704: ;
    if (CMP_G(_fas, _fbs)) goto loc_0019E719; /* jg: greater (signed >) */

loc_0019E706: ;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0019E65D; /* jb: below (unsigned <) */

loc_0019E712: ;
    goto loc_0019E719;

loc_0019E714: ;
    esi = 0xC0000240u;

loc_0019E719: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019E76A; /* jl: less (signed <) */

loc_0019E71D: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 0x28);
    eax = ebp + -60;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = MEM32(0x3C6BD4); PUSH32(esp, 0x0019E768u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E768: ;
    esi = eax;

loc_0019E76A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    { uint32_t _icall_target = MEM32(0x3C6C10); PUSH32(esp, 0x0019E774u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E774: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x50));
    ebx = MEM32(0x3C6BA0);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0019E77Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E77F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0019E7A4; /* jge: greater or equal (signed >=) */

loc_0019E783: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = ebp + 0x4F;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x54));
    MEM8(ebp + 0x4F) = 1;
    { uint32_t _icall_target = MEM32(0x3C6BD4); PUSH32(esp, 0x0019E79Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E79C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019E7A2u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019E7A2: ;
    goto loc_0019E7A7;

loc_0019E7A4: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019E7A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0019E7ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019E7AC: ;
    eax = edi;

loc_0019E7AE: ;
    POP32(esp, esi);

loc_0019E7AF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x60)) >> 32) & 1);
    ebp = ebp + 0x60;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0019E7B8
 * Original: 0x0019E7B8 - 0x0019E7D7 (31 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E7B8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019E7B8: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), eax (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x0019E7D4u); RECOMP_ABI_CALL(0x0019E4D6u, sub_0019E4D6); /* call 0x0019E4D6 */

loc_0019E7D4: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019E7D7
 * Original: 0x0019E7D7 - 0x0019E839 (98 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E7D7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019E7D7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x40;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x40 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019E7EA; /* jbe: below or equal (unsigned <=) */

loc_0019E7E3: ;
    MEM32(ebp + 0xC) = 0x40;

loc_0019E7EA: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -64;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebp + -64;
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
    eax = 0; /* xor self */
    POP32(esp, esi);

loc_0019E811: ;
    MEM32(ebp + eax * 4 + -64) = MEM32(ebp + eax * 4 + -64) ^ 0x36363636;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019E811; /* jb: below (unsigned <) */

loc_0019E81F: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E827u); RECOMP_ABI_CALL(0x001A3C80u, sub_001A3C80); /* call 0x001A3C80 */

loc_0019E827: ;
    PUSH32(esp, 0x40);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E835u); RECOMP_ABI_CALL(0x001A3C7Au, sub_001A3C7A); /* call 0x001A3C7A */

loc_0019E835: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019E839
 * Original: 0x0019E839 - 0x0019E83E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E839(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019E839: ;
    g_seh_ebp = ebp; sub_001A3C7A(); return; /* tail jmp 0x001A3C7A */

}

/**
 * sub_0019E83E
 * Original: 0x0019E83E - 0x0019E8B0 (114 bytes, 48 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E83E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019E83E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x54;
    PUSH32(esp, 0x40);
    POP32(esp, eax);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019E84F; /* jbe: below or equal (unsigned <=) */

loc_0019E84C: ;
    MEM32(ebp + 0x10) = eax;

loc_0019E84F: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -84;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 0x10);
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebp + -84;
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
    eax = 0; /* xor self */

loc_0019E874: ;
    MEM32(ebp + eax * 4 + -84) = MEM32(ebp + eax * 4 + -84) ^ 0x5C5C5C5C;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019E874; /* jb: below (unsigned <) */

loc_0019E882: ;
    esi = MEM32(ebp + 8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E88Fu); RECOMP_ABI_CALL(0x001A3C86u, sub_001A3C86); /* call 0x001A3C86 */

loc_0019E88F: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E895u); RECOMP_ABI_CALL(0x001A3C80u, sub_001A3C80); /* call 0x001A3C80 */

loc_0019E895: ;
    PUSH32(esp, 0x54);
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E8A1u); RECOMP_ABI_CALL(0x001A3C7Au, sub_001A3C7A); /* call 0x001A3C7A */

loc_0019E8A1: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E8AAu); RECOMP_ABI_CALL(0x001A3C86u, sub_001A3C86); /* call 0x001A3C86 */

loc_0019E8AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019E8B0
 * Original: 0x0019E8B0 - 0x0019E925 (117 bytes, 45 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E8B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019E8B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x108;
    PUSH32(esp, esi);
    esi = MEM32(0x3C6C24);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, edi);
    ecx = 0; /* xor self */

loc_0019E8C5: ;
    SET_LO8(eax, LO8(eax) | MEM8(ecx + esi));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019E8C5; /* jl: less (signed <) */

loc_0019E8CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019E8F6; /* jne: not equal / not zero */

loc_0019E8D2: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    eax = ebp + -264;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFF);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E8F0u); RECOMP_ABI_CALL(0x001A2DE0u, sub_001A2DE0); /* call 0x001A2DE0 */

loc_0019E8F0: ;
    esi = ebp + -210;

loc_0019E8F6: ;
    edi = MEM32(ebp + 8);
    edi = edi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E905u); RECOMP_ABI_CALL(0x0019E7D7u, sub_0019E7D7); /* call 0x0019E7D7 */

loc_0019E905: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E910u); RECOMP_ABI_CALL(0x001A3C7Au, sub_001A3C7A); /* call 0x001A3C7A */

loc_0019E910: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E91Cu); RECOMP_ABI_CALL(0x0019E83Eu, sub_0019E83E); /* call 0x0019E83E */

loc_0019E91C: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019E925
 * Original: 0x0019E925 - 0x0019E9A5 (128 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E925(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019E925: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x10118);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x0019E93Au); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_0019E93A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019E944; /* jne: not equal / not zero */

loc_0019E940: ;
    PUSH32(esp, 8);
    goto loc_0019E972;

loc_0019E944: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x14);
    MEM32(edi) = eax;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019E987; /* je: equal / zero */

loc_0019E953: ;
    eax = 0; /* xor self */
    ecx = esi + 0x5C;

loc_0019E958: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019E970; /* je: equal / zero */

loc_0019E95E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019E96B; /* je: equal / zero */

loc_0019E962: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019E958; /* jb: below (unsigned <) */

loc_0019E96B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019E97C; /* jb: below (unsigned <) */

loc_0019E970: ;
    PUSH32(esp, 5);

loc_0019E972: ;
    PUSH32(esp, 0x0019E977u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019E977: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0019E99F;

loc_0019E97C: ;
    eax = eax << 4;
    eax = eax + MEM32(0x3C6C2C);
    goto loc_0019E98C;

loc_0019E987: ;
    eax = MEM32(0x3C6C28);

loc_0019E98C: ;
    MEM32(edi + 4) = eax;
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, 0x0019E99Du); RECOMP_ABI_CALL(0x0019E7D7u, sub_0019E7D7); /* call 0x0019E7D7 */

loc_0019E99D: ;
    eax = edi;

loc_0019E99F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019E9A5
 * Original: 0x0019E9A5 - 0x0019EA07 (98 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019E9A5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019E9A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi);
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019E9E8; /* je: equal / zero */

loc_0019E9BF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019E9C6; /* je: equal / zero */

loc_0019E9C3: ;
    eax = ebp + -20;

loc_0019E9C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(edi + 4));
    eax = edi + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E9D5u); RECOMP_ABI_CALL(0x0019E83Eu, sub_0019E83E); /* call 0x0019E83E */

loc_0019E9D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019E9E8; /* je: equal / zero */

loc_0019E9D9: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E9E6u); RECOMP_ABI_CALL(0x0019E8B0u, sub_0019E8B0); /* call 0x0019E8B0 */

loc_0019E9E6: ;
    ebx = eax;

loc_0019E9E8: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019E9F3u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_0019E9F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0019E9FE; /* je: equal / zero */

loc_0019E9FA: ;
    eax = 0; /* xor self */
    goto loc_0019EA03;

loc_0019E9FE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EA03u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0019EA03: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019EA07
 * Original: 0x0019EA07 - 0x0019EA3D (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EA07(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EA07: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x0019EA14u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_0019EA14: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019EA26; /* jne: not equal / not zero */

loc_0019EA1A: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0019EA21u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019EA21: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019EA26: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    eax = esi + 8;
    PUSH32(esp, eax);
    MEM32(esi) = 2;
    PUSH32(esp, 0x0019EA39u); RECOMP_ABI_CALL(0x001A3C80u, sub_001A3C80); /* call 0x001A3C80 */

loc_0019EA39: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019EA3D
 * Original: 0x0019EA3D - 0x0019EA57 (26 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0019EA3D(void)
{

loc_0019EA3D: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019EA52u); RECOMP_ABI_CALL(0x001A3C7Au, sub_001A3C7A); /* call 0x001A3C7A */

loc_0019EA52: ;
    eax = 0; /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019EA57
 * Original: 0x0019EA57 - 0x0019EA81 (42 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EA57(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EA57: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0019EA70; /* je: equal / zero */

loc_0019EA63: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019EA70u); RECOMP_ABI_CALL(0x001A3C86u, sub_001A3C86); /* call 0x001A3C86 */

loc_0019EA70: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019EA7Bu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_0019EA7B: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019EA81
 * Original: 0x0019EA81 - 0x0019EAC2 (65 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EA81(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EA81: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019EAA9; /* jbe: below or equal (unsigned <=) */

loc_0019EA8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019EAA2; /* je: equal / zero */

loc_0019EA8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019EAA2; /* je: equal / zero */

loc_0019EA94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019EAB5; /* jne: not equal / not zero */

loc_0019EA99: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5BA788); PUSH32(esp, 0x0019EAA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EAA0: ;
    goto loc_0019EABF;

loc_0019EAA2: ;
    PUSH32(esp, 0x0019EAA7u); RECOMP_ABI_CALL(0x0019EA07u, sub_0019EA07); /* call 0x0019EA07 */

loc_0019EAA7: ;
    goto loc_0019EABF;

loc_0019EAA9: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019EAB3u); RECOMP_ABI_CALL(0x0019E925u, sub_0019E925); /* call 0x0019E925 */

loc_0019EAB3: ;
    goto loc_0019EABF;

loc_0019EAB5: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x0019EABCu); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019EABC: ;
    eax = eax | 0xFFFFFFFFu;

loc_0019EABF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019EAC2
 * Original: 0x0019EAC2 - 0x0019EAD6 (20 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EAC2(void)
{

loc_0019EAC2: ;
    eax = MEM32(0x10118);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0019EAD3u); RECOMP_ABI_CALL(0x0019EA81u, sub_0019EA81); /* call 0x0019EA81 */

loc_0019EAD3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019EAD6
 * Original: 0x0019EAD6 - 0x0019EB24 (78 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019EAD6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EAD6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019EB0F; /* jbe: below or equal (unsigned <=) */

loc_0019EAE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019EB01; /* je: equal / zero */

loc_0019EAE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019EB01; /* je: equal / zero */

loc_0019EAED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019EB1D; /* jne: not equal / not zero */

loc_0019EAF2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x5BA78C); PUSH32(esp, 0x0019EAFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EAFF: ;
    goto loc_0019EB20;

loc_0019EB01: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EB0Du); RECOMP_ABI_CALL(0x0019EA3Du, sub_0019EA3D); /* call 0x0019EA3D */

loc_0019EB0D: ;
    goto loc_0019EB20;

loc_0019EB0F: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EB1Bu); RECOMP_ABI_CALL(0x0019EA3Du, sub_0019EA3D); /* call 0x0019EA3D */

loc_0019EB1B: ;
    goto loc_0019EB20;

loc_0019EB1D: ;
    PUSH32(esp, 0x32);
    POP32(esp, eax);

loc_0019EB20: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019EB24
 * Original: 0x0019EB24 - 0x0019EB69 (69 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EB24(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EB24: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019EB57; /* jbe: below or equal (unsigned <=) */

loc_0019EB2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019EB4B; /* je: equal / zero */

loc_0019EB34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019EB4B; /* je: equal / zero */

loc_0019EB39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019EB63; /* jne: not equal / not zero */

loc_0019EB3E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x5BA790); PUSH32(esp, 0x0019EB49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EB49: ;
    goto loc_0019EB66;

loc_0019EB4B: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019EB55u); RECOMP_ABI_CALL(0x0019EA57u, sub_0019EA57); /* call 0x0019EA57 */

loc_0019EB55: ;
    goto loc_0019EB66;

loc_0019EB57: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019EB61u); RECOMP_ABI_CALL(0x0019E9A5u, sub_0019E9A5); /* call 0x0019E9A5 */

loc_0019EB61: ;
    goto loc_0019EB66;

loc_0019EB63: ;
    PUSH32(esp, 0x32);
    POP32(esp, eax);

loc_0019EB66: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019EB69
 * Original: 0x0019EB69 - 0x0019EBAB (66 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EB69(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EB69: ;
    eax = 0x44B0D8;
    PUSH32(esp, esi);
    esi = eax;
    ecx = eax;
    eax = 0x44B0DC;
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_0019EB8A; /* jae: above or equal (unsigned >=) */

loc_0019EB7F: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019EB9C; /* jne: not equal / not zero */

loc_0019EB83: ;
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019EB7F; /* jb: below (unsigned <) */

loc_0019EB8A: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0019EB99u); RECOMP_ABI_CALL(0x001A3211u, sub_001A3211); /* call 0x001A3211 */

loc_0019EB99: ;
    esp += 12; return; /* ret 8 */

loc_0019EB9C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(ecx); PUSH32(esp, 0x0019EBA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EBA9: ;
    goto loc_0019EB99;

}

/**
 * sub_0019EBAB
 * Original: 0x0019EBAB - 0x0019EC8C (225 bytes, 83 insns)
 * Category: game_io
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019EBAB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EBAB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x3C6C38);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x1000;
    if (CMP_NE(_fa, _fb)) goto loc_0019EBCD; /* jne: not equal / not zero */

loc_0019EBBE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6C34); PUSH32(esp, 0x0019EBC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EBC5: ;
    ecx = MEM32(0x3C6C38);
    MEM32(ecx) = eax;

loc_0019EBCD: ;
    eax = MEM32(0x3C6C38);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019EBE2; /* jne: not equal / not zero */

loc_0019EBD8: ;
    eax = 0xC0000017u;
    goto loc_0019EC87;

loc_0019EBE2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C30); PUSH32(esp, 0x0019EBECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EBEC: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019EBF8; /* jne: not equal / not zero */

loc_0019EBF3: ;
    edx = 0x3E1AA4;

loc_0019EBF8: ;
    eax = MEM32(0x3C6C38);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = 0; /* xor self */
    esi = 0x400;
    ebx = edi + 8;
    ecx = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x3C6C38);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edi = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    ecx = MEM32(0x3C6C38);
    ecx = MEM32(ecx);
    MEM32(ecx + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0019EC41; /* je: equal / zero */

loc_0019EC2E: ;
    eax = MEM32(0x3C6C38);
    edi = MEM32(eax);
    edi = edi + esi;
    esi = MEM32(ebp + 0x1C);
    ecx = 0x300;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_0019EC41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019EC83; /* je: equal / zero */

loc_0019EC48: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019EC70; /* je: equal / zero */

loc_0019EC4C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019EC70; /* je: equal / zero */

loc_0019EC51: ;
    PUSH32(esp, 0x207);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EC5Du); RECOMP_ABI_CALL(0x001A29C5u, sub_001A29C5); /* call 0x001A29C5 */

loc_0019EC5D: ;
    eax = ebx;
    esi = eax + 1;

loc_0019EC62: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019EC62; /* jne: not equal / not zero */

loc_0019EC69: ;
    eax = eax - esi;
    MEM8(eax + ebx) = 0x3B;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019EC70: ;
    ecx = 0x208;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    eax = eax + ebx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EC83u); RECOMP_ABI_CALL(0x001A29C5u, sub_001A29C5); /* call 0x001A29C5 */

loc_0019EC83: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);

loc_0019EC87: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0019EC8C
 * Original: 0x0019EC8C - 0x0019ECD3 (71 bytes, 24 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019EC8C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EC8C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019ECA5u); RECOMP_ABI_CALL(0x0019EBABu, sub_0019EBAB); /* call 0x0019EBAB */

loc_0019ECA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019ECC8; /* jl: less (signed <) */

loc_0019ECA9: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019ECC0; /* je: equal / zero */

loc_0019ECB9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0019ECC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019ECC0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(0x3C6C40); PUSH32(esp, 0x0019ECC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019ECC8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BCC); PUSH32(esp, 0x0019ECCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019ECCF: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0019ECD3
 * Original: 0x0019ECD3 - 0x0019ED15 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019ECD3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019ECD3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019ECEBu); RECOMP_ABI_CALL(0x001A3C8Cu, sub_001A3C8C); /* call 0x001A3C8C */

loc_0019ECEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019ECF3; /* jge: greater or equal (signed >=) */

loc_0019ECEF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_0019ECF3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019ECF8u); RECOMP_ABI_CALL(0x001A1BD2u, sub_001A1BD2); /* call 0x001A1BD2 */

loc_0019ECF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019ED09; /* je: equal / zero */

loc_0019ECFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019ED10; /* jne: not equal / not zero */

loc_0019ED02: ;
    MEM16(ebp + -2) = MEM16(ebp + -2) & 0;
    goto loc_0019ED10;

loc_0019ED09: ;
    MEM32(ebp + -4) = 1;

loc_0019ED10: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019ED15
 * Original: 0x0019ED15 - 0x0019ED42 (45 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019ED15(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019ED15: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019ED2Du); RECOMP_ABI_CALL(0x001A3C8Cu, sub_001A3C8C); /* call 0x001A3C8C */

loc_0019ED2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019ED3E; /* jl: less (signed <) */

loc_0019ED31: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019ED40; /* jbe: below or equal (unsigned <=) */

loc_0019ED39: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0019ED3E: ;
    eax = 0; /* xor self */

loc_0019ED40: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019ED42
 * Original: 0x0019ED42 - 0x0019ED5E (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0019ED42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019ED42: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x0019ED4Bu); RECOMP_ABI_CALL(0x0019FCDDu, sub_0019FCDD); /* call 0x0019FCDD */

loc_0019ED4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019ED52; /* jne: not equal / not zero */

loc_0019ED4F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019ED5B;

loc_0019ED52: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x0019ED59u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019ED59: ;
    eax = 0; /* xor self */

loc_0019ED5B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019ED5E
 * Original: 0x0019ED5E - 0x0019ED75 (23 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019ED5E(void)
{

loc_0019ED5E: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0019ED6Fu); RECOMP_ABI_CALL(0x001A1287u, sub_001A1287); /* call 0x001A1287 */

loc_0019ED6F: ;
    eax = ZX8(LO8(eax));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019ED75
 * Original: 0x0019ED75 - 0x0019ED7B (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019ED75(void)
{

loc_0019ED75: ;
    eax = MEM32(0x5DD0E8);
    esp += 4; return; /* ret */

}

/**
 * sub_0019ED7B
 * Original: 0x0019ED7B - 0x0019ED98 (29 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019ED7B(void)
{

loc_0019ED7B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    eax = eax >> 3;
    eax = eax & 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x5DD0E8));
    PUSH32(esp, 0x0019ED95u); RECOMP_ABI_CALL(0x001A0B0Cu, sub_001A0B0C); /* call 0x001A0B0C */

loc_0019ED95: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019ED98
 * Original: 0x0019ED98 - 0x0019EDB6 (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019ED98(void)
{
    int _cf = 0; /* carry flag */

loc_0019ED98: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x5DD0E8));
    PUSH32(esp, 0x0019EDA9u); RECOMP_ABI_CALL(0x001A1287u, sub_001A1287); /* call 0x001A1287 */

loc_0019EDA9: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019EDB6
 * Original: 0x0019EDB6 - 0x0019EE46 (144 bytes, 52 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019EDB6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0019EDB6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x120));
    esp = esp - 0x120;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    if (0x10) _cf = (int)(((eax) >> ((0x10) - 1)) & 1);
    eax = eax >> 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E1AC0);
    eax = ebp + -288;
    PUSH32(esp, 0x3E1B34);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EDDDu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0019EDDD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    eax = ebp + -288;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x0019EDF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EDF1: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, 0x40);
    POP32(esp, eax);
    ecx = ebp + -20;
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + 0xC);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFE8u;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100080u);
    eax = ebp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BDC); PUSH32(esp, 0x0019EE30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EE30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019EE41; /* jge: greater or equal (signed >=) */

loc_0019EE34: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EE3Au); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019EE3A: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;

loc_0019EE3D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_0019EE41: ;
    eax = MEM32(ebp + 8);
    goto loc_0019EE3D;

}

/**
 * sub_0019EE46
 * Original: 0x0019EE46 - 0x0019EE89 (67 bytes, 28 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019EE46(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EE46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0019EE60; /* je: equal / zero */

loc_0019EE54: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    edx = eax;
    eax = ecx + eax + -1;
    goto loc_0019EE65;

loc_0019EE60: ;
    edx = 0; /* xor self */
    eax = eax | 0xFFFFFFFFu;

loc_0019EE65: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x3C6C48); PUSH32(esp, 0x0019EE75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EE75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019EE82; /* jne: not equal / not zero */

loc_0019EE7B: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EE82u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019EE82: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019EE89
 * Original: 0x0019EE89 - 0x0019EEB6 (45 bytes, 18 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019EE89(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EE89: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C48); PUSH32(esp, 0x0019EEA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EEA2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019EEAF; /* jne: not equal / not zero */

loc_0019EEA8: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EEAFu); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019EEAF: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0019EEB6
 * Original: 0x0019EEB6 - 0x0019EEBC (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EEB6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019EEB6: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6C4C)); return; /* indirect tail jmp */

}

/**
 * sub_0019EEBC
 * Original: 0x0019EEBC - 0x0019EEC2 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EEBC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019EEBC: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6C3C)); return; /* indirect tail jmp */

}

/**
 * sub_0019EEC2
 * Original: 0x0019EEC2 - 0x0019EEC8 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EEC2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019EEC2: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6C54)); return; /* indirect tail jmp */

}

/**
 * sub_0019EEC8
 * Original: 0x0019EEC8 - 0x0019EF00 (56 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EEC8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EEC8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x4615C0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x0019EED7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EED7: ;
    esi = MEM32(0x4615DC);
    edi = 0x4615DC;
    goto loc_0019EEEF;

loc_0019EEE4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = esi;
    esi = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0019EEEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EEEF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019EEE4; /* jne: not equal / not zero */

loc_0019EEF3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0019EEFAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EEFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019EF00
 * Original: 0x0019EF00 - 0x0019EF52 (82 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019EF00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EF00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x3C6C64));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C08); PUSH32(esp, 0x0019EF16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EF16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019EF46; /* jl: less (signed <) */

loc_0019EF1A: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019EF26; /* jne: not equal / not zero */

loc_0019EF22: ;
    PUSH32(esp, 0x10);
    goto loc_0019EF2D;

loc_0019EF26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF1u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019EF2E; /* jne: not equal / not zero */

loc_0019EF2B: ;
    PUSH32(esp, 0xFFFFFFF0u);

loc_0019EF2D: ;
    POP32(esp, eax);

loc_0019EF2E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C60); PUSH32(esp, 0x0019EF38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EF38: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6C04); PUSH32(esp, 0x0019EF41u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EF41: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019EF4E;

loc_0019EF46: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EF4Cu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019EF4C: ;
    eax = 0; /* xor self */

loc_0019EF4E: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019EF52
 * Original: 0x0019EF52 - 0x0019EFA6 (84 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019EF52(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EF52: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x3C6C64));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C08); PUSH32(esp, 0x0019EF68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EF68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019EF97; /* jl: less (signed <) */

loc_0019EF6C: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C68); PUSH32(esp, 0x0019EF76u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EF76: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019EF81; /* jne: not equal / not zero */

loc_0019EF7D: ;
    PUSH32(esp, 0xF);
    goto loc_0019EF88;

loc_0019EF81: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFF0u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019EF89; /* jne: not equal / not zero */

loc_0019EF86: ;
    PUSH32(esp, 0xFFFFFFF1u);

loc_0019EF88: ;
    POP32(esp, esi);

loc_0019EF89: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6C04); PUSH32(esp, 0x0019EF92u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EF92: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_0019EFA2;

loc_0019EF97: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EF9Du); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019EF9D: ;
    eax = 0x7FFFFFFF;

loc_0019EFA2: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019EFA6
 * Original: 0x0019EFA6 - 0x0019EFEC (70 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019EFA6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EFA6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x3C6C64));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C08); PUSH32(esp, 0x0019EFBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EFBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019EFE0; /* jl: less (signed <) */

loc_0019EFC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C6C); PUSH32(esp, 0x0019EFD2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EFD2: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6C04); PUSH32(esp, 0x0019EFDBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EFDB: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019EFE8;

loc_0019EFE0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019EFE6u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019EFE6: ;
    eax = 0; /* xor self */

loc_0019EFE8: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019EFEC
 * Original: 0x0019EFEC - 0x0019F012 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019EFEC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019EFEC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C70); PUSH32(esp, 0x0019EFFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019EFFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019F00B; /* jge: greater or equal (signed >=) */

loc_0019F000: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F006u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F006: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0019F00E;

loc_0019F00B: ;
    eax = MEM32(ebp + 8);

loc_0019F00E: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019F012
 * Original: 0x0019F012 - 0x0019F038 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F012(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F012: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C74); PUSH32(esp, 0x0019F022u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F022: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019F031; /* jge: greater or equal (signed >=) */

loc_0019F026: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F02Cu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F02C: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0019F034;

loc_0019F031: ;
    eax = MEM32(ebp + 8);

loc_0019F034: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019F038
 * Original: 0x0019F038 - 0x0019F08E (86 bytes, 34 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F038(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F038: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x50;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = eax & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp + -76) = eax;
    MEM32(ebp + -68) = 0x19F038;
    if (TEST_Z(_fa, _fb)) goto loc_0019F07B; /* je: equal / zero */

loc_0019F060: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019F06B; /* jbe: below or equal (unsigned <=) */

loc_0019F068: ;
    PUSH32(esp, 0xF);
    POP32(esp, ecx);

loc_0019F06B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(ebp + -64) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0019F07F; /* je: equal / zero */

loc_0019F072: ;
    PUSH32(esp, edi);
    edi = ebp + -60;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    goto loc_0019F07F;

loc_0019F07B: ;
    MEM32(ebp + -64) = MEM32(ebp + -64) & 0;

loc_0019F07F: ;
    eax = ebp + -80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C78); PUSH32(esp, 0x0019F089u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F089: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019F08E
 * Original: 0x0019F08E - 0x0019F0A1 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F08E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F08E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6C7C); PUSH32(esp, 0x0019F094u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F094: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000024) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000024 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0019F0A1
 * Original: 0x0019F0A1 - 0x0019F0B3 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F0A1(void)
{

loc_0019F0A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019F0A8u); RECOMP_ABI_CALL(0x0019EEC8u, sub_0019EEC8); /* call 0x0019EEC8 */

loc_0019F0A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x3C6C80); PUSH32(esp, 0x0019F0B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F0B2: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0019F0B3
 * Original: 0x0019F0B3 - 0x0019F0FF (76 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F0B3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F0B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x3C6C64));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C08); PUSH32(esp, 0x0019F0C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F0C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F0F3; /* jl: less (signed <) */

loc_0019F0CD: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F0DE; /* je: equal / zero */

loc_0019F0D6: ;
    eax = MEM32(ecx + 0x120);
    goto loc_0019F0E3;

loc_0019F0DE: ;
    eax = 0x103;

loc_0019F0E3: ;
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6C04); PUSH32(esp, 0x0019F0EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F0EE: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019F0FB;

loc_0019F0F3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F0F9u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F0F9: ;
    eax = 0; /* xor self */

loc_0019F0FB: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019F0FF
 * Original: 0x0019F0FF - 0x0019F111 (18 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F0FF(void)
{

loc_0019F0FF: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(0x5DD0E0);
    MEM32(0x5DD0E0) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019F111
 * Original: 0x0019F111 - 0x0019F15A (73 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F111(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F111: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = 0x4615C0;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x0019F11Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F11E: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F141; /* je: equal / zero */

loc_0019F125: ;
    ecx = MEM32(0x4615E0);
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x4615DC;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(0x4615E0) = eax;
    goto loc_0019F14F;

loc_0019F141: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;

loc_0019F14F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0019F156u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F156: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019F15A
 * Original: 0x0019F15A - 0x0019F196 (60 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0019F15A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F15A: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019F173; /* je: equal / zero */

loc_0019F16A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0019F171u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F171: ;
    goto loc_0019F175;

loc_0019F173: ;
    eax = 0; /* xor self */

loc_0019F175: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019F191; /* jne: not equal / not zero */

loc_0019F179: ;
    eax = MEM32(0x5DD0E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019F191; /* je: equal / zero */

loc_0019F182: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0019F188u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F188: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019F191; /* jne: not equal / not zero */

loc_0019F18D: ;
    eax = eax | eax;
    goto loc_0019F193;

loc_0019F191: ;
    eax = 0; /* xor self */

loc_0019F193: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019F196
 * Original: 0x0019F196 - 0x0019F22E (152 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F196(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019F196: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x3E1B48);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F1A2u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0019F1A2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x28);
    MEM32(ebp + -32) = eax;
    edx = MEM32(eax + 0x28);
    edx = edx + 4;
    MEM32(ebp + -36) = edx;
    MEM32(edx + -4) = edx;
    ebx = MEM32(0x3E1D84);
    esi = MEM32(0x3E1D80);
    ebx = ebx - esi;
    MEM32(ebp + -40) = ebx;
    ecx = ebx;
    edi = edx;
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
    ecx = MEM32(0x3E1D90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019F1FB; /* je: equal / zero */

loc_0019F1E8: ;
    eax = 0; /* xor self */
    edi = ebx + edx;
    edx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_0019F1FB: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F202u); RECOMP_ABI_CALL(0x0019EEC8u, sub_0019EEC8); /* call 0x0019EEC8 */

loc_0019F202: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x0019F208u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F208: ;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F212u); RECOMP_ABI_CALL(0x0019EEC8u, sub_0019EEC8); /* call 0x0019EEC8 */

loc_0019F212: ;
    goto loc_0019F220;

    PUSH32(esp, MEM32(ebp + -20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F21Cu); RECOMP_ABI_CALL(0x0019F15Au, sub_0019F15A); /* call 0x0019F15A */

loc_0019F21C: ;
    esp += 4; return; /* ret */

loc_0019F220: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -28));
    { uint32_t _icall_target = MEM32(0x3C6C80); PUSH32(esp, 0x0019F22Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F22D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0019F214
 * Original: 0x0019F214 - 0x0019F22E (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F214(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019F214: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0019F21Cu); RECOMP_ABI_CALL(0x0019F15Au, sub_0019F15A); /* call 0x0019F15A */

loc_0019F21C: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0019F21D
 * Original: 0x0019F21D - 0x0019F22E (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F21D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019F21D: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -28));
    { uint32_t _icall_target = MEM32(0x3C6C80); PUSH32(esp, 0x0019F22Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F22D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0019F22E
 * Original: 0x0019F22E - 0x0019F29C (110 bytes, 37 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F22E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F22E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019F23D; /* jne: not equal / not zero */

loc_0019F238: ;
    eax = MEM32(0x10130);

loc_0019F23D: ;
    ecx = MEM32(ebp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x19F196);
    PUSH32(esp, 0);
    ecx = ecx >> 2;
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(0x5DD0E4));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C84); PUSH32(esp, 0x0019F26Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F26D: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019F295; /* jge: greater or equal (signed >=) */

loc_0019F273: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019F295; /* jae: above or equal (unsigned >=) */

loc_0019F27F: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F295; /* je: equal / zero */

loc_0019F28B: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F291u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F291: ;
    eax = 0; /* xor self */
    goto loc_0019F298;

loc_0019F295: ;
    eax = MEM32(ebp + 0xC);

loc_0019F298: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0019F29C
 * Original: 0x0019F29C - 0x0019F2A9 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F29C(void)
{

loc_0019F29C: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);
    eax = MEM32(eax + 0x12C);
    esp += 4; return; /* ret */

}

/**
 * sub_0019F2A9
 * Original: 0x0019F2A9 - 0x0019F30A (97 bytes, 37 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F2A9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F2A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F2C7; /* je: equal / zero */

loc_0019F2B5: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F2C5u); RECOMP_ABI_CALL(0x001A34F7u, sub_001A34F7); /* call 0x001A34F7 */

loc_0019F2C5: ;
    goto loc_0019F2C9;

loc_0019F2C7: ;
    eax = 0; /* xor self */

loc_0019F2C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C88); PUSH32(esp, 0x0019F2E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F2E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F2FE; /* jl: less (signed <) */

loc_0019F2E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019F2F2; /* jne: not equal / not zero */

loc_0019F2EB: ;
    PUSH32(esp, 0xB7);
    goto loc_0019F2F4;

loc_0019F2F2: ;
    PUSH32(esp, 0);

loc_0019F2F4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F2F9u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019F2F9: ;
    eax = MEM32(ebp + 0x14);
    goto loc_0019F306;

loc_0019F2FE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F304u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F304: ;
    eax = 0; /* xor self */

loc_0019F306: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019F30A
 * Original: 0x0019F30A - 0x0019F32A (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0019F30A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F30A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C90); PUSH32(esp, 0x0019F316u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F316: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F31F; /* jl: less (signed <) */

loc_0019F31A: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019F327;

loc_0019F31F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019F325u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F325: ;
    eax = 0; /* xor self */

loc_0019F327: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019F32A
 * Original: 0x0019F32A - 0x0019F348 (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0019F32A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F32A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x3C6C94); PUSH32(esp, 0x0019F334u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F334: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F33D; /* jl: less (signed <) */

loc_0019F338: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019F345;

loc_0019F33D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019F343u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F343: ;
    eax = 0; /* xor self */

loc_0019F345: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019F348
 * Original: 0x0019F348 - 0x0019F3A3 (91 bytes, 34 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F348(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F348: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F366; /* je: equal / zero */

loc_0019F354: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F364u); RECOMP_ABI_CALL(0x001A34F7u, sub_001A34F7); /* call 0x001A34F7 */

loc_0019F364: ;
    goto loc_0019F368;

loc_0019F366: ;
    eax = 0; /* xor self */

loc_0019F368: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C98); PUSH32(esp, 0x0019F379u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F379: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F397; /* jl: less (signed <) */

loc_0019F37D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019F38B; /* jne: not equal / not zero */

loc_0019F384: ;
    PUSH32(esp, 0xB7);
    goto loc_0019F38D;

loc_0019F38B: ;
    PUSH32(esp, 0);

loc_0019F38D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F392u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019F392: ;
    eax = MEM32(ebp + 0x14);
    goto loc_0019F39F;

loc_0019F397: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F39Du); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F39D: ;
    eax = 0; /* xor self */

loc_0019F39F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019F3A3
 * Original: 0x0019F3A3 - 0x0019F3C9 (38 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0019F3A3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F3A3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(0x3C6C9C); PUSH32(esp, 0x0019F3B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F3B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F3BE; /* jl: less (signed <) */

loc_0019F3B9: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019F3C6;

loc_0019F3BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019F3C4u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F3C4: ;
    eax = 0; /* xor self */

loc_0019F3C6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019F3C9
 * Original: 0x0019F3C9 - 0x0019F421 (88 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F3C9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F3C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F3E7; /* je: equal / zero */

loc_0019F3D5: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F3E5u); RECOMP_ABI_CALL(0x001A34F7u, sub_001A34F7); /* call 0x001A34F7 */

loc_0019F3E5: ;
    goto loc_0019F3E9;

loc_0019F3E7: ;
    eax = 0; /* xor self */

loc_0019F3E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CA0); PUSH32(esp, 0x0019F3F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F3F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F415; /* jl: less (signed <) */

loc_0019F3FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019F409; /* jne: not equal / not zero */

loc_0019F402: ;
    PUSH32(esp, 0xB7);
    goto loc_0019F40B;

loc_0019F409: ;
    PUSH32(esp, 0);

loc_0019F40B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F410u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0019F410: ;
    eax = MEM32(ebp + 0x10);
    goto loc_0019F41D;

loc_0019F415: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F41Bu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F41B: ;
    eax = 0; /* xor self */

loc_0019F41D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019F421
 * Original: 0x0019F421 - 0x0019F441 (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0019F421(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F421: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(0x3C6CA4); PUSH32(esp, 0x0019F42Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F42D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F436; /* jl: less (signed <) */

loc_0019F431: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019F43E;

loc_0019F436: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019F43Cu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F43C: ;
    eax = 0; /* xor self */

loc_0019F43E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019F441
 * Original: 0x0019F441 - 0x0019F485 (68 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F441(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F441: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F453u); RECOMP_ABI_CALL(0x001A351Fu, sub_001A351F); /* call 0x001A351F */

loc_0019F453: ;
    esi = eax;

loc_0019F455: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6CA8); PUSH32(esp, 0x0019F464u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F464: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F477; /* jl: less (signed <) */

loc_0019F468: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F480; /* je: equal / zero */

loc_0019F46E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F455; /* je: equal / zero */

loc_0019F475: ;
    goto loc_0019F480;

loc_0019F477: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F47Du); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F47D: ;
    eax = eax | 0xFFFFFFFFu;

loc_0019F480: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019F485
 * Original: 0x0019F485 - 0x0019F505 (128 bytes, 48 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F485(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F485: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x108;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019F4A5; /* jbe: below or equal (unsigned <=) */

loc_0019F496: ;
    PUSH32(esp, 0xC000000Du);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F4A0u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F4A0: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0019F501;

loc_0019F4A5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    edi = ebp + -264;
    PUSH32(esp, eax);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F4BFu); RECOMP_ABI_CALL(0x001A351Fu, sub_001A351F); /* call 0x001A351F */

loc_0019F4BF: ;
    esi = (uint32_t)(int32_t)SMEM8(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    edi = eax;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_0019F4CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -264;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6CAC); PUSH32(esp, 0x0019F4E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F4E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F4F5; /* jl: less (signed <) */

loc_0019F4E6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F4FE; /* je: equal / zero */

loc_0019F4EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F4CD; /* je: equal / zero */

loc_0019F4F3: ;
    goto loc_0019F4FE;

loc_0019F4F5: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F4FBu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0019F4FB: ;
    eax = eax | 0xFFFFFFFFu;

loc_0019F4FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0019F501: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0019F505
 * Original: 0x0019F505 - 0x0019F557 (82 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F505(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F505: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F517u); RECOMP_ABI_CALL(0x001A351Fu, sub_001A351F); /* call 0x001A351F */

loc_0019F517: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019F52A; /* jne: not equal / not zero */

loc_0019F51D: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & eax;
    MEM32(ebp + -4) = 0x80000000u;
    esi = ebp + -8;

loc_0019F52A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(0x3C6CB0); PUSH32(esp, 0x0019F536u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F536: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F543; /* je: equal / zero */

loc_0019F53C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F52A; /* je: equal / zero */

loc_0019F543: ;
    ecx = 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0019F551; /* jne: not equal / not zero */

loc_0019F54D: ;
    eax = ecx;
    goto loc_0019F553;

loc_0019F551: ;
    eax = 0; /* xor self */

loc_0019F553: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019F557
 * Original: 0x0019F557 - 0x0019F569 (18 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F557(void)
{

loc_0019F557: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0019F566u); RECOMP_ABI_CALL(0x0019F441u, sub_0019F441); /* call 0x0019F441 */

loc_0019F566: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019F569
 * Original: 0x0019F569 - 0x0019F583 (26 bytes, 7 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F569(void)
{

loc_0019F569: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x0019F580u); RECOMP_ABI_CALL(0x0019F485u, sub_0019F485); /* call 0x0019F485 */

loc_0019F580: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019F583
 * Original: 0x0019F583 - 0x0019F591 (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F583(void)
{

loc_0019F583: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0019F58Eu); RECOMP_ABI_CALL(0x0019F505u, sub_0019F505); /* call 0x0019F505 */

loc_0019F58E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019F591
 * Original: 0x0019F591 - 0x0019F6B1 (288 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F591(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F591: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = eax + 0x4C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0019F6A4; /* jne: not equal / not zero */

loc_0019F5AD: ;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0019F5FD; /* je: equal / zero */

loc_0019F5B7: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F5FD; /* je: equal / zero */

loc_0019F5BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = 0x1000;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    edx = MEM32(ecx + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -12;
    edx = edx + ecx;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = edx;
    { uint32_t _icall_target = MEM32(0x3C6CB8); PUSH32(esp, 0x0019F5E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F5E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019F5EC; /* jge: greater or equal (signed >=) */

loc_0019F5E5: ;
    eax = 0; /* xor self */
    goto loc_0019F6AA;

loc_0019F5EC: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(eax + 8) = MEM32(eax + 8) + ecx;
    eax = MEM32(ebp + 8);
    goto loc_0019F681;

loc_0019F5FD: ;
    edi = MEM32(0x3C6CB8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2000);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = 0x10000;
    MEM32(ebp + 8) = ebx;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0019F61Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F61F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F5E5; /* jl: less (signed <) */

loc_0019F623: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = 0x1000;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0019F639u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F639: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019F652; /* jge: greater or equal (signed >=) */

loc_0019F63D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x0019F650u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F650: ;
    goto loc_0019F5E5;

loc_0019F652: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x48);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x48) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = eax + 0x10;
    MEM32(ebp + -12) = ecx;

loc_0019F681: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + -12);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x18);
    eax = eax + 0x4C;
    goto loc_0019F698;

loc_0019F691: ;
    MEM32(eax) = edx;
    eax = edx;
    edx = edx + 0x10;

loc_0019F698: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019F691; /* jb: below (unsigned <) */

loc_0019F69C: ;
    MEM32(eax) = ebx;
    ecx = MEM32(esi + 0x18);
    ecx = ecx + 0x4C;

loc_0019F6A4: ;
    eax = MEM32(ecx);
    edx = MEM32(eax);
    MEM32(ecx) = edx;

loc_0019F6AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019F6B1
 * Original: 0x0019F6B1 - 0x0019F6D2 (33 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F6B1(void)
{

loc_0019F6B1: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x4C);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(ecx + 0x4C) = eax;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019F6D2
 * Original: 0x0019F6D2 - 0x0019F765 (147 bytes, 63 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F6D2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F6D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    ebx = esi + 0x38;
    goto loc_0019F719;

loc_0019F6E3: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0019F74A; /* ja: above (unsigned >) */

loc_0019F6ED: ;
    ecx = MEM32(eax + 8);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019F717; /* jne: not equal / not zero */

loc_0019F6F7: ;
    edi = edi + MEM32(eax + 8);
    ecx = edx;
    MEM32(ebp + 0xC) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebx) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F70Au); RECOMP_ABI_CALL(0x0019F6B1u, sub_0019F6B1); /* call 0x0019F6B1 */

loc_0019F70A: ;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019F719; /* jbe: below or equal (unsigned <=) */

loc_0019F712: ;
    MEM32(esi + 0x1C) = edi;
    goto loc_0019F719;

loc_0019F717: ;
    ebx = eax;

loc_0019F719: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019F6E3; /* jne: not equal / not zero */

loc_0019F71F: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F725u); RECOMP_ABI_CALL(0x0019F591u, sub_0019F591); /* call 0x0019F591 */

loc_0019F725: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019F743; /* je: equal / zero */

loc_0019F729: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edi;
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    MEM32(ebx) = eax;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019F743; /* jb: below (unsigned <) */

loc_0019F740: ;
    MEM32(esi + 0x1C) = edi;

loc_0019F743: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0019F74A: ;
    edx = ecx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019F71F; /* jne: not equal / not zero */

loc_0019F752: ;
    MEM32(eax + 8) = MEM32(eax + 8) + edi;
    MEM32(eax + 4) = ecx;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019F743; /* jbe: below or equal (unsigned <=) */

loc_0019F760: ;
    MEM32(esi + 0x1C) = eax;
    goto loc_0019F743;

}

/**
 * sub_0019F765
 * Original: 0x0019F765 - 0x0019F8F0 (395 bytes, 149 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F765(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F765: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi + 0x38;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019F7A2; /* je: equal / zero */

loc_0019F780: ;
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x14);

loc_0019F788: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019F796; /* jb: below (unsigned <) */

loc_0019F78D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019F7AB; /* je: equal / zero */

loc_0019F791: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F7AB; /* je: equal / zero */

loc_0019F796: ;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = esi;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019F788; /* jne: not equal / not zero */

loc_0019F7A2: ;
    eax = 0; /* xor self */

loc_0019F7A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_0019F7AB: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ecx + 0x584);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019F7C8; /* je: equal / zero */

loc_0019F7BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    edx = ebp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0019F7C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F7C6: ;
    goto loc_0019F7DC;

loc_0019F7C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB8); PUSH32(esp, 0x0019F7DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F7DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019F7A2; /* jl: less (signed <) */

loc_0019F7E0: ;
    eax = MEM32(ebx);
    eax = eax >> 0xC;
    MEM32(edi + 0x30) = MEM32(edi + 0x30) - eax;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019F7F4; /* jne: not equal / not zero */

loc_0019F7F0: ;
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) & 0;

loc_0019F7F4: ;
    ebx = MEM32(edi + 0x40);
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 0x10 (8-bit) */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019F810; /* je: equal / zero */

loc_0019F803: ;
    ecx = ZX16(MEM16(ebx));
    ecx = ecx << 4;
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F857; /* je: equal / zero */

loc_0019F810: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019F81C; /* jne: not equal / not zero */

loc_0019F817: ;
    ebx = MEM32(edi + 0x28);
    goto loc_0019F825;

loc_0019F81C: ;
    ebx = MEM32(ecx + 8);
    ecx = MEM32(ebp + -4);
    ebx = ebx + MEM32(ecx + 4);

loc_0019F825: ;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019F857; /* jne: not equal / not zero */

loc_0019F82B: ;
    ecx = MEM32(edi + 0x2C);

loc_0019F82E: ;
    edx = ZX16(MEM16(ebx));
    edx = edx << 4;
    MEM32(ebp + 0x14) = ebx;
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019F84B; /* jae: above or equal (unsigned >=) */

loc_0019F83D: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F84B; /* je: equal / zero */

loc_0019F843: ;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019F82E; /* je: equal / zero */

loc_0019F849: ;
    goto loc_0019F857;

loc_0019F84B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019F7A2; /* jne: not equal / not zero */

loc_0019F854: ;
    ebx = MEM32(ebp + 0x14);

loc_0019F857: ;
    MEM8(ebx + 5) = MEM8(ebx + 5) & 0xEF;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    MEM32(esi + 4) = MEM32(esi + 4) + edx;
    edx = MEM32(ecx);
    MEM32(esi + 8) = MEM32(esi + 8) - edx;
    if ((MEM32(esi + 8) != 0)) goto loc_0019F89B; /* jne: not equal / not zero */

loc_0019F86A: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019F878; /* jne: not equal / not zero */

loc_0019F872: ;
    MEM8(eax + 5) = 0x10;
    goto loc_0019F87F;

loc_0019F878: ;
    MEM8(eax + 5) = 0;
    eax = MEM32(edi + 0x28);

loc_0019F87F: ;
    ecx = MEM32(ebp + -8);
    MEM32(edi + 0x40) = eax;
    eax = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019F890u); RECOMP_ABI_CALL(0x0019F6B1u, sub_0019F6B1); /* call 0x0019F6B1 */

loc_0019F890: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    goto loc_0019F8A2;

loc_0019F89B: ;
    MEM8(eax + 5) = 0x10;
    MEM32(edi + 0x40) = eax;

loc_0019F8A2: ;
    SET_LO8(edx, MEM8(ebx + 4));
    MEM8(eax + 4) = LO8(edx);
    ecx = MEM32(ecx);
    ecx = ecx >> 4;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 0x10 (8-bit) */
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebx));
    MEM16(eax + 2) = LO16(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0019F8CB; /* jne: not equal / not zero */

loc_0019F8BD: ;
    SET_LO16(ecx, MEM16(eax));
    edx = ZX16(LO16(ecx));
    edx = edx << 4;
    MEM16(edx + eax + 2) = LO16(ecx);

loc_0019F8CB: ;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019F7A4; /* jne: not equal / not zero */

loc_0019F8D5: ;
    ecx = MEM32(edi + 0x38);
    goto loc_0019F8E7;

loc_0019F8DA: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019F8E5; /* jb: below (unsigned <) */

loc_0019F8E2: ;
    MEM32(edi + 0x1C) = edx;

loc_0019F8E5: ;
    ecx = MEM32(ecx);

loc_0019F8E7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019F8DA; /* jne: not equal / not zero */

loc_0019F8EB: ;
    goto loc_0019F7A4;

}

/**
 * sub_0019F8F0
 * Original: 0x0019F8F0 - 0x0019F922 (50 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F8F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F8F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x14), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019F91C; /* jne: not equal / not zero */

loc_0019F8FD: ;
    eax = MEM32(eax + 0x20);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    MEM32(ebp + -4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x0019F91Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F91A: ;
    goto loc_0019F91E;

loc_0019F91C: ;
    eax = 0; /* xor self */

loc_0019F91E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019F922
 * Original: 0x0019F922 - 0x0019FBC7 (677 bytes, 230 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019F922(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019F922: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(edi + 2));
    eax = eax << 4;
    esi = edi;
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019FA7A; /* je: equal / zero */

loc_0019F941: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019FA7A; /* jne: not equal / not zero */

loc_0019F94B: ;
    ecx = ZX16(MEM16(esi));
    eax = MEM32(ebp + 0x10);
    ecx = ecx + MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF00 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0019FA7D; /* ja: above (unsigned >) */

loc_0019F95F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019F9D4; /* je: equal / zero */

loc_0019F965: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0019F999; /* jne: not equal / not zero */

loc_0019F974: ;
    SET_LO16(ecx, MEM16(edi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019F999; /* jae: above or equal (unsigned >=) */

loc_0019F97E: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_0019F999: ;
    SET_LO8(ecx, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019F9CA; /* je: equal / zero */

loc_0019F9A1: ;
    eax = ZX16(MEM16(edi));
    eax = eax << 4;
    eax = eax - 0x18;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019F9B7; /* je: equal / zero */

loc_0019F9AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019F9B7; /* jbe: below or equal (unsigned <=) */

loc_0019F9B4: ;
    eax = eax - 4;

loc_0019F9B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CBC); PUSH32(esp, 0x0019F9C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019F9C7: ;
    eax = MEM32(ebp + 0x10);

loc_0019F9CA: ;
    ecx = ZX16(MEM16(edi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    MEM8(ebp + 0x14) = 0;

loc_0019F9D4: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0019FA08; /* jne: not equal / not zero */

loc_0019F9E3: ;
    SET_LO16(ecx, MEM16(esi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019FA08; /* jae: above or equal (unsigned >=) */

loc_0019F9ED: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_0019FA08: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FA39; /* je: equal / zero */

loc_0019FA10: ;
    eax = ZX16(MEM16(esi));
    eax = eax << 4;
    eax = eax - 0x18;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FA26; /* je: equal / zero */

loc_0019FA1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019FA26; /* jbe: below or equal (unsigned <=) */

loc_0019FA23: ;
    eax = eax - 4;

loc_0019FA26: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CBC); PUSH32(esp, 0x0019FA36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019FA36: ;
    eax = MEM32(ebp + 0x10);

loc_0019FA39: ;
    SET_LO8(ecx, MEM8(edi + 5));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    MEM8(esi + 5) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0019FA52; /* je: equal / zero */

loc_0019FA47: ;
    ecx = ZX8(MEM8(esi + 4));
    ecx = MEM32(ebx + ecx * 4 + 0x60);
    MEM32(ecx + 0x40) = esi;

loc_0019FA52: ;
    ecx = ZX16(MEM16(esi));
    MEM32(eax) = MEM32(eax) + ecx;
    ecx = ZX16(MEM16(esi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    SET_LO16(ecx, MEM16(eax));
    edi = esi;
    MEM16(esi) = LO16(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0019FA7D; /* jne: not equal / not zero */

loc_0019FA6B: ;
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(eax));
    ecx = ecx << 4;
    MEM16(ecx + esi + 2) = LO16(edx);
    goto loc_0019FA7D;

loc_0019FA7A: ;
    eax = MEM32(ebp + 0x10);

loc_0019FA7D: ;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 5), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019FBBE; /* jne: not equal / not zero */

loc_0019FA87: ;
    ecx = MEM32(eax);
    esi = ecx;
    esi = esi << 4;
    esi = esi + edi;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019FBBE; /* jne: not equal / not zero */

loc_0019FA9A: ;
    edx = ZX16(MEM16(esi));
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF00 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0019FBBE; /* ja: above (unsigned >) */

loc_0019FAAB: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019FB1C; /* je: equal / zero */

loc_0019FAB1: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0019FAE5; /* jne: not equal / not zero */

loc_0019FAC0: ;
    SET_LO16(ecx, MEM16(edi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019FAE5; /* jae: above or equal (unsigned >=) */

loc_0019FACA: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_0019FAE5: ;
    SET_LO8(ecx, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FB16; /* je: equal / zero */

loc_0019FAED: ;
    eax = ZX16(MEM16(edi));
    eax = eax << 4;
    eax = eax - 0x18;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FB03; /* je: equal / zero */

loc_0019FAFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019FB03; /* jbe: below or equal (unsigned <=) */

loc_0019FB00: ;
    eax = eax - 4;

loc_0019FB03: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CBC); PUSH32(esp, 0x0019FB13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019FB13: ;
    eax = MEM32(ebp + 0x10);

loc_0019FB16: ;
    ecx = ZX16(MEM16(edi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;

loc_0019FB1C: ;
    SET_LO8(ecx, MEM8(esi + 5));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    MEM8(edi + 5) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0019FB35; /* je: equal / zero */

loc_0019FB2A: ;
    ecx = ZX8(MEM8(edi + 4));
    ecx = MEM32(ebx + ecx * 4 + 0x60);
    MEM32(ecx + 0x40) = edi;

loc_0019FB35: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0019FB69; /* jne: not equal / not zero */

loc_0019FB44: ;
    SET_LO16(ecx, MEM16(esi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019FB69; /* jae: above or equal (unsigned >=) */

loc_0019FB4E: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_0019FB69: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FB9A; /* je: equal / zero */

loc_0019FB71: ;
    eax = ZX16(MEM16(esi));
    eax = eax << 4;
    eax = eax - 0x18;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FB87; /* je: equal / zero */

loc_0019FB7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019FB87; /* jbe: below or equal (unsigned <=) */

loc_0019FB84: ;
    eax = eax - 4;

loc_0019FB87: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CBC); PUSH32(esp, 0x0019FB97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019FB97: ;
    eax = MEM32(ebp + 0x10);

loc_0019FB9A: ;
    ecx = ZX16(MEM16(esi));
    MEM32(eax) = MEM32(eax) + ecx;
    ecx = ZX16(MEM16(esi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 5), 0x10 (8-bit) */
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi) = LO16(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0019FBBE; /* jne: not equal / not zero */

loc_0019FBB1: ;
    ecx = MEM32(eax);
    SET_LO16(eax, MEM16(eax));
    ecx = ecx << 4;
    MEM16(ecx + edi + 2) = LO16(eax);

loc_0019FBBE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0019FBC7
 * Original: 0x0019FBC7 - 0x0019FCC1 (250 bytes, 87 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019FBC7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019FBC7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, MEM8(eax + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 2));
    ecx = ZX8(LO8(edx));
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + ecx * 4 + 0x60);
    MEM32(ebp + -8) = ecx;
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 0xF) = LO8(ecx);
    ecx = MEM32(ebp + 0x10);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(ebp + -1) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_0019FCB0; /* je: equal / zero */

loc_0019FBFD: ;
    goto loc_0019FC05;

loc_0019FBFF: ;
    SET_LO8(edx, MEM8(ebp + -1));
    ecx = MEM32(ebp + 0x10);

loc_0019FC05: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF00 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019FC23; /* jbe: below or equal (unsigned <=) */

loc_0019FC0D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF01) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF01 (32-bit) */
    ebx = 0xFF00;
    if (CMP_NE(_fa, _fb)) goto loc_0019FC1D; /* jne: not equal / not zero */

loc_0019FC1A: ;
    ebx = ebx + 0xFFFFFFF0u;

loc_0019FC1D: ;
    MEM8(eax + 5) = 0;
    goto loc_0019FC2B;

loc_0019FC23: ;
    ebx = ecx;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    MEM8(eax + 5) = LO8(ecx);

loc_0019FC2B: ;
    MEM8(eax + 5) = MEM8(eax + 5) & 0xF8;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x80 (16-bit) */
    MEM16(eax + 2) = LO16(esi);
    MEM8(eax + 4) = LO8(edx);
    MEM16(eax) = LO16(ebx);
    if (CMP_AE(_fa, _fb)) goto loc_0019FC6B; /* jae: above or equal (unsigned >=) */

loc_0019FC40: ;
    ecx = ZX16(LO16(ebx));
    esi = edi + ecx * 8 + 0x180;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019FC81; /* jne: not equal / not zero */

loc_0019FC4E: ;
    edx = ecx;
    edx = edx >> 3;
    edx = edx + edi + 0x160;
    MEM32(ebp + 8) = edx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    ecx = MEM32(ebp + 8);
    MEM8(ecx) = MEM8(ecx) | LO8(edx);
    goto loc_0019FC81;

loc_0019FC6B: ;
    ecx = edi + 0x180;
    esi = MEM32(ecx);
    goto loc_0019FC7D;

loc_0019FC75: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(esi + -8) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019FC81; /* jbe: below or equal (unsigned <=) */

loc_0019FC7B: ;
    esi = MEM32(esi);

loc_0019FC7D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019FC75; /* jne: not equal / not zero */

loc_0019FC81: ;
    edx = MEM32(esi + 4);
    ecx = eax + 8;
    MEM32(ecx) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(edx) = ecx;
    MEM32(esi + 4) = ecx;
    ecx = ZX16(LO16(ebx));
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - ecx;
    ecx = ecx << 4;
    eax = eax + ecx;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x2C) (32-bit) */
    esi = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_0019FCBA; /* jae: above or equal (unsigned >=) */

loc_0019FCA6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019FBFF; /* jne: not equal / not zero */

loc_0019FCB0: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xF), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019FCBA; /* jne: not equal / not zero */

loc_0019FCB6: ;
    MEM16(eax + 2) = LO16(esi);

loc_0019FCBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019FCC1
 * Original: 0x0019FCC1 - 0x0019FCDD (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019FCC1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019FCC1: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FCD0; /* je: equal / zero */

loc_0019FCCB: ;
    eax = eax + 0xFFFFFFE8u;
    goto loc_0019FCDA;

loc_0019FCD0: ;
    ecx = ZX16(MEM16(eax));
    ecx = ecx << 4;
    eax = ecx + eax + -16;

loc_0019FCDA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019FCDD
 * Original: 0x0019FCDD - 0x0019FD6C (143 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019FCDD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019FCDD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FD65; /* je: equal / zero */

loc_0019FCE9: ;
    PUSH32(esp, ebx);
    ebx = edi + 0x58;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    goto loc_0019FD0E;

loc_0019FCF2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    MEM32(ebp + -4) = esi;
    esi = MEM32(esi);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x0019FD0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019FD0E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019FCF2; /* jne: not equal / not zero */

loc_0019FD12: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019FD1F; /* jne: not equal / not zero */

loc_0019FD18: ;
    MEM32(edi + 0x580) = MEM32(edi + 0x580) & 0;

loc_0019FD1F: ;
    esi = MEM32(edi + 0x48);
    MEM32(edi + 0x48) = MEM32(edi + 0x48) & 0;
    goto loc_0019FD44;

loc_0019FD28: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    MEM32(ebp + -4) = esi;
    esi = MEM32(esi);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x0019FD44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019FD44: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019FD28; /* jne: not equal / not zero */

loc_0019FD48: ;
    PUSH32(esp, 0x40);
    edi = edi + 0x160;
    POP32(esp, esi);

loc_0019FD51: ;
    edi = edi - 4;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FD60; /* je: equal / zero */

loc_0019FD5A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019FD60u); RECOMP_ABI_CALL(0x0019F8F0u, sub_0019F8F0); /* call 0x0019F8F0 */

loc_0019FD60: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019FD51; /* jne: not equal / not zero */

loc_0019FD63: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0019FD65: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019FD6C
 * Original: 0x0019FD6C - 0x001A016A (1022 bytes, 354 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0019FD6C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019FD6C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x1C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019FD85; /* jbe: below or equal (unsigned <=) */

loc_0019FD7E: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001A0165;

loc_0019FD85: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(edi));
    SET_LO8(ecx, MEM8(edi + 5));
    esi = eax;
    esi = esi << 4;
    esi = esi + edi;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    MEM8(ebp + -2) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0019FE06; /* je: equal / zero */

loc_0019FD9F: ;
    edx = edx - eax;
    PUSH32(esp, esi);
    edx = edx << 4;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(edi + 4));
    edx = edx + 0xFFF;
    edx = edx & 0xFFFFF000u;
    MEM32(ebp + -8) = edx;
    PUSH32(esp, MEM32(ebx + eax * 4 + 0x60));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019FDC6u); RECOMP_ABI_CALL(0x0019F765u, sub_0019F765); /* call 0x0019F765 */

loc_0019FDC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FE1D; /* je: equal / zero */

loc_0019FDCA: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 4;
    PUSH32(esp, 0);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019FDDBu); RECOMP_ABI_CALL(0x0019F922u, sub_0019F922); /* call 0x0019F922 */

loc_0019FDDB: ;
    edx = ZX16(MEM16(edi));
    esi = MEM32(ebp + -8);
    SET_LO8(ecx, MEM8(eax + 5));
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019FDFB; /* jae: above or equal (unsigned >=) */

loc_0019FDEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019FDF3u); RECOMP_ABI_CALL(0x0019FBC7u, sub_0019FBC7); /* call 0x0019FBC7 */

loc_0019FDF3: ;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    goto loc_0019FE1D;

loc_0019FDFB: ;
    MEM32(ebp + -8) = edx;
    edx = MEM32(ebp + 0x18);
    goto loc_0019FE96;

loc_0019FE06: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM8(ebp + 0xB) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0019FE1D; /* jne: not equal / not zero */

loc_0019FE11: ;
    ecx = ZX16(MEM16(esi));
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0019FE24; /* jae: above or equal (unsigned >=) */

loc_0019FE1D: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001A0163;

loc_0019FE24: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0019FE5C; /* jne: not equal / not zero */

loc_0019FE33: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019FE5C; /* jae: above or equal (unsigned >=) */

loc_0019FE3C: ;
    ecx = ZX16(LO16(eax));
    eax = ecx;
    eax = eax >> 3;
    eax = eax + ebx + 0x160;
    MEM32(ebp + -12) = eax;
    ecx = ecx & 7;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -12);
    MEM8(eax) = MEM8(eax) ^ LO8(ecx);

loc_0019FE5C: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FE8D; /* je: equal / zero */

loc_0019FE64: ;
    eax = ZX16(MEM16(esi));
    eax = eax << 4;
    eax = eax - 0x18;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FE7A; /* je: equal / zero */

loc_0019FE72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019FE7A; /* jbe: below or equal (unsigned <=) */

loc_0019FE77: ;
    eax = eax - 4;

loc_0019FE7A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CBC); PUSH32(esp, 0x0019FE8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019FE8A: ;
    edx = MEM32(ebp + 0x18);

loc_0019FE8D: ;
    eax = ZX16(MEM16(esi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - eax;
    SET_LO8(ecx, MEM8(ebp + 0xB));

loc_0019FE96: ;
    eax = ZX16(MEM16(edi));
    esi = ZX8(MEM8(edi + 6));
    MEM32(ebp + -8) = MEM32(ebp + -8) - edx;
    eax = eax << 4;
    eax = eax - esi;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0019FEB5; /* ja: above (unsigned >) */

loc_0019FEAE: ;
    edx = edx + MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;

loc_0019FEB5: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019FED5; /* je: equal / zero */

loc_0019FEBB: ;
    eax = ZX16(MEM16(edi));
    eax = eax << 4;
    esi = eax + edi + -16;
    eax = edx;
    eax = eax << 4;
    edi = eax + edi + -16;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MEM32(ebp + 0x10);

loc_0019FED5: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) - MEM8(ebp + 0x14));
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    MEM16(edi) = LO16(edx);
    MEM8(edi + 6) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0019FF16; /* jne: not equal / not zero */

loc_0019FEE9: ;
    SET_LO8(ecx, LO8(ecx) & 0x10);
    MEM8(edi + 5) = MEM8(edi + 5) | LO8(ecx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM8(ebp + 0x1B) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0019FF06; /* jne: not equal / not zero */

loc_0019FEF6: ;
    eax = ZX16(LO16(edx));
    eax = eax << 4;
    MEM16(eax + edi + 2) = LO16(edx);
    goto loc_001A0124;

loc_0019FF06: ;
    eax = ZX8(MEM8(edi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(eax + 0x40) = edi;
    goto loc_001A0124;

loc_0019FF16: ;
    esi = edx;
    esi = esi << 4;
    esi = esi + edi;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    MEM16(esi + 2) = LO16(edx);
    SET_LO8(eax, MEM8(edi + 4));
    MEM8(esi + 4) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0019FFB5; /* je: equal / zero */

loc_0019FF30: ;
    eax = ZX8(LO8(eax));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(eax + 0x40) = esi;
    MEM8(esi + 5) = LO8(ecx);
    SET_LO16(eax, MEM16(ebp + -8));
    SET_LO8(ecx, LO8(ecx) & 0xF8);
    MEM16(esi) = LO16(eax);
    MEM8(esi + 5) = LO8(ecx);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019FF84; /* jae: above or equal (unsigned >=) */

loc_0019FF54: ;
    eax = ZX16(LO16(ecx));
    edx = ebx + eax * 8 + 0x180;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019FF9A; /* jne: not equal / not zero */

loc_0019FF62: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    eax = eax + ebx + 0x160;
    MEM32(ebp + 8) = eax;
    ecx = ecx & 7;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 8);
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    goto loc_0019FF9A;

loc_0019FF84: ;
    eax = ebx + 0x180;
    edx = MEM32(eax);
    goto loc_0019FF96;

loc_0019FF8E: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edx + -8) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019FF9A; /* jbe: below or equal (unsigned <=) */

loc_0019FF94: ;
    edx = MEM32(edx);

loc_0019FF96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019FF8E; /* jne: not equal / not zero */

loc_0019FF9A: ;
    ecx = MEM32(edx + 4);
    eax = esi + 8;
    MEM32(eax) = edx;
    MEM32(esi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(edx + 4) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    goto loc_001A0124;

loc_0019FFB5: ;
    edi = MEM32(ebp + -8);
    edi = edi << 4;
    edi = edi + esi;
    SET_LO8(eax, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A003A; /* je: equal / zero */

loc_0019FFC4: ;
    SET_LO8(ecx, LO8(ecx) & 0xEF);
    MEM8(esi + 5) = LO8(ecx);
    SET_LO16(eax, MEM16(ebp + -8));
    MEM16(esi) = LO16(eax);
    eax = MEM32(ebp + -8);
    ecx = eax;
    ecx = ecx << 4;
    MEM16(ecx + esi + 2) = LO16(eax);
    MEM8(esi + 5) = MEM8(esi + 5) & 0xF8;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A001B; /* jae: above or equal (unsigned >=) */

loc_0019FFEC: ;
    eax = ZX16(LO16(ecx));
    edi = ebx + eax * 8 + 0x180;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0101; /* jne: not equal / not zero */

loc_0019FFFE: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) | LO8(edx);
    goto loc_001A0101;

loc_001A001B: ;
    eax = ebx + 0x180;
    edi = MEM32(eax);
    goto loc_001A0031;

loc_001A0025: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edi + -8) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A0101; /* jbe: below or equal (unsigned <=) */

loc_001A002F: ;
    edi = MEM32(edi);

loc_001A0031: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0025; /* jne: not equal / not zero */

loc_001A0035: ;
    goto loc_001A0101;

loc_001A003A: ;
    ecx = MEM32(edi + 0xC);
    MEM8(ebp + 0xB) = LO8(eax);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001A006D; /* jne: not equal / not zero */

loc_001A004C: ;
    SET_LO16(eax, MEM16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A006D; /* jae: above or equal (unsigned >=) */

loc_001A0055: ;
    ecx = ZX16(LO16(eax));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);

loc_001A006D: ;
    SET_LO8(ecx, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A009B; /* je: equal / zero */

loc_001A0075: ;
    eax = ZX16(MEM16(edi));
    eax = eax << 4;
    eax = eax - 0x18;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A008B; /* je: equal / zero */

loc_001A0083: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A008B; /* jbe: below or equal (unsigned <=) */

loc_001A0088: ;
    eax = eax - 4;

loc_001A008B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CBC); PUSH32(esp, 0x001A009Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A009B: ;
    eax = ZX16(MEM16(edi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - eax;
    eax = ZX16(MEM16(edi));
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    SET_LO8(ecx, MEM8(ebp + 0xB));
    MEM8(esi + 5) = LO8(ecx);
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF00 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A0119; /* ja: above (unsigned >) */

loc_001A00B7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    MEM16(esi) = LO16(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_001A00CE; /* jne: not equal / not zero */

loc_001A00BF: ;
    eax = MEM32(ebp + -8);
    ecx = eax;
    ecx = ecx << 4;
    MEM16(ecx + esi + 2) = LO16(eax);
    goto loc_001A00D9;

loc_001A00CE: ;
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(eax + 0x40) = esi;

loc_001A00D9: ;
    MEM8(esi + 5) = MEM8(esi + 5) & 0xF8;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019FFEC; /* jb: below (unsigned <) */

loc_001A00EB: ;
    eax = ebx + 0x180;
    edi = MEM32(eax);
    goto loc_001A00FD;

loc_001A00F5: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edi + -8) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A0101; /* jbe: below or equal (unsigned <=) */

loc_001A00FB: ;
    edi = MEM32(edi);

loc_001A00FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A00F5; /* jne: not equal / not zero */

loc_001A0101: ;
    ecx = MEM32(edi + 4);
    eax = esi + 8;
    MEM32(eax) = edi;
    MEM32(esi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    goto loc_001A0121;

loc_001A0119: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0121u); RECOMP_ABI_CALL(0x0019FBC7u, sub_0019FBC7); /* call 0x0019FBC7 */

loc_001A0121: ;
    edi = MEM32(ebp + 0x10);

loc_001A0124: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A014F; /* je: equal / zero */

loc_001A012C: ;
    esi = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A014F; /* jbe: below or equal (unsigned <=) */

loc_001A0136: ;
    ecx = ecx - esi;
    edi = esi + edi + 0x10;
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(ebp + 0x10);

loc_001A014F: ;
    eax = edx;
    eax = eax >> 4;
    SET_LO8(eax, LO8(eax) ^ MEM8(edi + 5));
    edx = edx >> 4;
    SET_LO8(eax, LO8(eax) & 0x1F);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(edi + 5) = LO8(eax);
    SET_LO8(eax, 1);

loc_001A0163: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A0165: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0019FF80
 * Original: 0x0019FF80 - 0x001A016A (490 bytes, 169 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019FF80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019FF80: ;
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    goto loc_0019FF9A;

    eax = ebx + 0x180;
    edx = MEM32(eax);
    goto loc_0019FF96;

loc_0019FF8E: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edx + -8) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019FF9A; /* jbe: below or equal (unsigned <=) */

loc_0019FF94: ;
    edx = MEM32(edx);

loc_0019FF96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019FF8E; /* jne: not equal / not zero */

loc_0019FF9A: ;
    ecx = MEM32(edx + 4);
    eax = esi + 8;
    MEM32(eax) = edx;
    MEM32(esi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(edx + 4) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    goto loc_001A0124;

    edi = MEM32(ebp + -8);
    edi = edi << 4;
    edi = edi + esi;
    SET_LO8(eax, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A003A; /* je: equal / zero */

loc_0019FFC4: ;
    SET_LO8(ecx, LO8(ecx) & 0xEF);
    MEM8(esi + 5) = LO8(ecx);
    SET_LO16(eax, MEM16(ebp + -8));
    MEM16(esi) = LO16(eax);
    eax = MEM32(ebp + -8);
    ecx = eax;
    ecx = ecx << 4;
    MEM16(ecx + esi + 2) = LO16(eax);
    MEM8(esi + 5) = MEM8(esi + 5) & 0xF8;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A001B; /* jae: above or equal (unsigned >=) */

loc_0019FFEC: ;
    eax = ZX16(LO16(ecx));
    edi = ebx + eax * 8 + 0x180;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0101; /* jne: not equal / not zero */

loc_0019FFFE: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) | LO8(edx);
    goto loc_001A0101;

loc_001A001B: ;
    eax = ebx + 0x180;
    edi = MEM32(eax);
    goto loc_001A0031;

loc_001A0025: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edi + -8) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A0101; /* jbe: below or equal (unsigned <=) */

loc_001A002F: ;
    edi = MEM32(edi);

loc_001A0031: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0025; /* jne: not equal / not zero */

loc_001A0035: ;
    goto loc_001A0101;

loc_001A003A: ;
    ecx = MEM32(edi + 0xC);
    MEM8(ebp + 0xB) = LO8(eax);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001A006D; /* jne: not equal / not zero */

loc_001A004C: ;
    SET_LO16(eax, MEM16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A006D; /* jae: above or equal (unsigned >=) */

loc_001A0055: ;
    ecx = ZX16(LO16(eax));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);

loc_001A006D: ;
    SET_LO8(ecx, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A009B; /* je: equal / zero */

loc_001A0075: ;
    eax = ZX16(MEM16(edi));
    eax = eax << 4;
    eax = eax - 0x18;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A008B; /* je: equal / zero */

loc_001A0083: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A008B; /* jbe: below or equal (unsigned <=) */

loc_001A0088: ;
    eax = eax - 4;

loc_001A008B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CBC); PUSH32(esp, 0x001A009Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A009B: ;
    eax = ZX16(MEM16(edi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - eax;
    eax = ZX16(MEM16(edi));
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    SET_LO8(ecx, MEM8(ebp + 0xB));
    MEM8(esi + 5) = LO8(ecx);
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF00 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A0119; /* ja: above (unsigned >) */

loc_001A00B7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    MEM16(esi) = LO16(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_001A00CE; /* jne: not equal / not zero */

loc_001A00BF: ;
    eax = MEM32(ebp + -8);
    ecx = eax;
    ecx = ecx << 4;
    MEM16(ecx + esi + 2) = LO16(eax);
    goto loc_001A00D9;

loc_001A00CE: ;
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(eax + 0x40) = esi;

loc_001A00D9: ;
    MEM8(esi + 5) = MEM8(esi + 5) & 0xF8;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019FFEC; /* jb: below (unsigned <) */

loc_001A00EB: ;
    eax = ebx + 0x180;
    edi = MEM32(eax);
    goto loc_001A00FD;

loc_001A00F5: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edi + -8) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A0101; /* jbe: below or equal (unsigned <=) */

loc_001A00FB: ;
    edi = MEM32(edi);

loc_001A00FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A00F5; /* jne: not equal / not zero */

loc_001A0101: ;
    ecx = MEM32(edi + 4);
    eax = esi + 8;
    MEM32(eax) = edi;
    MEM32(esi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    goto loc_001A0121;

loc_001A0119: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001A0121u); RECOMP_ABI_CALL(0x0019FBC7u, sub_0019FBC7); /* call 0x0019FBC7 */

loc_001A0121: ;
    edi = MEM32(ebp + 0x10);

loc_001A0124: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A014F; /* je: equal / zero */

loc_001A012C: ;
    esi = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A014F; /* jbe: below or equal (unsigned <=) */

loc_001A0136: ;
    ecx = ecx - esi;
    edi = esi + edi + 0x10;
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(ebp + 0x10);

loc_001A014F: ;
    eax = edx;
    eax = eax >> 4;
    SET_LO8(eax, LO8(eax) ^ MEM8(edi + 5));
    edx = edx >> 4;
    SET_LO8(eax, LO8(eax) & 0x1F);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(edi + 5) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001A016A
 * Original: 0x001A016A - 0x001A0199 (47 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A016A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A016A: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ecx + -11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A017A; /* jne: not equal / not zero */

loc_001A0175: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_001A0196;

loc_001A017A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0189; /* je: equal / zero */

loc_001A017E: ;
    edx = ZX16(MEM16(ecx + -16));
    eax = MEM32(ecx + -24);
    eax = eax - edx;
    goto loc_001A0196;

loc_001A0189: ;
    eax = ZX16(MEM16(ecx + -16));
    ecx = ZX8(MEM8(ecx + -10));
    eax = eax << 4;
    eax = eax - ecx;

loc_001A0196: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A0199
 * Original: 0x001A0199 - 0x001A02B7 (286 bytes, 107 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A0199(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A0199: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0x20);
    eax = eax - MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x1000;
    ecx = ebx;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0x57;
    edi = edi & 0xFFFFFFF0u;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A01CF; /* jne: not equal / not zero */

loc_001A01C6: ;
    SET_LO16(eax, MEM16(eax));
    MEM16(ebp + -4) = LO16(eax);
    goto loc_001A01D3;

loc_001A01CF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_001A01D3: ;
    ecx = MEM32(ebp + 0x1C);
    eax = edi;
    eax = eax - esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    MEM32(ebp + -12) = eax;
    eax = edi + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A021D; /* jb: below (unsigned <) */

loc_001A01E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A020D; /* jae: above or equal (unsigned >=) */

loc_001A01EC: ;
    eax = edi;
    eax = eax - ecx;
    eax = eax + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ebx);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB8); PUSH32(esp, 0x001A0209u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0209: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A0214; /* jge: greater or equal (signed >=) */

loc_001A020D: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001A02B0;

loc_001A0214: ;
    ecx = MEM32(ebp + 0x1C);
    ecx = ecx + MEM32(ebp + 0xC);
    MEM32(ebp + 0x1C) = ecx;

loc_001A021D: ;
    eax = MEM32(ebp + 0x20);
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x1000;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    SET_LO16(edx, MEM16(ebp + -4));
    SET_LO8(ebx, MEM8(ebp + 0x10));
    MEM16(esi + 2) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + -12));
    MEM16(esi) = LO16(edx);
    edx = MEM32(ebp + 0x14);
    MEM32(esi + 0x14) = edx;
    edx = MEM32(ebp + 8);
    MEM32(esi + 0x18) = edx;
    edx = MEM32(ebp + 0x18);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(ebp + -8);
    edx = edx << 0xC;
    edx = edx + MEM32(ebp + 0x18);
    MEM8(esi + 5) = 1;
    MEM32(esi + 0x2C) = edx;
    edx = MEM32(ebp + -8);
    MEM8(esi + 4) = LO8(ebx);
    MEM32(esi + 0x10) = 0xFFEEFFEEu;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x24) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x30) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001A0286; /* je: equal / zero */

loc_001A0278: ;
    eax = eax << 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0283u); RECOMP_ABI_CALL(0x0019F6D2u, sub_0019F6D2); /* call 0x0019F6D2 */

loc_001A0283: ;
    ecx = MEM32(ebp + 0x1C);

loc_001A0286: ;
    edx = MEM32(ebp + 8);
    eax = ZX8(LO8(ebx));
    ecx = ecx - edi;
    MEM32(edx + eax * 4 + 0x60) = esi;
    SET_LO16(eax, MEM16(esi));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM8(edi + 5) = 0x10;
    MEM32(esi + 0x40) = edi;
    PUSH32(esp, edx);
    MEM16(edi + 2) = LO16(eax);
    MEM8(edi + 4) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A02AEu); RECOMP_ABI_CALL(0x0019FBC7u, sub_0019FBC7); /* call 0x0019FBC7 */

loc_001A02AE: ;
    SET_LO8(eax, 1);

loc_001A02B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001A02B7
 * Original: 0x001A02B7 - 0x001A043E (391 bytes, 150 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A02B7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A02B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ebx + 0xFFF;
    esi = esi >> 0xC;
    eax = esi;
    eax = eax << 0xC;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    MEM8(ebp + -12) = 0x40;
    MEM8(ebp + 0xF) = 0;

loc_001A02DF: ;
    ecx = ZX8(MEM8(ebp + 0xF));
    ecx = MEM32(edi + ecx * 4 + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001A0312; /* je: equal / zero */

loc_001A02EE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x30) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A031E; /* ja: above (unsigned >) */

loc_001A02F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x1C) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A031E; /* ja: above (unsigned >) */

loc_001A02F8: ;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0305u); RECOMP_ABI_CALL(0x0019F765u, sub_0019F765); /* call 0x0019F765 */

loc_001A0305: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A0401; /* jne: not equal / not zero */

loc_001A030D: ;
    eax = MEM32(ebp + -8);
    goto loc_001A031E;

loc_001A0312: ;
    _fa = (uint32_t)(MEM8(ebp + -12)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -12), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A031E; /* jne: not equal / not zero */

loc_001A0318: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    MEM8(ebp + -12) = LO8(ecx);

loc_001A031E: ;
    MEM8(ebp + 0xF) = MEM8(ebp + 0xF) + 1;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xF), 0x40 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A02DF; /* jb: below (unsigned <) */

loc_001A0327: ;
    _fa = (uint32_t)(MEM8(ebp + -12)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -12), 0x40 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0435; /* je: equal / zero */

loc_001A0331: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0435; /* je: equal / zero */

loc_001A033B: ;
    ecx = MEM32(edi + 0x20);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebx + 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 8) = eax;
    if (CMP_A(_fa, _fb)) goto loc_001A0355; /* ja: above (unsigned >) */

loc_001A0352: ;
    MEM32(ebp + 8) = ecx;

loc_001A0355: ;
    esi = MEM32(0x3C6CB8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ebx = 0x2000;
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A036Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A036F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A03A1; /* jge: greater or equal (signed >=) */

loc_001A0373: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0399; /* je: equal / zero */

loc_001A037B: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) >> 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A0386; /* jae: above or equal (unsigned >=) */

loc_001A0383: ;
    MEM32(ebp + 8) = ecx;

loc_001A0386: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A0395u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0395: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A0373; /* jl: less (signed <) */

loc_001A0399: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A0435; /* jl: less (signed <) */

loc_001A03A1: ;
    eax = MEM32(ebp + 8);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) + eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + -16) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_001A03B7; /* ja: above (unsigned >) */

loc_001A03B4: ;
    MEM32(ebp + -16) = eax;

loc_001A03B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A03CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A03CA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A0422; /* jl: less (signed <) */

loc_001A03D0: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -16);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A03ECu); RECOMP_ABI_CALL(0x001A0199u, sub_001A0199); /* call 0x001A0199 */

loc_001A03EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A03F5; /* jne: not equal / not zero */

loc_001A03F0: ;
    esi = 0xC0000017u;

loc_001A03F5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A0422; /* jl: less (signed <) */

loc_001A03F9: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x28);
    goto loc_001A0437;

loc_001A0401: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 4;
    PUSH32(esp, 0);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0412u); RECOMP_ABI_CALL(0x0019F922u, sub_0019F922); /* call 0x0019F922 */

loc_001A0412: ;
    PUSH32(esp, MEM32(ebp + -8));
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A041Eu); RECOMP_ABI_CALL(0x0019FBC7u, sub_0019FBC7); /* call 0x0019FBC7 */

loc_001A041E: ;
    eax = esi;
    goto loc_001A0437;

loc_001A0422: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x001A0435u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0435: ;
    eax = 0; /* xor self */

loc_001A0437: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A043E
 * Original: 0x001A043E - 0x001A06E8 (682 bytes, 225 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A043E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A043E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebx + 0x584)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x584), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0462; /* je: equal / zero */

loc_001A0451: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A045Du); RECOMP_ABI_CALL(0x0019FBC7u, sub_0019FBC7); /* call 0x0019FBC7 */

loc_001A045D: ;
    goto loc_001A06E3;

loc_001A0462: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(ebp + 8) = eax;
    eax = esi + 0xFFF;
    edx = 0xFFFFF000u;
    eax = eax & edx;
    ecx = eax;
    ecx = ecx - esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001A04A7; /* jne: not equal / not zero */

loc_001A0496: ;
    eax = eax + 0x1000;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0x101;
    goto loc_001A04C3;

loc_001A04A7: ;
    SET_LO16(ecx, MEM16(esi + 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A04C3; /* je: equal / zero */

loc_001A04B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A04C3; /* jne: not equal / not zero */

loc_001A04B4: ;
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 4;
    edi = ecx;
    ecx = esi;
    ecx = ecx - edi;
    MEM32(ebp + -16) = ecx;

loc_001A04C3: ;
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    edi = edi << 4;
    edi = edi + esi;
    ecx = edi;
    ecx = ecx & edx;
    MEM32(ebp + 0xC) = ecx;
    ecx = edi;
    ecx = ecx - MEM32(ebp + 0xC);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001A04FA; /* jne: not equal / not zero */

loc_001A04E7: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 0x1000;
    MEM32(ebp + -12) = 0x101;
    ecx = MEM32(ebp + -12);
    goto loc_001A0508;

loc_001A04FA: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A0508; /* jne: not equal / not zero */

loc_001A04FF: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A0508; /* jne: not equal / not zero */

loc_001A0505: ;
    MEM32(ebp + -24) = edi;

loc_001A0508: ;
    ecx = ZX16(LO16(ecx));
    MEM32(ebp + -20) = ecx;
    ecx = ecx << 4;
    edi = edi - ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    MEM32(ebp + -36) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001A0520; /* jbe: below or equal (unsigned <=) */

loc_001A051B: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - eax;
    goto loc_001A0524;

loc_001A0520: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;

loc_001A0524: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A06D7; /* je: equal / zero */

loc_001A052E: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0536u); RECOMP_ABI_CALL(0x0019F591u, sub_0019F591); /* call 0x0019F591 */

loc_001A0536: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -28) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001A06D7; /* je: equal / zero */

loc_001A0541: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4000);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x001A0554u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0554: ;
    PUSH32(esp, MEM32(ebp + -28));
    MEM32(ebp + -32) = eax;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0562u); RECOMP_ABI_CALL(0x0019F6B1u, sub_0019F6B1); /* call 0x0019F6B1 */

loc_001A0562: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A06D7; /* jl: less (signed <) */

loc_001A056C: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A057Au); RECOMP_ABI_CALL(0x0019F6D2u, sub_0019F6D2); /* call 0x0019F6D2 */

loc_001A057A: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = eax >> 0xC;
    MEM32(edx + 0x30) = MEM32(edx + 0x30) + eax;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0621; /* je: equal / zero */

loc_001A0592: ;
    eax = ZX16(LO16(ecx));
    MEM8(esi + 5) = 0x10;
    MEM16(esi) = LO16(ecx);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    MEM32(edx + 0x40) = esi;
    MEM8(esi + 5) = MEM8(esi + 5) & 0xF8;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A05DD; /* jae: above or equal (unsigned >=) */

loc_001A05AD: ;
    eax = ebx + eax * 8 + 0x180;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001A0603; /* jne: not equal / not zero */

loc_001A05BB: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    eax = eax + ebx + 0x160;
    MEM32(ebp + -32) = eax;
    ecx = ecx & 7;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -32);
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    goto loc_001A0600;

loc_001A05DD: ;
    ecx = ebx + 0x180;
    eax = MEM32(ecx);
    goto loc_001A05F9;

loc_001A05E7: ;
    SET_LO16(ecx, MEM16(ebp + -8));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + -8) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A05FD; /* jbe: below or equal (unsigned <=) */

loc_001A05F1: ;
    eax = MEM32(eax);
    ecx = ebx + 0x180;

loc_001A05F9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A05E7; /* jne: not equal / not zero */

loc_001A05FD: ;
    MEM32(ebp + 8) = eax;

loc_001A0600: ;
    eax = MEM32(ebp + 8);

loc_001A0603: ;
    ecx = MEM32(eax + 4);
    MEM32(ebp + 0x10) = ecx;
    ecx = esi + 8;
    MEM32(ecx) = eax;
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0xC) = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ecx) = esi;
    MEM32(eax + 4) = esi;
    goto loc_001A0647;

loc_001A0621: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A062E; /* je: equal / zero */

loc_001A0628: ;
    MEM8(eax + 5) = MEM8(eax + 5) | 0x10;
    goto loc_001A0644;

loc_001A062E: ;
    eax = MEM32(edx + 0x40);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A0647; /* jb: below (unsigned <) */

loc_001A0638: ;
    esi = MEM32(ebp + 0xC);
    esi = esi + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A0647; /* jae: above or equal (unsigned >=) */

loc_001A0641: ;
    eax = MEM32(edx + 0x28);

loc_001A0644: ;
    MEM32(edx + 0x40) = eax;

loc_001A0647: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A06C9; /* je: equal / zero */

loc_001A064F: ;
    MEM16(edi + 2) = MEM16(edi + 2) & 0;
    SET_LO8(ecx, MEM8(edx + 4));
    MEM8(edi + 4) = LO8(ecx);
    ecx = MEM32(ebp + -36);
    MEM8(edi + 5) = 0;
    MEM16(edi) = LO16(eax);
    MEM16(ecx + edi + 2) = LO16(eax);
    MEM8(edi + 5) = MEM8(edi + 5) & 0xF8;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A069B; /* jae: above or equal (unsigned >=) */

loc_001A0673: ;
    eax = MEM32(ebp + -20);
    esi = ebx + eax * 8 + 0x180;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A06B1; /* jne: not equal / not zero */

loc_001A0681: ;
    ecx = ZX16(MEM16(edi));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) | LO8(edx);
    goto loc_001A06B1;

loc_001A069B: ;
    ecx = ebx + 0x180;
    esi = MEM32(ecx);
    goto loc_001A06AD;

loc_001A06A5: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + -8) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A06B1; /* jbe: below or equal (unsigned <=) */

loc_001A06AB: ;
    esi = MEM32(esi);

loc_001A06AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A06A5; /* jne: not equal / not zero */

loc_001A06B1: ;
    ecx = MEM32(esi + 4);
    eax = edi + 8;
    MEM32(eax) = esi;
    MEM32(edi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    goto loc_001A06E1;

loc_001A06C9: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A06E1; /* je: equal / zero */

loc_001A06D0: ;
    MEM16(eax + 2) = MEM16(eax + 2) & 0;
    goto loc_001A06E1;

loc_001A06D7: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A06E1u); RECOMP_ABI_CALL(0x0019FBC7u, sub_0019FBC7); /* call 0x0019FBC7 */

loc_001A06E1: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A06E3: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A06E8
 * Original: 0x001A06E8 - 0x001A0B0C (1060 bytes, 331 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A06E8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A06E8: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x3E1B58);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A06F4u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A06F4: ;
    esi = 0; /* xor self */
    MEM32(ebp + -28) = esi;
    ebx = 0; /* xor self */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -120;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A074B; /* je: equal / zero */

loc_001A070C: ;
    MEM32(ebp + -4) = esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x30 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0723; /* jne: not equal / not zero */

loc_001A0714: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    eax = ebp + -120;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0720u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_001A0720: ;
    esp = esp + 0xC;

loc_001A0723: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_001A0743;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    MEM32(ebp + -44) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_001A0743: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A0A93; /* jl: less (signed <) */

loc_001A074B: ;
    _fa = (uint32_t)(MEM8(0x5DD0DE)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x5DD0DE), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0758; /* je: equal / zero */

loc_001A0754: ;
    MEM8(ebp + 8) = MEM8(ebp + 8) | 0x80;

loc_001A0758: ;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0765; /* jne: not equal / not zero */

loc_001A075D: ;
    eax = MEM32(0x4615E4);
    MEM32(ebp + -116) = eax;

loc_001A0765: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0772; /* jne: not equal / not zero */

loc_001A076A: ;
    eax = MEM32(0x4615E8);
    MEM32(ebp + -112) = eax;

loc_001A0772: ;
    _fa = (uint32_t)(MEM32(ebp + -108)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -108), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A077F; /* jne: not equal / not zero */

loc_001A0777: ;
    eax = MEM32(0x4615F0);
    MEM32(ebp + -108) = eax;

loc_001A077F: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A078C; /* jne: not equal / not zero */

loc_001A0784: ;
    eax = MEM32(0x4615EC);
    MEM32(ebp + -104) = eax;

loc_001A078C: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0798; /* jne: not equal / not zero */

loc_001A0791: ;
    MEM32(ebp + -100) = 0x7FFDEFFF;

loc_001A0798: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A07A6; /* je: equal / zero */

loc_001A079D: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0xFF000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A07AD; /* jbe: below or equal (unsigned <=) */

loc_001A07A6: ;
    MEM32(ebp + -96) = 0xFF000;

loc_001A07AD: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A07DA; /* jne: not equal / not zero */

loc_001A07B4: ;
    MEM32(ebp + 0x14) = 0x1000;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A07CB; /* jne: not equal / not zero */

loc_001A07C2: ;
    MEM32(ebp + 0x10) = 0x40000;
    goto loc_001A0807;

loc_001A07CB: ;
    eax = eax + 0xFFF;
    eax = eax & 0xFFFFF000u;

loc_001A07D5: ;
    MEM32(ebp + 0x10) = eax;
    goto loc_001A0807;

loc_001A07DA: ;
    eax = eax + 0xFFF;
    ecx = 0xFFFFF000u;
    eax = eax & ecx;
    MEM32(ebp + 0x14) = eax;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A07FC; /* jne: not equal / not zero */

loc_001A07F0: ;
    eax = eax + 0xFFFF;
    eax = eax & 0xFFFF0000u;
    goto loc_001A07D5;

loc_001A07FC: ;
    edx = edx + 0xFFF;
    edx = edx & ecx;
    MEM32(ebp + 0x10) = edx;

loc_001A0807: ;
    MEM32(ebp + -36) = 0x590;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A082C; /* jne: not equal / not zero */

loc_001A0814: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A081F; /* je: equal / zero */

loc_001A0819: ;
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) | 0x80;
    goto loc_001A0835;

loc_001A081F: ;
    MEM32(ebp + -36) = 0x5AC;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) | 0xFFFFFFFFu;
    goto loc_001A0835;

loc_001A082C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A0835: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A090A; /* je: equal / zero */

loc_001A0840: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0880; /* je: equal / zero */

loc_001A0845: ;
    ebx = MEM32(ebp + -92);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0A93; /* je: equal / zero */

loc_001A0850: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0A93; /* je: equal / zero */

loc_001A085B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A0A93; /* ja: above (unsigned >) */

loc_001A0863: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A086D: ;
    MEM32(ebp + -32) = edi;
    ebx = ebx + edi;
    MEM32(ebp + 0x10) = eax;
    ecx = 0x400;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_001A08FB;

loc_001A0880: ;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(0x3C6CC4);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A088Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A088F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A0A93; /* jl: less (signed <) */

loc_001A0897: ;
    edi = MEM32(ebp + -72);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A08A3: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0A93; /* je: equal / zero */

loc_001A08B0: ;
    MEM32(ebp + -32) = edi;
    eax = 0x1000;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A08F6; /* jne: not equal / not zero */

loc_001A08BD: ;
    ecx = 0x400;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -60);
    MEM32(ebp + 0x14) = eax;
    ecx = MEM32(ebp + -32);
    ebx = eax + ecx;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A08D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A08D9: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A08FB; /* jl: less (signed <) */

loc_001A08E3: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x2000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A08FB; /* jne: not equal / not zero */

loc_001A08EC: ;
    eax = MEM32(ebp + -60);
    eax = eax + ecx;
    MEM32(ebp + 0x10) = eax;
    goto loc_001A08FB;

loc_001A08F6: ;
    MEM32(ebp + 0x14) = eax;
    ebx = edi;

loc_001A08FB: ;
    MEM32(ebp + -40) = 1;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = eax;
    goto loc_001A0946;

loc_001A090A: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A0913: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB8); PUSH32(esp, 0x001A0929u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0929: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A0A93; /* jl: less (signed <) */

loc_001A0931: ;
    MEM32(ebp + -40) = esi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0940; /* jne: not equal / not zero */

loc_001A0939: ;
    MEM32(ebp + 0x14) = 0x1000;

loc_001A0940: ;
    ebx = MEM32(ebp + -28);
    MEM32(ebp + -32) = ebx;

loc_001A0946: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A098B; /* jne: not equal / not zero */

loc_001A094B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -32;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB8); PUSH32(esp, 0x001A0962u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0962: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A0988; /* jge: greater or equal (signed >=) */

loc_001A0966: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A0970: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x001A0983u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0983: ;
    goto loc_001A0A93;

loc_001A0988: ;
    ebx = ebx + MEM32(ebp + 0x14);

loc_001A098B: ;
    edx = MEM32(ebp + -28);
    eax = edx + 0x597;
    eax = eax & 0xFFFFFFF8u;
    esi = MEM32(ebp + -36);
    edi = 0x80;
    esi = esi + edi;
    edx = edx + 0x4C;
    PUSH32(esp, 8);
    POP32(esp, ecx);

loc_001A09A7: ;
    MEM32(edx) = eax;
    edx = eax;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A09A7; /* jne: not equal / not zero */

loc_001A09B1: ;
    ecx = eax;
    MEM32(edx) = MEM32(edx) & 0;
    _fa = (uint32_t)(MEM8(0x5DD0DD)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x5DD0DD), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A09E0; /* je: equal / zero */

loc_001A09BF: ;
    eax = eax + 7;
    eax = eax & 0xFFFFFFF8u;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x17C) = eax;
    eax = 0x60C;
    esi = esi + eax;
    ecx = MEM32(ebp + -28);
    ecx = MEM32(ecx + 0x17C);
    ecx = ecx + eax;

loc_001A09E0: ;
    esi = esi + 0xF;
    esi = esi & 0xFFFFFFF0u;
    eax = esi;
    eax = eax >> 4;
    edx = MEM32(ebp + -28);
    MEM16(edx) = LO16(eax);
    eax = MEM32(ebp + -28);
    MEM8(eax + 5) = 1;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x10) = 0xEEFFEEFFu;
    edx = MEM32(ebp + -28);
    eax = MEM32(ebp + 8);
    MEM32(edx + 0x14) = eax;
    eax = eax & 0x6001007D;
    edx = MEM32(ebp + -28);
    MEM32(edx + 0x18) = eax;
    eax = MEM32(ebp + -28);
    MEM16(eax + 0x170) = MEM16(eax + 0x170) | 0xFFFF;
    edx = ecx;
    eax = MEM32(ebp + -28);
    edx = edx - eax;
    MEM16(eax + 0x3A) = LO16(edx);
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) & 0;
    eax = MEM32(ebp + -28);
    eax = eax + 0x180;

loc_001A0A3C: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = eax + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A0A3C; /* jne: not equal / not zero */

loc_001A0A47: ;
    eax = MEM32(ebp + -28);
    edx = eax + 0x58;
    MEM32(eax + 0x5C) = edx;
    eax = MEM32(ebp + -28);
    edx = MEM32(eax + 0x5C);
    MEM32(eax + 0x58) = edx;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A6A; /* jne: not equal / not zero */

loc_001A0A61: ;
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x3C6CC0); PUSH32(esp, 0x001A0A6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0A6A: ;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x580) = edi;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0);
    eax = MEM32(ebp + -28);
    esi = esi + eax;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0A8Fu); RECOMP_ABI_CALL(0x001A0199u, sub_001A0199); /* call 0x001A0199 */

loc_001A0A8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A0A97; /* jne: not equal / not zero */

loc_001A0A93: ;
    eax = 0; /* xor self */
    goto loc_001A0B04;

loc_001A0A97: ;
    eax = MEM32(ebp + -28);
    MEM16(eax + 0x38) = MEM16(eax + 0x38) & 0;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -116);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -112);
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + -108);
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(ebp + -104);
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -100);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + -96);
    eax = eax + 0xF;
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -84);
    MEM32(eax + 0x584) = ecx;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x50) = 0x1F;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x54) = 0xFFFFFFF0u;
    eax = MEM32(ebp + -28);

loc_001A0B04: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0B09u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A0B09: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001A0729
 * Original: 0x001A0729 - 0x001A0B0C (995 bytes, 306 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0729(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A0729: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    MEM32(ebp + -44) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    _fa = (uint32_t)(MEM8(0x5DD0DE)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x5DD0DE), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0758; /* je: equal / zero */

loc_001A0754: ;
    MEM8(ebp + 8) = MEM8(ebp + 8) | 0x80;

loc_001A0758: ;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0765; /* jne: not equal / not zero */

loc_001A075D: ;
    eax = MEM32(0x4615E4);
    MEM32(ebp + -116) = eax;

loc_001A0765: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0772; /* jne: not equal / not zero */

loc_001A076A: ;
    eax = MEM32(0x4615E8);
    MEM32(ebp + -112) = eax;

loc_001A0772: ;
    _fa = (uint32_t)(MEM32(ebp + -108)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -108), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A077F; /* jne: not equal / not zero */

loc_001A0777: ;
    eax = MEM32(0x4615F0);
    MEM32(ebp + -108) = eax;

loc_001A077F: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A078C; /* jne: not equal / not zero */

loc_001A0784: ;
    eax = MEM32(0x4615EC);
    MEM32(ebp + -104) = eax;

loc_001A078C: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0798; /* jne: not equal / not zero */

loc_001A0791: ;
    MEM32(ebp + -100) = 0x7FFDEFFF;

loc_001A0798: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A07A6; /* je: equal / zero */

loc_001A079D: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0xFF000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A07AD; /* jbe: below or equal (unsigned <=) */

loc_001A07A6: ;
    MEM32(ebp + -96) = 0xFF000;

loc_001A07AD: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A07DA; /* jne: not equal / not zero */

loc_001A07B4: ;
    MEM32(ebp + 0x14) = 0x1000;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A07CB; /* jne: not equal / not zero */

loc_001A07C2: ;
    MEM32(ebp + 0x10) = 0x40000;
    goto loc_001A0807;

loc_001A07CB: ;
    eax = eax + 0xFFF;
    eax = eax & 0xFFFFF000u;

loc_001A07D5: ;
    MEM32(ebp + 0x10) = eax;
    goto loc_001A0807;

loc_001A07DA: ;
    eax = eax + 0xFFF;
    ecx = 0xFFFFF000u;
    eax = eax & ecx;
    MEM32(ebp + 0x14) = eax;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A07FC; /* jne: not equal / not zero */

loc_001A07F0: ;
    eax = eax + 0xFFFF;
    eax = eax & 0xFFFF0000u;
    goto loc_001A07D5;

loc_001A07FC: ;
    edx = edx + 0xFFF;
    edx = edx & ecx;
    MEM32(ebp + 0x10) = edx;

loc_001A0807: ;
    MEM32(ebp + -36) = 0x590;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A082C; /* jne: not equal / not zero */

loc_001A0814: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A081F; /* je: equal / zero */

loc_001A0819: ;
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) | 0x80;
    goto loc_001A0835;

loc_001A081F: ;
    MEM32(ebp + -36) = 0x5AC;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) | 0xFFFFFFFFu;
    goto loc_001A0835;

loc_001A082C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A0835: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A090A; /* je: equal / zero */

loc_001A0840: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0880; /* je: equal / zero */

loc_001A0845: ;
    ebx = MEM32(ebp + -92);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0A93; /* je: equal / zero */

loc_001A0850: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0A93; /* je: equal / zero */

loc_001A085B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A0A93; /* ja: above (unsigned >) */

loc_001A0863: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A086D: ;
    MEM32(ebp + -32) = edi;
    ebx = ebx + edi;
    MEM32(ebp + 0x10) = eax;
    ecx = 0x400;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_001A08FB;

loc_001A0880: ;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(0x3C6CC4);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A088Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A088F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A0A93; /* jl: less (signed <) */

loc_001A0897: ;
    edi = MEM32(ebp + -72);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A08A3: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0A93; /* je: equal / zero */

loc_001A08B0: ;
    MEM32(ebp + -32) = edi;
    eax = 0x1000;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A08F6; /* jne: not equal / not zero */

loc_001A08BD: ;
    ecx = 0x400;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -60);
    MEM32(ebp + 0x14) = eax;
    ecx = MEM32(ebp + -32);
    ebx = eax + ecx;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A08D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A08D9: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A08FB; /* jl: less (signed <) */

loc_001A08E3: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x2000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A08FB; /* jne: not equal / not zero */

loc_001A08EC: ;
    eax = MEM32(ebp + -60);
    eax = eax + ecx;
    MEM32(ebp + 0x10) = eax;
    goto loc_001A08FB;

loc_001A08F6: ;
    MEM32(ebp + 0x14) = eax;
    ebx = edi;

loc_001A08FB: ;
    MEM32(ebp + -40) = 1;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = eax;
    goto loc_001A0946;

loc_001A090A: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A0913: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB8); PUSH32(esp, 0x001A0929u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0929: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A0A93; /* jl: less (signed <) */

loc_001A0931: ;
    MEM32(ebp + -40) = esi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0940; /* jne: not equal / not zero */

loc_001A0939: ;
    MEM32(ebp + 0x14) = 0x1000;

loc_001A0940: ;
    ebx = MEM32(ebp + -28);
    MEM32(ebp + -32) = ebx;

loc_001A0946: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A098B; /* jne: not equal / not zero */

loc_001A094B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -32;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB8); PUSH32(esp, 0x001A0962u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0962: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A0988; /* jge: greater or equal (signed >=) */

loc_001A0966: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A0970: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x001A0983u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0983: ;
    goto loc_001A0A93;

loc_001A0988: ;
    ebx = ebx + MEM32(ebp + 0x14);

loc_001A098B: ;
    edx = MEM32(ebp + -28);
    eax = edx + 0x597;
    eax = eax & 0xFFFFFFF8u;
    esi = MEM32(ebp + -36);
    edi = 0x80;
    esi = esi + edi;
    edx = edx + 0x4C;
    PUSH32(esp, 8);
    POP32(esp, ecx);

loc_001A09A7: ;
    MEM32(edx) = eax;
    edx = eax;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A09A7; /* jne: not equal / not zero */

loc_001A09B1: ;
    ecx = eax;
    MEM32(edx) = MEM32(edx) & 0;
    _fa = (uint32_t)(MEM8(0x5DD0DD)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x5DD0DD), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A09E0; /* je: equal / zero */

loc_001A09BF: ;
    eax = eax + 7;
    eax = eax & 0xFFFFFFF8u;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x17C) = eax;
    eax = 0x60C;
    esi = esi + eax;
    ecx = MEM32(ebp + -28);
    ecx = MEM32(ecx + 0x17C);
    ecx = ecx + eax;

loc_001A09E0: ;
    esi = esi + 0xF;
    esi = esi & 0xFFFFFFF0u;
    eax = esi;
    eax = eax >> 4;
    edx = MEM32(ebp + -28);
    MEM16(edx) = LO16(eax);
    eax = MEM32(ebp + -28);
    MEM8(eax + 5) = 1;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x10) = 0xEEFFEEFFu;
    edx = MEM32(ebp + -28);
    eax = MEM32(ebp + 8);
    MEM32(edx + 0x14) = eax;
    eax = eax & 0x6001007D;
    edx = MEM32(ebp + -28);
    MEM32(edx + 0x18) = eax;
    eax = MEM32(ebp + -28);
    MEM16(eax + 0x170) = MEM16(eax + 0x170) | 0xFFFF;
    edx = ecx;
    eax = MEM32(ebp + -28);
    edx = edx - eax;
    MEM16(eax + 0x3A) = LO16(edx);
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) & 0;
    eax = MEM32(ebp + -28);
    eax = eax + 0x180;

loc_001A0A3C: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = eax + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A0A3C; /* jne: not equal / not zero */

loc_001A0A47: ;
    eax = MEM32(ebp + -28);
    edx = eax + 0x58;
    MEM32(eax + 0x5C) = edx;
    eax = MEM32(ebp + -28);
    edx = MEM32(eax + 0x5C);
    MEM32(eax + 0x58) = edx;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A6A; /* jne: not equal / not zero */

loc_001A0A61: ;
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x3C6CC0); PUSH32(esp, 0x001A0A6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0A6A: ;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x580) = edi;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0);
    eax = MEM32(ebp + -28);
    esi = esi + eax;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A0A8Fu); RECOMP_ABI_CALL(0x001A0199u, sub_001A0199); /* call 0x001A0199 */

loc_001A0A8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A0A97; /* jne: not equal / not zero */

loc_001A0A93: ;
    eax = 0; /* xor self */
    goto loc_001A0B04;

loc_001A0A97: ;
    eax = MEM32(ebp + -28);
    MEM16(eax + 0x38) = MEM16(eax + 0x38) & 0;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -116);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -112);
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + -108);
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(ebp + -104);
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -100);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + -96);
    eax = eax + 0xF;
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -84);
    MEM32(eax + 0x584) = ecx;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x50) = 0x1F;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x54) = 0xFFFFFFF0u;
    eax = MEM32(ebp + -28);

loc_001A0B04: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x001A0B09u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A0B09: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001A0737
 * Original: 0x001A0737 - 0x001A0B0C (981 bytes, 299 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0737(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A0737: ;
    esp = MEM32(ebp + -24);
    ebx = MEM32(ebp + -44);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A0A93; /* jl: less (signed <) */

loc_001A074B: ;
    _fa = (uint32_t)(MEM8(0x5DD0DE)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x5DD0DE), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0758; /* je: equal / zero */

loc_001A0754: ;
    MEM8(ebp + 8) = MEM8(ebp + 8) | 0x80;

loc_001A0758: ;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0765; /* jne: not equal / not zero */

loc_001A075D: ;
    eax = MEM32(0x4615E4);
    MEM32(ebp + -116) = eax;

loc_001A0765: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0772; /* jne: not equal / not zero */

loc_001A076A: ;
    eax = MEM32(0x4615E8);
    MEM32(ebp + -112) = eax;

loc_001A0772: ;
    _fa = (uint32_t)(MEM32(ebp + -108)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -108), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A077F; /* jne: not equal / not zero */

loc_001A0777: ;
    eax = MEM32(0x4615F0);
    MEM32(ebp + -108) = eax;

loc_001A077F: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A078C; /* jne: not equal / not zero */

loc_001A0784: ;
    eax = MEM32(0x4615EC);
    MEM32(ebp + -104) = eax;

loc_001A078C: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0798; /* jne: not equal / not zero */

loc_001A0791: ;
    MEM32(ebp + -100) = 0x7FFDEFFF;

loc_001A0798: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A07A6; /* je: equal / zero */

loc_001A079D: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0xFF000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A07AD; /* jbe: below or equal (unsigned <=) */

loc_001A07A6: ;
    MEM32(ebp + -96) = 0xFF000;

loc_001A07AD: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A07DA; /* jne: not equal / not zero */

loc_001A07B4: ;
    MEM32(ebp + 0x14) = 0x1000;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A07CB; /* jne: not equal / not zero */

loc_001A07C2: ;
    MEM32(ebp + 0x10) = 0x40000;
    goto loc_001A0807;

loc_001A07CB: ;
    eax = eax + 0xFFF;
    eax = eax & 0xFFFFF000u;

loc_001A07D5: ;
    MEM32(ebp + 0x10) = eax;
    goto loc_001A0807;

loc_001A07DA: ;
    eax = eax + 0xFFF;
    ecx = 0xFFFFF000u;
    eax = eax & ecx;
    MEM32(ebp + 0x14) = eax;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A07FC; /* jne: not equal / not zero */

loc_001A07F0: ;
    eax = eax + 0xFFFF;
    eax = eax & 0xFFFF0000u;
    goto loc_001A07D5;

loc_001A07FC: ;
    edx = edx + 0xFFF;
    edx = edx & ecx;
    MEM32(ebp + 0x10) = edx;

loc_001A0807: ;
    MEM32(ebp + -36) = 0x590;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A082C; /* jne: not equal / not zero */

loc_001A0814: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A081F; /* je: equal / zero */

loc_001A0819: ;
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) | 0x80;
    goto loc_001A0835;

loc_001A081F: ;
    MEM32(ebp + -36) = 0x5AC;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) | 0xFFFFFFFFu;
    goto loc_001A0835;

loc_001A082C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A0835: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A090A; /* je: equal / zero */

loc_001A0840: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0880; /* je: equal / zero */

loc_001A0845: ;
    ebx = MEM32(ebp + -92);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0A93; /* je: equal / zero */

loc_001A0850: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0A93; /* je: equal / zero */

loc_001A085B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A0A93; /* ja: above (unsigned >) */

loc_001A0863: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A086D: ;
    MEM32(ebp + -32) = edi;
    ebx = ebx + edi;
    MEM32(ebp + 0x10) = eax;
    ecx = 0x400;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_001A08FB;

loc_001A0880: ;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(0x3C6CC4);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A088Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A088F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A0A93; /* jl: less (signed <) */

loc_001A0897: ;
    edi = MEM32(ebp + -72);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A08A3: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0A93; /* je: equal / zero */

loc_001A08B0: ;
    MEM32(ebp + -32) = edi;
    eax = 0x1000;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A08F6; /* jne: not equal / not zero */

loc_001A08BD: ;
    ecx = 0x400;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -60);
    MEM32(ebp + 0x14) = eax;
    ecx = MEM32(ebp + -32);
    ebx = eax + ecx;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A08D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A08D9: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A08FB; /* jl: less (signed <) */

loc_001A08E3: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x2000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A08FB; /* jne: not equal / not zero */

loc_001A08EC: ;
    eax = MEM32(ebp + -60);
    eax = eax + ecx;
    MEM32(ebp + 0x10) = eax;
    goto loc_001A08FB;

loc_001A08F6: ;
    MEM32(ebp + 0x14) = eax;
    ebx = edi;

loc_001A08FB: ;
    MEM32(ebp + -40) = 1;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = eax;
    goto loc_001A0946;

loc_001A090A: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A0913: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB8); PUSH32(esp, 0x001A0929u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0929: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A0A93; /* jl: less (signed <) */

loc_001A0931: ;
    MEM32(ebp + -40) = esi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0940; /* jne: not equal / not zero */

loc_001A0939: ;
    MEM32(ebp + 0x14) = 0x1000;

loc_001A0940: ;
    ebx = MEM32(ebp + -28);
    MEM32(ebp + -32) = ebx;

loc_001A0946: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A098B; /* jne: not equal / not zero */

loc_001A094B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -32;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB8); PUSH32(esp, 0x001A0962u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0962: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A0988; /* jge: greater or equal (signed >=) */

loc_001A0966: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A93; /* jne: not equal / not zero */

loc_001A0970: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x001A0983u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0983: ;
    goto loc_001A0A93;

loc_001A0988: ;
    ebx = ebx + MEM32(ebp + 0x14);

loc_001A098B: ;
    edx = MEM32(ebp + -28);
    eax = edx + 0x597;
    eax = eax & 0xFFFFFFF8u;
    esi = MEM32(ebp + -36);
    edi = 0x80;
    esi = esi + edi;
    edx = edx + 0x4C;
    PUSH32(esp, 8);
    POP32(esp, ecx);

loc_001A09A7: ;
    MEM32(edx) = eax;
    edx = eax;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A09A7; /* jne: not equal / not zero */

loc_001A09B1: ;
    ecx = eax;
    MEM32(edx) = MEM32(edx) & 0;
    _fa = (uint32_t)(MEM8(0x5DD0DD)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x5DD0DD), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A09E0; /* je: equal / zero */

loc_001A09BF: ;
    eax = eax + 7;
    eax = eax & 0xFFFFFFF8u;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x17C) = eax;
    eax = 0x60C;
    esi = esi + eax;
    ecx = MEM32(ebp + -28);
    ecx = MEM32(ecx + 0x17C);
    ecx = ecx + eax;

loc_001A09E0: ;
    esi = esi + 0xF;
    esi = esi & 0xFFFFFFF0u;
    eax = esi;
    eax = eax >> 4;
    edx = MEM32(ebp + -28);
    MEM16(edx) = LO16(eax);
    eax = MEM32(ebp + -28);
    MEM8(eax + 5) = 1;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x10) = 0xEEFFEEFFu;
    edx = MEM32(ebp + -28);
    eax = MEM32(ebp + 8);
    MEM32(edx + 0x14) = eax;
    eax = eax & 0x6001007D;
    edx = MEM32(ebp + -28);
    MEM32(edx + 0x18) = eax;
    eax = MEM32(ebp + -28);
    MEM16(eax + 0x170) = MEM16(eax + 0x170) | 0xFFFF;
    edx = ecx;
    eax = MEM32(ebp + -28);
    edx = edx - eax;
    MEM16(eax + 0x3A) = LO16(edx);
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) & 0;
    eax = MEM32(ebp + -28);
    eax = eax + 0x180;

loc_001A0A3C: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = eax + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A0A3C; /* jne: not equal / not zero */

loc_001A0A47: ;
    eax = MEM32(ebp + -28);
    edx = eax + 0x58;
    MEM32(eax + 0x5C) = edx;
    eax = MEM32(ebp + -28);
    edx = MEM32(eax + 0x5C);
    MEM32(eax + 0x58) = edx;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0A6A; /* jne: not equal / not zero */

loc_001A0A61: ;
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x3C6CC0); PUSH32(esp, 0x001A0A6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0A6A: ;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x580) = edi;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0);
    eax = MEM32(ebp + -28);
    esi = esi + eax;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A0A8Fu); RECOMP_ABI_CALL(0x001A0199u, sub_001A0199); /* call 0x001A0199 */

loc_001A0A8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A0A97; /* jne: not equal / not zero */

loc_001A0A93: ;
    eax = 0; /* xor self */
    goto loc_001A0B04;

loc_001A0A97: ;
    eax = MEM32(ebp + -28);
    MEM16(eax + 0x38) = MEM16(eax + 0x38) & 0;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -116);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -112);
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + -108);
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(ebp + -104);
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -100);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + -96);
    eax = eax + 0xF;
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -84);
    MEM32(eax + 0x584) = ecx;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x50) = 0x1F;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x54) = 0xFFFFFFF0u;
    eax = MEM32(ebp + -28);

loc_001A0B04: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x001A0B09u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A0B09: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001A0B0C
 * Original: 0x001A0B0C - 0x001A126B (1887 bytes, 563 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0B0C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A0B0C: ;
    PUSH32(esp, 0x180);
    PUSH32(esp, 0x3E1B68);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0B1Bu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A0B1B: ;
    esi = MEM32(ebp + 8);
    ebx = esi;
    MEM32(ebp + -136) = ebx;
    MEM8(ebp + -26) = 0;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx | MEM32(esi + 0x18);
    MEM32(ebp + 0xC) = ecx;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A0B3B; /* jne: not equal / not zero */

loc_001A0B3A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A0B3B: ;
    eax = eax + 0x1F;
    eax = eax & 0xFFFFFFF0u;
    MEM32(ebp + -32) = eax;
    edi = eax;
    edi = edi >> 4;
    MEM32(ebp + -40) = edi;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A0B65; /* jne: not equal / not zero */

loc_001A0B55: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x580));
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x001A0B61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A0B61: ;
    MEM8(ebp + -26) = 1;

loc_001A0B65: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A0D02; /* jae: above or equal (unsigned >=) */

loc_001A0B71: ;
    eax = esi + edi * 8 + 0x180;
    MEM32(ebp + -44) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0C07; /* je: equal / zero */

loc_001A0B83: ;
    eax = MEM32(eax + 4);
    eax = eax - 8;
    MEM32(ebp + -52) = eax;
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(ebp + -25) = LO8(edx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -288) = ecx;
    edi = MEM32(eax + 0xC);
    MEM32(ebp + -316) = edi;
    MEM32(edi) = ecx;
    MEM32(ecx + 4) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0BE3; /* jne: not equal / not zero */

loc_001A0BAD: ;
    ecx = ZX16(MEM16(eax));
    edi = ecx;
    edi = edi >> 3;
    MEM32(ebp + -144) = edi;
    ecx = ecx & 7;
    edi = 0; /* xor self */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi << LO8(ecx);
    MEM32(ebp + -240) = edi;
    ecx = MEM32(ebp + -144);
    ecx = ecx + esi + 0x160;
    MEM32(ebp + -76) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx ^ edi;
    edi = MEM32(ebp + -76);
    MEM8(edi) = LO8(ecx);

loc_001A0BE3: ;
    ecx = MEM32(ebp + -40);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) - ecx;
    MEM32(ebp + -56) = eax;
    edx = edx & 0x10;
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(eax + 5) = LO8(edx);
    ecx = MEM32(ebp + -32);
    ecx = ecx - MEM32(ebp + 0x10);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = 0;
    goto loc_001A10F7;

loc_001A0C07: ;
    ecx = MEM32(ebp + -40);
    edx = ecx;
    edx = edx >> 5;
    MEM32(ebp + -160) = edx;
    edi = esi + edx * 4 + 0x160;
    MEM32(ebp + -48) = edi;
    ecx = ecx & 0x1F;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ~eax;
    eax = eax & MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;
    edx = edx - 0;
    if ((edx == 0)) goto loc_001A0C48; /* je: equal / zero */

loc_001A0C3A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001A0C5F; /* je: equal / zero */

loc_001A0C3D: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001A0C76; /* je: equal / zero */

loc_001A0C40: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001A0C8D; /* je: equal / zero */

loc_001A0C43: ;
    goto loc_001A0D0B;

loc_001A0C48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0C54; /* je: equal / zero */

loc_001A0C4C: ;
    edi = esi + 0x180;
    goto loc_001A0C97;

loc_001A0C54: ;
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;

loc_001A0C5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0C6B; /* je: equal / zero */

loc_001A0C63: ;
    edi = esi + 0x280;
    goto loc_001A0C97;

loc_001A0C6B: ;
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;

loc_001A0C76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0C82; /* je: equal / zero */

loc_001A0C7A: ;
    edi = esi + 0x380;
    goto loc_001A0C97;

loc_001A0C82: ;
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;

loc_001A0C8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0D0B; /* je: equal / zero */

loc_001A0C91: ;
    edi = esi + 0x480;

loc_001A0C97: ;
    MEM32(ebp + -44) = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0CA1u); RECOMP_ABI_CALL(0x001A3550u, sub_001A3550); /* call 0x001A3550 */

loc_001A0CA1: ;
    eax = SX8(LO8(eax));
    eax = edi + eax * 8;
    MEM32(ebp + -44) = eax;
    eax = MEM32(eax + 4);
    eax = eax - 8;
    MEM32(ebp + -52) = eax;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -304) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -168) = edx;
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0D86; /* jne: not equal / not zero */

loc_001A0CD2: ;
    ecx = ZX16(MEM16(eax));
    edx = ecx;
    edx = edx >> 3;
    MEM32(ebp + -248) = edx;
    ecx = ecx & 7;
    edi = 0; /* xor self */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi << LO8(ecx);
    MEM32(ebp + -176) = edi;
    esi = edx + esi + 0x160;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi));
    ecx = ecx ^ edi;
    MEM8(esi) = LO8(ecx);
    goto loc_001A0D86;

loc_001A0D02: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A1146; /* ja: above (unsigned >) */

loc_001A0D0B: ;
    edx = esi + 0x180;
    MEM32(ebp + -44) = edx;
    eax = MEM32(edx + 4);
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0D5B; /* je: equal / zero */

loc_001A0D1E: ;
    eax = eax + 0xFFFFFFF8u;
    MEM32(ebp + -52) = eax;
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A0D5B; /* jb: below (unsigned <) */

loc_001A0D2C: ;
    ecx = MEM32(edx);

loc_001A0D2E: ;
    MEM32(ebp + -68) = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0D5B; /* je: equal / zero */

loc_001A0D35: ;
    eax = ecx + -8;
    MEM32(ebp + -52) = eax;
    esi = ZX16(MEM16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A0D57; /* jb: below (unsigned <) */

loc_001A0D43: ;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -148) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -184) = edx;
    goto loc_001A0D81;

loc_001A0D57: ;
    ecx = MEM32(ecx);
    goto loc_001A0D2E;

loc_001A0D5B: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A0D64u); RECOMP_ABI_CALL(0x001A02B7u, sub_001A02B7); /* call 0x001A02B7 */

loc_001A0D64: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A113A; /* je: equal / zero */

loc_001A0D6F: ;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -256) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -192) = edx;

loc_001A0D81: ;
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;

loc_001A0D86: ;
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + -25) = LO8(ecx);
    ecx = ZX16(MEM16(eax));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    MEM32(ebp + -56) = eax;
    MEM8(eax + 5) = 1;
    edx = ZX16(MEM16(eax));
    ecx = MEM32(ebp + -40);
    edx = edx - ecx;
    MEM32(ebp + -104) = edx;
    MEM16(eax) = LO16(ecx);
    ecx = MEM32(ebp + -32);
    ecx = ecx - MEM32(ebp + 0x10);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A10E5; /* je: equal / zero */

loc_001A0DBC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0DDA; /* jne: not equal / not zero */

loc_001A0DC1: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax) = LO16(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 6));
    ecx = ecx + 0x10;
    MEM8(eax + 6) = LO8(ecx);
    goto loc_001A10E5;

loc_001A0DDA: ;
    esi = MEM32(ebp + -40);
    esi = esi << 4;
    esi = esi + eax;
    MEM32(ebp + -320) = esi;
    SET_LO8(ecx, MEM8(ebp + -25));
    MEM8(esi + 5) = LO8(ecx);
    SET_LO16(edi, MEM16(ebp + -40));
    MEM16(esi + 2) = LO16(edi);
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(esi + 4) = LO8(eax);
    MEM16(esi) = LO16(edx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0EC3; /* je: equal / zero */

loc_001A0E08: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 5));
    eax = eax & 0x10;
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A0E78; /* jae: above or equal (unsigned >=) */

loc_001A0E1A: ;
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -200) = edi;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0E64; /* jne: not equal / not zero */

loc_001A0E2E: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    MEM32(ebp + -132) = eax;
    ecx = ecx & 7;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    MEM32(ebp + -264) = eax;
    ecx = MEM32(ebp + -132);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -100) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx | eax;
    eax = MEM32(ebp + -100);
    MEM8(eax) = LO8(ecx);

loc_001A0E64: ;
    MEM32(ebp + -208) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -296) = ecx;
    goto loc_001A1075;

loc_001A0E78: ;
    ecx = ebx + 0x180;
    MEM32(ebp + -216) = ecx;
    eax = MEM32(ecx);

loc_001A0E86: ;
    MEM32(ebp + -124) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0E9F; /* je: equal / zero */

loc_001A0E8D: ;
    edi = eax + -8;
    MEM32(ebp + -272) = edi;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A0E9F; /* jbe: below or equal (unsigned <=) */

loc_001A0E9B: ;
    eax = MEM32(eax);
    goto loc_001A0E86;

loc_001A0E9F: ;
    MEM32(ebp + -224) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -312) = edi;

loc_001A0EAE: ;
    ecx = esi + 8;
    MEM32(ecx) = eax;
    MEM32(esi + 0xC) = edi;
    MEM32(edi) = ecx;
    MEM32(eax + 4) = ecx;

loc_001A0EBB: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + edx;
    goto loc_001A10CA;

loc_001A0EC3: ;
    eax = edx;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + -232) = eax;
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A0F8B; /* je: equal / zero */

loc_001A0EDC: ;
    MEM16(eax + 2) = LO16(edx);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 5));
    eax = eax & 0x10;
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A0F50; /* jae: above or equal (unsigned >=) */

loc_001A0EF2: ;
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -280) = edi;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0F3C; /* jne: not equal / not zero */

loc_001A0F06: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    MEM32(ebp + -108) = eax;
    ecx = ecx & 7;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    MEM32(ebp + -152) = eax;
    ecx = MEM32(ebp + -108);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -140) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx | eax;
    eax = MEM32(ebp + -140);
    MEM8(eax) = LO8(ecx);

loc_001A0F3C: ;
    MEM32(ebp + -156) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -164) = ecx;
    goto loc_001A1075;

loc_001A0F50: ;
    ecx = ebx + 0x180;
    MEM32(ebp + -172) = ecx;
    eax = MEM32(ecx);

loc_001A0F5E: ;
    MEM32(ebp + -116) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A0F77; /* je: equal / zero */

loc_001A0F65: ;
    edi = eax + -8;
    MEM32(ebp + -180) = edi;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A0F77; /* jbe: below or equal (unsigned <=) */

loc_001A0F73: ;
    eax = MEM32(eax);
    goto loc_001A0F5E;

loc_001A0F77: ;
    MEM32(ebp + -188) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -196) = edi;
    goto loc_001A0EAE;

loc_001A0F8B: ;
    MEM8(esi + 5) = LO8(ecx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -204) = ecx;
    edi = MEM32(eax + 0xC);
    MEM32(ebp + -212) = edi;
    MEM32(edi) = ecx;
    MEM32(ecx + 4) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A0FE3; /* jne: not equal / not zero */

loc_001A0FA9: ;
    SET_LO16(ecx, MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A0FE3; /* jae: above or equal (unsigned >=) */

loc_001A0FB3: ;
    ecx = ZX16(LO16(ecx));
    edi = ecx;
    edi = edi >> 3;
    MEM32(ebp + -80) = edi;
    ecx = ecx & 7;
    edi = 0; /* xor self */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi << LO8(ecx);
    MEM32(ebp + -220) = edi;
    ecx = MEM32(ebp + -80);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -96) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx ^ edi;
    edi = MEM32(ebp + -96);
    MEM8(edi) = LO8(ecx);

loc_001A0FE3: ;
    ecx = ZX16(MEM16(eax));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    eax = ZX16(MEM16(eax));
    edx = edx + eax;
    MEM32(ebp + -104) = edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF00 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A10C2; /* ja: above (unsigned >) */

loc_001A0FFD: ;
    MEM16(esi) = LO16(edx);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A1010; /* jne: not equal / not zero */

loc_001A1006: ;
    eax = edx;
    eax = eax << 4;
    MEM16(eax + esi + 2) = LO16(edx);

loc_001A1010: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 5));
    eax = eax & 0x10;
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A1087; /* jae: above or equal (unsigned >=) */

loc_001A1022: ;
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -228) = edi;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1066; /* jne: not equal / not zero */

loc_001A1036: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    MEM32(ebp + -112) = eax;
    ecx = ecx & 7;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    MEM32(ebp + -236) = eax;
    ecx = MEM32(ebp + -112);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -120) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx | eax;
    eax = MEM32(ebp + -120);
    MEM8(eax) = LO8(ecx);

loc_001A1066: ;
    MEM32(ebp + -244) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -252) = ecx;

loc_001A1075: ;
    eax = esi + 8;
    MEM32(eax) = edi;
    MEM32(esi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(edi + 4) = eax;
    goto loc_001A0EBB;

loc_001A1087: ;
    ecx = ebx + 0x180;
    MEM32(ebp + -260) = ecx;
    eax = MEM32(ecx);

loc_001A1095: ;
    MEM32(ebp + -128) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A10AE; /* je: equal / zero */

loc_001A109C: ;
    edi = eax + -8;
    MEM32(ebp + -268) = edi;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A10AE; /* jbe: below or equal (unsigned <=) */

loc_001A10AA: ;
    eax = MEM32(eax);
    goto loc_001A1095;

loc_001A10AE: ;
    MEM32(ebp + -276) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -284) = edi;
    goto loc_001A0EAE;

loc_001A10C2: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A10CAu); RECOMP_ABI_CALL(0x0019FBC7u, sub_0019FBC7); /* call 0x0019FBC7 */

loc_001A10CA: ;
    MEM8(ebp + -25) = 0;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A10E5; /* je: equal / zero */

loc_001A10D4: ;
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(ebp + -292) = eax;
    MEM32(eax + 0x40) = esi;

loc_001A10E5: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -25), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A10F7; /* je: equal / zero */

loc_001A10EB: ;
    eax = MEM32(ebp + -56);
    SET_LO8(ecx, MEM8(eax + 5));
    SET_LO8(ecx, LO8(ecx) | 0x10);
    MEM8(eax + 5) = LO8(ecx);

loc_001A10F7: ;
    esi = MEM32(ebp + -56);
    esi = esi + 0x10;
    MEM32(ebp + -60) = esi;
    _fa = (uint32_t)(MEM8(ebp + -26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -26), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A1116; /* je: equal / zero */

loc_001A1106: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x580));
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x001A1112u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1112: ;
    MEM8(ebp + -26) = 0;

loc_001A1116: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A122E; /* je: equal / zero */

loc_001A1120: ;
    ecx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    edi = esi;
    edx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    goto loc_001A122E;

loc_001A113A: ;
    MEM32(ebp + -72) = 0xC0000017u;
    goto loc_001A11EB;

loc_001A1146: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A11E4; /* je: equal / zero */

loc_001A1150: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = MEM32(ebp + 0xC);
    eax = eax << 0x14;
    eax = ~eax;
    eax = eax & 0x800000;
    eax = eax | 0x1000;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -36;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB8); PUSH32(esp, 0x001A117Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A117D: ;
    MEM32(ebp + -72) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A11EB; /* jl: less (signed <) */

loc_001A1184: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = MEM32(ebp + -36);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -32);
    eax = eax - MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -36);
    MEM16(ecx + 0x20) = LO16(eax);
    eax = MEM32(ebp + -36);
    MEM8(eax + 0x25) = 0xB;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -36);
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(ebp + -36);
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x1C) = ecx;
    esi = esi + 0x58;
    MEM32(ebp + -300) = esi;
    eax = MEM32(esi + 4);
    MEM32(ebp + -308) = eax;
    ecx = MEM32(ebp + -36);
    MEM32(ecx) = esi;
    ecx = MEM32(ebp + -36);
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ebp + -36);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -36);
    MEM32(esi + 4) = eax;
    esi = MEM32(ebp + -36);
    esi = esi + 0x30;
    goto loc_001A122B;

loc_001A11E4: ;
    MEM32(ebp + -72) = 0xC0000023u;

loc_001A11EB: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1229; /* je: equal / zero */

loc_001A11F1: ;
    MEM32(ebp + -400) = 0xC0000017u;
    MEM32(ebp + -392) = MEM32(ebp + -392) & 0;
    MEM32(ebp + -384) = 1;
    MEM32(ebp + -396) = MEM32(ebp + -396) & 0;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -380) = eax;
    eax = ebp + -400;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C78); PUSH32(esp, 0x001A1229u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1229: ;
    esi = 0; /* xor self */

loc_001A122B: ;
    MEM32(ebp + -60) = esi;

loc_001A122E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1237u); RECOMP_ABI_CALL(0x001A1274u, sub_001A1274); /* call 0x001A1274 */

loc_001A1237: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1261; /* je: equal / zero */

loc_001A123B: ;
    MEM32(ebp + -92) = esi;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -88) = eax;
    MEM32(ebp + -84) = MEM32(ebp + -84) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1261; /* je: equal / zero */

loc_001A1258: ;
    ecx = ebp + -92;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A1261u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1261: ;
    eax = esi;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1268u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A1268: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A126B
 * Original: 0x001A126B - 0x001A1274 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A126B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A126B: ;
    ebx = MEM32(ebp + -136);
    esi = MEM32(ebp + -60);

    g_seh_ebp = ebp; sub_001A1274(); return; /* fallthrough 0x001A1274 */

}

/**
 * sub_001A1274
 * Original: 0x001A1274 - 0x001A1287 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1274(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A1274: ;
    _fa = (uint32_t)(MEM8(ebp + -26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -26), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A1286; /* je: equal / zero */

loc_001A127A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x580));
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x001A1286u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1286: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A1287
 * Original: 0x001A1287 - 0x001A1465 (478 bytes, 157 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1287(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A1287: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x3E1B78);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1293u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A1293: ;
    esi = MEM32(ebp + 8);
    ebx = esi;
    MEM32(ebp + -36) = ebx;
    MEM8(ebp + -25) = 0;
    MEM8(ebp + -26) = 1;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A12B1; /* jne: not equal / not zero */

loc_001A12AA: ;
    SET_LO8(eax, 1);
    goto loc_001A145D;

loc_001A12B1: ;
    MEM32(ebp + -108) = edi;
    MEM32(ebp + -104) = MEM32(ebp + -104) & 0;
    MEM32(ebp + -100) = MEM32(ebp + -100) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A12D5; /* je: equal / zero */

loc_001A12CC: ;
    ecx = ebp + -108;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A12D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A12D5: ;
    eax = MEM32(ebp + 0xC);
    eax = eax | MEM32(esi + 0x18);
    edi = edi + 0xFFFFFFF0u;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A12F6; /* jne: not equal / not zero */

loc_001A12E6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x580));
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x001A12F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A12F2: ;
    MEM8(ebp + -25) = 1;

loc_001A12F6: ;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 5), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A1403; /* jne: not equal / not zero */

loc_001A1300: ;
    eax = ZX16(MEM16(edi));
    MEM32(ebp + -32) = eax;
    PUSH32(esp, 0);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1313u); RECOMP_ABI_CALL(0x0019F922u, sub_0019F922); /* call 0x0019F922 */

loc_001A1313: ;
    MEM32(ebp + -48) = eax;
    ecx = MEM32(ebp + -32);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A1387; /* jae: above or equal (unsigned >=) */

loc_001A1321: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 5));
    ecx = ecx & 0x10;
    MEM8(eax + 5) = LO8(ecx);
    ecx = ZX16(MEM16(ebp + -32));
    edx = esi + ecx * 8 + 0x180;
    MEM32(ebp + -52) = edx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1366; /* jne: not equal / not zero */

loc_001A133E: ;
    ecx = ZX16(MEM16(eax));
    edi = ecx;
    edi = edi >> 3;
    MEM32(ebp + -56) = edi;
    ecx = ecx & 7;
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx << LO8(ecx);
    MEM32(ebp + -60) = ebx;
    edi = edi + esi + 0x160;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi));
    ecx = ecx | ebx;
    MEM8(edi) = LO8(ecx);
    ebx = MEM32(ebp + -36);

loc_001A1366: ;
    MEM32(ebp + -64) = edx;
    edi = MEM32(edx + 4);
    MEM32(ebp + -68) = edi;
    ecx = eax + 8;
    MEM32(ecx) = edx;
    MEM32(eax + 0xC) = edi;
    MEM32(edi) = ecx;
    MEM32(edx + 4) = ecx;
    eax = MEM32(ebp + -32);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + eax;
    goto loc_001A1451;

loc_001A1387: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A13A3; /* jb: below (unsigned <) */

loc_001A138C: ;
    edx = MEM32(esi + 0x30);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A13A3; /* jb: below (unsigned <) */

loc_001A1396: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A139Eu); RECOMP_ABI_CALL(0x001A043Eu, sub_001A043E); /* call 0x001A043E */

loc_001A139E: ;
    goto loc_001A1451;

loc_001A13A3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF00 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A13F9; /* ja: above (unsigned >) */

loc_001A13AB: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 5));
    ecx = ecx & 0x10;
    MEM8(eax + 5) = LO8(ecx);
    esi = esi + 0x180;
    MEM32(ebp + -72) = esi;
    ecx = MEM32(esi);

loc_001A13C1: ;
    MEM32(ebp + -40) = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A13DB; /* je: equal / zero */

loc_001A13C8: ;
    edx = ecx + -8;
    MEM32(ebp + -76) = edx;
    SET_LO16(edi, MEM16(ebp + -32));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A13DB; /* jbe: below or equal (unsigned <=) */

loc_001A13D7: ;
    ecx = MEM32(ecx);
    goto loc_001A13C1;

loc_001A13DB: ;
    MEM32(ebp + -80) = ecx;
    esi = MEM32(ecx + 4);
    MEM32(ebp + -84) = esi;
    edx = eax + 8;
    MEM32(edx) = ecx;
    MEM32(eax + 0xC) = esi;
    MEM32(esi) = edx;
    MEM32(ecx + 4) = edx;
    eax = MEM32(ebp + -32);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    goto loc_001A1451;

loc_001A13F9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1401u); RECOMP_ABI_CALL(0x0019FBC7u, sub_0019FBC7); /* call 0x0019FBC7 */

loc_001A1401: ;
    goto loc_001A1451;

loc_001A1403: ;
    eax = edi + -32;
    MEM32(ebp + -44) = eax;
    ecx = MEM32(eax);
    MEM32(ebp + -88) = ecx;
    eax = MEM32(eax + 4);
    MEM32(ebp + -92) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A142F; /* je: equal / zero */

loc_001A141F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x580));
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x001A142Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A142B: ;
    MEM8(ebp + -25) = 0;

loc_001A142F: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x001A1446u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1446: ;
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A1451; /* jge: greater or equal (signed >=) */

loc_001A144D: ;
    MEM8(ebp + -26) = 0;

loc_001A1451: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A145Au); RECOMP_ABI_CALL(0x001A1468u, sub_001A1468); /* call 0x001A1468 */

loc_001A145A: ;
    SET_LO8(eax, MEM8(ebp + -26));

loc_001A145D: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1462u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A1462: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A1465
 * Original: 0x001A1465 - 0x001A1468 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1465(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A1465: ;
    ebx = MEM32(ebp + -36);

    g_seh_ebp = ebp; sub_001A1468(); return; /* fallthrough 0x001A1468 */

}

/**
 * sub_001A1468
 * Original: 0x001A1468 - 0x001A147B (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1468(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A1468: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A147A; /* je: equal / zero */

loc_001A146E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x580));
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x001A147Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A147A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A147B
 * Original: 0x001A147B - 0x001A1B93 (1816 bytes, 566 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A147B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A147B: ;
    PUSH32(esp, 0x13C);
    PUSH32(esp, 0x3E1B88);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A148Au); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A148A: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -44) = eax;
    MEM8(ebp + -29) = 0;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A14AF; /* je: equal / zero */

loc_001A149B: ;
    MEM32(ebp + -116) = esi;
    ecx = MEM32(eax + 0x18);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | ecx;
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A14B6; /* jbe: below or equal (unsigned <=) */

loc_001A14AF: ;
    eax = 0; /* xor self */
    goto loc_001A1B8B;

loc_001A14B6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A14BB; /* jne: not equal / not zero */

loc_001A14BA: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A14BB: ;
    ecx = MEM32(eax + 0x50);
    ecx = ecx + edx;
    ecx = ecx & MEM32(eax + 0x54);
    MEM32(ebp + -28) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C000100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0xC), 0x3C000100 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A14DE; /* jne: not equal / not zero */

loc_001A14CF: ;
    _fa = (uint32_t)(MEM32(eax + 0x17C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x17C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A14DE; /* jne: not equal / not zero */

loc_001A14D8: ;
    _fa = (uint32_t)(MEM8(esi + -11)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -11), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A14E4; /* je: equal / zero */

loc_001A14DE: ;
    ecx = ecx + 0x10;
    MEM32(ebp + -28) = ecx;

loc_001A14E4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A1502; /* jne: not equal / not zero */

loc_001A14EE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x580));
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x001A14FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A14FA: ;
    MEM8(ebp + -29) = 1;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) ^ 1;

loc_001A1502: ;
    MEM32(ebp + -4) = 1;
    ebx = esi + -16;
    MEM32(ebp + -100) = ebx;
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B12; /* je: equal / zero */

loc_001A151A: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 8);
    if ((LO8(ecx) == 0)) goto loc_001A1556; /* je: equal / zero */

loc_001A1521: ;
    edx = ebx + -32;
    MEM32(ebp + -240) = edx;
    eax = ZX16(MEM16(ebx));
    esi = MEM32(edx + 0x18);
    esi = esi - eax;
    MEM32(ebp + -48) = esi;
    edx = eax + esi;
    edx = edx >> 4;
    MEM32(ebp + -80) = edx;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 0x20;
    edi = MEM32(ebp + -28);
    edi = edi + 0xFFF;
    edi = edi & 0xFFFFF000u;
    MEM32(ebp + -28) = edi;
    goto loc_001A156C;

loc_001A1556: ;
    eax = ZX16(MEM16(ebx));
    edx = eax;
    MEM32(ebp + -80) = edx;
    edi = ZX8(MEM8(ebx + 6));
    esi = edx;
    esi = esi << 4;
    esi = esi - edi;
    MEM32(ebp + -48) = esi;

loc_001A156C: ;
    edi = MEM32(ebp + -28);
    edi = edi >> 4;
    MEM32(ebp + -56) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A195F; /* ja: above (unsigned >) */

loc_001A157D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1589; /* jne: not equal / not zero */

loc_001A1582: ;
    MEM32(ebp + -56) = edi;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 0x10;

loc_001A1589: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1598; /* je: equal / zero */

loc_001A158D: ;
    eax = MEM32(ebp + -28);
    eax = eax - MEM32(ebp + 0x14);
    MEM16(ebx) = LO16(eax);
    goto loc_001A15C4;

loc_001A1598: ;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A15BB; /* je: equal / zero */

loc_001A159E: ;
    eax = eax << 4;
    eax = eax + ebx + -16;
    MEM32(ebp + -76) = eax;
    ecx = MEM32(ebp + -56);
    ecx = ecx << 4;
    edi = ecx + ebx + -16;
    MEM32(ebp + -108) = edi;
    esi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_001A15BB: ;
    eax = MEM32(ebp + -28);
    eax = eax - MEM32(ebp + 0x14);
    MEM8(ebx + 6) = LO8(eax);

loc_001A15C4: ;
    esi = MEM32(ebp + -48);
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A15EB; /* jbe: below or equal (unsigned <=) */

loc_001A15CE: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A15EB; /* je: equal / zero */

loc_001A15D4: ;
    ecx = ecx - esi;
    eax = 0; /* xor self */
    edi = MEM32(ebp + 0x10);
    edi = edi + esi;
    esi = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001A15EB: ;
    ecx = MEM32(ebp + -56);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A1AB1; /* je: equal / zero */

loc_001A15F6: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 5));
    eax = eax & 0xFFFFFFFEu;
    MEM8(ebp + -57) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A164B; /* je: equal / zero */

loc_001A1605: ;
    ebx = ebx + 0xFFFFFFE0u;
    MEM32(ebp + -152) = ebx;
    eax = MEM32(ebp + -28);
    ecx = ebx + eax;
    MEM32(ebp + -40) = ecx;
    edx = edx << 4;
    edx = edx - eax;
    MEM32(ebp + -36) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x001A1632u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1632: ;
    MEM32(ebp + -248) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A1AB1; /* jl: less (signed <) */

loc_001A1640: ;
    eax = MEM32(ebp + -36);
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) - eax;
    goto loc_001A1AB1;

loc_001A164B: ;
    esi = ecx;
    esi = esi << 4;
    esi = esi + ebx;
    MEM32(ebp + -244) = esi;
    MEM8(esi + 5) = LO8(eax);
    MEM16(esi + 2) = LO16(ecx);
    SET_LO8(edx, MEM8(ebx + 4));
    MEM8(esi + 4) = LO8(edx);
    edi = ZX16(MEM16(ebx));
    edi = edi - ecx;
    MEM32(ebp + -120) = edi;
    MEM16(ebx) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebx + 5));
    SET_LO8(ecx, LO8(ecx) & 0xEF);
    MEM8(ebx + 5) = LO8(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1724; /* je: equal / zero */

loc_001A1681: ;
    ecx = ZX8(MEM8(esi + 4));
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + ecx * 4 + 0x60);
    MEM32(ebp + -164) = ecx;
    MEM32(ecx + 0x40) = esi;
    MEM16(esi) = LO16(edi);
    SET_LO8(ecx, MEM8(esi + 5));
    SET_LO8(ecx, LO8(ecx) & 0xF8);
    MEM8(esi + 5) = LO8(ecx);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A16E9; /* jae: above or equal (unsigned >=) */

loc_001A16A8: ;
    ecx = ZX16(LO16(edi));
    eax = eax + ecx * 8 + 0x180;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1710; /* jne: not equal / not zero */

loc_001A16B9: ;
    ecx = ZX16(MEM16(esi));
    edx = ecx;
    edx = edx >> 3;
    MEM32(ebp + -212) = edx;
    ecx = ecx & 7;
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx << LO8(ecx);
    MEM32(ebp + -172) = ebx;
    ecx = MEM32(ebp + 8);
    ecx = edx + ecx + 0x160;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx));
    edx = edx | ebx;
    MEM8(ecx) = LO8(edx);
    goto loc_001A1710;

loc_001A16E9: ;
    edx = eax + 0x180;
    MEM32(ebp + -64) = edx;
    eax = MEM32(edx);

loc_001A16F4: ;
    MEM32(ebp + -88) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A170D; /* je: equal / zero */

loc_001A16FB: ;
    ecx = eax + -8;
    MEM32(ebp + -236) = ecx;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A170D; /* jbe: below or equal (unsigned <=) */

loc_001A1709: ;
    eax = MEM32(eax);
    goto loc_001A16F4;

loc_001A170D: ;
    MEM32(ebp + -64) = eax;

loc_001A1710: ;
    MEM32(ebp + -180) = eax;
    edx = MEM32(eax + 4);
    MEM32(ebp + -220) = edx;
    goto loc_001A1938;

loc_001A1724: ;
    eax = edi;
    eax = eax << 4;
    ebx = eax + esi;
    MEM32(ebp + -188) = ebx;
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A17D5; /* je: equal / zero */

loc_001A173D: ;
    MEM16(esi) = LO16(edi);
    MEM16(ebx + 2) = LO16(edi);
    SET_LO8(eax, MEM8(esi + 5));
    SET_LO8(eax, LO8(eax) & 0xF8);
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A1797; /* jae: above or equal (unsigned >=) */

loc_001A1753: ;
    eax = ZX16(LO16(edi));
    ecx = MEM32(ebp + 8);
    eax = ecx + eax * 8 + 0x180;
    MEM32(ebp + -72) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A17C1; /* jne: not equal / not zero */

loc_001A1767: ;
    ecx = ZX16(MEM16(esi));
    edx = ecx;
    edx = edx >> 3;
    MEM32(ebp + -252) = edx;
    ecx = ecx & 7;
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx << LO8(ecx);
    MEM32(ebp + -196) = ebx;
    ecx = MEM32(ebp + 8);
    ecx = edx + ecx + 0x160;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx));
    edx = edx | ebx;
    MEM8(ecx) = LO8(edx);
    goto loc_001A17C1;

loc_001A1797: ;
    edx = MEM32(ebp + 8);
    edx = edx + 0x180;
    MEM32(ebp + -72) = edx;
    eax = MEM32(edx);

loc_001A17A5: ;
    MEM32(ebp + -112) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A17BE; /* je: equal / zero */

loc_001A17AC: ;
    ecx = eax + -8;
    MEM32(ebp + -228) = ecx;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A17BE; /* jbe: below or equal (unsigned <=) */

loc_001A17BA: ;
    eax = MEM32(eax);
    goto loc_001A17A5;

loc_001A17BE: ;
    MEM32(ebp + -72) = eax;

loc_001A17C1: ;
    MEM32(ebp + -204) = eax;
    edx = MEM32(eax + 4);
    MEM32(ebp + -156) = edx;
    goto loc_001A1938;

loc_001A17D5: ;
    MEM8(esi + 5) = LO8(eax);
    eax = MEM32(ebx + 8);
    MEM32(ebp + -160) = eax;
    ecx = MEM32(ebx + 0xC);
    MEM32(ebp + -168) = ecx;
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1835; /* jne: not equal / not zero */

loc_001A17F3: ;
    SET_LO16(eax, MEM16(ebx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A1835; /* jae: above or equal (unsigned >=) */

loc_001A17FC: ;
    ecx = ZX16(LO16(eax));
    eax = ecx;
    eax = eax >> 3;
    MEM32(ebp + -176) = eax;
    ecx = ecx & 7;
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    MEM32(ebp + -96) = edx;
    edx = MEM32(ebp + 8);
    eax = eax + edx + 0x160;
    MEM32(ebp + -136) = eax;
    eax = ZX8(MEM8(eax));
    eax = eax ^ MEM32(ebp + -96);
    ecx = MEM32(ebp + -136);
    MEM8(ecx) = LO8(eax);
    goto loc_001A1838;

loc_001A1835: ;
    edx = MEM32(ebp + 8);

loc_001A1838: ;
    SET_LO8(ecx, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1875; /* je: equal / zero */

loc_001A1840: ;
    eax = ZX16(MEM16(ebx));
    eax = eax << 4;
    eax = eax - 0x18;
    MEM32(ebp + -104) = eax;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A185C; /* je: equal / zero */

loc_001A1851: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A185C; /* jbe: below or equal (unsigned <=) */

loc_001A1856: ;
    eax = eax - 4;
    MEM32(ebp + -104) = eax;

loc_001A185C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = ebx + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CBC); PUSH32(esp, 0x001A186Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A186C: ;
    MEM32(ebp + -184) = eax;
    edx = MEM32(ebp + 8);

loc_001A1875: ;
    eax = ZX16(MEM16(ebx));
    MEM32(edx + 0x30) = MEM32(edx + 0x30) - eax;
    eax = ZX16(MEM16(ebx));
    edi = edi + eax;
    MEM32(ebp + -120) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF00 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A1950; /* ja: above (unsigned >) */

loc_001A188F: ;
    MEM16(esi) = LO16(edi);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A18A4; /* jne: not equal / not zero */

loc_001A1898: ;
    eax = edi;
    eax = eax << 4;
    MEM16(eax + esi + 2) = LO16(edi);
    goto loc_001A18B5;

loc_001A18A4: ;
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(edx + eax * 4 + 0x60);
    MEM32(ebp + -192) = eax;
    MEM32(eax + 0x40) = esi;

loc_001A18B5: ;
    SET_LO8(eax, MEM8(esi + 5));
    SET_LO8(eax, LO8(eax) & 0xF8);
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A1902; /* jae: above or equal (unsigned >=) */

loc_001A18C4: ;
    eax = ZX16(LO16(edi));
    eax = edx + eax * 8 + 0x180;
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1929; /* jne: not equal / not zero */

loc_001A18D5: ;
    ecx = ZX16(MEM16(esi));
    ebx = ecx;
    ebx = ebx >> 3;
    MEM32(ebp + -84) = ebx;
    ecx = ecx & 7;
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx << LO8(ecx);
    MEM32(ebp + -200) = ebx;
    ecx = MEM32(ebp + -84);
    edx = ecx + edx + 0x160;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx));
    ecx = ecx | ebx;
    MEM8(edx) = LO8(ecx);
    goto loc_001A1929;

loc_001A1902: ;
    edx = edx + 0x180;
    MEM32(ebp + -68) = edx;
    eax = MEM32(edx);

loc_001A190D: ;
    MEM32(ebp + -92) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A1926; /* je: equal / zero */

loc_001A1914: ;
    ecx = eax + -8;
    MEM32(ebp + -208) = ecx;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A1926; /* jbe: below or equal (unsigned <=) */

loc_001A1922: ;
    eax = MEM32(eax);
    goto loc_001A190D;

loc_001A1926: ;
    MEM32(ebp + -68) = eax;

loc_001A1929: ;
    MEM32(ebp + -216) = eax;
    edx = MEM32(eax + 4);
    MEM32(ebp + -224) = edx;

loc_001A1938: ;
    ecx = esi + 8;
    MEM32(ecx) = eax;
    MEM32(esi + 0xC) = edx;
    MEM32(edx) = ecx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -44);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) + edi;
    goto loc_001A1AB1;

loc_001A1950: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A195Au); RECOMP_ABI_CALL(0x0019FBC7u, sub_0019FBC7); /* call 0x0019FBC7 */

loc_001A195A: ;
    goto loc_001A1AB1;

loc_001A195F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A197E; /* jne: not equal / not zero */

loc_001A1963: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1973u); RECOMP_ABI_CALL(0x0019FD6Cu, sub_0019FD6C); /* call 0x0019FD6C */

loc_001A1973: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A1AB1; /* jne: not equal / not zero */

loc_001A197B: ;
    esi = MEM32(ebp + -48);

loc_001A197E: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A198D; /* je: equal / zero */

loc_001A1984: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    goto loc_001A1AB1;

loc_001A198D: ;
    MEM16(ebp + 0xE) = MEM16(ebp + 0xE) & 0xC003;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A19FB; /* je: equal / zero */

loc_001A199C: ;
    MEM8(ebp + 0xD) = MEM8(ebp + 0xD) & 0xF1;
    eax = eax & 0xE0;
    eax = eax | 0x10;
    eax = eax << 4;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A19B4u); RECOMP_ABI_CALL(0x0019FCC1u, sub_0019FCC1); /* call 0x0019FCC1 */

loc_001A19B4: ;
    MEM32(ebp + -76) = eax;
    MEM32(ebp + -4) = 2;
    SET_LO16(eax, MEM16(eax + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A19D4; /* je: equal / zero */

loc_001A19C7: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A19D4; /* js: sign (negative) */

loc_001A19CB: ;
    eax = ZX16(LO16(eax));
    eax = eax << 0x12;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;

loc_001A19D4: ;
    MEM32(ebp + -4) = 1;
    goto loc_001A1A0B;

    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_001A19FB: ;
    SET_LO8(eax, MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A0B; /* je: equal / zero */

loc_001A1A02: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x12;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;

loc_001A1A0B: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + 0xC);
    eax = eax & 0xFFFFFFF7u;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1A1Du); RECOMP_ABI_CALL(0x001A0B0Cu, sub_001A0B0C); /* call 0x001A0B0C */

loc_001A1A1D: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1AAE; /* je: equal / zero */

loc_001A1A28: ;
    eax = eax + 0xFFFFFFF0u;
    MEM32(ebp + -232) = eax;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A5F; /* je: equal / zero */

loc_001A1A37: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1A3Du); RECOMP_ABI_CALL(0x0019FCC1u, sub_0019FCC1); /* call 0x0019FCC1 */

loc_001A1A3D: ;
    edi = eax;
    MEM32(ebp + -108) = edi;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A59; /* je: equal / zero */

loc_001A1A48: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1A4Eu); RECOMP_ABI_CALL(0x0019FCC1u, sub_0019FCC1); /* call 0x0019FCC1 */

loc_001A1A4E: ;
    MEM32(ebp + -76) = eax;
    eax = MEM32(eax + 4);
    MEM32(edi + 4) = eax;
    goto loc_001A1A5F;

loc_001A1A59: ;
    eax = 0; /* xor self */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_001A1A5F: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A1A68; /* jb: below (unsigned <) */

loc_001A1A66: ;
    eax = esi;

loc_001A1A68: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -52));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1A74u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_001A1A74: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A1A9D; /* jbe: below or equal (unsigned <=) */

loc_001A1A7C: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A9D; /* je: equal / zero */

loc_001A1A82: ;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx - esi;
    eax = 0; /* xor self */
    edx = MEM32(ebp + -52);
    edi = edx + esi;
    edx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001A1A9D: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1AABu); RECOMP_ABI_CALL(0x001A1287u, sub_001A1287); /* call 0x001A1287 */

loc_001A1AAB: ;
    eax = MEM32(ebp + -52);

loc_001A1AAE: ;
    MEM32(ebp + 0x10) = eax;

loc_001A1AB1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1B12; /* jne: not equal / not zero */

loc_001A1AB7: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B12; /* je: equal / zero */

loc_001A1ABD: ;
    MEM32(ebp + -332) = 0xC0000017u;
    MEM32(ebp + -324) = MEM32(ebp + -324) & 0;
    MEM32(ebp + -316) = 1;
    MEM32(ebp + -328) = MEM32(ebp + -328) & 0;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -312) = eax;
    eax = ebp + -332;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C78); PUSH32(esp, 0x001A1AF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1AF5: ;
    goto loc_001A1B12;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000017u (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

loc_001A1B12: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1B1Fu); RECOMP_ABI_CALL(0x001A1B93u, sub_001A1B93); /* call 0x001A1B93 */

loc_001A1B1F: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1B89; /* jne: not equal / not zero */

loc_001A1B27: ;
    MEM32(ebp + -148) = ecx;
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B5A; /* je: equal / zero */

loc_001A1B4B: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A1B57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1B57: ;
    ecx = MEM32(ebp + 0x10);

loc_001A1B5A: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B89; /* je: equal / zero */

loc_001A1B7A: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A1B86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1B86: ;
    ecx = MEM32(ebp + 0x10);

loc_001A1B89: ;
    eax = ecx;

loc_001A1B8B: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1B90u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A1B90: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A19DD
 * Original: 0x001A19DD - 0x001A1B93 (438 bytes, 135 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A19DD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A19DD: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    SET_LO8(eax, MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A0B; /* je: equal / zero */

loc_001A1A02: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x12;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;

loc_001A1A0B: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + 0xC);
    eax = eax & 0xFFFFFFF7u;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001A1A1Du); RECOMP_ABI_CALL(0x001A0B0Cu, sub_001A0B0C); /* call 0x001A0B0C */

loc_001A1A1D: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1AAE; /* je: equal / zero */

loc_001A1A28: ;
    eax = eax + 0xFFFFFFF0u;
    MEM32(ebp + -232) = eax;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A5F; /* je: equal / zero */

loc_001A1A37: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A1A3Du); RECOMP_ABI_CALL(0x0019FCC1u, sub_0019FCC1); /* call 0x0019FCC1 */

loc_001A1A3D: ;
    edi = eax;
    MEM32(ebp + -108) = edi;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A59; /* je: equal / zero */

loc_001A1A48: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001A1A4Eu); RECOMP_ABI_CALL(0x0019FCC1u, sub_0019FCC1); /* call 0x0019FCC1 */

loc_001A1A4E: ;
    MEM32(ebp + -76) = eax;
    eax = MEM32(eax + 4);
    MEM32(edi + 4) = eax;
    goto loc_001A1A5F;

loc_001A1A59: ;
    eax = 0; /* xor self */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_001A1A5F: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A1A68; /* jb: below (unsigned <) */

loc_001A1A66: ;
    eax = esi;

loc_001A1A68: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -52));
    PUSH32(esp, 0x001A1A74u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_001A1A74: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A1A9D; /* jbe: below or equal (unsigned <=) */

loc_001A1A7C: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A9D; /* je: equal / zero */

loc_001A1A82: ;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx - esi;
    eax = 0; /* xor self */
    edx = MEM32(ebp + -52);
    edi = edx + esi;
    edx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001A1A9D: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001A1AABu); RECOMP_ABI_CALL(0x001A1287u, sub_001A1287); /* call 0x001A1287 */

loc_001A1AAB: ;
    eax = MEM32(ebp + -52);

loc_001A1AAE: ;
    MEM32(ebp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1B12; /* jne: not equal / not zero */

loc_001A1AB7: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B12; /* je: equal / zero */

loc_001A1ABD: ;
    MEM32(ebp + -332) = 0xC0000017u;
    MEM32(ebp + -324) = MEM32(ebp + -324) & 0;
    MEM32(ebp + -316) = 1;
    MEM32(ebp + -328) = MEM32(ebp + -328) & 0;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -312) = eax;
    eax = ebp + -332;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C78); PUSH32(esp, 0x001A1AF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1AF5: ;
    goto loc_001A1B12;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000017u (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

loc_001A1B12: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x001A1B1Fu); RECOMP_ABI_CALL(0x001A1B93u, sub_001A1B93); /* call 0x001A1B93 */

loc_001A1B1F: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1B89; /* jne: not equal / not zero */

loc_001A1B27: ;
    MEM32(ebp + -148) = ecx;
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B5A; /* je: equal / zero */

loc_001A1B4B: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A1B57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1B57: ;
    ecx = MEM32(ebp + 0x10);

loc_001A1B5A: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B89; /* je: equal / zero */

loc_001A1B7A: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A1B86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1B86: ;
    ecx = MEM32(ebp + 0x10);

loc_001A1B89: ;
    eax = ecx;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x001A1B90u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A1B90: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A19E1
 * Original: 0x001A19E1 - 0x001A1B93 (434 bytes, 132 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A19E1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A19E1: ;
    esp = MEM32(ebp + -24);
    ebx = MEM32(ebp + -100);
    SET_LO8(eax, MEM8(ebx + 5));
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(ebx + 5) = LO8(eax);
    MEM32(ebp + -4) = 1;
    esi = MEM32(ebp + -48);
    goto loc_001A1A0B;

    SET_LO8(eax, MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A0B; /* je: equal / zero */

loc_001A1A02: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x12;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;

loc_001A1A0B: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + 0xC);
    eax = eax & 0xFFFFFFF7u;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001A1A1Du); RECOMP_ABI_CALL(0x001A0B0Cu, sub_001A0B0C); /* call 0x001A0B0C */

loc_001A1A1D: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1AAE; /* je: equal / zero */

loc_001A1A28: ;
    eax = eax + 0xFFFFFFF0u;
    MEM32(ebp + -232) = eax;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A5F; /* je: equal / zero */

loc_001A1A37: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A1A3Du); RECOMP_ABI_CALL(0x0019FCC1u, sub_0019FCC1); /* call 0x0019FCC1 */

loc_001A1A3D: ;
    edi = eax;
    MEM32(ebp + -108) = edi;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A59; /* je: equal / zero */

loc_001A1A48: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001A1A4Eu); RECOMP_ABI_CALL(0x0019FCC1u, sub_0019FCC1); /* call 0x0019FCC1 */

loc_001A1A4E: ;
    MEM32(ebp + -76) = eax;
    eax = MEM32(eax + 4);
    MEM32(edi + 4) = eax;
    goto loc_001A1A5F;

loc_001A1A59: ;
    eax = 0; /* xor self */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_001A1A5F: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A1A68; /* jb: below (unsigned <) */

loc_001A1A66: ;
    eax = esi;

loc_001A1A68: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -52));
    PUSH32(esp, 0x001A1A74u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_001A1A74: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A1A9D; /* jbe: below or equal (unsigned <=) */

loc_001A1A7C: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1A9D; /* je: equal / zero */

loc_001A1A82: ;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx - esi;
    eax = 0; /* xor self */
    edx = MEM32(ebp + -52);
    edi = edx + esi;
    edx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001A1A9D: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x001A1AABu); RECOMP_ABI_CALL(0x001A1287u, sub_001A1287); /* call 0x001A1287 */

loc_001A1AAB: ;
    eax = MEM32(ebp + -52);

loc_001A1AAE: ;
    MEM32(ebp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1B12; /* jne: not equal / not zero */

loc_001A1AB7: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B12; /* je: equal / zero */

loc_001A1ABD: ;
    MEM32(ebp + -332) = 0xC0000017u;
    MEM32(ebp + -324) = MEM32(ebp + -324) & 0;
    MEM32(ebp + -316) = 1;
    MEM32(ebp + -328) = MEM32(ebp + -328) & 0;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -312) = eax;
    eax = ebp + -332;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C78); PUSH32(esp, 0x001A1AF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1AF5: ;
    goto loc_001A1B12;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000017u (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

loc_001A1B12: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x001A1B1Fu); RECOMP_ABI_CALL(0x001A1B93u, sub_001A1B93); /* call 0x001A1B93 */

loc_001A1B1F: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1B89; /* jne: not equal / not zero */

loc_001A1B27: ;
    MEM32(ebp + -148) = ecx;
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B5A; /* je: equal / zero */

loc_001A1B4B: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A1B57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1B57: ;
    ecx = MEM32(ebp + 0x10);

loc_001A1B5A: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B89; /* je: equal / zero */

loc_001A1B7A: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A1B86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1B86: ;
    ecx = MEM32(ebp + 0x10);

loc_001A1B89: ;
    eax = ecx;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x001A1B90u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A1B90: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A1AF7
 * Original: 0x001A1AF7 - 0x001A1B93 (156 bytes, 44 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1AF7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A1AF7: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000017u (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1B89; /* jne: not equal / not zero */

loc_001A1B27: ;
    MEM32(ebp + -148) = ecx;
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B5A; /* je: equal / zero */

loc_001A1B4B: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A1B57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1B57: ;
    ecx = MEM32(ebp + 0x10);

loc_001A1B5A: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B89; /* je: equal / zero */

loc_001A1B7A: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A1B86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1B86: ;
    ecx = MEM32(ebp + 0x10);

loc_001A1B89: ;
    eax = ecx;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x001A1B90u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A1B90: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A1B0B
 * Original: 0x001A1B0B - 0x001A1B93 (136 bytes, 36 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1B0B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A1B0B: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x001A1B1Fu); RECOMP_ABI_CALL(0x001A1B93u, sub_001A1B93); /* call 0x001A1B93 */

loc_001A1B1F: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1B89; /* jne: not equal / not zero */

loc_001A1B27: ;
    MEM32(ebp + -148) = ecx;
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B5A; /* je: equal / zero */

loc_001A1B4B: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A1B57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1B57: ;
    ecx = MEM32(ebp + 0x10);

loc_001A1B5A: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1B89; /* je: equal / zero */

loc_001A1B7A: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A1B86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1B86: ;
    ecx = MEM32(ebp + 0x10);

loc_001A1B89: ;
    eax = ecx;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x001A1B90u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A1B90: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A1B93
 * Original: 0x001A1B93 - 0x001A1BA9 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1B93(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A1B93: ;
    _fa = (uint32_t)(MEM8(ebp + -29)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -29), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A1BA8; /* je: equal / zero */

loc_001A1B99: ;
    eax = MEM32(ebp + -44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x580));
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x001A1BA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1BA8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A1BA9
 * Original: 0x001A1BA9 - 0x001A1BD2 (41 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A1BA9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1BA9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x103);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1BC4u); RECOMP_ABI_CALL(0x001A3C8Cu, sub_001A3C8C); /* call 0x001A3C8C */

loc_001A1BC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A1BCE; /* jl: less (signed <) */

loc_001A1BC8: ;
    eax = ZX8(MEM8(ebp + -3));
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_001A1BCE: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001A1BD2
 * Original: 0x001A1BD2 - 0x001A1BDA (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1BD2(void)
{

loc_001A1BD2: ;
    eax = MEM32(0x3C6CC8);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001A1BDA
 * Original: 0x001A1BDA - 0x001A1C23 (73 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A1BDA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1BDA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1BF2u); RECOMP_ABI_CALL(0x001A3C8Cu, sub_001A3C8C); /* call 0x001A3C8C */

loc_001A1BF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A1C04; /* jl: less (signed <) */

loc_001A1BF6: ;
    eax = MEM32(ebp + -4);
    eax = eax >> 0x10;
    eax = eax & 0x5F;
    MEM32(ebp + -4) = eax;
    goto loc_001A1C08;

loc_001A1C04: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_001A1C08: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1C0Du); RECOMP_ABI_CALL(0x001A1BD2u, sub_001A1BD2); /* call 0x001A1BD2 */

loc_001A1C0D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A1C1A; /* jne: not equal / not zero */

loc_001A1C10: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1C15u); RECOMP_ABI_CALL(0x001A1BA9u, sub_001A1BA9); /* call 0x001A1BA9 */

loc_001A1C15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1C1E; /* jne: not equal / not zero */

loc_001A1C1A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF1u;

loc_001A1C1E: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001A1C23
 * Original: 0x001A1C23 - 0x001A1C97 (116 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A1C23(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1C23: ;
    PUSH32(esp, 0x001A1C28u); RECOMP_ABI_CALL(0x001A3639u, sub_001A3639); /* call 0x001A3639 */

loc_001A1C28: ;
    PUSH32(esp, 0x001A1C2Du); RECOMP_ABI_CALL(0x001A23F3u, sub_001A23F3); /* call 0x001A23F3 */

loc_001A1C2D: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1C42; /* je: equal / zero */

loc_001A1C3D: ;
    ecx = MEM32(eax + 0x24);
    goto loc_001A1C44;

loc_001A1C42: ;
    ecx = 0; /* xor self */

loc_001A1C44: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1C6F; /* je: equal / zero */

loc_001A1C48: ;
    PUSH32(esp, edi);
    eax = MEM32(XBOX_FS_BASE + 0x28);
    edi = MEM32(XBOX_FS_BASE + 4);
    edx = MEM32(0x5BA794);
    edx = MEM32(edi + edx * 4);
    edx = edx - MEM32(eax + 0x28);
    MEM8(ecx) = 1;
    edx = edx + 8;
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);

loc_001A1C6F: ;
    PUSH32(esp, 0x001A1C74u); RECOMP_ABI_CALL(0x001A35ACu, sub_001A35AC); /* call 0x001A35AC */

loc_001A1C74: ;
    PUSH32(esp, 0x001A1C79u); RECOMP_ABI_CALL(0x001A3554u, sub_001A3554); /* call 0x001A3554 */

loc_001A1C79: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A1C84u); RECOMP_ABI_CALL(0x00011E40u, sub_00011E40); /* call 0x00011E40 */

loc_001A1C84: ;
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001A1C92u); RECOMP_ABI_CALL(0x001A237Du, sub_001A237D); /* call 0x001A237D */

loc_001A1C92: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * xbe_entry_point
 * Original: 0x001A1C97 - 0x001A1D09 (114 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xbe_entry_point(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1C97: ;
    ecx = MEM32(0x10118);
    eax = MEM32(0x10108);
    eax = eax - ecx;
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A1CAF; /* jae: above or equal (unsigned >=) */

loc_001A1CAD: ;
    MEM32(ecx) = eax;

loc_001A1CAF: ;
    eax = MEM32(0x3E1D90);
    eax = eax - MEM32(0x3E1D80);
    ecx = MEM32(0x3E1D84);
    PUSH32(esp, esi);
    eax = eax + ecx + 0xF;
    PUSH32(esp, edi);
    eax = eax & 0xFFFFFFF0u;
    PUSH32(esp, 0xFFFFFFFCu);
    POP32(esp, ecx);
    eax = eax + 4;
    MEM32(0x5DD0E4) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(0x3E1D88);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A1C23);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x001A1CF0u); RECOMP_ABI_CALL(0x0019F22Eu, sub_0019F22E); /* call 0x0019F22E */

loc_001A1CF0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1D00; /* jne: not equal / not zero */

loc_001A1CF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001A1D00u); RECOMP_ABI_CALL(0x001A237Du, sub_001A237D); /* call 0x001A237D */

loc_001A1D00: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001A1D06u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_001A1D06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A1D09
 * Original: 0x001A1D09 - 0x001A1D31 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1D09(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1D09: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A1D1B; /* jae: above or equal (unsigned >=) */

loc_001A1D15: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);

loc_001A1D1B: ;
    eax = MEM32(0x5BA794);
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(ecx + eax * 4);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001A1D31
 * Original: 0x001A1D31 - 0x001A1D5F (46 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1D31(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1D31: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A1D43; /* jae: above or equal (unsigned >=) */

loc_001A1D3D: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);

loc_001A1D43: ;
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(0x5BA794);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A1D5F
 * Original: 0x001A1D5F - 0x001A1D76 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1D5F(void)
{

loc_001A1D5F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x3C6BCC); PUSH32(esp, 0x001A1D69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1D69: ;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A1D71u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_001A1D71: ;
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A1D76
 * Original: 0x001A1D76 - 0x001A1DDB (101 bytes, 36 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1D76(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1D76: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x103 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1DBB; /* jne: not equal / not zero */

loc_001A1D83: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A1D9F; /* je: equal / zero */

loc_001A1D8A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A1D95; /* jne: not equal / not zero */

loc_001A1D91: ;
    eax = MEM32(esp + 8);

loc_001A1D95: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A1D9Du); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_001A1D9D: ;
    goto loc_001A1DA4;

loc_001A1D9F: ;
    eax = 0x102;

loc_001A1DA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1DB7; /* jne: not equal / not zero */

loc_001A1DAB: ;
    PUSH32(esp, 0x3E4);
    PUSH32(esp, 0x001A1DB5u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_001A1DB5: ;
    goto loc_001A1DD5;

loc_001A1DB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A1DD5; /* jne: not equal / not zero */

loc_001A1DBB: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A1DCF; /* jl: less (signed <) */

loc_001A1DCA: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001A1DD7;

loc_001A1DCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A1DD5u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A1DD5: ;
    eax = 0; /* xor self */

loc_001A1DD7: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A1DDB
 * Original: 0x001A1DDB - 0x001A1E7B (160 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A1DDB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1DDB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_001A1E63; /* jns: not sign (positive) */

loc_001A1DE6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xF000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A1DFA; /* jne: not equal / not zero */

loc_001A1DEE: ;
    esi = esi & 0xFCFFFFFFu;
    esi = esi | 0xC000000;

loc_001A1DFA: ;
    ecx = esi;
    ecx = ecx >> 0x18;
    eax = esi;
    eax = eax >> 0x1C;
    ecx = ecx & 0xF;
    eax = eax & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    PUSH32(esp, MEM32(eax * 4 + 0x4615F4));
    if (CMP_NE(_fa, _fb)) goto loc_001A1E2C; /* jne: not equal / not zero */

loc_001A1E16: ;
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0xFFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1E2Au); RECOMP_ABI_CALL(0x0019EE89u, sub_0019EE89); /* call 0x0019EE89 */

loc_001A1E2A: ;
    goto loc_001A1E3C;

loc_001A1E2C: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1E3Cu); RECOMP_ABI_CALL(0x0019EE46u, sub_0019EE46); /* call 0x0019EE46 */

loc_001A1E3C: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1E74; /* je: equal / zero */

loc_001A1E42: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A1E74; /* je: equal / zero */

loc_001A1E4A: ;
    ecx = MEM32(ebp + 8);
    esi = ecx;
    PUSH32(esp, edi);
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
    POP32(esp, edi);
    goto loc_001A1E74;

loc_001A1E63: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = esi >> 0x18;
    esi = esi & 0x40;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1E72u); RECOMP_ABI_CALL(0x0019ED7Bu, sub_0019ED7B); /* call 0x0019ED7B */

loc_001A1E72: ;
    edx = eax;

loc_001A1E74: ;
    eax = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A1E7B
 * Original: 0x001A1E7B - 0x001A1E95 (26 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1E7B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1E7B: ;
    _fa = (uint32_t)(MEM8(esp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xB), 0x80 (8-bit) */
    PUSH32(esp, MEM32(esp + 4));
    if (TEST_Z(_fa, _fb)) goto loc_001A1E8D; /* je: equal / zero */

loc_001A1E86: ;
    PUSH32(esp, 0x001A1E8Bu); RECOMP_ABI_CALL(0x0019EEBCu, sub_0019EEBC); /* call 0x0019EEBC */

loc_001A1E8B: ;
    goto loc_001A1E92;

loc_001A1E8D: ;
    PUSH32(esp, 0x001A1E92u); RECOMP_ABI_CALL(0x0019ED98u, sub_0019ED98); /* call 0x0019ED98 */

loc_001A1E92: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A1E95
 * Original: 0x001A1E95 - 0x001A1F0D (120 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A1E95(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1E95: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x2C;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 3);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = 0x40;
    { uint32_t _icall_target = MEM32(0x3C6BA8); PUSH32(esp, 0x001A1ECBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1ECB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A1F06; /* jl: less (signed <) */

loc_001A1ED1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BA4); PUSH32(esp, 0x001A1EE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1EE6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A1EF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1EF1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A1F06; /* jl: less (signed <) */

loc_001A1EF5: ;
    eax = MEM32(ebp + -28);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -24));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A1F06; /* je: equal / zero */

loc_001A1F01: ;
    esi = 0xC000014Fu;

loc_001A1F06: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A1F0D
 * Original: 0x001A1F0D - 0x001A1FF4 (231 bytes, 94 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A1F0D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1F0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi;
    esi = eax + 1;
    ebx = 0; /* xor self */

loc_001A1F20: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1F20; /* jne: not equal / not zero */

loc_001A1F27: ;
    ecx = MEM32(ebp + 0x10);
    eax = eax - esi;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = eax + edi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1F3Bu); RECOMP_ABI_CALL(0x001A29C5u, sub_001A29C5); /* call 0x001A29C5 */

loc_001A1F3B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x001A1F46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1F46: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -16;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40100000);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = ebx;
    MEM32(ebp + -20) = 0x40;
    { uint32_t _icall_target = MEM32(0x3C6BDC); PUSH32(esp, 0x001A1F76u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1F76: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esi) = LO8(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_001A1FE1; /* jl: less (signed <) */

loc_001A1F7E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -84;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x3C6BF8); PUSH32(esp, 0x001A1F93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1F93: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A1FD6; /* jl: less (signed <) */

loc_001A1F99: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1FD6; /* jne: not equal / not zero */

loc_001A1F9E: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1FD6; /* jne: not equal / not zero */

loc_001A1FA3: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1FABu); RECOMP_ABI_CALL(0x001A3765u, sub_001A3765); /* call 0x001A3765 */

loc_001A1FAB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A1FD6; /* je: equal / zero */

loc_001A1FB1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1FBAu); RECOMP_ABI_CALL(0x001A37A4u, sub_001A37A4); /* call 0x001A37A4 */

loc_001A1FBA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x3C6BB0); PUSH32(esp, 0x001A1FCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1FCC: ;
    PUSH32(esp, MEM32(ebp + 8));
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A1FD6u); RECOMP_ABI_CALL(0x001A3786u, sub_001A3786); /* call 0x001A3786 */

loc_001A1FD6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A1FDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A1FDF: ;
    goto loc_001A1FEB;

loc_001A1FE1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC0000035u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A1FEB; /* jne: not equal / not zero */

loc_001A1FE9: ;
    edi = 0; /* xor self */

loc_001A1FEB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A1FF4
 * Original: 0x001A1FF4 - 0x001A2328 (820 bytes, 271 insns)
 * Category: game_io
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A1FF4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A1FF4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x284;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4021);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    edi = 0x80;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -8) = 0x40;
    MEM32(ebp + -12) = esi;
    { uint32_t _icall_target = MEM32(0x3C6BDC); PUSH32(esp, 0x001A2039u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2039: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001A204B; /* jl: less (signed <) */

loc_001A2040: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A2049u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2049: ;
    goto loc_001A2055;

loc_001A204B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000103u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000103u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A2055; /* jne: not equal / not zero */

loc_001A2052: ;
    MEM32(ebp + 0xC) = ebx;

loc_001A2055: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A231E; /* jl: less (signed <) */

loc_001A205E: ;
    eax = MEM32(esi + 4);
    edx = ebp + -360;
    edx = edx - eax;

loc_001A2069: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A2069; /* jne: not equal / not zero */

loc_001A2073: ;
    SET_LO16(ecx, MEM16(esi));
    eax = ZX16(LO16(ecx));
    eax = ebp + eax + -360;
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A208B; /* je: equal / zero */

loc_001A2086: ;
    MEM8(eax) = 0x5C;
    goto loc_001A208F;

loc_001A208B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi) = LO16(ecx);

loc_001A208F: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(ebp + 0x10);
    eax = eax - ecx;
    eax = ebp + eax + -359;

loc_001A209E: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A209E; /* jne: not equal / not zero */

loc_001A20A8: ;
    eax = ebp + -360;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x001A20B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A20B9: ;
    eax = ebp + -36;
    MEM32(ebp + -12) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -8) = 0x40;
    eax = eax + eax + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x120117);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BDC); PUSH32(esp, 0x001A20F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A20F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001A231E; /* jl: less (signed <) */

loc_001A2101: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A212F; /* je: equal / zero */

loc_001A2106: ;
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -84;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BD8); PUSH32(esp, 0x001A211Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A211A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x28);
    eax = ebp + -84;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BD4); PUSH32(esp, 0x001A212Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A212F: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2300; /* je: equal / zero */

loc_001A213A: ;
    PUSH32(esp, 0x3E1D2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2144u); RECOMP_ABI_CALL(0x001A36FEu, sub_001A36FE); /* call 0x001A36FE */

loc_001A2144: ;
    PUSH32(esp, 0x3E1D20);
    MEM32(ebp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2151u); RECOMP_ABI_CALL(0x001A36FEu, sub_001A36FE); /* call 0x001A36FE */

loc_001A2151: ;
    PUSH32(esp, 0x3E1D14);
    MEM32(ebp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A215Eu); RECOMP_ABI_CALL(0x001A36FEu, sub_001A36FE); /* call 0x001A36FE */

loc_001A215E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + -28) = eax;
    edi = 0x104;
    if (CMP_NE(_fa, _fb)) goto loc_001A2175; /* jne: not equal / not zero */

loc_001A216C: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A22BA; /* je: equal / zero */

loc_001A2175: ;
    eax = ebp + -360;
    esi = eax + 1;

loc_001A217E: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A217E; /* jne: not equal / not zero */

loc_001A2185: ;
    eax = eax - esi;
    ecx = edi;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    esi = ebp + eax + -360;
    PUSH32(esp, 0x3E1C48);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A219Eu); RECOMP_ABI_CALL(0x001A29C5u, sub_001A29C5); /* call 0x001A29C5 */

loc_001A219E: ;
    eax = ebp + -360;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x001A21AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A21AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -44;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40100000);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -8) = 0x40;
    { uint32_t _icall_target = MEM32(0x3C6BDC); PUSH32(esp, 0x001A21DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A21DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    MEM8(esi) = LO8(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_001A22B0; /* jl: less (signed <) */

loc_001A21EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -100;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x3C6BF8); PUSH32(esp, 0x001A2201u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2201: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001A22A5; /* jl: less (signed <) */

loc_001A220C: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A22A5; /* jne: not equal / not zero */

loc_001A2215: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A22A5; /* jne: not equal / not zero */

loc_001A221E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A225A; /* je: equal / zero */

loc_001A2224: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A222Cu); RECOMP_ABI_CALL(0x001A3765u, sub_001A3765); /* call 0x001A3765 */

loc_001A222C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A225A; /* je: equal / zero */

loc_001A2232: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A223Bu); RECOMP_ABI_CALL(0x001A37A4u, sub_001A37A4); /* call 0x001A37A4 */

loc_001A223B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x3C6BB0); PUSH32(esp, 0x001A224Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A224D: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2258u); RECOMP_ABI_CALL(0x001A3786u, sub_001A3786); /* call 0x001A3786 */

loc_001A2258: ;
    goto loc_001A22A5;

loc_001A225A: ;
    PUSH32(esp, 0x3E1CEC);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -644;
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x3E1CA8);
    PUSH32(esp, 0xFEFF);
    PUSH32(esp, 0x3E1A4C);
    PUSH32(esp, 0x8E);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2284u); RECOMP_ABI_CALL(0x003435A2u, sub_003435A2); /* call 0x003435A2 */

loc_001A2284: ;
    esp = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = eax << 1;
    PUSH32(esp, eax);
    eax = ebp + -644;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x3C6BB0); PUSH32(esp, 0x001A22A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A22A2: ;
    MEM32(ebp + 0xC) = eax;

loc_001A22A5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A22AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A22AE: ;
    goto loc_001A22BA;

loc_001A22B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000035u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A22BA; /* jne: not equal / not zero */

loc_001A22B7: ;
    MEM32(ebp + 0xC) = ebx;

loc_001A22BA: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A2300; /* jl: less (signed <) */

loc_001A22BF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A22DD; /* je: equal / zero */

loc_001A22C5: ;
    PUSH32(esp, 0x3E1C5C);
    PUSH32(esp, edi);
    eax = ebp + -360;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A22DAu); RECOMP_ABI_CALL(0x001A1F0Du, sub_001A1F0D); /* call 0x001A1F0D */

loc_001A22DA: ;
    MEM32(ebp + 0xC) = eax;

loc_001A22DD: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A2300; /* jl: less (signed <) */

loc_001A22E2: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2300; /* je: equal / zero */

loc_001A22E8: ;
    PUSH32(esp, 0x3E1C70);
    PUSH32(esp, edi);
    eax = ebp + -360;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A22FDu); RECOMP_ABI_CALL(0x001A1F0Du, sub_001A1F0D); /* call 0x001A1F0D */

loc_001A22FD: ;
    MEM32(ebp + 0xC) = eax;

loc_001A2300: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A2309u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2309: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A231E; /* jl: less (signed <) */

loc_001A230E: ;
    eax = ebp + -36;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BBC); PUSH32(esp, 0x001A231Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A231B: ;
    MEM32(ebp + 0xC) = eax;

loc_001A231E: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001A2328
 * Original: 0x001A2328 - 0x001A237D (85 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A2328(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A2328: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, 0x3E1964);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A233Fu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_001A233F: ;
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x461624);
    PUSH32(esp, 0x46161C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A235Bu); RECOMP_ABI_CALL(0x001A1FF4u, sub_001A1FF4); /* call 0x001A1FF4 */

loc_001A235B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A2379; /* jl: less (signed <) */

loc_001A235F: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -12;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x461634);
    PUSH32(esp, 0x46162C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2379u); RECOMP_ABI_CALL(0x001A1FF4u, sub_001A1FF4); /* call 0x001A1FF4 */

loc_001A2379: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A237D
 * Original: 0x001A237D - 0x001A23E2 (101 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A237D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A237D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC00;
    eax = MEM32(0x10118);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0xFFFE0000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A23D9; /* je: equal / zero */

loc_001A2394: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x300;
    edi = ebp + -3072;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -3068) = MEM32(ebp + -3068) & 0;
    MEM32(ebp + -3072) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -3064) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -3060) = eax;
    eax = ebp + -3072;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A23D4u); RECOMP_ABI_CALL(0x0019EB69u, sub_0019EB69); /* call 0x0019EB69 */

loc_001A23D4: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_001A23D9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(0x3C6C40); PUSH32(esp, 0x001A23E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A23E1: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_001A23E2
 * Original: 0x001A23E2 - 0x001A23F3 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A23E2(void)
{

loc_001A23E2: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001A23F0u); RECOMP_ABI_CALL(0x001A1E95u, sub_001A1E95); /* call 0x001A1E95 */

loc_001A23F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A23F3
 * Original: 0x001A23F3 - 0x001A2562 (367 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A23F3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A23F3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0x461694);
    MEM32(ebp + -4) = esi;
    { uint32_t _icall_target = MEM32(0x3C6CD0); PUSH32(esp, 0x001A2410u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2410: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2415u); RECOMP_ABI_CALL(0x001A3800u, sub_001A3800); /* call 0x001A3800 */

loc_001A2415: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -52;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -52;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ebp + -52) = 0x30;
    PUSH32(esp, MEM32(0x10138));
    PUSH32(esp, MEM32(0x10134));
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2441u); RECOMP_ABI_CALL(0x001A06E8u, sub_001A06E8); /* call 0x001A06E8 */

loc_001A2441: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x5DD0E8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A249A; /* je: equal / zero */

loc_001A244A: ;
    _fa = (uint32_t)(MEM8(0x10124)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x10124), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A2475; /* jne: not equal / not zero */

loc_001A2453: ;
    PUSH32(esp, 0x461614);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A245Du); RECOMP_ABI_CALL(0x001A23E2u, sub_001A23E2); /* call 0x001A23E2 */

loc_001A245D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A2475; /* jge: greater or equal (signed >=) */

loc_001A2461: ;
    PUSH32(esp, 2);

loc_001A2463: ;
    eax = ebx;
    POP32(esp, ecx);

loc_001A2466: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2470u); RECOMP_ABI_CALL(0x001A237Du, sub_001A237D); /* call 0x001A237D */

loc_001A2470: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_001A2475: ;
    eax = MEM32(0x3C6CCC);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A24A0; /* jne: not equal / not zero */

loc_001A247F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x46160C);
    PUSH32(esp, 0x461604);
    { uint32_t _icall_target = MEM32(0x3C6BBC); PUSH32(esp, 0x001A248Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A248F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A24A0; /* jge: greater or equal (signed >=) */

loc_001A2493: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000035u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A24A0; /* je: equal / zero */

loc_001A249A: ;
    eax = ebx;
    ecx = ebx;
    goto loc_001A2466;

loc_001A24A0: ;
    _fa = (uint32_t)(MEM8(0x10124)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x10124), 0x18 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A24D4; /* jne: not equal / not zero */

loc_001A24A9: ;
    eax = MEM32(0x10118);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A24BAu); RECOMP_ABI_CALL(0x001A2328u, sub_001A2328); /* call 0x001A2328 */

loc_001A24BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A24D4; /* jge: greater or equal (signed >=) */

loc_001A24BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000007Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000007Fu (32-bit) */
    PUSH32(esp, 2);
    if (CMP_NE(_fa, _fb)) goto loc_001A2463; /* jne: not equal / not zero */

loc_001A24C7: ;
    POP32(esp, eax);
    PUSH32(esp, 0x54);
    POP32(esp, ecx);
    MEM32(ebp + -4) = 0x10;
    goto loc_001A2466;

loc_001A24D4: ;
    eax = MEM32(0x10124);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A24F7; /* jne: not equal / not zero */

loc_001A24DD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A24F7; /* je: equal / zero */

loc_001A24E1: ;
    eax = eax & 2;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A24EAu); RECOMP_ABI_CALL(0x0019CEDDu, sub_0019CEDD); /* call 0x0019CEDD */

loc_001A24EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A24F7; /* jne: not equal / not zero */

loc_001A24EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A24F7u); RECOMP_ABI_CALL(0x001A237Du, sub_001A237D); /* call 0x001A237D */

loc_001A24F7: ;
    eax = MEM32(0x10118);
    edi = MEM32(eax + 0xA4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2507u); RECOMP_ABI_CALL(0x001A37AEu, sub_001A37AE); /* call 0x001A37AE */

loc_001A2507: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A2518; /* jae: above or equal (unsigned >=) */

loc_001A250B: ;
    PUSH32(esp, 4);
    eax = ebx;
    POP32(esp, ecx);
    MEM32(ebp + -4) = edi;
    goto loc_001A2466;

loc_001A2518: ;
    eax = MEM32(0x3C6C38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A2538; /* je: equal / zero */

loc_001A2521: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A2538; /* je: equal / zero */

loc_001A2527: ;
    esi = eax;
    eax = esi + 0x214;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A2538; /* je: equal / zero */

loc_001A2533: ;
    eax = MEM32(eax + 4);
    MEM32(esi) = eax;

loc_001A2538: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A253Du); RECOMP_ABI_CALL(0x001A3392u, sub_001A3392); /* call 0x001A3392 */

loc_001A253D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A2470; /* je: equal / zero */

loc_001A2545: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A2470; /* jne: not equal / not zero */

loc_001A254E: ;
    eax = MEM32(0x3C6C38);
    MEM32(eax) = MEM32(eax) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6C3C); PUSH32(esp, 0x001A255Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A255D: ;
    goto loc_001A2470;

}

/**
 * sub_001A2562
 * Original: 0x001A2562 - 0x001A2886 (804 bytes, 311 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A2562(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A2562: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x70));
    esp = esp - 0x70;
    eax = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    MEM32(ebp + -52) = eax;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100003);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -56) = edi;
    MEM32(ebp + -48) = 0x40;
    { uint32_t _icall_target = MEM32(0x3C6BA8); PUSH32(esp, 0x001A2595u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2595: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001A25A6; /* jge: greater or equal (signed >=) */

loc_001A2599: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A259Fu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A259F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001A2881;

loc_001A25A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x3C6C00);
    PUSH32(esp, 0x18);
    eax = ebp + -80;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x70000);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A25C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A25C7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001A25DC; /* jge: greater or equal (signed >=) */

loc_001A25CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A25D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A25D6: ;
    PUSH32(esp, ebx);
    goto loc_001A2878;

loc_001A25DC: ;
    ecx = MEM32(ebp + -60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A25E4u); RECOMP_ABI_CALL(0x001A3550u, sub_001A3550); /* call 0x001A3550 */

loc_001A25E4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -16) = eax;
    eax = ebp + -112;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x74004);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A2603u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2603: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001A2618; /* jge: greater or equal (signed >=) */

loc_001A2609: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A2612u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2612: ;
    PUSH32(esp, esi);
    goto loc_001A2878;

loc_001A2618: ;
    ebx = MEM32(ebp + -60);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xFFF)) >> 32) & 1);
    ebx = ebx + 0xFFF;
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFF000u;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001A262F; /* jae: above or equal (unsigned >=) */

loc_001A262C: ;
    MEM32(ebp + 0xC) = ebx;

loc_001A262F: ;
    eax = 0x1000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001A263E; /* jbe: below or equal (unsigned <=) */

loc_001A263B: ;
    MEM32(ebp + -12) = ebx;

loc_001A263E: ;
    esi = MEM32(ebp + -100);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(ebp + -104);
    if (CMP_B(_fa, _fb)) goto loc_001A264F; /* jb: below (unsigned <) */

loc_001A2648: ;
    if (CMP_A(_fa, _fb)) goto loc_001A26A4; /* ja: above (unsigned >) */

loc_001A264A: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001A26A4; /* jae: above or equal (unsigned >=) */

loc_001A264F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A265Cu); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_001A265C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFF0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001A266C; /* jae: above or equal (unsigned >=) */

loc_001A2664: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    MEM8(ebp + 0xB) = 1;
    goto loc_001A2673;

loc_001A266C: ;
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    MEM8(ebp + 0xB) = 0;

loc_001A2673: ;
    ecx = ebx + -1;
    ecx = ~ecx;
    eax = eax + ebx + -1;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(MEM32(ebp + -12)));
    edi = edi - MEM32(ebp + -12);
    PUSH32(esp, 0);
    POP32(esp, ecx);
    { uint64_t _t = (uint64_t)(esi) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -20) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001A2693; /* jb: below (unsigned <) */

loc_001A268D: ;
    if (CMP_A(_fa, _fb)) goto loc_001A26A4; /* ja: above (unsigned >) */

loc_001A268F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001A26A4; /* ja: above (unsigned >) */

loc_001A2693: ;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    { uint64_t _t = (uint64_t)(esi) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* sbb */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001A26B9; /* jb: below (unsigned <) */

loc_001A269D: ;
    if (CMP_A(_fa, _fb)) goto loc_001A26A4; /* ja: above (unsigned >) */

loc_001A269F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001A26B9; /* jbe: below or equal (unsigned <=) */

loc_001A26A4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A26ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A26AD: ;
    PUSH32(esp, 0x70);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A26B4u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_001A26B4: ;
    goto loc_001A287D;

loc_001A26B9: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A26C4u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_001A26C4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001A26DD; /* jne: not equal / not zero */

loc_001A26CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A26D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A26D3: ;
    PUSH32(esp, 0xC000009Au);
    goto loc_001A2878;

loc_001A26DD: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    ecx = ebx;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0xC);
    if (LO8(ecx)) _cf = (int)(((eax) >> ((LO8(ecx)) - 1)) & 1);
    eax = eax >> LO8(ecx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    MEM32(esi) = 0x58544146;
    MEM32(esi + 0xC) = 1;
    eax = ZX8(LO8(eax));
    MEM32(esi + 8) = eax;
    eax = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM16(esi + 0x10) = LO16(edi);
    { uint32_t _icall_target = MEM32(0x3C6BD8); PUSH32(esp, 0x001A271Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A271D: ;
    eax = MEM32(ebp + -44);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -8) = eax;

loc_001A272F: ;
    eax = ebp + -28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BB0); PUSH32(esp, 0x001A2745u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2745: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001A2770; /* jl: less (signed <) */

loc_001A274C: ;
    ecx = ebx;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    _cf = (int)((((uint64_t)(MEM32(ebp + -28)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(ebp + -28) = MEM32(ebp + -28) + ebx;
    { uint64_t _t = (uint64_t)(MEM32(ebp + -24)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -24) = (uint32_t)_t; }  /* adc */
    _cf = (int)((uint32_t)(MEM32(ebp + -8)) < (uint32_t)(ebx));
    MEM32(ebp + -8) = MEM32(ebp + -8) - ebx;
    if ((MEM32(ebp + -8) == 0)) goto loc_001A2780; /* je: equal / zero */

loc_001A276C: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    goto loc_001A272F;

loc_001A2770: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A277Bu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_001A277B: ;
    goto loc_001A2849;

loc_001A2780: ;
    ecx = ebx;
    edx = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(ebp + -12);
    MEM32(ebp + -28) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A27B8; /* je: equal / zero */

loc_001A27AB: ;
    _cf = 0; /* logical op clears CF */
    MEM16(esi + 2) = MEM16(esi + 2) | 0xFFFF;
    MEM16(esi) = 0xFFF8;
    goto loc_001A27C2;

loc_001A27B8: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    MEM32(esi) = 0xFFFFFFF8u;

loc_001A27C2: ;
    eax = ebp + -28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BB0); PUSH32(esp, 0x001A27DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A27DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001A283C; /* jl: less (signed <) */

loc_001A27E1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = esi;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _cf = (int)((((uint64_t)(MEM32(ebp + -28)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(ebp + -28) = MEM32(ebp + -28) + ebx;
    PUSH32(esp, 0);
    POP32(esp, eax);
    { uint64_t _t = (uint64_t)(MEM32(ebp + -24)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -24) = (uint32_t)_t; }  /* adc */
    _cf = (int)((uint32_t)(MEM32(ebp + -8)) < (uint32_t)(ebx));
    MEM32(ebp + -8) = MEM32(ebp + -8) - ebx;
    if ((MEM32(ebp + -8) != 0)) goto loc_001A27C2; /* jne: not equal / not zero */

loc_001A27F5: ;
    ecx = ebx;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;

loc_001A2810: ;
    eax = ebp + -28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BB0); PUSH32(esp, 0x001A2828u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2828: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001A283C; /* jl: less (signed <) */

loc_001A282F: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + -28)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(ebp + -28) = MEM32(ebp + -28) + ebx;
    PUSH32(esp, edi);
    POP32(esp, eax);
    { uint64_t _t = (uint64_t)(MEM32(ebp + -24)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -24) = (uint32_t)_t; }  /* adc */
    _cf = (int)((uint32_t)(MEM32(ebp + -8)) < (uint32_t)(ebx));
    MEM32(ebp + -8) = MEM32(ebp + -8) - ebx;
    if ((MEM32(ebp + -8) != 0)) goto loc_001A2810; /* jne: not equal / not zero */

loc_001A283C: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2847u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_001A2847: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */

loc_001A2849: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x90020);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BD0); PUSH32(esp, 0x001A2862u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2862: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A286Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A286B: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001A2875; /* jl: less (signed <) */

loc_001A2870: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001A287F;

loc_001A2875: ;
    PUSH32(esp, MEM32(ebp + -16));

loc_001A2878: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A287Du); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A287D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_001A287F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001A2881: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A2886
 * Original: 0x001A2886 - 0x001A28F2 (108 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A2886(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A2886: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x001A2899u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2899: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0x80);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 0);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    { uint32_t _icall_target = MEM32(0x3C6BDC); PUSH32(esp, 0x001A28D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A28D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A28E6; /* jl: less (signed <) */

loc_001A28D8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A28E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A28E1: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001A28EE;

loc_001A28E6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A28ECu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A28EC: ;
    eax = 0; /* xor self */

loc_001A28EE: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A28F2
 * Original: 0x001A28F2 - 0x001A2980 (142 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A28F2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A28F2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x001A2905u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2905: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 7);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x110000);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -32) = 0xFFFFFFFDu;
    MEM32(ebp + -24) = 0x40;
    { uint32_t _icall_target = MEM32(0x3C6BA8); PUSH32(esp, 0x001A2937u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2937: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A2945; /* jge: greater or equal (signed >=) */

loc_001A293B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2941u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A2941: ;
    eax = 0; /* xor self */
    goto loc_001A297C;

loc_001A2945: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = ebp + 0xB;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM8(ebp + 0xB) = 1;
    { uint32_t _icall_target = MEM32(0x3C6BD4); PUSH32(esp, 0x001A295Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A295F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A296Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A296A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A2973; /* jl: less (signed <) */

loc_001A296E: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001A297B;

loc_001A2973: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2979u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A2979: ;
    eax = 0; /* xor self */

loc_001A297B: ;
    POP32(esp, esi);

loc_001A297C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A2980
 * Original: 0x001A2980 - 0x001A29C5 (69 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A2980: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 1);
    PUSH32(esp, 0x001A2995u); RECOMP_ABI_CALL(0x001A38E6u, sub_001A38E6); /* call 0x001A38E6 */

loc_001A2995: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001A29BE; /* jne: not equal / not zero */

loc_001A2999: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A29B6; /* je: equal / zero */

loc_001A299F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001A29B1; /* je: equal / zero */

loc_001A29A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001A29ADu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001A29AD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_001A29C1;

loc_001A29B1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001A29C1;

loc_001A29B6: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    goto loc_001A29C1;

loc_001A29BE: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFEu;

loc_001A29C1: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A29C5
 * Original: 0x001A29C5 - 0x001A2A2A (101 bytes, 39 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A29C5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A29C5: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3E1D38);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A29D1u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A29D1: ;
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -32) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2A0C; /* je: equal / zero */

loc_001A29E7: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2A06; /* je: equal / zero */

loc_001A29EC: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2A01; /* je: equal / zero */

loc_001A29F2: ;
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001A29E7;

loc_001A2A01: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A2A0A; /* jne: not equal / not zero */

loc_001A2A06: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;

loc_001A2A0A: ;
    MEM8(eax) = LO8(ebx);

loc_001A2A0C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    goto loc_001A2A22;

    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_001A2A22: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2A27u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A2A27: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A2A15
 * Original: 0x001A2A15 - 0x001A2A2A (21 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2A15(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A2A15: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A2A19
 * Original: 0x001A2A19 - 0x001A2A2A (17 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2A19(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A2A19: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x001A2A27u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001A2A27: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A2A2A
 * Original: 0x001A2A2A - 0x001A2BA7 (381 bytes, 145 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A2A2A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A2A2A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x4C));
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    MEM8(ebp + -8) = 1;
    PUSH32(esp, ebx);

loc_001A2A3A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x146);
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BE4); PUSH32(esp, 0x001A2A58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2A58: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -8) = LO8(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_001A2B46; /* jl: less (signed <) */

loc_001A2A65: ;
    eax = MEM32(esi + 0x3C);
    ebx = MEM32(esi + 0x38);
    MEM8(eax + esi + 0x40) = 0;
    eax = esi + 0x40;
    PUSH32(esp, eax);
    eax = ebp + -24;
    if (4) _cf = (int)(((ebx) >> ((4) - 1)) & 1);
    ebx = ebx >> 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) & 1);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x001A2A84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2A84: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -24;
    MEM32(ebp + -32) = ecx;
    SET_LO8(ecx, LO8(ebx));
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, 0x40);
    MEM32(ebp + -36) = eax;
    POP32(esp, eax);
    MEM32(ebp + -28) = eax;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFC1u;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x4000;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x110100;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BA8); PUSH32(esp, 0x001A2AC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2AC9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_001A2B46; /* jl: less (signed <) */

loc_001A2ACF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001A2ADE; /* je: equal / zero */

loc_001A2AD3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2ADCu); RECOMP_ABI_CALL(0x001A2A2Au, sub_001A2A2A); /* call 0x001A2A2A */

loc_001A2ADC: ;
    goto loc_001A2B35;

loc_001A2ADE: ;
    edx = MEM32(esi + 0x38);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001A2B16; /* je: equal / zero */

loc_001A2AE6: ;
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    edi = ebp + -76;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x28);
    eax = ebp + -76;
    PUSH32(esp, eax);
    eax = ebp + -16;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x3126;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x80;
    MEM32(ebp + -44) = edx;
    { uint32_t _icall_target = MEM32(0x3C6BD4); PUSH32(esp, 0x001A2B14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2B14: ;
    edi = eax;

loc_001A2B16: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_001A2B35; /* jl: less (signed <) */

loc_001A2B1A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = ebp + 0xF;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM8(ebp + 0xF) = 1;
    { uint32_t _icall_target = MEM32(0x3C6BD4); PUSH32(esp, 0x001A2B33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2B33: ;
    edi = eax;

loc_001A2B35: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A2B3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2B3E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A2A3A; /* jge: greater or equal (signed >=) */

loc_001A2B46: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000006u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80000006u (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2B57; /* je: equal / zero */

loc_001A2B4F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000000Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC000000Fu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A2B9F; /* jne: not equal / not zero */

loc_001A2B57: ;
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = ebp + -76;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x38);
    esi = MEM32(0x3C6BD4);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3126;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(ebp + -44) = eax;
    PUSH32(esp, 0x28);
    eax = ebp + -76;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A2B88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2B88: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = ebp + 0xF;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM8(ebp + 0xF) = 1;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001A2B9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2B9D: ;
    edi = eax;

loc_001A2B9F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A2BA7
 * Original: 0x001A2BA7 - 0x001A2C16 (111 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A2BA7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A2BA7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x164;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x001A2BBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2BBE: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    eax = ebp + -20;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 3);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x110101);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = 0x40;
    { uint32_t _icall_target = MEM32(0x3C6BA8); PUSH32(esp, 0x001A2BEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2BEF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A2C0F; /* jl: less (signed <) */

loc_001A2BF5: ;
    eax = ebp + -356;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2C04u); RECOMP_ABI_CALL(0x001A2A2Au, sub_001A2A2A); /* call 0x001A2A2A */

loc_001A2C04: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A2C0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2C0F: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A2C16
 * Original: 0x001A2C16 - 0x001A2C82 (108 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2C16(void)
{

loc_001A2C16: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(edx + 0x14) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(edx + 0x18) = ecx;
    ecx = MEM32(eax + 0x2C);
    MEM32(edx + 0x1C) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(edx + 0x20) = ecx;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    esi = eax + 0x40;
    edi = edx + 0x2C;
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
    eax = MEM32(eax + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + edx + 0x2C) = 0;
    MEM8(edx + 0x130) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A2C82
 * Original: 0x001A2C82 - 0x001A2D8F (269 bytes, 92 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A2C82(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A2C82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x16C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x001A2C9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2C9A: ;
    edx = MEM32(ebp + -4);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    eax = ZX16(MEM16(ebp + -8));
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    if (CMP_BE(_fa, _fb)) goto loc_001A2CC5; /* jbe: below or equal (unsigned <=) */

loc_001A2CBB: ;
    _fa = (uint32_t)(MEM8(edx + eax + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax + -1), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2CC5; /* je: equal / zero */

loc_001A2CC2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A2CBB; /* jne: not equal / not zero */

loc_001A2CC5: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx - eax;
    edx = edx + eax;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    MEM16(ebp + -16) = LO16(ecx);
    MEM16(ebp + -14) = LO16(ecx);
    MEM32(ebp + -12) = edx;
    MEM16(ebp + -8) = LO16(eax);
    MEM16(ebp + -6) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2D7F; /* je: equal / zero */

loc_001A2CE8: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2D7F; /* je: equal / zero */

loc_001A2CF1: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 3 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A2D0C; /* jne: not equal / not zero */

loc_001A2CF7: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x2A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A2D0C; /* jne: not equal / not zero */

loc_001A2CFC: ;
    _fa = (uint32_t)(MEM8(edx + 1)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 1), 0x2E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A2D0C; /* jne: not equal / not zero */

loc_001A2D02: ;
    _fa = (uint32_t)(MEM8(edx + 2)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 2), 0x2A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A2D0C; /* jne: not equal / not zero */

loc_001A2D08: ;
    MEM16(ebp + -16) = LO16(edi);

loc_001A2D0C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    PUSH32(esp, 3);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BA8); PUSH32(esp, 0x001A2D2Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2D2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A2D31; /* jge: greater or equal (signed >=) */

loc_001A2D2E: ;
    PUSH32(esp, eax);
    goto loc_001A2D64;

loc_001A2D31: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x148);
    eax = ebp + -364;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BE4); PUSH32(esp, 0x001A2D54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2D54: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A2D6B; /* jge: greater or equal (signed >=) */

loc_001A2D5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A2D63u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2D63: ;
    PUSH32(esp, esi);

loc_001A2D64: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2D69u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A2D69: ;
    goto loc_001A2D86;

loc_001A2D6B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -364;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2D7Au); RECOMP_ABI_CALL(0x001A2C16u, sub_001A2C16); /* call 0x001A2C16 */

loc_001A2D7A: ;
    eax = MEM32(ebp + 8);
    goto loc_001A2D89;

loc_001A2D7F: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2D86u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_001A2D86: ;
    eax = eax | 0xFFFFFFFFu;

loc_001A2D89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A2D8F
 * Original: 0x001A2D8F - 0x001A2DE0 (81 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A2D8F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A2D8F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x150;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x148);
    eax = ebp + -336;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BE4); PUSH32(esp, 0x001A2DBBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2DBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_001A2DCA; /* jge: greater or equal (signed >=) */

loc_001A2DC0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2DC6u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A2DC6: ;
    eax = 0; /* xor self */
    goto loc_001A2DDC;

loc_001A2DCA: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -336;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2DD9u); RECOMP_ABI_CALL(0x001A2C16u, sub_001A2C16); /* call 0x001A2C16 */

loc_001A2DD9: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A2DDC: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A2DE0
 * Original: 0x001A2DE0 - 0x001A2E02 (34 bytes, 12 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A2DE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001A2DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2DF7u); RECOMP_ABI_CALL(0x001A3C8Cu, sub_001A3C8C); /* call 0x001A3C8C */

loc_001A2DF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BCC); PUSH32(esp, 0x001A2DFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2DFE: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001A2E02
 * Original: 0x001A2E02 - 0x001A2E4C (74 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2E02(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A2E02: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x3E1D4C);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x001A2E1Bu); RECOMP_ABI_CALL(0x003433E9u, sub_003433E9); /* call 0x003433E9 */

loc_001A2E1B: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A2E42; /* jge: greater or equal (signed >=) */

loc_001A2E22: ;
    eax = MEM32(esp + 8);
    edx = eax + 1;

loc_001A2E29: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A2E29; /* jne: not equal / not zero */

loc_001A2E30: ;
    eax = eax - edx;
    eax = eax + 7;
    PUSH32(esp, 0x7A);
    MEM32(esi) = eax;
    PUSH32(esp, 0x001A2E3Eu); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_001A2E3E: ;
    eax = 0; /* xor self */
    goto loc_001A2E48;

loc_001A2E42: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A2E48: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A2E4C
 * Original: 0x001A2E4C - 0x001A2F18 (204 bytes, 77 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A2E4C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A2E4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x188;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 0x8000080);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2E74u); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_001A2E74: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2EE1; /* je: equal / zero */

loc_001A2E7B: ;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ebx = 0x178;
    PUSH32(esp, ebx);
    eax = ebp + -392;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2E93u); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_001A2E93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A2EE1; /* je: equal / zero */

loc_001A2E97: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A2EDA; /* jne: not equal / not zero */

loc_001A2E9C: ;
    eax = MEM32(ebp + -112);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -132) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A2EDA; /* jb: below (unsigned <) */

loc_001A2EA7: ;
    eax = eax - MEM32(ebp + -132);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2EB9u); RECOMP_ABI_CALL(0x0019E010u, sub_0019E010); /* call 0x0019E010 */

loc_001A2EB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A2EE1; /* je: equal / zero */

loc_001A2EBD: ;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    esi = 0x1D0;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2ED1u); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_001A2ED1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A2EE1; /* je: equal / zero */

loc_001A2ED5: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2F03; /* je: equal / zero */

loc_001A2EDA: ;
    PUSH32(esp, 0xD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2EE1u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_001A2EE1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2EE6u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_001A2EE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001A2EF1; /* jg: greater (signed >) */

loc_001A2EEA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2EEFu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_001A2EEF: ;
    goto loc_001A2F00;

loc_001A2EF1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2EF6u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_001A2EF6: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;

loc_001A2F00: ;
    MEM32(ebp + -4) = eax;

loc_001A2F03: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2F0E; /* je: equal / zero */

loc_001A2F08: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A2F0Eu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_001A2F0E: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A2F18
 * Original: 0x001A2F18 - 0x001A2F7C (100 bytes, 41 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A2F18(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A2F18: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = MEM32(edx) | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    MEM32(esi) = eax;
    ecx = MEM32(0x3C6C38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2F5E; /* je: equal / zero */

loc_001A2F34: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2F5E; /* je: equal / zero */

loc_001A2F3A: ;
    edi = ecx;
    ecx = edi + 0x214;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A2F58; /* je: equal / zero */

loc_001A2F47: ;
    ecx = ecx + 4;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    ecx = ecx + 4;
    eax = 0; /* xor self */
    MEM32(esi) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001A2F61;

loc_001A2F58: ;
    ecx = MEM32(edi);
    MEM32(edx) = ecx;
    goto loc_001A2F61;

loc_001A2F5E: ;
    edi = MEM32(ebp + 0xC);

loc_001A2F61: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2F76; /* je: equal / zero */

loc_001A2F66: ;
    esi = edi + 0x400;
    edi = MEM32(ebp + 0x10);
    ecx = 0x300;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_001A2F76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A2F7C
 * Original: 0x001A2F7C - 0x001A300E (146 bytes, 48 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A2F7C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A2F7C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x21C;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM8(edi) = 0;
    MEM32(ebp + -12) = 0x40;
    MEM32(ebp + -16) = 0x461604;
    { uint32_t _icall_target = MEM32(0x3C6BC4); PUSH32(esp, 0x001A2FACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2FAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A2FFB; /* jl: less (signed <) */

loc_001A2FB0: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    PUSH32(esp, esi);
    eax = ebp + -540;
    MEM32(ebp + -4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM16(ebp + -6) = 0x208;
    { uint32_t _icall_target = MEM32(0x3C6BC0); PUSH32(esp, 0x001A2FD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2FD4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x001A2FDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A2FDF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, esi);
    if (TEST_S(_fas, _fbs)) goto loc_001A2FFB; /* jl: less (signed <) */

loc_001A2FE4: ;
    eax = ZX16(MEM16(ebp + -8));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A2FF1; /* jae: above or equal (unsigned >=) */

loc_001A2FEE: ;
    eax = MEM32(ebp + 0xC);

loc_001A2FF1: ;
    PUSH32(esp, eax);
    eax = ebp + -540;
    PUSH32(esp, eax);
    goto loc_001A3003;

loc_001A2FFB: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x3E1D58);

loc_001A3003: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3009u); RECOMP_ABI_CALL(0x001A29C5u, sub_001A29C5); /* call 0x001A29C5 */

loc_001A3009: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A300E
 * Original: 0x001A300E - 0x001A308F (129 bytes, 57 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A300E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A300E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x3C6C38);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = eax + 1;

loc_001A3020: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A3020; /* jne: not equal / not zero */

loc_001A3027: ;
    eax = eax - ecx;
    ecx = eax + 1;
    eax = MEM32(ebp + 0xC);
    edi = eax + 1;

loc_001A3032: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A3032; /* jne: not equal / not zero */

loc_001A3039: ;
    eax = eax - edi;
    eax = eax + ecx + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1EC (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A3089; /* jae: above or equal (unsigned >=) */

loc_001A3046: ;
    eax = esi + 0x214;
    MEM16(eax) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax) = LO16(ecx);
    edx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    eax = eax + 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3067; /* jne: not equal / not zero */

loc_001A3064: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_001A3067: ;
    esi = MEM32(ebp + 8);
    edi = eax;
    edi = edi - esi;

loc_001A306E: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + esi) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A306E; /* jne: not equal / not zero */

loc_001A3078: ;
    edx = MEM32(ebp + 0xC);
    eax = eax + ecx;
    eax = eax - edx;

loc_001A307F: ;
    SET_LO8(ecx, MEM8(edx));
    MEM8(eax + edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A307F; /* jne: not equal / not zero */

loc_001A3089: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A308F
 * Original: 0x001A308F - 0x001A3211 (386 bytes, 134 insns)
 * Category: game_io
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A308F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A308F: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    esp = esp - 0x45C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E1D68);
    ebx = ebx | 0xFFFFFFFFu;
    MEM32(ebp + 0x64) = 0x104;
    PUSH32(esp, 0x001A30BCu); RECOMP_ABI_CALL(0x001A2E02u, sub_001A2E02); /* call 0x001A2E02 */

loc_001A30BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A31F5; /* je: equal / zero */

loc_001A30C4: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A30DEu); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_001A30DE: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A31F5; /* je: equal / zero */

loc_001A30E9: ;
    eax = ebp + -144;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001A30FBu); RECOMP_ABI_CALL(0x001A3B73u, sub_001A3B73); /* call 0x001A3B73 */

loc_001A30FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A31F5; /* je: equal / zero */

loc_001A3103: ;
    _fa = (uint32_t)(MEM8(ebp + -112)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -112), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A31F5; /* je: equal / zero */

loc_001A310D: ;
    eax = 0; /* xor self */
    edi = ebp + 0x50;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x44);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + -92);
    POP32(esp, esi);
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -88), esi (32-bit) */
    MEM32(ebp + 0x58) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001A31F5; /* jne: not equal / not zero */

loc_001A3129: ;
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001A313Cu); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_001A313C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A31F5; /* je: equal / zero */

loc_001A3144: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A31F5; /* jne: not equal / not zero */

loc_001A314D: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A3159u); RECOMP_ABI_CALL(0x001A3C80u, sub_001A3C80); /* call 0x001A3C80 */

loc_001A3159: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A316Au); RECOMP_ABI_CALL(0x001A3C7Au, sub_001A3C7A); /* call 0x001A3C7A */

loc_001A316A: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A317Au); RECOMP_ABI_CALL(0x001A3C86u, sub_001A3C86); /* call 0x001A3C86 */

loc_001A317A: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebp + -84;
    esi = ebp + 0x3C;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((eax != 0)) goto loc_001A31F5; /* jne: not equal / not zero */

loc_001A3189: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001A31F5; /* ja: above (unsigned >) */

loc_001A3191: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001A31A3; /* jbe: below or equal (unsigned <=) */

loc_001A3195: ;
    edx = MEM32(ebp + eax * 4 + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x78) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A31A3; /* je: equal / zero */

loc_001A319E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A3195; /* jb: below (unsigned <) */

loc_001A31A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A31F5; /* je: equal / zero */

loc_001A31A7: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    MEM32(ebp + 0x64) = 0x104;
    PUSH32(esp, 0x001A31C1u); RECOMP_ABI_CALL(0x001A2E02u, sub_001A2E02); /* call 0x001A2E02 */

loc_001A31C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A31D1; /* jne: not equal / not zero */

loc_001A31C5: ;
    PUSH32(esp, 0x001A31CAu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_001A31CA: ;
    PUSH32(esp, 0x001A31CFu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_001A31CF: ;
    goto loc_001A31F5;

loc_001A31D1: ;
    eax = ebp + -1012;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A31E4u); RECOMP_ABI_CALL(0x001A2E4Cu, sub_001A2E4C); /* call 0x001A2E4C */

loc_001A31E4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A31F5; /* jl: less (signed <) */

loc_001A31EA: ;
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(MEM32(ebp + -1004)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1004), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A31FA; /* je: equal / zero */

loc_001A31F5: ;
    esi = 0x8007000Du;

loc_001A31FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A3205; /* je: equal / zero */

loc_001A31FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001A3205u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_001A3205: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x68;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A3211
 * Original: 0x001A3211 - 0x001A3392 (385 bytes, 136 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A3211(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A3211: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x2D4;
    ecx = MEM32(0x10118);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3249; /* jne: not equal / not zero */

loc_001A322A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ecx + 8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + -1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3244u); RECOMP_ABI_CALL(0x0019EC8Cu, sub_0019EC8C); /* call 0x0019EC8C */

loc_001A3244: ;
    goto loc_001A338D;

loc_001A3249: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    edi = 0x168;
    PUSH32(esp, edi);
    eax = ebp + -724;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ebp + 8) = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3269u); RECOMP_ABI_CALL(0x001A2F7Cu, sub_001A2F7C); /* call 0x001A2F7C */

loc_001A3269: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x44 (8-bit) */
    SET_LO8(edx, 0x5C);
    if (CMP_EQ(_fa, _fb)) goto loc_001A3275; /* je: equal / zero */

loc_001A3271: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x64 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3297; /* jne: not equal / not zero */

loc_001A3275: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3297; /* jne: not equal / not zero */

loc_001A327B: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3297; /* jne: not equal / not zero */

loc_001A3280: ;
    eax = esi + 3;
    esi = eax;
    ecx = ebp + -724;
    MEM32(ebp + -4) = 1;
    goto loc_001A3325;

loc_001A3297: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x54) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x54 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A329F; /* je: equal / zero */

loc_001A329B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x74) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x74 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A32D0; /* jne: not equal / not zero */

loc_001A329F: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A32D0; /* jne: not equal / not zero */

loc_001A32A5: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A32D0; /* jne: not equal / not zero */

loc_001A32AA: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A32D0; /* jne: not equal / not zero */

loc_001A32B0: ;
    SET_LO8(ecx, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x55) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x55 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A32BD; /* je: equal / zero */

loc_001A32B8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x75) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x75 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A32D0; /* jne: not equal / not zero */

loc_001A32BD: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A32D0; /* jne: not equal / not zero */

loc_001A32C2: ;
    esi = esi + 6;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x46165C);
    goto loc_001A3307;

loc_001A32D0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A3388; /* je: equal / zero */

loc_001A32DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x59) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x59 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A32E6; /* je: equal / zero */

loc_001A32DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x79) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x79 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3388; /* jne: not equal / not zero */

loc_001A32E6: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3388; /* jne: not equal / not zero */

loc_001A32F0: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3388; /* jne: not equal / not zero */

loc_001A32F9: ;
    esi = esi + 3;
    PUSH32(esp, esi);
    PUSH32(esp, 0x46163C);
    PUSH32(esp, 0x3C97F4);

loc_001A3307: ;
    eax = ebp + -364;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3314u); RECOMP_ABI_CALL(0x003433E9u, sub_003433E9); /* call 0x003433E9 */

loc_001A3314: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A3388; /* jl: less (signed <) */

loc_001A331B: ;
    ecx = 0; /* xor self */
    eax = ebp + -364;
    ebx = 0; /* xor self */

loc_001A3325: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A3330; /* je: equal / zero */

loc_001A332B: ;
    edx = MEM32(ebp + 0x14);
    goto loc_001A3333;

loc_001A3330: ;
    edx = edx | 0xFFFFFFFFu;

loc_001A3333: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3342u); RECOMP_ABI_CALL(0x0019EBABu, sub_0019EBAB); /* call 0x0019EBAB */

loc_001A3342: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A3350; /* je: equal / zero */

loc_001A334B: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A335D; /* je: equal / zero */

loc_001A3350: ;
    PUSH32(esp, esi);
    eax = ebp + -724;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A335Du); RECOMP_ABI_CALL(0x001A300Eu, sub_001A300E); /* call 0x001A300E */

loc_001A335D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A337F; /* jl: less (signed <) */

loc_001A3361: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A3377; /* je: equal / zero */

loc_001A3371: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001A3377u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3377: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(0x3C6C40); PUSH32(esp, 0x001A337Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A337F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6BCC); PUSH32(esp, 0x001A3386u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3386: ;
    goto loc_001A338B;

loc_001A3388: ;
    PUSH32(esp, 0x57);
    POP32(esp, eax);

loc_001A338B: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001A338D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A3392
 * Original: 0x001A3392 - 0x001A34F7 (357 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A3392(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A3392: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x1050;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A339Fu); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_001A339F: ;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFE0000u (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A34F3; /* je: equal / zero */

loc_001A33B5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -4176;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A33CBu); RECOMP_ABI_CALL(0x001A2F18u, sub_001A2F18); /* call 0x001A2F18 */

loc_001A33CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -16) = eax;
    ebx = 0x168;
    if (TEST_NZ(_fa, _fb)) goto loc_001A33EC; /* jne: not equal / not zero */

loc_001A33D7: ;
    PUSH32(esp, ebx);
    eax = ebp + -1104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A33E4u); RECOMP_ABI_CALL(0x001A2F7Cu, sub_001A2F7C); /* call 0x001A2F7C */

loc_001A33E4: ;
    edi = ebp + -1104;
    goto loc_001A33EF;

loc_001A33EC: ;
    edi = MEM32(ebp + -12);

loc_001A33EF: ;
    eax = edi;
    edx = eax + 1;

loc_001A33F4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001A33F4; /* jne: not equal / not zero */

loc_001A33FB: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x3C6CD4);
    ecx = ZX16(MEM16(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001A34BA; /* jbe: below or equal (unsigned <=) */

loc_001A3410: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A341Au); RECOMP_ABI_CALL(0x00343655u, sub_00343655); /* call 0x00343655 */

loc_001A341A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001A34BA; /* jne: not equal / not zero */

loc_001A3425: ;
    eax = MEM32(0x3C6CD4);
    ecx = ZX16(MEM16(eax));
    eax = MEM32(eax + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    PUSH32(esp, ecx);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    PUSH32(esp, eax);
    eax = ebp + -384;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3443u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001A3443: ;
    eax = MEM32(0x3C6CD4);
    eax = ZX16(MEM16(eax));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    MEM8(ebp + eax + -384) = 0;
    eax = ebp + -384;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E1D78);
    PUSH32(esp, 0x3C97F4);
    eax = ebp + -744;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3473u); RECOMP_ABI_CALL(0x003433E9u, sub_003433E9); /* call 0x003433E9 */

loc_001A3473: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_001A34F0; /* jl: less (signed <) */

loc_001A347A: ;
    eax = MEM32(0x10118);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0xAC));
    eax = ebp + -384;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3496u); RECOMP_ABI_CALL(0x001A308Fu, sub_001A308F); /* call 0x001A308F */

loc_001A3496: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_001A34BA; /* jl: less (signed <) */

loc_001A349A: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ebp + -4176;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    PUSH32(esp, eax);
    eax = ebp + -744;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A34BAu); RECOMP_ABI_CALL(0x001A3211u, sub_001A3211); /* call 0x001A3211 */

loc_001A34BA: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A34F0; /* je: equal / zero */

loc_001A34C0: ;
    eax = edi;
    edx = eax + 1;

loc_001A34C5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001A34C5; /* jne: not equal / not zero */

loc_001A34CC: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    esi = 0x461604;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM16(ebp + -8) = LO16(eax);
    MEM16(ebp + -6) = LO16(eax);
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_target = MEM32(0x3C6BC8); PUSH32(esp, 0x001A34E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A34E5: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6BBC); PUSH32(esp, 0x001A34F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A34F0: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001A34F3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001A34F7
 * Original: 0x001A34F7 - 0x001A351F (40 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A34F7(void)
{

loc_001A34F7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x001A3507u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3507: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 4) = esi;
    MEM32(eax) = 0xFFFFFFFCu;
    MEM32(eax + 8) = 0x80;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001A351F
 * Original: 0x001A351F - 0x001A354D (46 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A351F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A351F: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A352C; /* jne: not equal / not zero */

loc_001A3528: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001A354A;

loc_001A352C: ;
    ecx = 0x2710;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(ecx + 4) = edx;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    eax = ecx;

loc_001A354A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A3550
 * Original: 0x001A3550 - 0x001A3554 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A3550: ;
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
 * sub_001A3554
 * Original: 0x001A3554 - 0x001A35AC (88 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3554(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A3554: ;
    eax = MEM32(0x47A044);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A355F; /* je: equal / zero */

loc_001A355D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001A355Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A355F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x44B0A8;
    edi = 0x44B0BC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001A3585; /* jae: above or equal (unsigned >=) */

loc_001A3571: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A357E; /* je: equal / zero */

loc_001A3577: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A357E; /* je: equal / zero */

loc_001A357C: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001A357Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A357E: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A3571; /* jb: below (unsigned <) */

loc_001A3585: ;
    esi = 0x44A590;
    eax = esi;
    edi = 0x44B0A4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A35A9; /* jae: above or equal (unsigned >=) */

loc_001A3595: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A35A2; /* je: equal / zero */

loc_001A359B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A35A2; /* je: equal / zero */

loc_001A35A0: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001A35A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A35A2: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A3595; /* jb: below (unsigned <) */

loc_001A35A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A35AC
 * Original: 0x001A35AC - 0x001A35D5 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A35AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A35AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x44A580;
    edi = 0x44A58C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001A35D2; /* jae: above or equal (unsigned >=) */

loc_001A35BE: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A35CB; /* je: equal / zero */

loc_001A35C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A35CB; /* je: equal / zero */

loc_001A35C9: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001A35CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A35CB: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A35BE; /* jb: below (unsigned <) */

loc_001A35D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A35D5
 * Original: 0x001A35D5 - 0x001A3639 (100 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A35D5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A35D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x8001003Cu);
    edx = 0x7FFF0000;
    eax = eax - edx;
    ecx = ZX16(MEM16(eax + 6));
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0x14));
    esi = esi + eax;
    ecx = ecx + ecx * 4;
    eax = esi + ecx * 8 + -16;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x54494E49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x54494E49 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001A3637; /* jne: not equal / not zero */

loc_001A3601: ;
    eax = MEM32(eax + 0xC);
    MEM16(ebp + -6) = MEM16(ebp + -6) & 0;
    eax = eax - edx;
    eax = eax >> 0xC;
    ecx = eax;
    ecx = ecx >> 0x10;
    ecx = ecx & 0xF;
    ecx = ecx << 0x10;
    ecx = ecx | 0xC09B00;
    PUSH32(esp, ecx);
    MEM16(ebp + -8) = LO16(eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A362Cu); RECOMP_ABI_CALL(0x001A3C54u, sub_001A3C54); /* call 0x001A3C54 */

loc_001A362C: ;
    MEM32(0x5DD0D0) = eax;
    MEM32(0x5DD0D4) = edx;

loc_001A3637: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001A3639
 * Original: 0x001A3639 - 0x001A36FE (197 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3639(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3639: ;
    eax = MEM32(0x3C6CCC);
    eax = MEM32(eax);
    ecx = MEM32(0x3C6CD8);
    ecx = ZX16(MEM16(ecx + 4));
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    SET_LO8(eax, ~LO8(eax));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF68 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A36A4; /* je: equal / zero */

loc_001A3659: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFC2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A3699; /* je: equal / zero */

loc_001A3661: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFC7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFC7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A3689; /* je: equal / zero */

loc_001A3669: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12D0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001A36E8; /* jle: less or equal (signed <=) */

loc_001A3671: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12D2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001A36E8; /* jg: greater (signed >) */

loc_001A3679: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF1611u;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8003838Fu)) >> 32) & 1);
    eax = eax + 0x8003838Fu;
    goto loc_001A36B2;

loc_001A3689: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF12CBu;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x800398CDu)) >> 32) & 1);
    eax = eax + 0x800398CDu;
    goto loc_001A36B2;

loc_001A3699: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8002AB88u;
    goto loc_001A36B2;

loc_001A36A4: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF1471u;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80039749u)) >> 32) & 1);
    eax = eax + 0x80039749u;

loc_001A36B2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001A36E8; /* je: equal / zero */

loc_001A36B8: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20C5048D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x20C5048D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A36E8; /* jne: not equal / not zero */

loc_001A36C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6C54); PUSH32(esp, 0x001A36C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A36C9: ;
    edi = MEM32(0x3C6C50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ebx = eax;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001A36D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A36D8: ;
    /* TODO: cli  */
    MEM32(esi) = 0x28C5048D;
    /* TODO: sti  */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001A36E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A36E6: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001A36E8: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    _fa = (uint32_t)(MEM32(eax + 0x250)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x250), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001A36FD; /* jne: not equal / not zero */

loc_001A36F8: ;
    g_seh_ebp = ebp; sub_001A35D5(); return; /* tail jmp 0x001A35D5 */

loc_001A36FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A36FE
 * Original: 0x001A36FE - 0x001A3765 (103 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A36FE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A36FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(0x3C6BAC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x001A3716u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3716: ;
    esi = MEM32(0x1011C);
    edi = MEM32(0x10120);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    esi = esi + edi;
    goto loc_001A3749;

loc_001A3729: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x001A3732u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3732: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CDC); PUSH32(esp, 0x001A3742u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3742: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A3761; /* jne: not equal / not zero */

loc_001A3746: ;
    edi = edi + 0x38;

loc_001A3749: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A3729; /* jb: below (unsigned <) */

loc_001A374D: ;
    PUSH32(esp, 0x490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3757u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_001A3757: ;
    eax = eax | 0xFFFFFFFFu;

loc_001A375A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_001A3761: ;
    eax = edi;
    goto loc_001A375A;

}

/**
 * sub_001A3765
 * Original: 0x001A3765 - 0x001A3786 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3765(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A3765: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6CE0); PUSH32(esp, 0x001A3771u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3771: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A377F; /* jge: greater or equal (signed >=) */

loc_001A3775: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A377Bu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A377B: ;
    eax = 0; /* xor self */
    goto loc_001A3782;

loc_001A377F: ;
    eax = MEM32(esi + 4);

loc_001A3782: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A3786
 * Original: 0x001A3786 - 0x001A37A4 (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3786(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A3786: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x3C6CE4); PUSH32(esp, 0x001A3790u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3790: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001A379E; /* jge: greater or equal (signed >=) */

loc_001A3794: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A379Au); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A379A: ;
    eax = 0; /* xor self */
    goto loc_001A37A1;

loc_001A379E: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A37A1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A37A4
 * Original: 0x001A37A4 - 0x001A37AE (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A37A4(void)
{

loc_001A37A4: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A37AE
 * Original: 0x001A37AE - 0x001A37D3 (37 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A37AE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A37AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A37C6u); RECOMP_ABI_CALL(0x001A3C8Cu, sub_001A3C8C); /* call 0x001A3C8C */

loc_001A37C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A37CF; /* jl: less (signed <) */

loc_001A37CA: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_001A37CF: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001A37D3
 * Original: 0x001A37D3 - 0x001A37EE (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A37D3(void)
{

loc_001A37D3: ;
    PUSH32(esp, 0xFFFFFFCDu);
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DD080);
    PUSH32(esp, ecx);
    eax = 0xB5659000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5DD0A0);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x001A37EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A37ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A37EE
 * Original: 0x001A37EE - 0x001A3800 (18 bytes, 4 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A37EE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A37EE: ;
    _fa = (uint32_t)(MEM32(0x5DD0C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5DD0C8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A37FD; /* je: equal / zero */

loc_001A37F7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF4); PUSH32(esp, 0x001A37FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A37FD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A3800
 * Original: 0x001A3800 - 0x001A3874 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A3800(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A3800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A37EE);
    PUSH32(esp, 0x5DD080);
    { uint32_t _icall_target = MEM32(0x3C6CFC); PUSH32(esp, 0x001A3818u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3818: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5DD0A0);
    { uint32_t _icall_target = MEM32(0x3C6CF8); PUSH32(esp, 0x001A3825u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3825: ;
    eax = MEM32(0x3C6CCC);
    MEM32(0x5DD0C8) = MEM32(0x5DD0C8) & 0;
    MEM32(0x5DD0CC) = MEM32(0x5DD0CC) & 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A386D; /* jne: not equal / not zero */

loc_001A383D: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3852u); RECOMP_ABI_CALL(0x001A2DE0u, sub_001A2DE0); /* call 0x001A2DE0 */

loc_001A3852: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A3863; /* jne: not equal / not zero */

loc_001A3856: ;
    eax = MEM32(ebp + -4);
    eax = eax & 1;
    MEM32(0x5DD0C8) = eax;
    goto loc_001A386D;

loc_001A3863: ;
    MEM32(0x5DD0CC) = 1;

loc_001A386D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3872u); RECOMP_ABI_CALL(0x001A37D3u, sub_001A37D3); /* call 0x001A37D3 */

loc_001A3872: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001A3874
 * Original: 0x001A3874 - 0x001A388D (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3874(void)
{

loc_001A3874: ;
    eax = MEM32(0x3C6D04);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4616A4);
    { uint32_t _icall_target = MEM32(0x3C6D00); PUSH32(esp, 0x001A388Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A388C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A388D
 * Original: 0x001A388D - 0x001A3890 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A388D(void)
{

loc_001A388D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A3890
 * Original: 0x001A3890 - 0x001A38E6 (86 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A3890: ;
    PUSH32(esp, esi);
    esi = MEM32(0x3C6D04);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x001A389Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A389D: ;
    SET_LO8(ecx, LO8(eax));
    MEM32(esi + 0x10) = 0x1A388D;
    MEM32(esi + 0x14) = 0x1A3874;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x001A38B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A38B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), eax (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A38CB; /* je: equal / zero */

loc_001A38BB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4616A4);
    { uint32_t _icall_target = MEM32(0x3C6D08); PUSH32(esp, 0x001A38CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A38CB: ;
    eax = MEM32(0x5DD0D0);
    ecx = MEM32(0x5DD0D4);
    edx = eax;
    edx = edx | ecx;
    if ((edx == 0)) goto loc_001A38E3; /* je: equal / zero */

loc_001A38DC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A38E3u); RECOMP_ABI_CALL(0x001A3C54u, sub_001A3C54); /* call 0x001A3C54 */

loc_001A38E3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A38E6
 * Original: 0x001A38E6 - 0x001A3A6F (393 bytes, 130 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A38E6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A38E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = ecx;
    eax = eax >> 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ecx;
    esi = 0; /* xor self */
    eax = ~eax;
    edx = edx & 1;
    ecx = ecx & 4;
    eax = eax & 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001A3A5F; /* je: equal / zero */

loc_001A3917: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A3A5F; /* je: equal / zero */

loc_001A3920: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A3A5F; /* jl: less (signed <) */

loc_001A392A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A3A5F; /* jl: less (signed <) */

loc_001A3934: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */

loc_001A3937: ;
    if (_flags /* je: equal / zero */) goto loc_001A3A40;

loc_001A393D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    ecx = 0x10000;
    if (CMP_EQ(_fa, _fb)) goto loc_001A3A3B; /* je: equal / zero */

loc_001A394B: ;
    edx = MEM32(ebp + 0xC);
    SET_LO8(edx, MEM8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A3A29; /* je: equal / zero */

loc_001A3958: ;
    esi = MEM32(ebp + 0x14);
    SET_LO8(ebx, MEM8(esi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A3A36; /* je: equal / zero */

loc_001A3965: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO16(edx, ZX8(LO8(edx)));
    SET_LO16(ebx, ZX8(LO8(ebx)));
    edi = ZX16(LO16(edx));
    esi = MEM32(edi * 4 + 0x4616E8);
    ebx = ZX16(LO16(ebx));
    edx = MEM32(ebx * 4 + 0x4616E8);
    if (TEST_Z(_fa, _fb)) goto loc_001A39D5; /* je: equal / zero */

loc_001A3985: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A39BE; /* je: equal / zero */

loc_001A3989: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A39A5; /* je: equal / zero */

loc_001A398D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A399A; /* jae: above or equal (unsigned >=) */

loc_001A3991: ;
    MEM32(ebp + -4) = 7;
    goto loc_001A3A13;

loc_001A399A: ;
    if (CMP_BE(_fa, _fb)) goto loc_001A3A13; /* jbe: below or equal (unsigned <=) */

loc_001A399C: ;
    MEM32(ebp + -4) = 0xB;
    goto loc_001A3A13;

loc_001A39A5: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A39B2; /* jne: not equal / not zero */

loc_001A39AB: ;
    MEM32(ebp + -4) = 4;

loc_001A39B2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;

loc_001A39B6: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001A3A1F;

loc_001A39BE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A39D5; /* je: equal / zero */

loc_001A39C2: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A39CF; /* jne: not equal / not zero */

loc_001A39C8: ;
    MEM32(ebp + -4) = 8;

loc_001A39CF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 2;
    goto loc_001A3A19;

loc_001A39D5: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A39E8; /* je: equal / zero */

loc_001A39DB: ;
    ecx = 0x20000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A39B6; /* jne: not equal / not zero */

loc_001A39E4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A3A19; /* jne: not equal / not zero */

loc_001A39E8: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A3A0D; /* je: equal / zero */

loc_001A39EE: ;
    ecx = 0x100000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A3A00; /* je: equal / zero */

loc_001A39F7: ;
    esi = edi + 0x20;
    esi = esi | 0x80000;

loc_001A3A00: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A3A0D; /* je: equal / zero */

loc_001A3A04: ;
    edx = ebx + 0x20;
    edx = edx | 0x80000;

loc_001A3A0D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001A3A31; /* jb: below (unsigned <) */

loc_001A3A11: ;
    if (CMP_A(_fa, _fb)) goto loc_001A3A36; /* ja: above (unsigned >) */

loc_001A3A13: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001A3A19: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001A3A1F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    goto loc_001A3937;

loc_001A3A29: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A3A45; /* je: equal / zero */

loc_001A3A31: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001A3A68;

loc_001A3A36: ;
    PUSH32(esp, 3);
    POP32(esp, eax);
    goto loc_001A3A68;

loc_001A3A3B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3A51; /* jne: not equal / not zero */

loc_001A3A40: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3A51; /* jne: not equal / not zero */

loc_001A3A45: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax * 4 + 0x461AE8);
    goto loc_001A3A68;

loc_001A3A51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + eax + 1;
    goto loc_001A3A68;

loc_001A3A5F: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3A66u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_001A3A66: ;
    eax = 0; /* xor self */

loc_001A3A68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001A3A6F
 * Original: 0x001A3A6F - 0x001A3A8E (31 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3A6F(void)
{

loc_001A3A6F: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x3C6C24));
    PUSH32(esp, 0x001A3A8Bu); RECOMP_ABI_CALL(0x001A3C92u, sub_001A3C92); /* call 0x001A3C92 */

loc_001A3A8B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A3A8E
 * Original: 0x001A3A8E - 0x001A3B73 (229 bytes, 94 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A3A8E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A3A8E: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    esp = esp - 0x290;
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x78);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001A3AA9; /* jne: not equal / not zero */

loc_001A3AA6: ;
    eax = MEM32(esi + 0x24);

loc_001A3AA9: ;
    ecx = ebp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A3AB3u); RECOMP_ABI_CALL(0x001A3A6Fu, sub_001A3A6F); /* call 0x001A3A6F */

loc_001A3AB3: ;
    eax = MEM32(esi + 0x18);
    edi = 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebx = edi;
    if (CMP_AE(_fa, _fb)) goto loc_001A3AC3; /* jae: above or equal (unsigned >=) */

loc_001A3AC1: ;
    ebx = eax;

loc_001A3AC3: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A3AD2u); RECOMP_ABI_CALL(0x0019E7D7u, sub_0019E7D7); /* call 0x0019E7D7 */

loc_001A3AD2: ;
    ebx = ebx + 0xFFFFFFECu;
    PUSH32(esp, ebx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A3AE3u); RECOMP_ABI_CALL(0x0019E839u, sub_0019E839); /* call 0x0019E839 */

loc_001A3AE3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A3B43; /* je: equal / zero */

loc_001A3AEA: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A3B43; /* jbe: below or equal (unsigned <=) */

loc_001A3AF1: ;
    edi = esi + -136;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A3B43; /* je: equal / zero */

loc_001A3AFB: ;
    ebx = 0x200;
    goto loc_001A3B04;

loc_001A3B02: ;
    eax = 0; /* xor self */

loc_001A3B04: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_001A3B0C; /* jae: above or equal (unsigned >=) */

loc_001A3B0A: ;
    esi = edi;

loc_001A3B0C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp + -552;
    PUSH32(esp, ecx);
    ecx = ebp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    { uint32_t _icall_target = MEM32(0x3C6BB8); PUSH32(esp, 0x001A3B25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3B25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001A3B62; /* jl: less (signed <) */

loc_001A3B29: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3B65; /* jne: not equal / not zero */

loc_001A3B2E: ;
    PUSH32(esp, esi);
    eax = ebp + -552;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A3B3Fu); RECOMP_ABI_CALL(0x0019E839u, sub_0019E839); /* call 0x0019E839 */

loc_001A3B3F: ;
    edi = edi - esi;
    if ((edi != 0)) goto loc_001A3B02; /* jne: not equal / not zero */

loc_001A3B43: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    eax = ebp + 0x4C;
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A3B55u); RECOMP_ABI_CALL(0x0019E83Eu, sub_0019E83E); /* call 0x0019E83E */

loc_001A3B55: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A3B58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x68;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_001A3B62: ;
    PUSH32(esp, eax);
    goto loc_001A3B6A;

loc_001A3B65: ;
    PUSH32(esp, 0xC0000011u);

loc_001A3B6A: ;
    PUSH32(esp, 0x001A3B6Fu); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A3B6F: ;
    eax = 0; /* xor self */
    goto loc_001A3B58;

}

/**
 * sub_001A3B73
 * Original: 0x001A3B73 - 0x001A3C54 (225 bytes, 98 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A3B73(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A3B73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(0x3C6BB8);
    eax = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001A3BA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3BA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A3BE1; /* jl: less (signed <) */

loc_001A3BA4: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3BDC; /* jne: not equal / not zero */

loc_001A3BAA: ;
    esi = MEM32(esi + 0x18);
    eax = 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001A3BB8; /* jbe: below or equal (unsigned <=) */

loc_001A3BB6: ;
    esi = eax;

loc_001A3BB8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esi + -28;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    eax = eax + 0x1C;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001A3BD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A3BD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A3BE1; /* jl: less (signed <) */

loc_001A3BD4: ;
    eax = esi + -28;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A3BEB; /* je: equal / zero */

loc_001A3BDC: ;
    eax = 0xC0000010u;

loc_001A3BE1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3BE7u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_001A3BE7: ;
    eax = 0; /* xor self */
    goto loc_001A3C4D;

loc_001A3BEB: ;
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46534358) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), 0x46534358 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A3C00; /* je: equal / zero */

loc_001A3BF7: ;
    PUSH32(esp, 0xD);

loc_001A3BF9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3BFEu); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_001A3BFE: ;
    goto loc_001A3BE7;

loc_001A3C00: ;
    ecx = 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001A3C1E; /* jae: above or equal (unsigned >=) */

loc_001A3C09: ;
    ecx = ecx - esi;
    edi = esi + edx;
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001A3C1E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A3C4A; /* je: equal / zero */

loc_001A3C23: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3C33u); RECOMP_ABI_CALL(0x001A3A8Eu, sub_001A3A8E); /* call 0x001A3A8E */

loc_001A3C33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A3BE7; /* je: equal / zero */

loc_001A3C37: ;
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = ebp + -36;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((eax == 0)) goto loc_001A3C4A; /* je: equal / zero */

loc_001A3C46: ;
    PUSH32(esp, 5);
    goto loc_001A3BF9;

loc_001A3C4A: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A3C4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001A3C54
 * Original: 0x001A3C54 - 0x001A3C79 (37 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3C54(void)
{

loc_001A3C54: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    /* TODO: sgdt [esp + 6] */
    eax = MEM32(esp + 8);
    /* TODO: cli  */
    { uint32_t _tmp = MEM32(eax + 8);
    MEM32(eax + 8) = ecx;
    ecx = _tmp; }
    { uint32_t _tmp = MEM32(eax + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = _tmp; }
    /* TODO: sti  */
    /* TODO: ljmp 8:0x1a3c74 */
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A3C7A
 * Original: 0x001A3C7A - 0x001A3C80 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3C7A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3C7A: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6C18)); return; /* indirect tail jmp */

}

/**
 * sub_001A3C80
 * Original: 0x001A3C80 - 0x001A3C86 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3C80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3C80: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6C1C)); return; /* indirect tail jmp */

}

/**
 * sub_001A3C86
 * Original: 0x001A3C86 - 0x001A3C8C (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3C86(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3C86: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6C20)); return; /* indirect tail jmp */

}

/**
 * sub_001A3C8C
 * Original: 0x001A3C8C - 0x001A3C92 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3C8C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3C8C: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6C44)); return; /* indirect tail jmp */

}

/**
 * sub_001A3C92
 * Original: 0x001A3C92 - 0x001A3C98 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3C92(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3C92: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6D0C)); return; /* indirect tail jmp */

}

/**
 * sub_001A3C98
 * Original: 0x001A3C98 - 0x001A3CB0 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3C98(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3C98: ;
    ecx = ecx - 4;
    g_seh_ebp = ebp; sub_00370C03(); return; /* tail jmp 0x00370C03 */

    ecx = ecx - 8;
    g_seh_ebp = ebp; sub_0037325B(); return; /* tail jmp 0x0037325B */

    ecx = ecx - 4;
    g_seh_ebp = ebp; sub_0037768B(); return; /* tail jmp 0x0037768B */

}

/**
 * sub_001A3CA0
 * Original: 0x001A3CA0 - 0x001A3CB0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3CA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3CA0: ;
    ecx = ecx - 8;
    g_seh_ebp = ebp; sub_0037325B(); return; /* tail jmp 0x0037325B */

    ecx = ecx - 4;
    g_seh_ebp = ebp; sub_0037768B(); return; /* tail jmp 0x0037768B */

}

/**
 * sub_001A3CA8
 * Original: 0x001A3CA8 - 0x001A3CB0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3CA8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3CA8: ;
    ecx = ecx - 4;
    g_seh_ebp = ebp; sub_0037768B(); return; /* tail jmp 0x0037768B */

}

/**
 * sub_001A3CB0
 * Original: 0x001A3CB0 - 0x001A3E43 (403 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3CB0(void)
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

loc_001A3CB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x380);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x384);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001A3CC9; /* jl: less (signed <) */

loc_001A3CC7: ;
    ecx = esi;

loc_001A3CC9: ;
    edx = ecx;
    edx = edx - 0x40;
    edi = 0x100;
    ebx = 0x200;
    if ((edx == 0)) goto loc_001A3D29; /* je: equal / zero */

loc_001A3CDA: ;
    edx = edx - 0x40;
    if ((edx == 0)) goto loc_001A3D21; /* je: equal / zero */

loc_001A3CDF: ;
    edx = edx - 0x80;
    if ((edx == 0)) goto loc_001A3D19; /* je: equal / zero */

loc_001A3CE7: ;
    edx = edx - edi;
    if ((edx == 0)) goto loc_001A3D11; /* je: equal / zero */

loc_001A3CEB: ;
    edx = edx - ebx;
    if ((edx == 0)) goto loc_001A3D09; /* je: equal / zero */

loc_001A3CEF: ;
    edx = edx - 0x400;
    if ((edx == 0)) goto loc_001A3D01; /* je: equal / zero */

loc_001A3CF7: ;
    eax = 0x80040002u;
    goto loc_001A3E3D;

loc_001A3D01: ;
    edx = MEM32(eax + 0x410);
    goto loc_001A3D2F;

loc_001A3D09: ;
    edx = MEM32(eax + 0x414);
    goto loc_001A3D2F;

loc_001A3D11: ;
    edx = MEM32(eax + 0x418);
    goto loc_001A3D2F;

loc_001A3D19: ;
    edx = MEM32(eax + 0x41C);
    goto loc_001A3D2F;

loc_001A3D21: ;
    edx = MEM32(eax + 0x420);
    goto loc_001A3D2F;

loc_001A3D29: ;
    edx = MEM32(eax + 0x424);

loc_001A3D2F: ;
    MEM32(eax + 0x428) = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((7) & 31u));
    ecx = MEM32(ecx * 4 + 0x38F070);
    edx = MEM32(ecx);
    MEM32(eax + 0x358) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x35C) = edx;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x360) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 4);
    fp_push(MEMF(0x3C9404)); /* fld float */
    MEM32(eax + 0x364) = edx;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    ecx = MEM32(eax + 0x388);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    edx = esi;
    MEMF(eax + 0x368) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_001A3D82; /* jge: greater or equal (signed >=) */

loc_001A3D80: ;
    edx = ecx;

loc_001A3D82: ;
    ecx = edx;
    ecx = ecx - 0x40;
    if ((ecx == 0)) goto loc_001A3DF2; /* je: equal / zero */

loc_001A3D89: ;
    ecx = ecx - 0x40;
    if ((ecx == 0)) goto loc_001A3DE8; /* je: equal / zero */

loc_001A3D8E: ;
    ecx = ecx - 0x80;
    if ((ecx == 0)) goto loc_001A3DDA; /* je: equal / zero */

loc_001A3D96: ;
    ecx = ecx - edi;
    if ((ecx == 0)) goto loc_001A3DCC; /* je: equal / zero */

loc_001A3D9A: ;
    ecx = ecx - ebx;
    if ((ecx == 0)) goto loc_001A3DBE; /* je: equal / zero */

loc_001A3D9E: ;
    ecx = ecx - 0x400;
    if ((ecx == 0)) goto loc_001A3DB0; /* je: equal / zero */

loc_001A3DA6: ;
    eax = 0x80040002u;
    goto loc_001A3E3B;

loc_001A3DB0: ;
    ecx = MEM32(eax + 0x410);
    ecx = ecx + 0x2000;
    goto loc_001A3DFA;

loc_001A3DBE: ;
    ecx = MEM32(eax + 0x414);
    ecx = ecx + 0x1000;
    goto loc_001A3DFA;

loc_001A3DCC: ;
    ecx = MEM32(eax + 0x418);
    ecx = ecx + 0x800;
    goto loc_001A3DFA;

loc_001A3DDA: ;
    ecx = MEM32(eax + 0x41C);
    ecx = ecx + 0x400;
    goto loc_001A3DFA;

loc_001A3DE8: ;
    ecx = MEM32(eax + 0x420);
    ecx = ecx + ebx;
    goto loc_001A3DFA;

loc_001A3DF2: ;
    ecx = MEM32(eax + 0x424);
    ecx = ecx + edi;

loc_001A3DFA: ;
    MEM32(eax + 0x42C) = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((7) & 31u));
    ecx = MEM32(edx * 4 + 0x38F070);
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x36C) = edx;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x370) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x374) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0x378) = edx;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(eax + 0x37C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */

loc_001A3E3B: ;
    fp_pop(); /* fstp st(0) */

loc_001A3E3D: ;
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
 * sub_001A3E43
 * Original: 0x001A3E43 - 0x001A41E1 (926 bytes, 290 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A3E43(void)
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

loc_001A3E43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x344));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A3E5Au); RECOMP_ABI_CALL(0x0037FF45u, sub_0037FF45); /* call 0x0037FF45 */

loc_001A3E5A: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + 0xC);
    fp_top() = fp_top() / MEMF(eax + 0x6C); /* fdiv dword ptr [eax + 0x6c] */
    ecx = MEM32(eax);
    edx = MEM32(eax + 0x60);
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    MEM32(ebp + -36) = ecx;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), ebx (32-bit) */
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -40) = eax;
    MEMF(ebp + -28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_NE(_fa, _fb)) goto loc_001A3F20; /* jne: not equal / not zero */

loc_001A3E9F: ;
    ecx = MEM32(esi + 0x324);
    ecx = ecx << 2;
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi + 0x324);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x328)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x328) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A3EFA; /* jge: greater or equal (signed >=) */

loc_001A3EC8: ;
    edi = MEM32(ebp + -24);
    MEM32(ebp + 8) = edi;
    edi = MEM32(ebp + 0x10);
    ecx = edx + eax * 4;
    edi = edi - edx;

loc_001A3ED6: ;
    ebx = MEM32(ebp + 8);
    ebx = (uint32_t)(int32_t)SMEM16(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 2;
    MEM32(ebp + 0x10) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(edi + ecx); /* fmul dword ptr [edi + ecx] */
    fp_top() = fp_top() * MEMF(ebp + 0xC); /* fmul dword ptr [ebp + 0xc] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x328)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x328) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A3ED6; /* jl: less (signed <) */

loc_001A3EFA: ;
    edi = MEM32(esi + 0x328);
    ecx = MEM32(esi + 0x60);
    ecx = ecx - edi;
    ecx = ecx << 2;
    edi = edx + edi * 4;
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
    goto loc_001A41D8;

loc_001A3F20: ;
    fp_push(MEMF(esi + 0x340)); /* fld float */
    eax = MEM32(esi + 0x324);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    fp_top() = fp_top() * MEMF(0x3E2134); /* fmul dword ptr [0x3e2134] */
    MEM32(ebp + -8) = eax;
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001A3F8D; /* jle: less or equal (signed <=) */

loc_001A3F3C: ;
    ecx = MEM32(esi + 0x40C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x19660D);
    ecx = ecx + 0x3C6EF35F;
    MEM32(esi + 0x40C) = ecx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    ecx = ecx + eax;
    eax = ecx;
    eax = eax - MEM32(esi + 0x408);
    MEM32(esi + 0x408) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + -32) = eax;
    eax = MEM32(esi + 0x324);
    fp_push((double)SMEM32(ebp + -32)); /* fild */
    fp_top() = fp_top() * MEMF(ebp + -16); /* fmul dword ptr [ebp - 0x10] */
    fp_top() = fp_top() * MEMF(ecx + eax * 4); /* fmul dword ptr [ecx + eax*4] */
    fp_top() = fp_top() * MEMF(ebp + 0xC); /* fmul dword ptr [ebp + 0xc] */
    MEMF(edx + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A3F3C; /* jl: less (signed <) */

loc_001A3F8D: ;
    eax = MEM32(esi + 0x3C4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001A4022; /* jge: greater or equal (signed >=) */

loc_001A3F9E: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx - edx;
    eax = edx + edi * 4;
    MEM32(ebp + -20) = ecx;

loc_001A3FA9: ;
    ecx = MEM32(esi + 0x40C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x19660D);
    ecx = ecx + 0x3C6EF35F;
    MEM32(esi + 0x40C) = ecx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    ebx = ecx;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    ecx = ecx + ebx;
    ebx = ecx;
    ebx = ebx - MEM32(esi + 0x408);
    MEM32(esi + 0x408) = ecx;
    ecx = MEM32(esi + 0x354);
    MEM32(ebp + -32) = ebx;
    ebx = MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + ebx * 4 + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + ebx * 4 + 4) (32-bit) */
    fp_push((double)SMEM32(ebp + -32)); /* fild */
    fp_top() = fp_top() * MEMF(ebp + -16); /* fmul dword ptr [ebp - 0x10] */
    if (CMP_L(_fas, _fbs)) goto loc_001A3FF4; /* jl: less (signed <) */

loc_001A3FF1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A3FF4: ;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + ebx * 2);
    MEM32(ebp + -32) = ecx;
    ecx = MEM32(ebp + -20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(ebp + -32)); /* fild */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_top() = fp_top() * MEMF(eax + ecx); /* fmul dword ptr [eax + ecx] */
    fp_top() = fp_top() * MEMF(ebp + 0xC); /* fmul dword ptr [ebp + 0xc] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = eax + 4;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A3FA9; /* jl: less (signed <) */

loc_001A401F: ;
    ebx = MEM32(ebp + -4);

loc_001A4022: ;
    ecx = MEM32(esi + 0x328);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A417F; /* jge: greater or equal (signed >=) */

loc_001A4030: ;
    eax = MEM32(ebp + -36);
    eax = eax + ebx;
    MEM32(ebp + -20) = eax;
    eax = ebx;
    ebx = MEM32(ebp + -40);
    eax = eax << 2;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -44);
    eax = eax - ebx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -44) = eax;

loc_001A404E: ;
    eax = MEM32(esi + 0x354);
    ebx = MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + ebx + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A4064; /* jl: less (signed <) */

loc_001A405D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A4064: ;
    ebx = MEM32(ebp + -4);
    eax = MEM32(eax + ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ebx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001A4073; /* jl: less (signed <) */

loc_001A4071: ;
    ebx = ecx;

loc_001A4073: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A40F9; /* jne: not equal / not zero */

loc_001A407B: ;
    eax = MEM32(ebp + -44);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(eax + ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001A4089u); RECOMP_ABI_CALL(0x0037FF45u, sub_0037FF45); /* call 0x0037FF45 */

loc_001A4089: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = MEM32(ebp + -8);
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_top() = fp_top() * MEMF(ebp + -28); /* fmul dword ptr [ebp - 0x1c] */
    fp_top() = fp_top() * MEMF(0x3E2134); /* fmul dword ptr [0x3e2134] */
    if (CMP_GE(_fas, _fbs)) goto loc_001A40F1; /* jge: greater or equal (signed >=) */

loc_001A409B: ;
    eax = MEM32(ebp + -12);
    edx = MEM32(ebp + 0x10);
    ebx = ebx - edi;
    ecx = eax + edi * 4;
    edx = edx - eax;
    MEM32(ebp + -32) = ebx;
    edi = edi + ebx;

loc_001A40AD: ;
    eax = MEM32(esi + 0x40C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x19660D);
    eax = eax + 0x3C6EF35F;
    MEM32(esi + 0x40C) = eax;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    eax = eax + ebx;
    ebx = eax;
    ebx = ebx - MEM32(esi + 0x408);
    MEM32(esi + 0x408) = eax;
    MEM32(ebp + -40) = ebx;
    fp_push((double)SMEM32(ebp + -40)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + edx); /* fmul dword ptr [ecx + edx] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ecx + 4;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A40AD; /* jne: not equal / not zero */

loc_001A40F1: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    fp_pop(); /* fstp st(0) */
    goto loc_001A416E;

loc_001A40F9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A40FF; /* jge: greater or equal (signed >=) */

loc_001A40FD: ;
    ebx = ecx;

loc_001A40FF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A4171; /* jge: greater or equal (signed >=) */

loc_001A4103: ;
    ecx = edx + edi * 4;
    edx = MEM32(ebp + 0x10);
    edx = edx - MEM32(ebp + -12);
    ebx = ebx - edi;
    MEM32(ebp + -32) = ebx;
    edi = edi + ebx;

loc_001A4113: ;
    eax = MEM32(esi + 0x40C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x19660D);
    eax = eax + 0x3C6EF35F;
    MEM32(esi + 0x40C) = eax;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    eax = eax + ebx;
    ebx = eax;
    ebx = ebx - MEM32(esi + 0x408);
    MEM32(esi + 0x408) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -40) = ebx;
    ebx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + ebx * 2);
    fp_push((double)SMEM32(ebp + -40)); /* fild */
    MEM32(ebp + -40) = eax;
    fp_top() = fp_top() * MEMF(ebp + -16); /* fmul dword ptr [ebp - 0x10] */
    fp_top() = fp_top() + (double)SMEM32(ebp + -40); /* fiadd dword ptr [ebp - 0x28] */
    fp_top() = fp_top() * MEMF(edx + ecx); /* fmul dword ptr [edx + ecx] */
    fp_top() = fp_top() * MEMF(ebp + 0xC); /* fmul dword ptr [ebp + 0xc] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ecx + 4;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A4113; /* jne: not equal / not zero */

loc_001A416E: ;
    edx = MEM32(ebp + -12);

loc_001A4171: ;
    ecx = MEM32(esi + 0x328);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A404E; /* jl: less (signed <) */

loc_001A417F: ;
    eax = MEM32(esi + 0x328);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ebx = MEM32(ebp + 0x10);
    fp_top() = fp_top() * MEMF(ebx + eax * 4 + -4); /* fmul dword ptr [ebx + eax*4 - 4] */
    ecx = MEM32(esi + 0x60);
    fp_top() = fp_top() * MEMF(ebp + -16); /* fmul dword ptr [ebp - 0x10] */

loc_001A4195: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A41D6; /* jge: greater or equal (signed >=) */

loc_001A4199: ;
    eax = MEM32(esi + 0x40C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x19660D);
    eax = eax + 0x3C6EF35F;
    MEM32(esi + 0x40C) = eax;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    eax = eax + ebx;
    ebx = eax;
    ebx = ebx - MEM32(esi + 0x408);
    MEM32(esi + 0x408) = eax;
    MEM32(ebp + 0x10) = ebx;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(edx + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001A4195;

loc_001A41D6: ;
    fp_pop(); /* fstp st(0) */

loc_001A41D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A41F0
 * Original: 0x001A41F0 - 0x001A4203 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001A41F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A41F0: ;
    fp_push(MEMD(esp + 4)); /* fld double */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001A41FFu); RECOMP_ABI_CALL(0x003439C4u, sub_003439C4); /* call 0x003439C4 */

loc_001A41FF: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A4210
 * Original: 0x001A4210 - 0x001A422F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A4210: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3E2178;
    if (TEST_Z(_fa, _fb)) goto loc_001A4229; /* je: equal / zero */

loc_001A4220: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A4226u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001A4226: ;
    esp = esp + 4;

loc_001A4229: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A4230
 * Original: 0x001A4230 - 0x001A4240 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4230(void)
{

loc_001A4230: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A423Au); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_001A423A: ;
    esp = esp + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A4240
 * Original: 0x001A4240 - 0x001A4260 (32 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4240(void)
{

loc_001A4240: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A424Fu); RECOMP_ABI_CALL(0x003439EBu, sub_003439EB); /* call 0x003439EB */

loc_001A424F: ;
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A4260
 * Original: 0x001A4260 - 0x001A4275 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4260(void)
{

loc_001A4260: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A426Fu); RECOMP_ABI_CALL(0x00343AD8u, sub_00343AD8); /* call 0x00343AD8 */

loc_001A426F: ;
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A4280
 * Original: 0x001A4280 - 0x001A428B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4280(void)
{

loc_001A4280: ;
    eax = ecx;
    MEM32(eax) = 0x3E2178;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A4290
 * Original: 0x001A4290 - 0x001A42E6 (86 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A4290: ;
    eax = MEM32(0x5BA7A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A42E5; /* jne: not equal / not zero */

loc_001A4299: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, 4);
    if (TEST_NZ(_fa, _fb)) goto loc_001A42AE; /* jne: not equal / not zero */

loc_001A42A4: ;
    PUSH32(esp, 0x001A42A9u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_001A42A9: ;
    esp = esp + 4;
    goto loc_001A42B5;

loc_001A42AE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001A42B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A42B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x5BA7A0) = eax;
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001A42C6; /* je: equal / zero */

loc_001A42C1: ;
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001A42C6: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x001A42CDu); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_001A42CD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A42DF; /* je: equal / zero */

loc_001A42D4: ;
    MEM32(eax) = 0x3E2190;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001A42DF: ;
    eax = 0; /* xor self */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A42E5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A42F0
 * Original: 0x001A42F0 - 0x001A433F (79 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A42F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A42F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A4307; /* jne: not equal / not zero */

loc_001A42FC: ;
    eax = 0; /* xor self */
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001A4307: ;
    eax = MEM32(0x5BC528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A432E; /* jne: not equal / not zero */

loc_001A4310: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001A4317u); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_001A4317: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A4327; /* je: equal / zero */

loc_001A431E: ;
    ecx = eax;
    PUSH32(esp, 0x001A4325u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_001A4325: ;
    goto loc_001A4329;

loc_001A4327: ;
    eax = 0; /* xor self */

loc_001A4329: ;
    MEM32(0x5BC528) = eax;

loc_001A432E: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x001A4336u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_001A4336: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A4340
 * Original: 0x001A4340 - 0x001A4346 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4340(void)
{

loc_001A4340: ;
    eax = MEM32(0x5BC554);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4350
 * Original: 0x001A4350 - 0x001A4356 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4350(void)
{

loc_001A4350: ;
    eax = MEM32(0x5BC28C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4360
 * Original: 0x001A4360 - 0x001A4374 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4360(void)
{

loc_001A4360: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001A436Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A436A: ;
    ecx = eax;
    PUSH32(esp, 0x001A4371u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A4371: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A4380
 * Original: 0x001A4380 - 0x001A4386 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4380(void)
{

loc_001A4380: ;
    eax = MEM32(0x5BC3C8);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4390
 * Original: 0x001A4390 - 0x001A4396 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4390(void)
{

loc_001A4390: ;
    eax = MEM32(0x5BC258);
    esp += 4; return; /* ret */

}

/**
 * sub_001A43A0
 * Original: 0x001A43A0 - 0x001A43A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A43A0(void)
{

loc_001A43A0: ;
    eax = MEM32(0x5BC428);
    esp += 4; return; /* ret */

}

/**
 * sub_001A43B0
 * Original: 0x001A43B0 - 0x001A43B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A43B0(void)
{

loc_001A43B0: ;
    eax = MEM32(0x5BC420);
    esp += 4; return; /* ret */

}

/**
 * sub_001A43C0
 * Original: 0x001A43C0 - 0x001A43C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A43C0(void)
{

loc_001A43C0: ;
    eax = MEM32(0x5BC410);
    esp += 4; return; /* ret */

}

/**
 * sub_001A43D0
 * Original: 0x001A43D0 - 0x001A43D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A43D0(void)
{

loc_001A43D0: ;
    eax = MEM32(0x5BC3EC);
    esp += 4; return; /* ret */

}

/**
 * sub_001A43E0
 * Original: 0x001A43E0 - 0x001A43E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A43E0(void)
{

loc_001A43E0: ;
    eax = MEM32(0x5BC82C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A43F0
 * Original: 0x001A43F0 - 0x001A43F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A43F0(void)
{

loc_001A43F0: ;
    eax = MEM32(0x5BC260);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4400
 * Original: 0x001A4400 - 0x001A4405 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4400: ;
    g_seh_ebp = ebp; sub_0023B4B0(); return; /* tail jmp 0x0023B4B0 */

}

/**
 * sub_001A4410
 * Original: 0x001A4410 - 0x001A4415 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4410(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4410: ;
    g_seh_ebp = ebp; sub_0023B400(); return; /* tail jmp 0x0023B400 */

}

/**
 * sub_001A4420
 * Original: 0x001A4420 - 0x001A4425 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4420: ;
    g_seh_ebp = ebp; sub_0023B280(); return; /* tail jmp 0x0023B280 */

}

/**
 * sub_001A4430
 * Original: 0x001A4430 - 0x001A4435 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4430(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4430: ;
    g_seh_ebp = ebp; sub_0023B5F0(); return; /* tail jmp 0x0023B5F0 */

}

/**
 * sub_001A4440
 * Original: 0x001A4440 - 0x001A4446 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4440(void)
{

loc_001A4440: ;
    eax = MEM32(0x5BA8D4);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4450
 * Original: 0x001A4450 - 0x001A4456 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4450(void)
{

loc_001A4450: ;
    eax = MEM32(0x5BA8D8);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4460
 * Original: 0x001A4460 - 0x001A4466 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4460(void)
{

loc_001A4460: ;
    eax = MEM32(0x5BC26C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4470
 * Original: 0x001A4470 - 0x001A4476 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4470(void)
{

loc_001A4470: ;
    eax = MEM32(0x5BA8EC);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4480
 * Original: 0x001A4480 - 0x001A4486 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4480(void)
{

loc_001A4480: ;
    eax = MEM32(0x5BA924);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4490
 * Original: 0x001A4490 - 0x001A4496 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4490(void)
{

loc_001A4490: ;
    eax = MEM32(0x5BA8F4);
    esp += 4; return; /* ret */

}

/**
 * sub_001A44A0
 * Original: 0x001A44A0 - 0x001A44E6 (70 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A44A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A44A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A44B0; /* jne: not equal / not zero */

loc_001A44AB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001A44B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A44BD; /* jge: greater or equal (signed >=) */

loc_001A44B5: ;
    eax = esi + 1;
    MEM32(edi + 8) = eax;
    goto loc_001A44CA;

loc_001A44BD: ;
    PUSH32(esp, 0x40);
    ecx = esi + 1;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001A44CAu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_001A44CA: ;
    eax = MEM32(edi + 0x10);
    edx = esi;
    edx = edx << 6;
    eax = eax + edx;
    ecx = eax + -64;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A44DEu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_001A44DE: ;
    esp = esp + 8;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A44F0
 * Original: 0x001A44F0 - 0x001A44F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A44F0(void)
{

loc_001A44F0: ;
    eax = MEM32(0x5BA954);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4500
 * Original: 0x001A4500 - 0x001A4506 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4500(void)
{

loc_001A4500: ;
    eax = MEM32(0x5BA960);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4510
 * Original: 0x001A4510 - 0x001A4516 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4510(void)
{

loc_001A4510: ;
    eax = MEM32(0x5BC318);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4520
 * Original: 0x001A4520 - 0x001A4526 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4520(void)
{

loc_001A4520: ;
    eax = MEM32(0x5BA8B0);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4530
 * Original: 0x001A4530 - 0x001A453C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4530(void)
{

loc_001A4530: ;
    PUSH32(esp, 0x1A7000);
    PUSH32(esp, 0x001A453Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A453A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4540
 * Original: 0x001A4540 - 0x001A4579 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4540(void)
{

loc_001A4540: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA8B0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A454Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A454F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461C2C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A455Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A455F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461C28);
    PUSH32(esp, 0x461C24);
    PUSH32(esp, 0x461C20);
    ecx = esi;
    PUSH32(esp, 0x001A4576u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4576: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4580
 * Original: 0x001A4580 - 0x001A4586 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4580(void)
{

loc_001A4580: ;
    eax = MEM32(0x5BA8BC);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4590
 * Original: 0x001A4590 - 0x001A459C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4590(void)
{

loc_001A4590: ;
    PUSH32(esp, 0x1A7060);
    PUSH32(esp, 0x001A459Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A459A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A45A0
 * Original: 0x001A45A0 - 0x001A45D9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A45A0(void)
{

loc_001A45A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA8BC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A45AFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A45AF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461C3C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A45BFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A45BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461C38);
    PUSH32(esp, 0x461C34);
    PUSH32(esp, 0x461C30);
    ecx = esi;
    PUSH32(esp, 0x001A45D6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A45D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A45E0
 * Original: 0x001A45E0 - 0x001A45E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A45E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A45E0: ;
    g_seh_ebp = ebp; sub_001E69F0(); return; /* tail jmp 0x001E69F0 */

}

/**
 * sub_001A45F0
 * Original: 0x001A45F0 - 0x001A4613 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A45F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A45F0: ;
    eax = MEM32(0x5BA8C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A4612; /* jne: not equal / not zero */

loc_001A45F9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A4604u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A4604: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A460Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A460A: ;
    esp = esp + 8;
    MEM32(0x5BA8C0) = eax;

loc_001A4612: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A4620
 * Original: 0x001A4620 - 0x001A462C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4620(void)
{

loc_001A4620: ;
    PUSH32(esp, 0x1A70E0);
    PUSH32(esp, 0x001A462Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A462A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4630
 * Original: 0x001A4630 - 0x001A4699 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4630(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4630: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BA8C0);
    PUSH32(esp, 0x3E226C);
    ecx = edi;
    PUSH32(esp, 0x001A4645u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A4645: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A4650u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_001A4650: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001A465Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A465B: ;
    esi = eax;
    PUSH32(esp, 0x001A4662u); RECOMP_ABI_CALL(0x00229BB0u, sub_00229BB0); /* call 0x00229BB0 */

loc_001A4662: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BA858;
    PUSH32(esp, 0x001A467Cu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_001A467C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001A4696; /* jne: not equal / not zero */

loc_001A468D: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001A4696: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A46A0
 * Original: 0x001A46A0 - 0x001A46A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A46A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A46A0: ;
    g_seh_ebp = ebp; sub_001E6900(); return; /* tail jmp 0x001E6900 */

}

/**
 * sub_001A46B0
 * Original: 0x001A46B0 - 0x001A4719 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A46B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A46B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BA8C4);
    PUSH32(esp, 0x3E226C);
    ecx = edi;
    PUSH32(esp, 0x001A46C5u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A46C5: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A46D0u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_001A46D0: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001A46DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A46DB: ;
    esi = eax;
    PUSH32(esp, 0x001A46E2u); RECOMP_ABI_CALL(0x00224B60u, sub_00224B60); /* call 0x00224B60 */

loc_001A46E2: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BA844;
    PUSH32(esp, 0x001A46FCu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_001A46FC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001A4716; /* jne: not equal / not zero */

loc_001A470D: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001A4716: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4720
 * Original: 0x001A4720 - 0x001A4789 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4720(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4720: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BA8C8);
    PUSH32(esp, 0x3E226C);
    ecx = edi;
    PUSH32(esp, 0x001A4735u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A4735: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A4740u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_001A4740: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001A474Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A474B: ;
    esi = eax;
    PUSH32(esp, 0x001A4752u); RECOMP_ABI_CALL(0x00229D80u, sub_00229D80); /* call 0x00229D80 */

loc_001A4752: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BA7F8;
    PUSH32(esp, 0x001A476Cu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_001A476C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001A4786; /* jne: not equal / not zero */

loc_001A477D: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001A4786: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4790
 * Original: 0x001A4790 - 0x001A4795 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4790(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4790: ;
    g_seh_ebp = ebp; sub_001E6960(); return; /* tail jmp 0x001E6960 */

}

/**
 * sub_001A47A0
 * Original: 0x001A47A0 - 0x001A4809 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A47A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A47A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BA8CC);
    PUSH32(esp, 0x3E226C);
    ecx = edi;
    PUSH32(esp, 0x001A47B5u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A47B5: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A47C0u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_001A47C0: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001A47CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A47CB: ;
    esi = eax;
    PUSH32(esp, 0x001A47D2u); RECOMP_ABI_CALL(0x0021C510u, sub_0021C510); /* call 0x0021C510 */

loc_001A47D2: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BA7F4;
    PUSH32(esp, 0x001A47ECu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_001A47EC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001A4806; /* jne: not equal / not zero */

loc_001A47FD: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001A4806: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4810
 * Original: 0x001A4810 - 0x001A4815 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4810: ;
    g_seh_ebp = ebp; sub_001E6A20(); return; /* tail jmp 0x001E6A20 */

}

/**
 * sub_001A4820
 * Original: 0x001A4820 - 0x001A4889 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4820: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BA8D0);
    PUSH32(esp, 0x3E226C);
    ecx = edi;
    PUSH32(esp, 0x001A4835u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A4835: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A4840u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_001A4840: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001A484Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A484B: ;
    esi = eax;
    PUSH32(esp, 0x001A4852u); RECOMP_ABI_CALL(0x0021C7E0u, sub_0021C7E0); /* call 0x0021C7E0 */

loc_001A4852: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BA870;
    PUSH32(esp, 0x001A486Cu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_001A486C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001A4886; /* jne: not equal / not zero */

loc_001A487D: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001A4886: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4890
 * Original: 0x001A4890 - 0x001A4896 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4890(void)
{

loc_001A4890: ;
    eax = MEM32(0x5BC248);
    esp += 4; return; /* ret */

}
