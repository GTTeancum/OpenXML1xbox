/**
 * X-Men Legends - Recompiled code chunk 76
 * Functions: 250 (0x0030AC80 - 0x0030FDD0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0030AC80
 * Original: 0x0030AC80 - 0x0030AD72 (242 bytes, 81 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AC80: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030AD5E; /* jl: less (signed <) */

loc_0030AC91: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0030AD5E; /* jg: greater (signed >) */

loc_0030AC9A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030ACA0u); RECOMP_ABI_CALL(0x0030AB60u, sub_0030AB60); /* call 0x0030AB60 */

loc_0030ACA0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030ACBB; /* jne: not equal / not zero */

loc_0030ACA6: ;
    PUSH32(esp, 0x42CBE0);
    PUSH32(esp, 0x0030ACB0u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030ACB0: ;
    esp = esp + 4;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0030ACBB: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x16;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi) = 0x476750;
    eax = MEM32(0x4767B8);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030ACDCu); RECOMP_ABI_CALL(0x0030ABB0u, sub_0030ABB0); /* call 0x0030ABB0 */

loc_0030ACDC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0030ACF5; /* jne: not equal / not zero */

loc_0030ACE4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030ACEAu); RECOMP_ABI_CALL(0x0030AB90u, sub_0030AB90); /* call 0x0030AB90 */

loc_0030ACEA: ;
    esp = esp + 4;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0030ACF5: ;
    ecx = MEM32(0x5BF81C);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    PUSH32(esp, 0x0030AD0Cu); RECOMP_ABI_CALL(0x0030A920u, sub_0030A920); /* call 0x0030A920 */

loc_0030AD0C: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = esi + 0x14;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 0x20));
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(eax + 0xC) = edx;
    MEM16(eax + 0x10) = LO16(ecx);
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x2C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0030AD4F; /* jne: not equal / not zero */

loc_0030AD41: ;
    MEM32(esi + 0x50) = 0;
    MEM32(esi + 0x54) = 0xFFFFFF81u;

loc_0030AD4F: ;
    MEM32(esi + 4) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0030AD5E: ;
    PUSH32(esp, 0x42CBAC);
    PUSH32(esp, 0x0030AD68u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030AD68: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0030AD80
 * Original: 0x0030AD80 - 0x0030ADF5 (117 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AD80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030AD80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030ADF3; /* je: equal / zero */

loc_0030AD8C: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030ADA1; /* jne: not equal / not zero */

loc_0030AD93: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42CC90;
    g_seh_ebp = ebp; sub_0030FC90(); return; /* tail jmp 0x0030FC90 */

loc_0030ADA1: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030ADABu); RECOMP_ICALL_SAFE(0x00370D0Cu, _icall_esp); /* manual call 0x00370D0C */
    }

loc_0030ADAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030ADBD; /* je: equal / zero */

loc_0030ADAF: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42CC50;
    g_seh_ebp = ebp; sub_0030FC90(); return; /* tail jmp 0x0030FC90 */

loc_0030ADBD: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030ADE6; /* jne: not equal / not zero */

loc_0030ADC3: ;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030ADCEu); RECOMP_ICALL_SAFE(0x003707D5u, _icall_esp); /* manual call 0x003707D5 */
    }

loc_0030ADCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030ADDF; /* je: equal / zero */

loc_0030ADD2: ;
    PUSH32(esp, 0x42CC14);
    PUSH32(esp, 0x0030ADDCu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030ADDC: ;
    esp = esp + 4;

loc_0030ADDF: ;
    MEM32(esi + 0x34) = 0;

loc_0030ADE6: ;
    ecx = MEM32(esi + 8);
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0030A970(); return; /* tail jmp 0x0030A970 */

loc_0030ADF3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AE00
 * Original: 0x0030AE00 - 0x0030AE29 (41 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AE00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030AE00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030AE28; /* je: equal / zero */

loc_0030AE0B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030AE1F; /* jne: not equal / not zero */

loc_0030AE12: ;
    MEM32(esp + 4) = 0x42CC90;
    g_seh_ebp = ebp; sub_0030FC90(); return; /* tail jmp 0x0030FC90 */

loc_0030AE1F: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030AA40(); return; /* tail jmp 0x0030AA40 */

loc_0030AE28: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030AE30
 * Original: 0x0030AE30 - 0x0030AEAB (123 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AE30: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030AE5Bu); RECOMP_ICALL_SAFE(0x003707F1u, _icall_esp); /* manual call 0x003707F1 */
    }

loc_0030AE5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030AE73; /* je: equal / zero */

loc_0030AE5F: ;
    PUSH32(esp, 0x42CCB4);
    PUSH32(esp, 0x0030AE69u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030AE69: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0030AE73: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030AE90u); RECOMP_ABI_CALL(0x0036F5D7u, sub_0036F5D7); /* call 0x0036F5D7 */

loc_0030AE90: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x28) = ecx;
    ecx = ZX16(MEM16(esi + 0x22));
    eax = MEM32(0x4767B8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, esi);
    eax = eax << 3;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0030AEB0
 * Original: 0x0030AEB0 - 0x0030AF18 (104 bytes, 48 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AEB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030AED4; /* je: equal / zero */

loc_0030AEC0: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030AEDA; /* jne: not equal / not zero */

loc_0030AEC7: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030AED1u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030AED1: ;
    esp = esp + 4;

loc_0030AED4: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030AEDA: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030AEE8; /* jne: not equal / not zero */

loc_0030AEE0: ;
    edi = 0; /* xor self */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030AEE8: ;
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030AEF8u); RECOMP_ICALL_SAFE(0x003707B5u, _icall_esp); /* manual call 0x003707B5 */
    }

loc_0030AEF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030AF12; /* jne: not equal / not zero */

loc_0030AEFC: ;
    ecx = ZX16(MEM16(esi + 0x22));
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    ecx = ecx >> 3;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x2C));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x2C)); }
    edi = eax;

loc_0030AF12: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AF20
 * Original: 0x0030AF20 - 0x0030AF64 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AF20: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030AF63; /* je: equal / zero */

loc_0030AF2B: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030AF40; /* jne: not equal / not zero */

loc_0030AF32: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030AF3Cu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030AF3C: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0030AF40: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EDEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2EDEF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030AF54; /* jle: less or equal (signed <=) */

loc_0030AF4B: ;
    eax = 0x2EDEF;
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

loc_0030AF54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030AF60; /* jge: greater or equal (signed >=) */

loc_0030AF5B: ;
    eax = 0xBC;

loc_0030AF60: ;
    MEM32(ecx + 0x18) = eax;

loc_0030AF63: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030AF70
 * Original: 0x0030AF70 - 0x0030AF96 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AF70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030AF8F; /* je: equal / zero */

loc_0030AF7B: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030AF92; /* jne: not equal / not zero */

loc_0030AF82: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030AF8Cu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030AF8C: ;
    esp = esp + 4;

loc_0030AF8F: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0030AF92: ;
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AFA0
 * Original: 0x0030AFA0 - 0x0030AFCA (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AFA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030AFC9; /* je: equal / zero */

loc_0030AFAB: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030AFC0; /* jne: not equal / not zero */

loc_0030AFB2: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030AFBCu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030AFBC: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0030AFC0: ;
    SET_LO16(ecx, MEM16(esp + 8));
    MEM16(eax + 0x22) = LO16(ecx);

loc_0030AFC9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030AFD0
 * Original: 0x0030AFD0 - 0x0030AFF7 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AFD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030AFEF; /* je: equal / zero */

loc_0030AFDB: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030AFF2; /* jne: not equal / not zero */

loc_0030AFE2: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030AFECu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030AFEC: ;
    esp = esp + 4;

loc_0030AFEF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0030AFF2: ;
    eax = ZX16(MEM16(eax + 0x22));
    esp += 4; return; /* ret */

}

/**
 * sub_0030B000
 * Original: 0x0030B000 - 0x0030B078 (120 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B000: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B077; /* je: equal / zero */

loc_0030B00B: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030B020; /* jne: not equal / not zero */

loc_0030B012: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030B01Cu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B01C: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0030B020: ;
    eax = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ecx + 0x3C) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030B039; /* jle: less or equal (signed <=) */

loc_0030B030: ;
    MEM32(ecx + 0x3C) = 0;
    goto loc_0030B047;

loc_0030B039: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B047; /* jge: greater or equal (signed >=) */

loc_0030B040: ;
    MEM32(ecx + 0x3C) = 0xFFFFD8F0u;

loc_0030B047: ;
    eax = MEM32(ecx + 0x4C);
    eax = eax + MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030B055; /* jle: less or equal (signed <=) */

loc_0030B051: ;
    eax = 0; /* xor self */
    goto loc_0030B061;

loc_0030B055: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B061; /* jge: greater or equal (signed >=) */

loc_0030B05C: ;
    eax = 0xFFFFD8F0u;

loc_0030B061: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030B068u); RECOMP_ICALL_SAFE(0x003706A9u, _icall_esp); /* manual call 0x003706A9 */
    }

loc_0030B068: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B077; /* je: equal / zero */

loc_0030B06C: ;
    PUSH32(esp, 0x42CCE0);
    PUSH32(esp, 0x0030B076u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B076: ;
    POP32(esp, ecx);

loc_0030B077: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B080
 * Original: 0x0030B080 - 0x0030B0AD (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B080: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B099; /* jne: not equal / not zero */

loc_0030B08A: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x4C) = ecx;
    esp += 4; return; /* ret */

loc_0030B099: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0030B0A9; /* jne: not equal / not zero */

loc_0030B0A2: ;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x48) = edx;

loc_0030B0A9: ;
    MEM32(eax + 0x4C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B0B0
 * Original: 0x0030B0B0 - 0x0030B0D2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030B0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B0B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B0CF; /* je: equal / zero */

loc_0030B0BB: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030B0CF; /* jne: not equal / not zero */

loc_0030B0C2: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030B0CCu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B0CC: ;
    esp = esp + 4;

loc_0030B0CF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030B0E0
 * Original: 0x0030B0E0 - 0x0030B13C (92 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B0E0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030B13B; /* je: equal / zero */

loc_0030B0EA: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B13B; /* je: equal / zero */

loc_0030B0F1: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030B106; /* jne: not equal / not zero */

loc_0030B0F8: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030B102u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B102: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0030B106: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF1u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B123; /* jge: greater or equal (signed >=) */

loc_0030B10F: ;
    eax = 0xFFFFFFF1u;
    PUSH32(esp, 0x42CD20);
    MEM32(ecx + 0x38) = eax;
    PUSH32(esp, 0x0030B121u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B121: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030B123: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030B12D; /* jle: less or equal (signed <=) */

loc_0030B128: ;
    eax = 0xF;

loc_0030B12D: ;
    PUSH32(esp, 0x42CD20);
    MEM32(ecx + 0x38) = eax;
    PUSH32(esp, 0x0030B13Au); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B13A: ;
    POP32(esp, ecx);

loc_0030B13B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B140
 * Original: 0x0030B140 - 0x0030B166 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B140: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B15F; /* je: equal / zero */

loc_0030B14B: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030B162; /* jne: not equal / not zero */

loc_0030B152: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030B15Cu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B15C: ;
    esp = esp + 4;

loc_0030B15F: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0030B162: ;
    eax = MEM32(eax + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_0030B170
 * Original: 0x0030B170 - 0x0030B1C3 (83 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B170: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B1C1; /* je: equal / zero */

loc_0030B17C: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030B192; /* jne: not equal / not zero */

loc_0030B183: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030B18Du); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B18D: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030B192: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030B19Du); RECOMP_ABI_CALL(0x0030AF20u, sub_0030AF20); /* call 0x0030AF20 */

loc_0030B19D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030B1A3u); RECOMP_ABI_CALL(0x0030AF70u, sub_0030AF70); /* call 0x0030AF70 */

loc_0030B1A3: ;
    ecx = MEM32(esi + 8);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030B1B0u); RECOMP_ICALL_SAFE(0x00370D0Cu, _icall_esp); /* manual call 0x00370D0C */
    }

loc_0030B1B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B1C1; /* je: equal / zero */

loc_0030B1B4: ;
    PUSH32(esp, 0x42CD60);
    PUSH32(esp, 0x0030B1BEu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B1BE: ;
    esp = esp + 4;

loc_0030B1C1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030B1D0
 * Original: 0x0030B1D0 - 0x0030B1EF (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B1D0(void)
{

loc_0030B1D0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
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
    esp += 4; return; /* ret */

}

/**
 * sub_0030B1F0
 * Original: 0x0030B1F0 - 0x0030B252 (98 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B1F0(void)
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

loc_0030B1F0: ;
    eax = MEM32(esp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030B24F; /* jle: less or equal (signed <=) */

loc_0030B209: ;
    PUSH32(esp, ebx);
    ebx = eax;
    /* nop */

loc_0030B210: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(0x3E20C8); /* fmul dword ptr [0x3e20c8] */
    PUSH32(esp, 0x0030B226u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030B226: ;
    MEM16(esi) = LO16(eax);
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x10) = ecx;
    esi = esi + 2;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(0x3E20C8); /* fmul dword ptr [0x3e20c8] */
    PUSH32(esp, 0x0030B242u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030B242: ;
    MEM16(esi) = LO16(eax);
    esi = esi + 2;
    edi = edi + 2;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030B210; /* jne: not equal / not zero */

loc_0030B24E: ;
    POP32(esp, ebx);

loc_0030B24F: ;
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
 * sub_0030B260
 * Original: 0x0030B260 - 0x0030B291 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B260: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030B28F; /* jle: less or equal (signed <=) */

loc_0030B278: ;
    goto loc_0030B280;

    /* nop */

loc_0030B280: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(esi) = LO16(edx);
    ecx = ecx + 2;
    esi = esi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030B280; /* jne: not equal / not zero */

loc_0030B28F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030B2A0
 * Original: 0x0030B2A0 - 0x0030B333 (147 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B2A0(void)
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

loc_0030B2A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = eax + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0030B2BF; /* jge: greater or equal (signed >=) */

loc_0030B2B8: ;
    ecx = 0xFFFFFFF1u;
    ecx = ecx - eax;

loc_0030B2BF: ;
    fp_push(MEMF(ecx * 4 + 0x42C5A8)); /* fld float */
    ecx = eax + -15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0030B2D8; /* jge: greater or equal (signed >=) */

loc_0030B2D1: ;
    ecx = 0xF;
    ecx = ecx - eax;

loc_0030B2D8: ;
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(ecx * 4 + 0x42C5A8)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030B330; /* jle: less or equal (signed <=) */

loc_0030B2F2: ;
    PUSH32(esp, ebx);
    ebx = eax;

loc_0030B2F5: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, 0x0030B309u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030B309: ;
    MEM16(esi) = LO16(eax);
    edx = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x14) = edx;
    esi = esi + 2;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0030B323u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030B323: ;
    MEM16(esi) = LO16(eax);
    esi = esi + 2;
    edi = edi + 2;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030B2F5; /* jne: not equal / not zero */

loc_0030B32F: ;
    POP32(esp, ebx);

loc_0030B330: ;
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
 * sub_0030B340
 * Original: 0x0030B340 - 0x0030B452 (274 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B340(void)
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

loc_0030B340: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x48);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = eax + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = esi;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0030B363; /* jge: greater or equal (signed >=) */

loc_0030B35C: ;
    ecx = 0xFFFFFFF1u;
    ecx = ecx - eax;

loc_0030B363: ;
    fp_push(MEMF(ecx * 4 + 0x42C5A8)); /* fld float */
    ecx = eax + -15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0030B37C; /* jge: greater or equal (signed >=) */

loc_0030B375: ;
    ecx = 0xF;
    ecx = ecx - eax;

loc_0030B37C: ;
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(ecx * 4 + 0x42C5A8)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030B44D; /* jle: less or equal (signed <=) */

loc_0030B39A: ;
    PUSH32(esp, ebp);
    ebp = eax;
    /* nop */

loc_0030B3A0: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx);
    edx = (uint32_t)(int32_t)SMEM16(edi);
    eax = (uint32_t)(int32_t)SMEM16(edi + 2);
    MEM32(esp + 0x1C) = ecx;
    edi = edi + 2;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edi = edi + 2;
    ebx = ebx + 2;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + (double)SMEM32(esp + 0x1C); /* fiadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_top() = fp_top() + (double)SMEM32(esp + 0x20); /* fiadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, 0x0030B3E6u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030B3E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030B3F4; /* jle: less or equal (signed <=) */

loc_0030B3ED: ;
    MEM16(esi) = 0x7FFF;
    goto loc_0030B40E;

loc_0030B3F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B402; /* jge: greater or equal (signed >=) */

loc_0030B3FB: ;
    MEM16(esi) = 0x8000;
    goto loc_0030B40E;

loc_0030B402: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, 0x0030B40Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030B40B: ;
    MEM16(esi) = LO16(eax);

loc_0030B40E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    esi = esi + 2;
    PUSH32(esp, 0x0030B41Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030B41A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030B428; /* jle: less or equal (signed <=) */

loc_0030B421: ;
    MEM16(esi) = 0x7FFF;
    goto loc_0030B442;

loc_0030B428: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B436; /* jge: greater or equal (signed >=) */

loc_0030B42F: ;
    MEM16(esi) = 0x8000;
    goto loc_0030B442;

loc_0030B436: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, 0x0030B43Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030B43F: ;
    MEM16(esi) = LO16(eax);

loc_0030B442: ;
    esi = esi + 2;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030B3A0; /* jne: not equal / not zero */

loc_0030B44C: ;
    POP32(esp, ebp);

loc_0030B44D: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0030B460
 * Original: 0x0030B460 - 0x0030B5E6 (390 bytes, 143 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030B460: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B5E1; /* je: equal / zero */

loc_0030B473: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030B48E; /* jne: not equal / not zero */

loc_0030B47B: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030B485u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B485: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0030B48E: ;
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(esi + 0x22));
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030B5DF; /* jl: less (signed <) */

loc_0030B4AC: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x28));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    edx = esp + 0x20;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0030B4E6u); RECOMP_ICALL_SAFE(0x003707F1u, _icall_esp); /* manual call 0x003707F1 */
    }

loc_0030B4E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0030B4F8; /* je: equal / zero */

loc_0030B4EB: ;
    PUSH32(esp, 0x42CCB4);
    PUSH32(esp, 0x0030B4F5u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B4F5: ;
    esp = esp + 4;

loc_0030B4F8: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B51C; /* jne: not equal / not zero */

loc_0030B500: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030B514u); RECOMP_ABI_CALL(0x0030B1D0u, sub_0030B1D0); /* call 0x0030B1D0 */

loc_0030B514: ;
    esp = esp + 0xC;
    goto loc_0030B5B4;

loc_0030B51C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B5B4; /* jne: not equal / not zero */

loc_0030B525: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 1 (32-bit) */
    eax = MEM32(esi + 0x44);
    if (CMP_NE(_fa, _fb)) goto loc_0030B553; /* jne: not equal / not zero */

loc_0030B52E: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    if (TEST_NZ(_fa, _fb)) goto loc_0030B54B; /* jne: not equal / not zero */

loc_0030B541: ;
    PUSH32(esp, 0x0030B546u); RECOMP_ABI_CALL(0x0030B1F0u, sub_0030B1F0); /* call 0x0030B1F0 */

loc_0030B546: ;
    esp = esp + 0xC;
    goto loc_0030B5B4;

loc_0030B54B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030B551u); RECOMP_ABI_CALL(0x0030B2A0u, sub_0030B2A0); /* call 0x0030B2A0 */

loc_0030B551: ;
    goto loc_0030B5B1;

loc_0030B553: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF1u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B58D; /* jne: not equal / not zero */

loc_0030B558: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B58D; /* jne: not equal / not zero */

loc_0030B55E: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0030B57F; /* jne: not equal / not zero */

loc_0030B574: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030B57Au); RECOMP_ABI_CALL(0x0030B260u, sub_0030B260); /* call 0x0030B260 */

loc_0030B57A: ;
    esp = esp + 0xC;
    goto loc_0030B5B4;

loc_0030B57F: ;
    edx = edx + 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030B588u); RECOMP_ABI_CALL(0x0030B260u, sub_0030B260); /* call 0x0030B260 */

loc_0030B588: ;
    esp = esp + 0xC;
    goto loc_0030B5B4;

loc_0030B58D: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_0030B5AC; /* jne: not equal / not zero */

loc_0030B5A5: ;
    PUSH32(esp, 0x0030B5AAu); RECOMP_ABI_CALL(0x0030B2A0u, sub_0030B2A0); /* call 0x0030B2A0 */

loc_0030B5AA: ;
    goto loc_0030B5B1;

loc_0030B5AC: ;
    PUSH32(esp, 0x0030B5B1u); RECOMP_ABI_CALL(0x0030B340u, sub_0030B340); /* call 0x0030B340 */

loc_0030B5B1: ;
    esp = esp + 0x10;

loc_0030B5B4: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0030B5CEu); RECOMP_ABI_CALL(0x0036F5D7u, sub_0036F5D7); /* call 0x0036F5D7 */

loc_0030B5CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B5DF; /* je: equal / zero */

loc_0030B5D2: ;
    PUSH32(esp, 0x42CD94);
    PUSH32(esp, 0x0030B5DCu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B5DC: ;
    esp = esp + 4;

loc_0030B5DF: ;
    POP32(esp, ebx);
    POP32(esp, ebp);

loc_0030B5E1: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B5F0
 * Original: 0x0030B5F0 - 0x0030B5FC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B5F0(void)
{

loc_0030B5F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x34) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B600
 * Original: 0x0030B600 - 0x0030B60D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030B600(void)
{

loc_0030B600: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030B610
 * Original: 0x0030B610 - 0x0030B616 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B610(void)
{

loc_0030B610: ;
    eax = 0x476738;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B620
 * Original: 0x0030B620 - 0x0030B63C (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B620(void)
{

loc_0030B620: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030B633u); RECOMP_ICALL_SAFE(0x00370D28u, _icall_esp); /* manual call 0x00370D28 */
    }

loc_0030B633: ;
    MEM32(esi + 0x10) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030B640
 * Original: 0x0030B640 - 0x0030B674 (52 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B640: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B672; /* je: equal / zero */

loc_0030B64C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030B652u); RECOMP_ABI_CALL(0x0030AE00u, sub_0030AE00); /* call 0x0030AE00 */

loc_0030B652: ;
    eax = MEM32(esi + 8);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B669; /* je: equal / zero */

loc_0030B65C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030B662u); RECOMP_ICALL_SAFE(0x0036F5DCu, _icall_esp); /* manual call 0x0036F5DC */
    }

loc_0030B662: ;
    MEM32(esi + 8) = 0;

loc_0030B669: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030B66Fu); RECOMP_ABI_CALL(0x0030AB90u, sub_0030AB90); /* call 0x0030AB90 */

loc_0030B66F: ;
    esp = esp + 4;

loc_0030B672: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030B680
 * Original: 0x0030B680 - 0x0030B74D (205 bytes, 65 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B680: ;
    esp = esp - 0x20;
    edx = MEM32(esp + 0x24);
    ecx = 0; /* xor self */
    MEM32(esp) = ecx;
    eax = 1;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = 2;
    MEM32(esp + 0x20) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0030B748; /* je: equal / zero */

loc_0030B6BF: ;
    eax = MEM32(esp + 0x30);
    ecx = eax + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(edx + 0x44) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0030B6D4; /* jge: greater or equal (signed >=) */

loc_0030B6CD: ;
    ecx = 0xFFFFFFF1u;
    ecx = ecx - eax;

loc_0030B6D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx * 4 + 0x42C628);
    ecx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0030B6E5; /* jge: greater or equal (signed >=) */

loc_0030B6E3: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_0030B6E5: ;
    esi = MEM32(ecx * 4 + 0x42C628);
    ecx = eax + -15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B6FA; /* jge: greater or equal (signed >=) */

loc_0030B6F3: ;
    ecx = 0xF;
    ecx = ecx - eax;

loc_0030B6FA: ;
    ecx = MEM32(ecx * 4 + 0x42C628);
    eax = esp + 0x14;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), ebx (32-bit) */
    MEM32(esp + 0x18) = edi;
    POP32(esp, edi);
    MEM32(esp + 0x24) = esi;
    MEM32(edx + 0x4C) = ebx;
    MEM32(esp + 8) = 3;
    MEM32(esp + 0x1C) = ecx;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0030B73A; /* jne: not equal / not zero */

loc_0030B727: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030B732u); RECOMP_ABI_CALL(0x0030B620u, sub_0030B620); /* call 0x0030B620 */

loc_0030B732: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0030B73A: ;
    ecx = MEM32(edx + 8);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030B748u); RECOMP_ICALL_SAFE(0x003706FDu, _icall_esp); /* manual call 0x003706FD */
    }

loc_0030B748: ;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B750
 * Original: 0x0030B750 - 0x0030B7B6 (102 bytes, 35 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B750: ;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    ecx = 0; /* xor self */
    edx = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0030B7B2; /* je: equal / zero */

loc_0030B780: ;
    edx = esp + 8;
    MEM32(esp + 4) = edx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ecx (32-bit) */
    MEM32(esp) = 2;
    if (CMP_NE(_fa, _fb)) goto loc_0030B7A5; /* jne: not equal / not zero */

loc_0030B794: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030B79Eu); RECOMP_ABI_CALL(0x0030B620u, sub_0030B620); /* call 0x0030B620 */

loc_0030B79E: ;
    esp = esp + 8;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0030B7A5: ;
    eax = MEM32(eax + 8);
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030B7B2u); RECOMP_ICALL_SAFE(0x003706FDu, _icall_esp); /* manual call 0x003706FD */
    }

loc_0030B7B2: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B7C0
 * Original: 0x0030B7C0 - 0x0030B932 (370 bytes, 117 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B7C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030B7C0: ;
    esp = esp - 0x28;
    ecx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 0xC);
    eax = 1;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = 4;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = 5;
    MEM32(esp + 0x28) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0030B92D; /* je: equal / zero */

loc_0030B80B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030B822; /* je: equal / zero */

loc_0030B810: ;
    PUSH32(esp, 0x42CDC4);
    PUSH32(esp, 0x0030B81Au); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B81A: ;
    esp = esp + 4;
    POP32(esp, ebp);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0030B822: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + 0x7F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0030B837; /* jge: greater or equal (signed >=) */

loc_0030B830: ;
    esi = 0xFFFFFF81u;
    esi = esi - eax;

loc_0030B837: ;
    ecx = eax + -127;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B845; /* jge: greater or equal (signed >=) */

loc_0030B83E: ;
    ecx = 0x7F;
    ecx = ecx - eax;

loc_0030B845: ;
    eax = MEM32(esp + 0x44);
    edx = eax + 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B857; /* jge: greater or equal (signed >=) */

loc_0030B850: ;
    edx = 0xFFFFFF81u;
    edx = edx - eax;

loc_0030B857: ;
    edi = eax + -127;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B865; /* jge: greater or equal (signed >=) */

loc_0030B85E: ;
    edi = 0x7F;
    edi = edi - eax;

loc_0030B865: ;
    eax = MEM32(esi * 4 + 0x42C6A8);
    edx = MEM32(edx * 4 + 0x42C6A8);
    ecx = MEM32(ecx * 4 + 0x42C6A8);
    esi = edx + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    ebx = edx + ecx;
    edx = MEM32(edi * 4 + 0x42C6A8);
    edi = edx + eax;
    eax = edx + ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0030B895; /* jle: less or equal (signed <=) */

loc_0030B891: ;
    esi = 0; /* xor self */
    goto loc_0030B8A2;

loc_0030B895: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B8A2; /* jge: greater or equal (signed >=) */

loc_0030B89D: ;
    esi = 0xFFFFD8F0u;

loc_0030B8A2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030B8AA; /* jle: less or equal (signed <=) */

loc_0030B8A6: ;
    ebx = 0; /* xor self */
    goto loc_0030B8B7;

loc_0030B8AA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B8B7; /* jge: greater or equal (signed >=) */

loc_0030B8B2: ;
    ebx = 0xFFFFD8F0u;

loc_0030B8B7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030B8BF; /* jle: less or equal (signed <=) */

loc_0030B8BB: ;
    edi = 0; /* xor self */
    goto loc_0030B8CC;

loc_0030B8BF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B8CC; /* jge: greater or equal (signed >=) */

loc_0030B8C7: ;
    edi = 0xFFFFD8F0u;

loc_0030B8CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030B8D4; /* jle: less or equal (signed <=) */

loc_0030B8D0: ;
    eax = 0; /* xor self */
    goto loc_0030B8E0;

loc_0030B8D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030B8E0; /* jge: greater or equal (signed >=) */

loc_0030B8DB: ;
    eax = 0xFFFFD8F0u;

loc_0030B8E0: ;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebp (32-bit) */
    MEM32(esp + 0x2C) = edi;
    POP32(esp, edi);
    MEM32(esp + 0x18) = esi;
    edx = esp + 0x14;
    POP32(esp, esi);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0xC) = edx;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0030B91F; /* jne: not equal / not zero */

loc_0030B90C: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030B917u); RECOMP_ABI_CALL(0x0030B620u, sub_0030B620); /* call 0x0030B620 */

loc_0030B917: ;
    esp = esp + 8;
    POP32(esp, ebp);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0030B91F: ;
    eax = MEM32(eax + 8);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030B92Du); RECOMP_ICALL_SAFE(0x003706FDu, _icall_esp); /* manual call 0x003706FD */
    }

loc_0030B92D: ;
    POP32(esp, ebp);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0030B940
 * Original: 0x0030B940 - 0x0030B982 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B940: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    edx = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 0x30) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0030B980; /* je: equal / zero */

loc_0030B958: ;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B980; /* jne: not equal / not zero */

loc_0030B95D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B977; /* jne: not equal / not zero */

loc_0030B961: ;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B977; /* jne: not equal / not zero */

loc_0030B966: ;
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030B972u); RECOMP_ABI_CALL(0x0030B680u, sub_0030B680); /* call 0x0030B680 */

loc_0030B972: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030B977: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030B97Du); RECOMP_ABI_CALL(0x0030B750u, sub_0030B750); /* call 0x0030B750 */

loc_0030B97D: ;
    esp = esp + 4;

loc_0030B980: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030B990
 * Original: 0x0030B990 - 0x0030B9DB (75 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B990(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030B990: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030B9AF; /* je: equal / zero */

loc_0030B99B: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030B9B0; /* jne: not equal / not zero */

loc_0030B9A2: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030B9ACu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030B9AC: ;
    esp = esp + 4;

loc_0030B9AF: ;
    esp += 4; return; /* ret */

loc_0030B9B0: ;
    edx = MEM32(eax + 0xC);
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030B9AF; /* je: equal / zero */

loc_0030B9BC: ;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), ecx (32-bit) */
    MEM32(eax + 0x40) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0030B9D2; /* jne: not equal / not zero */

loc_0030B9C4: ;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030B9D2; /* jne: not equal / not zero */

loc_0030B9C9: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030B680(); return; /* tail jmp 0x0030B680 */

loc_0030B9D2: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030B080(); return; /* tail jmp 0x0030B080 */

}

/**
 * sub_0030B9E0
 * Original: 0x0030B9E0 - 0x0030BA17 (55 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030B9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030B9E0: ;
    eax = MEM32(esp + 8);
    eax = eax - 5;
    if ((eax == 0)) goto loc_0030BA04; /* je: equal / zero */

loc_0030B9E9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030BA16; /* jne: not equal / not zero */

loc_0030B9EC: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030BA00u); RECOMP_ABI_CALL(0x0030B7C0u, sub_0030B7C0); /* call 0x0030B7C0 */

loc_0030BA00: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0030BA04: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030BA13u); RECOMP_ABI_CALL(0x0030B170u, sub_0030B170); /* call 0x0030B170 */

loc_0030BA13: ;
    esp = esp + 8;

loc_0030BA16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BA20
 * Original: 0x0030BA20 - 0x0030BA54 (52 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BA20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030BA20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030BA3F; /* je: equal / zero */

loc_0030BA2B: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030BA40; /* jne: not equal / not zero */

loc_0030BA32: ;
    PUSH32(esp, 0x42CC90);
    PUSH32(esp, 0x0030BA3Cu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030BA3C: ;
    esp = esp + 4;

loc_0030BA3F: ;
    esp += 4; return; /* ret */

loc_0030BA40: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x30) = ecx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030B940(); return; /* tail jmp 0x0030B940 */

}

/**
 * sub_0030BA60
 * Original: 0x0030BA60 - 0x0030BA94 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BA60: ;
    eax = MEM32(0x5BF824);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030BA93; /* je: equal / zero */

loc_0030BA69: ;
    ecx = MEM32(0x5BF828);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030BA72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030BA72: ;
    eax = MEM32(0x5BFA24);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030BA88; /* jne: not equal / not zero */

loc_0030BA7E: ;
    edx = MEM32(esp + 4);
    MEM32(0x5BFA28) = edx;

loc_0030BA88: ;
    eax = MEM32(0x5BFA24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5BFA24) = eax;

loc_0030BA93: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BAA0
 * Original: 0x0030BAA0 - 0x0030BAA9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BAA0(void)
{

loc_0030BAA0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0030BAA7u); RECOMP_ABI_CALL(0x0030BA60u, sub_0030BA60); /* call 0x0030BA60 */

loc_0030BAA7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030BAB0
 * Original: 0x0030BAB0 - 0x0030BAB9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BAB0(void)
{

loc_0030BAB0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0030BAB7u); RECOMP_ABI_CALL(0x0030BA60u, sub_0030BA60); /* call 0x0030BA60 */

loc_0030BAB7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030BAC0
 * Original: 0x0030BAC0 - 0x0030BAC9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BAC0(void)
{

loc_0030BAC0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0030BAC7u); RECOMP_ABI_CALL(0x0030BA60u, sub_0030BA60); /* call 0x0030BA60 */

loc_0030BAC7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030BAD0
 * Original: 0x0030BAD0 - 0x0030BB12 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BAD0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x20;
    edi = 0x5EF640;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5EF640);
    PUSH32(esp, 0x0030BAF3u); RECOMP_ABI_CALL(0x00342A40u, sub_00342A40); /* call 0x00342A40 */

loc_0030BAF3: ;
    eax = MEM32(0x5BF9B8);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0030BB11; /* je: equal / zero */

loc_0030BB00: ;
    edx = MEM32(0x5BF9BC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5EF640);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030BB0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030BB0E: ;
    esp = esp + 8;

loc_0030BB11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BB20
 * Original: 0x0030BB20 - 0x0030BB4F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BB20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5EF640);
    PUSH32(esp, 0x0030BB31u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0030BB31: ;
    eax = MEM32(0x5BF9B8);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030BB4E; /* je: equal / zero */

loc_0030BB3D: ;
    ecx = MEM32(0x5BF9BC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5EF640);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030BB4Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030BB4B: ;
    esp = esp + 8;

loc_0030BB4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BB50
 * Original: 0x0030BB50 - 0x0030BB6D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BB50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030BB50: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx * 8 + 0x5BF9C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030BB6C; /* je: equal / zero */

loc_0030BB5F: ;
    ecx = MEM32(ecx * 8 + 0x5BF9C4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_0030BB6C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BB70
 * Original: 0x0030BB70 - 0x0030BB84 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BB70(void)
{

loc_0030BB70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x5BF824) = eax;
    MEM32(0x5BF828) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BB90
 * Original: 0x0030BB90 - 0x0030BBA4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BB90(void)
{

loc_0030BB90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x5BF82C) = eax;
    MEM32(0x5BF830) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BBB0
 * Original: 0x0030BBB0 - 0x0030BC1A (106 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BBB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edi + edi * 2;
    esi = esi << 4;
    ebx = 0; /* xor self */
    esi = esi + 0x5BF838;
    MEM32(esp + 0x10) = 6;
    /* nop */

loc_0030BBD0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030BBF7; /* je: equal / zero */

loc_0030BBD6: ;
    ecx = MEM32(esi + 4);
    MEM32(edi * 4 + 0x5EF620) = 1;
    { /* XML1 movie callback contract */
    uint32_t cb_sp=g_esp, cb_si=g_esi, cb_di=g_edi, cb_bx=g_ebx, cb_target=g_eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030BBE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }
    if (g_esp != cb_sp-4 || g_esi != cb_si || g_edi != cb_di || g_ebx != cb_bx) {
        fprintf(stderr,"[FATAL CALLBACK ABI] target=%08X esp=%08X expected=%08X esi=%08X/%08X edi=%08X/%08X ebx=%08X/%08X\n",
            cb_target,g_esp,cb_sp-4,g_esi,cb_si,g_edi,cb_di,g_ebx,cb_bx);
        _exit(4);
    }
    }

loc_0030BBE7: ;
    esp = esp + 4;
    ebx = ebx | eax;
    MEM32(edi * 4 + 0x5EF620) = 0;

loc_0030BBF7: ;
    eax = MEM32(esp + 0x10);
    esi = esi + 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0030BBD0; /* jne: not equal / not zero */

loc_0030BC05: ;
    edx = MEM32(edi * 4 + 0x5EF6C0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi * 4 + 0x5EF6C0) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030BC20
 * Original: 0x0030BC20 - 0x0030BC2B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BC20(void)
{

loc_0030BC20: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0030BC27u); RECOMP_ABI_CALL(0x0030BBB0u, sub_0030BBB0); /* call 0x0030BBB0 */

loc_0030BC27: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BC30
 * Original: 0x0030BC30 - 0x0030BC3B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BC30(void)
{

loc_0030BC30: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0030BC37u); RECOMP_ABI_CALL(0x0030BBB0u, sub_0030BBB0); /* call 0x0030BBB0 */

loc_0030BC37: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BC40
 * Original: 0x0030BC40 - 0x0030BC4B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BC40(void)
{

loc_0030BC40: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0030BC47u); RECOMP_ABI_CALL(0x0030BBB0u, sub_0030BBB0); /* call 0x0030BBB0 */

loc_0030BC47: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BC50
 * Original: 0x0030BC50 - 0x0030BC5B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BC50(void)
{

loc_0030BC50: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x0030BC57u); RECOMP_ABI_CALL(0x0030BBB0u, sub_0030BBB0); /* call 0x0030BBB0 */

loc_0030BC57: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BC60
 * Original: 0x0030BC60 - 0x0030BCCB (107 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BC60: ;
    eax = 0; /* xor self */
    MEM32(0x5EF620) = eax;
    MEM32(0x5EF624) = eax;
    MEM32(0x5EF628) = eax;
    MEM32(0x5EF62C) = eax;
    MEM32(0x5EF630) = eax;
    MEM32(0x5EF634) = eax;
    ecx = 0; /* xor self */
    MEM32(0x5EF638) = eax;
    edx = 0; /* xor self */
    MEM32(0x5BF824) = ecx;
    MEM32(0x5BF82C) = edx;
    MEM32(0x5EF63C) = eax;
    MEM32(0x5BF828) = ecx;
    MEM32(0x5BF830) = edx;
    eax = 0x5EF6C0;
    goto loc_0030BCB0;

    /* nop */

loc_0030BCB0: ;
    MEM32(eax) = 0;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5EF6D8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5EF6D8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030BCB0; /* jl: less (signed <) */

loc_0030BCC0: ;
    MEM32(0x5BF820) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BCD0
 * Original: 0x0030BCD0 - 0x0030BCEA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BCD0: ;
    eax = MEM32(0x5BFA20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030BCDE; /* jne: not equal / not zero */

loc_0030BCD9: ;
    PUSH32(esp, 0x0030BCDEu); RECOMP_ABI_CALL(0x0030BC60u, sub_0030BC60); /* call 0x0030BC60 */

loc_0030BCDE: ;
    eax = MEM32(0x5BFA20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5BFA20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BCF0
 * Original: 0x0030BCF0 - 0x0030BD11 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BCF0: ;
    eax = MEM32(0x5BFA20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x5BFA20) = eax;
    if ((_fa != 0)) goto loc_0030BD10; /* jne: not equal / not zero */

loc_0030BCFD: ;
    PUSH32(esp, 0x0030BD02u); RECOMP_ABI_CALL(0x0030BC60u, sub_0030BC60); /* call 0x0030BC60 */

loc_0030BD02: ;
    ecx = 0; /* xor self */
    MEM32(0x5BF9B8) = ecx;
    MEM32(0x5BF9BC) = ecx;

loc_0030BD10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BD20
 * Original: 0x0030BD20 - 0x0030BD3B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BD20: ;
    eax = MEM32(0x5BF820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030BD2C; /* je: equal / zero */

loc_0030BD29: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0030BD2C: ;
    eax = MEM32(esp + 4);
    MEM32(0x5BF820) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BD40
 * Original: 0x0030BD40 - 0x0030BD92 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BD40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030BD40: ;
    eax = MEM32(0x5BF82C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030BD91; /* je: equal / zero */

loc_0030BD49: ;
    eax = MEM32(0x5BFA24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x5BFA24) = eax;
    if ((_fa != 0)) goto loc_0030BD81; /* jne: not equal / not zero */

loc_0030BD56: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(0x5BFA28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5BFA28), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030BD77; /* je: equal / zero */

loc_0030BD62: ;
    ecx = MEM32(0x5BFA28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42CE28);
    PUSH32(esp, 0x0030BD74u); RECOMP_ABI_CALL(0x0030BAD0u, sub_0030BAD0); /* call 0x0030BAD0 */

loc_0030BD74: ;
    esp = esp + 0xC;

loc_0030BD77: ;
    MEM32(0x5BFA28) = 0;

loc_0030BD81: ;
    edx = MEM32(0x5BF830);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5BF82C)); return; /* indirect tail jmp */

loc_0030BD91: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030BDA0
 * Original: 0x0030BDA0 - 0x0030BDA9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BDA0(void)
{

loc_0030BDA0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0030BDA7u); XML1_CHECK_CDECL0(0x0030BD40u, sub_0030BD40); /* call 0x0030BD40 */

loc_0030BDA7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030BDB0
 * Original: 0x0030BDB0 - 0x0030BDB9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BDB0(void)
{

loc_0030BDB0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0030BDB7u); RECOMP_ABI_CALL(0x0030BD40u, sub_0030BD40); /* call 0x0030BD40 */

loc_0030BDB7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030BDC0
 * Original: 0x0030BDC0 - 0x0030BDC9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BDC0(void)
{

loc_0030BDC0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0030BDC7u); RECOMP_ABI_CALL(0x0030BD40u, sub_0030BD40); /* call 0x0030BD40 */

loc_0030BDC7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030BDD0
 * Original: 0x0030BDD0 - 0x0030BE29 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BDD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030BDD6u); RECOMP_ABI_CALL(0x0030BAA0u, sub_0030BAA0); /* call 0x0030BAA0 */

loc_0030BDD6: ;
    eax = MEM32(esp + 8);
    eax = eax + eax * 2;
    eax = eax << 4;
    esi = 0; /* xor self */
    eax = eax + 0x5BF838;

loc_0030BDE7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030BDF7; /* je: equal / zero */

loc_0030BDEC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030BDE7; /* jl: less (signed <) */

loc_0030BDF5: ;
    goto loc_0030BE04;

loc_0030BDF7: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;

loc_0030BE04: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030BE16; /* jne: not equal / not zero */

loc_0030BE09: ;
    PUSH32(esp, 0x42CE70);
    PUSH32(esp, 0x0030BE13u); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030BE13: ;
    esp = esp + 4;

loc_0030BE16: ;
    PUSH32(esp, 0x0030BE1Bu); RECOMP_ABI_CALL(0x0030BDA0u, sub_0030BDA0); /* call 0x0030BDA0 */

loc_0030BE1B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030BE25; /* jne: not equal / not zero */

loc_0030BE20: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030BE25: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030BE30
 * Original: 0x0030BE30 - 0x0030BE77 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BE30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030BE30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0030BE3E; /* jl: less (signed <) */

loc_0030BE39: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030BE4B; /* jl: less (signed <) */

loc_0030BE3E: ;
    PUSH32(esp, 0x42CEA0);
    PUSH32(esp, 0x0030BE48u); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030BE48: ;
    esp = esp + 4;

loc_0030BE4B: ;
    PUSH32(esp, 0x0030BE50u); RECOMP_ABI_CALL(0x0030BAA0u, sub_0030BAA0); /* call 0x0030BAA0 */

loc_0030BE50: ;
    eax = MEM32(esp + 8);
    eax = eax + eax * 2;
    eax = esi + eax * 2;
    eax = eax << 3;
    MEM32(eax + 0x5BF838) = 0;
    MEM32(eax + 0x5BF83C) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0030BDA0(); return; /* tail jmp 0x0030BDA0 */

}

/**
 * sub_0030BE80
 * Original: 0x0030BE80 - 0x0030BEF4 (116 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BE80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030BE80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0030BE8F; /* jl: less (signed <) */

loc_0030BE8A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030BE9C; /* jl: less (signed <) */

loc_0030BE8F: ;
    PUSH32(esp, 0x42CF20);
    PUSH32(esp, 0x0030BE99u); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030BE99: ;
    esp = esp + 4;

loc_0030BE9C: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0030BEA9; /* jl: less (signed <) */

loc_0030BEA4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030BEB6; /* jl: less (signed <) */

loc_0030BEA9: ;
    PUSH32(esp, 0x42CEF8);
    PUSH32(esp, 0x0030BEB3u); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030BEB3: ;
    esp = esp + 4;

loc_0030BEB6: ;
    PUSH32(esp, 0x0030BEBBu); RECOMP_ABI_CALL(0x0030BAA0u, sub_0030BAA0); /* call 0x0030BAA0 */

loc_0030BEBB: ;
    eax = esi + esi * 2;
    esi = edi + eax * 2;
    eax = MEM32(esi * 8 + 0x5BF838);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = esi * 8 + 0x5BF838;
    if (TEST_Z(_fa, _fb)) goto loc_0030BEE0; /* je: equal / zero */

loc_0030BED3: ;
    PUSH32(esp, 0x42CEC0);
    PUSH32(esp, 0x0030BEDDu); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030BEDD: ;
    esp = esp + 4;

loc_0030BEE0: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0030BDA0(); return; /* tail jmp 0x0030BDA0 */

}

/**
 * sub_0030BF00
 * Original: 0x0030BF00 - 0x0030BF24 (36 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BF00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030BF00: ;
    PUSH32(esp, 0x0030BF05u); RECOMP_ABI_CALL(0x0030BAA0u, sub_0030BAA0); /* call 0x0030BAA0 */

loc_0030BF05: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax * 8 + 0x5BF9C0) = ecx;
    MEM32(eax * 8 + 0x5BF9C4) = edx;
    g_seh_ebp = ebp; sub_0030BDA0(); return; /* tail jmp 0x0030BDA0 */

}

/**
 * sub_0030BF30
 * Original: 0x0030BF30 - 0x0030BF60 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BF30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030BF30: ;
    eax = MEM32(0x5BF820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030BF3B; /* je: equal / zero */

loc_0030BF39: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_0030BF3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030BF41u); RECOMP_ABI_CALL(0x0030BAA0u, sub_0030BAA0); /* call 0x0030BAA0 */

loc_0030BF41: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax) = 1;
    esi = edx;
    PUSH32(esp, 0x0030BF5Cu); RECOMP_ABI_CALL(0x0030BDA0u, sub_0030BDA0); /* call 0x0030BDA0 */

loc_0030BF5C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030BF60
 * Original: 0x0030BF60 - 0x0030BF7F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BF60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030BF60: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030BF7D; /* je: equal / zero */

loc_0030BF69: ;
    PUSH32(esp, 0x0030BF6Eu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030BF6E: ;
    ecx = 0xC;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030BF7D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030BF80
 * Original: 0x0030BF80 - 0x0030C0B6 (310 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030BF80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030BF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(ebx + 2));
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030BFAE; /* jle: less or equal (signed <=) */

loc_0030BF9A: ;
    ecx = ebx + 0x14;
    /* nop */

loc_0030BFA0: ;
    MEM32(ecx) = edx;
    esi = (uint32_t)(int32_t)SMEM8(ebx + 2);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030BFA0; /* jl: less (signed <) */

loc_0030BFAE: ;
    SET_LO8(eax, MEM8(ebx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(ebx + 0x2C) = edx;
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030C02F; /* jle: less or equal (signed <=) */

loc_0030BFBC: ;
    eax = ebx + 4;
    MEM32(esp + 0x14) = eax;

loc_0030BFC3: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ecx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0030BFCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030BFCF: ;
    edi = MEM32(esi);
    esp = esp + 4;
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0030BFDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030BFDF: ;
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 0x18); PUSH32(esp, 0x0030BFE9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030BFE9: ;
    ecx = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x28);
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
    eax = MEM32(esi);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0030C00Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C00E: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    edx = edx + 4;
    MEM32(esp + 0x30) = edx;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 2);
    esp = esp + 0x1C;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0030BFC3; /* jl: less (signed <) */

loc_0030C02D: ;
    edx = 0; /* xor self */

loc_0030C02F: ;
    SET_LO8(eax, MEM8(ebx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030C0AB; /* jle: less or equal (signed <=) */

loc_0030C03A: ;
    eax = ebx + 0xC;
    MEM32(esp + 0x14) = eax;

loc_0030C041: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ecx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0030C04Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C04D: ;
    edi = MEM32(esi);
    esp = esp + 4;
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0030C05Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C05D: ;
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 0x18); PUSH32(esp, 0x0030C067u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C067: ;
    ecx = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x28);
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
    eax = MEM32(esi);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0030C08Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C08C: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    edx = edx + 4;
    MEM32(esp + 0x30) = edx;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 2);
    esp = esp + 0x1C;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0030C041; /* jl: less (signed <) */

loc_0030C0AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 1) = 2;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C0C0
 * Original: 0x0030C0C0 - 0x0030C0CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C0C0(void)
{

loc_0030C0C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0030C0D0
 * Original: 0x0030C0D0 - 0x0030C0D8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030C0D0(void)
{

loc_0030C0D0: ;
    PUSH32(esp, 0x0030C0D5u); RECOMP_ABI_CALL(0x0030DB50u, sub_0030DB50); /* call 0x0030DB50 */

loc_0030C0D5: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030C0E0
 * Original: 0x0030C0E0 - 0x0030C0E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030C0E0(void)
{

loc_0030C0E0: ;
    PUSH32(esp, 0x0030C0E5u); RECOMP_ABI_CALL(0x00305F70u, sub_00305F70); /* call 0x00305F70 */

loc_0030C0E5: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030C0F0
 * Original: 0x0030C0F0 - 0x0030C0F8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030C0F0(void)
{

loc_0030C0F0: ;
    PUSH32(esp, 0x0030C0F5u); RECOMP_ABI_CALL(0x0030FF50u, sub_0030FF50); /* call 0x0030FF50 */

loc_0030C0F5: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030C100
 * Original: 0x0030C100 - 0x0030C16C (108 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C100: ;
    MEM32(0x5BFA30) = MEM32(0x5BFA30) - 1;
    _fa = (uint32_t)(MEM32(0x5BFA30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030C16B; /* jne: not equal / not zero */

loc_0030C108: ;
    PUSH32(esp, 0x0030C10Du); RECOMP_ABI_CALL(0x0030D780u, sub_0030D780); /* call 0x0030D780 */

loc_0030C10D: ;
    PUSH32(esp, 0x0030C112u); RECOMP_ABI_CALL(0x0030F940u, sub_0030F940); /* call 0x0030F940 */

loc_0030C112: ;
    PUSH32(esp, 0x0030C117u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0030C117: ;
    PUSH32(esp, 0x0030C11Cu); RECOMP_ABI_CALL(0x00310470u, sub_00310470); /* call 0x00310470 */

loc_0030C11C: ;
    PUSH32(esp, 0x0030C121u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030C121: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0030C12Au); RECOMP_ABI_CALL(0x0030BE30u, sub_0030BE30); /* call 0x0030BE30 */

loc_0030C12A: ;
    eax = MEM32(0x5BFA3C);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0030C137u); RECOMP_ABI_CALL(0x0030BE30u, sub_0030BE30); /* call 0x0030BE30 */

loc_0030C137: ;
    ecx = MEM32(0x5BFA38);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0030C145u); RECOMP_ABI_CALL(0x0030BE30u, sub_0030BE30); /* call 0x0030BE30 */

loc_0030C145: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x0030C14Du); RECOMP_ABI_CALL(0x0030BCF0u, sub_0030BCF0); /* call 0x0030BCF0 */

loc_0030C14D: ;
    PUSH32(esp, 0x0030C152u); RECOMP_ABI_CALL(0x0030C2B0u, sub_0030C2B0); /* call 0x0030C2B0 */

loc_0030C152: ;
    PUSH32(esp, 0x0030C157u); RECOMP_ABI_CALL(0x003073F0u, sub_003073F0); /* call 0x003073F0 */

loc_0030C157: ;
    PUSH32(esp, 0x0030C15Cu); RECOMP_ABI_CALL(0x0030F550u, sub_0030F550); /* call 0x0030F550 */

loc_0030C15C: ;
    PUSH32(esp, 0x0030C161u); RECOMP_ABI_CALL(0x0030EF60u, sub_0030EF60); /* call 0x0030EF60 */

loc_0030C161: ;
    PUSH32(esp, 0x0030C166u); RECOMP_ABI_CALL(0x0030FFD0u, sub_0030FFD0); /* call 0x0030FFD0 */

loc_0030C166: ;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030C16B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030C170
 * Original: 0x0030C170 - 0x0030C18B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030C170(void)
{

loc_0030C170: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030C177u); RECOMP_ABI_CALL(0x0030C0E0u, sub_0030C0E0); /* call 0x0030C0E0 */

loc_0030C177: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030C17Eu); RECOMP_ABI_CALL(0x0030C0F0u, sub_0030C0F0); /* call 0x0030C0F0 */

loc_0030C17E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030C185u); RECOMP_ABI_CALL(0x0030C0D0u, sub_0030C0D0); /* call 0x0030C0D0 */

loc_0030C185: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030C190
 * Original: 0x0030C190 - 0x0030C288 (248 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030C190: ;
    eax = MEM32(0x42CF44);
    eax = MEM32(0x5BFA30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030C281; /* jne: not equal / not zero */

loc_0030C1A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030C1A8u); RECOMP_ABI_CALL(0x0030D760u, sub_0030D760); /* call 0x0030D760 */

loc_0030C1A8: ;
    PUSH32(esp, 0x0030C1ADu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030C1AD: ;
    PUSH32(esp, 0x0030C1B2u); RECOMP_ABI_CALL(0x0030FFB0u, sub_0030FFB0); /* call 0x0030FFB0 */

loc_0030C1B2: ;
    PUSH32(esp, 0x0030C1B7u); RECOMP_ABI_CALL(0x0030EF30u, sub_0030EF30); /* call 0x0030EF30 */

loc_0030C1B7: ;
    PUSH32(esp, 0x0030C1BCu); RECOMP_ABI_CALL(0x0030F530u, sub_0030F530); /* call 0x0030F530 */

loc_0030C1BC: ;
    PUSH32(esp, 0x0030C1C1u); RECOMP_ABI_CALL(0x003073F0u, sub_003073F0); /* call 0x003073F0 */

loc_0030C1C1: ;
    PUSH32(esp, 0x0030C1C6u); RECOMP_ABI_CALL(0x0030CE60u, sub_0030CE60); /* call 0x0030CE60 */

loc_0030C1C6: ;
    PUSH32(esp, 0x0030C1CBu); RECOMP_ABI_CALL(0x0030C290u, sub_0030C290); /* call 0x0030C290 */

loc_0030C1CB: ;
    PUSH32(esp, 0x0030C1D0u); RECOMP_ABI_CALL(0x0030F8A0u, sub_0030F8A0); /* call 0x0030F8A0 */

loc_0030C1D0: ;
    PUSH32(esp, 0x0030C1D5u); RECOMP_ABI_CALL(0x0030D770u, sub_0030D770); /* call 0x0030D770 */

loc_0030C1D5: ;
    PUSH32(esp, 0x0030C1DAu); RECOMP_ABI_CALL(0x00310420u, sub_00310420); /* call 0x00310420 */

loc_0030C1DA: ;
    PUSH32(esp, 0x0030C1DFu); RECOMP_ABI_CALL(0x0030BCD0u, sub_0030BCD0); /* call 0x0030BCD0 */

loc_0030C1DF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3050A0);
    PUSH32(esp, 0x0030C1EBu); RECOMP_ABI_CALL(0x0030D790u, sub_0030D790); /* call 0x0030D790 */

loc_0030C1EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3050A0);
    PUSH32(esp, 0x0030C1F7u); RECOMP_ABI_CALL(0x003104C0u, sub_003104C0); /* call 0x003104C0 */

loc_0030C1F7: ;
    eax = 0; /* xor self */
    ecx = 0x300;
    edi = 0x5EEA20;
    esp = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x0030C20Du); RECOMP_ABI_CALL(0x003052E0u, sub_003052E0); /* call 0x003052E0 */

loc_0030C20D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0030C252; /* jne: not equal / not zero */

loc_0030C213: ;
    _fa = (uint32_t)(MEM32(0x4767CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4767CC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030C252; /* jne: not equal / not zero */

loc_0030C21C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30C0E0);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0030C22Cu); RECOMP_ABI_CALL(0x0030BE80u, sub_0030BE80); /* call 0x0030BE80 */

loc_0030C22C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30C0F0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0030C23Au); RECOMP_ABI_CALL(0x0030BDD0u, sub_0030BDD0); /* call 0x0030BDD0 */

loc_0030C23A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30C0D0);
    PUSH32(esp, 5);
    MEM32(0x5BFA3C) = eax;
    PUSH32(esp, 0x0030C24Du); RECOMP_ABI_CALL(0x0030BDD0u, sub_0030BDD0); /* call 0x0030BDD0 */

loc_0030C24D: ;
    esp = esp + 0x28;
    goto loc_0030C263;

loc_0030C252: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30C170);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0030C260u); RECOMP_ABI_CALL(0x0030BDD0u, sub_0030BDD0); /* call 0x0030BDD0 */

loc_0030C260: ;
    esp = esp + 0xC;

loc_0030C263: ;
    PUSH32(esp, 0x3C);
    MEM32(0x5BFA38) = eax;
    MEM32(0x5BFA40) = 0;
    PUSH32(esp, 0x0030C279u); RECOMP_ABI_CALL(0x00305F30u, sub_00305F30); /* call 0x00305F30 */

loc_0030C279: ;
    esp = esp + 4;
    PUSH32(esp, 0x0030C281u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030C281: ;
    MEM32(0x5BFA30) = MEM32(0x5BFA30) + 1;
    _fa = (uint32_t)(MEM32(0x5BFA30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0030C290
 * Original: 0x0030C290 - 0x0030C2A6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C290(void)
{

loc_0030C290: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030C296u); RECOMP_ABI_CALL(0x00310E50u, sub_00310E50); /* call 0x00310E50 */

loc_0030C296: ;
    ecx = 0x280;
    eax = 0; /* xor self */
    edi = 0x5EE020;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C2B0
 * Original: 0x0030C2B0 - 0x0030C2C1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C2B0(void)
{

loc_0030C2B0: ;
    PUSH32(esp, edi);
    ecx = 0x280;
    eax = 0; /* xor self */
    edi = 0x5EE020;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C2D0
 * Original: 0x0030C2D0 - 0x0030C2FD (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C2D0(void)
{

loc_0030C2D0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = 0x7FFFFFFF;
    MEM32(eax + 0x3C) = 0xFFFFFFFFu;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM8(eax + 3) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C300
 * Original: 0x0030C300 - 0x0030C336 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C300: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030C334; /* je: equal / zero */

loc_0030C309: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030C320; /* je: equal / zero */

loc_0030C310: ;
    PUSH32(esp, eax);
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0x0030C31Du); RECOMP_ABI_CALL(0x00310590u, sub_00310590); /* call 0x00310590 */

loc_0030C31D: ;
    esp = esp + 4;

loc_0030C320: ;
    PUSH32(esp, 0x0030C325u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030C325: ;
    ecx = 0x28;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030C334: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C340
 * Original: 0x0030C340 - 0x0030C367 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C340(void)
{

loc_0030C340: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x0030C357u); RECOMP_ABI_CALL(0x00311410u, sub_00311410); /* call 0x00311410 */

loc_0030C357: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030C361u); RECOMP_ABI_CALL(0x003112E0u, sub_003112E0); /* call 0x003112E0 */

loc_0030C361: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C370
 * Original: 0x0030C370 - 0x0030C397 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C370(void)
{

loc_0030C370: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(edi + 0x38) = esi;
    PUSH32(esp, 0x0030C387u); RECOMP_ABI_CALL(0x00311430u, sub_00311430); /* call 0x00311430 */

loc_0030C387: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030C391u); RECOMP_ABI_CALL(0x00311300u, sub_00311300); /* call 0x00311300 */

loc_0030C391: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C3A0
 * Original: 0x0030C3A0 - 0x0030C3BE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C3A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C3A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C3AEu); RECOMP_ABI_CALL(0x00311480u, sub_00311480); /* call 0x00311480 */

loc_0030C3AE: ;
    ecx = MEM32(esi + 4);
    esp = esp + 4;
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00311330(); return; /* tail jmp 0x00311330 */

}

/**
 * sub_0030C3C0
 * Original: 0x0030C3C0 - 0x0030C3D2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C3C0(void)
{

loc_0030C3C0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030C3CAu); RECOMP_ABI_CALL(0x0030C2D0u, sub_0030C2D0); /* call 0x0030C2D0 */

loc_0030C3CA: ;
    esp = esp + 4;
    MEM8(edx + 1) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0030C3E0
 * Original: 0x0030C3E0 - 0x0030C3F7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C3E0(void)
{

loc_0030C3E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C3EEu); RECOMP_ABI_CALL(0x00310A20u, sub_00310A20); /* call 0x00310A20 */

loc_0030C3EE: ;
    esp = esp + 4;
    MEM8(esi + 1) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C400
 * Original: 0x0030C400 - 0x0030C5B9 (441 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C400: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ebx = MEM32(edi + 8);
    esi = MEM32(edi + 4);
    eax = MEM32(ebx);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC800);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0030C426u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C426: ;
    ecx = MEM32(esp + 0x24);
    esp = esp + 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030C442; /* jle: less or equal (signed <=) */

loc_0030C433: ;
    edx = MEM32(esp + 0x10);

loc_0030C437: ;
    _fa = (uint32_t)(MEM8(edx + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030C442; /* jne: not equal / not zero */

loc_0030C43D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030C437; /* jl: less (signed <) */

loc_0030C442: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030C453u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0030C453: ;
    eax = MEM32(ebx);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0030C460u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C460: ;
    eax = MEM32(esp + 0x30);
    esp = esp + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030C483; /* jge: greater or equal (signed >=) */

loc_0030C46C: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0030C479u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C479: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0030C483: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030C490u); RECOMP_ABI_CALL(0x00311210u, sub_00311210); /* call 0x00311210 */

loc_0030C490: ;
    ebp = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030C5A1; /* je: equal / zero */

loc_0030C49D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0030C5A1; /* jg: greater (signed >) */

loc_0030C4A7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0030C4D6; /* jge: greater or equal (signed >=) */

loc_0030C4AB: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0030C4B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C4B8: ;
    PUSH32(esp, 0x42CF98);
    PUSH32(esp, 0x42CF78);
    PUSH32(esp, 0x0030C4C7u); RECOMP_ABI_CALL(0x00307450u, sub_00307450); /* call 0x00307450 */

loc_0030C4C7: ;
    esp = esp + 0x14;
    POP32(esp, ebp);
    MEM8(edi + 1) = 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0030C4D6: ;
    PUSH32(esp, esi);
    MEM32(edi + 0x98) = ebp;
    PUSH32(esp, 0x0030C4E2u); RECOMP_ABI_CALL(0x00310720u, sub_00310720); /* call 0x00310720 */

loc_0030C4E2: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030C4EE; /* jne: not equal / not zero */

loc_0030C4EA: ;
    MEM8(edi + 3) = 1;

loc_0030C4EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030C4F4u); RECOMP_ABI_CALL(0x00310720u, sub_00310720); /* call 0x00310720 */

loc_0030C4F4: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030C527; /* jne: not equal / not zero */

loc_0030C4FC: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030C50A; /* jl: less (signed <) */

loc_0030C505: ;
    ecx = 0x40;

loc_0030C50A: ;
    esi = MEM32(esp + 0x14);
    edx = ecx;
    edi = edi + 0x58;
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
    edi = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x10);

loc_0030C527: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030C52Du); RECOMP_ABI_CALL(0x00310720u, sub_00310720); /* call 0x00310720 */

loc_0030C52D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030C585; /* je: equal / zero */

loc_0030C535: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030C585; /* je: equal / zero */

loc_0030C53A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030C585; /* je: equal / zero */

loc_0030C53F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030C585; /* je: equal / zero */

loc_0030C544: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030C585; /* je: equal / zero */

loc_0030C549: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030C55Cu); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0030C55C: ;
    eax = MEM32(ebx);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0030C569u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C569: ;
    edx = MEM32(ebx);
    eax = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0030C576u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C576: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    MEM8(edi + 1) = 2;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0030C585: ;
    ecx = MEM32(ebx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0030C592u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C592: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    MEM8(edi + 1) = 2;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0030C5A1: ;
    eax = MEM32(ebx);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0030C5AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C5AE: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0030C5C0
 * Original: 0x0030C5C0 - 0x0030C681 (193 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030C5C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030C5C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 4);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    ebp = 0; /* xor self */
    PUSH32(esp, 0x0030C5DCu); RECOMP_ABI_CALL(0x00310730u, sub_00310730); /* call 0x00310730 */

loc_0030C5DC: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030C60F; /* jle: less or equal (signed <=) */

loc_0030C5E3: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x1C;

loc_0030C5E7: ;
    eax = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0030C5F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C5F7: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    ebx = ebx + 8;
    PUSH32(esp, 0x0030C607u); RECOMP_ABI_CALL(0x00310730u, sub_00310730); /* call 0x00310730 */

loc_0030C607: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030C5E7; /* jl: less (signed <) */

loc_0030C60E: ;
    POP32(esp, ebx);

loc_0030C60F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030C619u); RECOMP_ABI_CALL(0x0030F430u, sub_0030F430); /* call 0x0030F430 */

loc_0030C619: ;
    ecx = eax;
    eax = MEM32(esi + 0x1C);
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(edx) = eax;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x38);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030C63F; /* jl: less (signed <) */

loc_0030C63D: ;
    eax = ecx;

loc_0030C63F: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0030C667; /* jl: less (signed <) */

loc_0030C64C: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esp + 0x1C);
    eax = eax - ecx;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030C660u); RECOMP_ABI_CALL(0x00310710u, sub_00310710); /* call 0x00310710 */

loc_0030C660: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030C667: ;
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = 0x1FFFFFFF;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030C67Au); RECOMP_ABI_CALL(0x00310710u, sub_00310710); /* call 0x00310710 */

loc_0030C67A: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C690
 * Original: 0x0030C690 - 0x0030C7EA (346 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030C690(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030C690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030C6AFu); RECOMP_ABI_CALL(0x003107A0u, sub_003107A0); /* call 0x003107A0 */

loc_0030C6AF: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030C6B9u); RECOMP_ABI_CALL(0x00310A70u, sub_00310A70); /* call 0x00310A70 */

loc_0030C6B9: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030C6C3u); RECOMP_ABI_CALL(0x00310A80u, sub_00310A80); /* call 0x00310A80 */

loc_0030C6C3: ;
    edx = MEM32(esi + 0x34);
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    eax = eax - edx;
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0030C6DD; /* jl: less (signed <) */

loc_0030C6D9: ;
    MEM32(esp + 0x14) = eax;

loc_0030C6DD: ;
    edx = MEM32(esp + 0x18);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030C6F5u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0030C6F5: ;
    ecx = MEM32(ebx);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0030C702u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C702: ;
    eax = MEM32(ebx);
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0030C70Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C70F: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030C71Au); RECOMP_ABI_CALL(0x00310730u, sub_00310730); /* call 0x00310730 */

loc_0030C71A: ;
    esp = esp + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030C7AA; /* jle: less or equal (signed <=) */

loc_0030C725: ;
    eax = esi + 0x1C;
    edi = esi + 0xC;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0030C730: ;
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = eax + eax;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030C74Bu); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0030C74B: ;
    eax = MEM32(esi + 0x50);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030C769; /* je: equal / zero */

loc_0030C755: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030C766u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C766: ;
    esp = esp + 0x10;

loc_0030C769: ;
    eax = MEM32(edi);
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0030C778u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C778: ;
    eax = MEM32(edi);
    edx = MEM32(eax);
    ecx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0030C787u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030C787: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esi + 4);
    ecx = ecx + 8;
    PUSH32(esp, edx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    MEM32(esp + 0x2C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030C79Fu); RECOMP_ABI_CALL(0x00310730u, sub_00310730); /* call 0x00310730 */

loc_0030C79F: ;
    esp = esp + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030C730; /* jl: less (signed <) */

loc_0030C7A6: ;
    edi = MEM32(esp + 0x1C);

loc_0030C7AA: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x2C);
    ebx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x34);
    ecx = ecx + eax;
    MEM32(esi + 0x2C) = ecx;
    ecx = MEM32(esp + 0x18);
    ebx = ebx + ecx;
    edx = edx + eax;
    MEM32(esi + 0x30) = ebx;
    ebx = MEM32(esi + 0x40);
    MEM32(esi + 0x34) = edx;
    edx = MEM32(esi + 0x44);
    ebx = ebx + eax;
    edx = edx + ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030C7E0u); RECOMP_ABI_CALL(0x00310A40u, sub_00310A40); /* call 0x00310A40 */

loc_0030C7E0: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C7F0
 * Original: 0x0030C7F0 - 0x0030C83B (75 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C7F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C7F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030C801u); RECOMP_ABI_CALL(0x003107A0u, sub_003107A0); /* call 0x003107A0 */

loc_0030C801: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x0030C809u); RECOMP_ABI_CALL(0x00310A70u, sub_00310A70); /* call 0x00310A70 */

loc_0030C809: ;
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x0030C811u); RECOMP_ABI_CALL(0x00310A80u, sub_00310A80); /* call 0x00310A80 */

loc_0030C811: ;
    edx = MEM32(esi + 0x34);
    ecx = ebx;
    ecx = ecx - edx;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030C821; /* jl: less (signed <) */

loc_0030C81F: ;
    eax = ecx;

loc_0030C821: ;
    edi = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x30);
    edi = edi + eax;
    MEM32(esi + 0x2C) = edi;
    ecx = ecx + ebp;
    POP32(esp, edi);
    edx = edx + eax;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C840
 * Original: 0x0030C840 - 0x0030C848 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C840(void)
{

loc_0030C840: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C850
 * Original: 0x0030C850 - 0x0030C85C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C850(void)
{

loc_0030C850: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0030C860
 * Original: 0x0030C860 - 0x0030C86F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C860(void)
{

loc_0030C860: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x9C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0030C870
 * Original: 0x0030C870 - 0x0030C883 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C870(void)
{

loc_0030C870: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030C890
 * Original: 0x0030C890 - 0x0030C89C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C890(void)
{

loc_0030C890: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x3C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0030C8A0
 * Original: 0x0030C8A0 - 0x0030C8AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C8A0(void)
{

loc_0030C8A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x40) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0030C8B0
 * Original: 0x0030C8B0 - 0x0030C8BC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C8B0(void)
{

loc_0030C8B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x44) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0030C8C0
 * Original: 0x0030C8C0 - 0x0030C8D0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C8C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C8C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00310720(); return; /* tail jmp 0x00310720 */

}

/**
 * sub_0030C8D0
 * Original: 0x0030C8D0 - 0x0030C8E0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C8D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C8D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0030D670(); return; /* tail jmp 0x0030D670 */

}

/**
 * sub_0030C8E0
 * Original: 0x0030C8E0 - 0x0030C8F0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C8E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C8E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00310730(); return; /* tail jmp 0x00310730 */

}

/**
 * sub_0030C8F0
 * Original: 0x0030C8F0 - 0x0030C900 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C8F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C8F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00310740(); return; /* tail jmp 0x00310740 */

}

/**
 * sub_0030C900
 * Original: 0x0030C900 - 0x0030C910 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C900: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0030D660(); return; /* tail jmp 0x0030D660 */

}

/**
 * sub_0030C910
 * Original: 0x0030C910 - 0x0030C920 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C910(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C910: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_003107A0(); return; /* tail jmp 0x003107A0 */

}

/**
 * sub_0030C920
 * Original: 0x0030C920 - 0x0030C930 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C920: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_003107B0(); return; /* tail jmp 0x003107B0 */

}

/**
 * sub_0030C930
 * Original: 0x0030C930 - 0x0030C940 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C930: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_003107C0(); return; /* tail jmp 0x003107C0 */

}

/**
 * sub_0030C940
 * Original: 0x0030C940 - 0x0030C955 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C940(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C940: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030C949; /* jne: not equal / not zero */

loc_0030C948: ;
    esp += 4; return; /* ret */

loc_0030C949: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_003107D0(); return; /* tail jmp 0x003107D0 */

}

/**
 * sub_0030C960
 * Original: 0x0030C960 - 0x0030C970 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C960(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C960: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0030FAF0(); return; /* tail jmp 0x0030FAF0 */

}

/**
 * sub_0030C970
 * Original: 0x0030C970 - 0x0030C980 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C970: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_003107E0(); return; /* tail jmp 0x003107E0 */

}

/**
 * sub_0030C980
 * Original: 0x0030C980 - 0x0030C9B2 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C980(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C980: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C98Eu); RECOMP_ABI_CALL(0x003107F0u, sub_003107F0); /* call 0x003107F0 */

loc_0030C98E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030C9AD; /* jle: less or equal (signed <=) */

loc_0030C995: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030C9A0; /* je: equal / zero */

loc_0030C99C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030C9AD; /* jne: not equal / not zero */

loc_0030C9A0: ;
    ecx = MEM32(esi + 4);
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00310800(); return; /* tail jmp 0x00310800 */

loc_0030C9AD: ;
    SET_LO16(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030C9C0
 * Original: 0x0030C9C0 - 0x0030C9F9 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030C9C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C9CEu); RECOMP_ABI_CALL(0x003107F0u, sub_003107F0); /* call 0x003107F0 */

loc_0030C9CE: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030C9F3; /* jle: less or equal (signed <=) */

loc_0030C9D5: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030C9E0; /* je: equal / zero */

loc_0030C9DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030C9F3; /* jne: not equal / not zero */

loc_0030C9E0: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030C9EEu); RECOMP_ABI_CALL(0x00310810u, sub_00310810); /* call 0x00310810 */

loc_0030C9EE: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030C9F3: ;
    SET_LO16(eax, 0xFF80);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030CA00
 * Original: 0x0030CA00 - 0x0030CA08 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CA00(void)
{

loc_0030CA00: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_0030CA10
 * Original: 0x0030CA10 - 0x0030CA20 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CA10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030CA10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00310830(); return; /* tail jmp 0x00310830 */

}

/**
 * sub_0030CA20
 * Original: 0x0030CA20 - 0x0030CA30 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CA20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030CA20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00310870(); return; /* tail jmp 0x00310870 */

}

/**
 * sub_0030CA30
 * Original: 0x0030CA30 - 0x0030CB34 (260 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CA30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030CA30: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = 0x5EE0C0;
    /* nop */

loc_0030CA40: ;
    SET_LO8(ecx, MEM8(eax + -160));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CA7F; /* je: equal / zero */

loc_0030CA4A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030CA74; /* je: equal / zero */

loc_0030CA4F: ;
    SET_LO8(ecx, MEM8(eax + 0xA0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CA77; /* je: equal / zero */

loc_0030CA59: ;
    SET_LO8(ecx, MEM8(eax + 0x140));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CA7C; /* je: equal / zero */

loc_0030CA63: ;
    eax = eax + 0x280;
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5EEAC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5EEAC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030CA40; /* jl: less (signed <) */

loc_0030CA72: ;
    goto loc_0030CA7F;

loc_0030CA74: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0030CA7F;

loc_0030CA77: ;
    esi = esi + 2;
    goto loc_0030CA7F;

loc_0030CA7C: ;
    esi = esi + 3;

loc_0030CA7F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CA89; /* jne: not equal / not zero */

loc_0030CA84: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030CA89: ;
    PUSH32(esp, ebx);
    esi = esi + esi * 4;
    PUSH32(esp, edi);
    esi = esi << 5;
    PUSH32(esp, ebp);
    esi = esi + 0x5EE020;
    PUSH32(esp, 0x0030CA9Du); RECOMP_ABI_CALL(0x0030F430u, sub_0030F430); /* call 0x0030F430 */

loc_0030CA9D: ;
    PUSH32(esp, ebp);
    ebx = eax;
    PUSH32(esp, 0x0030CAA5u); RECOMP_ABI_CALL(0x00308090u, sub_00308090); /* call 0x00308090 */

loc_0030CAA5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edi = eax;
    PUSH32(esp, ebp);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    PUSH32(esp, 0x0030CAB2u); RECOMP_ABI_CALL(0x0030F440u, sub_0030F440); /* call 0x0030F440 */

loc_0030CAB2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030CAC6u); RECOMP_ABI_CALL(0x00310E70u, sub_00310E70); /* call 0x00310E70 */

loc_0030CAC6: ;
    edi = 0; /* xor self */
    esp = esp + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0030CAD9; /* jne: not equal / not zero */

loc_0030CAD2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030CAD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x30C5C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CAE5u); RECOMP_ABI_CALL(0x003106F0u, sub_003106F0); /* call 0x003106F0 */

loc_0030CAE5: ;
    ecx = MEM32(esp + 0x20);
    esp = esp + 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esi + 8) = ecx;
    MEM8(esi + 2) = LO8(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_0030CB11; /* jle: less or equal (signed <=) */

loc_0030CAF8: ;
    ecx = esi + 0xC;
    goto loc_0030CB00;

    /* nop */

loc_0030CB00: ;
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030CB00; /* jl: less (signed <) */

loc_0030CB11: ;
    PUSH32(esp, esi);
    MEM8(esi + 1) = 0;
    PUSH32(esp, 0x0030CB1Bu); RECOMP_ABI_CALL(0x0030C2D0u, sub_0030C2D0); /* call 0x0030C2D0 */

loc_0030CB1B: ;
    esp = esp + 4;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM8(esi) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030CB40
 * Original: 0x0030CB40 - 0x0030CD81 (577 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CB40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030CB40: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    eax = MEM32(ebx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    MEM32(esp + 0x1C) = ebp;
    if (TEST_S(_fas, _fbs)) goto loc_0030CB70; /* jl: less (signed <) */

loc_0030CB5B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030CB70; /* jl: less (signed <) */

loc_0030CB60: ;
    eax = MEM32(ebx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CB70; /* je: equal / zero */

loc_0030CB67: ;
    ecx = MEM32(ebx + 0x4C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030CB6Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CB6D: ;
    esp = esp + 4;

loc_0030CB70: ;
    _fa = (uint32_t)(MEM8(ebx + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 3), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CB90; /* jne: not equal / not zero */

loc_0030CB76: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030CB7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CB7E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030CB90; /* jne: not equal / not zero */

loc_0030CB85: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 1) = 3;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0030CB90: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ebx + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0030CBA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CBA2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0030CBA8u); RECOMP_ABI_CALL(0x00310720u, sub_00310720); /* call 0x00310720 */

loc_0030CBA8: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030CCD0; /* jne: not equal / not zero */

loc_0030CBB3: ;
    ecx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030CCD0; /* jl: less (signed <) */

loc_0030CBBF: ;
    ebp = MEM32(edi);
    SET_LO16(eax, MEM16(ebp));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x8001 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CCD0; /* jne: not equal / not zero */

loc_0030CBD6: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM8(ebx + 1) = 3;
    PUSH32(esp, 0x0030CBE6u); RECOMP_ABI_CALL(0x0030ED20u, sub_0030ED20); /* call 0x0030ED20 */

loc_0030CBE6: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030CC31; /* jne: not equal / not zero */

loc_0030CBED: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x18) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030CC0B; /* jle: less or equal (signed <=) */

loc_0030CBF7: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0030CC00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CC00: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0030CC0B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030CC18u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0030CC18: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0030CC21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CC21: ;
    ecx = MEM32(esi);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0030CC2Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CC2E: ;
    esp = esp + 0x28;

loc_0030CC31: ;
    eax = MEM32(ebx + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CD79; /* je: equal / zero */

loc_0030CC3F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0030CC4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CC4D: ;
    eax = MEM32(ebx + 0x18);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CD79; /* je: equal / zero */

loc_0030CC5B: ;
    goto loc_0030CC60;

    /* nop */

loc_0030CC60: ;
    eax = MEM32(ebx + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030CC7E; /* jle: less or equal (signed <=) */

loc_0030CC6D: ;
    eax = MEM32(edi);
    /* nop */

loc_0030CC70: ;
    _fa = (uint32_t)(MEM8(eax + ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ebp), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CC7E; /* jne: not equal / not zero */

loc_0030CC76: ;
    ecx = MEM32(ebx + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030CC70; /* jl: less (signed <) */

loc_0030CC7E: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030CC8Bu); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0030CC8B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0030CC94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CC94: ;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0030CCA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CCA1: ;
    eax = MEM32(esp + 0x38);
    esp = esp + 0x28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030CD79; /* jl: less (signed <) */

loc_0030CCB0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0030CCBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CCBE: ;
    eax = MEM32(ebx + 0x18);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030CC60; /* jne: not equal / not zero */

loc_0030CCC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0030CCD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030CCD6u); RECOMP_ABI_CALL(0x0030C910u, sub_0030C910); /* call 0x0030C910 */

loc_0030CCD6: ;
    ecx = MEM32(ebx + 0x34);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030CCF8; /* jl: less (signed <) */

loc_0030CCE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(ebx + 1) = 3;
    eax = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0030CCEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CCED: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0030CCF8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030CCFEu); RECOMP_ABI_CALL(0x0030C900u, sub_0030C900); /* call 0x0030C900 */

loc_0030CCFE: ;
    ebp = eax;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0030CD0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CD0B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030CD2B; /* jge: greater or equal (signed >=) */

loc_0030CD17: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0030CD20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CD20: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0030CD2B: ;
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0030CD35u); RECOMP_ABI_CALL(0x00310720u, sub_00310720); /* call 0x00310720 */

loc_0030CD35: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CD49; /* jne: not equal / not zero */

loc_0030CD3D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0030CD46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CD46: ;
    esp = esp + 0xC;

loc_0030CD49: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0030CD4Fu); RECOMP_ABI_CALL(0x00310720u, sub_00310720); /* call 0x00310720 */

loc_0030CD4F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CD63; /* jne: not equal / not zero */

loc_0030CD57: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0030CD60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CD60: ;
    esp = esp + 0xC;

loc_0030CD63: ;
    edx = MEM32(ebx + 0x18);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0030CD70u); RECOMP_ABI_CALL(0x00310990u, sub_00310990); /* call 0x00310990 */

loc_0030CD70: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0030CD76u); RECOMP_ABI_CALL(0x00310A00u, sub_00310A00); /* call 0x00310A00 */

loc_0030CD76: ;
    esp = esp + 0x10;

loc_0030CD79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0030CD90
 * Original: 0x0030CD90 - 0x0030CDFD (109 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CD90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030CD9Fu); RECOMP_ABI_CALL(0x00329ED0u, sub_00329ED0); /* call 0x00329ED0 */

loc_0030CD9F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030CDAF; /* jne: not equal / not zero */

loc_0030CDA6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030CDACu); RECOMP_ABI_CALL(0x0030CB40u, sub_0030CB40); /* call 0x0030CB40 */

loc_0030CDAC: ;
    esp = esp + 4;

loc_0030CDAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030CDB5u); RECOMP_ABI_CALL(0x00310DD0u, sub_00310DD0); /* call 0x00310DD0 */

loc_0030CDB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030CDBBu); RECOMP_ABI_CALL(0x00329ED0u, sub_00329ED0); /* call 0x00329ED0 */

loc_0030CDBB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CDCC; /* jne: not equal / not zero */

loc_0030CDC3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030CDC9u); RECOMP_ABI_CALL(0x0030C690u, sub_0030C690); /* call 0x0030C690 */

loc_0030CDC9: ;
    esp = esp + 4;

loc_0030CDCC: ;
    SET_LO16(eax, MEM16(esi + 0x98));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030CDF1; /* je: equal / zero */

loc_0030CDD9: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x14 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030CDF1; /* je: equal / zero */

loc_0030CDDF: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xB (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030CDF1; /* je: equal / zero */

loc_0030CDE5: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xC (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030CDF1; /* je: equal / zero */

loc_0030CDEB: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CDFA; /* jne: not equal / not zero */

loc_0030CDF1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030CDF7u); RECOMP_ABI_CALL(0x0030C7F0u, sub_0030C7F0); /* call 0x0030C7F0 */

loc_0030CDF7: ;
    esp = esp + 4;

loc_0030CDFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030CE00
 * Original: 0x0030CE00 - 0x0030CE22 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CE00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030CE00: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CE14; /* jne: not equal / not zero */

loc_0030CE0B: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0030CD90(); return; /* tail jmp 0x0030CD90 */

loc_0030CE14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CE21; /* jne: not equal / not zero */

loc_0030CE18: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0030C400(); return; /* tail jmp 0x0030C400 */

loc_0030CE21: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030CE30
 * Original: 0x0030CE30 - 0x0030CE54 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CE30: ;
    PUSH32(esp, esi);
    esi = 0x5EE020;

loc_0030CE36: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CE44; /* jne: not equal / not zero */

loc_0030CE3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030CE41u); RECOMP_ABI_CALL(0x0030CE00u, sub_0030CE00); /* call 0x0030CE00 */

loc_0030CE41: ;
    esp = esp + 4;

loc_0030CE44: ;
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5EEA20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5EEA20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030CE36; /* jl: less (signed <) */

loc_0030CE52: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030CE60
 * Original: 0x0030CE60 - 0x0030CE76 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CE60(void)
{

loc_0030CE60: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x3C0;
    edi = 0x5ED120;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030CE80
 * Original: 0x0030CE80 - 0x0030CF1B (155 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030CE80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CE80: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, 0x0030CE8Au); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030CE8A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = ebp;
    edx = edx & 0x800007FFu;
    MEM8(esi + 1) = 1;
    MEM8(esi + 2) = 0;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ebp;
    if (((int32_t)edx >= 0)) goto loc_0030CEB8; /* jns: not sign (positive) */

loc_0030CEB0: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFF800u;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0030CEB8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    eax = eax + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x2C) = 0x200;
    MEM32(esi + 0x58) = 0;
    MEM32(esi + 0x5C) = 0xFFFFF;
    MEM32(esi + 0x30) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0030CF0E; /* je: equal / zero */

loc_0030CEEE: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030CEF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CEF6: ;
    ebp = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0030CF00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030CF00: ;
    esp = esp + 0x10;
    eax = eax + ebp;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;

loc_0030CF0E: ;
    MEM8(esi + 0x44) = 0;
    MEM8(esi) = 1;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0030CF20
 * Original: 0x0030CF20 - 0x0030CF78 (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CF20: ;
    edx = MEM32(0x4767D0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030CF4F; /* jle: less or equal (signed <=) */

loc_0030CF2F: ;
    eax = MEM32(0x5BFA4C);
    eax = eax + eax * 2;
    eax = eax << 5;
    eax = eax + 0x5ED120;
    /* nop */

loc_0030CF40: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CF4F; /* je: equal / zero */

loc_0030CF47: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030CF40; /* jl: less (signed <) */

loc_0030CF4F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CF57; /* jne: not equal / not zero */

loc_0030CF53: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030CF57: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030CF70u); RECOMP_ABI_CALL(0x0030CE80u, sub_0030CE80); /* call 0x0030CE80 */

loc_0030CF70: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030CF80
 * Original: 0x0030CF80 - 0x0030CFD8 (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CF80: ;
    edx = MEM32(0x4767D8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030CFAF; /* jle: less or equal (signed <=) */

loc_0030CF8F: ;
    eax = MEM32(0x4767D4);
    eax = eax + eax * 2;
    eax = eax << 5;
    eax = eax + 0x5ED120;
    /* nop */

loc_0030CFA0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CFAF; /* je: equal / zero */

loc_0030CFA7: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030CFA0; /* jl: less (signed <) */

loc_0030CFAF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030CFB7; /* jne: not equal / not zero */

loc_0030CFB3: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030CFB7: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030CFD0u); RECOMP_ABI_CALL(0x0030CE80u, sub_0030CE80); /* call 0x0030CE80 */

loc_0030CFD0: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030CFE0
 * Original: 0x0030CFE0 - 0x0030D012 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CFE0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030CFFE; /* jge: greater or equal (signed >=) */

loc_0030CFEA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030CFFAu); RECOMP_ABI_CALL(0x0030CF20u, sub_0030CF20); /* call 0x0030CF20 */

loc_0030CFFA: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0030CFFE: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030D00Eu); RECOMP_ABI_CALL(0x0030CF80u, sub_0030CF80); /* call 0x0030CF80 */

loc_0030D00E: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D020
 * Original: 0x0030D020 - 0x0030D056 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D020(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D020: ;
    PUSH32(esp, 0x0030D025u); RECOMP_ABI_CALL(0x0030BAA0u, sub_0030BAA0); /* call 0x0030BAA0 */

loc_0030D025: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = ecx;
    edx = edx << 0xB;
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = edx;
    MEM8(eax + 0x45) = 1;
    g_seh_ebp = ebp; sub_0030BDA0(); return; /* tail jmp 0x0030BDA0 */

}

/**
 * sub_0030D060
 * Original: 0x0030D060 - 0x0030D090 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D060: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D07Fu); RECOMP_ABI_CALL(0x0030D020u, sub_0030D020); /* call 0x0030D020 */

loc_0030D07F: ;
    esp = esp + 0x14;

loc_0030D082: ;
    PUSH32(esp, 0x0030D087u); RECOMP_ABI_CALL(0x0030FF50u, sub_0030FF50); /* call 0x0030FF50 */

loc_0030D087: ;
    SET_LO8(eax, MEM8(esi + 0x45));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030D082; /* jne: not equal / not zero */

loc_0030D08E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D090
 * Original: 0x0030D090 - 0x0030D0A9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D090: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(eax + 0x58) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0030D0A5; /* jle: less or equal (signed <=) */

loc_0030D0A2: ;
    MEM32(eax + 0x58) = ecx;

loc_0030D0A5: ;
    eax = MEM32(eax + 0x58);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D0B0
 * Original: 0x0030D0B0 - 0x0030D0C2 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030D0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D0B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030D0BF; /* je: equal / zero */

loc_0030D0BB: ;
    eax = MEM32(eax + 0x58);
    esp += 4; return; /* ret */

loc_0030D0BF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030D0D0
 * Original: 0x0030D0D0 - 0x0030D0F8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D0D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) + 2);
    MEM32(eax + 0x34) = ecx;
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x47) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D100
 * Original: 0x0030D100 - 0x0030D126 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D100(void)
{

loc_0030D100: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D106u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030D106: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D110u); RECOMP_ABI_CALL(0x0030D0D0u, sub_0030D0D0); /* call 0x0030D0D0 */

loc_0030D110: ;
    esp = esp + 4;
    MEM32(esi + 0x5C) = 0xFFFFF;
    PUSH32(esp, 0x0030D11Fu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030D11F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D130
 * Original: 0x0030D130 - 0x0030D156 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D130(void)
{

loc_0030D130: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D136u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030D136: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D140u); RECOMP_ABI_CALL(0x0030D0D0u, sub_0030D0D0); /* call 0x0030D0D0 */

loc_0030D140: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 4;
    MEM32(esi + 0x5C) = eax;
    PUSH32(esp, 0x0030D14Fu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030D14F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D160
 * Original: 0x0030D160 - 0x0030D18F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D160: ;
    PUSH32(esp, 0x0030D165u); RECOMP_ABI_CALL(0x0030BAA0u, sub_0030BAA0); /* call 0x0030BAA0 */

loc_0030D165: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    SET_LO8(ecx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0030D187; /* jne: not equal / not zero */

loc_0030D171: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D187; /* jne: not equal / not zero */

loc_0030D176: ;
    _fa = (uint32_t)(MEM8(eax + 0x47)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x47), LO8(ecx) (8-bit) */
    MEM8(eax + 0x48) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0030D18A; /* jne: not equal / not zero */

loc_0030D17E: ;
    MEM8(eax + 0x47) = 0;
    g_seh_ebp = ebp; sub_0030BDA0(); return; /* tail jmp 0x0030BDA0 */

loc_0030D187: ;
    MEM8(eax + 1) = LO8(ecx);

loc_0030D18A: ;
    g_seh_ebp = ebp; sub_0030BDA0(); return; /* tail jmp 0x0030BDA0 */

}

/**
 * sub_0030D190
 * Original: 0x0030D190 - 0x0030D1B4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D190: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D19Bu); RECOMP_ABI_CALL(0x0030D160u, sub_0030D160); /* call 0x0030D160 */

loc_0030D19B: ;
    esp = esp + 4;
    edi = edi;

loc_0030D1A0: ;
    PUSH32(esp, 0x0030D1A5u); RECOMP_ABI_CALL(0x0030FF50u, sub_0030FF50); /* call 0x0030FF50 */

loc_0030D1A5: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D1A0; /* jne: not equal / not zero */

loc_0030D1AB: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030D1A0; /* jne: not equal / not zero */

loc_0030D1B2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D1C0
 * Original: 0x0030D1C0 - 0x0030D1D3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D1C0(void)
{

loc_0030D1C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D1E0
 * Original: 0x0030D1E0 - 0x0030D1FB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D1E0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0030D1F0; /* jl: less (signed <) */

loc_0030D1E8: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 4; return; /* ret */

loc_0030D1F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x14);
    MEM32(eax + 0x30) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D200
 * Original: 0x0030D200 - 0x0030D207 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D200: ;
    MEM32(0x5BFA58) = MEM32(0x5BFA58) + 1;
    _fa = (uint32_t)(MEM32(0x5BFA58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0030D210
 * Original: 0x0030D210 - 0x0030D494 (644 bytes, 244 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D210(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D210: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030D227u); RECOMP_ABI_CALL(0x00308D70u, sub_00308D70); /* call 0x00308D70 */

loc_0030D227: ;
    esp = esp + 4;
    ebx = eax;
    PUSH32(esp, 0x0030D231u); RECOMP_ABI_CALL(0x0030BAA0u, sub_0030BAA0); /* call 0x0030BAA0 */

loc_0030D231: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D34D; /* jne: not equal / not zero */

loc_0030D23B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D2E9; /* jne: not equal / not zero */

loc_0030D244: ;
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x0030D24Du); RECOMP_ABI_CALL(0x0030BDA0u, sub_0030BDA0); /* call 0x0030BDA0 */

loc_0030D24D: ;
    ebp = MEM32(esi + 0x20);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ebp = ebp << 0xB;
    ebx = esi + 0x24;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030D267u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0030D267: ;
    eax = MEM32(edi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0030D274u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030D274: ;
    edx = MEM32(edi);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0030D281u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030D281: ;
    ecx = MEM32(esi + 0x20);
    edi = MEM32(esi + 0x58);
    edx = MEM32(esi + 0x34);
    edi = edi + ecx;
    ecx = MEM32(esi + 0x30);
    eax = edi;
    edx = edx + ebp;
    esp = esp + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x58) = edi;
    edi = MEM32(esi + 0x14);
    MEM32(esi + 0x34) = edx;
    MEM32(ebx) = 0;
    MEM32(esi + 0x28) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0030D2C0; /* jne: not equal / not zero */

loc_0030D2B0: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030D2C0; /* je: equal / zero */

loc_0030D2B7: ;
    edx = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030D2BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030D2BD: ;
    esp = esp + 4;

loc_0030D2C0: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030D2D9; /* jge: greater or equal (signed >=) */

loc_0030D2C5: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esi + 0x5C);
    ecx = ecx >> 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0030D2DD; /* jb: below (unsigned <) */

loc_0030D2D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFF (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0030D2DD; /* jae: above or equal (unsigned >=) */

loc_0030D2D9: ;
    MEM8(esi + 1) = 3;

loc_0030D2DD: ;
    POP32(esp, edi);
    MEM8(esi + 3) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0030D2E9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D340; /* jne: not equal / not zero */

loc_0030D2EE: ;
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x0030D2F7u); RECOMP_ABI_CALL(0x0030BDA0u, sub_0030BDA0); /* call 0x0030BDA0 */

loc_0030D2F7: ;
    edx = MEM32(edi);
    ebx = esi + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0030D303u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030D303: ;
    MEM32(ebx) = 0;
    MEM32(esi + 0x28) = 0;
    ecx = MEM32(0x5BFA54);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0030D37C; /* jl: less (signed <) */

loc_0030D31D: ;
    SET_LO8(eax, MEM8(esi + 3));
    edx = SX8(LO8(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030D333; /* jl: less (signed <) */

loc_0030D327: ;
    POP32(esp, edi);
    MEM8(esi + 1) = 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0030D333: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 3) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0030D340: ;
    PUSH32(esp, 0x0030D345u); RECOMP_ABI_CALL(0x0030BDA0u, sub_0030BDA0); /* call 0x0030BDA0 */

loc_0030D345: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0030D34D: ;
    ebp = 0; /* xor self */
    ebx = esi + 0x24;
    MEM8(esi + 2) = 1;
    MEM32(ebx) = ebp;
    MEM32(esi + 0x28) = ebp;
    PUSH32(esp, 0x0030D360u); RECOMP_ABI_CALL(0x0030BDA0u, sub_0030BDA0); /* call 0x0030BDA0 */

loc_0030D360: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x44), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030D378; /* je: equal / zero */

loc_0030D366: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x48), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030D378; /* je: equal / zero */

loc_0030D36C: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D384; /* jne: not equal / not zero */

loc_0030D371: ;
    MEM32(esi + 0x20) = ebp;
    MEM8(esi + 1) = 3;

loc_0030D378: ;
    MEM8(esi + 2) = 0;

loc_0030D37C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0030D384: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030D483; /* je: equal / zero */

loc_0030D38C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030D483; /* je: equal / zero */

loc_0030D396: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0030D39Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030D39B: ;
    ecx = MEM32(esi + 0x40);
    ecx = ecx - eax;
    eax = MEM32(esi + 0x1C);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030D378; /* jge: greater or equal (signed >=) */

loc_0030D3AA: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0030D3BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030D3BA: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x58);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    ebp = eax;
    eax = MEM32(esi + 0x30);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((0xB) & 31u));
    eax = eax - ecx;
    esp = esp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030D3DD; /* jl: less (signed <) */

loc_0030D3DB: ;
    ebp = eax;

loc_0030D3DD: ;
    eax = MEM32(esi + 0x14);
    eax = eax - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030D3E8; /* jl: less (signed <) */

loc_0030D3E6: ;
    ebp = eax;

loc_0030D3E8: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030D3F1; /* jl: less (signed <) */

loc_0030D3EF: ;
    ebp = eax;

loc_0030D3F1: ;
    eax = MEM32(esi + 0xC);
    eax = eax + ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030D402u); RECOMP_ABI_CALL(0x00308CA0u, sub_00308CA0); /* call 0x00308CA0 */

loc_0030D402: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030D411u); RECOMP_ABI_CALL(0x00308CF0u, sub_00308CF0); /* call 0x00308CF0 */

loc_0030D411: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x20) = eax;
    MEM32(ebx) = ecx;
    MEM32(esi + 0x28) = edx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0030D37C; /* jg: greater (signed >) */

loc_0030D42C: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0030D435u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030D435: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    MEM32(ebx) = 0;
    MEM32(esi + 0x28) = 0;
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x0030D44Fu); RECOMP_ABI_CALL(0x00308D70u, sub_00308D70); /* call 0x00308D70 */

loc_0030D44F: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D37C; /* jne: not equal / not zero */

loc_0030D45B: ;
    ecx = MEM32(0x5BFA54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0030D37C; /* jl: less (signed <) */

loc_0030D469: ;
    SET_LO8(eax, MEM8(esi + 3));
    edx = SX8(LO8(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030D333; /* jl: less (signed <) */

loc_0030D477: ;
    POP32(esp, edi);
    MEM8(esi + 1) = 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0030D483: ;
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x0030D48Cu); RECOMP_ABI_CALL(0x0030D200u, sub_0030D200); /* call 0x0030D200 */

loc_0030D48C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D4A0
 * Original: 0x0030D4A0 - 0x0030D5DA (314 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D4A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D5C2; /* jne: not equal / not zero */

loc_0030D4B3: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x48), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D4C5; /* jne: not equal / not zero */

loc_0030D4B9: ;
    _fa = (uint32_t)(MEM8(esi + 0x47)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x47), LO8(ebx) (8-bit) */
    MEM8(esi + 0x48) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0030D4C5; /* jne: not equal / not zero */

loc_0030D4C1: ;
    MEM8(esi + 1) = 1;

loc_0030D4C5: ;
    _fa = (uint32_t)(MEM8(esi + 0x46)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x46), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D4E4; /* jne: not equal / not zero */

loc_0030D4CB: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030D4DE; /* je: equal / zero */

loc_0030D4D2: ;
    PUSH32(esp, eax);
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x0030D4DBu); RECOMP_ABI_CALL(0x00308C10u, sub_00308C10); /* call 0x00308C10 */

loc_0030D4DB: ;
    esp = esp + 4;

loc_0030D4DE: ;
    MEM8(esi + 0x46) = LO8(ebx);
    MEM8(esi + 0x49) = LO8(ebx);

loc_0030D4E4: ;
    PUSH32(esp, 0x0030D4E9u); RECOMP_ABI_CALL(0x0030BAA0u, sub_0030BAA0); /* call 0x0030BAA0 */

loc_0030D4E9: ;
    _fa = (uint32_t)(MEM8(esi + 0x45)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x45), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D5B4; /* jne: not equal / not zero */

loc_0030D4F3: ;
    MEM8(esi + 0x49) = 1;
    PUSH32(esp, 0x0030D4FCu); RECOMP_ABI_CALL(0x0030BDA0u, sub_0030BDA0); /* call 0x0030BDA0 */

loc_0030D4FC: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D5B9; /* jne: not equal / not zero */

loc_0030D505: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030D513u); RECOMP_ABI_CALL(0x00308FE0u, sub_00308FE0); /* call 0x00308FE0 */

loc_0030D513: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0030D53B; /* jne: not equal / not zero */

loc_0030D51D: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x42CFBC);
    PUSH32(esp, 0x0030D52Bu); RECOMP_ABI_CALL(0x00307450u, sub_00307450); /* call 0x00307450 */

loc_0030D52B: ;
    esp = esp + 8;
    MEM8(esi + 0x49) = LO8(ebx);
    MEM8(esi + 0x45) = LO8(ebx);
    MEM8(esi + 1) = 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0030D53B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030D545u); RECOMP_ABI_CALL(0x00308CA0u, sub_00308CA0); /* call 0x00308CA0 */

loc_0030D545: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030D54Eu); RECOMP_ABI_CALL(0x00308C50u, sub_00308C50); /* call 0x00308C50 */

loc_0030D54E: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0x0030D55Bu); RECOMP_ABI_CALL(0x00308CA0u, sub_00308CA0); /* call 0x00308CA0 */

loc_0030D55B: ;
    eax = MEM32(esi + 0x10);
    esp = esp + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFF800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFF800 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D583; /* jne: not equal / not zero */

loc_0030D568: ;
    edx = edi;
    edx = edx << 0xB;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0x0030D57Au); RECOMP_ABI_CALL(0x0030D090u, sub_0030D090); /* call 0x0030D090 */

loc_0030D57A: ;
    esp = esp + 8;
    MEM8(esi + 0x45) = LO8(ebx);
    POP32(esp, edi);
    goto loc_0030D5B9;

loc_0030D583: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030D58B; /* jle: less or equal (signed <=) */

loc_0030D588: ;
    MEM32(esi + 0xC) = edi;

loc_0030D58B: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x14);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030D5A4; /* jle: less or equal (signed <=) */

loc_0030D597: ;
    eax = edi;
    eax = eax - ecx;
    MEM32(esi + 0x14) = eax;
    eax = eax << 0xB;
    MEM32(esi + 0x10) = eax;

loc_0030D5A4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D5ABu); RECOMP_ABI_CALL(0x0030D090u, sub_0030D090); /* call 0x0030D090 */

loc_0030D5AB: ;
    esp = esp + 8;
    MEM8(esi + 0x45) = LO8(ebx);
    POP32(esp, edi);
    goto loc_0030D5B9;

loc_0030D5B4: ;
    PUSH32(esp, 0x0030D5B9u); RECOMP_ABI_CALL(0x0030BDA0u, sub_0030BDA0); /* call 0x0030BDA0 */

loc_0030D5B9: ;
    _fa = (uint32_t)(MEM8(esi + 0x47)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x47), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D5C2; /* jne: not equal / not zero */

loc_0030D5BF: ;
    MEM8(esi + 0x47) = LO8(ebx);

loc_0030D5C2: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D5D7; /* jne: not equal / not zero */

loc_0030D5C8: ;
    _fa = (uint32_t)(MEM8(esi + 0x49)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x49), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D5D7; /* jne: not equal / not zero */

loc_0030D5CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D5D4u); RECOMP_ABI_CALL(0x0030D210u, sub_0030D210); /* call 0x0030D210 */

loc_0030D5D4: ;
    esp = esp + 4;

loc_0030D5D7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D5E0
 * Original: 0x0030D5E0 - 0x0030D61C (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D5E0: ;
    PUSH32(esp, 0x5BFA50);
    PUSH32(esp, 0x0030D5EAu); RECOMP_ABI_CALL(0x0030BF30u, sub_0030BF30); /* call 0x0030BF30 */

loc_0030D5EA: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030D61B; /* je: equal / zero */

loc_0030D5F1: ;
    PUSH32(esp, esi);
    esi = 0x5ED120;

loc_0030D5F7: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D605; /* jne: not equal / not zero */

loc_0030D5FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D602u); RECOMP_ABI_CALL(0x0030D4A0u, sub_0030D4A0); /* call 0x0030D4A0 */

loc_0030D602: ;
    esp = esp + 4;

loc_0030D605: ;
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5EE020) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5EE020 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030D5F7; /* jl: less (signed <) */

loc_0030D610: ;
    MEM32(0x5BFA50) = 0;
    POP32(esp, esi);

loc_0030D61B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D620
 * Original: 0x0030D620 - 0x0030D638 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D620(void)
{

loc_0030D620: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = edx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D640
 * Original: 0x0030D640 - 0x0030D651 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D640(void)
{

loc_0030D640: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D660
 * Original: 0x0030D660 - 0x0030D668 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D660(void)
{

loc_0030D660: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D670
 * Original: 0x0030D670 - 0x0030D678 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D670(void)
{

loc_0030D670: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D680
 * Original: 0x0030D680 - 0x0030D68C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D680(void)
{

loc_0030D680: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0x44) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D690
 * Original: 0x0030D690 - 0x0030D6CF (63 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D690(void)
{

loc_0030D690: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0x0030D6A3u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030D6A3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0030D6ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030D6AB: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ebx = eax;
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0030D6B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030D6B5: ;
    ebx = ebx + eax;
    esp = esp + 0x10;
    MEM32(edi + 0x40) = ebx;
    PUSH32(esp, 0x0030D6C2u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030D6C2: ;
    eax = MEM32(edi + 0x40);
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x1C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D6D0
 * Original: 0x0030D6D0 - 0x0030D6F9 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D6D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D6D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D6DBu); RECOMP_ABI_CALL(0x0030D160u, sub_0030D160); /* call 0x0030D160 */

loc_0030D6DB: ;
    esp = esp + 4;
    PUSH32(esp, 0x0030D6E3u); RECOMP_ABI_CALL(0x0030BAA0u, sub_0030BAA0); /* call 0x0030BAA0 */

loc_0030D6E3: ;
    SET_LO8(ecx, MEM8(esi + 0x49));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D6EF; /* jne: not equal / not zero */

loc_0030D6EC: ;
    MEM8(esi + 0x46) = LO8(eax);

loc_0030D6EF: ;
    MEM8(esi + 0x45) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0030BDA0(); return; /* tail jmp 0x0030BDA0 */

}

/**
 * sub_0030D700
 * Original: 0x0030D700 - 0x0030D72E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D700: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D70Bu); RECOMP_ABI_CALL(0x0030D190u, sub_0030D190); /* call 0x0030D190 */

loc_0030D70B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D711u); RECOMP_ABI_CALL(0x0030D6D0u, sub_0030D6D0); /* call 0x0030D6D0 */

loc_0030D711: ;
    SET_LO8(eax, MEM8(esi + 0x49));
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030D72C; /* je: equal / zero */

loc_0030D71B: ;
    goto loc_0030D720;

    /* nop */

loc_0030D720: ;
    PUSH32(esp, 0x0030D725u); RECOMP_ABI_CALL(0x0030FF50u, sub_0030FF50); /* call 0x0030FF50 */

loc_0030D725: ;
    SET_LO8(eax, MEM8(esi + 0x49));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030D720; /* jne: not equal / not zero */

loc_0030D72C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D730
 * Original: 0x0030D730 - 0x0030D756 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D730: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030D754; /* je: equal / zero */

loc_0030D739: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030D73Fu); RECOMP_ABI_CALL(0x0030D190u, sub_0030D190); /* call 0x0030D190 */

loc_0030D73F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030D745u); RECOMP_ABI_CALL(0x0030D700u, sub_0030D700); /* call 0x0030D700 */

loc_0030D745: ;
    esp = esp + 8;
    ecx = 0x18;
    eax = 0; /* xor self */
    MEM8(edi) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0030D754: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D760
 * Original: 0x0030D760 - 0x0030D76B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D760(void)
{

loc_0030D760: ;
    MEM32(0x5BFA5C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D770
 * Original: 0x0030D770 - 0x0030D775 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D770: ;
    g_seh_ebp = ebp; sub_003096C0(); return; /* tail jmp 0x003096C0 */

}

/**
 * sub_0030D780
 * Original: 0x0030D780 - 0x0030D785 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D780: ;
    g_seh_ebp = ebp; sub_0030A890(); return; /* tail jmp 0x0030A890 */

}

/**
 * sub_0030D790
 * Original: 0x0030D790 - 0x0030D795 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D790(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D790: ;
    g_seh_ebp = ebp; sub_00309FD0(); return; /* tail jmp 0x00309FD0 */

}

/**
 * sub_0030D7A0
 * Original: 0x0030D7A0 - 0x0030D7A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D7A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D7A0: ;
    g_seh_ebp = ebp; sub_0030A170(); return; /* tail jmp 0x0030A170 */

}

/**
 * sub_0030D7B0
 * Original: 0x0030D7B0 - 0x0030D7C6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D7B0(void)
{

loc_0030D7B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D7BBu); RECOMP_ABI_CALL(0x00309830u, sub_00309830); /* call 0x00309830 */

loc_0030D7BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030D7C1u); RECOMP_ABI_CALL(0x0030A790u, sub_0030A790); /* call 0x0030A790 */

loc_0030D7C1: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D7D0
 * Original: 0x0030D7D0 - 0x0030D7D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D7D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D7D0: ;
    g_seh_ebp = ebp; sub_00309830(); return; /* tail jmp 0x00309830 */

}

/**
 * sub_0030D7E0
 * Original: 0x0030D7E0 - 0x0030D7E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D7E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D7E0: ;
    g_seh_ebp = ebp; sub_0030A320(); return; /* tail jmp 0x0030A320 */

}

/**
 * sub_0030D7F0
 * Original: 0x0030D7F0 - 0x0030D7F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D7F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D7F0: ;
    g_seh_ebp = ebp; sub_0030A400(); return; /* tail jmp 0x0030A400 */

}

/**
 * sub_0030D800
 * Original: 0x0030D800 - 0x0030D805 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D800(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D800: ;
    g_seh_ebp = ebp; sub_0030A710(); return; /* tail jmp 0x0030A710 */

}

/**
 * sub_0030D810
 * Original: 0x0030D810 - 0x0030D815 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D810: ;
    g_seh_ebp = ebp; sub_00309DD0(); return; /* tail jmp 0x00309DD0 */

}

/**
 * sub_0030D820
 * Original: 0x0030D820 - 0x0030D826 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D820(void)
{

loc_0030D820: ;
    eax = 0x7FFFFFFF;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D830
 * Original: 0x0030D830 - 0x0030D835 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D830(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D830: ;
    g_seh_ebp = ebp; sub_0030A610(); return; /* tail jmp 0x0030A610 */

}

/**
 * sub_0030D840
 * Original: 0x0030D840 - 0x0030D845 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D840: ;
    g_seh_ebp = ebp; sub_00309DF0(); return; /* tail jmp 0x00309DF0 */

}

/**
 * sub_0030D850
 * Original: 0x0030D850 - 0x0030D855 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D850(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D850: ;
    g_seh_ebp = ebp; sub_00309E90(); return; /* tail jmp 0x00309E90 */

}

/**
 * sub_0030D860
 * Original: 0x0030D860 - 0x0030D865 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D860: ;
    g_seh_ebp = ebp; sub_00309EC0(); return; /* tail jmp 0x00309EC0 */

}

/**
 * sub_0030D870
 * Original: 0x0030D870 - 0x0030D875 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D870: ;
    g_seh_ebp = ebp; sub_00309F00(); return; /* tail jmp 0x00309F00 */

}

/**
 * sub_0030D880
 * Original: 0x0030D880 - 0x0030D885 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D880(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D880: ;
    g_seh_ebp = ebp; sub_00309E40(); return; /* tail jmp 0x00309E40 */

}

/**
 * sub_0030D890
 * Original: 0x0030D890 - 0x0030D895 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D890: ;
    g_seh_ebp = ebp; sub_002123A0(); return; /* tail jmp 0x002123A0 */

}

/**
 * sub_0030D8A0
 * Original: 0x0030D8A0 - 0x0030D8BC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D8A0(void)
{

loc_0030D8A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030D8B4u); RECOMP_ABI_CALL(0x00309FE0u, sub_00309FE0); /* call 0x00309FE0 */

loc_0030D8B4: ;
    eax = MEM32(esp + 0xC);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D8C0
 * Original: 0x0030D8C0 - 0x0030D8F4 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D8C0: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = 0x5E2880;
    /* nop */

loc_0030D8D0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030D8E5; /* je: equal / zero */

loc_0030D8D5: ;
    ecx = ecx + 0x238;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E6F80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5E6F80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030D8D0; /* jl: less (signed <) */

loc_0030D8E4: ;
    esp += 4; return; /* ret */

loc_0030D8E5: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x238);
    edx = edx + 0x5E2880;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D900
 * Original: 0x0030D900 - 0x0030D9C1 (193 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D900: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030D91A; /* jne: not equal / not zero */

loc_0030D909: ;
    PUSH32(esp, 0x42D014);
    PUSH32(esp, 0x0030D913u); RECOMP_ABI_CALL(0x003104F0u, sub_003104F0); /* call 0x003104F0 */

loc_0030D913: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0030D91A: ;
    eax = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030D925u); RECOMP_ABI_CALL(0x003114A0u, sub_003114A0); /* call 0x003114A0 */

loc_0030D925: ;
    esp = esp + 4;
    PUSH32(esp, 0x0030D92Du); RECOMP_ABI_CALL(0x0030D8C0u, sub_0030D8C0); /* call 0x0030D8C0 */

loc_0030D92D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030D952; /* jne: not equal / not zero */

loc_0030D933: ;
    PUSH32(esp, 0x42CFE8);
    PUSH32(esp, 0x0030D93Du); RECOMP_ABI_CALL(0x003104F0u, sub_003104F0); /* call 0x003104F0 */

loc_0030D93D: ;
    ecx = esp + 0x10;
    esp = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030D94Au); RECOMP_ABI_CALL(0x003114B0u, sub_003114B0); /* call 0x003114B0 */

loc_0030D94A: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0030D952: ;
    PUSH32(esp, ebx);
    MEM32(esi + 8) = edi;
    MEM8(esi + 1) = 0;
    ecx = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0030D962u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030D962: ;
    edx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030D96Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030D96C: ;
    eax = eax + ebx;
    ecx = eax * 8;
    MEM32(esi + 0x18) = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    esp = esp + 0x10;
    eax = eax + edx;
    MEM32(esi + 0x14) = eax;
    eax = esi + 0x50;
    ecx = 0x10;
    POP32(esp, ebx);
    goto loc_0030D9A0;

    /* nop */

loc_0030D9A0: ;
    MEM32(eax) = 0;
    eax = eax + 0x20;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030D9A0; /* jne: not equal / not zero */

loc_0030D9AC: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM8(esi) = 1;
    PUSH32(esp, 0x0030D9B9u); RECOMP_ABI_CALL(0x003114B0u, sub_003114B0); /* call 0x003114B0 */

loc_0030D9B9: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D9D0
 * Original: 0x0030D9D0 - 0x0030D9DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D9D0(void)
{

loc_0030D9D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D9E0
 * Original: 0x0030D9E0 - 0x0030DAC6 (230 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D9E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D9E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030D9FB; /* jne: not equal / not zero */

loc_0030D9E9: ;
    PUSH32(esp, 0x42D064);
    PUSH32(esp, 0x0030D9F3u); RECOMP_ABI_CALL(0x003104F0u, sub_003104F0); /* call 0x003104F0 */

loc_0030D9F3: ;
    esp = esp + 4;

loc_0030D9F6: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0030D9FB: ;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x24), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030D9F6; /* jge: greater or equal (signed >=) */

loc_0030DA01: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030DA1E; /* jne: not equal / not zero */

loc_0030DA0A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x42D040);
    PUSH32(esp, 0x0030DA15u); RECOMP_ABI_CALL(0x003104F0u, sub_003104F0); /* call 0x003104F0 */

loc_0030DA15: ;
    esp = esp + 8;
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0030DA1E: ;
    ecx = MEM32(edi + 0x1C);
    eax = ecx + 0xF;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0030DA30; /* jns: not sign (positive) */

loc_0030DA2B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF0u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0030DA30: ;
    eax = eax << 5;
    edx = MEM32(eax + edi + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030DA43; /* jne: not equal / not zero */

loc_0030DA3F: ;
    eax = 0; /* xor self */
    goto loc_0030DA46;

loc_0030DA43: ;
    eax = edx + 1;

loc_0030DA46: ;
    ecx = ecx << 5;
    PUSH32(esp, ebx);
    ecx = ecx + edi + 0x38;
    edx = ebp;
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = ebp;
    esi = edx + 1;
    /* nop */

loc_0030DA60: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030DA60; /* jne: not equal / not zero */

loc_0030DA67: ;
    edx = edx - esi;
    esi = 0;
    MEM32(ecx + 8) = esi;
    if ((edx == 0)) goto loc_0030DA81; /* je: equal / zero */

loc_0030DA73: ;
    ebx = ZX8(MEM8(esi + ebp));
    MEM32(ecx + 8) = MEM32(ecx + 8) + ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0030DA73; /* jb: below (unsigned <) */

loc_0030DA7F: ;
    esi = 0; /* xor self */

loc_0030DA81: ;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x1C) = esi;
    MEM32(ecx + 0xC) = edx;
    esi = MEM32(edi + 0x24);
    ecx = MEM32(edi + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 0x8000000Fu;
    MEM32(edi + 0x24) = esi;
    if (((int32_t)ecx >= 0)) goto loc_0030DAB4; /* jns: not sign (positive) */

loc_0030DAAF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0030DAB4: ;
    MEM32(edi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 1 (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0030DAC3; /* jne: not equal / not zero */

loc_0030DABF: ;
    MEM8(edi + 1) = 2;

loc_0030DAC3: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DAD0
 * Original: 0x0030DAD0 - 0x0030DAF6 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DAD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030DAD0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030DAE7; /* jne: not equal / not zero */

loc_0030DADA: ;
    MEM32(esp + 4) = 0x42D064;
    g_seh_ebp = ebp; sub_003104F0(); return; /* tail jmp 0x003104F0 */

loc_0030DAE7: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030DAF5; /* jne: not equal / not zero */

loc_0030DAEC: ;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;

loc_0030DAF5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030DB00
 * Original: 0x0030DB00 - 0x0030DB4E (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DB00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030DB00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030DB1B; /* jne: not equal / not zero */

loc_0030DB0C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0x42D064;
    g_seh_ebp = ebp; sub_003104F0(); return; /* tail jmp 0x003104F0 */

loc_0030DB1B: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030DB4B; /* je: equal / zero */

loc_0030DB20: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 1) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0030DB3C; /* je: equal / zero */

loc_0030DB2A: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030DB3C; /* jne: not equal / not zero */

loc_0030DB30: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030DB36u); RECOMP_ABI_CALL(0x0030D190u, sub_0030D190); /* call 0x0030D190 */

loc_0030DB36: ;
    esp = esp + 4;
    MEM8(esi + 2) = LO8(ebx);

loc_0030DB3C: ;
    PUSH32(esp, esi);
    MEM32(esi + 0x2C) = ebx;
    PUSH32(esp, 0x0030DB45u); RECOMP_ABI_CALL(0x0030DAD0u, sub_0030DAD0); /* call 0x0030DAD0 */

loc_0030DB45: ;
    esp = esp + 4;
    MEM32(esi + 0x34) = ebx;

loc_0030DB4B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DB50
 * Original: 0x0030DB50 - 0x0030DB74 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030DB50: ;
    PUSH32(esp, esi);
    esi = 0x5E2880;

loc_0030DB56: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030DB64; /* jne: not equal / not zero */

loc_0030DB5B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030DB61u); RECOMP_ABI_CALL(0x003116A0u, sub_003116A0); /* call 0x003116A0 */

loc_0030DB61: ;
    esp = esp + 4;

loc_0030DB64: ;
    esi = esi + 0x238;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E6F80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5E6F80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030DB56; /* jl: less (signed <) */

loc_0030DB72: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DB80
 * Original: 0x0030DB80 - 0x0030DB9E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030DB80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030DB99; /* jne: not equal / not zero */

loc_0030DB88: ;
    PUSH32(esp, 0x42D064);
    PUSH32(esp, 0x0030DB92u); RECOMP_ABI_CALL(0x003104F0u, sub_003104F0); /* call 0x003104F0 */

loc_0030DB92: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0030DB99: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DBA0
 * Original: 0x0030DBA0 - 0x0030DBBD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030DBA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030DBB9; /* jne: not equal / not zero */

loc_0030DBA8: ;
    PUSH32(esp, 0x42D064);
    PUSH32(esp, 0x0030DBB2u); RECOMP_ABI_CALL(0x003104F0u, sub_003104F0); /* call 0x003104F0 */

loc_0030DBB2: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0030DBB9: ;
    eax = MEM32(eax + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DBC0
 * Original: 0x0030DBC0 - 0x0030DBF8 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DBC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030DBC0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030DBD6; /* jne: not equal / not zero */

loc_0030DBC8: ;
    PUSH32(esp, 0x42D064);
    PUSH32(esp, 0x0030DBD2u); RECOMP_ABI_CALL(0x003104F0u, sub_003104F0); /* call 0x003104F0 */

loc_0030DBD2: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0030DBD6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0030DBE7; /* jl: less (signed <) */

loc_0030DBDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0030DBE7; /* jg: greater (signed >) */

loc_0030DBE3: ;
    MEM32(ecx + 0x14) = eax;
    esp += 4; return; /* ret */

loc_0030DBE7: ;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0x42D088;
    g_seh_ebp = ebp; sub_003104F0(); return; /* tail jmp 0x003104F0 */

}

/**
 * sub_0030DC00
 * Original: 0x0030DC00 - 0x0030DC1D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030DC00: ;
    eax = MEM32(0x5BFA64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030DC1C; /* je: equal / zero */

loc_0030DC09: ;
    ecx = MEM32(0x5BFA6C);
    edx = MEM32(0x5BFA68);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030DC19u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DC19: ;
    esp = esp + 8;

loc_0030DC1C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030DC20
 * Original: 0x0030DC20 - 0x0030DC3E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030DC20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030DC36; /* jne: not equal / not zero */

loc_0030DC28: ;
    PUSH32(esp, 0x42D064);
    PUSH32(esp, 0x0030DC32u); RECOMP_ABI_CALL(0x003104F0u, sub_003104F0); /* call 0x003104F0 */

loc_0030DC32: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0030DC36: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 3) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DC40
 * Original: 0x0030DC40 - 0x0030DC60 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030DC40: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030DC5E; /* je: equal / zero */

loc_0030DC49: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030DC4Fu); RECOMP_ABI_CALL(0x0030DB00u, sub_0030DB00); /* call 0x0030DB00 */

loc_0030DC4F: ;
    esp = esp + 4;
    ecx = 0x8E;
    eax = 0; /* xor self */
    MEM8(edi) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0030DC5E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DC60
 * Original: 0x0030DC60 - 0x0030DC7C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DC60(void)
{

loc_0030DC60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030DC78u); RECOMP_ABI_CALL(0x0030D9E0u, sub_0030D9E0); /* call 0x0030D9E0 */

loc_0030DC78: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0030DC80
 * Original: 0x0030DC80 - 0x0030DCB6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DC80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030DC80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030DC97; /* jne: not equal / not zero */

loc_0030DC89: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42D064;
    g_seh_ebp = ebp; sub_003104F0(); return; /* tail jmp 0x003104F0 */

loc_0030DC97: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030DCA7; /* je: equal / zero */

loc_0030DC9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030DCA4u); RECOMP_ABI_CALL(0x0030DB00u, sub_0030DB00); /* call 0x0030DB00 */

loc_0030DCA4: ;
    esp = esp + 4;

loc_0030DCA7: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 1) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DCC0
 * Original: 0x0030DCC0 - 0x0030DDC8 (264 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DCC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030DCC0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = MEM32(edi + 4);
    ebx = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030DCD7u); RECOMP_ABI_CALL(0x0030C930u, sub_0030C930); /* call 0x0030C930 */

loc_0030DCD7: ;
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x0030DCDFu); RECOMP_ABI_CALL(0x0030C940u, sub_0030C940); /* call 0x0030C940 */

loc_0030DCDF: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0030DCE9u); RECOMP_ABI_CALL(0x0030C960u, sub_0030C960); /* call 0x0030C960 */

loc_0030DCE9: ;
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, MEM8(edi + 2));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030DCFB; /* je: equal / zero */

loc_0030DCF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030DD18; /* jne: not equal / not zero */

loc_0030DCFB: ;
    SET_LO8(eax, MEM8(edi + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030DD18; /* jne: not equal / not zero */

loc_0030DD02: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030DD0Du); RECOMP_ABI_CALL(0x0030C890u, sub_0030C890); /* call 0x0030C890 */

loc_0030DD0D: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0030DD18: ;
    eax = MEM32(edi + 0x50);
    ecx = MEM32(ebx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x0030DD29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DD29: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(edi + 0x50);
    esp = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030DD44; /* jge: greater or equal (signed >=) */

loc_0030DD37: ;
    PUSH32(esp, 0x42D0AC);
    PUSH32(esp, 0x0030DD41u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_0030DD41: ;
    esp = esp + 4;

loc_0030DD44: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0030DD51u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DD51: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030DD59u); RECOMP_ABI_CALL(0x0030C8A0u, sub_0030C8A0); /* call 0x0030C8A0 */

loc_0030DD59: ;
    eax = MEM32(esp + 0x24);
    eax = eax - ebp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(edi + 0x90) = eax;
    PUSH32(esp, 0x0030DD6Cu); RECOMP_ABI_CALL(0x0030C890u, sub_0030C890); /* call 0x0030C890 */

loc_0030DD6C: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030DD77u); RECOMP_ABI_CALL(0x0030C8B0u, sub_0030C8B0); /* call 0x0030C8B0 */

loc_0030DD77: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030DD7Eu); RECOMP_ABI_CALL(0x0030C850u, sub_0030C850); /* call 0x0030C850 */

loc_0030DD7E: ;
    SET_LO8(eax, MEM8(edi + 2));
    esp = esp + 0x2C;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030DDB0; /* jne: not equal / not zero */

loc_0030DD88: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0030DD8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DD8E: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(ebx);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0030DDA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DDA0: ;
    eax = MEM32(ebx);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0030DDADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DDAD: ;
    esp = esp + 0x20;

loc_0030DDB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030DDB6u); RECOMP_ABI_CALL(0x0030CA20u, sub_0030CA20); /* call 0x0030CA20 */

loc_0030DDB6: ;
    eax = MEM32(edi + 0x4C);
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x4C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0030DDD0
 * Original: 0x0030DDD0 - 0x0030DE2C (92 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030DDD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030DE29; /* je: equal / zero */

loc_0030DDE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030DE29; /* je: equal / zero */

loc_0030DDE4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030DDEAu); RECOMP_ABI_CALL(0x0030C940u, sub_0030C940); /* call 0x0030C940 */

loc_0030DDEA: ;
    SET_LO8(ecx, MEM8(esi + 0x6C));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030DE13; /* jne: not equal / not zero */

loc_0030DDF4: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030DDFFu); RECOMP_ABI_CALL(0x0030C890u, sub_0030C890); /* call 0x0030C890 */

loc_0030DDFF: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030DE0Du); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_0030DE0D: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030DE13: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030DE26u); RECOMP_ABI_CALL(0x0030D090u, sub_0030D090); /* call 0x0030D090 */

loc_0030DE26: ;
    esp = esp + 8;

loc_0030DE29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DE30
 * Original: 0x0030DE30 - 0x0030E050 (544 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030DE30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030DE30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 4);
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(ebx + 0x98));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x14);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0030E049; /* je: equal / zero */

loc_0030DE57: ;
    ecx = MEM32(esi);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = 0;
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x0030DE71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DE71: ;
    eax = MEM32(esi);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0030DE83u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DE83: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x40);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DE97u); RECOMP_ABI_CALL(0x0030ED20u, sub_0030ED20); /* call 0x0030ED20 */

loc_0030DE97: ;
    esp = esp + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030DECA; /* je: equal / zero */

loc_0030DE9E: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DEA6u); RECOMP_ABI_CALL(0x00306220u, sub_00306220); /* call 0x00306220 */

loc_0030DEA6: ;
    edx = MEM32(esi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0030DEB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DEB3: ;
    ecx = MEM32(esi);
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0030DEC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DEC0: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030DECA: ;
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ecx - edi;
    PUSH32(esp, ecx);
    edx = edx + edi;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DEE7u); RECOMP_ABI_CALL(0x0030E770u, sub_0030E770); /* call 0x0030E770 */

loc_0030DEE7: ;
    ecx = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030DEF9; /* jne: not equal / not zero */

loc_0030DEF4: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0030DF14;

loc_0030DEF9: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x28);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DF0Du); RECOMP_ABI_CALL(0x0030E770u, sub_0030E770); /* call 0x0030E770 */

loc_0030DF0D: ;
    ecx = MEM32(esp + 0x24);
    esp = esp + 0xC;

loc_0030DF14: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    edi = edi + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0030DF58; /* je: equal / zero */

loc_0030DF28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030DF94; /* je: equal / zero */

loc_0030DF2C: ;
    eax = MEM32(esi);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0030DF39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DF39: ;
    edx = MEM32(esi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0030DF46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DF46: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DF4Eu); RECOMP_ABI_CALL(0x00306220u, sub_00306220); /* call 0x00306220 */

loc_0030DF4E: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030DF58: ;
    ecx = MEM32(esi);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0030DF65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DF65: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DF78u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0030DF78: ;
    eax = MEM32(esi);
    ecx = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0030DF85u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DF85: ;
    edx = MEM32(esi);
    eax = esp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0030DF92u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DF92: ;
    goto loc_0030DFD2;

loc_0030DF94: ;
    ecx = MEM32(esi);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0030DFA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DFA1: ;
    edx = MEM32(esp + 0x24);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DFB8u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0030DFB8: ;
    ecx = MEM32(esi);
    edx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0030DFC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DFC5: ;
    eax = MEM32(esi);
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0030DFD2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030DFD2: ;
    esi = MEM32(esp + 0x50);
    esp = esp + 0x34;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DFDFu); RECOMP_ABI_CALL(0x0030C840u, sub_0030C840); /* call 0x0030C840 */

loc_0030DFDF: ;
    edx = MEM32(ebx + 0xA4);
    edx = edx + eax;
    PUSH32(esp, esi);
    MEM32(ebx + 0xA4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DFF3u); RECOMP_ABI_CALL(0x0030C3E0u, sub_0030C3E0); /* call 0x0030C3E0 */

loc_0030DFF3: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DFF9u); RECOMP_ABI_CALL(0x0030C3C0u, sub_0030C3C0); /* call 0x0030C3C0 */

loc_0030DFF9: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DFFFu); RECOMP_ABI_CALL(0x0030CE00u, sub_0030CE00); /* call 0x0030CE00 */

loc_0030DFFF: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E005u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0030E005: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E01F; /* je: equal / zero */

loc_0030E00D: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E015u); RECOMP_ABI_CALL(0x00306220u, sub_00306220); /* call 0x00306220 */

loc_0030E015: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030E01F: ;
    edx = MEM32(ebx + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E029u); RECOMP_ABI_CALL(0x0030C370u, sub_0030C370); /* call 0x0030C370 */

loc_0030E029: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E02Fu); RECOMP_ABI_CALL(0x0030C910u, sub_0030C910); /* call 0x0030C910 */

loc_0030E02F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E036u); RECOMP_ABI_CALL(0x0030C890u, sub_0030C890); /* call 0x0030C890 */

loc_0030E036: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E03Eu); RECOMP_ABI_CALL(0x0030C8B0u, sub_0030C8B0); /* call 0x0030C8B0 */

loc_0030E03E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E046u); RECOMP_ABI_CALL(0x0030C8A0u, sub_0030C8A0); /* call 0x0030C8A0 */

loc_0030E046: ;
    esp = esp + 0x24;

loc_0030E049: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E050
 * Original: 0x0030E050 - 0x0030E16D (285 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030E050(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030E050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E06Fu); RECOMP_ABI_CALL(0x0030D810u, sub_0030D810); /* call 0x0030D810 */

loc_0030E06F: ;
    PUSH32(esp, edi);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E077u); RECOMP_ABI_CALL(0x0030D820u, sub_0030D820); /* call 0x0030D820 */

loc_0030E077: ;
    ecx = MEM32(esi + 0x48);
    ecx = ecx << 1;
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0030E0AD; /* jge: greater or equal (signed >=) */

loc_0030E087: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E091u); RECOMP_ABI_CALL(0x0030C900u, sub_0030C900); /* call 0x0030C900 */

loc_0030E091: ;
    ecx = MEM32(esp + 0x18);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030E0AD; /* jle: less or equal (signed <=) */

loc_0030E09C: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E0A5u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0030E0A5: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E0E4; /* jne: not equal / not zero */

loc_0030E0AD: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030E0E0; /* jne: not equal / not zero */

loc_0030E0B4: ;
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030E0DC; /* jne: not equal / not zero */

loc_0030E0BB: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E0C3u); RECOMP_ABI_CALL(0x0030D7F0u, sub_0030D7F0); /* call 0x0030D7F0 */

loc_0030E0C3: ;
    MEM32(esi + 0x9C) = 0;
    ecx = MEM32(0x5BFA40);
    esp = esp + 8;
    MEM32(esi + 0xA0) = ecx;

loc_0030E0DC: ;
    MEM8(esi + 1) = 3;

loc_0030E0E0: ;
    MEM8(esi + 0x71) = 1;

loc_0030E0E4: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E0EDu); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0030E0ED: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E166; /* jne: not equal / not zero */

loc_0030E0F5: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E0FBu); RECOMP_ABI_CALL(0x00305DF0u, sub_00305DF0); /* call 0x00305DF0 */

loc_0030E0FB: ;
    ecx = MEM32(esi + 0x48);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx << 1;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030E166; /* jle: less or equal (signed <=) */

loc_0030E10E: ;
    ebx = esi + 0x18;
    MEM32(esp + 0x10) = eax;
    goto loc_0030E120;

loc_0030E117: ;
    ecx = MEM32(esp + 0x14);
    goto loc_0030E120;

    /* nop */

loc_0030E120: ;
    esi = MEM32(ebx);
    eax = MEM32(esi);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0030E130u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030E130: ;
    ecx = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x28);
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
    eax = MEM32(esi);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0030E155u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030E155: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 0x1C;
    ebx = ebx + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0030E117; /* jne: not equal / not zero */

loc_0030E166: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E170
 * Original: 0x0030E170 - 0x0030E1E0 (112 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030E170(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030E170: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E17Eu); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0030E17E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E1DE; /* jne: not equal / not zero */

loc_0030E186: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030E191u); RECOMP_ABI_CALL(0x0030C8E0u, sub_0030C8E0); /* call 0x0030C8E0 */

loc_0030E191: ;
    edi = eax;
    esp = esp + 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(0x5ED104) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030E1C6; /* jle: less or equal (signed <=) */

loc_0030E1A2: ;
    PUSH32(esp, esi);
    esi = ebp + 0x18;

loc_0030E1A6: ;
    eax = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0030E1B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030E1B0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    MEM32(0x5ED100) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0030E1C5; /* jge: greater or equal (signed >=) */

loc_0030E1BD: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030E1A6; /* jl: less (signed <) */

loc_0030E1C5: ;
    POP32(esp, esi);

loc_0030E1C6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0030E1DE; /* jne: not equal / not zero */

loc_0030E1CC: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E1D7u); RECOMP_ABI_CALL(0x0030D7E0u, sub_0030D7E0); /* call 0x0030D7E0 */

loc_0030E1D7: ;
    esp = esp + 8;
    MEM8(ebp + 1) = 4;

loc_0030E1DE: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E1E0
 * Original: 0x0030E1E0 - 0x0030E217 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030E1E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E1EEu); RECOMP_ABI_CALL(0x0030D810u, sub_0030D810); /* call 0x0030D810 */

loc_0030E1EE: ;
    MEM32(0x5ED108) = eax;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030E1FCu); RECOMP_ABI_CALL(0x0030D810u, sub_0030D810); /* call 0x0030D810 */

loc_0030E1FC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0030E215; /* jg: greater (signed >) */

loc_0030E203: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030E20Eu); RECOMP_ABI_CALL(0x0030D7F0u, sub_0030D7F0); /* call 0x0030D7F0 */

loc_0030E20E: ;
    esp = esp + 8;
    MEM8(esi + 1) = 5;

loc_0030E215: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E220
 * Original: 0x0030E220 - 0x0030E268 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030E220: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030E244; /* je: equal / zero */

loc_0030E22C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E232u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0030E232: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E244; /* jne: not equal / not zero */

loc_0030E23A: ;
    MEM16(esi + 0x60) = 0xFFFF;
    MEM8(esi + 1) = 6;

loc_0030E244: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030E266; /* je: equal / zero */

loc_0030E24E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E254u); RECOMP_ABI_CALL(0x0030DB80u, sub_0030DB80); /* call 0x0030DB80 */

loc_0030E254: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E266; /* jne: not equal / not zero */

loc_0030E25C: ;
    MEM16(esi + 0x60) = 0xFFFF;
    MEM8(esi + 1) = 6;

loc_0030E266: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E270
 * Original: 0x0030E270 - 0x0030E2C5 (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030E270: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030E2C3; /* je: equal / zero */

loc_0030E27C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E282u); RECOMP_ABI_CALL(0x00305B10u, sub_00305B10); /* call 0x00305B10 */

loc_0030E282: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030E2C3; /* je: equal / zero */

loc_0030E289: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0030E2C3; /* jl: less (signed <) */

loc_0030E290: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030E2A5; /* jle: less or equal (signed <=) */

loc_0030E294: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E2C3; /* jne: not equal / not zero */

loc_0030E298: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030C3A0(); return; /* tail jmp 0x0030C3A0 */

loc_0030E2A5: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030E2AEu); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0030E2AE: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E2C3; /* jne: not equal / not zero */

loc_0030E2B6: ;
    edx = MEM32(esi + 4);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0030C3A0(); return; /* tail jmp 0x0030C3A0 */

loc_0030E2C3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E2D0
 * Original: 0x0030E2D0 - 0x0030E338 (104 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E2D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030E2D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E2E1u); RECOMP_ABI_CALL(0x0030C930u, sub_0030C930); /* call 0x0030C930 */

loc_0030E2E1: ;
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x0030E2E9u); RECOMP_ABI_CALL(0x0030C940u, sub_0030C940); /* call 0x0030C940 */

loc_0030E2E9: ;
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x0030E2F1u); RECOMP_ABI_CALL(0x0030C960u, sub_0030C960); /* call 0x0030C960 */

loc_0030E2F1: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0030E2FBu); RECOMP_ABI_CALL(0x0030CA10u, sub_0030CA10); /* call 0x0030CA10 */

loc_0030E2FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E303u); RECOMP_ABI_CALL(0x0030C8A0u, sub_0030C8A0); /* call 0x0030C8A0 */

loc_0030E303: ;
    eax = MEM32(esp + 0x2C);
    eax = eax - ebx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(edi + 0x90) = eax;
    PUSH32(esp, 0x0030E316u); RECOMP_ABI_CALL(0x0030C890u, sub_0030C890); /* call 0x0030C890 */

loc_0030E316: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E31Du); RECOMP_ABI_CALL(0x0030C8B0u, sub_0030C8B0); /* call 0x0030C8B0 */

loc_0030E31D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E324u); RECOMP_ABI_CALL(0x0030C850u, sub_0030C850); /* call 0x0030C850 */

loc_0030E324: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x30DCC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E330u); RECOMP_ABI_CALL(0x0030C870u, sub_0030C870); /* call 0x0030C870 */

loc_0030E330: ;
    esp = esp + 0x3C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E340
 * Original: 0x0030E340 - 0x0030E651 (785 bytes, 283 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E340(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030E340: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    SET_LO8(eax, MEM8(esi + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0xC) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0030E362; /* je: equal / zero */

loc_0030E35E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E3BC; /* jne: not equal / not zero */

loc_0030E362: ;
    _fa = (uint32_t)(MEM8(esi + 0xA8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xA8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E3BC; /* jne: not equal / not zero */

loc_0030E36B: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E374u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0030E374: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E64A; /* je: equal / zero */

loc_0030E380: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E390; /* je: equal / zero */

loc_0030E387: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x0030E38Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030E38D: ;
    esp = esp + 4;

loc_0030E390: ;
    edx = MEM32(esi + 0xBC);
    eax = MEM32(esi + 0xB8);
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xB0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E3B2u); RECOMP_ABI_CALL(0x00305980u, sub_00305980); /* call 0x00305980 */

loc_0030E3B2: ;
    esp = esp + 0x14;
    MEM8(esi + 0xA8) = 0;

loc_0030E3BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E3C2u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0030E3C2: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E64A; /* jne: not equal / not zero */

loc_0030E3CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E3D4u); RECOMP_ABI_CALL(0x0030C8E0u, sub_0030C8E0); /* call 0x0030C8E0 */

loc_0030E3D4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030E40C; /* jle: less or equal (signed <=) */

loc_0030E3DF: ;
    PUSH32(esp, 0x10);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E3EDu); RECOMP_ABI_CALL(0x00307520u, sub_00307520); /* call 0x00307520 */

loc_0030E3ED: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42D0D8);
    PUSH32(esp, 0x0030E3FCu); RECOMP_ABI_CALL(0x00307450u, sub_00307450); /* call 0x00307450 */

loc_0030E3FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E402u); RECOMP_ABI_CALL(0x00305A90u, sub_00305A90); /* call 0x00305A90 */

loc_0030E402: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0030E40C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E413u); RECOMP_ABI_CALL(0x0030C8D0u, sub_0030C8D0); /* call 0x0030C8D0 */

loc_0030E413: ;
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x0030E41Bu); RECOMP_ABI_CALL(0x0030C920u, sub_0030C920); /* call 0x0030C920 */

loc_0030E41B: ;
    ebx = eax;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x38)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x38))); }
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030E432; /* jle: less or equal (signed <=) */

loc_0030E42A: ;
    ecx = eax + eax * 2;
    MEM32(esi + 0x48) = ecx;
    goto loc_0030E43D;

loc_0030E432: ;
    eax = eax + eax * 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esi + 0x48) = eax;

loc_0030E43D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E443u); RECOMP_ABI_CALL(0x0030C900u, sub_0030C900); /* call 0x0030C900 */

loc_0030E443: ;
    ecx = eax;
    eax = MEM32(esi + 0x48);
    ecx = ecx << 1;
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x0030E45Cu); RECOMP_ABI_CALL(0x0030C370u, sub_0030C370); /* call 0x0030C370 */

loc_0030E45C: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030E515; /* jle: less or equal (signed <=) */

loc_0030E467: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E476; /* jne: not equal / not zero */

loc_0030E46D: ;
    MEM32(esi + 0x50) = 0;
    goto loc_0030E4DB;

loc_0030E476: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E47Cu); RECOMP_ABI_CALL(0x0030C970u, sub_0030C970); /* call 0x0030C970 */

loc_0030E47C: ;
    edx = eax;
    edx = edx & 0x800007FFu;
    if (((int32_t)edx >= 0)) goto loc_0030E48E; /* jns: not sign (positive) */

loc_0030E486: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFF800u;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0030E48E: ;
    ecx = 0x800;
    ecx = ecx - edx;
    ecx = ecx & 0x800007FFu;
    if (((int32_t)ecx >= 0)) goto loc_0030E4A5; /* jns: not sign (positive) */

loc_0030E49D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFF800u;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0030E4A5: ;
    eax = eax + 0x7FF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    edx = MEM32(esi + 8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esi + 0x50) = ecx;
    MEM32(esi + 0x8C) = eax;
    PUSH32(esp, 0x0030E4C9u); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_0030E4C9: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x30DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E4D8u); RECOMP_ABI_CALL(0x0030D1C0u, sub_0030D1C0); /* call 0x0030D1C0 */

loc_0030E4D8: ;
    esp = esp + 0x18;

loc_0030E4DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E4E1u); RECOMP_ABI_CALL(0x0030C960u, sub_0030C960); /* call 0x0030C960 */

loc_0030E4E1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E4E7u); RECOMP_ABI_CALL(0x0030C930u, sub_0030C930); /* call 0x0030C930 */

loc_0030E4E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 0x90) = eax;
    PUSH32(esp, 0x0030E4F4u); RECOMP_ABI_CALL(0x0030C890u, sub_0030C890); /* call 0x0030C890 */

loc_0030E4F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E4FCu); RECOMP_ABI_CALL(0x0030C8B0u, sub_0030C8B0); /* call 0x0030C8B0 */

loc_0030E4FC: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E504u); RECOMP_ABI_CALL(0x0030C8A0u, sub_0030C8A0); /* call 0x0030C8A0 */

loc_0030E504: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x30E2D0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E510u); RECOMP_ABI_CALL(0x0030C870u, sub_0030C870); /* call 0x0030C870 */

loc_0030E510: ;
    esp = esp + 0x2C;
    goto loc_0030E556;

loc_0030E515: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030E52A; /* je: equal / zero */

loc_0030E51C: ;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E527u); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_0030E527: ;
    esp = esp + 8;

loc_0030E52A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E530u); RECOMP_ABI_CALL(0x0030C910u, sub_0030C910); /* call 0x0030C910 */

loc_0030E530: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E537u); RECOMP_ABI_CALL(0x0030C890u, sub_0030C890); /* call 0x0030C890 */

loc_0030E537: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E53Fu); RECOMP_ABI_CALL(0x0030C8B0u, sub_0030C8B0); /* call 0x0030C8B0 */

loc_0030E53F: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E547u); RECOMP_ABI_CALL(0x0030C8A0u, sub_0030C8A0); /* call 0x0030C8A0 */

loc_0030E547: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x30DE30);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E553u); RECOMP_ABI_CALL(0x0030C870u, sub_0030C870); /* call 0x0030C870 */

loc_0030E553: ;
    esp = esp + 0x28;

loc_0030E556: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E55Cu); RECOMP_ABI_CALL(0x0030C8D0u, sub_0030C8D0); /* call 0x0030C8D0 */

loc_0030E55C: ;
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x0030E564u); RECOMP_ABI_CALL(0x0030C8E0u, sub_0030C8E0); /* call 0x0030C8E0 */

loc_0030E564: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x0030E56Cu); RECOMP_ABI_CALL(0x0030C910u, sub_0030C910); /* call 0x0030C910 */

loc_0030E56C: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0030E576u); RECOMP_ABI_CALL(0x0030C8F0u, sub_0030C8F0); /* call 0x0030C8F0 */

loc_0030E576: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030E580u); RECOMP_ABI_CALL(0x0030D880u, sub_0030D880); /* call 0x0030D880 */

loc_0030E580: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030E58Au); RECOMP_ABI_CALL(0x0030D850u, sub_0030D850); /* call 0x0030D850 */

loc_0030E58A: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E594u); RECOMP_ABI_CALL(0x0030D840u, sub_0030D840); /* call 0x0030D840 */

loc_0030E594: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030E5A2u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0030E5A2: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E5ABu); RECOMP_ABI_CALL(0x0030C980u, sub_0030C980); /* call 0x0030C980 */

loc_0030E5AB: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    ecx = SX16(LO16(eax));
    eax = MEM32(esi + 0xC);
    ecx = ecx + edx;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E5BEu); RECOMP_ABI_CALL(0x0030D860u, sub_0030D860); /* call 0x0030D860 */

loc_0030E5BE: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E5CEu); RECOMP_ABI_CALL(0x00306180u, sub_00306180); /* call 0x00306180 */

loc_0030E5CE: ;
    eax = MEM32(esp + 0x84);
    ecx = MEM32(esp + 0x58);
    esp = esp + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030E5E4; /* jne: not equal / not zero */

loc_0030E5E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030E5EF; /* je: equal / zero */

loc_0030E5E4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E5ECu); RECOMP_ABI_CALL(0x003060F0u, sub_003060F0); /* call 0x003060F0 */

loc_0030E5EC: ;
    esp = esp + 0xC;

loc_0030E5EF: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030E600; /* je: equal / zero */

loc_0030E5F6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E5FDu); RECOMP_ABI_CALL(0x0030C0C0u, sub_0030C0C0); /* call 0x0030C0C0 */

loc_0030E5FD: ;
    esp = esp + 8;

loc_0030E600: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E606u); RECOMP_ABI_CALL(0x0030C8C0u, sub_0030C8C0); /* call 0x0030C8C0 */

loc_0030E606: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E621; /* jne: not equal / not zero */

loc_0030E60E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030E614u); RECOMP_ABI_CALL(0x0030CA00u, sub_0030CA00); /* call 0x0030CA00 */

loc_0030E614: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E61Eu); RECOMP_ABI_CALL(0x0030D8A0u, sub_0030D8A0); /* call 0x0030D8A0 */

loc_0030E61E: ;
    esp = esp + 0xC;

loc_0030E621: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030E62Cu); RECOMP_ABI_CALL(0x0030D7E0u, sub_0030D7E0); /* call 0x0030D7E0 */

loc_0030E62C: ;
    eax = MEM32(0x5BFA70);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030E645; /* je: equal / zero */

loc_0030E638: ;
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030E642u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030E642: ;
    esp = esp + 0x10;

loc_0030E645: ;
    MEM8(esi + 1) = 2;
    POP32(esp, ebp);

loc_0030E64A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0030E660
 * Original: 0x0030E660 - 0x0030E6F2 (146 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030E660: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030E677; /* jne: not equal / not zero */

loc_0030E669: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42D118;
    g_seh_ebp = ebp; sub_00307410(); return; /* tail jmp 0x00307410 */

loc_0030E677: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E698; /* jne: not equal / not zero */

loc_0030E67E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E684u); RECOMP_ABI_CALL(0x0030E170u, sub_0030E170); /* call 0x0030E170 */

loc_0030E684: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E68Du); RECOMP_ABI_CALL(0x0030E270u, sub_0030E270); /* call 0x0030E270 */

loc_0030E68D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E693u); RECOMP_ABI_CALL(0x0030E220u, sub_0030E220); /* call 0x0030E220 */

loc_0030E693: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030E698: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E6B6; /* jne: not equal / not zero */

loc_0030E69C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E6A2u); RECOMP_ABI_CALL(0x0030E340u, sub_0030E340); /* call 0x0030E340 */

loc_0030E6A2: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E6ABu); RECOMP_ABI_CALL(0x0030E270u, sub_0030E270); /* call 0x0030E270 */

loc_0030E6AB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E6B1u); RECOMP_ABI_CALL(0x0030E220u, sub_0030E220); /* call 0x0030E220 */

loc_0030E6B1: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030E6B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E6D4; /* jne: not equal / not zero */

loc_0030E6BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E6C0u); RECOMP_ABI_CALL(0x0030E050u, sub_0030E050); /* call 0x0030E050 */

loc_0030E6C0: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E6C9u); RECOMP_ABI_CALL(0x0030E270u, sub_0030E270); /* call 0x0030E270 */

loc_0030E6C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E6CFu); RECOMP_ABI_CALL(0x0030E220u, sub_0030E220); /* call 0x0030E220 */

loc_0030E6CF: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030E6D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E6E1; /* jne: not equal / not zero */

loc_0030E6D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E6DEu); RECOMP_ABI_CALL(0x0030E1E0u, sub_0030E1E0); /* call 0x0030E1E0 */

loc_0030E6DE: ;
    esp = esp + 4;

loc_0030E6E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E6E7u); RECOMP_ABI_CALL(0x0030E270u, sub_0030E270); /* call 0x0030E270 */

loc_0030E6E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E6EDu); RECOMP_ABI_CALL(0x0030E220u, sub_0030E220); /* call 0x0030E220 */

loc_0030E6ED: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E700
 * Original: 0x0030E700 - 0x0030E765 (101 bytes, 33 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0030E700(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0030E700: ;
    fp_push(MEMD(0x3E20C0)); /* fld double */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C8328); /* fmul dword ptr [0x3c8328] */
    fp_top() = fp_top() / (double)SMEM32(esp + 8); /* fidiv dword ptr [esp + 8] */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = fp_st1() - fp_top(); /* fsubr st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 3) & 7]; /* fadd st(3) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = g_fp_stack[(g_fp_top + 2) & 7] - fp_top(); /* fsubr st(2) */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x42D148)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    PUSH32(esp, 0x0030E745u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030E745: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = MEM32(esp + 0xC);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEM16(ecx) = LO16(eax);
    fp_top() = fp_top() * MEMF(0x42D144); /* fmul dword ptr [0x42d144] */
    PUSH32(esp, 0x0030E75Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030E75B: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esp + 0x10);
    MEM16(edx) = LO16(eax);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030E770
 * Original: 0x0030E770 - 0x0030E7AD (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030E770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030E770: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030E78F; /* jle: less or equal (signed <=) */

loc_0030E77B: ;
    edx = MEM32(esp + 4);
    /* nop */

loc_0030E780: ;
    _fa = (uint32_t)(MEM16(eax + edx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + edx), 0x80 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E79C; /* je: equal / zero */

loc_0030E788: ;
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030E780; /* jl: less (signed <) */

loc_0030E78F: ;
    edx = MEM32(esp + 0xC);
    MEM16(edx) = 0;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0030E79C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030E78F; /* jge: greater or equal (signed >=) */

loc_0030E7A3: ;
    ecx = MEM32(esp + 0xC);
    MEM16(ecx) = LO16(eax);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030E7B0
 * Original: 0x0030E7B0 - 0x0030E87A (202 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030E7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030E7B0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030E7BB; /* jge: greater or equal (signed >=) */

loc_0030E7B7: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0030E7BB: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax));
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x8000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E7D3; /* je: equal / zero */

loc_0030E7CD: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_0030E7D3: ;
    SET_LO16(edx, ZX8(MEM8(eax + 3)));
    SET_HI8(edx, MEM8(eax + 2));
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    edx = edx + 4;
    MEM16(ecx) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 4));
    ecx = MEM32(esp + 0x18);
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 5));
    ecx = MEM32(esp + 0x1C);
    MEM8(esi) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 6));
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 7));
    MEM8(edi) = LO8(edx);
    edx = ZX8(MEM8(eax + 9));
    SET_HI8(edx, MEM8(eax + 8));
    edi = ZX8(MEM8(eax + 0xA));
    edx = edx << 8;
    edx = edx | edi;
    edi = ZX8(MEM8(eax + 0xB));
    edx = edx << 8;
    edx = edx | edi;
    edi = MEM32(esp + 0x28);
    MEM32(edi) = edx;
    edi = ZX8(MEM8(eax + 0xE));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + 0xC));
    SET_LO8(edx, MEM8(eax + 0xD));
    eax = ZX8(MEM8(eax + 0xF));
    edx = edx << 8;
    edx = edx | edi;
    edx = edx << 8;
    edx = edx | eax;
    eax = MEM32(esp + 0x2C);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030E85F; /* jne: not equal / not zero */

loc_0030E850: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    MEM32(ecx) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030E85F: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    eax = eax * 8 + -16;
    ecx = SX8(LO8(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030E880
 * Original: 0x0030E880 - 0x0030E8D0 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030E880: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030E8B8; /* jl: less (signed <) */

loc_0030E887: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, ZX8(MEM8(ecx + 1)));
    SET_HI8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E89E; /* je: equal / zero */

loc_0030E898: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_0030E89E: ;
    SET_LO16(eax, MEM16(ecx + 2));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(eax));
    edx = ZX16(LO16(eax));
    edx = edx >> 8;
    eax = SX16(LO16(ebx));
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0030E8BC; /* jge: greater or equal (signed >=) */

loc_0030E8B8: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0030E8BC: ;
    SET_LO16(eax, MEM16(ecx + 0x10));
    edx = MEM32(esp + 0xC);
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    eax = 0; /* xor self */
    MEM16(edx) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E8D0
 * Original: 0x0030E8D0 - 0x0030E921 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030E8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030E8D0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030E908; /* jl: less (signed <) */

loc_0030E8D7: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, ZX8(MEM8(ecx + 1)));
    SET_HI8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E8EE; /* je: equal / zero */

loc_0030E8E8: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_0030E8EE: ;
    SET_LO16(eax, MEM16(ecx + 2));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(eax));
    edx = ZX16(LO16(eax));
    edx = edx >> 8;
    eax = SX16(LO16(ebx));
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0030E90C; /* jge: greater or equal (signed >=) */

loc_0030E908: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0030E90C: ;
    SET_LO8(edx, MEM8(ecx + 0x12));
    eax = MEM32(esp + 0xC);
    MEM8(eax) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 0x13));
    edx = MEM32(esp + 0x10);
    MEM8(edx) = LO8(ecx);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030E930
 * Original: 0x0030E930 - 0x0030EA04 (212 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030E930: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = esp + 0xB;
    PUSH32(esp, eax);
    ecx = esp + 0xE;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030E94Cu); RECOMP_ABI_CALL(0x0030E8D0u, sub_0030E8D0); /* call 0x0030E8D0 */

loc_0030E94C: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030E99B; /* jne: not equal / not zero */

loc_0030E953: ;
    _fa = (uint32_t)(MEM8(esp + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xA), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0030E9E6; /* jb: below (unsigned <) */

loc_0030E95E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030E96C; /* jge: greater or equal (signed >=) */

loc_0030E963: ;
    POP32(esp, edi);
    eax = 0xFFFFFFFFu;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030E96C: ;
    SET_LO16(edx, ZX8(MEM8(esi + 1)));
    SET_HI8(edx, MEM8(esi));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x8000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E983; /* je: equal / zero */

loc_0030E97A: ;
    POP32(esp, edi);
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030E983: ;
    SET_LO16(eax, MEM16(esi + 2));
    edx = 0; /* xor self */
    SET_HI8(edx, LO8(eax));
    ecx = ZX16(LO16(eax));
    ecx = ecx >> 8;
    eax = SX16(LO16(edx));
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030E9A2; /* jge: greater or equal (signed >=) */

loc_0030E99B: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030E9A2: ;
    SET_LO16(eax, MEM16(esi + 0x18));
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    MEM16(ecx) = LO16(edx);
    SET_LO16(eax, MEM16(esi + 0x1A));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    MEM16(edi) = LO16(edx);
    SET_LO16(eax, MEM16(esi + 0x1C));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    MEM16(ecx + 2) = LO16(edx);
    SET_LO16(eax, MEM16(esi + 0x1E));
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    eax = 0; /* xor self */
    MEM16(edi + 2) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030E9E6: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = 0; /* xor self */
    MEM16(eax + 2) = LO16(edx);
    MEM16(ecx + 2) = LO16(edx);
    MEM16(eax) = LO16(edx);
    POP32(esp, edi);
    MEM16(ecx) = LO16(edx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030EA10
 * Original: 0x0030EA10 - 0x0030EBCD (445 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EA10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030EA10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM16(ebp) = 0;
    PUSH32(esp, 0x0030EA37u); RECOMP_ABI_CALL(0x0030E8D0u, sub_0030E8D0); /* call 0x0030E8D0 */

loc_0030EA37: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030EBC8; /* jne: not equal / not zero */

loc_0030EA42: ;
    SET_LO8(edx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    ecx = 0x30;
    if (CMP_NE(_fa, _fb)) goto loc_0030EA55; /* jne: not equal / not zero */

loc_0030EA50: ;
    ecx = 0x3C;

loc_0030EA55: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030EA61; /* jge: greater or equal (signed >=) */

loc_0030EA59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030EA61: ;
    SET_LO16(eax, ZX8(MEM8(esi + 1)));
    SET_HI8(eax, MEM8(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030EA78; /* je: equal / zero */

loc_0030EA6E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030EA78: ;
    SET_LO16(eax, MEM16(esi + 2));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(eax));
    edi = ZX16(LO16(eax));
    edi = edi >> 8;
    ecx = ecx + 0xFFFFFFFCu;
    eax = SX16(LO16(ebx));
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030EA9C; /* jge: greater or equal (signed >=) */

loc_0030EA93: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030EA9C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    eax = 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_0030EAAB; /* jne: not equal / not zero */

loc_0030EAA6: ;
    eax = 0x20;

loc_0030EAAB: ;
    SET_LO16(ecx, MEM16(eax + esi));
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(ecx));
    edx = ZX16(LO16(ecx));
    edx = edx >> 8;
    eax = eax + 2;
    ecx = SX16(LO16(ebx));
    edx = edx | ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = edx;
    SET_LO16(ecx, MEM16(eax + esi));
    edx = 0; /* xor self */
    SET_LO16(edi, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    edi = edi | edx;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 1 (16-bit) */
    MEM16(ebp) = LO16(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0030EAEA; /* je: equal / zero */

loc_0030EADF: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030EAEA: ;
    SET_LO16(ecx, MEM16(eax + esi + 4));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ecx = MEM32(esp + 0x28);
    eax = eax + 4;
    eax = eax + 2;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    MEM16(ecx) = LO16(edx);
    ecx = MEM32(eax + esi + -12);
    edx = ecx;
    MEM32(esp + 0x24) = ecx;
    edx = edx << 0x10;
    ecx = ecx & 0xFF00;
    edx = edx | ecx;
    ecx = MEM32(esp + 0x24);
    edx = edx << 8;
    ecx = ecx >> 0x18;
    edx = edx | ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esp + 0x26));
    POP32(esp, ebx);
    edx = edx | ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + esi + -8);
    edx = ecx;
    MEM32(esp + 0x20) = ecx;
    edx = edx << 0x10;
    ecx = ecx & 0xFF00;
    edx = edx | ecx;
    ecx = MEM32(esp + 0x20);
    edx = edx << 8;
    ecx = ecx >> 0x18;
    edx = edx | ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esp + 0x22));
    edx = edx | ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + esi + -4);
    edx = ecx;
    edx = edx << 0x10;
    MEM32(esp + 0x20) = ecx;
    ecx = ecx & 0xFF00;
    edx = edx | ecx;
    ecx = MEM32(esp + 0x20);
    edx = edx << 8;
    ecx = ecx >> 0x18;
    edx = edx | ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esp + 0x22));
    edx = edx | ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(ecx) = edx;
    eax = MEM32(eax + esi);
    edx = eax;
    MEM32(esp + 0x20) = eax;
    edx = edx << 0x10;
    eax = eax & 0xFF00;
    edx = edx | eax;
    eax = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esp + 0x22));
    edx = edx << 8;
    eax = eax >> 0x18;
    edx = edx | eax;
    eax = MEM32(esp + 0x34);
    edx = edx | ecx;
    MEM32(eax) = edx;
    eax = 0; /* xor self */

loc_0030EBC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030EBD0
 * Original: 0x0030EBD0 - 0x0030ED1E (334 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030EBD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(edi) = 0;
    PUSH32(esp, 0x0030EBF7u); RECOMP_ABI_CALL(0x0030E8D0u, sub_0030E8D0); /* call 0x0030E8D0 */

loc_0030EBF7: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030ED19; /* jne: not equal / not zero */

loc_0030EC02: ;
    SET_LO8(edx, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    ecx = 0x3C;
    if (CMP_NE(_fa, _fb)) goto loc_0030EC15; /* jne: not equal / not zero */

loc_0030EC10: ;
    ecx = 0x48;

loc_0030EC15: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030EC48; /* jl: less (signed <) */

loc_0030EC19: ;
    SET_LO16(eax, ZX8(MEM8(esi + 1)));
    SET_HI8(eax, MEM8(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030EC8B; /* jne: not equal / not zero */

loc_0030EC26: ;
    SET_LO16(eax, MEM16(esi + 2));
    MEM32(esp + 0x1C) = edx;
    edx = 0; /* xor self */
    SET_HI8(edx, LO8(eax));
    ebx = ZX16(LO16(eax));
    ebx = ebx >> 8;
    ecx = ecx + 0xFFFFFFFCu;
    eax = SX16(LO16(edx));
    edx = MEM32(esp + 0x1C);
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030EC50; /* jge: greater or equal (signed >=) */

loc_0030EC48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030EC50: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    eax = 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_0030EC5F; /* jne: not equal / not zero */

loc_0030EC5A: ;
    eax = 0x20;

loc_0030EC5F: ;
    edx = ZX8(MEM8(eax + esi + 6));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + esi + 4));
    eax = eax + 4;
    eax = eax + 4;
    SET_LO8(ecx, MEM8(eax + esi + -3));
    ecx = ecx << 8;
    ecx = ecx | edx;
    edx = ZX8(MEM8(eax + esi + -1));
    ecx = ecx << 8;
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41494E46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x41494E46 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030EC95; /* je: equal / zero */

loc_0030EC8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030EC95: ;
    ecx = MEM32(eax + esi);
    edx = ecx;
    edx = edx << 0x10;
    MEM32(esp + 0x1C) = ecx;
    ecx = ecx & 0xFF00;
    edx = edx | ecx;
    ecx = MEM32(esp + 0x1C);
    edx = edx << 8;
    ecx = ecx >> 0x18;
    edx = edx | ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esp + 0x1E));
    eax = eax + 4;
    edx = edx | ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(edi) = edx;
    edx = eax + esi;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    SET_LO16(ecx, MEM16(eax + esi + 0x10));
    eax = eax + 0x10;
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ecx = MEM32(esp + 0x24);
    eax = eax + 4;
    MEM16(ecx) = LO16(edx);
    SET_LO16(ecx, MEM16(eax + esi));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ecx = MEM32(esp + 0x28);
    MEM16(ecx) = LO16(edx);
    SET_LO16(eax, MEM16(eax + esi + 2));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    eax = 0; /* xor self */
    MEM16(ecx + 2) = LO16(edx);

loc_0030ED19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030ED20
 * Original: 0x0030ED20 - 0x0030ED5A (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030ED20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030ED20: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030ED2B; /* jge: greater or equal (signed >=) */

loc_0030ED27: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0030ED2B: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, ZX8(MEM8(eax + 1)));
    SET_HI8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x8001 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030ED43; /* je: equal / zero */

loc_0030ED3D: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_0030ED43: ;
    SET_LO16(eax, MEM16(eax + 2));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    eax = MEM32(esp + 0xC);
    edx = edx + 4;
    MEM16(eax) = LO16(edx);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030ED60
 * Original: 0x0030ED60 - 0x0030ED9E (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030ED60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030ED60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_0030ED85; /* jne: not equal / not zero */

loc_0030ED6D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    eax = eax + esi;
    eax = eax + ecx + 0x21;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax - esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030ED85: ;
    ecx = MEM32(esp + 0xC);
    edx = ecx + esi;
    ecx = MEM32(esp + 0x14);
    eax = edx + ecx + 0x39;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax - esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030EDA0
 * Original: 0x0030EDA0 - 0x0030EDE4 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030EDA0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030EDC9; /* jle: less or equal (signed <=) */

loc_0030EDC6: ;
    MEM32(eax + 4) = edx;

loc_0030EDC9: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) - edx;
    if ((MEM32(ecx + 4) != 0)) goto loc_0030EDD9; /* jne: not equal / not zero */

loc_0030EDD1: ;
    MEM32(ecx) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030EDD9: ;
    esi = MEM32(eax);
    edx = MEM32(eax + 4);
    edx = edx + esi;
    MEM32(ecx) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030EDF0
 * Original: 0x0030EDF0 - 0x0030EE61 (113 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EDF0(void)
{

loc_0030EDF0: ;
    ecx = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 1);
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    eax = MEM32(eax * 4 + 0x4767F8);
    eax = eax << 4;
    PUSH32(esp, esi);
    esi = MEM32(edx * 4 + 0x4767F8);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 2);
    eax = eax + esi;
    esi = MEM32(edx * 4 + 0x4767F8);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 3);
    eax = eax << 4;
    eax = eax + esi;
    esi = MEM32(edx * 4 + 0x4767F8);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 4);
    eax = eax << 4;
    eax = eax + esi;
    esi = MEM32(edx * 4 + 0x4767F8);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 5);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 6);
    eax = eax << 4;
    eax = eax + esi;
    esi = MEM32(edx * 4 + 0x4767F8);
    edx = MEM32(ecx * 4 + 0x4767F8);
    eax = eax << 4;
    eax = eax + esi;
    eax = eax << 4;
    eax = eax + edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030EE70
 * Original: 0x0030EE70 - 0x0030EE8F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EE70(void)
{

loc_0030EE70: ;
    eax = MEM32(esp + 4);
    ecx = eax + 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = eax + 8;
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x0030EE87u); RECOMP_ABI_CALL(0x0030EDF0u, sub_0030EDF0); /* call 0x0030EDF0 */

loc_0030EE87: ;
    esp = esp + 4;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030EE90
 * Original: 0x0030EE90 - 0x0030EF18 (136 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EE90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030EE90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp) = 0;
    MEM32(ebp + 4) = 0;
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    edi = edi + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0030EEFC; /* jae: above or equal (unsigned >=) */

loc_0030EEB5: ;
    ebx = MEM32(esp + 0x1C);
    /* nop */

loc_0030EEC0: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030EECDu); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_0030EECD: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030EF03; /* je: equal / zero */

loc_0030EED4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030EEE8; /* je: equal / zero */

loc_0030EED8: ;
    PUSH32(esp, 7);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030EEE1u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_0030EEE1: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030EEFC; /* je: equal / zero */

loc_0030EEE8: ;
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030EEF1u); RECOMP_ABI_CALL(0x0030EDF0u, sub_0030EDF0); /* call 0x0030EDF0 */

loc_0030EEF1: ;
    esi = esi + eax + 0x10;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0030EEC0; /* jb: below (unsigned <) */

loc_0030EEFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0030EF03: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030EF0Au); RECOMP_ABI_CALL(0x0030EE70u, sub_0030EE70); /* call 0x0030EE70 */

loc_0030EF0A: ;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0030EEFC; /* jae: above or equal (unsigned >=) */

loc_0030EF11: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030EF20
 * Original: 0x0030EF20 - 0x0030EF2C (12 bytes, 4 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EF20(void)
{

loc_0030EF20: ;
    PUSH32(esp, 0x42D198);
    PUSH32(esp, 0x0030EF2Au); RECOMP_ABI_CALL(0x0031CE60u, sub_0031CE60); /* call 0x0031CE60 */

loc_0030EF2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030EF30
 * Original: 0x0030EF30 - 0x0030EF5E (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EF30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030EF30: ;
    eax = MEM32(0x42D154);
    PUSH32(esp, 0x0030EF3Au); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030EF3A: ;
    eax = MEM32(0x5BFA78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030EF53; /* jne: not equal / not zero */

loc_0030EF43: ;
    PUSH32(esp, edi);
    ecx = 0x1000;
    eax = 0; /* xor self */
    edi = 0x5E9100;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0030EF53: ;
    MEM32(0x5BFA78) = MEM32(0x5BFA78) + 1;
    _fa = (uint32_t)(MEM32(0x5BFA78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0030EF60
 * Original: 0x0030EF60 - 0x0030EF82 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EF60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030EF60: ;
    PUSH32(esp, 0x0030EF65u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030EF65: ;
    MEM32(0x5BFA78) = MEM32(0x5BFA78) - 1;
    _fa = (uint32_t)(MEM32(0x5BFA78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030EF7D; /* jne: not equal / not zero */

loc_0030EF6D: ;
    PUSH32(esp, edi);
    ecx = 0x1000;
    eax = 0; /* xor self */
    edi = 0x5E9100;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0030EF7D: ;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0030EF90
 * Original: 0x0030EF90 - 0x0030EFB2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EF90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030EF90: ;
    PUSH32(esp, 0x0030EF95u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030EF95: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030EFAD; /* je: equal / zero */

loc_0030EF9D: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x10;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 4) = eax;
    POP32(esp, edi);

loc_0030EFAD: ;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0030EFC0
 * Original: 0x0030EFC0 - 0x0030EFC8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EFC0(void)
{

loc_0030EFC0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0030EFD0
 * Original: 0x0030EFD0 - 0x0030EFFB (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EFD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030EFD0: ;
    PUSH32(esp, 0x0030EFD5u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030EFD5: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x20);
    ecx = 0; /* xor self */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0030F000
 * Original: 0x0030F000 - 0x0030F032 (50 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030F000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F000: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F011; /* jne: not equal / not zero */

loc_0030F009: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

loc_0030F011: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0030F01D; /* jne: not equal / not zero */

loc_0030F019: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

loc_0030F01D: ;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F02F; /* je: equal / zero */

loc_0030F024: ;
    edx = MEM32(ecx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F02Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F02C: ;
    esp = esp + 8;

loc_0030F02F: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030F040
 * Original: 0x0030F040 - 0x0030F13C (252 bytes, 95 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F040: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030F047u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030F047: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_0030F0B0; /* jne: not equal / not zero */

loc_0030F053: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(ecx + 0x24);
    eax = eax - edx;
    edx = MEM32(ecx + 0x20);
    eax = eax + edx;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030F069; /* jge: greater or equal (signed >=) */

loc_0030F067: ;
    eax = edx;

loc_0030F069: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    esi = MEM32(esp + 0x18);
    MEM32(esi + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0030F07A; /* jge: greater or equal (signed >=) */

loc_0030F078: ;
    edx = eax;

loc_0030F07A: ;
    MEM32(esi + 4) = edx;
    edi = MEM32(ecx + 0x14);
    eax = MEM32(ecx + 0x1C);
    eax = eax + edi;
    MEM32(esi) = eax;
    eax = MEM32(ecx + 0x14);
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x20)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x20))); }
    eax = MEM32(ecx + 0x10);
    POP32(esp, edi);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esi + 4);
    eax = eax - edx;
    edx = MEM32(ecx + 0x28);
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esi + 4);
    edx = edx + eax;
    MEM32(ecx + 0x28) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F0B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F112; /* jne: not equal / not zero */

loc_0030F0B5: ;
    edx = MEM32(ecx + 0x24);
    edi = MEM32(ecx + 0x18);
    eax = MEM32(ecx + 0x20);
    edx = edx - edi;
    eax = eax + edx;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030F0CB; /* jge: greater or equal (signed >=) */

loc_0030F0C9: ;
    eax = edx;

loc_0030F0CB: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    esi = MEM32(esp + 0x18);
    MEM32(esi + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0030F0DC; /* jge: greater or equal (signed >=) */

loc_0030F0DA: ;
    edx = eax;

loc_0030F0DC: ;
    MEM32(esi + 4) = edx;
    edi = MEM32(ecx + 0x18);
    eax = MEM32(ecx + 0x1C);
    eax = eax + edi;
    MEM32(esi) = eax;
    eax = MEM32(ecx + 0x18);
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x20)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x20))); }
    edi = MEM32(ecx + 0xC);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esi + 4);
    edi = edi - edx;
    edx = MEM32(ecx + 0x30);
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(esi + 4);
    edx = edx + eax;
    POP32(esp, edi);
    MEM32(ecx + 0x30) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F112: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F135; /* je: equal / zero */

loc_0030F12A: ;
    ecx = MEM32(ecx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F132u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F132: ;
    esp = esp + 8;

loc_0030F135: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0030F140
 * Original: 0x0030F140 - 0x0030F245 (261 bytes, 102 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F140: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030F243; /* jle: less or equal (signed <=) */

loc_0030F150: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030F243; /* je: equal / zero */

loc_0030F159: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030F15Fu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030F15F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F1F4; /* jne: not equal / not zero */

loc_0030F16C: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ebx + 4);
    edx = MEM32(eax + 0xC);
    edx = edx + ecx;
    ecx = MEM32(eax + 0x24);
    MEM32(eax + 0xC) = edx;
    esi = MEM32(ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x1C);
    edx = esi;
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0030F1AD; /* jge: greater or equal (signed >=) */

loc_0030F18D: ;
    edi = MEM32(ebx + 4);
    ecx = ecx - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030F198; /* jge: greater or equal (signed >=) */

loc_0030F196: ;
    ecx = edi;

loc_0030F198: ;
    edi = MEM32(eax + 0x20);
    edi = edi + ebp;
    edi = edi + edx;
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

loc_0030F1AD: ;
    ecx = MEM32(ebx + 4);
    edi = MEM32(eax + 0x1C);
    esi = MEM32(ebx);
    edx = ecx;
    edx = edx - edi;
    edx = edx + esi;
    esi = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030F1E0; /* jle: less or equal (signed <=) */

loc_0030F1C2: ;
    ebp = edx;
    ebp = ebp - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030F1CC; /* jl: less (signed <) */

loc_0030F1CA: ;
    ecx = ebp;

loc_0030F1CC: ;
    esi = edi;
    esi = esi - ecx;
    esi = esi + edx;
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

loc_0030F1E0: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(eax + 0x34);
    POP32(esp, edi);
    POP32(esp, ebp);
    edx = edx + ecx;
    POP32(esp, esi);
    MEM32(eax + 0x34) = edx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F1F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030F219; /* jne: not equal / not zero */

loc_0030F1F8: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(ebx + 4);
    esi = MEM32(eax + 0x10);
    esi = esi + edx;
    edx = MEM32(eax + 0x2C);
    MEM32(eax + 0x10) = esi;
    ecx = MEM32(ebx + 4);
    edx = edx + ecx;
    POP32(esp, esi);
    MEM32(eax + 0x2C) = edx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F219: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ebx + 4) = 0;
    MEM32(ebx) = 0;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F23C; /* je: equal / zero */

loc_0030F231: ;
    edx = MEM32(ecx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F239u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F239: ;
    esp = esp + 8;

loc_0030F23C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F243: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F250
 * Original: 0x0030F250 - 0x0030F370 (288 bytes, 116 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F250(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F250: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030F36E; /* jle: less or equal (signed <=) */

loc_0030F260: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030F36E; /* je: equal / zero */

loc_0030F269: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030F270u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030F270: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030F2DB; /* jne: not equal / not zero */

loc_0030F278: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(esi + 4);
    ecx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x14);
    eax = eax - edx;
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi);
    ebx = edx;
    eax = eax - MEM32(edi + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F2BB; /* jne: not equal / not zero */

loc_0030F29A: ;
    ecx = MEM32(edi + 0x10);
    MEM32(edi + 0x14) = ebx;
    eax = MEM32(esi + 4);
    ecx = ecx + eax;
    eax = MEM32(edi + 0x28);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(esi + 4);
    eax = eax - edx;
    MEM32(edi + 0x28) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F2BB: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F2CD; /* je: equal / zero */

loc_0030F2C2: ;
    ecx = MEM32(edi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F2CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F2CA: ;
    esp = esp + 8;

loc_0030F2CD: ;
    edx = MEM32(esi + 4);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) - edx;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F2DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F343; /* jne: not equal / not zero */

loc_0030F2E0: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(esi + 4);
    ecx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x18);
    eax = eax - edx;
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi);
    ebx = edx;
    eax = eax - MEM32(edi + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F323; /* jne: not equal / not zero */

loc_0030F302: ;
    ecx = MEM32(edi + 0xC);
    MEM32(edi + 0x18) = ebx;
    eax = MEM32(esi + 4);
    ecx = ecx + eax;
    eax = MEM32(edi + 0x30);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(esi + 4);
    eax = eax - edx;
    MEM32(edi + 0x30) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F323: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F335; /* je: equal / zero */

loc_0030F32A: ;
    ecx = MEM32(edi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F332u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F332: ;
    esp = esp + 8;

loc_0030F335: ;
    edx = MEM32(esi + 4);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) - edx;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F343: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F366; /* je: equal / zero */

loc_0030F35B: ;
    ecx = MEM32(ecx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F363u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F363: ;
    esp = esp + 8;

loc_0030F366: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F36E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F370
 * Original: 0x0030F370 - 0x0030F423 (179 bytes, 74 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F370: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030F377u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030F377: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esp + 0x14);
    if (TEST_NZ(_fa, _fb)) goto loc_0030F3BA; /* jne: not equal / not zero */

loc_0030F383: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x10);
    ecx = ecx - esi;
    ecx = ecx + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0030F39F; /* jl: less (signed <) */

loc_0030F39D: ;
    esi = ecx;

loc_0030F39F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030F40E; /* jl: less (signed <) */

loc_0030F3A3: ;
    edx = MEM32(esp + 0x18);
    esi = edi;
    MEM32(edx) = esi;
    PUSH32(esp, 0x0030F3B0u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030F3B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030F3BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F3F6; /* jne: not equal / not zero */

loc_0030F3BF: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(eax + 0x20);
    eax = MEM32(eax + 0xC);
    ecx = ecx - esi;
    ecx = ecx + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0030F3DB; /* jl: less (signed <) */

loc_0030F3D9: ;
    esi = ecx;

loc_0030F3DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030F40E; /* jl: less (signed <) */

loc_0030F3DF: ;
    edx = MEM32(esp + 0x18);
    esi = edi;
    MEM32(edx) = esi;
    PUSH32(esp, 0x0030F3ECu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030F3EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030F3F6: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x38);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F40E; /* je: equal / zero */

loc_0030F403: ;
    ecx = MEM32(ecx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F40Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F40B: ;
    esp = esp + 8;

loc_0030F40E: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = esi;
    PUSH32(esp, 0x0030F419u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030F419: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F430
 * Original: 0x0030F430 - 0x0030F438 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F430(void)
{

loc_0030F430: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F440
 * Original: 0x0030F440 - 0x0030F448 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F440(void)
{

loc_0030F440: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F450
 * Original: 0x0030F450 - 0x0030F464 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F450(void)
{

loc_0030F450: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = eax + ecx * 2 + 0xA;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F470
 * Original: 0x0030F470 - 0x0030F51A (170 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F470: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030F476u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030F476: ;
    esi = 0; /* xor self */
    eax = 0x5E9144;
    /* nop */

loc_0030F480: ;
    ecx = MEM32(eax + -64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F4B9; /* je: equal / zero */

loc_0030F487: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030F4AE; /* je: equal / zero */

loc_0030F48C: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F4B1; /* je: equal / zero */

loc_0030F493: ;
    ecx = MEM32(eax + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F4B6; /* je: equal / zero */

loc_0030F49D: ;
    eax = eax + 0x100;
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5ED144) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5ED144 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030F480; /* jl: less (signed <) */

loc_0030F4AC: ;
    goto loc_0030F4B9;

loc_0030F4AE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0030F4B9;

loc_0030F4B1: ;
    esi = esi + 2;
    goto loc_0030F4B9;

loc_0030F4B6: ;
    esi = esi + 3;

loc_0030F4B9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F4CC; /* jne: not equal / not zero */

loc_0030F4C1: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0x0030F4C8u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030F4C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030F4CC: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    esi = esi << 6;
    esi = esi + 0x5E9100;
    PUSH32(esp, esi);
    MEM32(esi + 4) = 1;
    MEM32(esi) = 0x4769B8;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 8) = 0x42D158;
    MEM32(esi + 0x38) = 0x30EF20;
    MEM32(esi + 0x3C) = esi;
    PUSH32(esp, 0x0030F50Eu); RECOMP_ABI_CALL(0x0030EFD0u, sub_0030EFD0); /* call 0x0030EFD0 */

loc_0030F50E: ;
    esp = esp + 4;
    PUSH32(esp, 0x0030F516u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030F516: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F520
 * Original: 0x0030F520 - 0x0030F52C (12 bytes, 4 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F520(void)
{

loc_0030F520: ;
    PUSH32(esp, 0x42D1B4);
    PUSH32(esp, 0x0030F52Au); RECOMP_ABI_CALL(0x0031CE60u, sub_0031CE60); /* call 0x0031CE60 */

loc_0030F52A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F530
 * Original: 0x0030F530 - 0x0030F550 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F530: ;
    eax = MEM32(0x5BFA7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030F549; /* jne: not equal / not zero */

loc_0030F539: ;
    PUSH32(esp, edi);
    ecx = 0x120;
    eax = 0; /* xor self */
    edi = 0x5E8C80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0030F549: ;
    MEM32(0x5BFA7C) = MEM32(0x5BFA7C) + 1;
    _fa = (uint32_t)(MEM32(0x5BFA7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0030F550
 * Original: 0x0030F550 - 0x0030F569 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F550: ;
    MEM32(0x5BFA7C) = MEM32(0x5BFA7C) - 1;
    _fa = (uint32_t)(MEM32(0x5BFA7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030F568; /* jne: not equal / not zero */

loc_0030F558: ;
    PUSH32(esp, edi);
    ecx = 0x120;
    eax = 0; /* xor self */
    edi = 0x5E8C80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0030F568: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030F570
 * Original: 0x0030F570 - 0x0030F59A (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F570: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F599; /* je: equal / zero */

loc_0030F578: ;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    MEM32(eax + 4) = ecx;

loc_0030F599: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030F5A0
 * Original: 0x0030F5A0 - 0x0030F5B3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F5A0(void)
{

loc_0030F5A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030F5C0
 * Original: 0x0030F5C0 - 0x0030F5D2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F5C0(void)
{

loc_0030F5C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0030F5E0
 * Original: 0x0030F5E0 - 0x0030F60E (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030F5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F5E0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F5F1; /* jne: not equal / not zero */

loc_0030F5E9: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

loc_0030F5F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F60B; /* je: equal / zero */

loc_0030F5F5: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F60B; /* je: equal / zero */

loc_0030F600: ;
    ecx = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F608u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F608: ;
    esp = esp + 8;

loc_0030F60B: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030F610
 * Original: 0x0030F610 - 0x0030F68B (123 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F610(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F610: ;
    PUSH32(esp, 0x0030F615u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030F615: ;
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F62D; /* jne: not equal / not zero */

loc_0030F61F: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEM32(eax) = edx;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F62D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F667; /* jne: not equal / not zero */

loc_0030F632: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030F643; /* jl: less (signed <) */

loc_0030F641: ;
    ecx = edx;

loc_0030F643: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    MEM32(edx + 4) = ecx;
    esi = MEM32(eax + 0x14);
    esi = esi + MEM32(eax + 0x10);
    MEM32(edx) = esi;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(eax + 0xC);
    edx = edx - ecx;
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F667: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax) = edx;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030F686; /* je: equal / zero */

loc_0030F67B: ;
    edx = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F683u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F683: ;
    esp = esp + 8;

loc_0030F686: ;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0030F690
 * Original: 0x0030F690 - 0x0030F6DE (78 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F690(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F690: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030F6DC; /* jle: less or equal (signed <=) */

loc_0030F69C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030F6DC; /* je: equal / zero */

loc_0030F6A1: ;
    PUSH32(esp, 0x0030F6A6u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030F6A6: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F6D6; /* je: equal / zero */

loc_0030F6AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030F6D6; /* je: equal / zero */

loc_0030F6B3: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F6D6; /* je: equal / zero */

loc_0030F6CB: ;
    ecx = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F6D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F6D3: ;
    esp = esp + 8;

loc_0030F6D6: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F6DC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F6E0
 * Original: 0x0030F6E0 - 0x0030F788 (168 bytes, 63 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F6E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F6E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030F786; /* jle: less or equal (signed <=) */

loc_0030F6F0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030F786; /* je: equal / zero */

loc_0030F6F9: ;
    PUSH32(esp, 0x0030F6FEu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030F6FE: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F76A; /* je: equal / zero */

loc_0030F706: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F75D; /* jne: not equal / not zero */

loc_0030F70B: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi + 4);
    ecx = MEM32(eax + 0x10);
    ecx = ecx - edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    PUSH32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edx;
    edx = MEM32(eax + 0xC);
    MEM32(eax + 0x10) = ecx;
    edi = MEM32(esi + 4);
    edx = edx + edi;
    edi = MEM32(eax + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030F736; /* jge: greater or equal (signed >=) */

loc_0030F734: ;
    edx = edi;

loc_0030F736: ;
    edi = MEM32(eax + 0x14);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esi);
    edx = edx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0030F780; /* je: equal / zero */

loc_0030F745: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F780; /* je: equal / zero */

loc_0030F74C: ;
    eax = MEM32(eax + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0030F754u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F754: ;
    esp = esp + 8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F75D: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;

loc_0030F76A: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F780; /* je: equal / zero */

loc_0030F775: ;
    ecx = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F77Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F77D: ;
    esp = esp + 8;

loc_0030F780: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030F786: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F790
 * Original: 0x0030F790 - 0x0030F80E (126 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F790: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030F797u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030F797: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esp + 0x14);
    if (TEST_NZ(_fa, _fb)) goto loc_0030F7BA; /* jne: not equal / not zero */

loc_0030F7A3: ;
    edx = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    MEM32(edx) = esi;
    PUSH32(esp, 0x0030F7B0u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030F7B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030F7BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F7E1; /* jne: not equal / not zero */

loc_0030F7BF: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030F7F9; /* jl: less (signed <) */

loc_0030F7CA: ;
    edx = MEM32(esp + 0x18);
    esi = edi;
    MEM32(edx) = esi;
    PUSH32(esp, 0x0030F7D7u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030F7D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030F7E1: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F7F9; /* je: equal / zero */

loc_0030F7EE: ;
    ecx = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030F7F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030F7F6: ;
    esp = esp + 8;

loc_0030F7F9: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = esi;
    PUSH32(esp, 0x0030F804u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030F804: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F810
 * Original: 0x0030F810 - 0x0030F897 (135 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F810: ;
    ecx = 0; /* xor self */
    eax = 0x5E8CA8;

loc_0030F817: ;
    edx = MEM32(eax + -36);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F84D; /* je: equal / zero */

loc_0030F81E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030F842; /* je: equal / zero */

loc_0030F823: ;
    edx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F845; /* je: equal / zero */

loc_0030F82A: ;
    edx = MEM32(eax + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030F84A; /* je: equal / zero */

loc_0030F831: ;
    eax = eax + 0x90;
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E9128) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5E9128 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030F817; /* jl: less (signed <) */

loc_0030F840: ;
    goto loc_0030F84D;

loc_0030F842: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0030F84D;

loc_0030F845: ;
    ecx = ecx + 2;
    goto loc_0030F84D;

loc_0030F84A: ;
    ecx = ecx + 3;

loc_0030F84D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F855; /* jne: not equal / not zero */

loc_0030F852: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0030F855: ;
    eax = MEM32(esp + 4);
    edx = ecx + ecx * 8;
    ecx = MEM32(esp + 8);
    edx = edx * 4 + 0x5E8C80;
    PUSH32(esp, edx);
    MEM32(edx + 4) = 1;
    MEM32(edx) = 0x4769E8;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 8) = 0x42D1A4;
    MEM32(edx + 0x1C) = 0x30F520;
    MEM32(edx + 0x20) = edx;
    PUSH32(esp, 0x0030F891u); RECOMP_ABI_CALL(0x0030F5C0u, sub_0030F5C0); /* call 0x0030F5C0 */

loc_0030F891: ;
    esp = esp + 4;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030F8A0
 * Original: 0x0030F8A0 - 0x0030F931 (145 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F8A0: ;
    eax = MEM32(0x42D1C0);
    eax = MEM32(0x5BFA80);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F92A; /* jne: not equal / not zero */

loc_0030F8B0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x110;
    edi = 0x5E8840;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x100;
    edi = 0x5E8440;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x40;
    edi = 0x5E82E0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0; /* xor self */
    MEM32(0x5E8400) = ecx;
    MEM32(0x5E8404) = ecx;
    MEM32(0x5E8408) = ecx;
    MEM32(0x5E840C) = ecx;
    MEM32(0x5E8410) = ecx;
    MEM32(0x5E8414) = ecx;
    MEM32(0x5E8418) = ecx;
    MEM32(0x5E841C) = ecx;
    MEM32(0x5E83E0) = edx;
    MEM32(0x5E83E4) = edx;
    MEM32(0x5E8424) = edx;
    MEM32(0x5E8420) = edx;
    MEM32(0x5E82C0) = eax;
    POP32(esp, edi);

loc_0030F92A: ;
    MEM32(0x5BFA80) = MEM32(0x5BFA80) + 1;
    _fa = (uint32_t)(MEM32(0x5BFA80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0030F940
 * Original: 0x0030F940 - 0x0030F9C1 (129 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F940: ;
    MEM32(0x5BFA80) = MEM32(0x5BFA80) - 1;
    _fa = (uint32_t)(MEM32(0x5BFA80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030F9C0; /* jne: not equal / not zero */

loc_0030F948: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030F94Eu); RECOMP_ABI_CALL(0x00307360u, sub_00307360); /* call 0x00307360 */

loc_0030F94E: ;
    eax = 0; /* xor self */
    MEM32(0x5E8420) = eax;
    MEM32(0x5E8424) = eax;
    MEM32(0x5E83E4) = eax;
    MEM32(0x5E83E0) = eax;
    MEM32(0x5E8400) = eax;
    MEM32(0x5E8404) = eax;
    MEM32(0x5E8408) = eax;
    MEM32(0x5E840C) = eax;
    MEM32(0x5E8410) = eax;
    MEM32(0x5E8414) = eax;
    MEM32(0x5E8418) = eax;
    MEM32(0x5E841C) = eax;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x40;
    edi = 0x5E82E0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0; /* xor self */
    ecx = 0x100;
    edi = 0x5E8440;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x110;
    edi = 0x5E8840;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x5E82C0) = 0xFFFFFFFFu;
    POP32(esp, edi);

loc_0030F9C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030F9D0
 * Original: 0x0030F9D0 - 0x0030F9E0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0030F9D0: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0x0030F9D7u); RECOMP_ABI_CALL(0x0019EF52u, sub_0019EF52); /* call 0x0019EF52 */

loc_0030F9D7: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xF));
    eax = eax - 0xF;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0030F9E0
 * Original: 0x0030F9E0 - 0x0030FA13 (51 bytes, 18 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F9E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x0030F9E8u); RECOMP_ABI_CALL(0x0030F9D0u, sub_0030F9D0); /* call 0x0030F9D0 */

loc_0030F9E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030FA0F; /* jne: not equal / not zero */

loc_0030F9ED: ;
    /* nop */

loc_0030F9F0: ;
    PUSH32(esp, 0x0030F9F5u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030F9F5: ;
    PUSH32(esp, 0x42D1F4);
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0030FA02u); RECOMP_ABI_CALL(0x00308060u, sub_00308060); /* call 0x00308060 */

loc_0030FA02: ;
    esp = esp + 8;
    PUSH32(esp, 0x0030FA0Au); RECOMP_ABI_CALL(0x0030F9D0u, sub_0030F9D0); /* call 0x0030F9D0 */

loc_0030FA0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030F9F0; /* je: equal / zero */

loc_0030FA0F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FA20
 * Original: 0x0030FA20 - 0x0030FA3A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FA20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030FA38; /* jle: less or equal (signed <=) */

loc_0030FA29: ;
    /* nop */

loc_0030FA30: ;
    PUSH32(esp, 0x0030FA35u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030FA35: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030FA30; /* jne: not equal / not zero */

loc_0030FA38: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FA40
 * Original: 0x0030FA40 - 0x0030FA46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FA40(void)
{

loc_0030FA40: ;
    eax = MEM32(0x5BFA84);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FA50
 * Original: 0x0030FA50 - 0x0030FA79 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FA50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030FA61; /* je: equal / zero */

loc_0030FA5B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030FA61u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0030FA61: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FA80
 * Original: 0x0030FA80 - 0x0030FAC2 (66 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FA80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030FA80: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x10);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FABE; /* je: equal / zero */

loc_0030FAA7: ;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030FAAFu); RECOMP_ABI_CALL(0x0019ED5Eu, sub_0019ED5E); /* call 0x0019ED5E */

loc_0030FAAF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030FAB5u); RECOMP_ABI_CALL(0x0019ED42u, sub_0019ED42); /* call 0x0019ED42 */

loc_0030FAB5: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;

loc_0030FABE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FAD0
 * Original: 0x0030FAD0 - 0x0030FAF0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FAD0: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030FAEF; /* je: equal / zero */

loc_0030FAD7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030FADFu); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_0030FADF: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030FAE8u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0030FAE8: ;
    MEM32(esi + 0x14) = 0;

loc_0030FAEF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FAF0
 * Original: 0x0030FAF0 - 0x0030FAF8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FAF0(void)
{

loc_0030FAF0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FB00
 * Original: 0x0030FB00 - 0x0030FB14 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FB00: ;
    eax = MEM32(ecx + 0x38);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(ecx + 0x38) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030FB13; /* jne: not equal / not zero */

loc_0030FB0D: ;
    edx = MEM32(ecx + 0x34);
    MEM32(ecx + 0x38) = edx;

loc_0030FB13: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FB20
 * Original: 0x0030FB20 - 0x0030FB71 (81 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030FB20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FB20: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030FB2Cu); RECOMP_ABI_CALL(0x0030FAF0u, sub_0030FAF0); /* call 0x0030FAF0 */

loc_0030FB2C: ;
    ecx = MEM32(esi + 0x34);
    esp = esp + 4;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    MEM32(esi + 0x38) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030FB6E; /* jle: less or equal (signed <=) */

loc_0030FB3F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    /* nop */

loc_0030FB50: ;
    ecx = esi;
    PUSH32(esp, 0x0030FB57u); RECOMP_ABI_CALL(0x0030FB00u, sub_0030FB00); /* call 0x0030FB00 */

loc_0030FB57: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0030FB5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030FB5B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB6C; /* je: equal / zero */

loc_0030FB63: ;
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030FB50; /* jl: less (signed <) */

loc_0030FB6C: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0030FB6E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FB80
 * Original: 0x0030FB80 - 0x0030FB91 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FB80(void)
{

loc_0030FB80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30FA50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030FB8Du); RECOMP_ABI_CALL(0x0030FB20u, sub_0030FB20); /* call 0x0030FB20 */

loc_0030FB8D: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FBA0
 * Original: 0x0030FBA0 - 0x0030FBD4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FBA0: ;
    eax = MEM32(0x5BFA94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0030FBB5; /* je: equal / zero */

loc_0030FBAF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030FBB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030FBB2: ;
    esp = esp + 4;

loc_0030FBB5: ;
    eax = esi;
    PUSH32(esp, 0x0030FBBCu); RECOMP_ABI_CALL(0x0030FB80u, sub_0030FB80); /* call 0x0030FB80 */

loc_0030FBBC: ;
    PUSH32(esp, 0x0030FBC1u); RECOMP_ABI_CALL(0x0030FA80u, sub_0030FA80); /* call 0x0030FA80 */

loc_0030FBC1: ;
    PUSH32(esp, 0x0030FBC6u); RECOMP_ABI_CALL(0x0030FAD0u, sub_0030FAD0); /* call 0x0030FAD0 */

loc_0030FBC6: ;
    edi = esi;
    ecx = 0x11;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FBE0
 * Original: 0x0030FBE0 - 0x0030FC31 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FBE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030FBE0: ;
    PUSH32(esp, 0x0030FBE5u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030FBE5: ;
    MEM32(0x5BFA84) = MEM32(0x5BFA84) - 1;
    _fa = (uint32_t)(MEM32(0x5BFA84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030FC2C; /* jne: not equal / not zero */

loc_0030FBED: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x5E7E80;

loc_0030FBF4: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FC02; /* je: equal / zero */

loc_0030FBF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030FBFFu); RECOMP_ABI_CALL(0x0030FBA0u, sub_0030FBA0); /* call 0x0030FBA0 */

loc_0030FBFF: ;
    esp = esp + 4;

loc_0030FC02: ;
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E82C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5E82C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030FBF4; /* jl: less (signed <) */

loc_0030FC0D: ;
    eax = 0; /* xor self */
    ecx = 0x110;
    edi = 0x5E7E80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(0x5BEDC4) = eax;
    MEM32(0x5BEDC8) = eax;
    MEM32(0x5BEDCC) = eax;
    POP32(esp, esi);

loc_0030FC2C: ;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0030FC40
 * Original: 0x0030FC40 - 0x0030FC86 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FC40: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030FC67; /* jne: not equal / not zero */

loc_0030FC4A: ;
    PUSH32(esp, edi);
    MEM32(0x5BFA9C) = ecx;
    MEM32(0x5BFAA0) = ecx;
    ecx = 0x40;
    eax = 0; /* xor self */
    edi = 0x5E7D80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0030FC67: ;
    MEM32(0x5BFA9C) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(0x5BFAA0) = eax;
    ecx = 0x40;
    eax = 0; /* xor self */
    edi = 0x5E7D80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FC90
 * Original: 0x0030FC90 - 0x0030FCC2 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FC90: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E7D80);
    PUSH32(esp, 0x0030FCA4u); RECOMP_ABI_CALL(0x00342A40u, sub_00342A40); /* call 0x00342A40 */

loc_0030FCA4: ;
    eax = MEM32(0x5BFA9C);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030FCC1; /* je: equal / zero */

loc_0030FCB0: ;
    edx = MEM32(0x5BFAA0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5E7D80);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030FCBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030FCBE: ;
    esp = esp + 8;

loc_0030FCC1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FCD0
 * Original: 0x0030FCD0 - 0x0030FCF1 (33 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FCD0: ;
    eax = MEM32(0x42D214);
    eax = 0x5E7B84;
    /* nop */

loc_0030FCE0: ;
    MEM32(eax) = 0;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E7D84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5E7D84 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030FCE0; /* jl: less (signed <) */

loc_0030FCF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FD00
 * Original: 0x0030FD00 - 0x0030FD21 (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FD00: ;
    eax = 0x5E7B84;
    goto loc_0030FD10;

    /* nop */
    edi = edi;

loc_0030FD10: ;
    MEM32(eax) = 0;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E7D84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5E7D84 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030FD10; /* jl: less (signed <) */

loc_0030FD20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FD30
 * Original: 0x0030FD30 - 0x0030FD5E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FD30: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = 0x5E7B84;
    /* nop */

loc_0030FD40: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FD52; /* je: equal / zero */

loc_0030FD45: ;
    ecx = ecx + 0x20;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E7D84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5E7D84 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030FD40; /* jl: less (signed <) */

loc_0030FD51: ;
    esp += 4; return; /* ret */

loc_0030FD52: ;
    edx = edx << 5;
    edx = edx + 0x5E7B80;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FD60
 * Original: 0x0030FD60 - 0x0030FD83 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FD60(void)
{

loc_0030FD60: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FD90
 * Original: 0x0030FD90 - 0x0030FDBF (47 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FD90(void)
{

loc_0030FD90: ;
    PUSH32(esp, 0x0030FD95u); RECOMP_ABI_CALL(0x0030FD30u, sub_0030FD30); /* call 0x0030FD30 */

loc_0030FD95: ;
    ecx = 0; /* xor self */
    MEM32(eax) = 0x476A30;
    MEM32(eax + 0xC) = 0xAC44;
    MEM32(eax + 0x10) = 0x4000;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FDC0
 * Original: 0x0030FDC0 - 0x0030FDC5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FDC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030FDC0: ;
    g_seh_ebp = ebp; sub_0030FD60(); return; /* tail jmp 0x0030FD60 */

}

/**
 * sub_0030FDD0
 * Original: 0x0030FDD0 - 0x0030FE13 (67 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FDD0(void)
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

loc_0030FDD0: ;
    ecx = MEM32(0x5BF28C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030FDDE; /* je: equal / zero */

loc_0030FDDC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0030FDDEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030FDDE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030FDF1; /* jne: not equal / not zero */

loc_0030FDE9: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030FDF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0030FE03; /* jge: greater or equal (signed >=) */

loc_0030FDFD: ;
    fp_top() = fp_top() + MEMD(0x3E1E90); /* fadd qword ptr [0x3e1e90] */

loc_0030FE03: ;
    fp_top() = fp_top() * MEMD(0x42D248); /* fmul qword ptr [0x42d248] */
    PUSH32(esp, 0x0030FE0Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030FE0E: ;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
