/**
 * X-Men Legends - Recompiled code chunk 79
 * Functions: 250 (0x0031BDC0 - 0x003205D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0031BDC0
 * Original: 0x0031BDC0 - 0x0031BDEA (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031BDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BDC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BDE7; /* jne: not equal / not zero */

loc_0031BDC7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BDCDu); RECOMP_ABI_CALL(0x00322A50u, sub_00322A50); /* call 0x00322A50 */

loc_0031BDCD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BDE7; /* jne: not equal / not zero */

loc_0031BDD4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BDDAu); RECOMP_ABI_CALL(0x00322A70u, sub_00322A70); /* call 0x00322A70 */

loc_0031BDDA: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BDE7; /* jne: not equal / not zero */

loc_0031BDE1: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0031BDE7: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031BDF0
 * Original: 0x0031BDF0 - 0x0031BE27 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BDF0(void)
{

loc_0031BDF0: ;
    eax = MEM32(esi + 0x1C34);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BDFFu); RECOMP_ABI_CALL(0x003230E0u, sub_003230E0); /* call 0x003230E0 */

loc_0031BDFF: ;
    ecx = MEM32(esi + 0x1C30);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0031BE0Eu); RECOMP_ABI_CALL(0x003230E0u, sub_003230E0); /* call 0x003230E0 */

loc_0031BE0E: ;
    edx = MEM32(esi + 0x1C38);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x0031BE1Du); RECOMP_ABI_CALL(0x003230E0u, sub_003230E0); /* call 0x003230E0 */

loc_0031BE1D: ;
    eax = eax | ebx;
    esp = esp + 0x18;
    eax = eax | edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BE30
 * Original: 0x0031BE30 - 0x0031BE5E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BE30(void)
{

loc_0031BE30: ;
    eax = MEM32(esi + 0x1C34);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BE3Eu); RECOMP_ABI_CALL(0x003230C0u, sub_003230C0); /* call 0x003230C0 */

loc_0031BE3E: ;
    ecx = MEM32(esi + 0x1C30);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BE4Cu); RECOMP_ABI_CALL(0x003230C0u, sub_003230C0); /* call 0x003230C0 */

loc_0031BE4C: ;
    edx = MEM32(esi + 0x1C38);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BE5Au); RECOMP_ABI_CALL(0x003230C0u, sub_003230C0); /* call 0x003230C0 */

loc_0031BE5A: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BE60
 * Original: 0x0031BE60 - 0x0031BE98 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BE60: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x9F8);
    if (CMP_G(_fas & _fbs, 0)) goto loc_0031BE7C; /* jg: greater (signed >) */

loc_0031BE6E: ;
    eax = edx;
    PUSH32(esp, 0x0031BE75u); RECOMP_ABI_CALL(0x0031BBF0u, sub_0031BBF0); /* call 0x0031BBF0 */

loc_0031BE75: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031BE82; /* jle: less or equal (signed <=) */

loc_0031BE7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031BE82; /* jge: greater or equal (signed >=) */

loc_0031BE80: ;
    esi = eax;

loc_0031BE82: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031BE8Au); RECOMP_ABI_CALL(0x00322F70u, sub_00322F70); /* call 0x00322F70 */

loc_0031BE8A: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BEA0
 * Original: 0x0031BEA0 - 0x0031BF0F (111 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BEA0: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C24);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BEAFu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031BEAF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BEDA; /* jne: not equal / not zero */

loc_0031BEB7: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BEDA; /* jne: not equal / not zero */

loc_0031BEBE: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BEC6u); RECOMP_ABI_CALL(0x003238C0u, sub_003238C0); /* call 0x003238C0 */

loc_0031BEC6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BEDA; /* je: equal / zero */

loc_0031BECD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BED7u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_0031BED7: ;
    esp = esp + 0xC;

loc_0031BEDA: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BEE2u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031BEE2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BF0D; /* jne: not equal / not zero */

loc_0031BEEA: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BF0D; /* jne: not equal / not zero */

loc_0031BEF1: ;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BEF9u); RECOMP_ABI_CALL(0x003238C0u, sub_003238C0); /* call 0x003238C0 */

loc_0031BEF9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BF0D; /* je: equal / zero */

loc_0031BF00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BF0Au); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_0031BF0A: ;
    esp = esp + 0xC;

loc_0031BF0D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BF10
 * Original: 0x0031BF10 - 0x0031BF7A (106 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BF10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031BF10: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1C24);
    ecx = MEM32(edi);
    esi = 0; /* xor self */
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = ecx;
    ebx = 0; /* xor self */
    /* nop */

loc_0031BF30: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031BF40u); RECOMP_ABI_CALL(0x003286B0u, sub_003286B0); /* call 0x003286B0 */

loc_0031BF40: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031BF4D; /* jg: greater (signed >) */

loc_0031BF4B: ;
    esi = eax;

loc_0031BF4D: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031BF57; /* jg: greater (signed >) */

loc_0031BF55: ;
    ebp = eax;

loc_0031BF57: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031BF30; /* jl: less (signed <) */

loc_0031BF5D: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = esi;
    MEM32(ecx) = esi;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BF80
 * Original: 0x0031BF80 - 0x0031BFF7 (119 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BF80: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x1C24);
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031BF98u); RECOMP_ABI_CALL(0x00328660u, sub_00328660); /* call 0x00328660 */

loc_0031BF98: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BFAE; /* je: equal / zero */

loc_0031BFA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031BFAE; /* jle: less or equal (signed <=) */

loc_0031BFA8: ;
    MEM32(esi + 0x924) = eax;

loc_0031BFAE: ;
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031BFBBu); RECOMP_ABI_CALL(0x003286B0u, sub_003286B0); /* call 0x003286B0 */

loc_0031BFBB: ;
    eax = MEM32(esp + 0x30);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BFCD; /* je: equal / zero */

loc_0031BFC7: ;
    MEM32(esi + 0x928) = eax;

loc_0031BFCD: ;
    _fa = (uint32_t)(MEM32(esi + 0x930)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x930), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BFDF; /* jne: not equal / not zero */

loc_0031BFD6: ;
    edx = MEM32(ebx + 8);
    MEM32(esi + 0x930) = edx;

loc_0031BFDF: ;
    _fa = (uint32_t)(MEM32(esi + 0x934)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x934), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BFF1; /* jne: not equal / not zero */

loc_0031BFE8: ;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x934) = eax;

loc_0031BFF1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C000
 * Original: 0x0031C000 - 0x0031C04D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C000(void)
{

loc_0031C000: ;
    eax = 0x7FFFFFFF;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, edi);
    MEM32(edx + 0x20) = eax;
    MEM32(edx + 0x24) = eax;
    MEM32(edx + 0x28) = eax;
    MEM32(edx + 0x2C) = eax;
    MEM32(edx) = esi;
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0x14) = esi;
    MEM32(edx + 0x30) = esi;
    edi = edx + 0x34;
    ecx = 0x44;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(edx + 0x144) = esi;
    MEM32(edx + 0x148) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C050
 * Original: 0x0031C050 - 0x0031C055 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C050(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C050: ;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

}

/**
 * sub_0031C060
 * Original: 0x0031C060 - 0x0031C06A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C060(void)
{

loc_0031C060: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031C066u); RECOMP_ABI_CALL(0x00328540u, sub_00328540); /* call 0x00328540 */

loc_0031C066: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C070
 * Original: 0x0031C070 - 0x0031C083 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C070(void)
{

loc_0031C070: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000D0Bu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031C07Fu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031C07F: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C090
 * Original: 0x0031C090 - 0x0031C0FD (109 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C090: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = ecx;
    eax = MEM32(esi + 0x184);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    esi = esi + 0x24;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031C0B5u); RECOMP_ABI_CALL(0x003298D0u, sub_003298D0); /* call 0x003298D0 */

loc_0031C0B5: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ebx = eax;
    eax = MEM32(esi + 0x164);
    PUSH32(esp, eax);
    esi = esi + 0xB0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031C0D5u); RECOMP_ABI_CALL(0x003298D0u, sub_003298D0); /* call 0x003298D0 */

loc_0031C0D5: ;
    esp = esp + 0x28;
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0031C0E7; /* jne: not equal / not zero */

loc_0031C0DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C0E7; /* jne: not equal / not zero */

loc_0031C0E3: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031C0E7: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0xFF000D0Du);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031C0F6u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031C0F6: ;
    esp = esp + 8;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C100
 * Original: 0x0031C100 - 0x0031C10E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C100(void)
{

loc_0031C100: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C24);
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C110
 * Original: 0x0031C110 - 0x0031C152 (66 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031C110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C110: ;
    PUSH32(esp, 0x0031C115u); RECOMP_ABI_CALL(0x002123A0u, sub_002123A0); /* call 0x002123A0 */

loc_0031C115: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C122; /* je: equal / zero */

loc_0031C119: ;
    /* nop */

loc_0031C120: ;
    goto loc_0031C120;

loc_0031C122: ;
    PUSH32(esp, 0x5D1CB8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0031C12Eu); RECOMP_ABI_CALL(0x00328630u, sub_00328630); /* call 0x00328630 */

loc_0031C12E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C145; /* je: equal / zero */

loc_0031C135: ;
    PUSH32(esp, 0xFF000D01u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031C141u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031C141: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031C145: ;
    MEM32(0x6E6A34) = 0;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031C160
 * Original: 0x0031C160 - 0x0031C18F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C160: ;
    PUSH32(esp, 0x0031C165u); RECOMP_ABI_CALL(0x0031BBF0u, sub_0031BBF0); /* call 0x0031BBF0 */

loc_0031C165: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C17B; /* jne: not equal / not zero */

loc_0031C16A: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C178; /* jne: not equal / not zero */

loc_0031C171: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C17B; /* je: equal / zero */

loc_0031C178: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031C17B: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0xC);
    ecx = ecx + edx;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0031C190
 * Original: 0x0031C190 - 0x0031C261 (209 bytes, 87 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C190(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C190: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031C19Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031C19D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C1AB; /* jne: not equal / not zero */

loc_0031C1A4: ;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031C1AB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1C24);
    eax = MEM32(esi + 0x2C);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_0031C1C5; /* jne: not equal / not zero */

loc_0031C1C2: ;
    MEM32(esi + 0x2C) = edi;

loc_0031C1C5: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C1CD; /* jne: not equal / not zero */

loc_0031C1CA: ;
    MEM32(esi + 0x24) = edi;

loc_0031C1CD: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031C1D5u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031C1D5: ;
    ebx = eax;
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    ebp = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0031C20E; /* je: equal / zero */

loc_0031C1E2: ;
    PUSH32(esp, 0x37);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031C1EAu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031C1EA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C1FD; /* je: equal / zero */

loc_0031C1F1: ;
    ecx = MEM32(esi + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0031C207;

loc_0031C1FD: ;
    ecx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_0031C207: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C20E; /* je: equal / zero */

loc_0031C20B: ;
    MEM32(esi + 0x2C) = ebx;

loc_0031C20E: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), edi (32-bit) */
    MEM32(esi + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0031C220; /* je: equal / zero */

loc_0031C216: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031C220: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0031C242; /* jl: less (signed <) */

loc_0031C228: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031C231; /* jge: greater or equal (signed >=) */

loc_0031C22F: ;
    edx = eax;

loc_0031C231: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0xC) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0031C23D; /* jge: greater or equal (signed >=) */

loc_0031C23B: ;
    ecx = eax;

loc_0031C23D: ;
    MEM32(esi + 0x10) = ecx;
    eax = eax - edx;

loc_0031C242: ;
    ecx = MEM32(ebp + 0x1C34);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031C259u); RECOMP_ABI_CALL(0x0031BC50u, sub_0031BC50); /* call 0x0031BC50 */

loc_0031C259: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C270
 * Original: 0x0031C270 - 0x0031C2AA (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C270: ;
    esp = esp - 8;
    PUSH32(esp, 0x3B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C27Bu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031C27B: ;
    esp = esp + 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031C2A4; /* je: equal / zero */

loc_0031C281: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031C2A4; /* jne: not equal / not zero */

loc_0031C284: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x0031C294u); RECOMP_ABI_CALL(0x0031BF10u, sub_0031BF10); /* call 0x0031BF10 */

loc_0031C294: ;
    ecx = MEM32(esp + 8);
    eax = 2;
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031C2A6; /* jge: greater or equal (signed >=) */

loc_0031C2A4: ;
    eax = edi;

loc_0031C2A6: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C2B0
 * Original: 0x0031C2B0 - 0x0031C2FE (78 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C2B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0031C2BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031C2BE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C2D4; /* jl: less (signed <) */

loc_0031C2C5: ;
    PUSH32(esp, ebx);
    edx = edi;
    PUSH32(esp, 0x0031C2CDu); RECOMP_ABI_CALL(0x0031BC10u, sub_0031BC10); /* call 0x0031BC10 */

loc_0031C2CD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C2D9; /* jne: not equal / not zero */

loc_0031C2D4: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031C2D9: ;
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031C2F6; /* jle: less or equal (signed <=) */

loc_0031C2DF: ;
    eax = eax + ebx;
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0x0031C2E9u); RECOMP_ABI_CALL(0x0031BC10u, sub_0031BC10); /* call 0x0031BC10 */

loc_0031C2E9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C2F6; /* je: equal / zero */

loc_0031C2F0: ;
    MEM32(0x6E6A34) = MEM32(0x6E6A34) + 1;
    _fa = (uint32_t)(MEM32(0x6E6A34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0031C2F6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C300
 * Original: 0x0031C300 - 0x0031C3B9 (185 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C300: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x28);
    ebx = MEM32(esi + 0x1C2C);
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 4 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C24);
    if (CMP_L(_fas, _fbs)) goto loc_0031C367; /* jl: less (signed <) */

loc_0031C321: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031C327u); RECOMP_ABI_CALL(0x00329A20u, sub_00329A20); /* call 0x00329A20 */

loc_0031C327: ;
    ebp = eax;
    esp = esp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x80000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C35A; /* jne: not equal / not zero */

loc_0031C334: ;
    eax = MEM32(esi + 0x1C3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0031C351; /* jge: greater or equal (signed >=) */

loc_0031C33E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C345u); RECOMP_ABI_CALL(0x00322F50u, sub_00322F50); /* call 0x00322F50 */

loc_0031C345: ;
    esp = esp + 8;
    eax = eax + 4;
    MEM32(esi + 0x1C3C) = eax;

loc_0031C351: ;
    MEM32(edi + 0x30) = 1;
    goto loc_0031C369;

loc_0031C35A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C369; /* je: equal / zero */

loc_0031C35E: ;
    MEM32(edi + 0x30) = 0;
    goto loc_0031C369;

loc_0031C367: ;
    ebp = 0; /* xor self */

loc_0031C369: ;
    eax = ebp;
    PUSH32(esp, 0x0031C370u); RECOMP_ABI_CALL(0x0031BDC0u, sub_0031BDC0); /* call 0x0031BDC0 */

loc_0031C370: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C38A; /* jne: not equal / not zero */

loc_0031C374: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031C39C; /* jge: greater or equal (signed >=) */

loc_0031C37B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C382u); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_0031C382: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C39C; /* jne: not equal / not zero */

loc_0031C38A: ;
    edi = 1;
    PUSH32(esp, 0x0031C394u); RECOMP_ABI_CALL(0x0031BD40u, sub_0031BD40); /* call 0x0031BD40 */

loc_0031C394: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031C39C: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031C3AE; /* jge: greater or equal (signed >=) */

loc_0031C3A6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C394; /* je: equal / zero */

loc_0031C3AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C3C0
 * Original: 0x0031C3C0 - 0x0031C3FB (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C3C0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x0031C3C8u); RECOMP_ABI_CALL(0x0031BDF0u, sub_0031BDF0); /* call 0x0031BDF0 */

loc_0031C3C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C3F9; /* je: equal / zero */

loc_0031C3CD: ;
    eax = MEM32(esi + 0x1C2C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C3DAu); RECOMP_ABI_CALL(0x003230E0u, sub_003230E0); /* call 0x003230E0 */

loc_0031C3DA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C3F9; /* jne: not equal / not zero */

loc_0031C3E2: ;
    edx = esi;
    PUSH32(esp, 0x0031C3E9u); RECOMP_ABI_CALL(0x0031BE60u, sub_0031BE60); /* call 0x0031BE60 */

loc_0031C3E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C3F9; /* je: equal / zero */

loc_0031C3ED: ;
    PUSH32(esp, edi);
    edi = 1;
    PUSH32(esp, 0x0031C3F8u); RECOMP_ABI_CALL(0x0031BE30u, sub_0031BE30); /* call 0x0031BE30 */

loc_0031C3F8: ;
    POP32(esp, edi);

loc_0031C3F9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C400
 * Original: 0x0031C400 - 0x0031C46B (107 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C400: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = edi + 0x1E3C;
    edx = ebx;
    MEM32(edi + 0x1C24) = ebx;
    PUSH32(esp, 0x0031C41Au); RECOMP_ABI_CALL(0x0031C000u, sub_0031C000); /* call 0x0031C000 */

loc_0031C41A: ;
    PUSH32(esp, 0x0031C41Fu); RECOMP_ABI_CALL(0x00328610u, sub_00328610); /* call 0x00328610 */

loc_0031C41F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C437; /* jne: not equal / not zero */

loc_0031C425: ;
    PUSH32(esp, 0xFF000D08u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031C430u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031C430: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031C437: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x31C050);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C443u); RECOMP_ABI_CALL(0x00328480u, sub_00328480); /* call 0x00328480 */

loc_0031C443: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C463; /* je: equal / zero */

loc_0031C44A: ;
    eax = esi;
    PUSH32(esp, 0x0031C451u); RECOMP_ABI_CALL(0x0031C060u, sub_0031C060); /* call 0x0031C060 */

loc_0031C451: ;
    PUSH32(esp, 0xFF000D09u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031C45Cu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031C45C: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031C463: ;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C470
 * Original: 0x0031C470 - 0x0031C49A (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C470: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C24);
    eax = MEM32(eax);
    PUSH32(esp, 0x0031C482u); RECOMP_ABI_CALL(0x0031C060u, sub_0031C060); /* call 0x0031C060 */

loc_0031C482: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C496; /* je: equal / zero */

loc_0031C486: ;
    PUSH32(esp, 0xFF000D0Au);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C491u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031C491: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031C496: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C4A0
 * Original: 0x0031C4A0 - 0x0031C4C1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C4A0: ;
    edx = MEM32(eax + 0x2E94);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C4B7; /* je: equal / zero */

loc_0031C4AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031C4B0u); RECOMP_ABI_CALL(0x0031C100u, sub_0031C100); /* call 0x0031C100 */

loc_0031C4B0: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031C4BA; /* jle: less or equal (signed <=) */

loc_0031C4B7: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031C4BA: ;
    eax = edx + 0x8A0;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C4D0
 * Original: 0x0031C4D0 - 0x0031C54E (126 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031C4D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C4D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp) = 0;
    ecx = MEM32(eax + 0x28);
    edx = ecx + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C502; /* jl: less (signed <) */

loc_0031C4F0: ;
    eax = edi;
    PUSH32(esp, 0x0031C4F7u); RECOMP_ABI_CALL(0x0031BBC0u, sub_0031BBC0); /* call 0x0031BBC0 */

loc_0031C4F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C502; /* je: equal / zero */

loc_0031C4FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0031C502: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C528; /* jl: less (signed <) */

loc_0031C50A: ;
    /* nop */

loc_0031C510: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031C516u); RECOMP_ABI_CALL(0x00329A20u, sub_00329A20); /* call 0x00329A20 */

loc_0031C516: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xD0000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C546; /* jne: not equal / not zero */

loc_0031C520: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031C510; /* jge: greater or equal (signed >=) */

loc_0031C528: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031C546; /* jle: less or equal (signed <=) */

loc_0031C52C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031C546; /* jge: greater or equal (signed >=) */

loc_0031C531: ;
    eax = MEM32(esp + 0x14);
    edi = edi + esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031C53Du); RECOMP_ABI_CALL(0x0031C160u, sub_0031C160); /* call 0x0031C160 */

loc_0031C53D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C546; /* je: equal / zero */

loc_0031C544: ;
    ebx = ebx + esi;

loc_0031C546: ;
    MEM32(ebp) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C550
 * Original: 0x0031C550 - 0x0031C574 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C550: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C556u); RECOMP_ABI_CALL(0x0031C2B0u, sub_0031C2B0); /* call 0x0031C2B0 */

loc_0031C556: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C570; /* jne: not equal / not zero */

loc_0031C55D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C570; /* je: equal / zero */

loc_0031C561: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0031C56Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031C56D: ;
    esp = esp + 8;

loc_0031C570: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C580
 * Original: 0x0031C580 - 0x0031C677 (247 bytes, 98 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C580(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C58Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031C58D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C59B; /* jne: not equal / not zero */

loc_0031C594: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031C59B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x1C24);
    eax = MEM32(ebx + 0x28);
    PUSH32(esp, ebp);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0031C5BA; /* jne: not equal / not zero */

loc_0031C5AE: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0x0031C5B7u); RECOMP_ABI_CALL(0x0031C270u, sub_0031C270); /* call 0x0031C270 */

loc_0031C5B7: ;
    MEM32(ebx + 0x28) = eax;

loc_0031C5BA: ;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C5C6; /* jne: not equal / not zero */

loc_0031C5BF: ;
    eax = MEM32(esp + 0x18);
    MEM32(ebx + 0x20) = eax;

loc_0031C5C6: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C5CEu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031C5CE: ;
    edi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ebp = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_0031C642; /* je: equal / zero */

loc_0031C5DB: ;
    PUSH32(esp, 0x37);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C5E3u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031C5E3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C5FA; /* je: equal / zero */

loc_0031C5EA: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebx + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0031C608;

loc_0031C5FA: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_0031C608: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C642; /* je: equal / zero */

loc_0031C60C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C642; /* je: equal / zero */

loc_0031C611: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C642; /* jl: less (signed <) */

loc_0031C618: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C642; /* jne: not equal / not zero */

loc_0031C61E: ;
    SET_LO8(eax, MEM8(ebp + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C642; /* jne: not equal / not zero */

loc_0031C625: ;
    _fa = (uint32_t)(MEM8(ebp + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C642; /* jne: not equal / not zero */

loc_0031C62B: ;
    SET_LO8(eax, MEM8(ebp + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C63F; /* je: equal / zero */

loc_0031C632: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB8 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C642; /* je: equal / zero */

loc_0031C63F: ;
    MEM32(ebx + 0x28) = edi;

loc_0031C642: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), eax (32-bit) */
    MEM32(ebx + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031C658; /* je: equal / zero */

loc_0031C64E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031C658: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esi + 0x1C30);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, 0x0031C66Fu); RECOMP_ABI_CALL(0x0031BC50u, sub_0031BC50); /* call 0x0031BC50 */

loc_0031C66F: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C680
 * Original: 0x0031C680 - 0x0031C711 (145 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C680(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C680: ;
    eax = MEM32(esi + 0x1C38);
    esp = esp - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_0031C69D; /* jne: not equal / not zero */

loc_0031C693: ;
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0031C69D: ;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C6ABu); RECOMP_ABI_CALL(0x00322DD0u, sub_00322DD0); /* call 0x00322DD0 */

loc_0031C6AB: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x24);
    esp = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0031C6D5; /* jne: not equal / not zero */

loc_0031C6CA: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0031C6D5: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x0031C6E3u); RECOMP_ABI_CALL(0x0031C2B0u, sub_0031C2B0); /* call 0x0031C2B0 */

loc_0031C6E3: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C708; /* jne: not equal / not zero */

loc_0031C6EA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C6F5; /* je: equal / zero */

loc_0031C6EE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0031C6F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031C6F2: ;
    esp = esp + 8;

loc_0031C6F5: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C708; /* je: equal / zero */

loc_0031C6FD: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0031C705u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031C705: ;
    esp = esp + 8;

loc_0031C708: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C720
 * Original: 0x0031C720 - 0x0031C787 (103 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C720: ;
    eax = esi;
    PUSH32(esp, 0x0031C727u); RECOMP_ABI_CALL(0x0031C4A0u, sub_0031C4A0); /* call 0x0031C4A0 */

loc_0031C727: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C786; /* je: equal / zero */

loc_0031C72B: ;
    ecx = MEM32(esi + 0x1C24);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C786; /* je: equal / zero */

loc_0031C73C: ;
    edx = edx - MEM32(eax + 0x18);
    MEM32(esi + 0xE10) = edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C786; /* jne: not equal / not zero */

loc_0031C74A: ;
    edx = MEM32(esi + 0x924);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x32);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 0x928);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esi + 0xE0C);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 0x24);
    MEM32(eax + 0x20) = ecx;

loc_0031C786: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C790
 * Original: 0x0031C790 - 0x0031C810 (128 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C790: ;
    esp = esp - 0x20;
    PUSH32(esp, 0x0031C798u); RECOMP_ABI_CALL(0x0031C4A0u, sub_0031C4A0); /* call 0x0031C4A0 */

loc_0031C798: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C80C; /* je: equal / zero */

loc_0031C79C: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C80C; /* jne: not equal / not zero */

loc_0031C7A1: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = eax + 0x24;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031C7B4u); RECOMP_ABI_CALL(0x003286F0u, sub_003286F0); /* call 0x003286F0 */

loc_0031C7B4: ;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB0 (32-bit) */
    eax = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0031C7C6; /* jl: less (signed <) */

loc_0031C7C1: ;
    eax = 0xB0;

loc_0031C7C6: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031C7E8; /* jle: less or equal (signed <=) */

loc_0031C7CE: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esi + 0x160) = eax;
    PUSH32(esp, 0x0031C7E0u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031C7E0: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0031C7E8: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031C80B; /* jle: less or equal (signed <=) */

loc_0031C7F0: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    MEM32(esi + 0x164) = eax;
    PUSH32(esp, edx);
    esi = esi + 0xB0;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C808u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031C808: ;
    esp = esp + 0xC;

loc_0031C80B: ;
    POP32(esp, esi);

loc_0031C80C: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C810
 * Original: 0x0031C810 - 0x0031C82D (29 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C810: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    PUSH32(esp, 0x0031C81Du); RECOMP_ABI_CALL(0x0031C4A0u, sub_0031C4A0); /* call 0x0031C4A0 */

loc_0031C81D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C828; /* je: equal / zero */

loc_0031C823: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0031C82D(); return; } /* jne: not equal / not zero */

loc_0031C828: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C82D
 * Original: 0x0031C82D - 0x0031C871 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C82D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C82D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x1C24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031C83Au); RECOMP_ABI_CALL(0x00324F60u, sub_00324F60); /* call 0x00324F60 */

loc_0031C83A: ;
    PUSH32(esp, 0x0031C83Fu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0031C83F: ;
    PUSH32(esp, edi);
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0x0031C849u); RECOMP_ABI_CALL(0x0031C090u, sub_0031C090); /* call 0x0031C090 */

loc_0031C849: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C86D; /* jne: not equal / not zero */

loc_0031C850: ;
    eax = MEM32(esi + 0x1C);
    MEM32(ebx + 0x20) = eax;
    ecx = MEM32(esi + 0x20);
    MEM32(ebx + 0x24) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(edi + 0xE0C) = edx;
    eax = MEM32(esi + 0x18);
    MEM32(ebx + 0xC) = eax;
    eax = 0; /* xor self */

loc_0031C86D: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C880
 * Original: 0x0031C880 - 0x0031C98C (268 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C880(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C880: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    ebx = eax;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    MEM32(eax) = 0;
    edi = ecx;
    MEM32(ebp) = 0;
    esi = MEM32(edi + 0x1C24);
    eax = MEM32(esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = 0;
    PUSH32(esp, 0x0031C8BBu); RECOMP_ABI_CALL(0x00328730u, sub_00328730); /* call 0x00328730 */

loc_0031C8BB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C8D4; /* je: equal / zero */

loc_0031C8C2: ;
    PUSH32(esp, 0xFF000D06u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031C8CDu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031C8CD: ;
    esp = esp + 8;
    MEM32(esp + 0x40) = eax;

loc_0031C8D4: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0031C8F6; /* jge: greater or equal (signed >=) */

loc_0031C8E0: ;
    PUSH32(esp, 0xFF000D0Eu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031C8EBu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031C8EB: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0031C8F6: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0031C913; /* jne: not equal / not zero */

loc_0031C8F8: ;
    edx = MEM32(esp + 0x3C);
    MEM32(edx) = 0;
    MEM32(ebp) = 1;

loc_0031C909: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0031C913: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C909; /* jl: less (signed <) */

loc_0031C919: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esi + edx * 4 + -700);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C940; /* je: equal / zero */

loc_0031C928: ;
    edi = MEM32(esi + 0x144);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x148);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031C93Bu); RECOMP_ABI_CALL(0x0031C550u, sub_0031C550); /* call 0x0031C550 */

loc_0031C93B: ;
    esp = esp + 8;
    goto loc_0031C95B;

loc_0031C940: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x42F618); PUSH32(esp, 0x0031C958u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031C958: ;
    esp = esp + 0x14;

loc_0031C95B: ;
    MEM32(ebp) = eax;
    ebp = eax;
    eax = eax - 0;
    if ((eax == 0)) goto loc_0031C980; /* je: equal / zero */

loc_0031C965: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031C976; /* je: equal / zero */

loc_0031C968: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 0x38) = ebp;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0031C976: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x3C);
    MEM32(edx) = ecx;

loc_0031C980: ;
    eax = MEM32(esp + 0x40);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C990
 * Original: 0x0031C990 - 0x0031C9F5 (101 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C990(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C990: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031C9B3u); RECOMP_ABI_CALL(0x00324F90u, sub_00324F90); /* call 0x00324F90 */

loc_0031C9B3: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C9E4; /* je: equal / zero */

loc_0031C9BA: ;
    PUSH32(esp, 0x0031C9BFu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0031C9BF: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C9D9; /* je: equal / zero */

loc_0031C9C7: ;
    edi = edi + 0x12;
    PUSH32(esp, edi);
    ebx = ebx + 0xFFFFFFEEu;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031C9D6u); RECOMP_ABI_CALL(0x0031C680u, sub_0031C680); /* call 0x0031C680 */

loc_0031C9D6: ;
    esp = esp + 0xC;

loc_0031C9D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031C9E4: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031C9ECu); RECOMP_ABI_CALL(0x0031C680u, sub_0031C680); /* call 0x0031C680 */

loc_0031C9EC: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CA00
 * Original: 0x0031CA00 - 0x0031CA35 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CA00(void)
{

loc_0031CA00: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x0031CA17u); RECOMP_ABI_CALL(0x0031BF10u, sub_0031BF10); /* call 0x0031BF10 */

loc_0031CA17: ;
    esp = esp + 8;
    eax = esi;
    PUSH32(esp, 0x0031CA21u); RECOMP_ABI_CALL(0x0031C3C0u, sub_0031C3C0); /* call 0x0031C3C0 */

loc_0031CA21: ;
    PUSH32(esp, 0x0031CA26u); RECOMP_ABI_CALL(0x0031BF80u, sub_0031BF80); /* call 0x0031BF80 */

loc_0031CA26: ;
    PUSH32(esp, 0x0031CA2Bu); RECOMP_ABI_CALL(0x0031BEA0u, sub_0031BEA0); /* call 0x0031BEA0 */

loc_0031CA2B: ;
    PUSH32(esp, 0x0031CA30u); RECOMP_ABI_CALL(0x0031C720u, sub_0031C720); /* call 0x0031C720 */

loc_0031CA30: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CA40
 * Original: 0x0031CA40 - 0x0031CBB6 (374 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CA40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031CA40: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = 0;
    ebx = ecx;
    ecx = MEM32(esi + 0x1C24);
    ebp = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebx;
    eax = esi;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0031CA6Fu); RECOMP_ABI_CALL(0x0031C300u, sub_0031C300); /* call 0x0031C300 */

loc_0031CA6F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031CA7D; /* jne: not equal / not zero */

loc_0031CA76: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031CA7D: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031CA8Fu); RECOMP_ABI_CALL(0x003298D0u, sub_003298D0); /* call 0x003298D0 */

loc_0031CA8F: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031CAA8; /* je: equal / zero */

loc_0031CA96: ;
    PUSH32(esp, 0xFF000D03u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031CAA1u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031CAA1: ;
    esp = esp + 8;
    MEM32(esp + 0x10) = eax;

loc_0031CAA8: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031CAC3; /* je: equal / zero */

loc_0031CAB3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0x0031CABCu); RECOMP_ABI_CALL(0x0031C790u, sub_0031C790); /* call 0x0031C790 */

loc_0031CABC: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 8;

loc_0031CAC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CB24; /* jne: not equal / not zero */

loc_0031CACA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031CAD0u); RECOMP_ABI_CALL(0x00322A50u, sub_00322A50); /* call 0x00322A50 */

loc_0031CAD0: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031CAF3; /* je: equal / zero */

loc_0031CAD7: ;
    eax = esi;
    PUSH32(esp, 0x0031CADEu); RECOMP_ABI_CALL(0x0031BDB0u, sub_0031BDB0); /* call 0x0031BDB0 */

loc_0031CADE: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(edx) = 4;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031CAF3: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CB24; /* jne: not equal / not zero */

loc_0031CAFE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031CB04u); RECOMP_ABI_CALL(0x00322A70u, sub_00322A70); /* call 0x00322A70 */

loc_0031CB04: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031CB20; /* je: equal / zero */

loc_0031CB0B: ;
    eax = MEM32(esp + 0x24);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(eax) = 4;
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031CB20: ;
    eax = MEM32(esp + 0xC);

loc_0031CB24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031CB4F; /* jne: not equal / not zero */

loc_0031CB28: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x0031CB37u); RECOMP_ABI_CALL(0x0031C4D0u, sub_0031C4D0); /* call 0x0031C4D0 */

loc_0031CB37: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x20);
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031CB4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031CB6F; /* jne: not equal / not zero */

loc_0031CB56: ;
    PUSH32(esp, 0xFF000D05u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031CB61u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031CB61: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esp + 8) = eax;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031CB6F: ;
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    edi = edi - eax;
    ebx = ebx + eax;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0x0031CB8Bu); RECOMP_ABI_CALL(0x0031C880u, sub_0031C880); /* call 0x0031C880 */

loc_0031CB8B: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x24);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CBAB; /* jne: not equal / not zero */

loc_0031CB9B: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x24);
    ecx = ecx + eax;
    MEM32(edx) = ecx;

loc_0031CBAB: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CBC0
 * Original: 0x0031CBC0 - 0x0031CC31 (113 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CBC0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    ebx = 0; /* xor self */

loc_0031CBD1: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0031CBE7u); RECOMP_ABI_CALL(0x0031BB60u, sub_0031BB60); /* call 0x0031BB60 */

loc_0031CBE7: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031CC2A; /* jne: not equal / not zero */

loc_0031CBEE: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x0031CC04u); RECOMP_ABI_CALL(0x0031CA40u, sub_0031CA40); /* call 0x0031CA40 */

loc_0031CC04: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031CC2A; /* jne: not equal / not zero */

loc_0031CC0B: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031CC2A; /* je: equal / zero */

loc_0031CC13: ;
    edx = edi;
    eax = esi;
    PUSH32(esp, 0x0031CC1Cu); RECOMP_ABI_CALL(0x0031BBA0u, sub_0031BBA0); /* call 0x0031BBA0 */

loc_0031CC1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031CC2A; /* jne: not equal / not zero */

loc_0031CC20: ;
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x7FFFFFFF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031CBD1; /* jl: less (signed <) */

loc_0031CC2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CC40
 * Original: 0x0031CC40 - 0x0031CC6D (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CC40: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x0031CC48u); RECOMP_ABI_CALL(0x0031BD70u, sub_0031BD70); /* call 0x0031BD70 */

loc_0031CC48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CC51; /* jne: not equal / not zero */

loc_0031CC4D: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031CC51: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0031CC59u); RECOMP_ABI_CALL(0x0031CBC0u, sub_0031CBC0); /* call 0x0031CBC0 */

loc_0031CC59: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CC68; /* jne: not equal / not zero */

loc_0031CC61: ;
    eax = esi;
    PUSH32(esp, 0x0031CC68u); RECOMP_ABI_CALL(0x0031CA00u, sub_0031CA00); /* call 0x0031CA00 */

loc_0031CC68: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CC70
 * Original: 0x0031CC70 - 0x0031CC79 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CC70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031CC70: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0031CC40(); return; /* tail jmp 0x0031CC40 */

}

/**
 * sub_0031CC80
 * Original: 0x0031CC80 - 0x0031CC99 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031CC80(void)
{

loc_0031CC80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1BEC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031CC93u); RECOMP_ABI_CALL(0x003230C0u, sub_003230C0); /* call 0x003230C0 */

loc_0031CC93: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031CCA0
 * Original: 0x0031CCA0 - 0x0031CCBA (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CCA0(void)
{

loc_0031CCA0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = MEM32(eax + 0x1BEC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031CCB6u); RECOMP_ABI_CALL(0x00323480u, sub_00323480); /* call 0x00323480 */

loc_0031CCB6: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CCC0
 * Original: 0x0031CCC0 - 0x0031CCDF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CCC0(void)
{

loc_0031CCC0: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1BEC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031CCDBu); RECOMP_ABI_CALL(0x00323760u, sub_00323760); /* call 0x00323760 */

loc_0031CCDB: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CCE0
 * Original: 0x0031CCE0 - 0x0031CCF3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CCE0(void)
{

loc_0031CCE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000501u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031CCEFu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031CCEF: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CD00
 * Original: 0x0031CD00 - 0x0031CD1C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CD00(void)
{

loc_0031CD00: ;
    PUSH32(esp, 0x0031CD05u); RECOMP_ABI_CALL(0x0030BCD0u, sub_0030BCD0); /* call 0x0030BCD0 */

loc_0031CD05: ;
    eax = 0; /* xor self */
    MEM32(0x5D23D8) = eax;
    MEM32(0x5D23D0) = eax;
    MEM32(0x5D22C8) = eax;
    MEM32(0x5D23D4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CD20
 * Original: 0x0031CD20 - 0x0031CD25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CD20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031CD20: ;
    g_seh_ebp = ebp; sub_0030BCF0(); return; /* tail jmp 0x0030BCF0 */

}

/**
 * sub_0031CD30
 * Original: 0x0031CD30 - 0x0031CD52 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CD30(void)
{

loc_0031CD30: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0031CD47u); RECOMP_ABI_CALL(0x0030BE80u, sub_0030BE80); /* call 0x0030BE80 */

loc_0031CD47: ;
    esp = esp + 0x10;
    MEM32(0x5D23D0) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CD60
 * Original: 0x0031CD60 - 0x0031CD71 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CD60(void)
{

loc_0031CD60: ;
    eax = MEM32(0x5D23D0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0031CD6Du); RECOMP_ABI_CALL(0x0030BE30u, sub_0030BE30); /* call 0x0030BE30 */

loc_0031CD6D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CD80
 * Original: 0x0031CD80 - 0x0031CD9A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CD80(void)
{

loc_0031CD80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0031CD91u); RECOMP_ABI_CALL(0x0030BDD0u, sub_0030BDD0); /* call 0x0030BDD0 */

loc_0031CD91: ;
    esp = esp + 0xC;
    MEM32(0x5D22C8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CDA0
 * Original: 0x0031CDA0 - 0x0031CDB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CDA0(void)
{

loc_0031CDA0: ;
    eax = MEM32(0x5D22C8);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0031CDADu); RECOMP_ABI_CALL(0x0030BE30u, sub_0030BE30); /* call 0x0030BE30 */

loc_0031CDAD: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CDC0
 * Original: 0x0031CDC0 - 0x0031CDDA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CDC0(void)
{

loc_0031CDC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0031CDD1u); RECOMP_ABI_CALL(0x0030BDD0u, sub_0030BDD0); /* call 0x0030BDD0 */

loc_0031CDD1: ;
    esp = esp + 0xC;
    MEM32(0x5D23D4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CDE0
 * Original: 0x0031CDE0 - 0x0031CDF1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CDE0(void)
{

loc_0031CDE0: ;
    eax = MEM32(0x5D23D4);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0031CDEDu); RECOMP_ABI_CALL(0x0030BE30u, sub_0030BE30); /* call 0x0030BE30 */

loc_0031CDED: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CE00
 * Original: 0x0031CE00 - 0x0031CE0B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CE00(void)
{

loc_0031CE00: ;
    PUSH32(esp, 0x0031CE05u); RECOMP_ABI_CALL(0x0030BAB0u, sub_0030BAB0); /* call 0x0030BAB0 */

loc_0031CE05: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CE10
 * Original: 0x0031CE10 - 0x0031CE15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CE10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031CE10: ;
    g_seh_ebp = ebp; sub_0030BDB0(); return; /* tail jmp 0x0030BDB0 */

}

/**
 * sub_0031CE20
 * Original: 0x0031CE20 - 0x0031CE2B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CE20(void)
{

loc_0031CE20: ;
    PUSH32(esp, 0x0031CE25u); RECOMP_ABI_CALL(0x0030BAC0u, sub_0030BAC0); /* call 0x0030BAC0 */

loc_0031CE25: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CE30
 * Original: 0x0031CE30 - 0x0031CE35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CE30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031CE30: ;
    g_seh_ebp = ebp; sub_0030BDC0(); return; /* tail jmp 0x0030BDC0 */

}

/**
 * sub_0031CE40
 * Original: 0x0031CE40 - 0x0031CE45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CE40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031CE40: ;
    g_seh_ebp = ebp; sub_0030BF30(); return; /* tail jmp 0x0030BF30 */

}

/**
 * sub_0031CE50
 * Original: 0x0031CE50 - 0x0031CE59 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CE50(void)
{

loc_0031CE50: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x0031CE57u); RECOMP_ABI_CALL(0x0030BB50u, sub_0030BB50); /* call 0x0030BB50 */

loc_0031CE57: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CE60
 * Original: 0x0031CE60 - 0x0031CE65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CE60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031CE60: ;
    g_seh_ebp = ebp; sub_0030BB20(); return; /* tail jmp 0x0030BB20 */

}

/**
 * sub_0031CE70
 * Original: 0x0031CE70 - 0x0031CEA2 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CE70(void)
{

loc_0031CE70: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x40;
    edi = 0x5D22D0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D22D0);
    PUSH32(esp, 0x0031CE93u); RECOMP_ABI_CALL(0x00342A40u, sub_00342A40); /* call 0x00342A40 */

loc_0031CE93: ;
    PUSH32(esp, 0x5D22D0);
    PUSH32(esp, 0x0031CE9Du); RECOMP_ABI_CALL(0x0031CE60u, sub_0031CE60); /* call 0x0031CE60 */

loc_0031CE9D: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CEB0
 * Original: 0x0031CEB0 - 0x0031CF3B (139 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CEB0: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = esi + 0x1EC;
    PUSH32(esp, 0x0031CEC1u); RECOMP_ABI_CALL(0x0031EB60u, sub_0031EB60); /* call 0x0031EB60 */

loc_0031CEC1: ;
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0x0031CEC9u); RECOMP_ABI_CALL(0x00316EA0u, sub_00316EA0); /* call 0x00316EA0 */

loc_0031CEC9: ;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CF38; /* jne: not equal / not zero */

loc_0031CED1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031CEE8; /* je: equal / zero */

loc_0031CED6: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0031CEE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031CEE1: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031CF38; /* jne: not equal / not zero */

loc_0031CEE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031CEEEu); RECOMP_ABI_CALL(0x00315130u, sub_00315130); /* call 0x00315130 */

loc_0031CEEE: ;
    SET_LO8(eax, MEM8(esi + 0x72));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031CF03; /* jne: not equal / not zero */

loc_0031CEF8: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031CF00u); RECOMP_ABI_CALL(0x00315280u, sub_00315280); /* call 0x00315280 */

loc_0031CF00: ;
    esp = esp + 8;

loc_0031CF03: ;
    _fa = (uint32_t)(MEM8(esi + 0x70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x70), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CF26; /* jne: not equal / not zero */

loc_0031CF09: ;
    edx = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031CF12u); RECOMP_ABI_CALL(0x00322A10u, sub_00322A10); /* call 0x00322A10 */

loc_0031CF12: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031CF26; /* je: equal / zero */

loc_0031CF19: ;
    PUSH32(esp, 0x42F660);
    PUSH32(esp, 0x0031CF23u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031CF23: ;
    esp = esp + 4;

loc_0031CF26: ;
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031CF38; /* jne: not equal / not zero */

loc_0031CF2D: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031CF35u); RECOMP_ABI_CALL(0x00316EE0u, sub_00316EE0); /* call 0x00316EE0 */

loc_0031CF35: ;
    esp = esp + 8;

loc_0031CF38: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CF40
 * Original: 0x0031CF40 - 0x0031CF8E (78 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CF40: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031CF49u); RECOMP_ABI_CALL(0x0031EB60u, sub_0031EB60); /* call 0x0031EB60 */

loc_0031CF49: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CF8D; /* jne: not equal / not zero */

loc_0031CF51: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031CF57u); RECOMP_ABI_CALL(0x00315130u, sub_00315130); /* call 0x00315130 */

loc_0031CF57: ;
    SET_LO8(eax, MEM8(esi + 0x72));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031CF6C; /* jne: not equal / not zero */

loc_0031CF61: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031CF69u); RECOMP_ABI_CALL(0x00315280u, sub_00315280); /* call 0x00315280 */

loc_0031CF69: ;
    esp = esp + 8;

loc_0031CF6C: ;
    _fa = (uint32_t)(MEM8(esi + 0x70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x70), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031CF8D; /* jne: not equal / not zero */

loc_0031CF72: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031CF7Bu); RECOMP_ABI_CALL(0x00322A10u, sub_00322A10); /* call 0x00322A10 */

loc_0031CF7B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031CF8D; /* je: equal / zero */

loc_0031CF82: ;
    PUSH32(esp, 0x42F660);
    PUSH32(esp, 0x0031CF8Cu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031CF8C: ;
    POP32(esp, ecx);

loc_0031CF8D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CF90
 * Original: 0x0031CF90 - 0x0031D029 (153 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031CF90: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031CF99u); RECOMP_ABI_CALL(0x0031D8A0u, sub_0031D8A0); /* call 0x0031D8A0 */

loc_0031CF99: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D016; /* je: equal / zero */

loc_0031CFA1: ;
    eax = MEM32(esi + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031CFB4; /* je: equal / zero */

loc_0031CFAB: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x0031CFB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031CFB1: ;
    esp = esp + 4;

loc_0031CFB4: ;
    edx = MEM32(esi + 0x124);
    eax = MEM32(esi + 0x120);
    ecx = MEM32(esi + 0x11C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x110);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031CFD9u); RECOMP_ABI_CALL(0x0031D830u, sub_0031D830); /* call 0x0031D830 */

loc_0031CFD9: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031CFE2u); RECOMP_ABI_CALL(0x0031D870u, sub_0031D870); /* call 0x0031D870 */

loc_0031CFE2: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D01A; /* jne: not equal / not zero */

loc_0031CFEA: ;
    PUSH32(esp, 0xFFFFFF9Au);
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x0031CFF8u); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_0031CFF8: ;
    edx = MEM32(esi + 0x110);
    PUSH32(esp, edx);
    PUSH32(esp, 0x42F68C);
    PUSH32(esp, 0x0031D009u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031D009: ;
    esp = esp + 0xC;
    MEM32(esi + 0x118) = 0;

loc_0031D016: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0031D01A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D020u); RECOMP_ABI_CALL(0x00313B60u, sub_00313B60); /* call 0x00313B60 */

loc_0031D020: ;
    esp = esp + 4;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D030
 * Original: 0x0031D030 - 0x0031D07F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D030: ;
    _fa = (uint32_t)(MEM8(esi + 0x71)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x71), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_0031D068; /* jne: not equal / not zero */

loc_0031D03A: ;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D043u); RECOMP_ABI_CALL(0x0030DBA0u, sub_0030DBA0); /* call 0x0030DBA0 */

loc_0031D043: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031D068; /* jne: not equal / not zero */

loc_0031D04A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D050u); RECOMP_ABI_CALL(0x0031E090u, sub_0031E090); /* call 0x0031E090 */

loc_0031D050: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D064; /* je: equal / zero */

loc_0031D057: ;
    PUSH32(esp, 0x42F6B8);
    PUSH32(esp, 0x0031D061u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031D061: ;
    esp = esp + 4;

loc_0031D064: ;
    MEM8(esi + 0x71) = 0;

loc_0031D068: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D06Eu); RECOMP_ABI_CALL(0x0031EB60u, sub_0031EB60); /* call 0x0031EB60 */

loc_0031D06E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0031D07E; /* jne: not equal / not zero */

loc_0031D077: ;
    MEM32(esi + 8) = 3;

loc_0031D07E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D080
 * Original: 0x0031D080 - 0x0031D0B8 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D080: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D09B; /* je: equal / zero */

loc_0031D087: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D08Du); RECOMP_ABI_CALL(0x0031D7D0u, sub_0031D7D0); /* call 0x0031D7D0 */

loc_0031D08D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D09B; /* je: equal / zero */

loc_0031D094: ;
    MEM32(esi + 8) = 4;

loc_0031D09B: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D0B7; /* je: equal / zero */

loc_0031D0A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D0A8u); RECOMP_ABI_CALL(0x00316AF0u, sub_00316AF0); /* call 0x00316AF0 */

loc_0031D0A8: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D0B7; /* jne: not equal / not zero */

loc_0031D0B0: ;
    MEM32(esi + 8) = 4;

loc_0031D0B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D0C0
 * Original: 0x0031D0C0 - 0x0031D0CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D0C0(void)
{

loc_0031D0C0: ;
    PUSH32(esp, 0x0031D0C5u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_0031D0C5: ;
    eax = eax + 4;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D0D0
 * Original: 0x0031D0D0 - 0x0031D11D (77 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D0D0: ;
    edx = MEM32(0x5D23DC);
    eax = MEM32(0x6E6A2C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6E6A2C) = eax;
    _fa = (uint32_t)(MEM32(0x5BFBD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5BFBD4), 1 (32-bit) */
    MEM32(0x5D23DC) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0031D11C; /* jne: not equal / not zero */

loc_0031D0F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D0F7u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_0031D0F7: ;
    esi = eax + 0x58;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D100u); RECOMP_ABI_CALL(0x0031CE40u, sub_0031CE40); /* call 0x0031CE40 */

loc_0031D100: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D11B; /* je: equal / zero */

loc_0031D107: ;
    _fa = (uint32_t)(MEM32(0x5BFBD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5BFBD4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D115; /* jne: not equal / not zero */

loc_0031D110: ;
    PUSH32(esp, 0x0031D115u); RECOMP_ABI_CALL(0x0031D8B0u, sub_0031D8B0); /* call 0x0031D8B0 */

loc_0031D115: ;
    MEM32(esi) = 0;

loc_0031D11B: ;
    POP32(esp, esi);

loc_0031D11C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D120
 * Original: 0x0031D120 - 0x0031D134 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D120: ;
    PUSH32(esp, 0x0031D125u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_0031D125: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D133; /* je: equal / zero */

loc_0031D12C: ;
    eax = MEM32(eax + 0x44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0031D132u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031D132: ;
    POP32(esp, ecx);

loc_0031D133: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D140
 * Original: 0x0031D140 - 0x0031D154 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D140: ;
    PUSH32(esp, 0x0031D145u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_0031D145: ;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D153; /* je: equal / zero */

loc_0031D14C: ;
    eax = MEM32(eax + 0x4C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0031D152u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031D152: ;
    POP32(esp, ecx);

loc_0031D153: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D160
 * Original: 0x0031D160 - 0x0031D16D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D160(void)
{

loc_0031D160: ;
    PUSH32(esp, 0x0031D165u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_0031D165: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x54) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D170
 * Original: 0x0031D170 - 0x0031D17C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D170(void)
{

loc_0031D170: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x60) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D180
 * Original: 0x0031D180 - 0x0031D188 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D180(void)
{

loc_0031D180: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x60);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D190
 * Original: 0x0031D190 - 0x0031D19C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D190(void)
{

loc_0031D190: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x64) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D1A0
 * Original: 0x0031D1A0 - 0x0031D1B4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D1A0(void)
{

loc_0031D1A0: ;
    PUSH32(esp, 0x0031D1A5u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_0031D1A5: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(edx + 0x5C) = ecx;
    MEM32(eax + 0x24) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D1C0
 * Original: 0x0031D1C0 - 0x0031D1C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D1C0(void)
{

loc_0031D1C0: ;
    PUSH32(esp, 0x0031D1C5u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_0031D1C5: ;
    eax = MEM32(eax + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D1D0
 * Original: 0x0031D1D0 - 0x0031D1FA (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D1D0: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_0031D1D3: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D1DBu); RECOMP_ABI_CALL(0x0031D1A0u, sub_0031D1A0); /* call 0x0031D1A0 */

loc_0031D1DB: ;
    PUSH32(esp, 0x0031D1E0u); RECOMP_ABI_CALL(0x00305300u, sub_00305300); /* call 0x00305300 */

loc_0031D1E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D1E8u); RECOMP_ABI_CALL(0x0031D1A0u, sub_0031D1A0); /* call 0x0031D1A0 */

loc_0031D1E8: ;
    eax = MEM32(esi + 0x60);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D1F8; /* je: equal / zero */

loc_0031D1F2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031D1D3; /* jl: less (signed <) */

loc_0031D1F8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D200
 * Original: 0x0031D200 - 0x0031D21A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D200: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1EC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D213; /* jne: not equal / not zero */

loc_0031D20C: ;
    PUSH32(esp, 0x0031D211u); RECOMP_ABI_CALL(0x0031CEB0u, sub_0031CEB0); /* call 0x0031CEB0 */

loc_0031D211: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031D213: ;
    PUSH32(esp, 0x0031D218u); RECOMP_ABI_CALL(0x0031CF40u, sub_0031CF40); /* call 0x0031CF40 */

loc_0031D218: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D220
 * Original: 0x0031D220 - 0x0031D23A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D220(void)
{

loc_0031D220: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D226u); RECOMP_ABI_CALL(0x0031CE00u, sub_0031CE00); /* call 0x0031CE00 */

loc_0031D226: ;
    esi = eax;
    PUSH32(esp, 0x0031D22Du); RECOMP_ABI_CALL(0x0031D0D0u, sub_0031D0D0); /* call 0x0031D0D0 */

loc_0031D22D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D233u); RECOMP_ABI_CALL(0x0031CE10u, sub_0031CE10); /* call 0x0031CE10 */

loc_0031D233: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D240
 * Original: 0x0031D240 - 0x0031D252 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D240: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D250; /* jne: not equal / not zero */

loc_0031D24B: ;
    PUSH32(esp, 0x0031D250u); RECOMP_ABI_CALL(0x0031D1D0u, sub_0031D1D0); /* call 0x0031D1D0 */

loc_0031D250: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D260
 * Original: 0x0031D260 - 0x0031D2BA (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D260: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x118)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x118), 1 (32-bit) */
    ebx = MEM32(esi + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_0031D296; /* jne: not equal / not zero */

loc_0031D270: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D276u); RECOMP_ABI_CALL(0x0031CE20u, sub_0031CE20); /* call 0x0031CE20 */

loc_0031D276: ;
    edi = eax;
    PUSH32(esp, 0x0031D27Du); RECOMP_ABI_CALL(0x0031CF90u, sub_0031CF90); /* call 0x0031CF90 */

loc_0031D27D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D28C; /* jne: not equal / not zero */

loc_0031D282: ;
    MEM32(esi + 0x118) = 0;

loc_0031D28C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D292u); RECOMP_ABI_CALL(0x0031CE30u, sub_0031CE30); /* call 0x0031CE30 */

loc_0031D292: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_0031D296: ;
    eax = esi;
    PUSH32(esp, 0x0031D29Du); RECOMP_ABI_CALL(0x0031D200u, sub_0031D200); /* call 0x0031D200 */

loc_0031D29D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031D2A3u); RECOMP_ABI_CALL(0x0031EB60u, sub_0031EB60); /* call 0x0031EB60 */

loc_0031D2A3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D2B0; /* je: equal / zero */

loc_0031D2AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D2B7; /* jne: not equal / not zero */

loc_0031D2B0: ;
    MEM32(esi + 8) = 2;

loc_0031D2B7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D2C0
 * Original: 0x0031D2C0 - 0x0031D2FC (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D2C0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031D2E3; /* je: equal / zero */

loc_0031D2C9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031D2EA; /* jne: not equal / not zero */

loc_0031D2CC: ;
    PUSH32(esp, 0x0031D2D1u); RECOMP_ABI_CALL(0x0031D030u, sub_0031D030); /* call 0x0031D030 */

loc_0031D2D1: ;
    PUSH32(esp, 0x0031D2D6u); RECOMP_ABI_CALL(0x0031D080u, sub_0031D080); /* call 0x0031D080 */

loc_0031D2D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D2DCu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0031D2DC: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031D2E3: ;
    eax = esi;
    PUSH32(esp, 0x0031D2EAu); RECOMP_ABI_CALL(0x0031D260u, sub_0031D260); /* call 0x0031D260 */

loc_0031D2EA: ;
    PUSH32(esp, 0x0031D2EFu); RECOMP_ABI_CALL(0x0031D080u, sub_0031D080); /* call 0x0031D080 */

loc_0031D2EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D2F5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0031D2F5: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D300
 * Original: 0x0031D300 - 0x0031D312 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031D300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D300: ;
    PUSH32(esp, 0x0031D305u); RECOMP_ABI_CALL(0x003052E0u, sub_003052E0); /* call 0x003052E0 */

loc_0031D305: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D30F; /* jne: not equal / not zero */

loc_0031D30A: ;
    g_seh_ebp = ebp; sub_0031D220(); return; /* tail jmp 0x0031D220 */

loc_0031D30F: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031D320
 * Original: 0x0031D320 - 0x0031D3A4 (132 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031D320: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D331u); RECOMP_ABI_CALL(0x0031D170u, sub_0031D170); /* call 0x0031D170 */

loc_0031D331: ;
    eax = MEM32(esi + 4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031D34C; /* je: equal / zero */

loc_0031D33C: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D344u); RECOMP_ABI_CALL(0x0031D170u, sub_0031D170); /* call 0x0031D170 */

loc_0031D344: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031D34C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(0x6E6A30) = esi;
    PUSH32(esp, 0x0031D35Au); RECOMP_ABI_CALL(0x0031D190u, sub_0031D190); /* call 0x0031D190 */

loc_0031D35A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D360u); RECOMP_ABI_CALL(0x0031EB20u, sub_0031EB20); /* call 0x0031EB20 */

loc_0031D360: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D368u); RECOMP_ABI_CALL(0x0031D190u, sub_0031D190); /* call 0x0031D190 */

loc_0031D368: ;
    eax = MEM32(esi + 8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031D37B; /* jne: not equal / not zero */

loc_0031D372: ;
    MEM32(esi + 0x68) = 0;
    goto loc_0031D389;

loc_0031D37B: ;
    eax = esi;
    MEM32(esi + 0x68) = 1;
    PUSH32(esp, 0x0031D389u); RECOMP_ABI_CALL(0x0031D2C0u, sub_0031D2C0); /* call 0x0031D2C0 */

loc_0031D389: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D391u); RECOMP_ABI_CALL(0x0031D170u, sub_0031D170); /* call 0x0031D170 */

loc_0031D391: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D397u); RECOMP_ABI_CALL(0x0031D8C0u, sub_0031D8C0); /* call 0x0031D8C0 */

loc_0031D397: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, edi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D3B0
 * Original: 0x0031D3B0 - 0x0031D3DF (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D3B0(void)
{

loc_0031D3B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D3B6u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0031D3B6: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D3C2u); RECOMP_ABI_CALL(0x0031D1A0u, sub_0031D1A0); /* call 0x0031D1A0 */

loc_0031D3C2: ;
    PUSH32(esp, 0x0031D3C7u); RECOMP_ABI_CALL(0x0031CE50u, sub_0031CE50); /* call 0x0031CE50 */

loc_0031D3C7: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D3CFu); RECOMP_ABI_CALL(0x0031D1A0u, sub_0031D1A0); /* call 0x0031D1A0 */

loc_0031D3CF: ;
    PUSH32(esp, 0x0031D3D4u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0031D3D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D3DAu); RECOMP_ABI_CALL(0x0031D240u, sub_0031D240); /* call 0x0031D240 */

loc_0031D3DA: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D3E0
 * Original: 0x0031D3E0 - 0x0031D42F (79 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D3E0: ;
    _fa = (uint32_t)(MEM32(0x5BFBD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5BFBD4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D3EC; /* je: equal / zero */

loc_0031D3E9: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031D3EC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031D406; /* jne: not equal / not zero */

loc_0031D3F5: ;
    PUSH32(esp, 0x42F6E8);
    PUSH32(esp, 0x0031D3FFu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031D3FF: ;
    esp = esp + 4;

loc_0031D402: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031D406: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D402; /* jne: not equal / not zero */

loc_0031D40C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D412u); RECOMP_ABI_CALL(0x0031D180u, sub_0031D180); /* call 0x0031D180 */

loc_0031D412: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D402; /* je: equal / zero */

loc_0031D41A: ;
    PUSH32(esp, 0x0031D41Fu); RECOMP_ABI_CALL(0x0031D1C0u, sub_0031D1C0); /* call 0x0031D1C0 */

loc_0031D41F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D402; /* je: equal / zero */

loc_0031D424: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D42Au); RECOMP_ABI_CALL(0x0031D320u, sub_0031D320); /* call 0x0031D320 */

loc_0031D42A: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D430
 * Original: 0x0031D430 - 0x0031D49C (108 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031D430: ;
    _fa = (uint32_t)(MEM32(0x5BFBD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5BFBD4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031D43C; /* je: equal / zero */

loc_0031D439: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031D43C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D442u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_0031D442: ;
    esi = eax;
    eax = esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D44Du); RECOMP_ABI_CALL(0x0031CE40u, sub_0031CE40); /* call 0x0031CE40 */

loc_0031D44D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031D456; /* jne: not equal / not zero */

loc_0031D454: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031D456: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031D45Cu); RECOMP_ABI_CALL(0x0031D120u, sub_0031D120); /* call 0x0031D120 */

loc_0031D45C: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x68)) >> 32) & 1);
    esi = esi + 0x68;
    edi = 8;

loc_0031D464: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031D471; /* je: equal / zero */

loc_0031D468: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D46Eu); RECOMP_ABI_CALL(0x0031D3E0u, sub_0031D3E0); /* call 0x0031D3E0 */

loc_0031D46E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_0031D471: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x210)) >> 32) & 1);
    esi = esi + 0x210;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031D464; /* jne: not equal / not zero */

loc_0031D47A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031D481u); RECOMP_ABI_CALL(0x0031D160u, sub_0031D160); /* call 0x0031D160 */

loc_0031D481: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    PUSH32(esp, 0x0031D489u); RECOMP_ABI_CALL(0x0031D8F0u, sub_0031D8F0); /* call 0x0031D8F0 */

loc_0031D489: ;
    esi = eax;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    PUSH32(esp, 0x0031D497u); RECOMP_ABI_CALL(0x0031D140u, sub_0031D140); /* call 0x0031D140 */

loc_0031D497: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D4A0
 * Original: 0x0031D4A0 - 0x0031D4D6 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D4A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D4A0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x0031D4A8u); RECOMP_ABI_CALL(0x003052E0u, sub_003052E0); /* call 0x003052E0 */

loc_0031D4A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D4BD; /* jne: not equal / not zero */

loc_0031D4AD: ;
    PUSH32(esp, 0x0031D4B2u); RECOMP_ABI_CALL(0x0031D0C0u, sub_0031D0C0); /* call 0x0031D0C0 */

loc_0031D4B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D4D2; /* jne: not equal / not zero */

loc_0031D4B7: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0031D430(); return; /* tail jmp 0x0031D430 */

loc_0031D4BD: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D4C7u); RECOMP_ABI_CALL(0x0031D220u, sub_0031D220); /* call 0x0031D220 */

loc_0031D4C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D4CDu); RECOMP_ABI_CALL(0x0031D430u, sub_0031D430); /* call 0x0031D430 */

loc_0031D4CD: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031D4D2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D4E0
 * Original: 0x0031D4E0 - 0x0031D501 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D4E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D4E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x0031D4E8u); RECOMP_ABI_CALL(0x003052E0u, sub_003052E0); /* call 0x003052E0 */

loc_0031D4E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D4FD; /* jne: not equal / not zero */

loc_0031D4ED: ;
    PUSH32(esp, 0x0031D4F2u); RECOMP_ABI_CALL(0x0031D0C0u, sub_0031D0C0); /* call 0x0031D0C0 */

loc_0031D4F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D4FD; /* je: equal / zero */

loc_0031D4F7: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0031D430(); return; /* tail jmp 0x0031D430 */

loc_0031D4FD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D510
 * Original: 0x0031D510 - 0x0031D520 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D510: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2F68 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0031D520
 * Original: 0x0031D520 - 0x0031D52F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D520(void)
{

loc_0031D520: ;
    ecx = 0; /* xor self */
    MEM32(eax + 0x1FC) = ecx;
    MEM32(eax + 0x200) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D530
 * Original: 0x0031D530 - 0x0031D54F (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D530: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031D53A; /* jne: not equal / not zero */

loc_0031D537: ;
    MEM32(eax + 8) = edx;

loc_0031D53A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D54E; /* je: equal / zero */

loc_0031D53E: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D54E; /* je: equal / zero */

loc_0031D544: ;
    eax = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0031D54Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031D54B: ;
    esp = esp + 8;

loc_0031D54E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D550
 * Original: 0x0031D550 - 0x0031D556 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D550(void)
{

loc_0031D550: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D560
 * Original: 0x0031D560 - 0x0031D57F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D560: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x6E6A28) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0031D571; /* jne: not equal / not zero */

loc_0031D56D: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0031D571: ;
    edx = MEM32(eax + 0x48);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D580
 * Original: 0x0031D580 - 0x0031D585 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D580(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D580: ;
    g_seh_ebp = ebp; sub_0030EF30(); return; /* tail jmp 0x0030EF30 */

}

/**
 * sub_0031D590
 * Original: 0x0031D590 - 0x0031D595 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D590: ;
    g_seh_ebp = ebp; sub_0030EF60(); return; /* tail jmp 0x0030EF60 */

}

/**
 * sub_0031D5A0
 * Original: 0x0031D5A0 - 0x0031D5AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D5A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D5A0: ;
    PUSH32(esp, 0x0031D5A5u); RECOMP_ABI_CALL(0x0031E1D0u, sub_0031E1D0); /* call 0x0031E1D0 */

loc_0031D5A5: ;
    g_seh_ebp = ebp; sub_00324960(); return; /* tail jmp 0x00324960 */

}

/**
 * sub_0031D5B0
 * Original: 0x0031D5B0 - 0x0031D5B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D5B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D5B0: ;
    g_seh_ebp = ebp; sub_00324970(); return; /* tail jmp 0x00324970 */

}

/**
 * sub_0031D5C0
 * Original: 0x0031D5C0 - 0x0031D624 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D5C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0x6E6A04;
    /* nop */

loc_0031D5D0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D5E1; /* je: equal / zero */

loc_0031D5D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D5DCu); RECOMP_ABI_CALL(0x0031E950u, sub_0031E950); /* call 0x0031E950 */

loc_0031D5DC: ;
    esp = esp + 4;
    edi = eax;

loc_0031D5E1: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E6A24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6E6A24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031D5D0; /* jl: less (signed <) */

loc_0031D5EC: ;
    PUSH32(esp, 0x6E69B0);
    PUSH32(esp, 0x0031D5F6u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0031D5F6: ;
    PUSH32(esp, 0x6E69BC);
    PUSH32(esp, 0x0031D600u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0031D600: ;
    PUSH32(esp, 0x6E69C0);
    PUSH32(esp, 0x0031D60Au); RECOMP_ABI_CALL(0x00323960u, sub_00323960); /* call 0x00323960 */

loc_0031D60A: ;
    esp = esp + 0xC;
    esi = eax;
    PUSH32(esp, 0x0031D614u); RECOMP_ABI_CALL(0x0031D5B0u, sub_0031D5B0); /* call 0x0031D5B0 */

loc_0031D614: ;
    PUSH32(esp, 0x0031D619u); RECOMP_ABI_CALL(0x0031D590u, sub_0031D590); /* call 0x0031D590 */

loc_0031D619: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0031D621; /* jne: not equal / not zero */

loc_0031D61F: ;
    eax = edi;

loc_0031D621: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D630
 * Original: 0x0031D630 - 0x0031D638 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D630(void)
{

loc_0031D630: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D636u); RECOMP_ABI_CALL(0x003282E0u, sub_003282E0); /* call 0x003282E0 */

loc_0031D636: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D640
 * Original: 0x0031D640 - 0x0031D683 (67 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D640: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031D64D; /* jne: not equal / not zero */

loc_0031D649: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031D64D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edx = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0031D667; /* jne: not equal / not zero */

loc_0031D658: ;
    eax = 0x6E699C;
    PUSH32(esp, 0x0031D662u); RECOMP_ABI_CALL(0x0031D530u, sub_0031D530); /* call 0x0031D530 */

loc_0031D662: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031D667: ;
    eax = esi + 0x98C;
    PUSH32(esp, 0x0031D672u); RECOMP_ABI_CALL(0x0031D530u, sub_0031D530); /* call 0x0031D530 */

loc_0031D672: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031D67E; /* jle: less or equal (signed <=) */

loc_0031D679: ;
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(esi + 0x48) = eax;

loc_0031D67E: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D690
 * Original: 0x0031D690 - 0x0031D6E4 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D690: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031D6AF; /* jne: not equal / not zero */

loc_0031D699: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = 0x6E699C;
    PUSH32(esp, 0x0031D6ABu); RECOMP_ABI_CALL(0x0031D550u, sub_0031D550); /* call 0x0031D550 */

loc_0031D6AB: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031D6AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D6B5u); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031D6B5: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D6CD; /* je: equal / zero */

loc_0031D6BC: ;
    PUSH32(esp, 0xFF000101u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031D6C8u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031D6C8: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031D6CD: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = esi + 0x98C;
    PUSH32(esp, 0x0031D6E0u); RECOMP_ABI_CALL(0x0031D550u, sub_0031D550); /* call 0x0031D550 */

loc_0031D6E0: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D6F0
 * Original: 0x0031D6F0 - 0x0031D79B (171 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D6F0(void)
{

loc_0031D6F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x89);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 0x6E6800);
    PUSH32(esp, 0x0031D703u); RECOMP_ABI_CALL(0x00323C40u, sub_00323C40); /* call 0x00323C40 */

loc_0031D703: ;
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x42F760);
    PUSH32(esp, 0x6E6800);
    PUSH32(esp, 0x0031D717u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031D717: ;
    eax = MEM32(edi);
    MEM32(0x6E6990) = eax;
    ecx = MEM32(edi + 4);
    eax = 0x6E699C;
    MEM32(0x6E6994) = ecx;
    MEM32(0x6E6998) = esi;
    PUSH32(esp, 0x0031D737u); RECOMP_ABI_CALL(0x0031D630u, sub_0031D630); /* call 0x0031D630 */

loc_0031D737: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6E69B0);
    PUSH32(esp, 0x0031D745u); RECOMP_ABI_CALL(0x0031F740u, sub_0031F740); /* call 0x0031F740 */

loc_0031D745: ;
    PUSH32(esp, 0x6E69BC);
    PUSH32(esp, 0x0031D74Fu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0031D74F: ;
    eax = 0x6E6800;
    PUSH32(esp, 0x0031D759u); RECOMP_ABI_CALL(0x0031D520u, sub_0031D520); /* call 0x0031D520 */

loc_0031D759: ;
    MEM32(0x6E6A04) = esi;
    MEM32(0x6E6A08) = esi;
    MEM32(0x6E6A0C) = esi;
    MEM32(0x6E6A10) = esi;
    MEM32(0x6E6A14) = esi;
    MEM32(0x6E6A18) = esi;
    MEM32(0x6E6A1C) = esi;
    MEM32(0x6E6A20) = esi;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6E69C0);
    PUSH32(esp, 0x0031D796u); RECOMP_ABI_CALL(0x00323940u, sub_00323940); /* call 0x00323940 */

loc_0031D796: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D7A0
 * Original: 0x0031D7A0 - 0x0031D7D0 (48 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031D7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D7A0: ;
    PUSH32(esp, edi);
    MEM32(0x6E6A24) = 0x2F68;
    MEM32(0x5D23E0) = 0x42F710;
    PUSH32(esp, 0x0031D7BAu); RECOMP_ABI_CALL(0x0031D580u, sub_0031D580); /* call 0x0031D580 */

loc_0031D7BA: ;
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x0031D7C3u); RECOMP_ABI_CALL(0x0031D6F0u, sub_0031D6F0); /* call 0x0031D6F0 */

loc_0031D7C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0031D7CF; /* jne: not equal / not zero */

loc_0031D7C8: ;
    PUSH32(esp, 0x0031D7CDu); RECOMP_ABI_CALL(0x0031D5A0u, sub_0031D5A0); /* call 0x0031D5A0 */

loc_0031D7CD: ;
    eax = 0; /* xor self */

loc_0031D7CF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D7D0
 * Original: 0x0031D7D0 - 0x0031D7E6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D7D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031D7D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D7DAu); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0031D7DA: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
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
 * sub_0031D7F0
 * Original: 0x0031D7F0 - 0x0031D802 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D7F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D7F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D801; /* je: equal / zero */

loc_0031D7F8: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030D620(); return; /* tail jmp 0x0030D620 */

loc_0031D801: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D810
 * Original: 0x0031D810 - 0x0031D820 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D810(void)
{

loc_0031D810: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D81Cu); RECOMP_ABI_CALL(0x0030CFE0u, sub_0030CFE0); /* call 0x0030CFE0 */

loc_0031D81C: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D820
 * Original: 0x0031D820 - 0x0031D825 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D820: ;
    g_seh_ebp = ebp; sub_0030D730(); return; /* tail jmp 0x0030D730 */

}

/**
 * sub_0031D830
 * Original: 0x0031D830 - 0x0031D863 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D830(void)
{

loc_0031D830: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D83Cu); RECOMP_ABI_CALL(0x0030D6D0u, sub_0030D6D0); /* call 0x0030D6D0 */

loc_0031D83C: ;
    edi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D856u); RECOMP_ABI_CALL(0x0030D020u, sub_0030D020); /* call 0x0030D020 */

loc_0031D856: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D85Du); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_0031D85D: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D870
 * Original: 0x0031D870 - 0x0031D875 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D870: ;
    g_seh_ebp = ebp; sub_0030D100(); return; /* tail jmp 0x0030D100 */

}

/**
 * sub_0031D880
 * Original: 0x0031D880 - 0x0031D896 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D880(void)
{

loc_0031D880: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D88Bu); RECOMP_ABI_CALL(0x0030D160u, sub_0030D160); /* call 0x0030D160 */

loc_0031D88B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D891u); RECOMP_ABI_CALL(0x0030D6D0u, sub_0030D6D0); /* call 0x0030D6D0 */

loc_0031D891: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D8A0
 * Original: 0x0031D8A0 - 0x0031D8A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D8A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D8A0: ;
    g_seh_ebp = ebp; sub_0033EB20(); return; /* tail jmp 0x0033EB20 */

}

/**
 * sub_0031D8B0
 * Original: 0x0031D8B0 - 0x0031D8B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D8B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D8B0: ;
    g_seh_ebp = ebp; sub_00320740(); return; /* tail jmp 0x00320740 */

}

/**
 * sub_0031D8C0
 * Original: 0x0031D8C0 - 0x0031D8EC (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D8C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D8E1; /* je: equal / zero */

loc_0031D8CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D8E1; /* je: equal / zero */

loc_0031D8D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D8E1; /* je: equal / zero */

loc_0031D8D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031D8E1; /* je: equal / zero */

loc_0031D8DB: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0031D8E1: ;
    edx = MEM32(ecx + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0031D8F0
 * Original: 0x0031D8F0 - 0x0031D91F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D8F0: ;
    PUSH32(esp, esi);
    esi = 0x6E6A04;

loc_0031D8F6: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D909; /* je: equal / zero */

loc_0031D8FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D902u); RECOMP_ABI_CALL(0x0031D8C0u, sub_0031D8C0); /* call 0x0031D8C0 */

loc_0031D902: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D91B; /* je: equal / zero */

loc_0031D909: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E6A24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6E6A24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031D8F6; /* jl: less (signed <) */

loc_0031D914: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031D91B: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D920
 * Original: 0x0031D920 - 0x0031D92C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D920(void)
{

loc_0031D920: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031D928u); RECOMP_ABI_CALL(0x00323830u, sub_00323830); /* call 0x00323830 */

loc_0031D928: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D930
 * Original: 0x0031D930 - 0x0031D94B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D930: ;
    eax = MEM32(ecx + 0x48);
    ecx = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031D94A; /* jl: less (signed <) */

loc_0031D93B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031D945; /* jle: less or equal (signed <=) */

loc_0031D940: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D94A; /* jne: not equal / not zero */

loc_0031D945: ;
    eax = 2;

loc_0031D94A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D950
 * Original: 0x0031D950 - 0x0031D9C1 (113 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D95Au); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031D95A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031D968; /* jne: not equal / not zero */

loc_0031D961: ;
    ebx = 1;
    goto loc_0031D97F;

loc_0031D968: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D970u); RECOMP_ABI_CALL(0x003238C0u, sub_003238C0); /* call 0x003238C0 */

loc_0031D970: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x0031D97Au); RECOMP_ABI_CALL(0x00323900u, sub_00323900); /* call 0x00323900 */

loc_0031D97A: ;
    esp = esp + 0x10;
    ebx = ebx | eax;

loc_0031D97F: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D987u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031D987: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031D995; /* jne: not equal / not zero */

loc_0031D98E: ;
    edi = 1;
    goto loc_0031D9AC;

loc_0031D995: ;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D99Du); RECOMP_ABI_CALL(0x003238C0u, sub_003238C0); /* call 0x003238C0 */

loc_0031D99D: ;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0031D9A7u); RECOMP_ABI_CALL(0x00323900u, sub_00323900); /* call 0x00323900 */

loc_0031D9A7: ;
    esp = esp + 0x10;
    edi = edi | eax;

loc_0031D9AC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D9BC; /* je: equal / zero */

loc_0031D9B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031D9BC; /* je: equal / zero */

loc_0031D9B4: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031D9BC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D9D0
 * Original: 0x0031D9D0 - 0x0031DA42 (114 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031D9D0: ;
    _fa = (uint32_t)(MEM32(esi + 0x9B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x9B4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031D9FD; /* jne: not equal / not zero */

loc_0031D9D9: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D9E1u); RECOMP_ABI_CALL(0x00322F70u, sub_00322F70); /* call 0x00322F70 */

loc_0031D9E1: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031D9FD; /* jne: not equal / not zero */

loc_0031D9E8: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031D9F0u); RECOMP_ABI_CALL(0x00322F50u, sub_00322F50); /* call 0x00322F50 */

loc_0031D9F0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031D9FD; /* jne: not equal / not zero */

loc_0031D9F7: ;
    MEM32(esi + 0x9B4) = eax;

loc_0031D9FD: ;
    _fa = (uint32_t)(MEM32(esi + 0x9B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x9B8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031DA2A; /* jne: not equal / not zero */

loc_0031DA06: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031DA0Eu); RECOMP_ABI_CALL(0x00322F70u, sub_00322F70); /* call 0x00322F70 */

loc_0031DA0E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DA2A; /* jne: not equal / not zero */

loc_0031DA15: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031DA1Du); RECOMP_ABI_CALL(0x00322F50u, sub_00322F50); /* call 0x00322F50 */

loc_0031DA1D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DA2A; /* jne: not equal / not zero */

loc_0031DA24: ;
    MEM32(esi + 0x9B8) = eax;

loc_0031DA2A: ;
    eax = MEM32(esi + 0x9B8);
    ecx = MEM32(esi + 0x9B4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031DA3Eu); RECOMP_ABI_CALL(0x00329A50u, sub_00329A50); /* call 0x00329A50 */

loc_0031DA3E: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DA50
 * Original: 0x0031DA50 - 0x0031DA91 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DA50: ;
    eax = MEM32(esi + 0x9B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DA70; /* jne: not equal / not zero */

loc_0031DA5A: ;
    _fa = (uint32_t)(MEM32(esi + 0x9DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x9DC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031DA70; /* jne: not equal / not zero */

loc_0031DA63: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031DA6Du); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_0031DA6D: ;
    esp = esp + 0xC;

loc_0031DA70: ;
    eax = MEM32(esi + 0x9B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DA90; /* jne: not equal / not zero */

loc_0031DA7A: ;
    _fa = (uint32_t)(MEM32(esi + 0x9DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x9DC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031DA90; /* jne: not equal / not zero */

loc_0031DA83: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031DA8Du); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_0031DA8D: ;
    esp = esp + 0xC;

loc_0031DA90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DAA0
 * Original: 0x0031DAA0 - 0x0031DB17 (119 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DAA0: ;
    ecx = MEM32(edi + 0x9B8);
    PUSH32(esp, esi);
    esi = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031DAB4; /* jne: not equal / not zero */

loc_0031DAB2: ;
    eax = esi;

loc_0031DAB4: ;
    _fa = (uint32_t)(MEM32(edi + 0x9B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x9B4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031DABF; /* jne: not equal / not zero */

loc_0031DABC: ;
    eax = eax | 2;

loc_0031DABF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031DB09; /* je: equal / zero */

loc_0031DAC2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031DB04; /* je: equal / zero */

loc_0031DAC5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031DAF1; /* jne: not equal / not zero */

loc_0031DAC8: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DAD0u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031DAD0: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DB09; /* jne: not equal / not zero */

loc_0031DAD9: ;
    PUSH32(esp, 0x0031DADEu); RECOMP_ABI_CALL(0x00323DA0u, sub_00323DA0); /* call 0x00323DA0 */

loc_0031DADE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DAF1; /* jne: not equal / not zero */

loc_0031DAE2: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DAEAu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031DAEA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DB09; /* jne: not equal / not zero */

loc_0031DAF1: ;
    esi = 3;
    PUSH32(esp, esi);
    PUSH32(esp, 0x19);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DAFFu); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_0031DAFF: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031DB04: ;
    esi = 2;

loc_0031DB09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x19);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DB12u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_0031DB12: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DB20
 * Original: 0x0031DB20 - 0x0031DB24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DB20(void)
{

loc_0031DB20: ;
    eax = MEM32(eax + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DB30
 * Original: 0x0031DB30 - 0x0031DB92 (98 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DB30: ;
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DB38u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031DB38: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031DB4E; /* je: equal / zero */

loc_0031DB3F: ;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DB47u); RECOMP_ABI_CALL(0x00323900u, sub_00323900); /* call 0x00323900 */

loc_0031DB47: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DB6C; /* jne: not equal / not zero */

loc_0031DB4E: ;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DB56u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031DB56: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031DB72; /* je: equal / zero */

loc_0031DB5D: ;
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DB65u); RECOMP_ABI_CALL(0x00323900u, sub_00323900); /* call 0x00323900 */

loc_0031DB65: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031DB72; /* je: equal / zero */

loc_0031DB6C: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0031DB72: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_0031DB75: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DB7Cu); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_0031DB7C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DB8B; /* jne: not equal / not zero */

loc_0031DB83: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031DB75; /* jl: less (signed <) */

loc_0031DB89: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031DB8B: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DBA0
 * Original: 0x0031DBA0 - 0x0031DBFC (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DBA0: ;
    eax = MEM32(edi + 0x1C70);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + edi + 0x1288;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0031DBBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031DBBD: ;
    esi = MEM32(esi + 0xC);
    ebx = eax;
    ecx = esi + esi * 4;
    ecx = ecx << 4;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031DBF4; /* jge: greater or equal (signed >=) */

loc_0031DBE0: ;
    PUSH32(esp, 0x46);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031DBE8u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031DBE8: ;
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031DBF4; /* jge: greater or equal (signed >=) */

loc_0031DBEF: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031DBF4: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DC00
 * Original: 0x0031DC00 - 0x0031DC48 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DC00: ;
    ecx = MEM32(eax + 0x1CB4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    PUSH32(esp, esi);
    esi = ecx + eax + 0x1288;
    eax = MEM32(esi + 4);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0031DC1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031DC1D: ;
    esi = MEM32(esi + 0xC);
    edi = eax;
    ecx = esi + esi * 4;
    ecx = ecx << 4;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    esp = esp + 8;
    eax = eax + edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DC50
 * Original: 0x0031DC50 - 0x0031DCA4 (84 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031DC50: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x9F0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFCu (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x9F4);
    if (CMP_NE(_fa, _fb)) goto loc_0031DC6E; /* jne: not equal / not zero */

loc_0031DC66: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031DC6E: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031DC7Eu); RECOMP_ABI_CALL(0x003205A0u, sub_003205A0); /* call 0x003205A0 */

loc_0031DC7E: ;
    eax = MEM32(esp + 0x14);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0031DC66; /* jl: less (signed <) */

loc_0031DC89: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031DC96u); RECOMP_ABI_CALL(0x00327730u, sub_00327730); /* call 0x00327730 */

loc_0031DC96: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DCB0
 * Original: 0x0031DCB0 - 0x0031DD16 (102 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DCB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031DCB0: ;
    eax = MEM32(edi + 0x9B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DCCA; /* jne: not equal / not zero */

loc_0031DCBA: ;
    eax = MEM32(edi + 0x9B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DCCA; /* jne: not equal / not zero */

loc_0031DCC4: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0031DCCA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x0031DCD7u); RECOMP_ABI_CALL(0x00323900u, sub_00323900); /* call 0x00323900 */

loc_0031DCD7: ;
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x0031DCE1u); RECOMP_ABI_CALL(0x00323900u, sub_00323900); /* call 0x00323900 */

loc_0031DCE1: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x0031DCEBu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031DCEB: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031DD10; /* ja: above (unsigned >) */

loc_0031DCF3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x31DD18); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0031DCFAu) goto loc_0031DCFA;
    if (_jt == 0x0031DD02u) goto loc_0031DD02;
    if (_jt == 0x0031DD0Cu) goto loc_0031DD0C;
    if (_jt == 0x0031DD0Eu) goto loc_0031DD0E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0031DCFA: ;
    ebx = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031DD02: ;
    esi = esi | ebp;
    ebx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031DD0C: ;
    esi = esi & ebp;

loc_0031DD0E: ;
    ebx = esi;

loc_0031DD10: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DD16
 * Original: 0x0031DD16 - 0x0031DD30 (26 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DD16(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0031DD16: ;
    edi = edi;
    SET_LO8(eax, LO8(eax) | 0xDD);
    MEM32(eax) = MEM32(eax) ^ eax;
    PUSH32(esp, 0 /* seg:cs */);
    /* FPU: fnsave dword ptr [ecx] */
    SET_LO8(edx, LO8(edx) + HI8(ebx));
    fp_top() = fp_top() / MEMD(ecx); /* fdiv qword ptr [ecx] */
    MEM8(edx) = MEM8(edx) + LO8(eax);
    /* FPU: fnsave dword ptr [ecx] */
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0031DD30
 * Original: 0x0031DD30 - 0x0031DD5D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031DD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031DD30: ;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031DD5A; /* jne: not equal / not zero */

loc_0031DD36: ;
    edx = MEM32(eax + 0x50);
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031DD5A; /* je: equal / zero */

loc_0031DD42: ;
    _fa = (uint32_t)(MEM32(eax + 0x968)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x968), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031DD5A; /* je: equal / zero */

loc_0031DD4A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031DD50u); RECOMP_ABI_CALL(0x0031FFC0u, sub_0031FFC0); /* call 0x0031FFC0 */

loc_0031DD50: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

loc_0031DD5A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031DD60
 * Original: 0x0031DD60 - 0x0031DDCD (109 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031DD60: ;
    eax = MEM32(esi + 0x48);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031DDC7; /* jne: not equal / not zero */

loc_0031DD6B: ;
    ecx = MEM32(esi + 0x50);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031DDC7; /* je: equal / zero */

loc_0031DD77: ;
    _fa = (uint32_t)(MEM32(esi + 0x968)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x968), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031DDC7; /* je: equal / zero */

loc_0031DD7F: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031DD8Fu); RECOMP_ABI_CALL(0x003207C0u, sub_003207C0); /* call 0x003207C0 */

loc_0031DD8F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DDC7; /* jne: not equal / not zero */

loc_0031DD96: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0031DDC7; /* jl: less (signed <) */

loc_0031DD9D: ;
    PUSH32(esp, 0x36);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031DDA5u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031DDA5: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031DDBAu); RECOMP_ABI_CALL(0x0031FA70u, sub_0031FA70); /* call 0x0031FA70 */

loc_0031DDBA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031DDC7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DDD0
 * Original: 0x0031DDD0 - 0x0031DDE5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031DDD0: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031DDDB; /* jne: not equal / not zero */

loc_0031DDD7: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0031DDDB: ;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), 0x2F88 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esp += 4; return; /* ret */

}

/**
 * sub_0031DDF0
 * Original: 0x0031DDF0 - 0x0031DE07 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DDF0: ;
    eax = 0; /* xor self */

loc_0031DDF2: ;
    ecx = MEM32(eax * 4 + 0x6E6A04);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031DE06; /* je: equal / zero */

loc_0031DDFD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031DDF2; /* jl: less (signed <) */

loc_0031DE03: ;
    eax = eax | 0xFFFFFFFFu;

loc_0031DE06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DE10
 * Original: 0x0031DE10 - 0x0031DE4B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DE10(void)
{

loc_0031DE10: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031DE1Cu); RECOMP_ABI_CALL(0x00323C40u, sub_00323C40); /* call 0x00323C40 */

loc_0031DE1C: ;
    eax = eax | 0xFFFFFFFFu;
    esp = esp + 0xC;
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x1C) = 1;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DE50
 * Original: 0x0031DE50 - 0x0031DE81 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DE50(void)
{

loc_0031DE50: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031DE5Cu); RECOMP_ABI_CALL(0x00323C40u, sub_00323C40); /* call 0x00323C40 */

loc_0031DE5C: ;
    esp = esp + 0xC;
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DE90
 * Original: 0x0031DE90 - 0x0031DED2 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DE90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30);
    ebx = eax;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031DE9Fu); RECOMP_ABI_CALL(0x00323C40u, sub_00323C40); /* call 0x00323C40 */

loc_0031DE9F: ;
    esp = esp + 0xC;
    esi = ebx;
    edi = 5;
    /* nop */

loc_0031DEB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031DEB6u); RECOMP_ABI_CALL(0x00328240u, sub_00328240); /* call 0x00328240 */

loc_0031DEB6: ;
    esp = esp + 4;
    esi = esi + 0x20;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031DEB0; /* jne: not equal / not zero */

loc_0031DEBF: ;
    ebx = ebx + 0xA0;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031DECBu); RECOMP_ABI_CALL(0x00328240u, sub_00328240); /* call 0x00328240 */

loc_0031DECB: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DEE0
 * Original: 0x0031DEE0 - 0x0031DF18 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DEE0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = MEM32(edi + 0x94C);
    esi = edi + 0x94C;
    edx = edx + eax;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    MEM32(esi) = edx;
    PUSH32(esp, 0x0031DF02u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031DF02: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031DF15; /* je: equal / zero */

loc_0031DF09: ;
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0031DF12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031DF12: ;
    esp = esp + 0xC;

loc_0031DF15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DF20
 * Original: 0x0031DF20 - 0x0031DF59 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DF20: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = MEM32(edi + 0x950);
    esi = edi + 0x94C;
    edx = edx + eax;
    PUSH32(esp, 0x25);
    PUSH32(esp, edi);
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x0031DF43u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031DF43: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031DF56; /* je: equal / zero */

loc_0031DF4A: ;
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0031DF53u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031DF53: ;
    esp = esp + 0xC;

loc_0031DF56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DF60
 * Original: 0x0031DF60 - 0x0031DF6C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DF60(void)
{

loc_0031DF60: ;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031DF68u); RECOMP_ABI_CALL(0x00323830u, sub_00323830); /* call 0x00323830 */

loc_0031DF68: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DF70
 * Original: 0x0031DF70 - 0x0031DF84 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DF70(void)
{

loc_0031DF70: ;
    ecx = 0; /* xor self */
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    PUSH32(esp, 0x0031DF80u); RECOMP_ABI_CALL(0x00323830u, sub_00323830); /* call 0x00323830 */

loc_0031DF80: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DF90
 * Original: 0x0031DF90 - 0x0031DF9A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031DF90(void)
{

loc_0031DF90: ;
    MEM32(eax + 0x4C) = 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031DFA0
 * Original: 0x0031DFA0 - 0x0031DFB2 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DFA0(void)
{

loc_0031DFA0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031DFAEu); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_0031DFAE: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DFC0
 * Original: 0x0031DFC0 - 0x0031DFCA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DFC0(void)
{

loc_0031DFC0: ;
    eax = MEM32(esp + 4);
    MEM32(0x6E69FC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DFD0
 * Original: 0x0031DFD0 - 0x0031DFD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DFD0(void)
{

loc_0031DFD0: ;
    eax = MEM32(0x6E69FC);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DFE0
 * Original: 0x0031DFE0 - 0x0031E009 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031DFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031DFE0: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031DFFB; /* jne: not equal / not zero */

loc_0031DFE6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031DFF4u); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_0031DFF4: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E008; /* jne: not equal / not zero */

loc_0031DFFB: ;
    eax = 1;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    eax = 0; /* xor self */

loc_0031E008: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031E010
 * Original: 0x0031E010 - 0x0031E04E (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E010(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E010: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E01Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031E01B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E038; /* je: equal / zero */

loc_0031E022: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000134u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

loc_0031E038: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E049u); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_0031E049: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E050
 * Original: 0x0031E050 - 0x0031E08C (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E050: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E05Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031E05B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E073; /* je: equal / zero */

loc_0031E062: ;
    PUSH32(esp, 0xFF000135u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031E06Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031E06E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031E073: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E087u); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_0031E087: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E090
 * Original: 0x0031E090 - 0x0031E0D0 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E090: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E09Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031E09B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E0B3; /* je: equal / zero */

loc_0031E0A2: ;
    PUSH32(esp, 0xFF000135u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031E0AEu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031E0AE: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031E0B3: ;
    eax = MEM32(esi + 0x1BEC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E0C2u); RECOMP_ABI_CALL(0x00323100u, sub_00323100); /* call 0x00323100 */

loc_0031E0C2: ;
    esp = esp + 0xC;
    MEM32(esi + 0x44) = 1;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E0D0
 * Original: 0x0031E0D0 - 0x0031E13F (111 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E0D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E0D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0031E0E6u); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031E0E6: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E104; /* je: equal / zero */

loc_0031E0ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000136u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

loc_0031E104: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E112u); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_0031E112: ;
    ebx = eax;
    eax = MEM32(esi);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E127; /* je: equal / zero */

loc_0031E11D: ;
    MEM32(edi + 0x964) = 1;

loc_0031E127: ;
    eax = MEM32(0x6E67EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E139; /* je: equal / zero */

loc_0031E130: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0031E136u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031E136: ;
    esp = esp + 8;

loc_0031E139: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E140
 * Original: 0x0031E140 - 0x0031E188 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E140: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E14Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031E14B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E168; /* je: equal / zero */

loc_0031E152: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000137u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

loc_0031E168: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    MEM32(esi + 0x964) = 0;
    PUSH32(esp, 0x0031E183u); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_0031E183: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E190
 * Original: 0x0031E190 - 0x0031E1C8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E190(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E190: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E19Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031E19B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E1B8; /* je: equal / zero */

loc_0031E1A2: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000139u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

loc_0031E1B8: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E1C3u); RECOMP_ABI_CALL(0x003236E0u, sub_003236E0); /* call 0x003236E0 */

loc_0031E1C3: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E1D0
 * Original: 0x0031E1D0 - 0x0031E1D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E1D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E1D0: ;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_0031E1E0
 * Original: 0x0031E1E0 - 0x0031E1EF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E1E0(void)
{

loc_0031E1E0: ;
    eax = esi;
    PUSH32(esp, 0x0031E1E7u); RECOMP_ABI_CALL(0x0031D920u, sub_0031D920); /* call 0x0031D920 */

loc_0031E1E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E1EDu); RECOMP_ABI_CALL(0x00329DB0u, sub_00329DB0); /* call 0x00329DB0 */

loc_0031E1ED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E1F0
 * Original: 0x0031E1F0 - 0x0031E208 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E1F0(void)
{

loc_0031E1F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x0031E1F9u); RECOMP_ABI_CALL(0x0031D9D0u, sub_0031D9D0); /* call 0x0031D9D0 */

loc_0031E1F9: ;
    PUSH32(esp, 0x0031E1FEu); RECOMP_ABI_CALL(0x0031DA50u, sub_0031DA50); /* call 0x0031DA50 */

loc_0031E1FE: ;
    edi = esi;
    PUSH32(esp, 0x0031E205u); RECOMP_ABI_CALL(0x0031DAA0u, sub_0031DAA0); /* call 0x0031DAA0 */

loc_0031E205: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E210
 * Original: 0x0031E210 - 0x0031E253 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031E210: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x9D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E224; /* jne: not equal / not zero */

loc_0031E21D: ;
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031E224: ;
    eax = MEM32(edi + 0x9B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031E21D; /* je: equal / zero */

loc_0031E22E: ;
    eax = MEM32(edi + 0xF64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E21D; /* jne: not equal / not zero */

loc_0031E238: ;
    eax = MEM32(edi + 0xF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xA54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xA54) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0031E21D; /* jge: greater or equal (signed >=) */

loc_0031E246: ;
    PUSH32(esp, 0x0031E24Bu); RECOMP_ABI_CALL(0x0031DCB0u, sub_0031DCB0); /* call 0x0031DCB0 */

loc_0031E24B: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E260
 * Original: 0x0031E260 - 0x0031E381 (289 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031E260: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x43);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E26Eu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031E26E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031E312; /* je: equal / zero */

loc_0031E279: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E281u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031E281: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031E312; /* je: equal / zero */

loc_0031E28C: ;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E312; /* jne: not equal / not zero */

loc_0031E293: ;
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x48), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031E312; /* jne: not equal / not zero */

loc_0031E299: ;
    PUSH32(esp, 0x0031E29Eu); RECOMP_ABI_CALL(0x0031DB30u, sub_0031DB30); /* call 0x0031DB30 */

loc_0031E29E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E312; /* jne: not equal / not zero */

loc_0031E2A2: ;
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E2AAu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031E2AA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031E2BC; /* jne: not equal / not zero */

loc_0031E2B2: ;
    eax = MEM32(edi + 0x970);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031E312; /* je: equal / zero */

loc_0031E2BC: ;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E2C4u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031E2C4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031E2DB; /* jne: not equal / not zero */

loc_0031E2CC: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E2D4u); RECOMP_ABI_CALL(0x003235B0u, sub_003235B0); /* call 0x003235B0 */

loc_0031E2D4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0031E312; /* jg: greater (signed >) */

loc_0031E2DB: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E2E3u); RECOMP_ABI_CALL(0x00323920u, sub_00323920); /* call 0x00323920 */

loc_0031E2E3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031E2F9; /* je: equal / zero */

loc_0031E2EA: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E2F2u); RECOMP_ABI_CALL(0x003235B0u, sub_003235B0); /* call 0x003235B0 */

loc_0031E2F2: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0031E312; /* jg: greater (signed >) */

loc_0031E2F9: ;
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E301u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031E301: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031E319; /* jne: not equal / not zero */

loc_0031E309: ;
    PUSH32(esp, 0x0031E30Eu); RECOMP_ABI_CALL(0x0031DBA0u, sub_0031DBA0); /* call 0x0031DBA0 */

loc_0031E30E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031E319; /* je: equal / zero */

loc_0031E312: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031E319: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E32Bu); RECOMP_ABI_CALL(0x003205A0u, sub_003205A0); /* call 0x003205A0 */

loc_0031E32B: ;
    esi = MEM32(edi + 0xF38);
    ebx = MEM32(edi + 0xF3C);
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E33Fu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031E33F: ;
    PUSH32(esp, 0xF4240);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E34Bu); RECOMP_ABI_CALL(0x003208D0u, sub_003208D0); /* call 0x003208D0 */

loc_0031E34B: ;
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    eax = MEM32(esp + 0x2C);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031E378; /* jle: less or equal (signed <=) */

loc_0031E358: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031E378; /* jle: less or equal (signed <=) */

loc_0031E35C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E369u); RECOMP_ABI_CALL(0x0031FA70u, sub_0031FA70); /* call 0x0031FA70 */

loc_0031E369: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031E378: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031E390
 * Original: 0x0031E390 - 0x0031E432 (162 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031E390: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x0031E39Bu); RECOMP_ABI_CALL(0x0031DB30u, sub_0031DB30); /* call 0x0031DB30 */

loc_0031E39B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031E3A9; /* je: equal / zero */

loc_0031E39F: ;
    eax = 1;
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031E3A9: ;
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E3B1u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031E3B1: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031E3C2; /* jne: not equal / not zero */

loc_0031E3B9: ;
    PUSH32(esp, 0x0031E3BEu); RECOMP_ABI_CALL(0x0031DBA0u, sub_0031DBA0); /* call 0x0031DBA0 */

loc_0031E3BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E39F; /* jne: not equal / not zero */

loc_0031E3C2: ;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E3CAu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031E3CA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031E3DD; /* jne: not equal / not zero */

loc_0031E3D2: ;
    eax = edi;
    PUSH32(esp, 0x0031E3D9u); RECOMP_ABI_CALL(0x0031DC00u, sub_0031DC00); /* call 0x0031DC00 */

loc_0031E3D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E39F; /* jne: not equal / not zero */

loc_0031E3DD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E3EFu); RECOMP_ABI_CALL(0x003205A0u, sub_003205A0); /* call 0x003205A0 */

loc_0031E3EF: ;
    esi = MEM32(edi + 0xF38);
    ebx = MEM32(edi + 0xF3C);
    PUSH32(esp, 0x45);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031E403u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031E403: ;
    PUSH32(esp, 0xF4240);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E40Fu); RECOMP_ABI_CALL(0x003208D0u, sub_003208D0); /* call 0x003208D0 */

loc_0031E40F: ;
    edx = MEM32(esp + 0x2C);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E422u); RECOMP_ABI_CALL(0x0031FA70u, sub_0031FA70); /* call 0x0031FA70 */

loc_0031E422: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, ebx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031E440
 * Original: 0x0031E440 - 0x0031E455 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E440: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x0031E448u); RECOMP_ABI_CALL(0x0031DFE0u, sub_0031DFE0); /* call 0x0031DFE0 */

loc_0031E448: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E453; /* jne: not equal / not zero */

loc_0031E44C: ;
    MEM32(esi + 0x4C) = 6;

loc_0031E453: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E460
 * Original: 0x0031E460 - 0x0031E573 (275 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x40);
    ebx = MEM32(ebp + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax >> 2;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031E47Bu); RECOMP_ABI_CALL(0x00323C40u, sub_00323C40); /* call 0x00323C40 */

loc_0031E47B: ;
    ebx = ebx + 0x1F;
    ebx = ebx & 0xFFFFFFE0u;
    MEM32(ebx + 0x4C) = esi;
    MEM32(ebx + 0x48) = esi;
    ecx = MEM32(ebp + 4);
    ecx = ecx + 0x1F;
    ecx = ecx & 0xFFFFFFE0u;
    MEM32(ebp + 4) = ecx;
    ecx = 0x11;
    esi = ebp;
    edi = ebx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = 0; /* xor self */
    edx = ebx + 0x78;
    edi = 1;
    PUSH32(esp, edx);
    MEM32(ebx + 0x44) = edi;
    MEM32(ebx + 0x50) = eax;
    MEM32(ebx + 0x54) = eax;
    PUSH32(esp, 0x0031E4B7u); RECOMP_ABI_CALL(0x00324980u, sub_00324980); /* call 0x00324980 */

loc_0031E4B7: ;
    esi = ebx + 0x90C;
    PUSH32(esp, 0x0031E4C2u); RECOMP_ABI_CALL(0x0031DE10u, sub_0031DE10); /* call 0x0031DE10 */

loc_0031E4C2: ;
    esi = ebx + 0x94C;
    PUSH32(esp, 0x0031E4CDu); RECOMP_ABI_CALL(0x0031DE50u, sub_0031DE50); /* call 0x0031DE50 */

loc_0031E4CD: ;
    eax = ebx + 0x2EA8;
    PUSH32(esp, 0x0031E4D8u); RECOMP_ABI_CALL(0x0031DE90u, sub_0031DE90); /* call 0x0031DE90 */

loc_0031E4D8: ;
    eax = ebx + 0x98C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E4E4u); RECOMP_ABI_CALL(0x003282E0u, sub_003282E0); /* call 0x003282E0 */

loc_0031E4E4: ;
    PUSH32(esp, 0x190);
    ecx = ebx + 0x9A0;
    PUSH32(esp, 0x6E6800);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031E4FAu); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031E4FA: ;
    PUSH32(esp, 0x190);
    edx = ebx + 0xB30;
    PUSH32(esp, 0x6E6800);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031E510u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031E510: ;
    eax = ebx + 0xCC0;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031E51Du); RECOMP_ABI_CALL(0x00320180u, sub_00320180); /* call 0x00320180 */

loc_0031E51D: ;
    PUSH32(esp, ebp);
    ecx = ebx + 0x1278;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031E52Bu); RECOMP_ABI_CALL(0x003235E0u, sub_003235E0); /* call 0x003235E0 */

loc_0031E52B: ;
    esp = esp + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E55F; /* jne: not equal / not zero */

loc_0031E532: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = ebx + 0x1BD8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031E545u); RECOMP_ABI_CALL(0x00323BF0u, sub_00323BF0); /* call 0x00323BF0 */

loc_0031E545: ;
    ecx = ebx + 0x2E94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031E551u); RECOMP_ABI_CALL(0x00329A30u, sub_00329A30); /* call 0x00329A30 */

loc_0031E551: ;
    esp = esp + 0x14;
    eax = ebx;
    PUSH32(esp, 0x0031E55Bu); RECOMP_ABI_CALL(0x0031DF60u, sub_0031DF60); /* call 0x0031DF60 */

loc_0031E55B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E566; /* je: equal / zero */

loc_0031E55F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031E566: ;
    MEM32(ebx + 0x4C) = edi;
    MEM32(ebx + 0x48) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E580
 * Original: 0x0031E580 - 0x0031E5D5 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E58Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031E58B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E5A3; /* je: equal / zero */

loc_0031E592: ;
    PUSH32(esp, 0xFF000132u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031E59Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031E59E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031E5A3: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E5ABu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031E5AB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E5C5; /* jne: not equal / not zero */

loc_0031E5B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E5B9u); RECOMP_ABI_CALL(0x0031F5D0u, sub_0031F5D0); /* call 0x0031F5D0 */

loc_0031E5B9: ;
    esp = esp + 4;
    MEM32(esi + 0x44) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031E5C5: ;
    eax = esi;
    PUSH32(esp, 0x0031E5CCu); RECOMP_ABI_CALL(0x0031DF90u, sub_0031DF90); /* call 0x0031DF90 */

loc_0031E5CC: ;
    MEM32(esi + 0x44) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E5E0
 * Original: 0x0031E5E0 - 0x0031E6ED (269 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E5E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E5E0: ;
    esp = esp - 0x1F0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    ecx = 0x11;
    esi = ebx;
    edi = esp + 0x2C;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edi = MEM32(ebx + 0x9C0);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E617; /* je: equal / zero */

loc_0031E605: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031E610u); RECOMP_ABI_CALL(0x0031E010u, sub_0031E010); /* call 0x0031E010 */

loc_0031E610: ;
    ebp = MEM32(esp + 0x2C);
    esp = esp + 8;

loc_0031E617: ;
    ecx = ebx + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031E620u); RECOMP_ABI_CALL(0x003249A0u, sub_003249A0); /* call 0x003249A0 */

loc_0031E620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031E626u); RECOMP_ABI_CALL(0x00323140u, sub_00323140); /* call 0x00323140 */

loc_0031E626: ;
    esp = esp + 8;
    eax = ebx;
    PUSH32(esp, 0x0031E630u); RECOMP_ABI_CALL(0x0031DF70u, sub_0031DF70); /* call 0x0031DF70 */

loc_0031E630: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E6E2; /* jne: not equal / not zero */

loc_0031E638: ;
    PUSH32(esp, 0x190);
    ebx = ebx + 0xB30;
    edx = esp + 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031E64Eu); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031E64E: ;
    eax = esp + 0x38;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E65Au); RECOMP_ABI_CALL(0x0031E460u, sub_0031E460); /* call 0x0031E460 */

loc_0031E65A: ;
    esi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E67C; /* jne: not equal / not zero */

loc_0031E663: ;
    PUSH32(esp, 0xFF000202u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E66Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031E66E: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1F0;
    esp += 4; return; /* ret */

loc_0031E67C: ;
    PUSH32(esp, 0x190);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esi + 0x9A0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031E692u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031E692: ;
    PUSH32(esp, 0x190);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esi + 0xB30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031E6ABu); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031E6AB: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E6E0; /* je: equal / zero */

loc_0031E6B2: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E6BDu); RECOMP_ABI_CALL(0x0031E010u, sub_0031E010); /* call 0x0031E010 */

loc_0031E6BD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E6E2; /* jne: not equal / not zero */

loc_0031E6C4: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E6D0u); RECOMP_ABI_CALL(0x0031E050u, sub_0031E050); /* call 0x0031E050 */

loc_0031E6D0: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E6E2; /* jne: not equal / not zero */

loc_0031E6D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E6DDu); RECOMP_ABI_CALL(0x0031E090u, sub_0031E090); /* call 0x0031E090 */

loc_0031E6DD: ;
    esp = esp + 4;

loc_0031E6E0: ;
    eax = 0; /* xor self */

loc_0031E6E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1F0;
    esp += 4; return; /* ret */

}

/**
 * sub_0031E6F0
 * Original: 0x0031E6F0 - 0x0031E74D (93 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E6F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E6F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x48);
    PUSH32(esp, 0x0031E700u); RECOMP_ABI_CALL(0x0031D950u, sub_0031D950); /* call 0x0031D950 */

loc_0031E700: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E747; /* je: equal / zero */

loc_0031E704: ;
    eax = esi;
    PUSH32(esp, 0x0031E70Bu); RECOMP_ABI_CALL(0x0031E1F0u, sub_0031E1F0); /* call 0x0031E1F0 */

loc_0031E70B: ;
    eax = ebx + -2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031E747; /* ja: above (unsigned >) */

loc_0031E713: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x31E750); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0031E71Au) goto loc_0031E71A;
    if (_jt == 0x0031E725u) goto loc_0031E725;
    if (_jt == 0x0031E742u) goto loc_0031E742;
    if (_jt == 0x0031E747u) goto loc_0031E747;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0031E71A: ;
    edi = 2;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031E725: ;
    eax = esi;
    PUSH32(esp, 0x0031E72Cu); RECOMP_ABI_CALL(0x0031E210u, sub_0031E210); /* call 0x0031E210 */

loc_0031E72C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E742; /* je: equal / zero */

loc_0031E730: ;
    eax = esi;
    PUSH32(esp, 0x0031E737u); RECOMP_ABI_CALL(0x0031DFA0u, sub_0031DFA0); /* call 0x0031DFA0 */

loc_0031E737: ;
    edi = 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031E742: ;
    edi = 3;

loc_0031E747: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E770
 * Original: 0x0031E770 - 0x0031E7B3 (67 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E770: ;
    eax = MEM32(esi + 0x4C);
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x48);
    if (CMP_A(_fa, _fb)) goto loc_0031E7AF; /* ja: above (unsigned >) */

loc_0031E77F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x31E7B4); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0031E786u) goto loc_0031E786;
    if (_jt == 0x0031E78Fu) goto loc_0031E78F;
    if (_jt == 0x0031E798u) goto loc_0031E798;
    if (_jt == 0x0031E7AFu) goto loc_0031E7AF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0031E786: ;
    edi = 2;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031E78F: ;
    edi = 3;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031E798: ;
    eax = esi;
    PUSH32(esp, 0x0031E79Fu); RECOMP_ABI_CALL(0x0031E210u, sub_0031E210); /* call 0x0031E210 */

loc_0031E79F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E7AF; /* je: equal / zero */

loc_0031E7A3: ;
    eax = esi;
    PUSH32(esp, 0x0031E7AAu); RECOMP_ABI_CALL(0x0031DFA0u, sub_0031DFA0); /* call 0x0031DFA0 */

loc_0031E7AA: ;
    edi = 4;

loc_0031E7AF: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E7D0
 * Original: 0x0031E7D0 - 0x0031E83D (109 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E7D0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E7DBu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0031E7DB: ;
    eax = MEM32(esi + 0x968);
    edi = 0; /* xor self */
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0031E810; /* jne: not equal / not zero */

loc_0031E7EC: ;
    PUSH32(esp, 0x0031E7F1u); RECOMP_ABI_CALL(0x0031E260u, sub_0031E260); /* call 0x0031E260 */

loc_0031E7F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E82B; /* je: equal / zero */

loc_0031E7F5: ;
    eax = MEM32(esi + 0x96C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x968) = 1;
    MEM32(esi + 0x96C) = eax;
    PUSH32(esp, 1);
    goto loc_0031E820;

loc_0031E810: ;
    PUSH32(esp, 0x0031E815u); RECOMP_ABI_CALL(0x0031E390u, sub_0031E390); /* call 0x0031E390 */

loc_0031E815: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E82B; /* je: equal / zero */

loc_0031E819: ;
    MEM32(esi + 0x968) = edi;
    PUSH32(esp, edi);

loc_0031E820: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E826u); RECOMP_ABI_CALL(0x0031F680u, sub_0031F680); /* call 0x0031F680 */

loc_0031E826: ;
    esp = esp + 8;
    edi = eax;

loc_0031E82B: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031E835u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0031E835: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E840
 * Original: 0x0031E840 - 0x0031E877 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E840: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x0031E848u); RECOMP_ABI_CALL(0x0031DC50u, sub_0031DC50); /* call 0x0031DC50 */

loc_0031E848: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E86F; /* jne: not equal / not zero */

loc_0031E84C: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x0031E854u); RECOMP_ABI_CALL(0x0031DCB0u, sub_0031DCB0); /* call 0x0031DCB0 */

loc_0031E854: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0031E86F; /* jne: not equal / not zero */

loc_0031E859: ;
    eax = esi;
    PUSH32(esp, 0x0031E860u); RECOMP_ABI_CALL(0x0031DD30u, sub_0031DD30); /* call 0x0031DD30 */

loc_0031E860: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E86F; /* jne: not equal / not zero */

loc_0031E864: ;
    PUSH32(esp, 0x0031E869u); RECOMP_ABI_CALL(0x0031DD60u, sub_0031DD60); /* call 0x0031DD60 */

loc_0031E869: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E86F; /* jne: not equal / not zero */

loc_0031E86D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031E86F: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0031E440(); return; /* tail jmp 0x0031E440 */

}

/**
 * sub_0031E880
 * Original: 0x0031E880 - 0x0031E8C9 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E880: ;
    edx = MEM32(esp + 4);
    eax = edx;
    PUSH32(esp, 0x0031E88Bu); RECOMP_ABI_CALL(0x0031DDD0u, sub_0031DDD0); /* call 0x0031DDD0 */

loc_0031E88B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E8A1; /* je: equal / zero */

loc_0031E88F: ;
    PUSH32(esp, 0xFF000203u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031E89Bu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031E89B: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031E8A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E8A7u); RECOMP_ABI_CALL(0x0031DDF0u, sub_0031DDF0); /* call 0x0031DDF0 */

loc_0031E8A7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E8B2; /* jne: not equal / not zero */

loc_0031E8AE: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031E8B2: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031E8BDu); RECOMP_ABI_CALL(0x0031E460u, sub_0031E460); /* call 0x0031E460 */

loc_0031E8BD: ;
    esp = esp + 8;
    MEM32(esi * 4 + 0x6E6A04) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E8D0
 * Original: 0x0031E8D0 - 0x0031E91A (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E8D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E8DF; /* jne: not equal / not zero */

loc_0031E8DB: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031E8DF: ;
    PUSH32(esp, 0x0031E8E4u); RECOMP_ABI_CALL(0x0031DFE0u, sub_0031DFE0); /* call 0x0031DFE0 */

loc_0031E8E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E918; /* jne: not equal / not zero */

loc_0031E8E8: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E8F2u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0031E8F2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0031E8F9u); RECOMP_ABI_CALL(0x0031DFC0u, sub_0031DFC0); /* call 0x0031DFC0 */

loc_0031E8F9: ;
    eax = esi;
    PUSH32(esp, 0x0031E900u); RECOMP_ABI_CALL(0x0031E5E0u, sub_0031E5E0); /* call 0x0031E5E0 */

loc_0031E900: ;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0x0031E909u); RECOMP_ABI_CALL(0x0031DFC0u, sub_0031DFC0); /* call 0x0031DFC0 */

loc_0031E909: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031E913u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0031E913: ;
    esp = esp + 0x10;
    eax = esi;

loc_0031E918: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E920
 * Original: 0x0031E920 - 0x0031E94A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E920: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x0031E928u); RECOMP_ABI_CALL(0x0031E840u, sub_0031E840); /* call 0x0031E840 */

loc_0031E928: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E931; /* je: equal / zero */

loc_0031E92C: ;
    eax = MEM32(esi + 0x48);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031E931: ;
    PUSH32(esp, 0x0031E936u); RECOMP_ABI_CALL(0x0031E7D0u, sub_0031E7D0); /* call 0x0031E7D0 */

loc_0031E936: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esi + 0x48);
    if (TEST_NZ(_fa, _fb)) goto loc_0031E948; /* jne: not equal / not zero */

loc_0031E93D: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E948; /* jne: not equal / not zero */

loc_0031E943: ;
    eax = 6;

loc_0031E948: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E950
 * Original: 0x0031E950 - 0x0031EA08 (184 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E950: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E95Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031E95B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E973; /* je: equal / zero */

loc_0031E962: ;
    PUSH32(esp, 0xFF000131u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031E96Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031E96E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031E973: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E979u); RECOMP_ABI_CALL(0x0031E8D0u, sub_0031E8D0); /* call 0x0031E8D0 */

loc_0031E979: ;
    eax = esi + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E982u); RECOMP_ABI_CALL(0x003249A0u, sub_003249A0); /* call 0x003249A0 */

loc_0031E982: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E988u); RECOMP_ABI_CALL(0x00323140u, sub_00323140); /* call 0x00323140 */

loc_0031E988: ;
    esp = esp + 0xC;
    eax = esi;
    PUSH32(esp, 0x0031E992u); RECOMP_ABI_CALL(0x0031DF70u, sub_0031DF70); /* call 0x0031DF70 */

loc_0031E992: ;
    edx = MEM32(0x6E6A04);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E9A4; /* jne: not equal / not zero */

loc_0031E99E: ;
    MEM32(0x6E6A04) = ecx;

loc_0031E9A4: ;
    _fa = (uint32_t)(MEM32(0x6E6A08)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E6A08), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E9B2; /* jne: not equal / not zero */

loc_0031E9AC: ;
    MEM32(0x6E6A08) = ecx;

loc_0031E9B2: ;
    _fa = (uint32_t)(MEM32(0x6E6A0C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E6A0C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E9C0; /* jne: not equal / not zero */

loc_0031E9BA: ;
    MEM32(0x6E6A0C) = ecx;

loc_0031E9C0: ;
    _fa = (uint32_t)(MEM32(0x6E6A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E6A10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E9CE; /* jne: not equal / not zero */

loc_0031E9C8: ;
    MEM32(0x6E6A10) = ecx;

loc_0031E9CE: ;
    _fa = (uint32_t)(MEM32(0x6E6A14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E6A14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E9DC; /* jne: not equal / not zero */

loc_0031E9D6: ;
    MEM32(0x6E6A14) = ecx;

loc_0031E9DC: ;
    _fa = (uint32_t)(MEM32(0x6E6A18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E6A18), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E9EA; /* jne: not equal / not zero */

loc_0031E9E4: ;
    MEM32(0x6E6A18) = ecx;

loc_0031E9EA: ;
    _fa = (uint32_t)(MEM32(0x6E6A1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E6A1C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E9F8; /* jne: not equal / not zero */

loc_0031E9F2: ;
    MEM32(0x6E6A1C) = ecx;

loc_0031E9F8: ;
    _fa = (uint32_t)(MEM32(0x6E6A20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E6A20), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EA06; /* jne: not equal / not zero */

loc_0031EA00: ;
    MEM32(0x6E6A20) = ecx;

loc_0031EA06: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EA10
 * Original: 0x0031EA10 - 0x0031EA45 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EA10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EA1Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031EA1B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031EA33; /* je: equal / zero */

loc_0031EA22: ;
    PUSH32(esp, 0xFF000133u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031EA2Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031EA2E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031EA33: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EA39u); RECOMP_ABI_CALL(0x0031E8D0u, sub_0031E8D0); /* call 0x0031E8D0 */

loc_0031EA39: ;
    esp = esp + 4;
    MEM32(esi + 0x44) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EA50
 * Original: 0x0031EA50 - 0x0031EAFD (173 bytes, 61 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EA50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031EA50: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031EA6F; /* je: equal / zero */

loc_0031EA5C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031EA6F; /* je: equal / zero */

loc_0031EA61: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031EA6F; /* je: equal / zero */

loc_0031EA66: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031EAFA; /* jne: not equal / not zero */

loc_0031EA6F: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031EAFA; /* je: equal / zero */

loc_0031EA7A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esi + 0x44) = 0;
    PUSH32(esp, 0x0031EA88u); RECOMP_ABI_CALL(0x00323D60u, sub_00323D60); /* call 0x00323D60 */

loc_0031EA88: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = eax;
    ebp = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031EA9B; /* je: equal / zero */

loc_0031EA91: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031EA9B; /* je: equal / zero */

loc_0031EA96: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031EAA0; /* jne: not equal / not zero */

loc_0031EA9B: ;
    PUSH32(esp, 0x0031EAA0u); RECOMP_ABI_CALL(0x0031E1E0u, sub_0031E1E0); /* call 0x0031E1E0 */

loc_0031EAA0: ;
    eax = MEM32(esi + 0x48);
    ecx = eax + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0031EADB; /* ja: above (unsigned >) */

loc_0031EAAB: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x31EB00); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0031EAB2u) goto loc_0031EAB2;
    if (_jt == 0x0031EABBu) goto loc_0031EABB;
    if (_jt == 0x0031EAC4u) goto loc_0031EAC4;
    if (_jt == 0x0031EACBu) goto loc_0031EACB;
    if (_jt == 0x0031EAD4u) goto loc_0031EAD4;
    if (_jt == 0x0031EADBu) goto loc_0031EADB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0031EAB2: ;
    ecx = esi;
    PUSH32(esp, 0x0031EAB9u); RECOMP_ABI_CALL(0x0031D930u, sub_0031D930); /* call 0x0031D930 */

loc_0031EAB9: ;
    goto loc_0031EADB;

loc_0031EABB: ;
    eax = esi;
    PUSH32(esp, 0x0031EAC2u); RECOMP_ABI_CALL(0x0031E6F0u, sub_0031E6F0); /* call 0x0031E6F0 */

loc_0031EAC2: ;
    goto loc_0031EADB;

loc_0031EAC4: ;
    PUSH32(esp, 0x0031EAC9u); RECOMP_ABI_CALL(0x0031E770u, sub_0031E770); /* call 0x0031E770 */

loc_0031EAC9: ;
    goto loc_0031EADB;

loc_0031EACB: ;
    eax = esi;
    PUSH32(esp, 0x0031EAD2u); RECOMP_ABI_CALL(0x0031E920u, sub_0031E920); /* call 0x0031E920 */

loc_0031EAD2: ;
    goto loc_0031EADB;

loc_0031EAD4: ;
    eax = esi;
    PUSH32(esp, 0x0031EADBu); RECOMP_ABI_CALL(0x0031DB20u, sub_0031DB20); /* call 0x0031DB20 */

loc_0031EADB: ;
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x0031EAE3u); RECOMP_ABI_CALL(0x00323D60u, sub_00323D60); /* call 0x00323D60 */

loc_0031EAE3: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x2F48)) >> 32) & 1);
    esi = esi + 0x2F48;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EAF5u); RECOMP_ABI_CALL(0x00328270u, sub_00328270); /* call 0x00328270 */

loc_0031EAF5: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0031EAFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EB20
 * Original: 0x0031EB20 - 0x0031EB55 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EB20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EB2Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031EB2B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031EB43; /* je: equal / zero */

loc_0031EB32: ;
    PUSH32(esp, 0xFF000138u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031EB3Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031EB3E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031EB43: ;
    eax = esi;
    MEM32(esi + 0x44) = 1;
    PUSH32(esp, 0x0031EB51u); RECOMP_ABI_CALL(0x0031EA50u, sub_0031EA50); /* call 0x0031EA50 */

loc_0031EB51: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EB60
 * Original: 0x0031EB60 - 0x0031EB86 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EB60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EB6Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031EB6B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031EB81; /* je: equal / zero */

loc_0031EB72: ;
    PUSH32(esp, 0xFF000111u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031EB7Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031EB7E: ;
    esp = esp + 8;

loc_0031EB81: ;
    eax = MEM32(esi + 0x48);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EB90
 * Original: 0x0031EB90 - 0x0031EBBE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EB90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EB9E; /* jne: not equal / not zero */

loc_0031EB95: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EBB8; /* jne: not equal / not zero */

loc_0031EB9A: ;
    PUSH32(esp, 3);
    goto loc_0031EBAA;

loc_0031EB9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EBB8; /* jne: not equal / not zero */

loc_0031EBA3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EBB8; /* jne: not equal / not zero */

loc_0031EBA8: ;
    PUSH32(esp, 2);

loc_0031EBAA: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031EBB0u); RECOMP_ABI_CALL(0x00323920u, sub_00323920); /* call 0x00323920 */

loc_0031EBB0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031EBB8; /* jne: not equal / not zero */

loc_0031EBB7: ;
    esp += 4; return; /* ret */

loc_0031EBB8: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0031EBC0
 * Original: 0x0031EBC0 - 0x0031EBD0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EBC0(void)
{

loc_0031EBC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x9A0);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EBD0
 * Original: 0x0031EBD0 - 0x0031EC0F (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EBD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031EBD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EBDBu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031EBDB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031EBF8; /* je: equal / zero */

loc_0031EBE2: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000119u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

loc_0031EBF8: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = esi + 0x94C;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EC10
 * Original: 0x0031EC10 - 0x0031EC36 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EC10: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    eax = MEM32(eax + ecx + 0x1BE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031EC2D; /* jne: not equal / not zero */

loc_0031EC26: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_0031EC2D: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0031EC40
 * Original: 0x0031EC40 - 0x0031EC9A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EC40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EC4Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031EC4B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031EC63; /* je: equal / zero */

loc_0031EC52: ;
    PUSH32(esp, 0xFF00011Cu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031EC5Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031EC5E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031EC63: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0031EC86; /* je: equal / zero */

loc_0031EC6E: ;
    eax = esi + 0x10C;
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x108);
    eax = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031EC86: ;
    edx = MEM32(esp + 0x10);
    MEM32(ecx) = 0;
    MEM32(edx) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031ECA0
 * Original: 0x0031ECA0 - 0x0031ECC9 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ECA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031ECA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = esi;
    eax = edi;
    edx = ebx;
    PUSH32(esp, 0x0031ECBAu); RECOMP_ABI_CALL(0x0031EB90u, sub_0031EB90); /* call 0x0031EB90 */

loc_0031ECBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031ECC5; /* je: equal / zero */

loc_0031ECBE: ;
    MEM32(ebx + edi * 4 + 0x9A0) = esi;

loc_0031ECC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031ECD0
 * Original: 0x0031ECD0 - 0x0031ECE7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ECD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031ECD0: ;
    ecx = esi;
    eax = edi;
    edx = ebx;
    PUSH32(esp, 0x0031ECDBu); RECOMP_ABI_CALL(0x0031EB90u, sub_0031EB90); /* call 0x0031EB90 */

loc_0031ECDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031ECE6; /* je: equal / zero */

loc_0031ECDF: ;
    MEM32(ebx + edi * 4 + 0xB30) = esi;

loc_0031ECE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031ECF0
 * Original: 0x0031ECF0 - 0x0031ED44 (84 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ECF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031ECF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031ED0E; /* jne: not equal / not zero */

loc_0031ECF9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax * 4 + 0x6E6800);
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031ED0E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031ED14u); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031ED14: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031ED2C; /* je: equal / zero */

loc_0031ED1B: ;
    PUSH32(esp, 0xFF000113u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031ED27u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031ED27: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031ED2C: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031ED37u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031ED37: ;
    ecx = MEM32(esp + 0x18);
    esp = esp + 8;
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031ED50
 * Original: 0x0031ED50 - 0x0031ED8A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ED50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031ED50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031ED5Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031ED5B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031ED73; /* je: equal / zero */

loc_0031ED62: ;
    PUSH32(esp, 0xFF000117u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031ED6Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031ED6E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031ED73: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031ED83u); RECOMP_ABI_CALL(0x0031EC10u, sub_0031EC10); /* call 0x0031EC10 */

loc_0031ED83: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031ED90
 * Original: 0x0031ED90 - 0x0031EDB4 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ED90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031ED90: ;
    PUSH32(esp, esi);
    esi = 0x6E6A04;

loc_0031ED96: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031EDA7; /* je: equal / zero */

loc_0031ED9C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031EDA4u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_0031EDA4: ;
    esp = esp + 0xC;

loc_0031EDA7: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E6A24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6E6A24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031ED96; /* jl: less (signed <) */

loc_0031EDB2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EDC0
 * Original: 0x0031EDC0 - 0x0031EE21 (97 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EDC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0031EDE3; /* jne: not equal / not zero */

loc_0031EDCA: ;
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0031EDD7u); RECOMP_ABI_CALL(0x0031ED90u, sub_0031ED90); /* call 0x0031ED90 */

loc_0031EDD7: ;
    MEM32(ebx * 4 + 0x6E6800) = edi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031EDE3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031EDE9u); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031EDE9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031EE02; /* je: equal / zero */

loc_0031EDF0: ;
    PUSH32(esp, 0xFF000112u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031EDFCu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031EDFC: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031EE02: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031EE13u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_0031EE13: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x0031EE1Bu); RECOMP_ABI_CALL(0x0031ECD0u, sub_0031ECD0); /* call 0x0031ECD0 */

loc_0031EE1B: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EE30
 * Original: 0x0031EE30 - 0x0031EE64 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EE30(void)
{

loc_0031EE30: ;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edx) = LO8(eax);
    MEM8(edx + 1) = LO8(eax);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM32(edx + 0x20) = eax;
    MEM32(edx + 0x24) = eax;
    MEM8(edx + 0x28) = LO8(eax);
    MEM32(edx + 0x2C) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EE70
 * Original: 0x0031EE70 - 0x0031EECA (90 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EE70: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EE79u); RECOMP_ABI_CALL(0x00328610u, sub_00328610); /* call 0x00328610 */

loc_0031EE79: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031EEC5; /* je: equal / zero */

loc_0031EE7F: ;
    edx = MEM32(esp + 0x20);
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EE99u); RECOMP_ABI_CALL(0x003298D0u, sub_003298D0); /* call 0x003298D0 */

loc_0031EE99: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031EEC5; /* je: equal / zero */

loc_0031EEA7: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EEB2u); RECOMP_ABI_CALL(0x00328660u, sub_00328660); /* call 0x00328660 */

loc_0031EEB2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EEB8u); RECOMP_ABI_CALL(0x00328540u, sub_00328540); /* call 0x00328540 */

loc_0031EEB8: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x30);
    esp = esp + 0xC;
    MEM32(eax) = edx;

loc_0031EEC5: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0031EED0
 * Original: 0x0031EED0 - 0x0031EEFF (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x800 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031EEE0; /* jl: less (signed <) */

loc_0031EEDB: ;
    esi = 0x800;

loc_0031EEE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031EEEEu); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031EEEE: ;
    PUSH32(esp, edi);
    MEM32(edi + 0x90) = esi;
    PUSH32(esp, 0x0031EEFAu); RECOMP_ABI_CALL(0x00324EC0u, sub_00324EC0); /* call 0x00324EC0 */

loc_0031EEFA: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EF00
 * Original: 0x0031EF00 - 0x0031EF2E (46 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EF00: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0031EF24; /* jl: less (signed <) */

loc_0031EF0B: ;
    goto loc_0031EF10;

    /* nop */

loc_0031EF10: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031EF16u); RECOMP_ABI_CALL(0x00329A20u, sub_00329A20); /* call 0x00329A20 */

loc_0031EF16: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EF29; /* je: equal / zero */

loc_0031EF1D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031EF10; /* jge: greater or equal (signed >=) */

loc_0031EF24: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031EF29: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EF30
 * Original: 0x0031EF30 - 0x0031EF7D (77 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EF30: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x0031EF3Cu); RECOMP_ABI_CALL(0x00328610u, sub_00328610); /* call 0x00328610 */

loc_0031EF3C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031EF55; /* jne: not equal / not zero */

loc_0031EF42: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031EF4C; /* jle: less or equal (signed <=) */

loc_0031EF47: ;
    edi = 6;

loc_0031EF4C: ;
    eax = edi + ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031EF55: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EF67u); RECOMP_ABI_CALL(0x003298D0u, sub_003298D0); /* call 0x003298D0 */

loc_0031EF67: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EF6Du); RECOMP_ABI_CALL(0x00328540u, sub_00328540); /* call 0x00328540 */

loc_0031EF6D: ;
    edx = MEM32(esp + 0x20);
    esp = esp + 0x18;
    POP32(esp, edi);
    eax = edx + ebx;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031EF80
 * Original: 0x0031EF80 - 0x0031F018 (152 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EF80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031EF80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x800 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031EF97; /* jl: less (signed <) */

loc_0031EF92: ;
    ebx = 0x800;

loc_0031EF97: ;
    PUSH32(esp, edi);
    ecx = ebx;
    eax = ecx;
    ecx = ecx >> 2;
    esi = edx;
    edi = 0x5D2C80;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    esi = 0x5D2C80;
    POP32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031EFDD; /* jle: less or equal (signed <=) */

loc_0031EFB9: ;
    /* nop */

loc_0031EFC0: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EFCCu); RECOMP_ABI_CALL(0x003175F0u, sub_003175F0); /* call 0x003175F0 */

loc_0031EFCC: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031EFE4; /* jne: not equal / not zero */

loc_0031EFD3: ;
    ebx = ebx - 4;
    esi = esi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0031EFC0; /* jg: greater (signed >) */

loc_0031EFDD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031EFE4: ;
    MEM32(ebp + 0xC) = 0x42F4B8;
    SET_LO8(edx, MEM8(esi + 7));
    eax = 0; /* xor self */
    MEM8(ebp + 0x28) = LO8(edx);
    SET_HI8(eax, MEM8(esi + 8));
    ecx = ZX8(MEM8(esi + 0xA));
    edx = ZX8(MEM8(esi + 0xB));
    SET_LO8(eax, MEM8(esi + 9));
    POP32(esp, esi);
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    MEM32(ebp + 0x2C) = eax;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F020
 * Original: 0x0031F020 - 0x0031F095 (117 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F020(void)
{

loc_0031F020: ;
    PUSH32(esp, ecx);
    SET_LO8(edx, MEM8(ecx + 2));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(ecx, MEM8(ecx + 3));
    MEM8(esp + 7) = LO8(ebx);
    SET_LO8(ebx, LO8(ebx) >> 1);
    SET_LO8(ebx, LO8(ebx) & 3);
    MEM8(eax) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 7));
    SET_LO8(ebx, LO8(ebx) & 1);
    MEM8(eax + 1) = LO8(ebx);
    SET_LO8(ebx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) >> 4);
    MEM8(eax + 2) = LO8(ebx);
    SET_LO8(ebx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) >> 2);
    SET_LO8(ebx, LO8(ebx) & 3);
    MEM8(eax + 3) = LO8(ebx);
    SET_LO8(ebx, LO8(edx));
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(eax + 5) = LO8(edx);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 6);
    MEM8(eax + 6) = LO8(edx);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 4);
    SET_LO8(edx, LO8(edx) & 3);
    MEM8(eax + 7) = LO8(edx);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 3);
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(eax + 8) = LO8(edx);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) >> 1);
    SET_LO8(edx, LO8(edx) >> 2);
    SET_LO8(ebx, LO8(ebx) & 1);
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) & 3);
    MEM8(eax + 4) = LO8(ebx);
    MEM8(eax + 9) = LO8(edx);
    MEM8(eax + 0xA) = LO8(ecx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F0A0
 * Original: 0x0031F0A0 - 0x0031F1AC (268 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F0A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F0A0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031F19F; /* jle: less or equal (signed <=) */

loc_0031F0B7: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F0C0u); RECOMP_ABI_CALL(0x00327510u, sub_00327510); /* call 0x00327510 */

loc_0031F0C0: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F124; /* je: equal / zero */

loc_0031F0C7: ;
    SET_LO8(edx, MEM8(eax + 6));
    SET_LO8(ebx, MEM8(eax + 4));
    ecx = eax;
    ecx = ecx - esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x14) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 8));
    esi = esi + ecx;
    edi = edi - ecx;
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(esp + 0x15) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esp + 0x13) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 7));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    MEM8(esp + 0x16) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xA));
    SET_LO8(eax, MEM8(eax + 0xB));
    MEM8(esp + 0x17) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0031F113; /* je: equal / zero */

loc_0031F101: ;
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0031F113; /* jb: below (unsigned <) */

loc_0031F109: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031F113; /* ja: above (unsigned >) */

loc_0031F10E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F12E; /* jne: not equal / not zero */

loc_0031F113: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0031F0B7; /* jg: greater (signed >) */

loc_0031F117: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031F124: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031F12E: ;
    esi = ZX8(MEM8(esp + 0x13));
    eax = esi;
    edi = ZX8(LO8(ebx));
    eax = eax >> 4;
    edi = edi << 4;
    eax = eax | edi;
    MEM32(ebp + 0x14) = eax;
    eax = ZX8(MEM8(esp + 0x14));
    esi = esi & 0xF;
    esi = esi << 8;
    esi = esi | eax;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + 0x18) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0031F175; /* jne: not equal / not zero */

loc_0031F15A: ;
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esp + 0x15));
    esi = ZX8(LO8(edx));
    esi = esi >> 6;
    SET_LO8(eax, MEM8(esp + 0x16));
    eax = eax << 2;
    eax = eax | esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x32);
    MEM32(ebp + 0x1C) = eax;

loc_0031F175: ;
    ecx = ZX8(LO8(ecx));
    eax = MEM32(ecx * 4 + 0x42F8F8);
    ecx = ZX8(MEM8(esp + 0x17));
    edx = edx & 0x1F;
    edx = edx << 5;
    ecx = ecx >> 3;
    edx = edx | ecx;
    edx = edx << 0xB;
    MEM32(ebp + 0x20) = eax;
    MEM32(ebp + 0x24) = edx;
    MEM32(ebp + 8) = 0x42F544;

loc_0031F19F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F1B0
 * Original: 0x0031F1B0 - 0x0031F24E (158 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F1B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F1B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(eax) = 0;
    PUSH32(esp, edi);
    ebx = 0x10000;
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0x0031F1D5u); RECOMP_ABI_CALL(0x0031EF00u, sub_0031EF00); /* call 0x0031EF00 */

loc_0031F1D5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F20D; /* je: equal / zero */

loc_0031F1DB: ;
    ecx = ebp;
    ecx = ecx - edi;
    eax = ecx + esi;
    MEM32(esp + 0x10) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edi + 1;
    PUSH32(esp, 0x0031F1EFu); RECOMP_ABI_CALL(0x0031EF00u, sub_0031EF00); /* call 0x0031EF00 */

loc_0031F1EF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F20D; /* je: equal / zero */

loc_0031F1F5: ;
    eax = MEM32(esp + 0x1C);
    edx = ebp;
    edx = edx - esi;
    eax = edx + eax + -1;
    ecx = esi + 1;
    PUSH32(esp, 0x0031F209u); RECOMP_ABI_CALL(0x0031EF00u, sub_0031EF00); /* call 0x0031EF00 */

loc_0031F209: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F215; /* jne: not equal / not zero */

loc_0031F20D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031F215: ;
    ebx = esi;
    ebx = ebx - edi;
    eax = eax - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F22A; /* jne: not equal / not zero */

loc_0031F21F: ;
    eax = edi;
    eax = eax - ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F233; /* je: equal / zero */

loc_0031F22A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031F233: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031F243u); RECOMP_ABI_CALL(0x0031EE70u, sub_0031EE70); /* call 0x0031EE70 */

loc_0031F243: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F250
 * Original: 0x0031F250 - 0x0031F2B8 (104 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F250(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = MEM32(esp + 0x14);
    edi = MEM32(eax + 0x10);
    ebx = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ebp = 0; /* xor self */
    PUSH32(esp, 0x0031F268u); RECOMP_ABI_CALL(0x003249F0u, sub_003249F0); /* call 0x003249F0 */

loc_0031F268: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F28C; /* jne: not equal / not zero */

loc_0031F26F: ;
    /* nop */

loc_0031F270: ;
    ebx = ebx + edi;
    esi = esi - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031F2B3; /* jge: greater or equal (signed >=) */

loc_0031F279: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031F2B3; /* jle: less or equal (signed <=) */

loc_0031F27D: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0031F285u); RECOMP_ABI_CALL(0x003249F0u, sub_003249F0); /* call 0x003249F0 */

loc_0031F285: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F270; /* je: equal / zero */

loc_0031F28C: ;
    edi = 0x5D23E8;
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0x0031F29Au); RECOMP_ABI_CALL(0x0031EED0u, sub_0031EED0); /* call 0x0031EED0 */

loc_0031F29A: ;
    eax = MEM32(0x5D23E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F2B3; /* je: equal / zero */

loc_0031F2A3: ;
    eax = MEM32(0x5D23F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031F2B3; /* jle: less or equal (signed <=) */

loc_0031F2AC: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx + 0x1C) = eax;

loc_0031F2B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F2C0
 * Original: 0x0031F2C0 - 0x0031F313 (83 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031F2C0: ;
    PUSH32(esp, esi);
    eax = edi;
    edx = ebx;
    PUSH32(esp, 0x0031F2CAu); RECOMP_ABI_CALL(0x0031EF80u, sub_0031EF80); /* call 0x0031EF80 */

loc_0031F2CA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031F2D7; /* je: equal / zero */

loc_0031F2D1: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0031F2D7: ;
    PUSH32(esp, esi);
    eax = edi + -2;
    edx = ebx + 2;
    PUSH32(esp, 0x0031F2E3u); RECOMP_ABI_CALL(0x0031EF80u, sub_0031EF80); /* call 0x0031EF80 */

loc_0031F2E3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F2D1; /* jne: not equal / not zero */

loc_0031F2EA: ;
    PUSH32(esp, esi);
    eax = edi + -1;
    edx = ebx + 1;
    PUSH32(esp, 0x0031F2F6u); RECOMP_ABI_CALL(0x0031EF80u, sub_0031EF80); /* call 0x0031EF80 */

loc_0031F2F6: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F2D1; /* jne: not equal / not zero */

loc_0031F2FD: ;
    PUSH32(esp, esi);
    eax = edi + -3;
    edx = ebx + 3;
    PUSH32(esp, 0x0031F309u); RECOMP_ABI_CALL(0x0031EF80u, sub_0031EF80); /* call 0x0031EF80 */

loc_0031F309: ;
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
 * sub_0031F320
 * Original: 0x0031F320 - 0x0031F369 (73 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F320: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    esi = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0031F35F; /* jl: less (signed <) */

loc_0031F32B: ;
    goto loc_0031F330;

    /* nop */

loc_0031F330: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F358; /* jne: not equal / not zero */

loc_0031F335: ;
    SET_LO8(ecx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(ecx) & 0xF8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F358; /* jne: not equal / not zero */

loc_0031F340: ;
    ecx = esi;
    PUSH32(esp, 0x0031F347u); RECOMP_ABI_CALL(0x0031F020u, sub_0031F020); /* call 0x0031F020 */

loc_0031F347: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F358; /* je: equal / zero */

loc_0031F34C: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F358; /* je: equal / zero */

loc_0031F352: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F364; /* jne: not equal / not zero */

loc_0031F358: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031F330; /* jge: greater or equal (signed >=) */

loc_0031F35F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031F364: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F370
 * Original: 0x0031F370 - 0x0031F3DF (111 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F370: ;
    esp = esp - 0xC;
    eax = esp;
    PUSH32(esp, 0x0031F37Bu); RECOMP_ABI_CALL(0x0031F320u, sub_0031F320); /* call 0x0031F320 */

loc_0031F37B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F3D9; /* je: equal / zero */

loc_0031F37F: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F3AC; /* jne: not equal / not zero */

loc_0031F386: ;
    SET_LO8(ecx, MEM8(esp + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F3AC; /* je: equal / zero */

loc_0031F38E: ;
    SET_LO8(ecx, MEM8(esp + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F3AC; /* jne: not equal / not zero */

loc_0031F396: ;
    ecx = ZX8(MEM8(esp + 6));
    SET_LO8(edx, MEM8(ecx * 4 + 0x42F91C));
    MEM8(esi + 0x28) = LO8(edx);
    MEM32(esi + 0x2C) = 0xAC44;

loc_0031F3AC: ;
    SET_LO16(ecx, MEM16(esp + 8));
    SET_LO8(edx, MEM8(esp + 0xA));
    MEM32(0x6E67E0) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x6E67E4) = eax;
    MEM16(0x6E67E8) = LO16(ecx);
    MEM8(0x6E67EA) = LO8(edx);
    eax = 1;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031F3D9: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F3E0
 * Original: 0x0031F3E0 - 0x0031F480 (160 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F3E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F3E0: ;
    esp = esp - 8;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = esi + edi;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031F47A; /* jle: less or equal (signed <=) */

loc_0031F403: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_0031F405: ;
    ebx = 0x40000;
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0x0031F413u); RECOMP_ABI_CALL(0x0031EF00u, sub_0031EF00); /* call 0x0031EF00 */

loc_0031F413: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F478; /* je: equal / zero */

loc_0031F419: ;
    SET_LO8(eax, MEM8(ebp + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC0 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0031F465; /* jb: below (unsigned <) */

loc_0031F420: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xDF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xDF (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031F465; /* ja: above (unsigned >) */

loc_0031F424: ;
    esi = MEM32(esp + 0x10);
    eax = esi;
    eax = eax - ebp;
    ebx = ebp;
    PUSH32(esp, 0x0031F433u); RECOMP_ABI_CALL(0x0031EF30u, sub_0031EF30); /* call 0x0031EF30 */

loc_0031F433: ;
    edi = MEM32(esp + 0x14);
    ebx = eax;
    eax = esi;
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031F443; /* jge: greater or equal (signed >=) */

loc_0031F441: ;
    edi = eax;

loc_0031F443: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 0x0031F44Cu); RECOMP_ABI_CALL(0x0031F2C0u, sub_0031F2C0); /* call 0x0031F2C0 */

loc_0031F44C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F478; /* jne: not equal / not zero */

loc_0031F450: ;
    ecx = edi;
    edx = ebx;
    PUSH32(esp, 0x0031F459u); RECOMP_ABI_CALL(0x0031F370u, sub_0031F370); /* call 0x0031F370 */

loc_0031F459: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F478; /* jne: not equal / not zero */

loc_0031F45D: ;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);

loc_0031F465: ;
    ebp = ebp - esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi - ebp;
    esi = esi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edi;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0031F405; /* jg: greater (signed >) */

loc_0031F478: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0031F47A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F480
 * Original: 0x0031F480 - 0x0031F4DC (92 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F480: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031F48Cu); RECOMP_ABI_CALL(0x0031F1B0u, sub_0031F1B0); /* call 0x0031F1B0 */

loc_0031F48C: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F495; /* jne: not equal / not zero */

loc_0031F493: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031F495: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031F4D5; /* je: equal / zero */

loc_0031F49D: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F4AF; /* je: equal / zero */

loc_0031F4A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031F4AF; /* jle: less or equal (signed <=) */

loc_0031F4A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x32);
    MEM32(esi + 0x1C) = eax;

loc_0031F4AF: ;
    PUSH32(esp, esi);
    eax = edi;
    ecx = ebx;
    MEM32(esi + 4) = 0x42F5E0;
    PUSH32(esp, 0x0031F4C0u); RECOMP_ABI_CALL(0x0031F250u, sub_0031F250); /* call 0x0031F250 */

loc_0031F4C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031F4C8u); RECOMP_ABI_CALL(0x0031F3E0u, sub_0031F3E0); /* call 0x0031F3E0 */

loc_0031F4C8: ;
    PUSH32(esp, esi);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x0031F4D2u); RECOMP_ABI_CALL(0x0031F0A0u, sub_0031F0A0); /* call 0x0031F0A0 */

loc_0031F4D2: ;
    esp = esp + 0x14;

loc_0031F4D5: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F4E0
 * Original: 0x0031F4E0 - 0x0031F520 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F4E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    ebx = edx;
    edx = esi;
    edi = ecx;
    PUSH32(esp, 0x0031F4F0u); RECOMP_ABI_CALL(0x0031EE30u, sub_0031EE30); /* call 0x0031EE30 */

loc_0031F4F0: ;
    PUSH32(esp, 0x0031F4F5u); RECOMP_ABI_CALL(0x0031F480u, sub_0031F480); /* call 0x0031F480 */

loc_0031F4F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F51C; /* jne: not equal / not zero */

loc_0031F4F9: ;
    PUSH32(esp, esi);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x0031F503u); RECOMP_ABI_CALL(0x0031F0A0u, sub_0031F0A0); /* call 0x0031F0A0 */

loc_0031F503: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F51C; /* jne: not equal / not zero */

loc_0031F50A: ;
    PUSH32(esp, 0x0031F50Fu); RECOMP_ABI_CALL(0x0031F2C0u, sub_0031F2C0); /* call 0x0031F2C0 */

loc_0031F50F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F51C; /* jne: not equal / not zero */

loc_0031F513: ;
    ecx = edi;
    edx = ebx;
    PUSH32(esp, 0x0031F51Cu); RECOMP_ABI_CALL(0x0031F370u, sub_0031F370); /* call 0x0031F370 */

loc_0031F51C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F520
 * Original: 0x0031F520 - 0x0031F577 (87 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F520: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031F52Bu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0031F52B: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    esp = esp + 4;
    eax = esi;
    PUSH32(esp, 0x0031F541u); RECOMP_ABI_CALL(0x0031F4E0u, sub_0031F4E0); /* call 0x0031F4E0 */

loc_0031F541: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F555; /* jne: not equal / not zero */

loc_0031F548: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F555; /* jne: not equal / not zero */

loc_0031F54F: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F558; /* jne: not equal / not zero */

loc_0031F555: ;
    MEM8(esi) = 1;

loc_0031F558: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F563; /* jne: not equal / not zero */

loc_0031F55C: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F567; /* je: equal / zero */

loc_0031F563: ;
    MEM8(esi + 1) = 1;

loc_0031F567: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031F571u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0031F571: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F580
 * Original: 0x0031F580 - 0x0031F5AA (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F58Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031F58B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F5A5; /* je: equal / zero */

loc_0031F592: ;
    PUSH32(esp, 0xFF000141u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031F59Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031F59E: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031F5A5: ;
    eax = MEM32(esi + 0x50);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F5B0
 * Original: 0x0031F5B0 - 0x0031F5C1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F5B0(void)
{

loc_0031F5B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 7);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031F5BDu); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_0031F5BD: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F5D0
 * Original: 0x0031F5D0 - 0x0031F5DE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031F5D0(void)
{

loc_0031F5D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x4C) = 3;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031F5E0
 * Original: 0x0031F5E0 - 0x0031F61C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F5E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F5E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F5EBu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031F5EB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F608; /* je: equal / zero */

loc_0031F5F2: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000145u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

loc_0031F608: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F615u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_0031F615: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F620
 * Original: 0x0031F620 - 0x0031F643 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F620(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F620: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F630; /* je: equal / zero */

loc_0031F628: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F630; /* je: equal / zero */

loc_0031F62D: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031F630: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F637u); RECOMP_ABI_CALL(0x00320130u, sub_00320130); /* call 0x00320130 */

loc_0031F637: ;
    esp = esp + 8;
    eax = edi;
    ecx = esi;
    g_seh_ebp = ebp; sub_0031F5B0(); return; /* tail jmp 0x0031F5B0 */

}

/**
 * sub_0031F650
 * Original: 0x0031F650 - 0x0031F67E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F650: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F65Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031F65B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F673; /* je: equal / zero */

loc_0031F662: ;
    PUSH32(esp, 0xFF000143u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031F66Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031F66E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031F673: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F679u); RECOMP_ABI_CALL(0x0031F5D0u, sub_0031F5D0); /* call 0x0031F5D0 */

loc_0031F679: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F680
 * Original: 0x0031F680 - 0x0031F6DA (90 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F680: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    ecx = ecx - eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((ecx == 0)) goto loc_0031F6C7; /* je: equal / zero */

loc_0031F68C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031F6A9; /* je: equal / zero */

loc_0031F68F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031F6D7; /* jne: not equal / not zero */

loc_0031F692: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F6D7; /* jne: not equal / not zero */

loc_0031F69C: ;
    edi = 2;
    PUSH32(esp, 0x0031F6A6u); RECOMP_ABI_CALL(0x0031F620u, sub_0031F620); /* call 0x0031F620 */

loc_0031F6A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031F6A9: ;
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = ecx + 1;
    MEM32(esi + 0x54) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0031F6D7; /* jne: not equal / not zero */

loc_0031F6BA: ;
    edi = 1;
    PUSH32(esp, 0x0031F6C4u); RECOMP_ABI_CALL(0x0031F620u, sub_0031F620); /* call 0x0031F620 */

loc_0031F6C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031F6C7: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031F6D7; /* jne: not equal / not zero */

loc_0031F6D0: ;
    edi = 0; /* xor self */
    PUSH32(esp, 0x0031F6D7u); RECOMP_ABI_CALL(0x0031F620u, sub_0031F620); /* call 0x0031F620 */

loc_0031F6D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F6E0
 * Original: 0x0031F6E0 - 0x0031F740 (96 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F6E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F6E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F6EBu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031F6EB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F708; /* je: equal / zero */

loc_0031F6F2: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF000142u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

loc_0031F708: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F71F; /* jne: not equal / not zero */

loc_0031F710: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F71B; /* jne: not equal / not zero */

loc_0031F717: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031F71B: ;
    eax = 0; /* xor self */
    goto loc_0031F72A;

loc_0031F71F: ;
    edx = MEM32(esi + 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0031F72A: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esi + 0x50) = ecx;
    PUSH32(esp, 0x0031F734u); RECOMP_ABI_CALL(0x0031F680u, sub_0031F680); /* call 0x0031F680 */

loc_0031F734: ;
    esp = esp + 8;
    MEM32(esi + 0x44) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F740
 * Original: 0x0031F740 - 0x0031F759 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F740(void)
{

loc_0031F740: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F760
 * Original: 0x0031F760 - 0x0031F783 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F760(void)
{

loc_0031F760: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x1E) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F790
 * Original: 0x0031F790 - 0x0031F814 (132 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F790: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x288);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F7AC; /* jne: not equal / not zero */

loc_0031F7A4: ;
    MEM32(esi + 0x288) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031F7AC: ;
    ecx = eax;
    ecx = ecx - edx;
    if ((ecx == 0)) goto loc_0031F812; /* je: equal / zero */

loc_0031F7B2: ;
    MEM32(esi + 0x288) = eax;
    eax = MEM32(esi + 0x290);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031F7C4; /* jg: greater (signed >) */

loc_0031F7C2: ;
    eax = ecx;

loc_0031F7C4: ;
    MEM32(esi + 0x290) = eax;
    eax = MEM32(esi + 0x294);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031F7D6; /* jl: less (signed <) */

loc_0031F7D4: ;
    eax = ecx;

loc_0031F7D6: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x28C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7FFFFFFF (32-bit) */
    MEM32(esi + 0x294) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031F80B; /* je: equal / zero */

loc_0031F7EB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031F80B; /* jle: less or equal (signed <=) */

loc_0031F7EF: ;
    eax = edi;
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F80B; /* je: equal / zero */

loc_0031F800: ;
    edi = edi - eax;
    MEM32(esi + 0x28C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031F80B: ;
    MEM32(esi + 0x28C) = ecx;
    POP32(esp, edi);

loc_0031F812: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F820
 * Original: 0x0031F820 - 0x0031F84E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F820: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x288);
    eax = MEM32(ecx + 0x28C);
    ecx = MEM32(ecx + 0x290);
    eax = eax + edx;
    ecx = ecx + edx;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031F84D; /* jl: less (signed <) */

loc_0031F842: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0031F84D; /* jl: less (signed <) */

loc_0031F848: ;
    eax = 0x7FFFFFFF;

loc_0031F84D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F850
 * Original: 0x0031F850 - 0x0031F870 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F850: ;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F859; /* je: equal / zero */

loc_0031F856: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031F859: ;
    ecx = MEM32(eax + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F856; /* jne: not equal / not zero */

loc_0031F860: ;
    edx = MEM32(eax + 0x968);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F870
 * Original: 0x0031F870 - 0x0031F889 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F870: ;
    ecx = MEM32(eax + 0x2C0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F888; /* je: equal / zero */

loc_0031F87D: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x4C), 4 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_0031F888: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F890
 * Original: 0x0031F890 - 0x0031F8BA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F890: ;
    PUSH32(esp, 0x47);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031F898u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031F898: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F8AD; /* jne: not equal / not zero */

loc_0031F8A0: ;
    ecx = MEM32(esi + 0x29C);
    MEM32(esi + 0x2C4) = ecx;
    esp += 4; return; /* ret */

loc_0031F8AD: ;
    edx = MEM32(esi + 0x2D0);
    MEM32(esi + 0x2C4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F8C0
 * Original: 0x0031F8C0 - 0x0031F8FE (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F8C0: ;
    PUSH32(esp, 0x47);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031F8C8u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031F8C8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F8E7; /* jne: not equal / not zero */

loc_0031F8D0: ;
    ecx = MEM32(esi + 0x29C);
    ecx = ecx - MEM32(esi + 0x2C4);
    MEM32(ebx) = ecx;
    edx = MEM32(0x6E69B8);
    MEM32(edi) = edx;
    esp += 4; return; /* ret */

loc_0031F8E7: ;
    eax = MEM32(esi + 0x2D0);
    eax = eax - MEM32(esi + 0x2C4);
    MEM32(ebx) = eax;
    ecx = MEM32(esi + 0x2D4);
    MEM32(edi) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F900
 * Original: 0x0031F900 - 0x0031F967 (103 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F900: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, 6);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031F910u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031F910: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031F91E; /* jne: not equal / not zero */

loc_0031F917: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031F91E: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031F926u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031F926: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0031F917; /* je: equal / zero */

loc_0031F931: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 0xCC0;
    edi = esp + 0x14;
    ebx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0x0031F949u); RECOMP_ABI_CALL(0x0031F8C0u, sub_0031F8C0); /* call 0x0031F8C0 */

loc_0031F949: ;
    eax = MEM32(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x14))); }
    edx = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F970
 * Original: 0x0031F970 - 0x0031F9AA (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F970: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x150);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0031F984; /* jge: greater or equal (signed >=) */

loc_0031F97F: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031F984: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x57E4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031F994u); RECOMP_ABI_CALL(0x003208D0u, sub_003208D0); /* call 0x003208D0 */

loc_0031F994: ;
    edx = MEM32(esi + 0x150);
    esp = esp + 0xC;
    MEM32(0x6E67CC) = edx;
    MEM32(0x6E67D4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F9B0
 * Original: 0x0031F9B0 - 0x0031FA04 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F9B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x118);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    MEM32(edx) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0031F9D3; /* je: equal / zero */

loc_0031F9C5: ;
    esi = MEM32(eax + 0x13C);
    eax = MEM32(eax + 0x140);
    goto loc_0031F9E3;

loc_0031F9D3: ;
    esi = MEM32(eax + 0x110);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0031F9FF; /* jl: less (signed <) */

loc_0031F9DD: ;
    eax = MEM32(eax + 0x114);

loc_0031F9E3: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F9EFu); RECOMP_ABI_CALL(0x003208D0u, sub_003208D0); /* call 0x003208D0 */

loc_0031F9EF: ;
    esp = esp + 0xC;
    MEM32(0x6E67D0) = esi;
    MEM32(0x6E67C8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031F9FF: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FA10
 * Original: 0x0031FA10 - 0x0031FA29 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FA10(void)
{

loc_0031FA10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x144) = ecx;
    MEM32(eax + 0x148) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FA30
 * Original: 0x0031FA30 - 0x0031FA68 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FA30: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031FA62; /* je: equal / zero */

loc_0031FA3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFCu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031FA62; /* je: equal / zero */

loc_0031FA41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031FA62; /* je: equal / zero */

loc_0031FA46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031FA62; /* je: equal / zero */

loc_0031FA4B: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx) = 0xFFFFFFFFu;
    MEM32(edx) = 1;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031FA62: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FA70
 * Original: 0x0031FA70 - 0x0031FA75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FA70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031FA70: ;
    g_seh_ebp = ebp; sub_00327730(); return; /* tail jmp 0x00327730 */

}

/**
 * sub_0031FA80
 * Original: 0x0031FA80 - 0x0031FA94 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FA80(void)
{

loc_0031FA80: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(edx + eax * 4 + 0xCC0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FAA0
 * Original: 0x0031FAA0 - 0x0031FAF6 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FAA0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    edx = MEM32(eax * 4 + 0x42FA50);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    eax = esi + eax * 2;
    eax = MEM32(eax * 4 + 0x42FA78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031FAE3; /* jne: not equal / not zero */

loc_0031FABF: ;
    PUSH32(esp, 0xFF000221u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031FACAu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031FACA: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    esp = esp + 8;
    MEM32(ecx) = 0;
    MEM32(edx) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031FAE3: ;
    esi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0031FAF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031FAF1: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FB00
 * Original: 0x0031FB00 - 0x0031FB44 (68 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FB00(void)
{

loc_0031FB00: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    PUSH32(esp, esi);
    edx = edx + MEM32(eax + 0xC);
    esi = MEM32(eax + 0x18);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1E);
    edx = edx + ecx;
    ecx = MEM32(esp + 0xC);
    esi = esi + edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax = eax + esi * 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1F4);
    edx = edx + eax;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FB50
 * Original: 0x0031FB50 - 0x0031FB75 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FB50(void)
{

loc_0031FB50: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5DC0);
    PUSH32(esp, 0x0031FB6Au); RECOMP_ABI_CALL(0x0031FB00u, sub_0031FB00); /* call 0x0031FB00 */

loc_0031FB6A: ;
    edx = MEM32(esp + 0x18);
    esp = esp + 0x10;
    MEM32(esi) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FB80
 * Original: 0x0031FB80 - 0x0031FBA5 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FB80(void)
{

loc_0031FB80: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x0031FB9Au); RECOMP_ABI_CALL(0x0031FB00u, sub_0031FB00); /* call 0x0031FB00 */

loc_0031FB9A: ;
    edx = MEM32(esp + 0x18);
    esp = esp + 0x10;
    MEM32(esi) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FBB0
 * Original: 0x0031FBB0 - 0x0031FBD5 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FBB0(void)
{

loc_0031FBB0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xEA60);
    PUSH32(esp, 0x0031FBCAu); RECOMP_ABI_CALL(0x0031FB00u, sub_0031FB00); /* call 0x0031FB00 */

loc_0031FBCA: ;
    edx = MEM32(esp + 0x18);
    esp = esp + 0x10;
    MEM32(esi) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FBE0
 * Original: 0x0031FBE0 - 0x0031FC41 (97 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FBE0(void)
{

loc_0031FBE0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xA88A);
    eax = eax + eax * 2;
    esi = esi + eax * 4;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2CF);
    esi = esi + eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    esi = esi + edx;
    edx = MEM32(ecx + 0x18);
    eax = eax >> 0x1F;
    eax = eax + esi;
    eax = edx + eax * 2;
    edx = MEM32(ecx + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x1E);
    eax = eax + edx;
    edx = ecx + eax * 2;
    eax = MEM32(esp + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1F4);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FC50
 * Original: 0x0031FC50 - 0x0031FCB0 (96 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FC50(void)
{

loc_0031FC50: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD2BA);
    esi = esi + eax;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x383);
    esi = esi + eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    esi = esi + edx;
    edx = MEM32(ecx + 0x18);
    eax = eax >> 0x1F;
    eax = eax + esi;
    eax = edx + eax * 2;
    edx = MEM32(ecx + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x1E);
    eax = eax + edx;
    edx = ecx + eax * 2;
    eax = MEM32(esp + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1F4);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FCB0
 * Original: 0x0031FCB0 - 0x0031FD10 (96 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FCB0(void)
{

loc_0031FCB0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1A5AA);
    esi = esi + eax;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x707);
    esi = esi + eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    esi = esi + edx;
    edx = MEM32(ecx + 0x18);
    eax = eax >> 0x1F;
    eax = eax + esi;
    eax = edx + eax * 2;
    edx = MEM32(ecx + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x1E);
    eax = eax + edx;
    edx = ecx + eax * 2;
    eax = MEM32(esp + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1F4);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FD10
 * Original: 0x0031FD10 - 0x0031FD3E (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FD10(void)
{

loc_0031FD10: ;
    edx = MEM32(0x6E69B8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031FD1Eu); RECOMP_ABI_CALL(0x003208D0u, sub_003208D0); /* call 0x003208D0 */

loc_0031FD1E: ;
    ecx = MEM32(esi + 0xF5C);
    ecx = ecx + eax;
    MEM32(esi + 0xF5C) = ecx;
    edx = MEM32(esi + 0xF80);
    edx = edx + eax;
    esp = esp + 0xC;
    MEM32(esi + 0xF80) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FD40
 * Original: 0x0031FD40 - 0x0031FD60 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FD40(void)
{

loc_0031FD40: ;
    edx = MEM32(esi + 0xF94);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031FD4Eu); RECOMP_ABI_CALL(0x003208D0u, sub_003208D0); /* call 0x003208D0 */

loc_0031FD4E: ;
    ecx = MEM32(esi + 0xF90);
    eax = eax + ecx;
    esp = esp + 0xC;
    MEM32(esi + 0xF90) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FD60
 * Original: 0x0031FD60 - 0x0031FD93 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FD60: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_0031FD7F; /* jne: not equal / not zero */

loc_0031FD72: ;
    edx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    MEM32(edx) = 0x7512;
    esp += 4; return; /* ret */

loc_0031FD7F: ;
    MEM32(ecx) = 0x3E8;
    edx = MEM32(eax * 4 + 0x42FA50);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FDA0
 * Original: 0x0031FDA0 - 0x0031FDEC (76 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FDA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031FDA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    MEM32(edi) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0031FDB6u); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031FDB6: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031FDD4; /* je: equal / zero */

loc_0031FDBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF00011Bu;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

loc_0031FDD4: ;
    eax = MEM32(esi + 0x920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031FDE7; /* je: equal / zero */

loc_0031FDDE: ;
    eax = MEM32(eax * 4 + 0x42FA50);
    MEM32(edi) = eax;

loc_0031FDE7: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FDF0
 * Original: 0x0031FDF0 - 0x0031FE34 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031FDF0: ;
    ecx = MEM32(eax + 0xF80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0031FE0B; /* jge: greater or equal (signed >=) */

loc_0031FDFA: ;
    MEM32(eax + 0xF80) = 0;
    MEM32(esi) = 1;
    esp += 4; return; /* ret */

loc_0031FE0B: ;
    ecx = MEM32(0x6E69B8);
    eax = MEM32(eax + 0xF80);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031FE28u); RECOMP_ABI_CALL(0x00327730u, sub_00327730); /* call 0x00327730 */

loc_0031FE28: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(esi) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FE40
 * Original: 0x0031FE40 - 0x0031FF2E (238 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FE40(void)
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

loc_0031FE40: ;
    fp_push((double)SMEM32(ecx + 0xA58)); /* fild */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0031FE60; /* jp: parity */

loc_0031FE57: ;
    fp_pop(); /* fstp st(0) */
    MEM32(edx) = 0;
    esp += 4; return; /* ret */

loc_0031FE60: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031FEB8; /* jne: not equal / not zero */

loc_0031FE73: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(edx) = 1;
    fp_push(MEMF(ecx + 0xF7C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0031FF2D; /* jnp: not parity */

loc_0031FE90: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(ecx + 0xF74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0031FF2D; /* jnp: not parity */

loc_0031FEA7: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xF74) = eax;
    MEM32(ecx + 0xF70) = MEM32(ecx + 0xF70) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xF70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0031FEB8: ;
    _fa = (uint32_t)(MEM32(0x6E69B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEA24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E69B8), 0xEA24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031FEE0; /* jne: not equal / not zero */

loc_0031FEC4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x920)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x920), 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031FEE0; /* jg: greater (signed >) */

loc_0031FECD: ;
    _fa = (uint32_t)(MEM32(ecx + 0xF60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xF60), 0x3E8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031FEE0; /* jne: not equal / not zero */

loc_0031FED9: ;
    eax = 1;
    goto loc_0031FEE2;

loc_0031FEE0: ;
    eax = 0; /* xor self */

loc_0031FEE2: ;
    _fa = (uint32_t)(MEM32(ecx + 0xF70)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xF70), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031FEF4; /* jg: greater (signed >) */

loc_0031FEEA: ;
    eax = MEM32(ecx + 0xF78);
    MEM32(edx) = eax;
    goto loc_0031FF11;

loc_0031FEF4: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0031FF0B; /* jp: parity */

loc_0031FF03: ;
    MEM32(edx) = 0;
    goto loc_0031FF11;

loc_0031FF0B: ;
    MEM32(edx) = 1;

loc_0031FF11: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xF70) = 0;
    edx = MEM32(edx);
    MEM32(ecx + 0xF78) = edx;
    MEM32(ecx + 0xF7C) = eax;

loc_0031FF2D: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0031FF30
 * Original: 0x0031FF30 - 0x0031FF3B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FF30(void)
{

loc_0031FF30: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xF60);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FF40
 * Original: 0x0031FF40 - 0x0031FF65 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FF40(void)
{

loc_0031FF40: ;
    edx = MEM32(esp + 4);
    eax = edx + 4;
    PUSH32(esp, eax);
    MEM32(edx) = 0;
    PUSH32(esp, 0x0031FF53u); RECOMP_ABI_CALL(0x0031F760u, sub_0031F760); /* call 0x0031F760 */

loc_0031FF53: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    MEM32(edx + 0x24) = ecx;
    MEM32(edx + 0x28) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FF70
 * Original: 0x0031FF70 - 0x0031FFB7 (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FF70: ;
    PUSH32(esp, esi);
    eax = edi;
    esi = edi + 0xCC0;
    PUSH32(esp, 0x0031FF7Eu); RECOMP_ABI_CALL(0x0031F850u, sub_0031F850); /* call 0x0031F850 */

loc_0031FF7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031FF94; /* je: equal / zero */

loc_0031FF82: ;
    eax = MEM32(esi + 0x29C);
    eax = eax + MEM32(esi + 0x2A0);
    MEM32(esi + 0x29C) = eax;

loc_0031FF94: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0031FF9Cu); RECOMP_ABI_CALL(0x0031F870u, sub_0031F870); /* call 0x0031F870 */

loc_0031FF9C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031FFB5; /* je: equal / zero */

loc_0031FFA3: ;
    ecx = MEM32(esi + 0x2C0);
    ecx = ecx + MEM32(esi + 0x2A0);
    MEM32(esi + 0x2C0) = ecx;

loc_0031FFB5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FFC0
 * Original: 0x0031FFC0 - 0x0031FFEB (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FFC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031FFCBu); RECOMP_ABI_CALL(0x0031F900u, sub_0031F900); /* call 0x0031F900 */

loc_0031FFCB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031FFE7; /* je: equal / zero */

loc_0031FFD2: ;
    PUSH32(esp, 0xFF000222u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031FFDDu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031FFDD: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031FFE7: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FFF0
 * Original: 0x0031FFF0 - 0x0032001E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FFF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320006u); RECOMP_ABI_CALL(0x0031FA30u, sub_0031FA30); /* call 0x0031FA30 */

loc_00320006: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320019; /* je: equal / zero */

loc_0032000D: ;
    MEM32(edi) = 0xFFFFFFFEu;
    MEM32(esi) = 1;

loc_00320019: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320020
 * Original: 0x00320020 - 0x00320054 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320020: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00320037u); RECOMP_ABI_CALL(0x0031FA30u, sub_0031FA30); /* call 0x0031FA30 */

loc_00320037: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032004E; /* je: equal / zero */

loc_0032003E: ;
    eax = MEM32(ebx + 0xF5C);
    MEM32(edi) = eax;
    ecx = MEM32(0x6E69B8);
    MEM32(esi) = ecx;

loc_0032004E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00320031
 * Original: 0x00320031 - 0x00320054 (35 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320031(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320031: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00320037u); RECOMP_ABI_CALL(0x0031FA30u, sub_0031FA30); /* call 0x0031FA30 */

loc_00320037: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032004E; /* je: equal / zero */

loc_0032003E: ;
    eax = MEM32(ebx + 0xF5C);
    MEM32(edi) = eax;
    ecx = MEM32(0x6E69B8);
    MEM32(esi) = ecx;

loc_0032004E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00320060
 * Original: 0x00320060 - 0x0032007A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00320060(void)
{

loc_00320060: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00320074u); RECOMP_ABI_CALL(0x0031FA30u, sub_0031FA30); /* call 0x0031FA30 */

loc_00320074: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00320080
 * Original: 0x00320080 - 0x0032012F (175 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320080(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320080: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032009Au); RECOMP_ABI_CALL(0x0031FA30u, sub_0031FA30); /* call 0x0031FA30 */

loc_0032009A: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003200B8; /* je: equal / zero */

loc_003200A1: ;
    eax = MEM32(esi + 0xF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003200C1; /* jne: not equal / not zero */

loc_003200AB: ;
    MEM32(ebp) = 0xFFFFFFFEu;
    MEM32(ebx) = 1;

loc_003200B8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003200C1: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003200CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003200CF: ;
    edi = eax;
    esp = esp + 0xC;
    eax = esi;
    PUSH32(esp, 0x003200DBu); RECOMP_ABI_CALL(0x0031F850u, sub_0031F850); /* call 0x0031F850 */

loc_003200DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00320104; /* je: equal / zero */

loc_003200E3: ;
    _fa = (uint32_t)(MEM32(esi + 0xF8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF8C), 0xFFFFFFFBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320104; /* je: equal / zero */

loc_003200EC: ;
    ecx = MEM32(esi + 0xF8C);
    edx = eax;
    edx = edx - ecx;
    ecx = MEM32(esi + 0xF90);
    edx = edx + ecx;
    MEM32(esi + 0xF90) = edx;

loc_00320104: ;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0xF8C) = eax;
    MEM32(esi + 0xF94) = edx;
    eax = MEM32(esi + 0xF90);
    MEM32(ebp) = eax;
    ecx = MEM32(esi + 0xF94);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00320130
 * Original: 0x00320130 - 0x00320173 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320130(void)
{
    int _flags = 0; /* fallback flag var */

loc_00320130: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    eax = eax - 2;
    if ((eax != 0)) goto loc_00320171; /* jne: not equal / not zero */

loc_0032013A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00320151u); RECOMP_ABI_CALL(0x0031FD60u, sub_0031FD60); /* call 0x0031FD60 */

loc_00320151: ;
    edi = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x18);
    esp = esp + 0xC;
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x00320165u); RECOMP_ABI_CALL(0x0031FD10u, sub_0031FD10); /* call 0x0031FD10 */

loc_00320165: ;
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x0032016Eu); RECOMP_ABI_CALL(0x0031FD40u, sub_0031FD40); /* call 0x0031FD40 */

loc_0032016E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00320171: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00320180
 * Original: 0x00320180 - 0x003204CA (842 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320180(void)
{

loc_00320180: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 0x31FFF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00320195u); RECOMP_ABI_CALL(0x0031FA80u, sub_0031FA80); /* call 0x0031FA80 */

loc_00320195: ;
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x320020);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003201A6u); RECOMP_ABI_CALL(0x0031FA80u, sub_0031FA80); /* call 0x0031FA80 */

loc_003201A6: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003201AFu); RECOMP_ABI_CALL(0x0031FA80u, sub_0031FA80); /* call 0x0031FA80 */

loc_003201AF: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x320060);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003201BCu); RECOMP_ABI_CALL(0x0031FA80u, sub_0031FA80); /* call 0x0031FA80 */

loc_003201BC: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003201C5u); RECOMP_ABI_CALL(0x0031FA80u, sub_0031FA80); /* call 0x0031FA80 */

loc_003201C5: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x320080);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003201D2u); RECOMP_ABI_CALL(0x0031FA80u, sub_0031FA80); /* call 0x0031FA80 */

loc_003201D2: ;
    esi = MEM32(esp + 0x5C);
    eax = esi + 0x1C;
    esp = esp + 0x48;
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, 0x003201E5u); RECOMP_ABI_CALL(0x0031F760u, sub_0031F760); /* call 0x0031F760 */

loc_003201E5: ;
    ecx = esi + 0xC0;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003201F2u); RECOMP_ABI_CALL(0x0031FF40u, sub_0031FF40); /* call 0x0031FF40 */

loc_003201F2: ;
    edx = esi + 0x3C;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00320200u); RECOMP_ABI_CALL(0x0031FF40u, sub_0031FF40); /* call 0x0031FF40 */

loc_00320200: ;
    eax = esi + 0x68;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032020Bu); RECOMP_ABI_CALL(0x0031FF40u, sub_0031FF40); /* call 0x0031FF40 */

loc_0032020B: ;
    ecx = esi + 0x94;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00320219u); RECOMP_ABI_CALL(0x0031FF40u, sub_0031FF40); /* call 0x0031FF40 */

loc_00320219: ;
    edx = esi + 0xEC;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00320227u); RECOMP_ABI_CALL(0x0031FF40u, sub_0031FF40); /* call 0x0031FF40 */

loc_00320227: ;
    eax = esi + 0x118;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320238u); RECOMP_ABI_CALL(0x0031FF40u, sub_0031FF40); /* call 0x0031FF40 */

loc_00320238: ;
    MEM32(esi + 0x144) = edi;
    MEM32(esi + 0x148) = edi;
    MEM32(esi + 0x14C) = 0xFFFFFFFFu;
    MEM32(esi + 0x150) = 0xFFFFFFFFu;
    MEM32(esi + 0x154) = edi;
    MEM32(esi + 0x158) = edi;
    MEM32(esi + 0x15C) = edi;
    esp = esp + 0x34;
    ecx = 0; /* xor self */
    MEM32(esi + 0x160) = ecx;
    MEM32(esi + 0x164) = ecx;
    MEM32(esi + 0x168) = ecx;
    MEM32(esi + 0x16C) = ecx;
    MEM32(esi + 0x170) = ecx;
    MEM32(esi + 0x174) = ecx;
    MEM32(esi + 0x178) = ecx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x180) = ecx;
    MEM32(esi + 0x184) = ecx;
    MEM32(esi + 0x188) = ecx;
    MEM32(esi + 0x18C) = ecx;
    MEM32(esi + 0x190) = ecx;
    MEM32(esi + 0x194) = ecx;
    MEM32(esi + 0x198) = ecx;
    MEM32(esi + 0x19C) = ecx;
    MEM32(esi + 0x1A0) = ecx;
    MEM32(esi + 0x1A4) = ecx;
    MEM32(esi + 0x1A8) = ecx;
    MEM32(esi + 0x1AC) = ecx;
    MEM32(esi + 0x1B0) = ecx;
    MEM32(esi + 0x1B4) = ecx;
    MEM32(esi + 0x1B8) = ecx;
    MEM32(esi + 0x1BC) = ecx;
    MEM32(esi + 0x1C0) = ecx;
    MEM32(esi + 0x1C4) = ecx;
    MEM32(esi + 0x1C8) = ecx;
    MEM32(esi + 0x1CC) = ecx;
    MEM32(esi + 0x1D0) = ecx;
    MEM32(esi + 0x1D4) = ecx;
    MEM32(esi + 0x1D8) = ecx;
    MEM32(esi + 0x1DC) = ecx;
    MEM32(esi + 0x1E0) = ebx;
    MEM32(esi + 0x1E4) = edi;
    MEM32(esi + 0x1E8) = edi;
    MEM32(esi + 0x1EC) = edi;
    edx = 0; /* xor self */
    MEM32(esi + 0x1F0) = edx;
    MEM32(esi + 0x1F4) = edx;
    MEM32(esi + 0x1F8) = edx;
    MEM32(esi + 0x1FC) = edx;
    MEM32(esi + 0x200) = edx;
    MEM32(esi + 0x204) = edx;
    MEM32(esi + 0x208) = edx;
    MEM32(esi + 0x20C) = edx;
    MEM32(esi + 0x210) = edx;
    MEM32(esi + 0x214) = edx;
    MEM32(esi + 0x218) = edx;
    MEM32(esi + 0x21C) = edx;
    MEM32(esi + 0x220) = edx;
    MEM32(esi + 0x224) = edx;
    MEM32(esi + 0x228) = edx;
    MEM32(esi + 0x22C) = edx;
    MEM32(esi + 0x230) = edx;
    MEM32(esi + 0x234) = edx;
    MEM32(esi + 0x238) = edx;
    MEM32(esi + 0x23C) = edx;
    MEM32(esi + 0x240) = edx;
    MEM32(esi + 0x244) = edx;
    MEM32(esi + 0x248) = edx;
    MEM32(esi + 0x24C) = edx;
    MEM32(esi + 0x250) = edx;
    MEM32(esi + 0x254) = edx;
    MEM32(esi + 0x258) = edx;
    MEM32(esi + 0x25C) = edx;
    MEM32(esi + 0x260) = edx;
    MEM32(esi + 0x264) = edx;
    MEM32(esi + 0x268) = edx;
    MEM32(esi + 0x26C) = edx;
    ecx = 0x7FFFFFFF;
    eax = 0xFFFFFFFBu;
    MEM32(esi + 0x28C) = ecx;
    MEM32(esi + 0x294) = ecx;
    ecx = 0xBF800000u;
    MEM32(esi + 0x29C) = edi;
    MEM32(esi + 0x270) = eax;
    MEM32(esi + 0x274) = ebx;
    MEM32(esi + 0x278) = eax;
    MEM32(esi + 0x27C) = ebx;
    MEM32(esi + 0x280) = eax;
    MEM32(esi + 0x284) = ebx;
    MEM32(esi + 0x288) = eax;
    MEM32(esi + 0x290) = edi;
    MEM32(esi + 0x298) = edi;
    MEM32(esi + 0x2A0) = 0x3E8;
    MEM32(esi + 0x2A4) = edi;
    MEM32(esi + 0x2A8) = edi;
    MEM32(esi + 0x2AC) = ebx;
    MEM32(esi + 0x2B0) = 0x64;
    MEM32(esi + 0x2B4) = ecx;
    MEM32(esi + 0x2B8) = edi;
    MEM32(esi + 0x2BC) = ecx;
    MEM32(esi + 0x2C0) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 0x29C);
    MEM32(esi + 0x2CC) = eax;
    MEM32(esi + 0x2D0) = edi;
    MEM32(esi + 0x2C8) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x2D4) = ebx;
    MEM32(esi + 0x2C4) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003204D0
 * Original: 0x003204D0 - 0x0032051B (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003204D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003204D0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003204DBu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003204DB: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003204E7u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_003204E7: ;
    eax = MEM32(esi + eax * 4 + 0xCC0);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003204FA; /* jne: not equal / not zero */

loc_003204F5: ;
    eax = 0x31FFF0;

loc_003204FA: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00320507u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00320507: ;
    esi = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320513u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00320513: ;
    esp = esp + 0x10;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00320520
 * Original: 0x00320520 - 0x0032057E (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320520: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    esi = edi + 0xCC0;
    PUSH32(esp, 0x0032053Au); RECOMP_ABI_CALL(0x003204D0u, sub_003204D0); /* call 0x003204D0 */

loc_0032053A: ;
    edx = MEM32(esi + 0x280);
    eax = MEM32(esp + 0x10);
    esp = esp + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320557; /* jne: not equal / not zero */

loc_0032054B: ;
    eax = MEM32(esi + 0x284);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320572; /* je: equal / zero */

loc_00320557: ;
    eax = edi;
    PUSH32(esp, 0x0032055Eu); RECOMP_ABI_CALL(0x0031F890u, sub_0031F890); /* call 0x0031F890 */

loc_0032055E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(esi + 0x280) = ecx;
    MEM32(esi + 0x284) = edx;

loc_00320572: ;
    MEM32(edi + 0x44) = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00320580
 * Original: 0x00320580 - 0x0032059F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320580: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x00320588u); RECOMP_ABI_CALL(0x0031FF70u, sub_0031FF70); /* call 0x0031FF70 */

loc_00320588: ;
    PUSH32(esp, 0x47);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00320590u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00320590: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032059D; /* jne: not equal / not zero */

loc_00320598: ;
    PUSH32(esp, 0x0032059Du); RECOMP_ABI_CALL(0x00320520u, sub_00320520); /* call 0x00320520 */

loc_0032059D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003205A0
 * Original: 0x003205A0 - 0x003205CD (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003205A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003205A0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0xF40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003205B8; /* jne: not equal / not zero */

loc_003205AF: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_003204D0(); return; /* tail jmp 0x003204D0 */

loc_003205B8: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0xF44);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003205D0
 * Original: 0x003205D0 - 0x003206B6 (230 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003205D0(void)
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

loc_003205D0: ;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003205E8u); RECOMP_ABI_CALL(0x003205A0u, sub_003205A0); /* call 0x003205A0 */

loc_003205E8: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320629; /* jne: not equal / not zero */

loc_003205F4: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032060A; /* jne: not equal / not zero */

loc_003205FB: ;
    edx = MEM32(esp + 0x20);
    MEM32(edx) = 1;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0032060A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0x00320620u); RECOMP_ABI_CALL(0x0031FDF0u, sub_0031FDF0); /* call 0x0031FDF0 */

loc_00320620: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00320629: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x24));
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CD144); /* fmul dword ptr [0x3cd144] */
    fp_top() = fp_top() / (double)SMEM32(esp + 0x1C); /* fidiv dword ptr [esp + 0x1c] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x6E69B8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x6E69B8))); }
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ecx + eax;
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fa = (uint32_t)(MEM32(edi + 0x9DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x9DC), 1 (32-bit) */
    fp_top() = fp_top() * MEMF(0x3CD144); /* fmul dword ptr [0x3cd144] */
    fp_top() = fp_top() / (double)SMEM32(esp + 4); /* fidiv dword ptr [esp + 4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00320689; /* je: equal / zero */

loc_0032066C: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00320681u); RECOMP_ABI_CALL(0x0031FE40u, sub_0031FE40); /* call 0x0031FE40 */

loc_00320681: ;
    esp = esp + 8;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00320689: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003206A7; /* jp: parity */

loc_00320698: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = 1;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003206A7: ;
    edx = MEM32(esp + 0x20);
    MEM32(edx) = 0;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
