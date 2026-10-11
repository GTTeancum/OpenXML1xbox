#include "ui/pc_menu.h"
/**
 * X-Men Legends - Recompiled code chunk 33
 * Functions: 250 (0x0017D790 - 0x00186D30)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0017D790
 * Original: 0x0017D790 - 0x0017D7CD (61 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017D790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0017D7C8; /* je: equal / zero */

loc_0017D79C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017D7C1; /* je: equal / zero */

loc_0017D7A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017D7A7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0017D7A7: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017D7B2u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017D7B2: ;
    ecx = eax;
    PUSH32(esp, 0x0017D7B9u); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_0017D7B9: ;
    MEM32(edi + 0x74) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0017D7C1: ;
    MEM32(edi + 0x74) = 0;

loc_0017D7C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017D7D0
 * Original: 0x0017D7D0 - 0x0017D860 (144 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017D7D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x214);
    ecx = ecx + esi;
    PUSH32(esp, 0x0017D7E7u); RECOMP_ABI_CALL(0x0018B460u, sub_0018B460); /* call 0x0018B460 */

loc_0017D7E7: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x10A00);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x10A00) = ecx;
    MEM32(eax + esi + 0x10C20) = MEM32(eax + esi + 0x10C20) & edx;
    eax = MEM32(esi + 0x10C14);
    edx = MEM32(esi + 0x10C1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(esi + 0x10C14) = eax;
    MEM32(esi + 0x10C1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0017D846; /* jl: less (signed <) */

loc_0017D835: ;
    MEM32(esi + 0x10C14) = 0;
    eax = 0x7F;
    goto loc_0017D847;

loc_0017D846: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0017D847: ;
    MEM32(esi + eax * 4 + 0x10A10) = edi;
    eax = MEM32(esi + 0x10C30);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x10C30) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017D860
 * Original: 0x0017D860 - 0x0017D8AC (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D860(void)
{

loc_0017D860: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    ecx = esi + 0x10A00;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(esi + 0x10C14) = eax;
    MEM32(esi + 0x10C18) = eax;
    MEM32(esi + 0x10C1C) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0x10C20;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    ecx = esi;
    MEM32(esi + 0x10C30) = eax;
    PUSH32(esp, 0x0017D8A8u); RECOMP_ABI_CALL(0x0017D6E0u, sub_0017D6E0); /* call 0x0017D6E0 */

loc_0017D8A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017D8B0
 * Original: 0x0017D8B0 - 0x0017D9D7 (295 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D8B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017D8B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354849);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0017D8D6u); RECOMP_ABI_CALL(0x001770F0u, sub_001770F0); /* call 0x001770F0 */

loc_0017D8D6: ;
    edi = MEM32(0x5765C4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = 0x3DFBCC;
    MEM8(esi + 0x6C) = 1;
    MEM8(esi + 0x6D) = 8;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esi + 0x78) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0017D925; /* jne: not equal / not zero */

loc_0017D8FD: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x10C34);
    PUSH32(esp, 0x0017D90Bu); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0017D90B: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017D91B; /* je: equal / zero */

loc_0017D912: ;
    ecx = eax;
    PUSH32(esp, 0x0017D919u); RECOMP_ABI_CALL(0x0017D860u, sub_0017D860); /* call 0x0017D860 */

loc_0017D919: ;
    goto loc_0017D91D;

loc_0017D91B: ;
    eax = 0; /* xor self */

loc_0017D91D: ;
    edi = eax;
    MEM32(0x5765C4) = edi;

loc_0017D925: ;
    _fa = (uint32_t)(MEM32(edi + 0x10C30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10C30), 0x80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017D9C3; /* je: equal / zero */

loc_0017D935: ;
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0017D941u); RECOMP_ABI_CALL(0x0017D670u, sub_0017D670); /* call 0x0017D670 */

loc_0017D941: ;
    ebp = eax;
    ebx = ebp;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x214);
    ecx = ebx + edi;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x28) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0017D96A; /* je: equal / zero */

loc_0017D95F: ;
    PUSH32(esp, 0x0017D964u); RECOMP_ABI_CALL(0x0018AA80u, sub_0018AA80); /* call 0x0018AA80 */

loc_0017D964: ;
    edi = MEM32(0x5765C4);

loc_0017D96A: ;
    ecx = MEM32(esp + 0x10);
    eax = ebp;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = ecx + eax * 4 + 0x10A00;
    ecx = ebp;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    MEM8(esp + 0x28) = 0;
    POP32(esp, ebp);
    ecx = ecx | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(eax) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0017D9BE; /* jne: not equal / not zero */

loc_0017D996: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x10C34);
    PUSH32(esp, 0x0017D9A4u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0017D9A4: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D9B4; /* je: equal / zero */

loc_0017D9AB: ;
    ecx = eax;
    PUSH32(esp, 0x0017D9B2u); RECOMP_ABI_CALL(0x0017D860u, sub_0017D860); /* call 0x0017D860 */

loc_0017D9B2: ;
    goto loc_0017D9B6;

loc_0017D9B4: ;
    eax = 0; /* xor self */

loc_0017D9B6: ;
    edi = eax;
    MEM32(0x5765C4) = edi;

loc_0017D9BE: ;
    ebx = ebx + edi;
    MEM32(esi + 0x78) = ebx;

loc_0017D9C3: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0017D9E0
 * Original: 0x0017D9E0 - 0x0017DA97 (183 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017D9E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354868);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 4) = edi;
    MEM32(edi) = 0x3DFBCC;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0017DA10u); RECOMP_ABI_CALL(0x00173230u, sub_00173230); /* call 0x00173230 */

loc_0017DA10: ;
    eax = MEM32(edi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DA72; /* je: equal / zero */

loc_0017DA17: ;
    ecx = MEM32(0x5765C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DA49; /* jne: not equal / not zero */

loc_0017DA21: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x10C34);
    PUSH32(esp, 0x0017DA2Fu); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0017DA2F: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DA3F; /* je: equal / zero */

loc_0017DA36: ;
    ecx = eax;
    PUSH32(esp, 0x0017DA3Du); RECOMP_ABI_CALL(0x0017D860u, sub_0017D860); /* call 0x0017D860 */

loc_0017DA3D: ;
    goto loc_0017DA41;

loc_0017DA3F: ;
    eax = 0; /* xor self */

loc_0017DA41: ;
    ecx = eax;
    MEM32(0x5765C4) = ecx;

loc_0017DA49: ;
    eax = MEM32(edi + 0x78);
    eax = eax - ecx;
    PUSH32(esp, esi);
    esi = eax;
    eax = 0xF6603D99u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017DA6Au); RECOMP_ABI_CALL(0x0017D7D0u, sub_0017D7D0); /* call 0x0017D7D0 */

loc_0017DA6A: ;
    MEM32(edi + 0x78) = 0;
    POP32(esp, esi);

loc_0017DA72: ;
    ecx = edi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(edi) = 0x3DF554;
    PUSH32(esp, 0x0017DA87u); RECOMP_ABI_CALL(0x00173230u, sub_00173230); /* call 0x00173230 */

loc_0017DA87: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0017DAA0
 * Original: 0x0017DAA0 - 0x0017DABE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017DAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017DAA8u); RECOMP_ABI_CALL(0x0017D9E0u, sub_0017D9E0); /* call 0x0017D9E0 */

loc_0017DAA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DAB8; /* je: equal / zero */

loc_0017DAAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017DAB5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0017DAB5: ;
    esp = esp + 4;

loc_0017DAB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017DAC0
 * Original: 0x0017DAC0 - 0x0017DAD7 (23 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DAC0(void)
{

loc_0017DAC0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x80) = eax;
    MEM32(ecx + 0x84) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017DAE0
 * Original: 0x0017DAE0 - 0x0017DB1E (62 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017DAE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    edx = eax + 1;
    goto loc_0017DAF0;

    /* nop */

loc_0017DAF0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DAF0; /* jne: not equal / not zero */

loc_0017DAF7: ;
    eax = eax - edx;
    esi = eax + edi + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0017DB19; /* jb: below (unsigned <) */

loc_0017DB01: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017DB0Au); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_0017DB0A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DB19; /* je: equal / zero */

loc_0017DB11: ;
    MEM8(esi) = 0;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0017DB01; /* jae: above or equal (unsigned >=) */

loc_0017DB19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0017DB20
 * Original: 0x0017DB20 - 0x0017DB60 (64 bytes, 25 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0017DB20(void)
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

loc_0017DB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DB3B; /* je: equal / zero */

loc_0017DB2A: ;
    PUSH32(esp, 0x0017DB2Fu); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0017DB2F: ;
    ecx = MEM32(esi + 0x70);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    goto loc_0017DB44;

loc_0017DB3B: ;
    PUSH32(esp, 0x0017DB40u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0017DB40: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);

loc_0017DB44: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017DB5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DB5A: ;
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0017DB60
 * Original: 0x0017DB60 - 0x0017DB72 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017DB60: ;
    _fa = (uint32_t)(MEM8(ecx + 0x94)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x94), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DB6C; /* jne: not equal / not zero */

loc_0017DB69: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0017DB6C: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0017DB80
 * Original: 0x0017DB80 - 0x0017DC01 (129 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017DB80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0017DB8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DB8A: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0017DB93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DB93: ;
    edx = eax + 1;

loc_0017DB96: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DB96; /* jne: not equal / not zero */

loc_0017DB9D: ;
    ecx = MEM32(esi + 0x84);
    eax = eax - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = eax;
    eax = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017DBC7; /* jle: less or equal (signed <=) */

loc_0017DBAD: ;
    ebx = ecx;
    /* nop */

loc_0017DBB0: ;
    ecx = eax;
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017DBC3; /* jge: greater or equal (signed >=) */

loc_0017DBB8: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017DBC3; /* je: equal / zero */

loc_0017DBBD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017DBB8; /* jl: less (signed <) */

loc_0017DBC3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0017DBB0; /* jne: not equal / not zero */

loc_0017DBC7: ;
    esi = MEM32(esi + 0x88);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = eax;
    if (TEST_S(_fas, _fbs)) goto loc_0017DBEF; /* jl: less (signed <) */

loc_0017DBD3: ;
    ebx = esi + 1;

loc_0017DBD6: ;
    esi = ecx;
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017DBEB; /* jge: greater or equal (signed >=) */

loc_0017DBDE: ;
    edi = edi;

loc_0017DBE0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017DBEB; /* je: equal / zero */

loc_0017DBE5: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017DBE0; /* jl: less (signed <) */

loc_0017DBEB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0017DBD6; /* jne: not equal / not zero */

loc_0017DBEF: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0017DBFE; /* je: equal / zero */

loc_0017DBFA: ;
    ecx = ecx - eax;
    MEM32(edx) = ecx;

loc_0017DBFE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017DC10
 * Original: 0x0017DC10 - 0x0017DCC6 (182 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DC10(void)
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

loc_0017DC10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017DC19u); RECOMP_ABI_CALL(0x001734D0u, sub_001734D0); /* call 0x001734D0 */

loc_0017DC19: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DC31; /* je: equal / zero */

loc_0017DC20: ;
    PUSH32(esp, 0x0017DC25u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0017DC25: ;
    ecx = MEM32(esi + 0x70);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    goto loc_0017DC3A;

loc_0017DC31: ;
    PUSH32(esp, 0x0017DC36u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0017DC36: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);

loc_0017DC3A: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3DFC34);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017DC50u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DC50: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x62);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEM32(esp + 4) = edx;
    MEM32(esi + 0x88) = 0;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DCAA; /* jne: not equal / not zero */

loc_0017DC77: ;
    goto loc_0017DC80;

    /* nop */

loc_0017DC80: ;
    eax = MEM32(esi + 0x88);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x88) = eax;
    fp_push((double)SMEM32(esi + 0x88)); /* fild */
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x62);
    MEM32(esp + 4) = eax;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DC80; /* je: equal / zero */

loc_0017DCAA: ;
    eax = MEM32(esi + 0x88);
    fp_pop(); /* fstp st(0) */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    MEM32(esi + 0x88) = eax;
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
 * sub_0017DCD0
 * Original: 0x0017DCD0 - 0x0017DD39 (105 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017DCD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DD05; /* je: equal / zero */

loc_0017DCDD: ;
    _fa = (uint32_t)(MEM8(esi + 0x94)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x94), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DD05; /* je: equal / zero */

loc_0017DCE6: ;
    PUSH32(esp, 0x0017DCEBu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017DCEB: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017DCFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DCFE: ;
    MEM8(esi + 0x94) = MEM8(esi + 0x94) & 0xFD;

loc_0017DD05: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DD37; /* je: equal / zero */

loc_0017DD0F: ;
    _fa = (uint32_t)(MEM8(esi + 0x94)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x94), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DD37; /* je: equal / zero */

loc_0017DD18: ;
    PUSH32(esp, 0x0017DD1Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017DD1D: ;
    ecx = MEM32(esi + 0x8C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017DD30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DD30: ;
    MEM8(esi + 0x94) = MEM8(esi + 0x94) & 0xFE;

loc_0017DD37: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017DD40
 * Original: 0x0017DD40 - 0x0017DDCD (141 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017DD40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x8C;
    if (TEST_Z(_fa, _fb)) goto loc_0017DD87; /* je: equal / zero */

loc_0017DD54: ;
    _fa = (uint32_t)(MEM8(esi + 0x94)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x94), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DD78; /* je: equal / zero */

loc_0017DD5D: ;
    PUSH32(esp, 0x0017DD62u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017DD62: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017DD71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DD71: ;
    MEM8(esi + 0x94) = MEM8(esi + 0x94) & 0xFE;

loc_0017DD78: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017DD7Eu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_0017DD7E: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_0017DD87: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = esi + 0x90;
    if (TEST_Z(_fa, _fb)) goto loc_0017DDCA; /* je: equal / zero */

loc_0017DD97: ;
    _fa = (uint32_t)(MEM8(esi + 0x94)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x94), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DDBB; /* je: equal / zero */

loc_0017DDA0: ;
    PUSH32(esp, 0x0017DDA5u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017DDA5: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017DDB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DDB4: ;
    MEM8(esi + 0x94) = MEM8(esi + 0x94) & 0xFD;

loc_0017DDBB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017DDC1u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_0017DDC1: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_0017DDCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017DDD0
 * Original: 0x0017DDD0 - 0x0017DDE7 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017DDD0: ;
    eax = MEM32(ecx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DDE6; /* jne: not equal / not zero */

loc_0017DDDA: ;
    eax = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DDE6; /* jne: not equal / not zero */

loc_0017DDE1: ;
    eax = 0x3C806C;

loc_0017DDE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017DDF0
 * Original: 0x0017DDF0 - 0x0017DE7A (138 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DDF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017DDF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x84);
    MEM32(esp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0017DE63; /* je: equal / zero */

loc_0017DE07: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0017DE15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DE15: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0017DE1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DE1E: ;
    edx = eax + 1;

loc_0017DE21: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DE21; /* jne: not equal / not zero */

loc_0017DE28: ;
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    eax = eax - edx;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0017DE39u); RECOMP_ABI_CALL(0x0017DB80u, sub_0017DB80); /* call 0x0017DB80 */

loc_0017DE39: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0017DE49; /* jl: less (signed <) */

loc_0017DE3D: ;
    edx = MEM32(esp + 0x18);
    edi = edi + ebp;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0017DE61; /* jae: above or equal (unsigned >=) */

loc_0017DE49: ;
    eax = MEM32(esi + 0x84);
    eax = eax + ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    MEM32(esi + 0x84) = eax;

loc_0017DE61: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0017DE63: ;
    ecx = MEM32(esi + 0x84);
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017DE80
 * Original: 0x0017DE80 - 0x0017DF70 (240 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DE80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017DE80: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017DE8Bu); RECOMP_ABI_CALL(0x0017DCD0u, sub_0017DCD0); /* call 0x0017DCD0 */

loc_0017DE8B: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x39), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DF6B; /* jne: not equal / not zero */

loc_0017DE95: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DF6B; /* je: equal / zero */

loc_0017DEA0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0017DEA5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DEA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DF6B; /* je: equal / zero */

loc_0017DEAD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0017DEC3u); RECOMP_ABI_CALL(0x0017DB80u, sub_0017DB80); /* call 0x0017DB80 */

loc_0017DEC3: ;
    edx = MEM32(esi);
    ecx = esi;
    ebp = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0017DECCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DECC: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0017DED7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DED7: ;
    edx = eax + 1;
    /* nop */

loc_0017DEE0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DEE0; /* jne: not equal / not zero */

loc_0017DEE7: ;
    eax = eax - edx;
    edi = eax;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017DF27; /* jle: less or equal (signed <=) */

loc_0017DEF5: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DF27; /* je: equal / zero */

loc_0017DEFF: ;
    _fa = (uint32_t)(MEM8(esi + 0x94)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x94), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DF27; /* jne: not equal / not zero */

loc_0017DF08: ;
    PUSH32(esp, 0x0017DF0Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017DF0D: ;
    ecx = MEM32(esi + 0x8C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0017DF20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DF20: ;
    MEM8(esi + 0x94) = MEM8(esi + 0x94) | 1;

loc_0017DF27: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edi = edi + edx;
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_AE(_fa, _fb)) goto loc_0017DF6B; /* jae: above or equal (unsigned >=) */

loc_0017DF39: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017DF6B; /* je: equal / zero */

loc_0017DF43: ;
    _fa = (uint32_t)(MEM8(esi + 0x94)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x94), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017DF6B; /* jne: not equal / not zero */

loc_0017DF4C: ;
    PUSH32(esp, 0x0017DF51u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017DF51: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0017DF64u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DF64: ;
    MEM8(esi + 0x94) = MEM8(esi + 0x94) | 2;

loc_0017DF6B: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0017DF70
 * Original: 0x0017DF70 - 0x0017DF93 (35 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DF70(void)
{

loc_0017DF70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017DF83u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0017DF83: ;
    esp = esp + 0xC;
    MEM8(esi + 0x3FF) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017DFA0
 * Original: 0x0017DFA0 - 0x0017DFA5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DFA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017DFA0: ;
    g_seh_ebp = ebp; sub_0017DCD0(); return; /* tail jmp 0x0017DCD0 */

}

/**
 * sub_0017DFB0
 * Original: 0x0017DFB0 - 0x0017E0FC (332 bytes, 94 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DFB0(void)
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

loc_0017DFB0: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0017DFBCu); RECOMP_ABI_CALL(0x0017DD40u, sub_0017DD40); /* call 0x0017DD40 */

loc_0017DFBC: ;
    PUSH32(esp, 0x0017DFC1u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017DFC1: ;
    edi = MEM32(esp + 0x28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x0017DFD7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DFD7: ;
    edx = MEM32(eax);
    MEM32(esi + 0x8C) = edx;
    PUSH32(esp, 0x0017DFE4u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017DFE4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x0017DFF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017DFF6: ;
    ecx = MEM32(esi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = MEM32(eax);
    MEM32(esi + 0x90) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0017E076; /* je: equal / zero */

loc_0017E008: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0017E00Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E00D: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x5C);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    ecx = ecx + edx + 5;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x68);
    MEM32(esp + 0x28) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x5E);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ecx - 0xA;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(esp + 0x28) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x10;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    ecx = esp + 0x20;
    MEM32(esp + 0x14) = 0x4048F5C3;
    MEM32(esp + 0x18) = 0;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x1C) = 0;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017E076u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E076: ;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E0F4; /* je: equal / zero */

loc_0017E080: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017E085u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E085: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x5C);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    ecx = ecx + edx + 5;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x68);
    MEM32(esp + 0x28) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x62);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(esp + 0x28) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x5E);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    edx = edx - ecx;
    edx = edx + 0xA;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017E0F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E0F4: ;
    POP32(esp, edi);
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
 * sub_0017E100
 * Original: 0x0017E100 - 0x0017E1EA (234 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E100(void)
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

loc_0017E100: ;
    esp = esp - 0x404;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x410);
    MEM32(esp + 0x408) = eax;
    eax = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    edx = eax + 1;
    ebx = 0; /* xor self */

loc_0017E125: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017E125; /* jne: not equal / not zero */

loc_0017E12C: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0017E1D2; /* jg: greater (signed >) */

loc_0017E139: ;
    PUSH32(esp, 0x400);
    eax = esp + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM8(esp + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0017E14Du); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0017E14D: ;
    eax = MEM32(esi + 0x70);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x40B) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0017E16F; /* je: equal / zero */

loc_0017E15E: ;
    PUSH32(esp, 0x0017E163u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0017E163: ;
    ecx = MEM32(esi + 0x70);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    goto loc_0017E177;

loc_0017E16F: ;
    PUSH32(esp, 0x0017E174u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0017E174: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);

loc_0017E177: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017E18Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E18D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    fp_pop(); /* fstp st(0) */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0017E1A1u); RECOMP_ABI_CALL(0x0017DAE0u, sub_0017DAE0); /* call 0x0017DAE0 */

loc_0017E1A1: ;
    edi = MEM32(esi + 0x7C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017E1D1; /* je: equal / zero */

loc_0017E1A8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017E1D1; /* je: equal / zero */

loc_0017E1AC: ;
    PUSH32(esp, 0x400);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017E1BCu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0017E1BC: ;
    MEM8(edi + 0x3FF) = LO8(ebx);
    esp = esp + 0xC;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;

loc_0017E1D1: ;
    POP32(esp, edi);

loc_0017E1D2: ;
    ecx = MEM32(esp + 0x40C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0017E1E1u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017E1E1: ;
    esp = esp + 0x404;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0017E1F0
 * Original: 0x0017E1F0 - 0x0017E2B2 (194 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017E1F0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017E1FBu); RECOMP_ABI_CALL(0x00173020u, sub_00173020); /* call 0x00173020 */

loc_0017E1FB: ;
    ecx = esi;
    PUSH32(esp, 0x0017E202u); RECOMP_ABI_CALL(0x0017DE80u, sub_0017DE80); /* call 0x0017DE80 */

loc_0017E202: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) >> 2);
    PUSH32(esp, 0);
    edx = esp + 0xC;
    eax = eax & 0xFFFFFF01u;
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017E229u); RECOMP_ABI_CALL(0x0017D250u, sub_0017D250); /* call 0x0017D250 */

loc_0017E229: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E2AD; /* jne: not equal / not zero */

loc_0017E233: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E2AD; /* je: equal / zero */

loc_0017E23A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017E23Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E23F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E2AD; /* je: equal / zero */

loc_0017E243: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0017E259u); RECOMP_ABI_CALL(0x0017DB80u, sub_0017DB80); /* call 0x0017DB80 */

loc_0017E259: ;
    edx = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0017E262u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E262: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0017E269u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E269: ;
    ecx = MEM32(esp + 0xC);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x62);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0017E27Du); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_0017E27D: ;
    ecx = ZX8(MEM8(esi + 0x6C));
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x6D));
    eax = eax | ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x64);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x66);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, 0x0017E2ABu); RECOMP_ABI_CALL(0x0018AB00u, sub_0018AB00); /* call 0x0018AB00 */

loc_0017E2AB: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0017E2AD: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0017E2C0
 * Original: 0x0017E2C0 - 0x0017E394 (212 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017E2C0: ;
    eax = MEM32(ecx + 0xC00);
    PUSH32(esp, esi);
    esi = ecx + 0xC00;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E2EE; /* jne: not equal / not zero */

loc_0017E2D3: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017E38C; /* jge: greater or equal (signed >=) */

loc_0017E2E2: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E2D3; /* je: equal / zero */

loc_0017E2EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E2FB; /* jne: not equal / not zero */

loc_0017E2F5: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0017E2FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E305; /* jne: not equal / not zero */

loc_0017E2FF: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0017E305: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E30F; /* jne: not equal / not zero */

loc_0017E309: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0017E30F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E31A; /* jne: not equal / not zero */

loc_0017E313: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E313; /* je: equal / zero */

loc_0017E31A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017E38C; /* jge: greater or equal (signed >=) */

loc_0017E31F: ;
    /* nop */

loc_0017E320: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017E38C; /* jge: greater or equal (signed >=) */

loc_0017E326: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E357; /* jne: not equal / not zero */

loc_0017E339: ;
    /* nop */

loc_0017E340: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017E38C; /* jge: greater or equal (signed >=) */

loc_0017E34B: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E340; /* je: equal / zero */

loc_0017E357: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E364; /* jne: not equal / not zero */

loc_0017E35E: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0017E364: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E36E; /* jne: not equal / not zero */

loc_0017E368: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0017E36E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E378; /* jne: not equal / not zero */

loc_0017E372: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0017E378: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E387; /* jne: not equal / not zero */

loc_0017E37C: ;
    /* nop */

loc_0017E380: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E380; /* je: equal / zero */

loc_0017E387: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017E320; /* jl: less (signed <) */

loc_0017E38C: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017E3A0
 * Original: 0x0017E3A0 - 0x0017E423 (131 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017E3A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354888);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0017E3C6u); RECOMP_ABI_CALL(0x0017D080u, sub_0017D080); /* call 0x0017D080 */

loc_0017E3C6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF950);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0017E3D6u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017E3D6: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0017E3EAu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017E3EA: ;
    ecx = esp + 8;
    edi = eax;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017E3FDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017E3FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E410; /* je: equal / zero */

loc_0017E401: ;
    ecx = edi;
    PUSH32(esp, 0x0017E408u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017E408: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017E410u); RECOMP_ABI_CALL(0x0017DFB0u, sub_0017DFB0); /* call 0x0017DFB0 */

loc_0017E410: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017E430
 * Original: 0x0017E430 - 0x0017E48F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017E430: ;
    edx = ecx;
    eax = MEM32(edx + 0xC18);
    eax = MEM32(edx + eax * 4 + 0xC04);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xC20;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0xC18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    MEM32(edx + 0xC18) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0017E479; /* jl: less (signed <) */

loc_0017E46F: ;
    MEM32(edx + 0xC18) = 0;

loc_0017E479: ;
    MEM32(edx + 0xC1C) = MEM32(edx + 0xC1C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0xC1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xC24);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xC24) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017E490
 * Original: 0x0017E490 - 0x0017E51F (143 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017E490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017E499u); RECOMP_ABI_CALL(0x0017D8B0u, sub_0017D8B0); /* call 0x0017D8B0 */

loc_0017E499: ;
    ebx = 0; /* xor self */
    MEM32(esi) = 0x3DFC44;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    MEM8(esi + 0x94) = MEM8(esi + 0x94) & 0xFC;
    _fa = (uint32_t)(MEM32(0x5771EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5771EC), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017E517; /* je: equal / zero */

loc_0017E4CF: ;
    PUSH32(esp, edi);
    ecx = 0x5765C8;
    PUSH32(esp, 0x0017E4DAu); RECOMP_ABI_CALL(0x0017E430u, sub_0017E430); /* call 0x0017E430 */

loc_0017E4DA: ;
    ecx = eax;
    ecx = ecx << 0xA;
    edi = ecx + 0x5765C8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017E4EB; /* je: equal / zero */

loc_0017E4E9: ;
    MEM8(edi) = LO8(ebx);

loc_0017E4EB: ;
    ecx = eax;
    edx = eax;
    ecx = ecx & 0x1F;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(edx * 4 + 0x5771C8);
    edx = edx * 4 + 0x5771C8;
    ecx = ecx | eax;
    MEM32(edx) = ecx;
    MEM32(esi + 0x7C) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0017E517: ;
    MEM32(esi + 0x7C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017E520
 * Original: 0x0017E520 - 0x0017E59F (127 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017E520: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = ecx << 2;
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax + 0xC00);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0xC00) = edi;
    MEM32(ecx + eax + 0xC20) = MEM32(ecx + eax + 0xC20) & edx;
    ecx = MEM32(eax + 0xC14);
    edx = MEM32(eax + 0xC1C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    MEM32(eax + 0xC14) = ecx;
    MEM32(eax + 0xC1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0017E585; /* jl: less (signed <) */

loc_0017E574: ;
    MEM32(eax + 0xC14) = 0;
    ecx = 2;
    goto loc_0017E586;

loc_0017E585: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0017E586: ;
    MEM32(eax + ecx * 4 + 0xC04) = esi;
    ecx = MEM32(eax + 0xC24);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0xC24) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017E5A0
 * Original: 0x0017E5A0 - 0x0017E5FD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017E5A0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xC14) = esi;
    MEM32(ecx + 0xC18) = esi;
    MEM32(ecx + 0xC1C) = esi;
    edx = 0; /* xor self */
    goto loc_0017E5C0;

    /* nop */

loc_0017E5C0: ;
    eax = MEM32(ecx + 0xC14);
    edi = MEM32(ecx + 0xC1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(ecx + 0xC14) = eax;
    MEM32(ecx + 0xC1C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0017E5EC; /* jl: less (signed <) */

loc_0017E5DF: ;
    MEM32(ecx + 0xC14) = esi;
    eax = 2;
    goto loc_0017E5ED;

loc_0017E5EC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0017E5ED: ;
    MEM32(ecx + eax * 4 + 0xC04) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017E5C0; /* jl: less (signed <) */

loc_0017E5FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017E600
 * Original: 0x0017E600 - 0x0017E605 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017E600: ;
    g_seh_ebp = ebp; sub_0017E2C0(); return; /* tail jmp 0x0017E2C0 */

}

/**
 * sub_0017E610
 * Original: 0x0017E610 - 0x0017E687 (119 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017E610: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3548A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DFC44;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0017E640u); RECOMP_ABI_CALL(0x0017DCD0u, sub_0017DCD0); /* call 0x0017DCD0 */

loc_0017E640: ;
    ecx = esi;
    PUSH32(esp, 0x0017E647u); RECOMP_ABI_CALL(0x0017DD40u, sub_0017DD40); /* call 0x0017DD40 */

loc_0017E647: ;
    eax = MEM32(esi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E668; /* je: equal / zero */

loc_0017E64E: ;
    eax = eax - 0x5765C8;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    PUSH32(esp, eax);
    ecx = 0x5765C8;
    PUSH32(esp, 0x0017E661u); RECOMP_ABI_CALL(0x0017E520u, sub_0017E520); /* call 0x0017E520 */

loc_0017E661: ;
    MEM32(esi + 0x7C) = 0;

loc_0017E668: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017E677u); RECOMP_ABI_CALL(0x0017D9E0u, sub_0017D9E0); /* call 0x0017D9E0 */

loc_0017E677: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0017E690
 * Original: 0x0017E690 - 0x0017E6AE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017E690: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017E698u); RECOMP_ABI_CALL(0x0017E610u, sub_0017E610); /* call 0x0017E610 */

loc_0017E698: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E6A8; /* je: equal / zero */

loc_0017E69F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017E6A5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0017E6A5: ;
    esp = esp + 4;

loc_0017E6A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017E6B0
 * Original: 0x0017E6B0 - 0x0017E6E2 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E6B0(void)
{

loc_0017E6B0: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xC00) = eax;
    MEM32(esi + 0xC14) = eax;
    MEM32(esi + 0xC18) = eax;
    MEM32(esi + 0xC1C) = eax;
    MEM32(esi + 0xC20) = eax;
    MEM32(esi + 0xC24) = eax;
    PUSH32(esp, 0x0017E6DEu); RECOMP_ABI_CALL(0x0017E5A0u, sub_0017E5A0); /* call 0x0017E5A0 */

loc_0017E6DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017E6F0
 * Original: 0x0017E6F0 - 0x0017E70F (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E6F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017E6F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017E6F8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017E6F8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DFCB4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x134); PUSH32(esp, 0x0017E707u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E707: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0017EE00(); return; /* tail jmp 0x0017EE00 */

}

/**
 * sub_0017E710
 * Original: 0x0017E710 - 0x0017E722 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E710(void)
{

loc_0017E710: ;
    PUSH32(esp, 0x0017E715u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0017E715: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0017E721u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E721: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017E730
 * Original: 0x0017E730 - 0x0017E755 (37 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017E730: ;
    PUSH32(esp, 0x0017E735u); RECOMP_ABI_CALL(0x00161E60u, sub_00161E60); /* call 0x00161E60 */

loc_0017E735: ;
    PUSH32(esp, 0x0017E73Au); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0017E73A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017E741u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E741: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E754; /* jne: not equal / not zero */

loc_0017E745: ;
    PUSH32(esp, 0x0017E74Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017E74A: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xF4)); return; /* indirect tail jmp */

loc_0017E754: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017E760
 * Original: 0x0017E760 - 0x0017E7B6 (86 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E760(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017E760: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0017E76Bu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0017E76B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C6EB4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017E777u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E777: ;
    PUSH32(esp, 0x0017E77Cu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017E77C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0017E783u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E783: ;
    PUSH32(esp, 0x0017E788u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0017E788: ;
    esi = eax;
    PUSH32(esp, 0x0017E78Fu); RECOMP_ABI_CALL(0x000579E0u, sub_000579E0); /* call 0x000579E0 */

loc_0017E78F: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x0017E79Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E79D: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x0017E7ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E7AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00163930(); return; /* tail jmp 0x00163930 */

}

/**
 * sub_0017E7C0
 * Original: 0x0017E7C0 - 0x0017E83C (124 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E7C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017E7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017E7C8u); RECOMP_ABI_CALL(0x000579E0u, sub_000579E0); /* call 0x000579E0 */

loc_0017E7C8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017E7D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E7D3: ;
    PUSH32(esp, 0x0017E7D8u); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0017E7D8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017E7DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E7DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, MEM8(esi + 0xED0));
    if (TEST_NZ(_fa, _fb)) goto loc_0017E812; /* jne: not equal / not zero */

loc_0017E7E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E834; /* jne: not equal / not zero */

loc_0017E7ED: ;
    PUSH32(esp, 0x0017E7F2u); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0017E7F2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017E7FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E7FB: ;
    PUSH32(esp, 0x0017E800u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017E800: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x0017E80Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E80A: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001608E0(); return; /* tail jmp 0x001608E0 */

loc_0017E812: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E834; /* jne: not equal / not zero */

loc_0017E816: ;
    PUSH32(esp, 0x0017E81Bu); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0017E81B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017E822u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E822: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E834; /* je: equal / zero */

loc_0017E826: ;
    PUSH32(esp, 0x0017E82Bu); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0017E82B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017E834u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E834: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001608E0(); return; /* tail jmp 0x001608E0 */

}

/**
 * sub_0017E840
 * Original: 0x0017E840 - 0x0017EA04 (452 bytes, 148 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E840(void)
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

loc_0017E840: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ebx | 0xFFFFFFFFu;
    PUSH32(esp, edi);
    ebp = ecx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0017E855u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017E855: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x0017E864u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E864: ;
    esi = eax;
    PUSH32(esp, 0x0017E86Bu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017E86B: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0017E87Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E87A: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017E896; /* je: equal / zero */

loc_0017E882: ;
    PUSH32(esp, 0x0017E887u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017E887: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x170); PUSH32(esp, 0x0017E896u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E896: ;
    ecx = ebp;
    PUSH32(esp, 0x0017E89Du); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0017E89D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017E8C1; /* jne: not equal / not zero */

loc_0017E8A3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017E8C1; /* jne: not equal / not zero */

loc_0017E8A7: ;
    PUSH32(esp, 0x0017E8ACu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017E8AC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0017E8B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E8B3: ;
    fp_top() = fp_top() + MEMF(ebp + 0xECC); /* fadd dword ptr [ebp + 0xecc] */
    MEMF(ebp + 0xECC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0017E8C7;

loc_0017E8C1: ;
    MEM32(ebp + 0xECC) = ebx;

loc_0017E8C7: ;
    fp_push(MEMF(ebp + 0xECC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x458E6C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x458e6c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E93C; /* jne: not equal / not zero */

loc_0017E8DA: ;
    MEM8(ebp + 0xED0) = 1;
    PUSH32(esp, 0x0017E8E6u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0017E8E6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DFCE4);
    PUSH32(esp, 0x3CCCFC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017E8FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E8FE: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E93C; /* je: equal / zero */

loc_0017E906: ;
    PUSH32(esp, 0x0017E90Bu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0017E90B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0017E912u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E912: ;
    PUSH32(esp, 0x0017E917u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0017E917: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DFCCC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017E923u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E923: ;
    PUSH32(esp, 0x0017E928u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0017E928: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DFCCC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0017E936u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E936: ;
    MEM32(ebp + 0xECC) = ebx;

loc_0017E93C: ;
    PUSH32(esp, 0x0017E941u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017E941: ;
    esi = eax;
    PUSH32(esp, 0x0017E948u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0017E948: ;
    edx = MEM32(esi);
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CF004);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0017E95Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E95C: ;
    eax = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0017E969u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E969: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E97A; /* jne: not equal / not zero */

loc_0017E96D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3DFCC4);
    ecx = ebp;
    PUSH32(esp, 0x0017E97Au); RECOMP_ABI_CALL(0x00162960u, sub_00162960); /* call 0x00162960 */

loc_0017E97A: ;
    ecx = ebp;
    PUSH32(esp, 0x0017E981u); RECOMP_ABI_CALL(0x00160900u, sub_00160900); /* call 0x00160900 */

loc_0017E981: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017E9C9; /* je: equal / zero */

loc_0017E987: ;
    esi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E995; /* jne: not equal / not zero */

loc_0017E98E: ;
    esi = 0x3C806C;
    goto loc_0017E9AB;

loc_0017E995: ;
    PUSH32(esp, 0x0017E99Au); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017E99A: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x1008;

loc_0017E9AB: ;
    edi = 0x3DFCC4;
    ecx = 8;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0017E9C9; /* jne: not equal / not zero */

loc_0017E9BB: ;
    _fa = (uint32_t)(MEM8(ebx + 0x39)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x39), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017E9C9; /* jne: not equal / not zero */

loc_0017E9C1: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0017E9C9u); RECOMP_ABI_CALL(0x00160B50u, sub_00160B50); /* call 0x00160B50 */

loc_0017E9C9: ;
    PUSH32(esp, 0x0017E9CEu); RECOMP_ABI_CALL(0x000579E0u, sub_000579E0); /* call 0x000579E0 */

loc_0017E9CE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0017E9D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E9D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0017EA00; /* je: equal / zero */

loc_0017E9DF: ;
    PUSH32(esp, 0x0017E9E4u); RECOMP_ABI_CALL(0x000579E0u, sub_000579E0); /* call 0x000579E0 */

loc_0017E9E4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017E9EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017E9EF: ;
    PUSH32(esp, 0x0017E9F4u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0017E9F4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017EA00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EA00: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0017EA10
 * Original: 0x0017EA10 - 0x0017EA19 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EA10(void)
{

loc_0017EA10: ;
    SET_LO8(eax, MEM8(ecx + 0x10E4));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0017EA20
 * Original: 0x0017EA20 - 0x0017EAA6 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EA20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017EA20: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x10E4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10E4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017EA99; /* je: equal / zero */

loc_0017EA2C: ;
    eax = MEM32(esi + 0x10D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0017EA53; /* jl: less (signed <) */

loc_0017EA36: ;
    PUSH32(esp, 0x0017EA3Bu); RECOMP_ABI_CALL(0x0013F910u, sub_0013F910); /* call 0x0013F910 */

loc_0017EA3B: ;
    ecx = MEM32(esi + 0x10D8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017EA49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EA49: ;
    MEM32(esi + 0x10D8) = 0xFFFFFFFFu;

loc_0017EA53: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017EA59u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EA59: ;
    ecx = MEM32(esi + 0x10DC);
    edx = MEM32(eax);
    edi = esi + 0x10DC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017EA72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EA72: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EA80; /* je: equal / zero */

loc_0017EA77: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017EA7Du); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_0017EA7D: ;
    esp = esp + 4;

loc_0017EA80: ;
    MEM8(esi + 0x10E4) = MEM8(esi + 0x10E4) & 0xFE;
    PUSH32(esp, 0x0017EA8Cu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EA8C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x0017EA98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EA98: ;
    POP32(esp, edi);

loc_0017EA99: ;
    PUSH32(esp, 0x0017EA9Eu); RECOMP_ABI_CALL(0x0013F910u, sub_0013F910); /* call 0x0013F910 */

loc_0017EA9E: ;
    edx = MEM32(eax);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_0017EAB0
 * Original: 0x0017EAB0 - 0x0017EBB4 (260 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EAB0(void)
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

loc_0017EAB0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017EABBu); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0017EABB: ;
    PUSH32(esp, 0x0017EAC0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EAC0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x0017EACAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EACA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017EBAF; /* jne: not equal / not zero */

loc_0017EAD2: ;
    _fa = (uint32_t)(MEM8(esi + 0x10E4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10E4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017EBA8; /* je: equal / zero */

loc_0017EADF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017EAE7u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EAE7: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x0017EAF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EAF8: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0017EAFFu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EAFF: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x13);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x0017EB10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EB10: ;
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0017EB34; /* je: equal / zero */

loc_0017EB1A: ;
    PUSH32(esp, 0x0017EB1Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EB1F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0017EB29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EB29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017EB34; /* jne: not equal / not zero */

loc_0017EB2D: ;
    MEM8(esi + 0x10E4) = MEM8(esi + 0x10E4) | 4;

loc_0017EB34: ;
    PUSH32(esp, 0x0017EB39u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EB39: ;
    edi = eax;
    PUSH32(esp, 0x0017EB40u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EB40: ;
    ebp = eax;
    PUSH32(esp, 0x0017EB47u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EB47: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0017EB50u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EB50: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0017EB5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EB5C: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x12C); PUSH32(esp, 0x0017EB6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EB6A: ;
    PUSH32(esp, eax);
    ecx = esi + 0xECC;
    PUSH32(esp, 0x0017EB76u); RECOMP_ABI_CALL(0x0018BC10u, sub_0018BC10); /* call 0x0018BC10 */

loc_0017EB76: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0017EB98; /* jne: not equal / not zero */

loc_0017EB81: ;
    PUSH32(esp, 0x0017EB86u); RECOMP_ABI_CALL(0x0013F910u, sub_0013F910); /* call 0x0013F910 */

loc_0017EB86: ;
    ecx = MEM32(esi + 0x10D8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0017EB94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EB94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017EB9F; /* je: equal / zero */

loc_0017EB98: ;
    ecx = esi;
    PUSH32(esp, 0x0017EB9Fu); RECOMP_ABI_CALL(0x0017EA20u, sub_0017EA20); /* call 0x0017EA20 */

loc_0017EB9F: ;
    _fa = (uint32_t)(MEM8(esi + 0x10E4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10E4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017EBAF; /* jne: not equal / not zero */

loc_0017EBA8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0017EBAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EBAF: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0017EBC0
 * Original: 0x0017EBC0 - 0x0017EBF9 (57 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017EBC0: ;
    SET_LO8(ecx, MEM8(0x5771FC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017EBF3; /* jne: not equal / not zero */

loc_0017EBCF: ;
    MEM32(0x5771FC) = MEM32(0x5771FC) | eax;
    MEM32(0x5771F0) = 0x43800000;
    MEM32(0x5771F4) = 0;
    MEM32(0x5771F8) = 0x43400000;

loc_0017EBF3: ;
    eax = 0x5771F0;
    esp += 4; return; /* ret */

}

/**
 * sub_0017EC00
 * Original: 0x0017EC00 - 0x0017EDF4 (500 bytes, 146 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EC00(void)
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

loc_0017EC00: ;
    esp = esp - 0x14C;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x150) = eax;
    esi = ecx;
    PUSH32(esp, 0x0017EC1Bu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0017EC1B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x0017EC29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EC29: ;
    PUSH32(esp, 0x0017EC2Eu); RECOMP_ABI_CALL(0x0013F910u, sub_0013F910); /* call 0x0013F910 */

loc_0017EC2E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0017EC35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EC35: ;
    MEM8(esi + 0x10E4) = MEM8(esi + 0x10E4) & 0xFD;
    PUSH32(esp, 0x0017EC41u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_0017EC41: ;
    edi = MEM32(esp + 0x158);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0017EC52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EC52: ;
    PUSH32(esp, 0x0017EC57u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EC57: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0017EC68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EC68: ;
    PUSH32(esp, 0x0017EC6Du); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0017EC6D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DFCE4);
    PUSH32(esp, 0x3CCCFC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017EC85u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EC85: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017EDDB; /* je: equal / zero */

loc_0017EC91: ;
    _fa = (uint32_t)(MEM8(esi + 0x10E4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10E4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017EDDB; /* jne: not equal / not zero */

loc_0017EC9E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DFCF8);
    edx = esp + 0x58;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    MEM8(esp + 0x60) = 0;
    PUSH32(esp, 0x0017ECB8u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0017ECB8: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x0017ECC0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017ECC0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0017ECD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ECD0: ;
    PUSH32(esp, ecx);
    ecx = esi + 0xECC;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0017ECDFu); RECOMP_ABI_CALL(0x0018C0F0u, sub_0018C0F0); /* call 0x0018C0F0 */

loc_0017ECDF: ;
    PUSH32(esp, 0x0017ECE4u); RECOMP_ABI_CALL(0x0013F910u, sub_0013F910); /* call 0x0013F910 */

loc_0017ECE4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017ECECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ECEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x10D8) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_0017EDDB; /* jl: less (signed <) */

loc_0017ECFA: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0017ED03u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0017ED03: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0017ED0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ED0A: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0017ED14u); RECOMP_ABI_CALL(0x0023E410u, sub_0023E410); /* call 0x0023E410 */

loc_0017ED14: ;
    PUSH32(esp, 0x0017ED19u); RECOMP_ABI_CALL(0x0013C1F0u, sub_0013C1F0); /* call 0x0013C1F0 */

loc_0017ED19: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0017ED24u); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_0017ED24: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x10DC) = ecx;
    edx = MEM32(ecx);
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017ED34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ED34: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017ED40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ED40: ;
    ecx = MEM32(esi + 0x10DC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0017ED4Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ED4B: ;
    ecx = MEM32(esi + 0x10D8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017ED59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ED59: ;
    PUSH32(esp, 0x0017ED5Eu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017ED5E: ;
    ecx = MEM32(esi + 0x10DC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0017ED71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ED71: ;
    PUSH32(esp, 0x0017ED76u); RECOMP_ABI_CALL(0x0013F910u, sub_0013F910); /* call 0x0013F910 */

loc_0017ED76: ;
    ecx = MEM32(esi + 0x10D8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017ED84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ED84: ;
    MEM8(esi + 0x10E4) = MEM8(esi + 0x10E4) | 1;
    PUSH32(esp, 0x0017ED90u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017ED90: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0017ED97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ED97: ;
    MEMF(esi + 0x10E0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0017EDA2u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EDA2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x134); PUSH32(esp, 0x0017EDB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EDB1: ;
    PUSH32(esp, 0x0017EDB6u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EDB6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x0017EDC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EDC2: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x148);
    PUSH32(esp, 0x0017EDD2u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017EDD2: ;
    esp = esp + 0x14C;
    esp += 8; return; /* ret 4 */

loc_0017EDDB: ;
    ecx = MEM32(esp + 0x150);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x0017EDEBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017EDEB: ;
    esp = esp + 0x14C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0017EE00
 * Original: 0x0017EE00 - 0x0017EE2A (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017EE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017EE08u); RECOMP_ABI_CALL(0x00161140u, sub_00161140); /* call 0x00161140 */

loc_0017EE08: ;
    PUSH32(esp, 0x0017EE0Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EE0D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x130); PUSH32(esp, 0x0017EE17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EE17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017EE28; /* je: equal / zero */

loc_0017EE1B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EE28; /* je: equal / zero */

loc_0017EE20: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017EE28u); RECOMP_ABI_CALL(0x0017EC00u, sub_0017EC00); /* call 0x0017EC00 */

loc_0017EE28: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017EE30
 * Original: 0x0017EE30 - 0x0017EFCF (415 bytes, 121 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017EE30: ;
    esp = esp - 0x88;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x88) = eax;
    esi = ecx;
    PUSH32(esp, 0x0017EE4Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EE4A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x130); PUSH32(esp, 0x0017EE54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EE54: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017EE61u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0017EE61: ;
    esp = esp + 0xC;
    MEM8(esp + 0x87) = 0;
    PUSH32(esp, 0x0017EE71u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EE71: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x138); PUSH32(esp, 0x0017EE7Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EE7B: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017EE88u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0017EE88: ;
    SET_LO8(eax, MEM8(esi + 0x10E4));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM8(esp + 0x47) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0017EF92; /* jne: not equal / not zero */

loc_0017EE9E: ;
    ecx = esi + 0xECC;
    MEM8(esp + 7) = 0;
    PUSH32(esp, 0x0017EEAEu); RECOMP_ABI_CALL(0x0018BDA0u, sub_0018BDA0); /* call 0x0018BDA0 */

loc_0017EEAE: ;
    eax = esp + 8;
    edx = eax + 1;

loc_0017EEB5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017EEB5; /* jne: not equal / not zero */

loc_0017EEBC: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017EED7; /* jle: less or equal (signed <=) */

loc_0017EEC2: ;
    PUSH32(esp, 0x0017EEC7u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0017EEC7: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0017EED3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EED3: ;
    SET_LO8(ecx, LO8(eax));
    goto loc_0017EEDB;

loc_0017EED7: ;
    SET_LO8(ecx, MEM8(esp + 7));

loc_0017EEDB: ;
    SET_LO8(eax, MEM8(esi + 0x10E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017EF11; /* je: equal / zero */

loc_0017EEE5: ;
    PUSH32(esp, 0x0017EEEAu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0017EEEA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DFD14);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017EEF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EEF6: ;
    MEM8(esi + 0x10E4) = MEM8(esi + 0x10E4) | 2;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x0017EF0Au); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017EF0A: ;
    esp = esp + 0x88;
    esp += 4; return; /* ret */

loc_0017EF11: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017EF6F; /* jne: not equal / not zero */

loc_0017EF15: ;
    PUSH32(esp, 0x0017EF1Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017EF1A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017EF21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EF21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017EF4A; /* jle: less or equal (signed <=) */

loc_0017EF25: ;
    PUSH32(esp, 0x0017EF2Au); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0017EF2A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DFD08);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017EF36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EF36: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x0017EF43u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017EF43: ;
    esp = esp + 0x88;
    esp += 4; return; /* ret */

loc_0017EF4A: ;
    PUSH32(esp, 0x0017EF4Fu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0017EF4F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DFD14);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017EF5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EF5B: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x0017EF68u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017EF68: ;
    esp = esp + 0x88;
    esp += 4; return; /* ret */

loc_0017EF6F: ;
    SET_LO8(eax, LO8(eax) | 2);
    ecx = esi;
    MEM8(esi + 0x10E4) = LO8(eax);
    PUSH32(esp, 0x0017EF7Eu); RECOMP_ABI_CALL(0x0017EA20u, sub_0017EA20); /* call 0x0017EA20 */

loc_0017EF7E: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x0017EF8Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017EF8B: ;
    esp = esp + 0x88;
    esp += 4; return; /* ret */

loc_0017EF92: ;
    SET_LO8(ecx, MEM8(esp + 0x48));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017EFBB; /* je: equal / zero */

loc_0017EF9A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017EFBB; /* jne: not equal / not zero */

loc_0017EF9E: ;
    PUSH32(esp, 0x0017EFA3u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017EFA3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0017EFAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017EFAF: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017EFBBu); RECOMP_ABI_CALL(0x0017EC00u, sub_0017EC00); /* call 0x0017EC00 */

loc_0017EFBB: ;
    ecx = MEM32(esp + 0x88);
    POP32(esp, esi);
    PUSH32(esp, 0x0017EFC8u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017EFC8: ;
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_0017EFD0
 * Original: 0x0017EFD0 - 0x0017F042 (114 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EFD0(void)
{

loc_0017EFD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3548C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x0017EFF2u); RECOMP_ABI_CALL(0x0016AE80u, sub_0016AE80); /* call 0x0016AE80 */

loc_0017EFF2: ;
    ecx = esi + 0xECC;
    MEM32(esp + 0x10) = 0;
    MEM32(esi) = 0x3DFD2C;
    PUSH32(esp, 0x0017F00Bu); RECOMP_ABI_CALL(0x0018C130u, sub_0018C130); /* call 0x0018C130 */

loc_0017F00B: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x10D8) = 0xFFFFFFFFu;
    MEM32(esi + 0x10DC) = 0;
    MEM8(esi + 0x10E4) = MEM8(esi + 0x10E4) & 0xF8;
    MEM32(esi + 0x10E0) = 0;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0017F050
 * Original: 0x0017F050 - 0x0017F0A6 (86 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F050(void)
{

loc_0017F050: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3548F6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DFD2C;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x0017F080u); RECOMP_ABI_CALL(0x0017EA20u, sub_0017EA20); /* call 0x0017EA20 */

loc_0017F080: ;
    ecx = esi + 0xECC;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0017F090u); RECOMP_ABI_CALL(0x0018C0E0u, sub_0018C0E0); /* call 0x0018C0E0 */

loc_0017F090: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DE4AC;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0017F0B0
 * Original: 0x0017F0B0 - 0x0017F0CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017F0B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017F0B8u); RECOMP_ABI_CALL(0x0017F050u, sub_0017F050); /* call 0x0017F050 */

loc_0017F0B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F0C8; /* je: equal / zero */

loc_0017F0BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017F0C5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0017F0C5: ;
    esp = esp + 4;

loc_0017F0C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017F0D0
 * Original: 0x0017F0D0 - 0x0017F12F (95 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017F0D0: ;
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    esi = eax + 1;

loc_0017F0D7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F0D7; /* jne: not equal / not zero */

loc_0017F0DE: ;
    edi = MEM32(esp + 0xC);
    edx = edi;
    eax = eax - esi;
    esi = edx + 1;
    PUSH32(esp, ebx);
    /* nop */

loc_0017F0F0: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F0F0; /* jne: not equal / not zero */

loc_0017F0F7: ;
    edx = edx - esi;
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0017F12A; /* jge: greater or equal (signed >=) */

loc_0017F104: ;
    eax = edi;
    esi = edi;

loc_0017F108: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F108; /* jne: not equal / not zero */

loc_0017F10F: ;
    eax = eax - esi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ecx;

loc_0017F114: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F114; /* jne: not equal / not zero */

loc_0017F11C: ;
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

loc_0017F12A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017F130
 * Original: 0x0017F130 - 0x0017F2F1 (449 bytes, 134 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F130(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017F130: ;
    esp = esp - 0x610;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x61C) = eax;
    esi = ecx;
    PUSH32(esp, 0x0017F14Du); RECOMP_ABI_CALL(0x00163930u, sub_00163930); /* call 0x00163930 */

loc_0017F14D: ;
    PUSH32(esp, 0x0017F152u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0017F152: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0017F159u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F159: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x457FC8);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3DFDBC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0017F175u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017F175: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017F17Bu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017F17B: ;
    ebp = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEM8(esp + 0x11C) = LO8(ebx);
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM8(esp + 0x21C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0017F2DA; /* je: equal / zero */

loc_0017F19E: ;
    PUSH32(esp, 0x0017F1A3u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_0017F1A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F1CC; /* je: equal / zero */

loc_0017F1A7: ;
    esi = MEM32(ebp);
    PUSH32(esp, 0x0017F1AFu); RECOMP_ABI_CALL(0x000BF970u, sub_000BF970); /* call 0x000BF970 */

loc_0017F1AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(esi + 0x58); PUSH32(esp, 0x0017F1B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F1B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x60C);
    PUSH32(esp, 0x0017F1C5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017F1C5: ;
    esp = esp + 0x610;
    esp += 4; return; /* ret */

loc_0017F1CC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F2DA; /* je: equal / zero */

loc_0017F1D4: ;
    PUSH32(esp, 0x0017F1D9u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0017F1D9: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0017F1E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F1E4: ;
    esi = eax;
    MEM32(esp + 0x14) = esi;
    edi = esi;
    /* nop */

loc_0017F1F0: ;
    PUSH32(esp, 0x0017F1F5u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0017F1F5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0017F1FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F1FC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1BC4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x1BC4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017F20C; /* jne: not equal / not zero */

loc_0017F204: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F2CA; /* je: equal / zero */

loc_0017F20C: ;
    ecx = edi;
    PUSH32(esp, 0x0017F213u); RECOMP_ABI_CALL(0x000849A0u, sub_000849A0); /* call 0x000849A0 */

loc_0017F213: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F2B6; /* jne: not equal / not zero */

loc_0017F21B: ;
    ecx = edi;
    ebx = 0x3C806C;
    ebp = 0x3DDCD0;
    PUSH32(esp, 0x0017F22Cu); RECOMP_ABI_CALL(0x00084980u, sub_00084980); /* call 0x00084980 */

loc_0017F22C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F248; /* je: equal / zero */

loc_0017F230: ;
    PUSH32(esp, 0x0017F235u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017F235: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3FD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017F241u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F241: ;
    ebx = eax;
    ebp = 0x3DDCCC;

loc_0017F248: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x1B8));
    esi = edi + 0x81;
    ecx = edi;
    eax = eax & 0x3F;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017F261u); RECOMP_ABI_CALL(0x00084920u, sub_00084920); /* call 0x00084920 */

loc_0017F261: ;
    ecx = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 0x28;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0017F275u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0017F275: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = esi + 0xFFFFFFA0u;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3DFDA4);
    ecx = esp + 0x144;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0017F297u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0017F297: ;
    esp = esp + 0x30;
    edx = esp + 0x11C;
    PUSH32(esp, edx);
    ecx = esp + 0x220;
    PUSH32(esp, 0x0017F2AEu); RECOMP_ABI_CALL(0x0017F0D0u, sub_0017F0D0); /* call 0x0017F0D0 */

loc_0017F2AE: ;
    esi = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x18);

loc_0017F2B6: ;
    ebx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebx;
    edi = edi + 0x1BC;
    goto loc_0017F1F0;

loc_0017F2CA: ;
    eax = MEM32(ebp);
    ecx = esp + 0x21C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0017F2DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F2DA: ;
    ecx = MEM32(esp + 0x61C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0017F2EAu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017F2EA: ;
    esp = esp + 0x610;
    esp += 4; return; /* ret */

}

/**
 * sub_0017F300
 * Original: 0x0017F300 - 0x0017F365 (101 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017F300: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xED4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F330; /* je: equal / zero */

loc_0017F311: ;
    PUSH32(esp, 0x0017F316u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F316: ;
    ecx = MEM32(esi + 0xED4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0017F324u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F324: ;
    edx = MEM32(0x3DD054);
    MEM32(esi + 0xED4) = edx;

loc_0017F330: ;
    eax = MEM32(esi + 0xED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F35D; /* je: equal / zero */

loc_0017F33E: ;
    PUSH32(esp, 0x0017F343u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F343: ;
    ecx = MEM32(esi + 0xED0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0017F351u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F351: ;
    edx = MEM32(0x3DD050);
    MEM32(esi + 0xED0) = edx;

loc_0017F35D: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00161DA0(); return; /* tail jmp 0x00161DA0 */

}

/**
 * sub_0017F370
 * Original: 0x0017F370 - 0x0017F397 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F370(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017F370: ;
    MEM8(ecx + 0xECC) = MEM8(ecx + 0xECC) | 1;
    PUSH32(esp, 0x0017F37Cu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0017F37C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017F386u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F386: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F396; /* je: equal / zero */

loc_0017F38A: ;
    PUSH32(esp, 0x0017F38Fu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0017F38F: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x38)); return; /* indirect tail jmp */

loc_0017F396: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017F3A0
 * Original: 0x0017F3A0 - 0x0017F3E4 (68 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017F3A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017F3A8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017F3A8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DFDD0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0017F3B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F3B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017F3BAu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0017F3BA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F3CF; /* jne: not equal / not zero */

loc_0017F3C1: ;
    PUSH32(esp, 0x0017F3C6u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0017F3C6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017F3CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F3CF: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0017F3E0u); RECOMP_ABI_CALL(0x00163520u, sub_00163520); /* call 0x00163520 */

loc_0017F3E0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0017F3F0
 * Original: 0x0017F3F0 - 0x0017F433 (67 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017F3F0: ;
    PUSH32(esp, 0x0017F3F5u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0017F3F5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0017F3FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F3FE: ;
    PUSH32(esp, 0x0017F403u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0017F403: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017F40Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F40D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F41D; /* je: equal / zero */

loc_0017F411: ;
    PUSH32(esp, 0x0017F416u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0017F416: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0017F41Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F41D: ;
    PUSH32(esp, 0x0017F422u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017F422: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0017F42Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F42D: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0017F440
 * Original: 0x0017F440 - 0x0017F5DE (414 bytes, 121 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F440(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017F440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0017F554; /* je: equal / zero */

loc_0017F452: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F460; /* jne: not equal / not zero */

loc_0017F459: ;
    esi = 0x3C806C;
    goto loc_0017F476;

loc_0017F460: ;
    PUSH32(esp, 0x0017F465u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017F465: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x1008;

loc_0017F476: ;
    edi = 0x3D95B0;
    ecx = 8;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0017F4BE; /* je: equal / zero */

loc_0017F486: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F494; /* jne: not equal / not zero */

loc_0017F48D: ;
    esi = 0x3C806C;
    goto loc_0017F4AA;

loc_0017F494: ;
    PUSH32(esp, 0x0017F499u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017F499: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x1008;

loc_0017F4AA: ;
    edi = 0x3DFCC4;
    ecx = 8;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0017F554; /* jne: not equal / not zero */

loc_0017F4BE: ;
    eax = MEM32(ebx + 0xED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD050) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017F507; /* jne: not equal / not zero */

loc_0017F4CC: ;
    PUSH32(esp, 0x0017F4D1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0017F4D1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017F4D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F4D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F4EC; /* je: equal / zero */

loc_0017F4DC: ;
    PUSH32(esp, 0x0017F4E1u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F4E1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DFDFC);
    goto loc_0017F4FA;

loc_0017F4EC: ;
    PUSH32(esp, 0x0017F4F1u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F4F1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DFDE4);

loc_0017F4FA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0017F501u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F501: ;
    MEM32(ebx + 0xED0) = eax;

loc_0017F507: ;
    eax = MEM32(0x3DD050);
    _fa = (uint32_t)(MEM32(ebx + 0xED0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xED0), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F5CF; /* je: equal / zero */

loc_0017F518: ;
    ecx = MEM32(ebx + 0xED4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x3DD054) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017F5CF; /* jne: not equal / not zero */

loc_0017F52A: ;
    PUSH32(esp, 0x0017F52Fu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F52F: ;
    ecx = MEM32(ebx + 0xED0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0017F53Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F53F: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    MEM32(ebx + 0xED4) = eax;
    PUSH32(esp, 0x0017F54Du); RECOMP_ABI_CALL(0x001639F0u, sub_001639F0); /* call 0x001639F0 */

loc_0017F54D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0017F554: ;
    edx = MEM32(ebx + 0xED4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F5A2; /* je: equal / zero */

loc_0017F562: ;
    PUSH32(esp, 0x0017F567u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F567: ;
    ecx = MEM32(ebx + 0xED4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0017F575u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F575: ;
    edx = MEM32(0x3DD054);
    MEM32(ebx + 0xED4) = edx;
    PUSH32(esp, 0x0017F586u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0017F586: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017F590u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F590: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F5A2; /* je: equal / zero */

loc_0017F594: ;
    PUSH32(esp, 0x0017F599u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_0017F599: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017F5A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F5A2: ;
    eax = MEM32(ebx + 0xED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F5CF; /* je: equal / zero */

loc_0017F5B0: ;
    PUSH32(esp, 0x0017F5B5u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F5B5: ;
    ecx = MEM32(ebx + 0xED0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0017F5C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F5C3: ;
    edx = MEM32(0x3DD050);
    MEM32(ebx + 0xED0) = edx;

loc_0017F5CF: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0017F5D7u); RECOMP_ABI_CALL(0x001639F0u, sub_001639F0); /* call 0x001639F0 */

loc_0017F5D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017F5E0
 * Original: 0x0017F5E0 - 0x0017F78C (428 bytes, 127 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017F5E0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM8(ebx + 0xECC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xECC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F61E; /* je: equal / zero */

loc_0017F5EC: ;
    PUSH32(esp, 0x0017F5F1u); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0017F5F1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017F5F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F5F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F61E; /* jne: not equal / not zero */

loc_0017F5FC: ;
    PUSH32(esp, 0x0017F601u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0017F601: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017F608u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F608: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F61E; /* jne: not equal / not zero */

loc_0017F60C: ;
    PUSH32(esp, 0x0017F611u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017F611: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0017F61Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F61C: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0017F61E: ;
    eax = MEM32(ebx + 0xED4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F649; /* je: equal / zero */

loc_0017F62C: ;
    PUSH32(esp, 0x0017F631u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F631: ;
    ecx = MEM32(ebx + 0xED4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0017F649u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F649: ;
    ecx = ebx;
    PUSH32(esp, 0x0017F650u); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0017F650: ;
    PUSH32(esp, 0x0017F655u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017F655: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0017F65Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F65F: ;
    eax = eax >> 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F680; /* jne: not equal / not zero */

loc_0017F666: ;
    PUSH32(esp, 0x0017F66Bu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017F66B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0017F675u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F675: ;
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F78A; /* je: equal / zero */

loc_0017F680: ;
    eax = MEM32(ebx + 0x290);
    eax = eax + 8;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0017F698; /* jne: not equal / not zero */

loc_0017F691: ;
    esi = 0x3C806C;
    goto loc_0017F6AE;

loc_0017F698: ;
    PUSH32(esp, 0x0017F69Du); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017F69D: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x1008;

loc_0017F6AE: ;
    edi = 0x3DFCC4;
    ecx = 8;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags == 0)) goto loc_0017F78A; /* jne: not equal / not zero */

loc_0017F6C4: ;
    eax = MEM32(ebx + 0xED4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F6F1; /* je: equal / zero */

loc_0017F6D2: ;
    PUSH32(esp, 0x0017F6D7u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F6D7: ;
    ecx = MEM32(ebx + 0xED4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0017F6E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F6E5: ;
    edx = MEM32(0x3DD054);
    MEM32(ebx + 0xED4) = edx;

loc_0017F6F1: ;
    eax = MEM32(ebx + 0xED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F71E; /* je: equal / zero */

loc_0017F6FF: ;
    PUSH32(esp, 0x0017F704u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F704: ;
    ecx = MEM32(ebx + 0xED0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0017F712u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F712: ;
    edx = MEM32(0x3DD050);
    MEM32(ebx + 0xED0) = edx;

loc_0017F71E: ;
    PUSH32(esp, 0x0017F723u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0017F723: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017F72Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F72A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F73E; /* je: equal / zero */

loc_0017F72E: ;
    PUSH32(esp, 0x0017F733u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F733: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DFDFC);
    goto loc_0017F74C;

loc_0017F73E: ;
    PUSH32(esp, 0x0017F743u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F743: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DFDE4);

loc_0017F74C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0017F753u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F753: ;
    MEM32(ebx + 0xED0) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F78A; /* je: equal / zero */

loc_0017F761: ;
    ecx = MEM32(ebx + 0xED4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x3DD054) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017F78A; /* jne: not equal / not zero */

loc_0017F76F: ;
    PUSH32(esp, 0x0017F774u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0017F774: ;
    ecx = MEM32(ebx + 0xED0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0017F784u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F784: ;
    MEM32(ebx + 0xED4) = eax;

loc_0017F78A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017F790
 * Original: 0x0017F790 - 0x0017F8F5 (357 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017F790: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354916);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x128;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x13C);
    MEM32(esp + 0x128) = eax;
    eax = MEM32(esp + 0x140);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x0017F7D1u); RECOMP_ABI_CALL(0x00163520u, sub_00163520); /* call 0x00163520 */

loc_0017F7D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F8D1; /* je: equal / zero */

loc_0017F7D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    ecx = esp + 0x30;
    PUSH32(esp, 0x3DFE30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0017F7EEu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0017F7EE: ;
    esp = esp + 0xC;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DFE20);
    ecx = esp + 0x14;
    MEM8(esp + 0x133) = 0;
    PUSH32(esp, 0x0017F809u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017F809: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x13C) = 0;
    PUSH32(esp, 0x0017F820u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017F820: ;
    ecx = esp + 0xC;
    edi = eax;
    MEM32(esp + 0x138) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017F836u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017F836: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0017F898; /* je: equal / zero */

loc_0017F83B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DFE20);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0017F84Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017F84B: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x138) = 1;
    PUSH32(esp, 0x0017F862u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017F862: ;
    ecx = eax;
    PUSH32(esp, 0x0017F869u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017F869: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0017F879u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0017F879: ;
    esp = esp + 0xC;
    ecx = esp + 0x18;
    MEM8(esp + 0x127) = 0;
    MEM32(esp + 0x134) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017F898u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017F898: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x457E40);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFE14);
    PUSH32(esp, 0x0017F8B4u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017F8B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017F8BAu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017F8BA: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F8CF; /* je: equal / zero */

loc_0017F8C1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0017F8CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F8CF: ;
    SET_LO8(eax, 1);

loc_0017F8D1: ;
    ecx = MEM32(esp + 0x12C);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x128);
    POP32(esp, esi);
    PUSH32(esp, 0x0017F8ECu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017F8EC: ;
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0017F900
 * Original: 0x0017F900 - 0x0017F9AD (173 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017F900: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x457E24);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017F91Au); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017F91A: ;
    esp = esp + 0x14;
    esi = eax;
    edi = 0x3DFE60;

loc_0017F924: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F966; /* je: equal / zero */

loc_0017F928: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0017F92Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F92F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017F96D; /* je: equal / zero */

loc_0017F934: ;
    PUSH32(esp, 0x0017F939u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017F939: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017F946u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F946: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0017F94Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F94E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017F954u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017F954: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017F96D; /* je: equal / zero */

loc_0017F95B: ;
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DFE6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3DFE6C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017F924; /* jl: less (signed <) */

loc_0017F966: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0017F96D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0017F974u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0017F974: ;
    edi = eax;
    PUSH32(esp, 0x0017F97Bu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017F97B: ;
    edx = MEM32(edi);
    ebp = MEM32(esi);
    ebx = eax;
    eax = MEM32(ebx);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0017F98Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F98C: ;
    eax = ZX16(MEM16(eax * 4 + 0x3DFE60));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0017F99Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F99E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x58); PUSH32(esp, 0x0017F9A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F9A4: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017F9B0
 * Original: 0x0017F9B0 - 0x0017FA19 (105 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017F9B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017F9B8u); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0017F9B8: ;
    PUSH32(esp, 0x0017F9BDu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017F9BD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0017F9C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F9C7: ;
    ecx = eax;
    ecx = ecx >> 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017F9D8; /* jne: not equal / not zero */

loc_0017F9D1: ;
    eax = eax >> 0x13;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017FA17; /* je: equal / zero */

loc_0017F9D8: ;
    ecx = esi;
    PUSH32(esp, 0x0017F9DFu); RECOMP_ABI_CALL(0x00160900u, sub_00160900); /* call 0x00160900 */

loc_0017F9DF: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017F9E7u); RECOMP_ABI_CALL(0x0017F900u, sub_0017F900); /* call 0x0017F900 */

loc_0017F9E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017FA17; /* je: equal / zero */

loc_0017F9EB: ;
    PUSH32(esp, 0x0017F9F0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017F9F0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017F9F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017F9F9: ;
    PUSH32(esp, 0x0017F9FEu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0017F9FE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0017FA08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FA08: ;
    ecx = esi;
    PUSH32(esp, 0x0017FA0Fu); RECOMP_ABI_CALL(0x00160900u, sub_00160900); /* call 0x00160900 */

loc_0017FA0F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017FA17u); RECOMP_ABI_CALL(0x0017F900u, sub_0017F900); /* call 0x0017F900 */

loc_0017FA17: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017FA20
 * Original: 0x0017FA20 - 0x0017FA81 (97 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017FA20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0017FA2Au); RECOMP_ABI_CALL(0x00163930u, sub_00163930); /* call 0x00163930 */

loc_0017FA2A: ;
    eax = MEM32(ebx + 0x298);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    esi = ebx + 0x294;
    if (CMP_EQ(_fa, _fb)) goto loc_0017FA56; /* je: equal / zero */

loc_0017FA3D: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017FA56; /* je: equal / zero */

loc_0017FA4E: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0017FA56u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_0017FA56: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017FA64; /* jne: not equal / not zero */

loc_0017FA60: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017FA7D; /* je: equal / zero */

loc_0017FA64: ;
    edx = MEM32(esi + edi * 4 + 0xA34);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0017FA73u); RECOMP_ABI_CALL(0x0017F900u, sub_0017F900); /* call 0x0017F900 */

loc_0017FA73: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0017FA7Bu); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_0017FA7B: ;
    goto loc_0017FA56;

loc_0017FA7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017FA90
 * Original: 0x0017FA90 - 0x0017FB11 (129 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017FA90: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017FA9Bu); RECOMP_ABI_CALL(0x00172780u, sub_00172780); /* call 0x00172780 */

loc_0017FA9B: ;
    PUSH32(esp, 0x0017FAA0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017FAA0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10C); PUSH32(esp, 0x0017FABFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FABF: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017FB0C; /* je: equal / zero */

loc_0017FAC7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x457FC8);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CC13C);
    ecx = esi;
    PUSH32(esp, 0x0017FAE1u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017FAE1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017FAE7u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017FAE7: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017FB0C; /* je: equal / zero */

loc_0017FAEE: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0017FAFAu); RECOMP_ABI_CALL(0x0017DDF0u, sub_0017DDF0); /* call 0x0017DDF0 */

loc_0017FAFA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017FB0C; /* je: equal / zero */

loc_0017FAFE: ;
    PUSH32(esp, 0x0017FB03u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017FB03: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017FB0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FB0C: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0017FB20
 * Original: 0x0017FB20 - 0x0017FCDF (447 bytes, 115 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FB20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017FB20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354957);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x9C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(esp + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DFE80);
    ebp = ecx;
    ecx = esp + 0x68;
    PUSH32(esp, 0x40);
    ebx = 0; /* xor self */
    PUSH32(esp, ecx);
    MEM8(esp + 0x70) = LO8(ebx);
    PUSH32(esp, 0x0017FB6Au); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0017FB6A: ;
    esp = esp + 0x10;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0017FB76u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_0017FB76: ;
    PUSH32(esp, 2);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + 0xB4) = ebx;
    PUSH32(esp, 0x0017FB8Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017FB8D: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM8(esp + 0xB8) = 1;
    PUSH32(esp, 0x0017FBA6u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_0017FBA6: ;
    ecx = esp + 0xC;
    MEM8(esp + 0xB) = LO8(eax);
    MEM8(esp + 0xAC) = LO8(ebx);
    PUSH32(esp, 0x0017FBBAu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017FBBA: ;
    _fa = (uint32_t)(MEM8(esp + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xB), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017FCA6; /* je: equal / zero */

loc_0017FBC4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DFE78);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0017FBD5u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017FBD5: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    MEM8(esp + 0xB4) = 2;
    PUSH32(esp, 0x0017FBEBu); RECOMP_ABI_CALL(0x00125FE0u, sub_00125FE0); /* call 0x00125FE0 */

loc_0017FBEB: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM8(esp + 0xB0) = LO8(ebx);
    PUSH32(esp, 0x0017FBFDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017FBFD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017FCA5; /* je: equal / zero */

loc_0017FC05: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8508);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0017FC16u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017FC16: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0xB8) = 3;
    PUSH32(esp, 0x0017FC2Au); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017FC2A: ;
    ecx = esp + 0x14;
    edi = eax;
    MEM8(esp + 0xB4) = LO8(ebx);
    PUSH32(esp, 0x0017FC3Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017FC3C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017FC4F; /* je: equal / zero */

loc_0017FC40: ;
    ecx = edi;
    PUSH32(esp, 0x0017FC47u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017FC47: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0017FC4Fu); RECOMP_ABI_CALL(0x00172880u, sub_00172880); /* call 0x00172880 */

loc_0017FC4F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CC13C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0017FC5Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017FC5F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0xB8) = 4;
    PUSH32(esp, 0x0017FC73u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017FC73: ;
    ecx = esp + 0x14;
    esi = eax;
    MEM8(esp + 0xB4) = LO8(ebx);
    PUSH32(esp, 0x0017FC85u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017FC85: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0017FCA5; /* je: equal / zero */

loc_0017FC8A: ;
    ecx = esi;
    PUSH32(esp, 0x0017FC91u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017FC91: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, 0x3CC13C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0017FCA2u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017FCA2: ;
    esp = esp + 0x10;

loc_0017FCA5: ;
    POP32(esp, esi);

loc_0017FCA6: ;
    ecx = esp + 0x1C;
    MEM32(esp + 0xAC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017FCBAu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_0017FCBA: ;
    ecx = MEM32(esp + 0xA4);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x9C);
    POP32(esp, ebx);
    PUSH32(esp, 0x0017FCD6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017FCD6: ;
    esp = esp + 0xA8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017FCE0
 * Original: 0x0017FCE0 - 0x0017FD4F (111 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FCE0(void)
{

loc_0017FCE0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0017FCECu); RECOMP_ABI_CALL(0x00163930u, sub_00163930); /* call 0x00163930 */

loc_0017FCEC: ;
    eax = esp + 8;
    edi = esi + 0xECC;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0xC) = 0x43800000;
    MEM32(esp + 0x10) = 0x43000000;
    PUSH32(esp, 0x0017FD0Eu); RECOMP_ABI_CALL(0x0018A240u, sub_0018A240); /* call 0x0018A240 */

loc_0017FD0E: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0xC) = 0x43000000;
    MEM32(esp + 0x10) = 0xC2C80000u;
    MEM32(esp + 0x14) = 0x43A50000;
    PUSH32(esp, 0x0017FD32u); RECOMP_ABI_CALL(0x0018A210u, sub_0018A210); /* call 0x0018A210 */

loc_0017FD32: ;
    PUSH32(esp, 0x0017FD37u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017FD37: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x0017FD41u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FD41: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017FD49u); RECOMP_ABI_CALL(0x0017FB20u, sub_0017FB20); /* call 0x0017FB20 */

loc_0017FD49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0017FD50
 * Original: 0x0017FD50 - 0x0017FD6C (28 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FD50(void)
{

loc_0017FD50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017FD56u); RECOMP_ABI_CALL(0x00162390u, sub_00162390); /* call 0x00162390 */

loc_0017FD56: ;
    esi = eax;
    PUSH32(esp, 0x0017FD5Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017FD5D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0017FD68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FD68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017FD70
 * Original: 0x0017FD70 - 0x0017FD9D (45 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017FD70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0017FD79u); RECOMP_ABI_CALL(0x00163930u, sub_00163930); /* call 0x00163930 */

loc_0017FD79: ;
    esi = 0; /* xor self */
    goto loc_0017FD80;

    /* nop */

loc_0017FD80: ;
    PUSH32(esp, 0x0017FD85u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0017FD85: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017FD8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FD8D: ;
    MEM8(edi + esi + 0xECC) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017FD80; /* jl: less (signed <) */

loc_0017FD9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017FDA0
 * Original: 0x0017FDA0 - 0x0017FDFE (94 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FDA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017FDA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_0017FDA6: ;
    PUSH32(esp, 0x0017FDABu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0017FDAB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017FDB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FDB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017FDEF; /* je: equal / zero */

loc_0017FDB7: ;
    SET_LO8(eax, MEM8(esi + edi + 0xECC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017FDD1; /* je: equal / zero */

loc_0017FDC2: ;
    PUSH32(esp, 0x0017FDC7u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0017FDC7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017FDCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FDCF: ;
    goto loc_0017FDEF;

loc_0017FDD1: ;
    PUSH32(esp, 0x0017FDD6u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0017FDD6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017FDDEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FDDE: ;
    PUSH32(esp, 0x0017FDE3u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017FDE3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DE944);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0017FDEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FDEF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017FDA6; /* jl: less (signed <) */

loc_0017FDF5: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00162430(); return; /* tail jmp 0x00162430 */

}

/**
 * sub_0017FE00
 * Original: 0x0017FE00 - 0x0017FFC7 (455 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FE00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017FE00: ;
    esp = esp - 0x78;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x458028);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFEA8);
    MEM32(esp + 0x94) = eax;
    esi = ecx;
    PUSH32(esp, 0x0017FE2Cu); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017FE2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017FE32u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017FE32: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0x458028);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFEA0);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0017FE51u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017FE51: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017FE57u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017FE57: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ebp = eax;
    MEM32(esp + 0xC) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0017FFB4; /* je: equal / zero */

loc_0017FE68: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017FFB4; /* je: equal / zero */

loc_0017FE70: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0017FE78u); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_0017FE78: ;
    ecx = ebp;
    PUSH32(esp, 0x0017FE7Fu); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_0017FE7F: ;
    edi = 0; /* xor self */

loc_0017FE81: ;
    PUSH32(esp, 0x0017FE86u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0017FE86: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017FE8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FE8E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017FF62; /* je: equal / zero */

loc_0017FE96: ;
    MEM8(esp + 0x20) = 0;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x0017FEA5u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0017FEA5: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0017FEB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FEB2: ;
    PUSH32(esp, 0x0017FEB7u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017FEB7: ;
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, 0x26F);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017FEC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FEC8: ;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017FED5u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0017FED5: ;
    eax = esp + 0x30;
    esp = esp + 0x10;
    ecx = eax + 1;
    /* nop */

loc_0017FEE0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017FEE0; /* jne: not equal / not zero */

loc_0017FEE7: ;
    eax = eax - ecx;
    MEM8(esp + eax + 0x1F) = LO8(edx);
    esi = ebx;
    PUSH32(esp, 0x0017FEF4u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0017FEF4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017FEFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FEFC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017FF02; /* je: equal / zero */

loc_0017FF00: ;
    esi = ebp;

loc_0017FF02: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017FF62; /* je: equal / zero */

loc_0017FF06: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0017FF14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FF14: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0017FF5E; /* jle: less or equal (signed <=) */

loc_0017FF1B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0017FF24u); RECOMP_ABI_CALL(0x00177D50u, sub_00177D50); /* call 0x00177D50 */

loc_0017FF24: ;
    PUSH32(esp, 0x0017FF29u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0017FF29: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0017FF30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FF30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017FF54; /* jne: not equal / not zero */

loc_0017FF34: ;
    PUSH32(esp, 0x0017FF39u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0017FF39: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0017FF40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FF40: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017FF54; /* je: equal / zero */

loc_0017FF44: ;
    PUSH32(esp, 0x0017FF49u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0017FF49: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0017FF50u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FF50: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017FF5E; /* jne: not equal / not zero */

loc_0017FF54: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0017FF5Eu); RECOMP_ABI_CALL(0x001782F0u, sub_001782F0); /* call 0x001782F0 */

loc_0017FF5E: ;
    ebp = MEM32(esp + 0x10);

loc_0017FF62: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017FE81; /* jl: less (signed <) */

loc_0017FF6C: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0017FF73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FF73: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017FF7Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017FF7B: ;
    ecx = ebx;
    PUSH32(esp, 0x0017FF82u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017FF82: ;
    SET_LO8(ecx, MEM8(ebx + 0x39));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebx + 0x39) = LO8(ecx);
    ecx = ebp;
    PUSH32(esp, 0x0017FF9Du); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017FF9D: ;
    SET_LO8(ebx, MEM8(ebp + 0x39));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebp + 0x39) = LO8(ecx);
    POP32(esp, edi);

loc_0017FFB4: ;
    ecx = MEM32(esp + 0x80);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0017FFC3u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017FFC3: ;
    esp = esp + 0x78;
    esp += 4; return; /* ret */

}

/**
 * sub_0017FFD0
 * Original: 0x0017FFD0 - 0x00180179 (425 bytes, 147 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FFD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017FFD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0017FFDAu); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0017FFDA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x458028);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFEA8);
    ecx = esi;
    PUSH32(esp, 0x0017FFF4u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017FFF4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017FFFAu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017FFFA: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0x458028);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFEA0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00180019u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_00180019: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018001Fu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0018001F: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00180175; /* je: equal / zero */

loc_0018002C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00180175; /* je: equal / zero */

loc_00180034: ;
    ecx = esi;
    PUSH32(esp, 0x0018003Bu); RECOMP_ABI_CALL(0x0017FE00u, sub_0017FE00); /* call 0x0017FE00 */

loc_0018003B: ;
    PUSH32(esp, 0x00180040u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00180040: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0018004Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018004A: ;
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018013B; /* je: equal / zero */

loc_00180055: ;
    _fa = (uint32_t)(MEM32(esi + 0x290)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x290), edi (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_001800B1; /* jne: not equal / not zero */

loc_0018005E: ;
    ecx = edi;
    PUSH32(esp, 0x00180065u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00180065: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001800B1; /* jle: less or equal (signed <=) */

loc_00180069: ;
    PUSH32(esp, 0x0018006Eu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0018006E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00180075u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180075: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180125; /* jne: not equal / not zero */

loc_0018007D: ;
    ecx = edi;
    PUSH32(esp, 0x00180084u); RECOMP_ABI_CALL(0x001778F0u, sub_001778F0); /* call 0x001778F0 */

loc_00180084: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018008Cu); RECOMP_ABI_CALL(0x00177D90u, sub_00177D90); /* call 0x00177D90 */

loc_0018008C: ;
    ebp = eax;
    PUSH32(esp, 0x00180093u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00180093: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018009Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018009B: ;
    PUSH32(esp, 0x001800A0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001800A0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CF7D4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001800ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001800AC: ;
    goto loc_00180133;

loc_001800B1: ;
    _fa = (uint32_t)(MEM32(esi + 0x290)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x290), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00180133; /* jne: not equal / not zero */

loc_001800B9: ;
    ecx = ebx;
    PUSH32(esp, 0x001800C0u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_001800C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00180133; /* jle: less or equal (signed <=) */

loc_001800C4: ;
    ecx = ebx;
    PUSH32(esp, 0x001800CBu); RECOMP_ABI_CALL(0x001778F0u, sub_001778F0); /* call 0x001778F0 */

loc_001800CB: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001800D3u); RECOMP_ABI_CALL(0x00177D90u, sub_00177D90); /* call 0x00177D90 */

loc_001800D3: ;
    ebp = eax;
    PUSH32(esp, 0x001800DAu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_001800DA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001800E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001800E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180125; /* jne: not equal / not zero */

loc_001800E5: ;
    PUSH32(esp, 0x001800EAu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001800EA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001800F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001800F1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00180125; /* je: equal / zero */

loc_001800F5: ;
    PUSH32(esp, 0x001800FAu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001800FA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00180101u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180101: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00180125; /* je: equal / zero */

loc_00180105: ;
    PUSH32(esp, 0x0018010Au); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0018010A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00180112u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180112: ;
    PUSH32(esp, 0x00180117u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00180117: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DE944);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00180123u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180123: ;
    goto loc_00180133;

loc_00180125: ;
    PUSH32(esp, 0x0018012Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018012A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00180133u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180133: ;
    ecx = esi;
    PUSH32(esp, 0x0018013Au); RECOMP_ABI_CALL(0x0017FE00u, sub_0017FE00); /* call 0x0017FE00 */

loc_0018013A: ;
    POP32(esp, ebp);

loc_0018013B: ;
    _fa = (uint32_t)(MEM32(esi + 0x290)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x290), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018015A; /* jne: not equal / not zero */

loc_00180143: ;
    ecx = edi;
    PUSH32(esp, 0x0018014Au); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0018014A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018015A; /* jne: not equal / not zero */

loc_0018014E: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00180156u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180156: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0018015A: ;
    _fa = (uint32_t)(MEM32(esi + 0x290)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x290), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00180175; /* jne: not equal / not zero */

loc_00180162: ;
    ecx = ebx;
    PUSH32(esp, 0x00180169u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00180169: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180175; /* jne: not equal / not zero */

loc_0018016D: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00180175u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180175: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00180180
 * Original: 0x00180180 - 0x001801B5 (53 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180180: ;
    _fa = (uint32_t)(MEM32(ecx + 0xECC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xECC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001801B0; /* jne: not equal / not zero */

loc_00180189: ;
    SET_LO8(eax, MEM8(0x577200));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001801B0; /* je: equal / zero */

loc_00180192: ;
    PUSH32(esp, 0x00180197u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00180197: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DE958);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001801A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001801A3: ;
    MEM8(0x577200) = 0;
    eax = 2;
    esp += 4; return; /* ret */

loc_001801B0: ;
    g_seh_ebp = ebp; sub_00160C00(); return; /* tail jmp 0x00160C00 */

}

/**
 * sub_001801C0
 * Original: 0x001801C0 - 0x001801C5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001801C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001801C0: ;
    g_seh_ebp = ebp; sub_00161E60(); return; /* tail jmp 0x00161E60 */

}

/**
 * sub_001801D0
 * Original: 0x001801D0 - 0x00180278 (168 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001801D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001801D0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354978);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x001801FBu); RECOMP_ABI_CALL(0x00163520u, sub_00163520); /* call 0x00163520 */

loc_001801FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180212; /* jne: not equal / not zero */

loc_001801FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_00180212: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DFEC4);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00180222u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00180222: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x00180236u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00180236: ;
    ecx = esp + 8;
    esi = eax;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00180249u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00180249: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00180263; /* je: equal / zero */

loc_0018024D: ;
    ecx = esi;
    PUSH32(esp, 0x00180254u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00180254: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018025Au); RECOMP_ABI_CALL(0x000A44B0u, sub_000A44B0); /* call 0x000A44B0 */

loc_0018025A: ;
    esp = esp + 4;
    MEM32(edi + 0xECC) = eax;

loc_00180263: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00180280
 * Original: 0x00180280 - 0x001802EF (111 bytes, 27 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180280(void)
{

loc_00180280: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x100) = eax;
    eax = MEM32(esp + 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DFED0);
    ecx = esp + 8;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x001802B3u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_001802B3: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x001802BBu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001802BB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x001802CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001802CA: ;
    PUSH32(esp, 0x001802CFu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_001802CF: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001802DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001802DA: ;
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x001802E6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001802E6: ;
    esp = esp + 0x104;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001802F0
 * Original: 0x001802F0 - 0x001803BC (204 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001802F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001802F0: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x100) = eax;
    SET_LO8(eax, MEM8(0x577200));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018034F; /* jne: not equal / not zero */

loc_0018030B: ;
    PUSH32(esp, 0x00180310u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_00180310: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00180317u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180317: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00180346; /* je: equal / zero */

loc_0018031B: ;
    PUSH32(esp, 0x00180320u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00180320: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DE8BC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018032Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018032C: ;
    PUSH32(esp, 0x00180331u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_00180331: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0018033Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018033D: ;
    MEM8(0x577200) = 1;
    goto loc_00180360;

loc_00180346: ;
    SET_LO8(eax, MEM8(0x577200));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00180360; /* je: equal / zero */

loc_0018034F: ;
    PUSH32(esp, 0x00180354u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00180354: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00180360u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180360: ;
    eax = MEM32(esp + 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DFEF8);
    ecx = esp + 8;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00180381u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_00180381: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x00180389u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00180389: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00180394u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180394: ;
    PUSH32(esp, 0x00180399u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00180399: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001803A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001803A7: ;
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x001803B3u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001803B3: ;
    esp = esp + 0x104;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001803C0
 * Original: 0x001803C0 - 0x001806B6 (758 bytes, 263 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001803C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001803C0: ;
    esp = esp - 0xE0;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xEC) = eax;
    MEM8(esp + 0x88) = 0;
    MEM8(esp + 0x24) = 0;
    PUSH32(esp, 0x001803E8u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_001803E8: ;
    ebx = MEM32(esp + 0xF8);
    edi = MEM32(esp + 0xF4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00180409u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180409: ;
    SET_LO8(eax, MEM8(esp + 0x88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebp = MEM32(esp + 0x100);
    esi = MEM32(esp + 0xFC);
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001804B9; /* je: equal / zero */

loc_0018042E: ;
    PUSH32(esp, 0x00180433u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00180433: ;
    edx = MEM32(eax);
    ecx = esp + 0x88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00180442u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180442: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0018053C; /* je: equal / zero */

loc_0018044E: ;
    eax = esi;
    edx = eax + 1;

loc_00180453: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180453; /* jne: not equal / not zero */

loc_0018045A: ;
    eax = eax - edx;
    edx = ebp;
    edx = edx - eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DFF28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018046Cu); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_0018046C: ;
    eax = esi;
    esp = esp + 0xC;
    edx = eax + 1;

loc_00180474: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180474; /* jne: not equal / not zero */

loc_0018047B: ;
    eax = eax - edx;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM8(edx + 0x24C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x24C), 0 (8-bit) */
    ecx = edx + 0x24C;
    if (CMP_NE(_fa, _fb)) goto loc_00180496; /* jne: not equal / not zero */

loc_00180490: ;
    ecx = edx + 0x22C;

loc_00180496: ;
    edx = ebp;
    edx = edx - eax;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001804A2u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_001804A2: ;
    eax = esi;
    esp = esp + 0xC;
    edx = eax + 1;
    /* nop */

loc_001804B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001804B0; /* jne: not equal / not zero */

loc_001804B7: ;
    goto loc_00180527;

loc_001804B9: ;
    PUSH32(esp, 0x001804BEu); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_001804BE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001804CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001804CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018053C; /* je: equal / zero */

loc_001804D2: ;
    eax = esi;
    edx = eax + 1;

loc_001804D7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001804D7; /* jne: not equal / not zero */

loc_001804DE: ;
    eax = eax - edx;
    edx = ebp;
    edx = edx - eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DFF28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001804F0u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_001804F0: ;
    eax = esi;
    esp = esp + 0xC;
    edx = eax + 1;

loc_001804F8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001804F8; /* jne: not equal / not zero */

loc_001804FF: ;
    eax = eax - edx;
    ecx = ebp;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00180511u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_00180511: ;
    eax = esi;
    esp = esp + 0xC;
    edx = eax + 1;
    /* nop */

loc_00180520: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180520; /* jne: not equal / not zero */

loc_00180527: ;
    eax = eax - edx;
    ecx = ebp;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DFF20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00180539u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_00180539: ;
    esp = esp + 0xC;

loc_0018053C: ;
    MEM32(esp + 0x14) = 0x4B0;
    MEM32(esp + 0x18) = 0x4B2;
    MEM32(esp + 0x1C) = 0x4B4;
    MEM32(esp + 0x20) = 0x4B6;
    edi = 0; /* xor self */
    goto loc_00180567;

loc_00180560: ;
    ebx = MEM32(esp + 0xF8);

loc_00180567: ;
    PUSH32(esp, 0x0018056Cu); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_0018056C: ;
    ecx = MEM32(esp + 0xF4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0018057Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018057D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001805F7; /* je: equal / zero */

loc_00180583: ;
    PUSH32(esp, 0x00180588u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00180588: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esp + edi * 4 + 0x14));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00180597u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180597: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3DFF10);
    edx = esp + 0x30;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001805AAu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_001805AA: ;
    eax = esi;
    esp = esp + 0x14;
    edx = eax + 1;

loc_001805B2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001805B2; /* jne: not equal / not zero */

loc_001805B9: ;
    eax = eax - edx;
    ecx = ebp;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001805CBu); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_001805CB: ;
    ecx = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001805F7; /* je: equal / zero */

loc_001805D6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001805DCu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_001805DC: ;
    ecx = eax;
    PUSH32(esp, 0x001805E3u); RECOMP_ABI_CALL(0x00047360u, sub_00047360); /* call 0x00047360 */

loc_001805E3: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001805F0u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_001805F0: ;
    ecx = eax;
    PUSH32(esp, 0x001805F7u); RECOMP_ABI_CALL(0x000475B0u, sub_000475B0); /* call 0x000475B0 */

loc_001805F7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00180560; /* jl: less (signed <) */

loc_00180601: ;
    PUSH32(esp, 0x00180606u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_00180606: ;
    ecx = MEM32(esp + 0xF8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xF8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0018061Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018061D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018067E; /* je: equal / zero */

loc_00180623: ;
    PUSH32(esp, 0x00180628u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00180628: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x68);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00180631u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180631: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DFF10);
    eax = esp + 0x30;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00180644u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_00180644: ;
    eax = esi;
    esp = esp + 0x14;
    edx = eax + 1;
    /* nop */

loc_00180650: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180650; /* jne: not equal / not zero */

loc_00180657: ;
    eax = eax - edx;
    ecx = ebp;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00180669u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_00180669: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x00180671u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00180671: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0018067Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018067E: ;
    eax = esi;
    edx = eax + 1;

loc_00180683: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180683; /* jne: not equal / not zero */

loc_0018068A: ;
    eax = eax - edx;
    ebp = ebp - eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3C6F8C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018069Au); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_0018069A: ;
    ecx = MEM32(esp + 0xF8);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x001806ADu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001806AD: ;
    esp = esp + 0xE0;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001806C0
 * Original: 0x001806C0 - 0x00180A9D (989 bytes, 297 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001806C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001806C0: ;
    esp = esp - 0x4B0;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    MEM32(esp + 0x4BC) = eax;
    eax = esp + 0xBC;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001806EEu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001806EE: ;
    eax = MEM32(esi + 0xECC);
    edi = 0; /* xor self */
    ebp = ebp | 0xFFFFFFFFu;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM8(esp + 0x4B7) = 0;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0xC) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0018098C; /* jl: less (signed <) */

loc_00180714: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018098C; /* jge: greater or equal (signed >=) */

loc_0018071D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x457F84);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DE6D4);
    ecx = esi;
    PUSH32(esp, 0x00180736u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_00180736: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018073Cu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0018073C: ;
    ebx = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018098B; /* je: equal / zero */

loc_00180749: ;
    PUSH32(esp, 0x0018074Eu); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_0018074E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00180757u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180757: ;
    ecx = ebx;
    PUSH32(esp, 0x0018075Eu); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_0018075E: ;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x00180768u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_00180768: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xECC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0018077Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018077E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00180969; /* je: equal / zero */

loc_00180786: ;
    MEM8(esp + 0x58) = 0;
    PUSH32(esp, 0x00180790u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_00180790: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xECC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001807A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001807A6: ;
    _fa = (uint32_t)(MEM32(esi + 0xECC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xECC), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001807EB; /* jne: not equal / not zero */

loc_001807AF: ;
    edx = esp + 0x58;
    PUSH32(esp, 0x3DFF40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001807BEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001807BE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001807D0; /* jne: not equal / not zero */

loc_001807C5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001807EB; /* jne: not equal / not zero */

loc_001807CA: ;
    MEM32(esp + 0x10) = edi;
    goto loc_001807EB;

loc_001807D0: ;
    PUSH32(esp, 0x001807D5u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_001807D5: ;
    ecx = MEM32(esi + 0xECC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001807E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001807E4: ;
    edx = ZX8(LO8(eax));
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + edx;

loc_001807EB: ;
    ebp = MEM32(esi + 0xECC);
    PUSH32(esp, 0x001807F6u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_001807F6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001807FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001807FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180827; /* jne: not equal / not zero */

loc_00180801: ;
    PUSH32(esp, 0x00180806u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_00180806: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018080Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018080D: ;
    ecx = MEM32(eax + 0x30C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00180827; /* jg: greater (signed >) */

loc_00180817: ;
    PUSH32(esp, 0x0018081Cu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0018081C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00180825u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180825: ;
    goto loc_00180835;

loc_00180827: ;
    PUSH32(esp, 0x0018082Cu); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_0018082C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00180835u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180835: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00180941; /* je: equal / zero */

loc_0018083D: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0018084Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018084B: ;
    ebp = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00180856u); RECOMP_ABI_CALL(0x00177D50u, sub_00177D50); /* call 0x00177D50 */

loc_00180856: ;
    _fa = (uint32_t)(MEM32(esi + 0xECC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xECC), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018088F; /* jne: not equal / not zero */

loc_0018085F: ;
    edx = esp + 0x58;
    PUSH32(esp, 0x3DFF40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018086Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018086E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018088F; /* jne: not equal / not zero */

loc_00180875: ;
    PUSH32(esp, 0x0018087Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018087A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x00180886u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180886: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0018088Fu); RECOMP_ABI_CALL(0x001783A0u, sub_001783A0); /* call 0x001783A0 */

loc_0018088F: ;
    PUSH32(esp, 0x00180894u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_00180894: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0018089Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018089B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001808B9; /* jne: not equal / not zero */

loc_0018089F: ;
    PUSH32(esp, 0x001808A4u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_001808A4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001808ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001808AB: ;
    ecx = MEM32(eax + 0x30C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00180941; /* jle: less or equal (signed <=) */

loc_001808B9: ;
    PUSH32(esp, 0x001808BEu); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_001808BE: ;
    ecx = MEM32(esi + 0xECC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001808CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001808CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00180941; /* je: equal / zero */

loc_001808D1: ;
    _fa = (uint32_t)(MEM32(esi + 0xECC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xECC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00180941; /* jne: not equal / not zero */

loc_001808DA: ;
    SET_LO8(eax, MEM8(esp + 0xBC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180925; /* jne: not equal / not zero */

loc_001808E5: ;
    PUSH32(esp, 0x3DFF3C);
    ecx = esp + 0xC0;
    PUSH32(esp, 0x001808F6u); RECOMP_ABI_CALL(0x0017DF70u, sub_0017DF70); /* call 0x0017DF70 */

loc_001808F6: ;
    PUSH32(esp, 0x001808FBu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_001808FB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x413);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00180907u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180907: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC0;
    PUSH32(esp, 0x00180914u); RECOMP_ABI_CALL(0x0017F0D0u, sub_0017F0D0); /* call 0x0017F0D0 */

loc_00180914: ;
    PUSH32(esp, 0x3DFF34);
    ecx = esp + 0xC0;
    PUSH32(esp, 0x00180925u); RECOMP_ABI_CALL(0x0017F0D0u, sub_0017F0D0); /* call 0x0017F0D0 */

loc_00180925: ;
    ecx = MEM32(esi + 0xECC);
    PUSH32(esp, 0x400);
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00180941u); RECOMP_ABI_CALL(0x001803C0u, sub_001803C0); /* call 0x001803C0 */

loc_00180941: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00180947u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_00180947: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xECC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0018095Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018095D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebp = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_00180786; /* jne: not equal / not zero */

loc_00180969: ;
    edx = esp + 0xBC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, 0x3CC13C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00180981u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_00180981: ;
    eax = MEM32(ebx);
    esp = esp + 0x10;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0018098Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018098B: ;
    POP32(esp, ebx);

loc_0018098C: ;
    _fa = (uint32_t)(MEM32(esi + 0xECC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xECC), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00180A7B; /* jne: not equal / not zero */

loc_00180999: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00180A7B; /* jle: less or equal (signed <=) */

loc_001809A2: ;
    PUSH32(esp, 0x001809A7u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_001809A7: ;
    ecx = MEM32(esi + 0xECC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001809B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001809B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180A7B; /* jne: not equal / not zero */

loc_001809BE: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00180A7B; /* jne: not equal / not zero */

loc_001809C8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x40 (32-bit) */
    edi = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_001809EA; /* jge: greater or equal (signed >=) */

loc_001809CF: ;
    /* nop */

loc_001809D0: ;
    PUSH32(esp, 0x001809D5u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_001809D5: ;
    ecx = MEM32(esi + 0xECC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001809E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001809E4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001809D0; /* jl: less (signed <) */

loc_001809EA: ;
    PUSH32(esp, 0x400);
    edx = esp + 0xBC;
    PUSH32(esp, 0x3DFF3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00180A01u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00180A01: ;
    esp = esp + 0xC;
    MEM8(esp + 0x4B7) = 0;
    PUSH32(esp, 0x00180A11u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00180A11: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x415);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00180A1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180A1D: ;
    PUSH32(esp, eax);
    ecx = esp + 0xBC;
    PUSH32(esp, 0x00180A2Au); RECOMP_ABI_CALL(0x0017F0D0u, sub_0017F0D0); /* call 0x0017F0D0 */

loc_00180A2A: ;
    PUSH32(esp, 0x3DFF2C);
    ecx = esp + 0xBC;
    PUSH32(esp, 0x00180A3Bu); RECOMP_ABI_CALL(0x0017F0D0u, sub_0017F0D0); /* call 0x0017F0D0 */

loc_00180A3B: ;
    PUSH32(esp, 0x00180A40u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00180A40: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x416);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00180A4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180A4C: ;
    PUSH32(esp, eax);
    ecx = esp + 0xBC;
    PUSH32(esp, 0x00180A59u); RECOMP_ABI_CALL(0x0017F0D0u, sub_0017F0D0); /* call 0x0017F0D0 */

loc_00180A59: ;
    ecx = esi;
    PUSH32(esp, 0x00180A60u); RECOMP_ABI_CALL(0x001806C0u, sub_001806C0); /* call 0x001806C0 */

loc_00180A60: ;
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, 0x3CC13C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00180A78u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_00180A78: ;
    esp = esp + 0x10;

loc_00180A7B: ;
    PUSH32(esp, 0x00180A80u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_00180A80: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00180A87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180A87: ;
    ecx = MEM32(esp + 0x4B8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x00180A96u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00180A96: ;
    esp = esp + 0x4B0;
    esp += 4; return; /* ret */

}

/**
 * sub_00180AA0
 * Original: 0x00180AA0 - 0x00180C8A (490 bytes, 162 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180AA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180AA0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x8C));
    esp = esp - 0x8C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x457F84);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DE6D4);
    MEM32(esp + 0xAC) = eax;
    esi = ecx;
    PUSH32(esp, 0x00180AD0u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_00180AD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00180AD6u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_00180AD6: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    ebp = eax;
    PUSH32(esp, 0x00180AE0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00180AE0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00180AEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180AEA: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00180AF3u); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_00180AF3: ;
    PUSH32(esp, 0x00180AF8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00180AF8: ;
    edx = MEM32(eax);
    ecx = eax;
    edi = esi + 0x14;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x00180B05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180B05: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00180B29; /* jne: not equal / not zero */

loc_00180B0D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00180B25; /* je: equal / zero */

loc_00180B11: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00180B29; /* jne: not equal / not zero */

loc_00180B1B: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00180B05; /* jne: not equal / not zero */

loc_00180B25: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00180B2E;

loc_00180B29: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00180B2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00180C73; /* jne: not equal / not zero */

loc_00180B36: ;
    PUSH32(esp, 0x00180B3Bu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00180B3B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10C); PUSH32(esp, 0x00180B5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180B5A: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00180BA7; /* je: equal / zero */

loc_00180B62: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x457FC8);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CC13C);
    ecx = esi;
    PUSH32(esp, 0x00180B7Cu); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_00180B7C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00180B82u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_00180B82: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00180BA7; /* je: equal / zero */

loc_00180B89: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00180B95u); RECOMP_ABI_CALL(0x0017DDF0u, sub_0017DDF0); /* call 0x0017DDF0 */

loc_00180B95: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00180BA7; /* je: equal / zero */

loc_00180B99: ;
    PUSH32(esp, 0x00180B9Eu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00180B9E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00180BA7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180BA7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00180C73; /* je: equal / zero */

loc_00180BAF: ;
    ecx = ebp;
    PUSH32(esp, 0x00180BB6u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00180BB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00180C73; /* jle: less or equal (signed <=) */

loc_00180BBE: ;
    eax = ebx;
    if (4) _cf = (int)(((eax) >> ((4) - 1)) & 1);
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00180BD3; /* jne: not equal / not zero */

loc_00180BC7: ;
    if (0x14) _cf = (int)(((ebx) >> ((0x14) - 1)) & 1);
    ebx = ebx >> 0x14;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00180C73; /* je: equal / zero */

loc_00180BD3: ;
    PUSH32(esp, 0x00180BD8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00180BD8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00180BE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180BE1: ;
    PUSH32(esp, 0x00180BE6u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_00180BE6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00180BEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180BEF: ;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x00180BF9u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_00180BF9: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x7C);
    edi = eax;
    ebx = MEM32(edi);
    PUSH32(esp, 0x80);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00180C13u); RECOMP_ABI_CALL(0x00177D90u, sub_00177D90); /* call 0x00177D90 */

loc_00180C13: ;
    edx = MEM32(esi + 0xECC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x34); PUSH32(esp, 0x00180C20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180C20: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00180C27u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_00180C27: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00180C2Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180C2E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00180C73; /* je: equal / zero */

loc_00180C32: ;
    eax = MEM32(esi + 0xECC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00180C73; /* ja: above (unsigned >) */

loc_00180C3D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x180C8C); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00180C44u) goto loc_00180C44;
    if (_jt == 0x00180C67u) goto loc_00180C67;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00180C44: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00180C50u); RECOMP_ABI_CALL(0x00180280u, sub_00180280); /* call 0x00180280 */

loc_00180C50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x00180C60u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00180C60: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x8C)) >> 32) & 1);
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

loc_00180C67: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00180C73u); RECOMP_ABI_CALL(0x001802F0u, sub_001802F0); /* call 0x001802F0 */

loc_00180C73: ;
    ecx = MEM32(esp + 0x98);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00180C83u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00180C83: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x8C)) >> 32) & 1);
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_00180C8A
 * Original: 0x00180C8A - 0x00180CB0 (38 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180C8A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180C8A: ;
    edi = edi;
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x18);
    _cf = (int)((((uint64_t)(MEM8(edi + 0xC)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edi + 0xC) = MEM8(edi + 0xC) + HI8(eax);
    { uint64_t _t = (uint64_t)(MEM8(eax)) - (uint64_t)(LO8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax) = (uint32_t)_t; }  /* sbb */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x18);
    _cf = (int)((((uint64_t)(MEM8(esp + ecx + 0x18)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(esp + ecx + 0x18) = MEM8(esp + ecx + 0x18) + LO8(eax);
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00180CA8u); RECOMP_ABI_CALL(0x00163930u, sub_00163930); /* call 0x00163930 */

loc_00180CA8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001806C0(); return; /* tail jmp 0x001806C0 */

}

/**
 * sub_00180CA0
 * Original: 0x00180CA0 - 0x00180CB0 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180CA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180CA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00180CA8u); RECOMP_ABI_CALL(0x00163930u, sub_00163930); /* call 0x00163930 */

loc_00180CA8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001806C0(); return; /* tail jmp 0x001806C0 */

}

/**
 * sub_00180CB0
 * Original: 0x00180CB0 - 0x00180CE8 (56 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00180CB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00180CBE; /* je: equal / zero */

loc_00180CB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00180CE7; /* jne: not equal / not zero */

loc_00180CBE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00180CC6u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00180CC6: ;
    esi = eax;
    PUSH32(esp, 0x00180CCDu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00180CCD: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00180CD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180CD8: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x64); PUSH32(esp, 0x00180CE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180CE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00180CE7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00180CF0
 * Original: 0x00180CF0 - 0x00180D22 (50 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00180CF0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_00180CF3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00180CF9u); RECOMP_ABI_CALL(0x001658C0u, sub_001658C0); /* call 0x001658C0 */

loc_00180CF9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00180D14; /* je: equal / zero */

loc_00180D00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00180D06u); RECOMP_ABI_CALL(0x001658C0u, sub_001658C0); /* call 0x001658C0 */

loc_00180D06: ;
    esp = esp + 4;
    ecx = eax;
    PUSH32(esp, 0x00180D10u); RECOMP_ABI_CALL(0x000AFA40u, sub_000AFA40); /* call 0x000AFA40 */

loc_00180D10: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180D1E; /* jne: not equal / not zero */

loc_00180D14: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00180CF3; /* jl: less (signed <) */

loc_00180D1A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00180D1E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00180D30
 * Original: 0x00180D30 - 0x00180D85 (85 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00180D30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00180D30: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    _fa = (uint32_t)(MEM8(ebp + 0x948)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x948), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180D83; /* jne: not equal / not zero */

loc_00180D3C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x4593D0;
    edi = ebp + 0x13E28;
    /* nop */

loc_00180D50: ;
    PUSH32(esp, 0x00180D55u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00180D55: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00180D63u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180D63: ;
    MEM32(edi) = eax;
    esi = esi + 4;
    edi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4593E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x4593E8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00180D50; /* jl: less (signed <) */

loc_00180D73: ;
    SET_LO8(eax, MEM8(ebp + 0x948));
    SET_LO8(eax, LO8(eax) | 2);
    POP32(esp, edi);
    MEM8(ebp + 0x948) = LO8(eax);
    POP32(esp, esi);

loc_00180D83: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00180D90
 * Original: 0x00180D90 - 0x00180DF6 (102 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00180D90: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM8(ebx + 0x948)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x948), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00180DF4; /* je: equal / zero */

loc_00180D9C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x4593D0;
    edi = ebx + 0x13E28;
    /* nop */

loc_00180DB0: ;
    PUSH32(esp, 0x00180DB5u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00180DB5: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00180DBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180DBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00180DCB; /* je: equal / zero */

loc_00180DC3: ;
    edx = MEM32(0x3DD050);
    MEM32(edi) = edx;

loc_00180DCB: ;
    esi = esi + 4;
    edi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4593E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x4593E8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00180DB0; /* jl: less (signed <) */

loc_00180DD9: ;
    eax = MEM32(0x3DD054);
    MEM32(ebx + 0x13E40) = eax;
    SET_LO8(eax, MEM8(ebx + 0x948));
    SET_LO8(eax, LO8(eax) & 0xFD);
    POP32(esp, edi);
    MEM8(ebx + 0x948) = LO8(eax);
    POP32(esp, esi);

loc_00180DF4: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00180E00
 * Original: 0x00180E00 - 0x00180E11 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180E00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180E00: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00180E05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180E05: ;
    PUSH32(esp, 0x00180E0Au); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00180E0A: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x58)); return; /* indirect tail jmp */

}

/**
 * sub_00180E20
 * Original: 0x00180E20 - 0x00180E4B (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00180E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x948)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x948), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180E34; /* jne: not equal / not zero */

loc_00180E2C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00180E34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180E34: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + eax * 4 + 0x13E28);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00180E47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180E47: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00180E50
 * Original: 0x00180E50 - 0x00180E82 (50 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00180E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x13E40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00180E80; /* je: equal / zero */

loc_00180E61: ;
    PUSH32(esp, 0x00180E66u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00180E66: ;
    ecx = MEM32(esi + 0x13E40);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00180E74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180E74: ;
    edx = MEM32(0x3DD054);
    MEM32(esi + 0x13E40) = edx;

loc_00180E80: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00180E90
 * Original: 0x00180E90 - 0x00180EBA (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00180E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x13E40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00180EB6; /* je: equal / zero */

loc_00180EA1: ;
    PUSH32(esp, 0x00180EA6u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00180EA6: ;
    ecx = MEM32(esi + 0x13E40);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00180EB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180EB4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00180EB6: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00180EC0
 * Original: 0x00180EC0 - 0x00180EF1 (49 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00180EC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00180EC6u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00180EC6: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00180ED6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180ED6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00180EED; /* je: equal / zero */

loc_00180EE0: ;
    PUSH32(esp, 0x00180EE5u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00180EE5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00180EEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180EED: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00180F00
 * Original: 0x00180F00 - 0x00180F49 (73 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00180F00(void)
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

loc_00180F00: ;
    fp_push(MEMF(ecx + 0xBCC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180F30; /* jne: not equal / not zero */

loc_00180F13: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = fp_top() - MEMF(ecx + 0xBCC); /* fsub dword ptr [ecx + 0xbcc] */
    MEM32(ecx + 0xBCC) = eax;
    MEMF(ecx + 0xBD0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

loc_00180F30: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(ecx + 0xBD0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xBCC) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00180F50
 * Original: 0x00180F50 - 0x00180F55 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180F50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180F50: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x48)); return; /* indirect tail jmp */

}

/**
 * sub_00180F60
 * Original: 0x00180F60 - 0x0018102F (207 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180F60(void)
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

loc_00180F60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00180F71u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00180F71: ;
    esi = eax;
    PUSH32(esp, 0x00180F78u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00180F78: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00180F83u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180F83: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x10); PUSH32(esp, 0x00180F89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180F89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ebx, MEM8(esp + 0x18));
    if (TEST_Z(_fa, _fb)) goto loc_00180FC5; /* je: equal / zero */

loc_00180F91: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00180FC5; /* jne: not equal / not zero */

loc_00180F95: ;
    PUSH32(esp, 0x00180F9Au); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00180F9A: ;
    esi = eax;
    PUSH32(esp, 0x00180FA1u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00180FA1: ;
    edx = MEM32(esi);
    edi = eax;
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00180FACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180FAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00180FB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180FB2: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00180FBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180FBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00180FC5: ;
    PUSH32(esp, 0x00180FCAu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00180FCA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00180FD1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180FD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00180FDA; /* je: equal / zero */

loc_00180FD6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181024; /* je: equal / zero */

loc_00180FDA: ;
    edi = MEM32(esp + 0x14);
    esi = 0; /* xor self */

loc_00180FE0: ;
    PUSH32(esp, 0x00180FE5u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00180FE5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00180FECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180FEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00181001; /* je: equal / zero */

loc_00180FF0: ;
    PUSH32(esp, 0x00180FF5u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00180FF5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00180FFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00180FFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018101E; /* je: equal / zero */

loc_00181001: ;
    PUSH32(esp, 0x00181006u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00181006: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018100Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018100E: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00181016u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181016: ;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0018101E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00180FE0; /* jl: less (signed <) */

loc_00181024: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00181030
 * Original: 0x00181030 - 0x001810F6 (198 bytes, 86 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181030(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00181030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00181038u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00181038: ;
    esi = eax;
    PUSH32(esp, 0x0018103Fu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0018103F: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018104Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018104A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x10); PUSH32(esp, 0x00181050u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181050: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00181083; /* je: equal / zero */

loc_00181058: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018105Eu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018105E: ;
    esi = eax;
    PUSH32(esp, 0x00181065u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00181065: ;
    edx = MEM32(esi);
    edi = eax;
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00181070u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181070: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x00181076u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181076: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018107Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018107E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_001810EE; /* jne: not equal / not zero */

loc_00181083: ;
    PUSH32(esp, 0x00181088u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00181088: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018108Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018108F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001810E6; /* jne: not equal / not zero */

loc_00181094: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0x0018109Bu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018109B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001810A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001810A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001810E6; /* jle: less or equal (signed <=) */

loc_001810A6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001810D5; /* jl: less (signed <) */

loc_001810AB: ;
    PUSH32(esp, 0x001810B0u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_001810B0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001810B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001810B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001810D5; /* je: equal / zero */

loc_001810BC: ;
    PUSH32(esp, 0x001810C1u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001810C1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001810C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001810C9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001810D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001810D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001810EE; /* jne: not equal / not zero */

loc_001810D5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001810DBu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001810DB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001810E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001810E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001810A6; /* jl: less (signed <) */

loc_001810E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001810EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00181100
 * Original: 0x00181100 - 0x0018110F (15 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181100(void)
{

loc_00181100: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    edx = esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0018110Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018110D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00181110
 * Original: 0x00181110 - 0x00181125 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181110(void)
{

loc_00181110: ;
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x00181122u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181122: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00181130
 * Original: 0x00181130 - 0x00181193 (99 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00181130: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    PUSH32(esp, 0x0018113Bu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018113B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00181142u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181142: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018118E; /* jle: less or equal (signed <=) */

loc_00181146: ;
    PUSH32(esp, 0x0018114Bu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018114B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00181152u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181152: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00181167; /* je: equal / zero */

loc_00181156: ;
    PUSH32(esp, 0x0018115Bu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0018115B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00181163u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181163: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018117D; /* je: equal / zero */

loc_00181167: ;
    PUSH32(esp, 0x0018116Cu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018116C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00181174u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181174: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0018117Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018117B: ;
    edi = edi | eax;

loc_0018117D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00181183u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00181183: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0018118Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018118A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00181146; /* jl: less (signed <) */

loc_0018118E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001811A0
 * Original: 0x001811A0 - 0x001811B6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001811A0(void)
{

loc_001811A0: ;
    edx = MEM32(ecx);
    eax = ecx + 0x13EC8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(eax) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x001811B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001811B5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001811C0
 * Original: 0x001811C0 - 0x001811E6 (38 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001811C0(void)
{

loc_001811C0: ;
    eax = 0; /* xor self */
    MEM8(ecx + 0x18A8) = LO8(eax);
    MEM32(ecx + 0x17A0) = eax;
    MEM32(ecx + 0x17A4) = eax;
    MEM32(ecx + 0x1798) = eax;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001811E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001811E3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001811F0
 * Original: 0x001811F0 - 0x0018126D (125 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001811F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001811F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018125E; /* je: equal / zero */

loc_001811F8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE0); PUSH32(esp, 0x00181200u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181200: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018125E; /* jne: not equal / not zero */

loc_00181204: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x0018120Cu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018120C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00181213u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181213: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018124E; /* jle: less or equal (signed <=) */

loc_00181217: ;
    PUSH32(esp, 0x0018121Cu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018121C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0018122Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018122A: ;
    PUSH32(esp, 0x0018122Fu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018122F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0018123Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018123D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00181243u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00181243: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0018124Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018124A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00181217; /* jl: less (signed <) */

loc_0018124E: ;
    PUSH32(esp, 0x00181253u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00181253: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018125Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018125A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018125E: ;
    PUSH32(esp, 0x00181263u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00181263: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018126Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018126A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00181270
 * Original: 0x00181270 - 0x00181284 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00181270: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00181278u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181278: ;
    PUSH32(esp, 0x0018127Du); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_0018127D: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_00181290
 * Original: 0x00181290 - 0x0018129B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181290(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00181290: ;
    ecx = ecx + 0x18AC;
    g_seh_ebp = ebp; sub_001775C0(); return; /* tail jmp 0x001775C0 */

}

/**
 * sub_001812A0
 * Original: 0x001812A0 - 0x001812AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001812A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001812A0: ;
    ecx = ecx + 0x18AC;
    g_seh_ebp = ebp; sub_00177420(); return; /* tail jmp 0x00177420 */

}

/**
 * sub_001812B0
 * Original: 0x001812B0 - 0x001812CF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001812B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001812B0: ;
    eax = MEM32(0x577210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001812CE; /* je: equal / zero */

loc_001812B9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001812C1u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_001812C1: ;
    esp = esp + 8;
    MEM32(0x577210) = 0;

loc_001812CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001812D0
 * Original: 0x001812D0 - 0x0018132E (94 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001812D0(void)
{

loc_001812D0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    SET_LO8(ecx, MEM8(edx + 0x108));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x108));
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    PUSH32(esp, esi);
    SET_LO8(ecx, LO8(ecx) & 1);
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    MEM8(eax + 0x108) = LO8(ebx);
    esi = edx;
    ecx = 0x20;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = edx + 0x80;
    edi = eax + 0x80;
    ecx = 0x20;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(edx + 0x100);
    POP32(esp, edi);
    MEM32(eax + 0x100) = ecx;
    edx = MEM32(edx + 0x104);
    POP32(esp, esi);
    MEM32(eax + 0x104) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00181330
 * Original: 0x00181330 - 0x00181351 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181330(void)
{

loc_00181330: ;
    PUSH32(esp, 0x00181335u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00181335: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0018133Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018133C: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 4);
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00181360
 * Original: 0x00181360 - 0x001813C3 (99 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181360(void)
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

loc_00181360: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM8(esi + 0x110) = LO8(eax);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi) = eax;
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 5), 4 (8-bit) */
    edx = 2;
    if (TEST_Z(_fa, _fb)) goto loc_0018138B; /* je: equal / zero */

loc_00181382: ;
    MEM32(esi + 8) = edx;
    MEM32(esi) = 0x3DCCCCCD;

loc_0018138B: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001813BA; /* je: equal / zero */

loc_00181391: ;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x0018139Au); RECOMP_ABI_CALL(0x001611A0u, sub_001611A0); /* call 0x001611A0 */

loc_0018139A: ;
    fp_push(MEMF(esi)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001813AF; /* jne: not equal / not zero */

loc_001813A9: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */

loc_001813AF: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001813BA: ;
    ecx = MEM32(esi);
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001813D0
 * Original: 0x001813D0 - 0x00181447 (119 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001813D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001813D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001813D9u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_001813D9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001813E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001813E0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3C806C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x001813F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001813F1: ;
    PUSH32(esp, 0x001813F6u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_001813F6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00181401u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181401: ;
    PUSH32(esp, 0x00181406u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00181406: ;
    edx = eax;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00181417; /* jne: not equal / not zero */

loc_0018140F: ;
    MEM32(edx) = 0;
    goto loc_0018141A;

loc_00181417: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = eax;

loc_0018141A: ;
    esi = edx + 4;
    eax = 0; /* xor self */
    edi = esi;
    ecx = 0x400;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(esi) = 1;
    MEM8(edx + 0x1008) = LO8(eax);
    MEM8(edx + 0x1009) = LO8(eax);
    MEM32(edx + 0x1004) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00181450
 * Original: 0x00181450 - 0x00181552 (258 bytes, 109 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181450(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00181450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x0018145Bu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018145B: ;
    esi = eax;
    PUSH32(esp, 0x00181462u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00181462: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018146Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018146D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x00181473u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181473: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001814D0; /* je: equal / zero */

loc_00181477: ;
    PUSH32(esp, 0x0018147Cu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018147C: ;
    esi = eax;
    PUSH32(esp, 0x00181483u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00181483: ;
    edx = MEM32(esi);
    edi = eax;
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018148Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018148E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00181494u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181494: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018149Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018149B: ;
    edi = MEM32(esp + 0x14);
    esi = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xFFFFFFFFu (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001814C9; /* jne: not equal / not zero */

loc_001814A8: ;
    eax = eax >> 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001814B9; /* jne: not equal / not zero */

loc_001814AF: ;
    ecx = esi;
    ecx = ecx >> 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001814C7; /* je: equal / zero */

loc_001814B9: ;
    PUSH32(esp, 0x001814BEu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001814BE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001814C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001814C5: ;
    MEM32(edi) = eax;

loc_001814C7: ;
    eax = esi;

loc_001814C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001814D0: ;
    PUSH32(esp, 0x001814D5u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001814D5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001814DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001814DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00181549; /* jne: not equal / not zero */

loc_001814E1: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0x001814E8u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001814E8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001814EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001814EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00181549; /* jle: less or equal (signed <=) */

loc_001814F3: ;
    edi = MEM32(esp + 0x14);

loc_001814F7: ;
    PUSH32(esp, 0x001814FCu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001814FC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00181504u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181504: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181538; /* je: equal / zero */

loc_00181508: ;
    PUSH32(esp, 0x0018150Du); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018150D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00181515u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181515: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018151Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018151C: ;
    ecx = MEM32(edi);
    ebx = ebx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00181538; /* jne: not equal / not zero */

loc_00181525: ;
    ecx = eax;
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181536; /* jne: not equal / not zero */

loc_0018152F: ;
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181538; /* je: equal / zero */

loc_00181536: ;
    MEM32(edi) = esi;

loc_00181538: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0018153Eu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018153E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00181545u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181545: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001814F7; /* jl: less (signed <) */

loc_00181549: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00181560
 * Original: 0x00181560 - 0x001815E8 (136 bytes, 57 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00181560: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebx) = 0xFFFFFFFFu;
    esi = 0; /* xor self */
    PUSH32(esp, 0x00181574u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00181574: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0018157Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018157B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001815D6; /* jle: less or equal (signed <=) */

loc_0018157F: ;
    edi = MEM32(esp + 0x10);

loc_00181583: ;
    PUSH32(esp, 0x00181588u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00181588: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018158Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018158F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001815A4; /* je: equal / zero */

loc_00181593: ;
    PUSH32(esp, 0x00181598u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00181598: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001815A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001815A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001815C5; /* je: equal / zero */

loc_001815A4: ;
    PUSH32(esp, 0x001815A9u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001815A9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001815B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001815B1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001815B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001815B8: ;
    edx = 1;
    ecx = edi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001815DE; /* jne: not equal / not zero */

loc_001815C5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001815CBu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001815CB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001815D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001815D2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00181583; /* jl: less (signed <) */

loc_001815D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001815DE: ;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001815F0
 * Original: 0x001815F0 - 0x001816E1 (241 bytes, 103 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001815F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001815F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x001815FBu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001815FB: ;
    esi = eax;
    PUSH32(esp, 0x00181602u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00181602: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018160Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018160D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x00181613u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181613: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181670; /* je: equal / zero */

loc_00181617: ;
    PUSH32(esp, 0x0018161Cu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018161C: ;
    esi = eax;
    PUSH32(esp, 0x00181623u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00181623: ;
    edx = MEM32(esi);
    edi = eax;
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018162Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018162E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00181634u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181634: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0018163Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018163B: ;
    edi = MEM32(esp + 0x14);
    esi = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xFFFFFFFFu (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00181669; /* jne: not equal / not zero */

loc_00181648: ;
    eax = eax >> 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181659; /* jne: not equal / not zero */

loc_0018164F: ;
    ecx = esi;
    ecx = ecx >> 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181667; /* je: equal / zero */

loc_00181659: ;
    PUSH32(esp, 0x0018165Eu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018165E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00181665u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181665: ;
    MEM32(edi) = eax;

loc_00181667: ;
    eax = esi;

loc_00181669: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00181670: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0x00181677u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00181677: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0018167Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018167E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001816D8; /* jle: less or equal (signed <=) */

loc_00181682: ;
    edi = MEM32(esp + 0x14);

loc_00181686: ;
    PUSH32(esp, 0x0018168Bu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018168B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00181693u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181693: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001816C7; /* je: equal / zero */

loc_00181697: ;
    PUSH32(esp, 0x0018169Cu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018169C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001816A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001816A4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001816ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001816AB: ;
    ecx = MEM32(edi);
    ebx = ebx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001816C7; /* jne: not equal / not zero */

loc_001816B4: ;
    ecx = eax;
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001816C5; /* jne: not equal / not zero */

loc_001816BE: ;
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001816C7; /* je: equal / zero */

loc_001816C5: ;
    MEM32(edi) = esi;

loc_001816C7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001816CDu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001816CD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001816D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001816D4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00181686; /* jl: less (signed <) */

loc_001816D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001816F0
 * Original: 0x001816F0 - 0x00181737 (71 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001816F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001816F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x001816F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001816F8: ;
    ecx = eax;
    ecx = ecx >> 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181734; /* jne: not equal / not zero */

loc_00181702: ;
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181734; /* jne: not equal / not zero */

loc_0018170C: ;
    ecx = eax;
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181734; /* jne: not equal / not zero */

loc_00181716: ;
    edx = eax;
    edx = edx >> 0x15;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181734; /* jne: not equal / not zero */

loc_00181720: ;
    ecx = eax;
    ecx = ecx >> 0x16;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181734; /* jne: not equal / not zero */

loc_0018172A: ;
    eax = eax >> 0x17;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181734; /* jne: not equal / not zero */

loc_00181731: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00181734: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00181740
 * Original: 0x00181740 - 0x0018180D (205 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181740(void)
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

loc_00181740: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00181808; /* je: equal / zero */

loc_00181750: ;
    fp_push(MEMF(esi + 0x1798)); /* fld float */
    ecx = MEM32(esi + 0x17A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    fp_top() = fp_top() - MEMF(esi + 0xBD0); /* fsub dword ptr [esi + 0xbd0] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x1798) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001817B1; /* je: equal / zero */

loc_00181774: ;
    fp_push(MEMF(esi + 0xBFC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001817B1; /* jp: parity */

loc_00181787: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001817B1; /* jne: not equal / not zero */

loc_0018178C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3DFF64)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3dff64] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001817B1; /* jp: parity */

loc_0018179D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x001817B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001817B1: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001817BAu); RECOMP_ABI_CALL(0x001611A0u, sub_001611A0); /* call 0x001611A0 */

loc_001817BA: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x17A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181808; /* je: equal / zero */

loc_001817C8: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181808; /* jne: not equal / not zero */

loc_001817D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001817E6; /* jne: not equal / not zero */

loc_001817DE: ;
    fp_push(MEMF(esi + 0x1798)); /* fld float */
    goto loc_001817F2;

loc_001817E6: ;
    fp_push(MEMF(esi + 0x179C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x1798); /* fsub dword ptr [esi + 0x1798] */

loc_001817F2: ;
    fp_top() = fp_top() / MEMF(esp + 0xC); /* fdiv dword ptr [esp + 0xc] */
    PUSH32(esp, 0);
    ecx = edi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00181808u); RECOMP_ABI_CALL(0x001611D0u, sub_001611D0); /* call 0x001611D0 */

loc_00181808: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00181810
 * Original: 0x00181810 - 0x0018188E (126 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181810(void)
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

loc_00181810: ;
    eax = MEM32(ecx + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018188D; /* je: equal / zero */

loc_0018181A: ;
    fp_push(MEMF(ecx + 0x1798)); /* fld float */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181837; /* jne: not equal / not zero */

loc_0018182F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_00181837: ;
    fp_push(MEMF(ecx + 0x179C)); /* fld float */
    eax = MEM32(ecx + 0x17A0);
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    edx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEMF(ecx + 0x1798) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_NE(_fa, _fb)) goto loc_00181862; /* jne: not equal / not zero */

loc_00181856: ;
    MEM32(ecx + 0x17A0) = 2;
    goto loc_0018186D;

loc_00181862: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018186D; /* jne: not equal / not zero */

loc_00181867: ;
    MEM32(ecx + 0x17A0) = edx;

loc_0018186D: ;
    eax = MEM32(ecx + 0x17A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00181882; /* jne: not equal / not zero */

loc_00181877: ;
    MEM32(ecx + 0x17A4) = 2;
    esp += 4; return; /* ret */

loc_00181882: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018188D; /* jne: not equal / not zero */

loc_00181887: ;
    MEM32(ecx + 0x17A4) = edx;

loc_0018188D: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00181890
 * Original: 0x00181890 - 0x001818A7 (23 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181890(void)
{

loc_00181890: ;
    eax = MEM32(ecx + 0xC08);
    PUSH32(esp, eax);
    MEM32(ecx + 0x1798) = 0;
    PUSH32(esp, 0x001818A6u); RECOMP_ABI_CALL(0x00181740u, sub_00181740); /* call 0x00181740 */

loc_001818A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001818B0
 * Original: 0x001818B0 - 0x001818DC (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001818B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001818B0: ;
    eax = MEM32(ecx + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001818D9; /* je: equal / zero */

loc_001818BA: ;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001818D9; /* je: equal / zero */

loc_001818C0: ;
    PUSH32(esp, 0x001818C5u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_001818C5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001818CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001818CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001818D9; /* je: equal / zero */

loc_001818D3: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_001818D9: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001818E0
 * Original: 0x001818E0 - 0x00181932 (82 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001818E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001818E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001818E6u); RECOMP_ABI_CALL(0x0013C440u, sub_0013C440); /* call 0x0013C440 */

loc_001818E6: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001818F1u); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_001818F1: ;
    ecx = MEM32(esp + 8);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181928; /* je: equal / zero */

loc_001818FC: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00181917u); RECOMP_ABI_CALL(0x0018E680u, sub_0018E680); /* call 0x0018E680 */

loc_00181917: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    esp = esp + 0x14;
    MEM32(eax) = edx;
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_00181928: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00181940
 * Original: 0x00181940 - 0x00181983 (67 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00181940: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00181946u); RECOMP_ABI_CALL(0x0013C440u, sub_0013C440); /* call 0x0013C440 */

loc_00181946: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00181951u); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_00181951: ;
    ecx = MEM32(esp + 8);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181979; /* je: equal / zero */

loc_0018195C: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00181972u); RECOMP_ABI_CALL(0x0018E3E0u, sub_0018E3E0); /* call 0x0018E3E0 */

loc_00181972: ;
    ecx = MEM32(esp + 0x10);
    esp = esp + 0x10;

loc_00181979: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00181990
 * Original: 0x00181990 - 0x001819DF (79 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00181990: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00181996u); RECOMP_ABI_CALL(0x0013C160u, sub_0013C160); /* call 0x0013C160 */

loc_00181996: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001819A1u); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_001819A1: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001819B2; /* jne: not equal / not zero */

loc_001819AD: ;
    eax = 0xD;

loc_001819B2: ;
    ecx = MEM32(esp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001819D5; /* je: equal / zero */

loc_001819B9: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001819CEu); RECOMP_ABI_CALL(0x0018E3E0u, sub_0018E3E0); /* call 0x0018E3E0 */

loc_001819CE: ;
    ecx = MEM32(esp + 0x10);
    esp = esp + 0x10;

loc_001819D5: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001819E0
 * Original: 0x001819E0 - 0x00181B4F (367 bytes, 123 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001819E0(void)
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

loc_001819E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181B4B; /* je: equal / zero */

loc_001819ED: ;
    PUSH32(esp, edi);
    ecx = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0x001819F7u); RECOMP_ABI_CALL(0x00040B90u, sub_00040B90); /* call 0x00040B90 */

loc_001819F7: ;
    PUSH32(esp, 0x001819FCu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_001819FC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00181A06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181A06: ;
    fp_top() = fp_top() - MEMF(esi + 0x4F8); /* fsub dword ptr [esi + 0x4f8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8324)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8324] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00181A40; /* jp: parity */

loc_00181A19: ;
    _fa = (uint32_t)(MEM8(esi + 0x525)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x525), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181A40; /* je: equal / zero */

loc_00181A22: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00181A2Au); RECOMP_ABI_CALL(0x0002E220u, sub_0002E220); /* call 0x0002E220 */

loc_00181A2A: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00181A32u); RECOMP_ABI_CALL(0x0002E260u, sub_0002E260); /* call 0x0002E260 */

loc_00181A32: ;
    eax = MEM32(esi);
    ecx = esi + 0x4DC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00181A40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181A40: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    PUSH32(esp, ebx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181A8C; /* jne: not equal / not zero */

loc_00181A54: ;
    SET_LO8(eax, MEM8(esi + 0x334));
    SET_LO8(ebx, 8);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181A83; /* je: equal / zero */

loc_00181A60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4F32B0);
    ecx = esi;
    PUSH32(esp, 0x00181A6Eu); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_00181A6E: ;
    ecx = eax;
    PUSH32(esp, 0x00181A75u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_00181A75: ;
    edi = eax;
    _fa = (uint32_t)(MEM8(esi + 0x334)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x334), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181A83; /* je: equal / zero */

loc_00181A7F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181AAB; /* jne: not equal / not zero */

loc_00181A83: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4F32A8);
    goto loc_00181A93;

loc_00181A8C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4F32F0);

loc_00181A93: ;
    ecx = esi;
    PUSH32(esp, 0x00181A9Au); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_00181A9A: ;
    ecx = eax;
    PUSH32(esp, 0x00181AA1u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_00181AA1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181B49; /* je: equal / zero */

loc_00181AAB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00181AC4u); RECOMP_ABI_CALL(0x000403C0u, sub_000403C0); /* call 0x000403C0 */

loc_00181AC4: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181B49; /* je: equal / zero */

loc_00181AD7: ;
    edx = MEM32(esi);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x398);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00181AE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181AE8: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00181B49; /* je: equal / zero */

loc_00181AED: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x00181AF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181AF8: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00181AFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181AFF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00181B07u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181B07: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00181B10u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00181B10: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x00181B1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181B1C: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00181B23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181B23: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(edi);
    esi = eax;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00181B3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181B3C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp + 0x94); PUSH32(esp, 0x00181B48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181B48: ;
    POP32(esp, ebp);

loc_00181B49: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_00181B4B: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00181B50
 * Original: 0x00181B50 - 0x00181C43 (243 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181B50(void)
{

loc_00181B50: ;
    eax = ecx;
    SET_LO8(ecx, 0xFE);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 0x80) = LO8(ebx);
    SET_LO8(edx, MEM8(eax + 0x108));
    MEM8(eax + 0x10C) = LO8(ebx);
    SET_LO8(edx, LO8(edx) & LO8(ecx));
    MEM8(eax + 0x108) = LO8(edx);
    MEM8(eax + 0x18C) = LO8(ebx);
    MEM8(eax + 0x214) = MEM8(eax + 0x214) & LO8(ecx);
    edx = eax + 0x10C;
    MEM8(edx + 0x10C) = LO8(ebx);
    MEM8(edx + 0x18C) = LO8(ebx);
    MEM8(edx + 0x214) = MEM8(edx + 0x214) & LO8(ecx);
    edx = edx + 0x10C;
    MEM8(edx + 0x10C) = LO8(ebx);
    MEM8(edx + 0x18C) = LO8(ebx);
    MEM8(edx + 0x214) = MEM8(edx + 0x214) & LO8(ecx);
    edx = edx + 0x10C;
    MEM8(edx + 0x10C) = LO8(ebx);
    MEM8(edx + 0x18C) = LO8(ebx);
    MEM8(edx + 0x214) = MEM8(edx + 0x214) & LO8(ecx);
    edx = edx + 0x10C;
    MEM8(edx + 0x10C) = LO8(ebx);
    MEM8(edx + 0x18C) = LO8(ebx);
    MEM8(edx + 0x214) = MEM8(edx + 0x214) & LO8(ecx);
    edx = edx + 0x10C;
    MEM8(edx + 0x10C) = LO8(ebx);
    MEM8(edx + 0x18C) = LO8(ebx);
    MEM8(edx + 0x214) = MEM8(edx + 0x214) & LO8(ecx);
    edx = edx + 0x10C;
    MEM8(edx + 0x10C) = LO8(ebx);
    MEM8(edx + 0x18C) = LO8(ebx);
    MEM8(edx + 0x214) = MEM8(edx + 0x214) & LO8(ecx);
    edx = edx + 0x10C;
    MEM8(edx + 0x10C) = LO8(ebx);
    MEM8(edx + 0x18C) = LO8(ebx);
    MEM8(edx + 0x214) = MEM8(edx + 0x214) & LO8(ecx);
    edx = edx + 0x10C;
    edx = edx + 0x10C;
    MEM8(edx) = LO8(ebx);
    MEM8(edx + 0x80) = LO8(ebx);
    MEM8(edx + 0x108) = MEM8(edx + 0x108) & LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00181C50
 * Original: 0x00181C50 - 0x00181C9D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181C50(void)
{

loc_00181C50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x80);
    edi = esi + 0x10;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00181C68u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00181C68: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 0x80);
    MEM8(edi + 0x7F) = LO8(ebx);
    edi = esi + 0x90;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00181C83u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00181C83: ;
    MEM8(edi + 0x7F) = LO8(ebx);
    esp = esp + 0x18;
    POP32(esp, edi);
    MEM8(esi + 0x110) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00181CA0
 * Original: 0x00181CA0 - 0x00181D85 (229 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181CA0(void)
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

loc_00181CA0: ;
    SET_LO8(ecx, MEM8(0x57765C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181CDD; /* jne: not equal / not zero */

loc_00181CAF: ;
    MEM32(0x57765C) = MEM32(0x57765C) | eax;
    MEM32(0x57764C) = 0;
    MEM32(0x577650) = 0;
    MEM32(0x577654) = 0;
    MEM32(0x577658) = 0;

loc_00181CDD: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00181CEA; /* jl: less (signed <) */

loc_00181CE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00181CEC; /* jle: less or equal (signed <=) */

loc_00181CEA: ;
    eax = 0; /* xor self */

loc_00181CEC: ;
    eax = eax << 5;
    PUSH32(esp, esi);
    esi = eax;
    fp_push(MEMF(esi + 0x577238)); /* fld float */
    PUSH32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    edi = esi + 0x577238;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00181D4C; /* jne: not equal / not zero */

loc_00181D0C: ;
    PUSH32(esp, 0x00181D11u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00181D11: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00181D18u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181D18: ;
    fp_top() = fp_top() * MEMF(0x3DFBC4); /* fmul dword ptr [0x3dfbc4] */
    PUSH32(esp, edi);
    eax = esi + 0x577228;
    fp_top() = sin(fp_top()); /* fsin */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x57764C;
    fp_top() = fp_top() * MEMF(0x3C8828); /* fmul dword ptr [0x3c8828] */
    fp_top() = fp_top() + MEMF(0x3CA9D8); /* fadd dword ptr [0x3ca9d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00181D42u); RECOMP_ABI_CALL(0x002438E0u, sub_002438E0); /* call 0x002438E0 */

loc_00181D42: ;
    POP32(esp, edi);
    eax = 0x57764C;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00181D4C: ;
    ecx = MEM32(esi + 0x577228);
    eax = MEM32(esi + 0x577230);
    edx = MEM32(esi + 0x57722C);
    MEM32(0x57764C) = ecx;
    ecx = MEM32(esi + 0x577234);
    POP32(esp, edi);
    MEM32(0x577654) = eax;
    MEM32(0x577650) = edx;
    MEM32(0x577658) = ecx;
    eax = 0x57764C;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00181D90
 * Original: 0x00181D90 - 0x00181E54 (196 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181D90(void)
{

loc_00181D90: ;
    esp = esp - 0xCC;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xD4) = eax;
    eax = MEM32(esp + 0xDC);
    PUSH32(esp, 0x64);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00181DBBu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00181DBB: ;
    PUSH32(esp, 0x64);
    edx = esp + 0x1C;
    PUSH32(esp, 0x3C806C);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, edx);
    MEM8(esp + 0xEB) = LO8(ebx);
    PUSH32(esp, 0x00181DD5u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00181DD5: ;
    esp = esp + 0x18;
    MEM8(esp + 0x6F) = LO8(ebx);
    PUSH32(esp, 0x00181DE1u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00181DE1: ;
    ecx = MEM32(esp + 0xE0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00181DF0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181DF0: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00181DFDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00181DFD: ;
    PUSH32(esp, 0x80);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    edi = esi + 0x9CC;
    PUSH32(esp, edi);
    MEM8(esp + 0x87) = LO8(ebx);
    PUSH32(esp, 0x00181E1Du); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00181E1D: ;
    PUSH32(esp, 0x80);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    esi = esi + 0xA4C;
    PUSH32(esp, esi);
    MEM8(edi + 0x7F) = LO8(ebx);
    PUSH32(esp, 0x00181E36u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00181E36: ;
    ecx = MEM32(esp + 0xF8);
    esp = esp + 0x24;
    POP32(esp, edi);
    MEM8(esi + 0x7F) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x00181E4Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00181E4B: ;
    esp = esp + 0xCC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00181E60
 * Original: 0x00181E60 - 0x00181E98 (56 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00181E60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80);
    esi = ecx + 0x13D7C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00181E77u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00181E77: ;
    MEM8(esi + 0x7F) = 0;
    SET_LO8(eax, MEM8(esi));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00181E94; /* je: equal / zero */

loc_00181E84: ;
    PUSH32(esp, 0x00181E89u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00181E89: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00181E94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181E94: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00181EA0
 * Original: 0x00181EA0 - 0x001820BC (540 bytes, 141 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181EA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00181EA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3549BF);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x94;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xB0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DFFD4);
    MEM32(esp + 0xA8) = eax;
    eax = esp + 0x68;
    PUSH32(esp, 0x40);
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ebp = ecx;
    MEM8(esp + 0x70) = LO8(ebx);
    PUSH32(esp, 0x00181EECu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_00181EEC: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x00181EF4u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00181EF4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00181F02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00181F02: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00181F0Bu); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_00181F0B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x00181F1Bu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00181F1B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00181F25u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00181F25: ;
    MEM32(esp + 0x1C) = ebx;
    ecx = esp + 0x20;
    MEM32(esp + 0xAC) = ebx;
    PUSH32(esp, 0x00181F39u); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_00181F39: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x50;
    PUSH32(esp, 0x00181F49u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00181F49: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00181F53u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00181F53: ;
    MEM32(esp + 0x2C) = ebx;
    PUSH32(esp, 0x3DFFC8);
    ecx = esp + 0x24;
    MEM8(esp + 0xB0) = 1;
    PUSH32(esp, 0x00181F6Du); RECOMP_ABI_CALL(0x001258C0u, sub_001258C0); /* call 0x001258C0 */

loc_00181F6D: ;
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00181F77u); RECOMP_ABI_CALL(0x001259D0u, sub_001259D0); /* call 0x001259D0 */

loc_00181F77: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00181F85u); RECOMP_ABI_CALL(0x00125E50u, sub_00125E50); /* call 0x00125E50 */

loc_00181F85: ;
    PUSH32(esp, 0x3C8838);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00181F93u); RECOMP_ABI_CALL(0x001259D0u, sub_001259D0); /* call 0x001259D0 */

loc_00181F93: ;
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x00181F9Cu); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_00181F9C: ;
    esp = esp + 8;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0xAC) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00181FBE; /* je: equal / zero */

loc_00181FB3: ;
    ecx = eax;
    PUSH32(esp, 0x00181FBAu); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_00181FBA: ;
    edi = eax;
    goto loc_00181FC0;

loc_00181FBE: ;
    edi = 0; /* xor self */

loc_00181FC0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esp + 0xAC) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00182061; /* je: equal / zero */

loc_00181FD0: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00181FE0u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_00181FE0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018200F; /* jne: not equal / not zero */

loc_00181FE4: ;
    ecx = esp + 0x20;
    MEM8(esp + 0xAC) = LO8(ebx);
    PUSH32(esp, 0x00181FF4u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00181FF4: ;
    ecx = esp + 0x10;
    MEM32(esp + 0xAC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00182008u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00182008: ;
    eax = 0; /* xor self */
    goto loc_00182095;

loc_0018200F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DA480);
    ecx = esp + 0x40;
    PUSH32(esp, 0x0018201Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018201F: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM8(esp + 0xB0) = 3;
    PUSH32(esp, 0x00182033u); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_00182033: ;
    ecx = esp + 0x38;
    esi = eax;
    MEM8(esp + 0xAC) = 1;
    PUSH32(esp, 0x00182046u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00182046: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    ecx = MEM32(esp + 0xB8);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00182061; /* je: equal / zero */

loc_0018205F: ;
    MEM32(ecx) = eax;

loc_00182061: ;
    SET_LO8(eax, MEM8(ebp + 0x949));
    SET_LO8(eax, LO8(eax) & 0xFD);
    ecx = esp + 0x20;
    MEM8(ebp + 0x949) = LO8(eax);
    MEM8(esp + 0xAC) = LO8(ebx);
    PUSH32(esp, 0x0018207Fu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0018207F: ;
    ecx = esp + 0x10;
    MEM32(esp + 0xAC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00182093u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00182093: ;
    eax = edi;

loc_00182095: ;
    ecx = MEM32(esp + 0xA4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x94);
    POP32(esp, ebx);
    PUSH32(esp, 0x001820B3u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001820B3: ;
    esp = esp + 0xA0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001820C0
 * Original: 0x001820C0 - 0x001821AD (237 bytes, 82 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001820C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001820C0: ;
    esp = esp - 0x68;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x70);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x6C) = eax;
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0018219A; /* je: equal / zero */

loc_001820DC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018219A; /* je: equal / zero */

loc_001820E5: ;
    PUSH32(esp, 0x001820EAu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_001820EA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001820F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001820F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182122; /* je: equal / zero */

loc_001820F5: ;
    PUSH32(esp, 0x001820FAu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_001820FA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00182104u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182104: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182122; /* je: equal / zero */

loc_00182108: ;
    PUSH32(esp, 0x0018210Du); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0018210D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00182115u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182115: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018211Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018211B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018214D; /* je: equal / zero */

loc_00182122: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DFFF4);
    eax = esp + 0x10;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x00182139u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_00182139: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x00182141u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00182141: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018214Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018214D: ;
    esi = MEM32(esp + 0x78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182176; /* je: equal / zero */

loc_00182155: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00182176; /* je: equal / zero */

loc_0018215A: ;
    PUSH32(esp, 0x0018215Fu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0018215F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00182167u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182167: ;
    PUSH32(esp, 0x0018216Cu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0018216C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00182176u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182176: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3C806C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x00182187u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182187: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 0x00182194u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00182194: ;
    esp = esp + 0x68;
    esp += 12; return; /* ret 8 */

loc_0018219A: ;
    ecx = MEM32(esp + 0x6C);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x001821A7u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001821A7: ;
    esp = esp + 0x68;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001821B0
 * Original: 0x001821B0 - 0x00182292 (226 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001821B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001821B0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001821E4; /* je: equal / zero */

loc_001821C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001821E4; /* je: equal / zero */

loc_001821C6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x80);
    eax = eax + 0x14;
    PUSH32(esp, eax);
    edi = esi + 0x13C78;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001821DCu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001821DC: ;
    esp = esp + 0xC;
    MEM8(edi + 0x7F) = 0;
    POP32(esp, edi);

loc_001821E4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018220A; /* je: equal / zero */

loc_001821E8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4581B0);
    PUSH32(esp, 0x45819C);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001821FCu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_001821FC: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018220A; /* je: equal / zero */

loc_00182203: ;
    MEM8(esi + 0x949) = MEM8(esi + 0x949) & 0xFE;

loc_0018220A: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182228; /* je: equal / zero */

loc_00182214: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018222C; /* jne: not equal / not zero */

loc_00182218: ;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 6), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018223A; /* je: equal / zero */

loc_0018221E: ;
    SET_LO8(eax, MEM8(esi + 0x949));
    SET_LO8(eax, LO8(eax) | 4);
    goto loc_00182234;

loc_00182228: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018223A; /* je: equal / zero */

loc_0018222C: ;
    SET_LO8(eax, MEM8(esi + 0x949));
    SET_LO8(eax, LO8(eax) & 0xFB);

loc_00182234: ;
    MEM8(esi + 0x949) = LO8(eax);

loc_0018223A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esi + 0xC08) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00182267; /* je: equal / zero */

loc_00182244: ;
    _fa = (uint32_t)(MEM8(ebp + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 6), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182267; /* je: equal / zero */

loc_0018224A: ;
    PUSH32(esp, 0x0018224Fu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018224F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00182256u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182256: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00182267; /* je: equal / zero */

loc_0018225B: ;
    PUSH32(esp, 0x00182260u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00182260: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00182267u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182267: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018228D; /* je: equal / zero */

loc_00182271: ;
    PUSH32(esp, 0x80);
    eax = eax + 0x14;
    PUSH32(esp, eax);
    esi = esi + 0x94C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00182286u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00182286: ;
    esp = esp + 0xC;
    MEM8(esi + 0x7F) = 0;

loc_0018228D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001822A0
 * Original: 0x001822A0 - 0x001822CA (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001822A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001822A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x80);
    edi = esi + 0x17A8;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001822BAu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001822BA: ;
    esp = esp + 0xC;
    MEM8(edi + 0x7F) = 0;
    eax = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_001822D0
 * Original: 0x001822D0 - 0x0018235D (141 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001822D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001822D0: ;
    esp = esp - 0x1C;
    PUSH32(esp, 0x001822D8u); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_001822D8: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001822E3u); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_001822E3: ;
    ecx = MEM32(esp + 8);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182351; /* je: equal / zero */

loc_001822EE: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001822F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001822F4: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001822FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001822FD: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00182309u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182309: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    MEM32(esp + 0xC) = 0x3C23D70A;
    MEM32(esp + 0x10) = 0x3C23D70A;
    MEM32(esp + 0x14) = 0x3C23D70A;
    MEM32(esp + 0x18) = 0xBC23D70Au;
    MEM32(esp + 0x1C) = 0xBC23D70Au;
    MEM32(esp + 0x20) = 0xBC23D70Au;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018234Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018234C: ;
    ecx = MEM32(esp + 4);
    POP32(esp, esi);

loc_00182351: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00182360
 * Original: 0x00182360 - 0x001823E4 (132 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182360: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x104) = eax;
    MEM8(esp + 4) = 0;
    eax = 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_0018239D; /* je: equal / zero */

loc_00182388: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018239D; /* je: equal / zero */

loc_0018238D: ;
    PUSH32(esp, 0x00182392u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00182392: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0018239Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018239D: ;
    edx = MEM32(esp + 0x110);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001823B0u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_001823B0: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x001823B8u); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_001823B8: ;
    esi = MEM32(esp + 0x10C);
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001823CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001823CC: ;
    ecx = MEM32(esp + 0x104);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x001823DBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001823DB: ;
    esp = esp + 0x104;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001823F0
 * Original: 0x001823F0 - 0x00182614 (548 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001823F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001823F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354A00);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x6C;
    PUSH32(esp, ebx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00182412u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_00182412: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E001C);
    ecx = esp + 0x14;
    MEM32(esp + 0x80) = 0;
    PUSH32(esp, 0x0018242Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018242D: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM8(esp + 0x84) = 1;
    PUSH32(esp, 0x00182447u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_00182447: ;
    ecx = esp + 0xC;
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 0x78) = 0;
    PUSH32(esp, 0x00182457u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00182457: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001825F3; /* je: equal / zero */

loc_0018245F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E0014);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00182470u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00182470: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    MEM8(esp + 0x80) = 2;
    PUSH32(esp, 0x00182486u); RECOMP_ABI_CALL(0x00125FE0u, sub_00125FE0); /* call 0x00125FE0 */

loc_00182486: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM8(esp + 0x7C) = 0;
    PUSH32(esp, 0x00182496u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00182496: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001825F2; /* je: equal / zero */

loc_0018249E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E000C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001824AFu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_001824AF: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x84) = 3;
    PUSH32(esp, 0x001824C3u); RECOMP_ABI_CALL(0x00125FE0u, sub_00125FE0); /* call 0x00125FE0 */

loc_001824C3: ;
    edi = eax;
    ecx = esp + 0x14;
    MEM32(esp + 0xC) = edi;
    MEM8(esp + 0x80) = 0;
    PUSH32(esp, 0x001824DAu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_001824DA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001825F1; /* je: equal / zero */

loc_001824E2: ;
    PUSH32(esp, ebp);
    esi = 0x577240;
    goto loc_001824F0;

loc_001824EA: ;
    edi = MEM32(esp + 0x10);
    edi = edi;

loc_001824F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x577660) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x577660 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001825F0; /* jge: greater or equal (signed >=) */

loc_001824FC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2D78);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0018250Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018250C: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x88) = 4;
    PUSH32(esp, 0x00182520u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00182520: ;
    ecx = esp + 0x18;
    edi = eax;
    MEM8(esp + 0x84) = 0;
    PUSH32(esp, 0x00182533u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00182533: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018255C; /* je: equal / zero */

loc_00182537: ;
    ecx = esi + -12;
    PUSH32(esp, ecx);
    edx = esi + -16;
    PUSH32(esp, edx);
    eax = esi + -20;
    PUSH32(esp, eax);
    ecx = esi + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D62F4);
    ecx = edi;
    PUSH32(esp, 0x00182553u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00182553: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00182559u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00182559: ;
    esp = esp + 0x18;

loc_0018255C: ;
    PUSH32(esp, 2);
    edi = esi + -8;
    ebp = esi + -4;
    ebx = esi + 4;
    PUSH32(esp, 0x3E0004);
    ecx = esp + 0x30;
    MEM32(edi) = 0xBF800000u;
    MEM32(ebp) = 0xBF800000u;
    MEM32(esi) = 0xBF800000u;
    MEM32(ebx) = 0xBF800000u;
    PUSH32(esp, 0x0018258Eu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018258E: ;
    ecx = MEM32(esp + 0x10);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM8(esp + 0x88) = 5;
    PUSH32(esp, 0x001825A4u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_001825A4: ;
    ecx = esp + 0x28;
    MEM32(esp + 0x14) = eax;
    MEM8(esp + 0x84) = 0;
    PUSH32(esp, 0x001825B9u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_001825B9: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001825D8; /* je: equal / zero */

loc_001825C1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D62F4);
    PUSH32(esp, 0x001825CFu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001825CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001825D5u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001825D5: ;
    esp = esp + 0x18;

loc_001825D8: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + 0x20;
    PUSH32(esp, 0x001825E4u); RECOMP_ABI_CALL(0x00126040u, sub_00126040); /* call 0x00126040 */

loc_001825E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_001824EA; /* jne: not equal / not zero */

loc_001825F0: ;
    POP32(esp, ebp);

loc_001825F1: ;
    POP32(esp, edi);

loc_001825F2: ;
    POP32(esp, esi);

loc_001825F3: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0x78) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00182604u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_00182604: ;
    ecx = MEM32(esp + 0x70);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x78;
    esp += 4; return; /* ret */

}

/**
 * sub_00182620
 * Original: 0x00182620 - 0x00182670 (80 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182620: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00182628u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_00182628: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0018262Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018262F: ;
    eax = MEM32(esi + 0xBE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00182656; /* jle: less or equal (signed <=) */

loc_00182639: ;
    ecx = esi + 0xBE4;
    PUSH32(esp, 0x00182644u); RECOMP_ABI_CALL(0x0018B4B0u, sub_0018B4B0); /* call 0x0018B4B0 */

loc_00182644: ;
    eax = esi + 0xBD4;
    PUSH32(esp, eax);
    ecx = esi + 0xE0;
    PUSH32(esp, 0x00182656u); RECOMP_ABI_CALL(0x0018C180u, sub_0018C180); /* call 0x0018C180 */

loc_00182656: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018265Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018265D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3C806C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x0018266Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018266E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00182670
 * Original: 0x00182670 - 0x001826A9 (57 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182670: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xBE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001826A7; /* jle: less or equal (signed <=) */

loc_0018267D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC47A0000u);
    edi = esi + 0xBD4;
    PUSH32(esp, edi);
    ecx = esi + 0xBE4;
    PUSH32(esp, 0x00182695u); RECOMP_ABI_CALL(0x0018B6F0u, sub_0018B6F0); /* call 0x0018B6F0 */

loc_00182695: ;
    PUSH32(esp, 0xC3400000u);
    PUSH32(esp, edi);
    ecx = esi + 0xE0;
    PUSH32(esp, 0x001826A6u); RECOMP_ABI_CALL(0x0018C3B0u, sub_0018C3B0); /* call 0x0018C3B0 */

loc_001826A6: ;
    POP32(esp, edi);

loc_001826A7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001826B0
 * Original: 0x001826B0 - 0x0018273F (143 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001826B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001826B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(edx, MEM8(esi + 0x948));
    eax = MEM32(esi);
    SET_LO8(edx, LO8(edx) & 0xFE);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(esi + 0x948) = LO8(edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001826C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001826C9: ;
    ecx = esi + 0xBE4;
    PUSH32(esp, 0x001826D4u); RECOMP_ABI_CALL(0x0018B4B0u, sub_0018B4B0); /* call 0x0018B4B0 */

loc_001826D4: ;
    edi = esi + 0xBD4;
    PUSH32(esp, edi);
    ecx = esi + 0xE0;
    PUSH32(esp, 0x001826E6u); RECOMP_ABI_CALL(0x0018C180u, sub_0018C180); /* call 0x0018C180 */

loc_001826E6: ;
    ecx = esi + 0x12AE0;
    PUSH32(esp, 0x001826F1u); RECOMP_ABI_CALL(0x00171E50u, sub_00171E50); /* call 0x00171E50 */

loc_001826F1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001826FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001826FB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00182702u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182702: ;
    eax = MEM32(esi + 0xBE0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00182731; /* jle: less or equal (signed <=) */

loc_0018270E: ;
    edi = edi;

loc_00182710: ;
    PUSH32(esp, 0x00182715u); RECOMP_ABI_CALL(0x001463F0u, sub_001463F0); /* call 0x001463F0 */

loc_00182715: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018271Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018271D: ;
    MEM32(edi) = 0;
    eax = MEM32(esi + 0xBE0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00182710; /* jl: less (signed <) */

loc_00182731: ;
    POP32(esp, edi);
    MEM32(esi + 0xBE0) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00182740
 * Original: 0x00182740 - 0x0018279C (92 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00182740(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182740: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0xBE0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00182797; /* jle: less or equal (signed <=) */

loc_00182750: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    PUSH32(esp, esi);
    esi = ebp + 0xBD4;
    /* nop */

loc_00182760: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182787; /* je: equal / zero */

loc_00182766: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0018276Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018276B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018277C; /* je: equal / zero */

loc_0018276F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00182787; /* jne: not equal / not zero */

loc_00182773: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0018277Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018277A: ;
    goto loc_00182787;

loc_0018277C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182787; /* je: equal / zero */

loc_00182780: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00182787u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182787: ;
    eax = MEM32(ebp + 0xBE0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00182760; /* jl: less (signed <) */

loc_00182795: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00182797: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001827A0
 * Original: 0x001827A0 - 0x00182AC5 (805 bytes, 225 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001827A0(void)
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

loc_001827A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354A31);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xFC;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x108) = eax;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x001827D6u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_001827D6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001827DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001827DD: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001827E6u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_001827E6: ;
    edx = MEM32(eax);
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x001827F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001827F3: ;
    PUSH32(esp, 0x001827F8u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001827F8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001827FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001827FF: ;
    esi = edi + 0x12AE0;
    ecx = esi;
    PUSH32(esp, 0x0018280Cu); RECOMP_ABI_CALL(0x00171DF0u, sub_00171DF0); /* call 0x00171DF0 */

loc_0018280C: ;
    ecx = esi;
    PUSH32(esp, 0x00182813u); RECOMP_ABI_CALL(0x001E8DA0u, sub_001E8DA0); /* call 0x001E8DA0 */

loc_00182813: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018281E; /* jne: not equal / not zero */

loc_00182817: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0018281Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018281E: ;
    edx = MEM32(esp + 0x11C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    MEM8(esp + 0x1B) = 0;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0018283Bu); RECOMP_ABI_CALL(0x00181EA0u, sub_00181EA0); /* call 0x00181EA0 */

loc_0018283B: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00182988; /* je: equal / zero */

loc_00182845: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182A86; /* je: equal / zero */

loc_00182851: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E0038);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00182861u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00182861: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x118) = 0;
    PUSH32(esp, 0x00182878u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00182878: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM32(esp + 0x114) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0018288Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0018288E: ;
    PUSH32(esp, 0x64);
    ecx = esp + 0x44;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018289Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018289F: ;
    PUSH32(esp, 0x64);
    edx = esp + 0xB4;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edx);
    MEM8(esp + 0xBB) = 0;
    PUSH32(esp, 0x001828BBu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001828BB: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x107) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00182950; /* je: equal / zero */

loc_001828CE: ;
    ecx = edi;
    PUSH32(esp, 0x001828D5u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001828D5: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001828E2u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001828E2: ;
    esp = esp + 0xC;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E002C);
    ecx = esp + 0x28;
    MEM8(esp + 0xAB) = 0;
    PUSH32(esp, 0x001828FDu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_001828FD: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x118) = 1;
    PUSH32(esp, 0x00182914u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00182914: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM32(esp + 0x114) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0018292Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0018292A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182950; /* je: equal / zero */

loc_0018292E: ;
    ecx = edi;
    PUSH32(esp, 0x00182935u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00182935: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    edx = esp + 0xAC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00182945u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00182945: ;
    esp = esp + 0xC;
    MEM8(esp + 0x107) = 0;

loc_00182950: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001829A4; /* je: equal / zero */

loc_00182958: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00182961u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182961: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00182967u); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_00182967: ;
    esp = esp + 4;
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00182980u); RECOMP_ABI_CALL(0x001820C0u, sub_001820C0); /* call 0x001820C0 */

loc_00182980: ;
    edi = MEM32(esp + 0x18);
    MEM8(esp + 0x13) = LO8(eax);

loc_00182988: ;
    ecx = MEM32(esp + 0x11C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0018299Cu); RECOMP_ABI_CALL(0x00181EA0u, sub_00181EA0); /* call 0x00181EA0 */

loc_0018299C: ;
    esi = MEM32(esp + 0x14);
    ebp = eax;
    goto loc_001829A8;

loc_001829A4: ;
    edi = MEM32(esp + 0x18);

loc_001829A8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182A86; /* je: equal / zero */

loc_001829B0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CC9F4);
    ecx = esp + 0x38;
    PUSH32(esp, 0x001829C0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_001829C0: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x118) = 2;
    PUSH32(esp, 0x001829D7u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_001829D7: ;
    ecx = esp + 0x30;
    ebx = eax;
    MEM32(esp + 0x114) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001829EDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_001829ED: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001829FA; /* je: equal / zero */

loc_001829F1: ;
    ecx = ebx;
    PUSH32(esp, 0x001829F8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001829F8: ;
    goto loc_001829FC;

loc_001829FA: ;
    eax = 0; /* xor self */

loc_001829FC: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    ecx = edi + 0x12AE0;
    PUSH32(esp, 0x00182A10u); RECOMP_ABI_CALL(0x00172240u, sub_00172240); /* call 0x00172240 */

loc_00182A10: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182A32; /* je: equal / zero */

loc_00182A16: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00182A1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182A1F: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    SET_LO8(ecx, MEM8(ebx + 5));
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebx + 5) = LO8(ecx);

loc_00182A32: ;
    PUSH32(esp, 0x00182A37u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00182A37: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00182A3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182A3E: ;
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    fp_push(MEMF(edi + 0xBCC)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182A5F; /* je: equal / zero */

loc_00182A57: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_00182A5F: ;
    MEMF(edi + 0xBCC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = MEMF(edi + 0xBD0) - fp_top(); /* fsubr dword ptr [edi + 0xbd0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182A80; /* je: equal / zero */

loc_00182A78: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_00182A80: ;
    MEMF(edi + 0xBD0) = (float)fp_top(); fp_pop(); /* fstp */

loc_00182A86: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182A9C; /* je: equal / zero */

loc_00182A8A: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00182A93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182A93: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00182A99u); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_00182A99: ;
    esp = esp + 4;

loc_00182A9C: ;
    ecx = MEM32(esp + 0x10C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0xFC);
    eax = ebx;
    POP32(esp, ebx);
    PUSH32(esp, 0x00182ABCu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00182ABC: ;
    esp = esp + 0x108;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00182AD0
 * Original: 0x00182AD0 - 0x00182AFC (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182AD0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00182AF9; /* jl: less (signed <) */

loc_00182AD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xBE0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xBE0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00182AF9; /* jge: greater or equal (signed >=) */

loc_00182AE0: ;
    ecx = MEM32(ecx + eax * 4 + 0xBD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182AF9; /* je: equal / zero */

loc_00182AEB: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182AF9; /* je: equal / zero */

loc_00182AF3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00182AF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182AF9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00182B00
 * Original: 0x00182B00 - 0x00182B2C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182B00: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00182B29; /* jl: less (signed <) */

loc_00182B08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xBE0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xBE0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00182B29; /* jge: greater or equal (signed >=) */

loc_00182B10: ;
    ecx = MEM32(ecx + eax * 4 + 0xBD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182B29; /* je: equal / zero */

loc_00182B1B: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182B29; /* je: equal / zero */

loc_00182B23: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00182B29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182B29: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00182B30
 * Original: 0x00182B30 - 0x00182B58 (40 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182B30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00182B55; /* jl: less (signed <) */

loc_00182B38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xBE0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xBE0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00182B55; /* jge: greater or equal (signed >=) */

loc_00182B40: ;
    ecx = MEM32(ecx + eax * 4 + 0xBD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182B55; /* je: equal / zero */

loc_00182B4B: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00182B55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182B55: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00182B60
 * Original: 0x00182B60 - 0x00182B8F (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182B60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00182B8A; /* jl: less (signed <) */

loc_00182B68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xBE0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xBE0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00182B8A; /* jge: greater or equal (signed >=) */

loc_00182B70: ;
    ecx = MEM32(ecx + eax * 4 + 0xBD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182B8A; /* je: equal / zero */

loc_00182B7B: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00182B85u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182B85: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00182B8A: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00182B90
 * Original: 0x00182B90 - 0x00182BBF (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182B90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00182BBA; /* jl: less (signed <) */

loc_00182B98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xBE0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xBE0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00182BBA; /* jge: greater or equal (signed >=) */

loc_00182BA0: ;
    ecx = MEM32(ecx + eax * 4 + 0xBD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182BBA; /* je: equal / zero */

loc_00182BAB: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00182BB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182BB5: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00182BBA: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00182BC0
 * Original: 0x00182BC0 - 0x00182BF7 (55 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182BC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00182BF4; /* jl: less (signed <) */

loc_00182BC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xBE0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xBE0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00182BF4; /* jge: greater or equal (signed >=) */

loc_00182BD0: ;
    ecx = MEM32(ecx + eax * 4 + 0xBD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182BF4; /* je: equal / zero */

loc_00182BDB: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182BED; /* je: equal / zero */

loc_00182BE3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00182BEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182BEA: ;
    esp += 12; return; /* ret 8 */

loc_00182BED: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00182BF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182BF4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00182C00
 * Original: 0x00182C00 - 0x00182D32 (306 bytes, 78 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00182C00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x11C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(ecx, MEM8(esp + 0x110));
    MEM32(esp + 0x11C) = eax;
    eax = MEM32(ebx + 0x1688);
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0;
    MEM8(esp + 0x90) = 0;
    MEM8(esp + 0x118) = LO8(ecx);
    MEM8(esp + 0xF) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00182D02; /* je: equal / zero */

loc_00182C4E: ;
    edi = edi;

loc_00182C50: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00182D02; /* jne: not equal / not zero */

loc_00182C5C: ;
    eax = MEM32(ebx + 0x1688);
    SET_LO8(ecx, MEM8(esp + 0x118));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    SET_LO8(edx, MEM8(eax + ebx + 0xC08));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    eax = eax + ebx + 0xB00;
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esp + 0x118) = LO8(ecx);
    esi = eax;
    ecx = 0x20;
    edi = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = eax + 0x80;
    ecx = 0x20;
    edi = esp + 0x90;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x100);
    MEM32(esp + 0x110) = ecx;
    edx = MEM32(eax + 0x104);
    eax = MEM32(ebp + 0xC);
    MEM32(esp + 0x114) = edx;
    edx = MEM32(ebx + 0x1688);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebx + 0x1688) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00182CEF; /* je: equal / zero */

loc_00182CDA: ;
    eax = eax + 0x14;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00182CE8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00182CE8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182CF4; /* je: equal / zero */

loc_00182CEF: ;
    MEM8(esp + 0xF) = 1;

loc_00182CF4: ;
    eax = MEM32(ebx + 0x1688);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00182C50; /* jne: not equal / not zero */

loc_00182D02: ;
    esi = MEM32(ebp + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM8(esi) = 0;
    ecx = esi;
    MEM8(esi + 0x80) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00182D1Bu); RECOMP_ABI_CALL(0x001812D0u, sub_001812D0); /* call 0x001812D0 */

loc_00182D1B: ;
    ecx = MEM32(esp + 0x124);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00182D29u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00182D29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00182D40
 * Original: 0x00182D40 - 0x00182D78 (56 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182D40: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1C) = esi;
    MEM32(ecx + 0x20) = esi;
    MEM32(ecx + 0x24) = esi;
    eax = 0; /* xor self */
    /* nop */

loc_00182D50: ;
    edx = MEM32(ecx + 0x1C);
    edi = MEM32(ecx + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x24) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00182D6A; /* jl: less (signed <) */

loc_00182D63: ;
    MEM32(ecx + 0x1C) = esi;
    edx = 0; /* xor self */
    goto loc_00182D6B;

loc_00182D6A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00182D6B: ;
    MEM32(ecx + edx * 4 + 0x14) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00182D50; /* jl: less (signed <) */

loc_00182D75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00182D80
 * Original: 0x00182D80 - 0x00182DDD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182D80: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xA8) = esi;
    MEM32(ecx + 0xAC) = esi;
    MEM32(ecx + 0xB0) = esi;
    edx = 0; /* xor self */
    goto loc_00182DA0;

    /* nop */

loc_00182DA0: ;
    eax = MEM32(ecx + 0xA8);
    edi = MEM32(ecx + 0xB0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ecx + 0xA8) = eax;
    MEM32(ecx + 0xB0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00182DCC; /* jl: less (signed <) */

loc_00182DBF: ;
    MEM32(ecx + 0xA8) = esi;
    eax = 1;
    goto loc_00182DCD;

loc_00182DCC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00182DCD: ;
    MEM32(ecx + eax * 4 + 0x9C) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00182DA0; /* jl: less (signed <) */

loc_00182DDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00182DE0
 * Original: 0x00182DE0 - 0x00182E3F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182DE0: ;
    edx = ecx;
    eax = MEM32(edx + 0xAC);
    eax = MEM32(edx + eax * 4 + 0x9C);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xB4;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0xAC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM32(edx + 0xAC) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00182E29; /* jl: less (signed <) */

loc_00182E1F: ;
    MEM32(edx + 0xAC) = 0;

loc_00182E29: ;
    MEM32(edx + 0xB0) = MEM32(edx + 0xB0) - 1;
    _fa = (uint32_t)(MEM32(edx + 0xB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xB8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xB8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00182E40
 * Original: 0x00182E40 - 0x00182EDD (157 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182E40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00182E40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xBE0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00182E7C; /* jle: less or equal (signed <=) */

loc_00182E50: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = esi + 0xBD4;
    /* nop */

loc_00182E60: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182E6C; /* je: equal / zero */

loc_00182E66: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00182E6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182E6C: ;
    eax = MEM32(esi + 0xBE0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00182E60; /* jl: less (signed <) */

loc_00182E7A: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00182E7C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x00182E86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182E86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182EB5; /* je: equal / zero */

loc_00182E8A: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182E9B; /* je: equal / zero */

loc_00182E94: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00182E9Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182E9B: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00182EA4u); RECOMP_ABI_CALL(0x00182740u, sub_00182740); /* call 0x00182740 */

loc_00182EA4: ;
    PUSH32(esp, 0x00182EA9u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00182EA9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00182EB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182EB0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00182EB5: ;
    PUSH32(esp, 0x00182EBAu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00182EBA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00182EC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182EC1: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00182EC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182EC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182EA4; /* je: equal / zero */

loc_00182ECC: ;
    PUSH32(esp, 0x00182ED1u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00182ED1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00182ED8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182ED8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00182EE0
 * Original: 0x00182EE0 - 0x00182FA1 (193 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182EE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00182EE0: ;
    esp = esp - 0x10C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x114);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00182F96; /* je: equal / zero */

loc_00182EF9: ;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00182F96; /* jne: not equal / not zero */

loc_00182F03: ;
    eax = MEM32(esi + 0x1688);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00182F96; /* jge: greater or equal (signed >=) */

loc_00182F12: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00182F42; /* jle: less or equal (signed <=) */

loc_00182F1A: ;
    edi = esi + 0xC0C;

loc_00182F20: ;
    eax = ebx + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00182F2Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00182F2A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00182F94; /* je: equal / zero */

loc_00182F31: ;
    eax = MEM32(esi + 0x1688);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x10C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00182F20; /* jl: less (signed <) */

loc_00182F42: ;
    eax = MEM32(ebx);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x94) = 0;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00182F5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00182F5B: ;
    SET_LO8(ecx, MEM8(esp + 0x118));
    edi = MEM32(esi + 0x1688);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x10C);
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    eax = esi + 0xC0C;
    MEM8(esp + 0x118) = LO8(ecx);
    edi = edi + eax;
    ecx = 0x43;
    esi = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(eax + 0xA7C) = MEM32(eax + 0xA7C) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xA7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00182F94: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00182F96: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00182FB0
 * Original: 0x00182FB0 - 0x00183012 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00182FB0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x11214) = esi;
    MEM32(ecx + 0x11218) = esi;
    MEM32(ecx + 0x1121C) = esi;
    edx = 0; /* xor self */
    goto loc_00182FD0;

    /* nop */

loc_00182FD0: ;
    eax = MEM32(ecx + 0x11214);
    edi = MEM32(ecx + 0x1121C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(ecx + 0x11214) = eax;
    MEM32(ecx + 0x1121C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00182FFE; /* jl: less (signed <) */

loc_00182FF1: ;
    MEM32(ecx + 0x11214) = esi;
    eax = 0x7F;
    goto loc_00182FFF;

loc_00182FFE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00182FFF: ;
    MEM32(ecx + eax * 4 + 0x11010) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00182FD0; /* jl: less (signed <) */

loc_0018300F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00183020
 * Original: 0x00183020 - 0x00183063 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183020: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 2;
    goto loc_00183030;

    /* nop */

loc_00183030: ;
    MEM8(eax) = 0;
    eax = eax + 0x4C;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00183030; /* jne: not equal / not zero */

loc_00183039: ;
    ecx = esi + 0x9C;
    PUSH32(esp, 0x00183044u); RECOMP_ABI_CALL(0x0011C390u, sub_0011C390); /* call 0x0011C390 */

loc_00183044: ;
    MEM32(esi + 0xB4) = 0;
    ecx = esi;
    MEM32(esi + 0xB8) = 0;
    PUSH32(esp, 0x0018305Fu); RECOMP_ABI_CALL(0x00182D80u, sub_00182D80); /* call 0x00182D80 */

loc_0018305F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00183070
 * Original: 0x00183070 - 0x0018311D (173 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00183070(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183070: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    _fa = (uint32_t)(MEM8(ebp + 0x948)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x948), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018311B; /* je: equal / zero */

loc_00183080: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_001830A9; /* je: equal / zero */

loc_00183090: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = MEM32(ecx + edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001830A9; /* je: equal / zero */

loc_001830A1: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001830A9u); RECOMP_ABI_CALL(0x000B3CB0u, sub_000B3CB0); /* call 0x000B3CB0 */

loc_001830A9: ;
    ebx = ebp + 0xBD4;

loc_001830AF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001830BD; /* jne: not equal / not zero */

loc_001830B9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001830F8; /* je: equal / zero */

loc_001830BD: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001830EB; /* je: equal / zero */

loc_001830C3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001830CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001830CA: ;
    eax = MEM32(edi + esi * 8 + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001830EB; /* je: equal / zero */

loc_001830D5: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001830DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001830DC: ;
    ecx = MEM32(edi + esi * 8 + 0xC8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001830EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001830EB: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001830F3u); RECOMP_ABI_CALL(0x00026010u, sub_00026010); /* call 0x00026010 */

loc_001830F3: ;
    ebx = ebx + 4;
    goto loc_001830AF;

loc_001830F8: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3C806C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0018310Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018310A: ;
    SET_LO8(eax, MEM8(ebp + 0x948));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) & 0xBF);
    POP32(esp, esi);
    MEM8(ebp + 0x948) = LO8(eax);
    POP32(esp, ebx);

loc_0018311B: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00183120
 * Original: 0x00183120 - 0x001831DD (189 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183120(void)
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

loc_00183120: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00183153; /* je: equal / zero */

loc_0018313A: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = MEM32(ecx + edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00183153; /* je: equal / zero */

loc_0018314B: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00183153u); RECOMP_ABI_CALL(0x000B3CB0u, sub_000B3CB0); /* call 0x000B3CB0 */

loc_00183153: ;
    ebp = MEM32(esp + 0x1C);

loc_00183157: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00183165; /* jne: not equal / not zero */

loc_00183161: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001831D3; /* je: equal / zero */

loc_00183165: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(edi + ebx * 8 + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001831C9; /* jne: not equal / not zero */

loc_00183174: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00183179u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183179: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001831C9; /* jne: not equal / not zero */

loc_0018317D: ;
    ecx = MEM32(esi + ebp * 4 + 0xBD4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00183189u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183189: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00183192u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_00183192: ;
    esi = MEM32(esi + ebp * 4 + 0xBD4);
    edx = MEM32(eax);
    ebp = MEM32(esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001831A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001831A2: ;
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    fp_top() = fp_top() * MEMF(0x3CA9DC); /* fmul dword ptr [0x3ca9dc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp + 0x40); PUSH32(esp, 0x001831B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001831B5: ;
    ecx = MEM32(edi + ebx * 8 + 0xC8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001831C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001831C1: ;
    ebp = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x14);

loc_001831C9: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001831D1u); RECOMP_ABI_CALL(0x00026010u, sub_00026010); /* call 0x00026010 */

loc_001831D1: ;
    goto loc_00183157;

loc_001831D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001831E0
 * Original: 0x001831E0 - 0x00183264 (132 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001831E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001831E0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00183209; /* je: equal / zero */

loc_001831F0: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = MEM32(ecx + esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00183209; /* je: equal / zero */

loc_00183201: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00183209u); RECOMP_ABI_CALL(0x000B3CB0u, sub_000B3CB0); /* call 0x000B3CB0 */

loc_00183209: ;
    ebx = MEM32(esp + 0x10);

loc_0018320D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018321B; /* jne: not equal / not zero */

loc_00183217: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018325E; /* je: equal / zero */

loc_0018321B: ;
    edx = MEM32(esi + edi * 8 + 0xC8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00183230; /* je: equal / zero */

loc_00183226: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0018322Eu); RECOMP_ABI_CALL(0x00026010u, sub_00026010); /* call 0x00026010 */

loc_0018322E: ;
    goto loc_0018320D;

loc_00183230: ;
    edx = MEM32(esi + edi * 8 + 0xCC);
    eax = esi + edi * 8 + 0xC8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + edi * 8 + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0018325E; /* jg: greater (signed >) */

loc_0018324D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00183253u); RECOMP_ABI_CALL(0x00149540u, sub_00149540); /* call 0x00149540 */

loc_00183253: ;
    esp = esp + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0018325Eu); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_0018325E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00183270
 * Original: 0x00183270 - 0x00183278 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00183270: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_00183280(); return; /* tail jmp 0x00183280 */

}

/**
 * sub_00183280
 * Original: 0x00183280 - 0x001832DE (94 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183280: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x28;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x1C);
    edi = MEM32(eax + 0x24);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x24) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001832CD; /* jl: less (signed <) */

loc_001832B8: ;
    ecx = 0; /* xor self */
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + ecx * 4 + 0x14) = esi;
    ecx = MEM32(eax + 0x2C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x2C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001832CD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + ecx * 4 + 0x14) = esi;
    ecx = MEM32(eax + 0x2C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x2C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001832E0
 * Original: 0x001832E0 - 0x00183307 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001832E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001832E0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    eax = eax + ecx + 0x18;
    PUSH32(esp, eax);
    eax = edx + ecx + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001832FCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001832FC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00183310
 * Original: 0x00183310 - 0x00183318 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00183310: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_00183320(); return; /* tail jmp 0x00183320 */

}

/**
 * sub_00183320
 * Original: 0x00183320 - 0x00183392 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183320: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0xB4;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0xA8);
    edi = MEM32(eax + 0xB0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM32(eax + 0xA8) = ecx;
    MEM32(eax + 0xB0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00183378; /* jl: less (signed <) */

loc_00183367: ;
    MEM32(eax + 0xA8) = 0;
    ecx = 1;
    goto loc_00183379;

loc_00183378: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00183379: ;
    MEM32(eax + ecx * 4 + 0x9C) = esi;
    ecx = MEM32(eax + 0xB8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0xB8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001833A0
 * Original: 0x001833A0 - 0x0018349D (253 bytes, 83 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001833A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001833A0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x948)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x948), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00183498; /* jne: not equal / not zero */

loc_001833B3: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    ebx = esi + 4;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001833DD; /* je: equal / zero */

loc_001833C4: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = MEM32(ecx + ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001833DD; /* je: equal / zero */

loc_001833D5: ;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001833DDu); RECOMP_ABI_CALL(0x000B3CB0u, sub_000B3CB0); /* call 0x000B3CB0 */

loc_001833DD: ;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ebp);

loc_001833E2: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001833F6; /* jne: not equal / not zero */

loc_001833EE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00183495; /* je: equal / zero */

loc_001833F6: ;
    ecx = MEM32(esi + edi * 4 + 0xBD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00183471; /* je: equal / zero */

loc_00183401: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00183408u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183408: ;
    eax = MEM32(ebx + ebp * 8 + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebp = ebx + ebp * 8 + 0xC8;
    if (TEST_Z(_fa, _fb)) goto loc_00183471; /* je: equal / zero */

loc_0018341A: ;
    ecx = MEM32(esi + edi * 4 + 0xBD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00183426u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183426: ;
    ecx = MEM32(ebp);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00183430u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183430: ;
    ecx = MEM32(esi + edi * 4 + 0xBD4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0018343Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018343C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00183451; /* jge: greater or equal (signed >=) */

loc_00183442: ;
    ecx = MEM32(esi + edi * 4 + 0xBD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0018344Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018344E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00183456;

loc_00183451: ;
    eax = 1;

loc_00183456: ;
    ecx = MEM32(esi + edi * 4 + 0xBD4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00183463u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183463: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00183471; /* jne: not equal / not zero */

loc_00183468: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00183471u); RECOMP_ABI_CALL(0x00183120u, sub_00183120); /* call 0x00183120 */

loc_00183471: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0018347Du); RECOMP_ABI_CALL(0x00026010u, sub_00026010); /* call 0x00026010 */

loc_0018347D: ;
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esi + 0x948));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) | 0x40);
    MEM8(esi + 0x948) = LO8(eax);
    goto loc_001833E2;

loc_00183495: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00183498: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001834A0
 * Original: 0x001834A0 - 0x00183530 (144 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001834A0(void)
{

loc_001834A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    ecx = edi;
    PUSH32(esp, 0x001834AFu); RECOMP_ABI_CALL(0x00182DE0u, sub_00182DE0); /* call 0x00182DE0 */

loc_001834AF: ;
    esi = MEM32(esp + 0x10);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    edi = edx + edi + 0xC;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebx + 8) = eax;
    edi = 0x3FFFFFFF;
    esi = ebx + 4;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(edx + ebx + 0x10) = edi;
    MEM32(edx + ebx + 0x14) = edi;
    MEM32(edx + ebx + 0xC) = 0x7FFFFFFF;
    PUSH32(esp, 0x001834E6u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_001834E6: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    ecx = MEM32(eax + ebx + 0xC);
    eax = eax + ebx + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    edx = MEM32(ecx + ebx + 0xC);
    eax = ecx + ebx + 0xC;
    edx = edx & 0x40000000;
    edx = edx | edi;
    MEM32(eax) = edx;
    ecx = MEM32(ebx + 8);
    eax = MEM32(esp + 0x14);
    edx = ebx + ecx * 8 + 0xC8;
    ecx = MEM32(eax);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 4);
    POP32(esp, esi);
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00183530
 * Original: 0x00183530 - 0x00183640 (272 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183530: ;
    esp = esp - 0x4C;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x48) = eax;
    _fa = (uint32_t)(MEM8(0x577664)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x577664), 1 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0018355A; /* jne: not equal / not zero */

loc_00183549: ;
    MEM32(0x577664) = MEM32(0x577664) | 1;
    MEM32(0x577660) = 0;

loc_0018355A: ;
    edi = MEM32(esp + 0x58);
    PUSH32(esp, 0x40);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018356Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018356B: ;
    ecx = MEM32(esi + 8);
    esi = esi + 4;
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x57) = 0;
    PUSH32(esp, 0x00183586u); RECOMP_ABI_CALL(0x000B3C30u, sub_000B3C30); /* call 0x000B3C30 */

loc_00183586: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00183591; /* jne: not equal / not zero */

loc_0018358D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001835B4; /* je: equal / zero */

loc_00183591: ;
    ecx = MEM32(esi + eax * 8 + 0xCC);
    eax = esi + eax * 8 + 0xC8;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x001835AEu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001835AE: ;
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

loc_001835B4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x60;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001835C3u); RECOMP_ABI_CALL(0x0018E580u, sub_0018E580); /* call 0x0018E580 */

loc_001835C3: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0x40);
    edx = esp + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x001835D6u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001835D6: ;
    esp = esp + 0x1C;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0x57) = 0;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x001835F7u); RECOMP_ABI_CALL(0x001834A0u, sub_001834A0); /* call 0x001834A0 */

loc_001835F7: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00183607u); RECOMP_ABI_CALL(0x000B3C30u, sub_000B3C30); /* call 0x000B3C30 */

loc_00183607: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00183612; /* jne: not equal / not zero */

loc_0018360E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018362A; /* je: equal / zero */

loc_00183612: ;
    POP32(esp, edi);
    eax = esi + eax * 8 + 0xC8;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00183624u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00183624: ;
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

loc_0018362A: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, edi);
    eax = 0x577660;
    POP32(esp, esi);
    PUSH32(esp, 0x0018363Au); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018363A: ;
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00183640
 * Original: 0x00183640 - 0x0018389F (607 bytes, 135 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00183640: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354A4E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3E00C4;
    ebp = ebp | 0xFFFFFFFFu;
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    MEM32(esp + 0x10) = esi;
    MEM32(esi + 8) = 0x3FFFFFFF;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 4) = 0x3E0064;
    PUSH32(esp, 0x00183682u); RECOMP_ABI_CALL(0x00183020u, sub_00183020); /* call 0x00183020 */

loc_00183682: ;
    MEM32(esi + 4) = 0x3E007C;
    eax = esi + 0xCC;
    ecx = 2;
    ebx = 0; /* xor self */

loc_00183696: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00183696; /* jne: not equal / not zero */

loc_001836A1: ;
    PUSH32(esp, 0x18B460);
    PUSH32(esp, 0x18AA80);
    PUSH32(esp, 4);
    PUSH32(esp, 0x214);
    edi = esi + 0xE0;
    PUSH32(esp, edi);
    MEM32(esi + 4) = 0x3E00AC;
    PUSH32(esp, 0x001836C5u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_001836C5: ;
    eax = edi + 0x854;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x949));
    MEM8(esi + 0x948) = 4;
    MEM16(esi + 0x94A) = LO16(ebp);
    SET_LO8(ecx, LO8(ecx) & 0xF8);
    MEM8(esi + 0x949) = LO8(ecx);
    MEM8(esi + 0x94C) = LO8(ebx);
    MEM8(esi + 0x9CC) = LO8(ebx);
    MEM8(esi + 0xA4C) = LO8(ebx);
    MEM8(esi + 0xACC) = LO8(ebx);
    MEM8(esi + 0xB4C) = LO8(ebx);
    eax = esi + 0xBD4;
    MEM32(esi + 0xBCC) = ebx;
    MEM32(esi + 0xBD0) = ebx;
    edx = 0; /* xor self */
    ecx = eax;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    ecx = esi + 0xBE4;
    MEM32(esp + 0x1C) = ebx;
    MEM32(eax + 0xC) = ebx;
    PUSH32(esp, 0x00183740u); RECOMP_ABI_CALL(0x0018B510u, sub_0018B510); /* call 0x0018B510 */

loc_00183740: ;
    edi = esi + 0xC0C;
    ecx = edi;
    MEM32(esi + 0xC08) = ebx;
    PUSH32(esp, 0x00183753u); RECOMP_ABI_CALL(0x00181B50u, sub_00181B50); /* call 0x00181B50 */

loc_00183753: ;
    MEM32(edi + 0xA7C) = ebx;
    MEM8(esi + 0x168C) = LO8(ebx);
    MEM8(esi + 0x170C) = LO8(ebx);
    SET_LO8(eax, MEM8(esi + 0x1794));
    SET_LO8(eax, LO8(eax) & 0xFE);
    ecx = esi + 0x1798;
    MEM8(esi + 0x1794) = LO8(eax);
    PUSH32(esp, 0x0018377Eu); RECOMP_ABI_CALL(0x00181C50u, sub_00181C50); /* call 0x00181C50 */

loc_0018377E: ;
    ecx = esi + 0x18AC;
    edx = 0; /* xor self */
    eax = ecx + 0x11000;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(ecx + 0x11214) = ebx;
    MEM32(ecx + 0x11218) = ebx;
    MEM32(ecx + 0x1121C) = ebx;
    eax = ecx + 0x11220;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(ecx + 0x11230) = ebx;
    PUSH32(esp, 0x001837C5u); RECOMP_ABI_CALL(0x00182FB0u, sub_00182FB0); /* call 0x00182FB0 */

loc_001837C5: ;
    ecx = esi + 0x12AEC;
    MEM32(esi + 0x12AE4) = 0x3FFFFFFF;
    MEM32(esi + 0x12AE8) = ebp;
    MEM32(esi + 0x12AE0) = 0x3E004C;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x1C) = ebx;
    MEM32(ecx + 0x20) = ebx;
    MEM32(ecx + 0x24) = ebx;
    MEM32(ecx + 0x28) = ebx;
    MEM32(ecx + 0x2C) = ebx;
    PUSH32(esp, 0x001837FCu); RECOMP_ABI_CALL(0x00182D40u, sub_00182D40); /* call 0x00182D40 */

loc_001837FC: ;
    MEM32(esi + 0x13C74) = ebx;
    MEM32(esi + 0x12AE0) = 0x3E0094;
    MEM8(esi + 0x13C78) = LO8(ebx);
    MEM32(esi + 0x13CF8) = ebx;
    MEM8(esi + 0x13CFC) = LO8(ebx);
    MEM8(esi + 0x13D7C) = LO8(ebx);
    ecx = MEM32(0x3DD054);
    MEM32(esi + 0x13E40) = ecx;
    MEM8(esi + 0x13E44) = LO8(ebx);
    MEM8(esi + 0x13E84) = LO8(ebx);
    MEM32(esi + 0x13EC8) = ebp;
    MEM32(esi + 0x13EC4) = 1;
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    MEM32(esi + 0x13DFC) = edx;
    MEM32(esi + 0x13E00) = edx;
    MEM32(esi + 0x13E04) = edx;
    MEM32(esi + 0x13E08) = edx;
    MEM32(esi + 0x13E0C) = edx;
    MEM32(esi + 0x13E10) = edx;
    MEM32(esi + 0x13E14) = edx;
    MEM32(esi + 0x13E18) = edx;
    MEM32(esi + 0x13E1C) = edx;
    POP32(esp, edi);
    MEM32(esi + 0x13E20) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001838A0
 * Original: 0x001838A0 - 0x001838A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001838A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001838A0: ;
    fp_push(MEMF(ecx + 0xBCC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001838B0
 * Original: 0x001838B0 - 0x001838B7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001838B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001838B0: ;
    fp_push(MEMF(ecx + 0xBD0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001838C0
 * Original: 0x001838C0 - 0x001838DA (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001838C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001838C0: ;
    edx = MEM32(ecx + 0x17A0);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001838D9; /* je: equal / zero */

loc_001838CF: ;
    _fa = (uint32_t)(MEM32(ecx + 0x17A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x17A4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001838D9; /* je: equal / zero */

loc_001838D7: ;
    eax = 0; /* xor self */

loc_001838D9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001838E0
 * Original: 0x001838E0 - 0x00183900 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001838E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001838E0: ;
    edx = MEM32(ecx + 0x17A0);
    eax = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001838FA; /* je: equal / zero */

loc_001838EF: ;
    _fa = (uint32_t)(MEM32(ecx + 0x17A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x17A4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001838FA; /* je: equal / zero */

loc_001838F7: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001838FA: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00183900
 * Original: 0x00183900 - 0x00183930 (48 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183900(void)
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

loc_00183900: ;
    fp_push(MEMF(ecx + 0x1798)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00183923; /* jp: parity */

loc_00183913: ;
    SET_LO8(eax, MEM8(ecx + 0x18A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00183923; /* jne: not equal / not zero */

loc_0018391D: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00183923: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183930
 * Original: 0x00183930 - 0x00183943 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183930(void)
{

loc_00183930: ;
    SET_LO8(eax, 1);
    MEM8(ecx + 0x18A8) = LO8(eax);
    MEM32(ecx + 0x17A4) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00183950
 * Original: 0x00183950 - 0x0018395A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183950(void)
{

loc_00183950: ;
    MEM8(ecx + 0x18A8) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00183960
 * Original: 0x00183960 - 0x00183994 (52 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183960: ;
    SET_LO8(eax, MEM8(ecx + 0x9CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018396D; /* je: equal / zero */

loc_0018396A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0018396D: ;
    eax = MEM32(ecx + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00183991; /* je: equal / zero */

loc_00183977: ;
    edx = MEM32(ecx + 0x17A0);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00183993; /* je: equal / zero */

loc_00183986: ;
    _fa = (uint32_t)(MEM32(ecx + 0x17A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x17A4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00183993; /* je: equal / zero */

loc_0018398E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00183991: ;
    SET_LO8(eax, 0); /* xor self */

loc_00183993: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001839A0
 * Original: 0x001839A0 - 0x001839A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001839A0(void)
{

loc_001839A0: ;
    eax = ecx + 0x94C;
    esp += 4; return; /* ret */

}

/**
 * sub_001839B0
 * Original: 0x001839B0 - 0x001839B7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001839B0(void)
{

loc_001839B0: ;
    eax = ecx + 0x9CC;
    esp += 4; return; /* ret */

}

/**
 * sub_001839C0
 * Original: 0x001839C0 - 0x001839DC (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001839C0(void)
{

loc_001839C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x948));
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x948) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001839E0
 * Original: 0x001839E0 - 0x001839EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001839E0(void)
{

loc_001839E0: ;
    SET_LO8(eax, MEM8(ecx + 0x948));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001839F0
 * Original: 0x001839F0 - 0x001839F7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001839F0(void)
{

loc_001839F0: ;
    eax = MEM32(ecx + 0x1688);
    esp += 4; return; /* ret */

}

/**
 * sub_00183A00
 * Original: 0x00183A00 - 0x00183A1C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183A00(void)
{

loc_00183A00: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x948));
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x948) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00183A20
 * Original: 0x00183A20 - 0x00183A2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183A20(void)
{

loc_00183A20: ;
    SET_LO8(eax, MEM8(ecx + 0x948));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00183A30
 * Original: 0x00183A30 - 0x00183A37 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183A30(void)
{

loc_00183A30: ;
    eax = MEM32(ecx + 0x13EC8);
    esp += 4; return; /* ret */

}

/**
 * sub_00183A40
 * Original: 0x00183A40 - 0x00183A67 (39 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x110); PUSH32(esp, 0x00183A4Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183A4B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00183A63; /* je: equal / zero */

loc_00183A4F: ;
    esi = MEM32(esi + 0xC08);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00183A63; /* je: equal / zero */

loc_00183A59: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00183A63; /* je: equal / zero */

loc_00183A5F: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00183A63: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00183A70
 * Original: 0x00183A70 - 0x00183A7A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183A70(void)
{

loc_00183A70: ;
    SET_LO8(eax, MEM8(ecx + 0x948));
    SET_LO8(eax, LO8(eax) >> 7);
    esp += 4; return; /* ret */

}

/**
 * sub_00183A80
 * Original: 0x00183A80 - 0x00183A88 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183A80(void)
{

loc_00183A80: ;
    MEM8(ecx + 0x948) = MEM8(ecx + 0x948) | 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00183A90
 * Original: 0x00183A90 - 0x00183A97 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183A90(void)
{

loc_00183A90: ;
    eax = MEM32(ecx + 0xC08);
    esp += 4; return; /* ret */

}

/**
 * sub_00183AA0
 * Original: 0x00183AA0 - 0x00183AB4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183AA0: ;
    eax = MEM32(ecx + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00183AAE; /* je: equal / zero */

loc_00183AAA: ;
    eax = eax + 0x14;
    esp += 4; return; /* ret */

loc_00183AAE: ;
    eax = 0x3C806C;
    esp += 4; return; /* ret */

}

/**
 * sub_00183AC0
 * Original: 0x00183AC0 - 0x00183AC7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183AC0(void)
{

loc_00183AC0: ;
    eax = ecx + 0x13C78;
    esp += 4; return; /* ret */

}

/**
 * sub_00183AD0
 * Original: 0x00183AD0 - 0x00183AD7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183AD0(void)
{

loc_00183AD0: ;
    eax = ecx + 0xE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00183AE0
 * Original: 0x00183AE0 - 0x00183AE7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183AE0(void)
{

loc_00183AE0: ;
    eax = ecx + 0x13E44;
    esp += 4; return; /* ret */

}

/**
 * sub_00183AF0
 * Original: 0x00183AF0 - 0x00183AF7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183AF0(void)
{

loc_00183AF0: ;
    eax = ecx + 0x13E84;
    esp += 4; return; /* ret */

}

/**
 * sub_00183B00
 * Original: 0x00183B00 - 0x00183B0C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183B00(void)
{

loc_00183B00: ;
    SET_LO8(eax, MEM8(ecx + 0x948));
    SET_LO8(eax, LO8(eax) >> 5);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00183B10
 * Original: 0x00183B10 - 0x00183B2C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183B10(void)
{

loc_00183B10: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x948));
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x948) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00183B30
 * Original: 0x00183B30 - 0x00183B37 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183B30(void)
{

loc_00183B30: ;
    eax = ecx + 0xACC;
    esp += 4; return; /* ret */

}

/**
 * sub_00183B40
 * Original: 0x00183B40 - 0x00183B47 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183B40(void)
{

loc_00183B40: ;
    eax = ecx + 0xB4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00183B50
 * Original: 0x00183B50 - 0x00183B5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183B50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00183B50: ;
    ecx = ecx + 0xBE4;
    g_seh_ebp = ebp; sub_0018B6A0(); return; /* tail jmp 0x0018B6A0 */

}

/**
 * sub_00183B60
 * Original: 0x00183B60 - 0x00183B6D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183B60(void)
{

loc_00183B60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x13EC4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00183B70
 * Original: 0x00183B70 - 0x00183B77 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183B70(void)
{

loc_00183B70: ;
    eax = MEM32(ecx + 0x13EC4);
    esp += 4; return; /* ret */

}

/**
 * sub_00183B80
 * Original: 0x00183B80 - 0x00183B92 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183B80: ;
    _fa = (uint32_t)(MEM8(ecx + 0x949)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x949), 5 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00183B8C; /* jne: not equal / not zero */

loc_00183B89: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00183B8C: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00183BA0
 * Original: 0x00183BA0 - 0x00183BAF (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183BA0(void)
{

loc_00183BA0: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0x94A) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00183BB0
 * Original: 0x00183BB0 - 0x00183BB8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183BB0(void)
{

loc_00183BB0: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x94A);
    esp += 4; return; /* ret */

}

/**
 * sub_00183BC0
 * Original: 0x00183BC0 - 0x00183BD9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183BC0(void)
{

loc_00183BC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = ecx + 0x13E44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00183BD3u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00183BD3: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00183BE0
 * Original: 0x00183BE0 - 0x00183BF9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183BE0(void)
{

loc_00183BE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = ecx + 0x13E84;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00183BF3u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00183BF3: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00183C00
 * Original: 0x00183C00 - 0x00183C22 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183C00(void)
{

loc_00183C00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80);
    esi = ecx + 0xACC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00183C17u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00183C17: ;
    esp = esp + 0xC;
    MEM8(esi + 0x7F) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00183C30
 * Original: 0x00183C30 - 0x00183C52 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183C30(void)
{

loc_00183C30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80);
    esi = ecx + 0xB4C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00183C47u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00183C47: ;
    esp = esp + 0xC;
    MEM8(esi + 0x7F) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00183C60
 * Original: 0x00183C60 - 0x00183C6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183C60(void)
{

loc_00183C60: ;
    MEM32(ecx + 0x1688) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00183C70
 * Original: 0x00183C70 - 0x00183CAA (58 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183C70: ;
    eax = MEM32(ecx + 0xBE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00183CA7; /* jle: less or equal (signed <=) */

loc_00183C7A: ;
    eax = MEM32(ecx + 0xBD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00183CA7; /* je: equal / zero */

loc_00183C84: ;
    eax = MEM32(ecx + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00183CA4; /* jne: not equal / not zero */

loc_00183C8E: ;
    eax = ecx + 0x9CC;
    edx = eax + 1;

loc_00183C97: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00183C97; /* jne: not equal / not zero */

loc_00183C9E: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00183CA7; /* jle: less or equal (signed <=) */

loc_00183CA4: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00183CA7: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00183CB0
 * Original: 0x00183CB0 - 0x00183D1D (109 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183CB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354A71);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x13ECC);
    PUSH32(esp, 0x00183CD6u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00183CD6: ;
    esp = esp + 0xC;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00183D07; /* je: equal / zero */

loc_00183CEC: ;
    ecx = eax;
    PUSH32(esp, 0x00183CF3u); RECOMP_ABI_CALL(0x00183640u, sub_00183640); /* call 0x00183640 */

loc_00183CF3: ;
    MEM32(0x577210) = eax;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00183D07: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    MEM32(0x577210) = eax;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00183D20
 * Original: 0x00183D20 - 0x00183D34 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183D20: ;
    eax = MEM32(0x577210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00183D33; /* jne: not equal / not zero */

loc_00183D29: ;
    PUSH32(esp, 0x00183D2Eu); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_00183D2E: ;
    eax = MEM32(0x577210);

loc_00183D33: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00183D40
 * Original: 0x00183D40 - 0x00183D6F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183D40: ;
    ecx = MEM32(0x577210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00183D55; /* jne: not equal / not zero */

loc_00183D4A: ;
    PUSH32(esp, 0x00183D4Fu); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_00183D4F: ;
    ecx = MEM32(0x577210);

loc_00183D55: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00183D5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183D5A: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 4);
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00183D70
 * Original: 0x00183D70 - 0x00183DED (125 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00183D70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 3 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00183DEC; /* je: equal / zero */

loc_00183D77: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x577210);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00183D8F; /* jne: not equal / not zero */

loc_00183D84: ;
    PUSH32(esp, 0x00183D89u); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_00183D89: ;
    esi = MEM32(0x577210);

loc_00183D8F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edi = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00183DA0; /* jne: not equal / not zero */

loc_00183D95: ;
    PUSH32(esp, 0x00183D9Au); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_00183D9A: ;
    esi = MEM32(0x577210);

loc_00183DA0: ;
    eax = MEM32(edi);
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00183DA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183DA9: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x38); PUSH32(esp, 0x00183DB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183DB5: ;
    eax = MEM32(0x577210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00183DC3; /* jne: not equal / not zero */

loc_00183DBE: ;
    PUSH32(esp, 0x00183DC3u); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_00183DC3: ;
    esi = MEM32(0x577210);
    PUSH32(esp, 0x00183DCEu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00183DCE: ;
    edx = MEM32(esi);
    edi = eax;
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00183DD9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183DD9: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E0250);
    PUSH32(esp, 0x3CCCFC);
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x00183DE9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183DE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00183DEC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00183DF0
 * Original: 0x00183DF0 - 0x00183EAF (191 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183DF0(void)
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

loc_00183DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM8(esi + 0x110) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(esi) = 0;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 5), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00183E4C; /* je: equal / zero */

loc_00183E19: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x3DCCCCCD;
    ecx = MEM32(0x577210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00183E3B; /* jne: not equal / not zero */

loc_00183E30: ;
    PUSH32(esp, 0x00183E35u); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_00183E35: ;
    ecx = MEM32(0x577210);

loc_00183E3B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00183E4Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183E4A: ;
    goto loc_00183E6D;

loc_00183E4C: ;
    ecx = MEM32(0x577210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00183E61; /* jne: not equal / not zero */

loc_00183E56: ;
    PUSH32(esp, 0x00183E5Bu); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_00183E5B: ;
    ecx = MEM32(0x577210);

loc_00183E61: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x00183E6Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183E6D: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00183EA5; /* jns: not sign (positive) */

loc_00183E74: ;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0x00183E84u); RECOMP_ABI_CALL(0x001611A0u, sub_001611A0); /* call 0x001611A0 */

loc_00183E84: ;
    fp_push(MEMF(esi)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00183E99; /* jne: not equal / not zero */

loc_00183E93: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00183E99: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00183EA5: ;
    ecx = MEM32(esi);
    POP32(esp, edi);
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00183EB0
 * Original: 0x00183EB0 - 0x0018403B (395 bytes, 122 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00183EB0: ;
    esp = esp - 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(edi + 0x948) = MEM8(edi + 0x948) | 1;
    PUSH32(esp, 0x00183EC3u); RECOMP_ABI_CALL(0x001823F0u, sub_001823F0); /* call 0x001823F0 */

loc_00183EC3: ;
    PUSH32(esp, 0x00183EC8u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00183EC8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E0250);
    PUSH32(esp, 0x3CCCFC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00183EE0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183EE0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00183EECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183EEC: ;
    PUSH32(esp, 0x00183EF1u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00183EF1: ;
    PUSH32(esp, 0x00183EF6u); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_00183EF6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x181330);
    PUSH32(esp, 0x180CB0);
    PUSH32(esp, 0x3DD72C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00183F0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183F0B: ;
    PUSH32(esp, 0x00183F10u); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_00183F10: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x183D40);
    PUSH32(esp, 0x183D70);
    PUSH32(esp, 0x3E0258);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00183F25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183F25: ;
    eax = MEM32(edi + 0xBE0);
    esi = edi + 0xBD4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x00183F40u); RECOMP_ABI_CALL(0x001463F0u, sub_001463F0); /* call 0x001463F0 */

loc_00183F40: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00183F4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183F4E: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC8);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00183F5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183F5C: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00183F65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183F65: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00183F74u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00183F74: ;
    esp = esp + 8;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    MEM32(esp + 0x14) = 0x43800000;
    MEM32(esp + 0x18) = 0xC48A8000u;
    MEM32(esp + 0x1C) = 0x43400000;
    PUSH32(esp, 0x00183F9Du); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_00183F9D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FC8F5C3);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00183FAFu); RECOMP_ABI_CALL(0x0023E770u, sub_0023E770); /* call 0x0023E770 */

loc_00183FAF: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00183FB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183FB8: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41C80000);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00183FC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183FC4: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x44A28000);
    PUSH32(esp, 0x44480000);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00183FD5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183FD5: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00183FE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183FE1: ;
    PUSH32(esp, 0x00183FE6u); RECOMP_ABI_CALL(0x001463F0u, sub_001463F0); /* call 0x001463F0 */

loc_00183FE6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00183FF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00183FF4: ;
    ecx = MEM32(eax);
    MEM32(edi + 0xBD8) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00184006u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184006: ;
    PUSH32(esp, 0xC47A0000u);
    PUSH32(esp, esi);
    ecx = edi + 0xBE4;
    PUSH32(esp, 0x00184017u); RECOMP_ABI_CALL(0x0018B6F0u, sub_0018B6F0); /* call 0x0018B6F0 */

loc_00184017: ;
    PUSH32(esp, 0xC3400000u);
    PUSH32(esp, esi);
    ecx = edi + 0xE0;
    PUSH32(esp, 0x00184028u); RECOMP_ABI_CALL(0x0018C3B0u, sub_0018C3B0); /* call 0x0018C3B0 */

loc_00184028: ;
    PUSH32(esp, 0x0018402Du); RECOMP_ABI_CALL(0x0018CF00u, sub_0018CF00); /* call 0x0018CF00 */

loc_0018402D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00184033u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184033: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_00184040
 * Original: 0x00184040 - 0x001840F6 (182 bytes, 56 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00184040: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00184048u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00184048: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0018404Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018404F: ;
    PUSH32(esp, 0x3CB7E8);
    ecx = esi + 0x12AE0;
    PUSH32(esp, 0x0018405Fu); RECOMP_ABI_CALL(0x00171C40u, sub_00171C40); /* call 0x00171C40 */

loc_0018405F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018406C; /* je: equal / zero */

loc_00184063: ;
    _fa = (uint32_t)(MEM8(0x571720)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x571720), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001840E6; /* je: equal / zero */

loc_0018406C: ;
    MEM8(esi + 0x949) = MEM8(esi + 0x949) | 1;
    PUSH32(esp, 0x00184078u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_00184078: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0018407Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018407F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00184086u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184086: ;
    PUSH32(esp, 0x0018408Bu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0018408B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x00184097u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184097: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CE514);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x001840A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001840A5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001840ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001840AC: ;
    ecx = MEM32(0x577210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001840C1; /* jne: not equal / not zero */

loc_001840B6: ;
    PUSH32(esp, 0x001840BBu); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_001840BB: ;
    ecx = MEM32(0x577210);

loc_001840C1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E0260);
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x001840CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001840CE: ;
    PUSH32(esp, 0x001840D3u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_001840D3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001840E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001840E6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x3CB7E8);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x001840F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001840F4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00184100
 * Original: 0x00184100 - 0x0018422D (301 bytes, 103 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00184100(void)
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

loc_00184100: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0018410Au); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0018410A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00184116u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184116: ;
    PUSH32(esp, 0x0018411Bu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018411B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00184122u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184122: ;
    PUSH32(esp, 0x00184127u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00184127: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00184130u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184130: ;
    PUSH32(esp, 0x00184135u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00184135: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0018413Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018413F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_0018416C; /* je: equal / zero */

loc_00184147: ;
    eax = edi + 0x14;
    PUSH32(esp, 0x3DE648);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00184155u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00184155: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018416C; /* je: equal / zero */

loc_0018415C: ;
    PUSH32(esp, 0x00184161u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_00184161: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018416Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018416A: ;
    goto loc_00184178;

loc_0018416C: ;
    PUSH32(esp, 0x00184171u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_00184171: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00184178u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184178: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0018417Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018417F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00184187u); RECOMP_ABI_CALL(0x001821B0u, sub_001821B0); /* call 0x001821B0 */

loc_00184187: ;
    eax = MEM32(esi + 0xC08);
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 5));
    SET_LO8(ecx, LO8(ecx) >> 3);
    ecx = ecx & 0xFFFFFF01u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x001841A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001841A8: ;
    eax = MEM32(esi + 0xC08);
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 5));
    SET_LO8(ecx, LO8(ecx) >> 4);
    ecx = ecx & 0xFFFFFF01u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x001841C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001841C9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001841D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001841D0: ;
    ebp = esi + 0x1798;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x001841DEu); RECOMP_ABI_CALL(0x00183DF0u, sub_00183DF0); /* call 0x00183DF0 */

loc_001841DE: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0x179C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001841FB; /* jnp: not parity */

loc_001841F3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001841FBu); RECOMP_ABI_CALL(0x00181740u, sub_00181740); /* call 0x00181740 */

loc_001841FB: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00184202u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184202: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184227; /* je: equal / zero */

loc_00184208: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184227; /* je: equal / zero */

loc_0018420E: ;
    eax = 0; /* xor self */
    MEM8(ebp + 0x110) = 0;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp) = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00184227u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184227: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184230
 * Original: 0x00184230 - 0x001842E2 (178 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184230(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00184230: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 0x13CFC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00184246u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00184246: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001842DA; /* je: equal / zero */

loc_00184251: ;
    eax = MEM32(esi + 0x13CF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x13CF8;
    if (TEST_Z(_fa, _fb)) goto loc_0018427A; /* je: equal / zero */

loc_00184262: ;
    ecx = MEM32(edi);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00184271u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184271: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00184277u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00184277: ;
    esp = esp + 4;

loc_0018427A: ;
    _fa = (uint32_t)(MEM8(esi + 0x949)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x949), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001842D9; /* jne: not equal / not zero */

loc_00184283: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018428Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018428F: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM8(ebp + 0x7F) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001842D9; /* je: equal / zero */

loc_0018429A: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001842D9; /* je: equal / zero */

loc_0018429F: ;
    ecx = MEM32(0x577210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001842B4; /* jne: not equal / not zero */

loc_001842A9: ;
    PUSH32(esp, 0x001842AEu); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_001842AE: ;
    ecx = MEM32(0x577210);

loc_001842B4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x001842C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001842C4: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001842D9; /* je: equal / zero */

loc_001842CC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001842D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001842D9: ;
    POP32(esp, edi);

loc_001842DA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001842F0
 * Original: 0x001842F0 - 0x00184695 (933 bytes, 273 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001842F0(void)
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

loc_001842F0: ;
    esp = esp - 0x6C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 2;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 1;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    eax = 3;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(0x577210);
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x64) = 0x11;
    MEM32(esp + 0x68) = 0x10;
    MEM32(esp + 0x6C) = 0xB;
    MEM32(esp + 0x70) = 0xC;
    MEM32(esp + 0x74) = 0x17;
    MEM32(esp + 0x78) = 0x16;
    MEM32(esp + 0x44) = edi;
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x40) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0018438A; /* jne: not equal / not zero */

loc_0018437F: ;
    PUSH32(esp, 0x00184384u); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_00184384: ;
    ecx = MEM32(0x577210);

loc_0018438A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00184392u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184392: ;
    ecx = MEM32(0x577210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001843AB; /* jne: not equal / not zero */

loc_001843A0: ;
    PUSH32(esp, 0x001843A5u); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_001843A5: ;
    ecx = MEM32(0x577210);

loc_001843AB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x001843B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001843B3: ;
    esi = esi + 0x13DFC;
    MEM32(esp + 0x20) = esi;
    ebp = esi;
    MEM32(esp + 0x1C) = eax;
    esi = 0xFFFFFFE8u;
    goto loc_001843D0;

    /* nop */

loc_001843D0: ;
    SET_LO8(eax, MEM8(esp + 0x88));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0018444E; /* je: equal / zero */

loc_001843E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFF8u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018444E; /* jge: greater or equal (signed >=) */

loc_001843E6: ;
    ecx = MEM32(0x577210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001843FB; /* jne: not equal / not zero */

loc_001843F0: ;
    PUSH32(esp, 0x001843F5u); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_001843F5: ;
    ecx = MEM32(0x577210);

loc_001843FB: ;
    edx = MEM32(esp + esi + 0x5C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0018440Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018440A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8C30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8c30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018441F; /* jp: parity */

loc_00184417: ;
    eax = MEM32(esp + esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00184436; /* jl: less (signed <) */

loc_0018441F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3DFF50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3dff50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184448; /* jne: not equal / not zero */

loc_0018442C: ;
    eax = MEM32(esp + esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00184448; /* jle: less or equal (signed <=) */

loc_00184434: ;
    goto loc_00184438;

loc_00184436: ;
    fp_pop(); /* fstp st(0) */

loc_00184438: ;
    SET_LO8(eax, MEM8(edi + 0x57766C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ebx, 1);
    if (TEST_NZ(_fa, _fb)) goto loc_00184448; /* jne: not equal / not zero */

loc_00184444: ;
    MEM8(esp + 0x13) = LO8(ebx);

loc_00184448: ;
    MEM8(edi + 0x57766C) = LO8(ebx);

loc_0018444E: ;
    SET_LO8(eax, MEM8(esp + 0x90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001844C5; /* je: equal / zero */

loc_00184459: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001844C5; /* jl: less (signed <) */

loc_0018445D: ;
    ecx = MEM32(0x577210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184472; /* jne: not equal / not zero */

loc_00184467: ;
    PUSH32(esp, 0x0018446Cu); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_0018446C: ;
    ecx = MEM32(0x577210);

loc_00184472: ;
    edx = MEM32(esp + esi + 0x54);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00184481u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184481: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8C30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8c30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00184496; /* jp: parity */

loc_0018448E: ;
    eax = MEM32(esp + esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001844AD; /* jl: less (signed <) */

loc_00184496: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3DFF50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3dff50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001844BF; /* jne: not equal / not zero */

loc_001844A3: ;
    eax = MEM32(esp + esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001844BF; /* jle: less or equal (signed <=) */

loc_001844AB: ;
    goto loc_001844AF;

loc_001844AD: ;
    fp_pop(); /* fstp st(0) */

loc_001844AF: ;
    SET_LO8(eax, MEM8(edi + 0x577662));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ebx, 1);
    if (TEST_NZ(_fa, _fb)) goto loc_001844BF; /* jne: not equal / not zero */

loc_001844BB: ;
    MEM8(esp + 0x13) = LO8(ebx);

loc_001844BF: ;
    MEM8(edi + 0x577662) = LO8(ebx);

loc_001844C5: ;
    SET_LO8(eax, MEM8(esp + 0x88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001844D5; /* je: equal / zero */

loc_001844D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFF8u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001844E9; /* jl: less (signed <) */

loc_001844D5: ;
    SET_LO8(eax, MEM8(esp + 0x8C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184512; /* je: equal / zero */

loc_001844E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFF8u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00184512; /* jl: less (signed <) */

loc_001844E5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00184512; /* jge: greater or equal (signed >=) */

loc_001844E9: ;
    ecx = MEM32(esp + esi + 0x7C);
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    SET_LO8(ecx, MEM8(esp + 0x13));
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));

loc_00184512: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184532; /* je: equal / zero */

loc_00184516: ;
    ecx = MEM32(0x577210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018452B; /* jne: not equal / not zero */

loc_00184520: ;
    PUSH32(esp, 0x00184525u); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_00184525: ;
    ecx = MEM32(0x577210);

loc_0018452B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00184530u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184530: ;
    goto loc_00184537;

loc_00184532: ;
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = -fp_top(); /* fchs */

loc_00184537: ;
    SET_LO8(eax, MEM8(esp + 0x88));
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    MEM32(esp + 0x30) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00184559; /* je: equal / zero */

loc_00184554: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFF8u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018457C; /* jl: less (signed <) */

loc_00184559: ;
    SET_LO8(eax, MEM8(esp + 0x8C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018456D; /* je: equal / zero */

loc_00184564: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFF8u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018456D; /* jl: less (signed <) */

loc_00184569: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0018457C; /* jl: less (signed <) */

loc_0018456D: ;
    SET_LO8(eax, MEM8(esp + 0x90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001845E8; /* je: equal / zero */

loc_00184578: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001845E8; /* jl: less (signed <) */

loc_0018457C: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x94); /* fsub dword ptr [esp + 0x94] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    fp_top() = fp_top() - MEMF(esp + 0x94); /* fsub dword ptr [esp + 0x94] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001845DE; /* jne: not equal / not zero */

loc_001845A7: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = fp_top() - MEMF(0x4593E8); /* fsub dword ptr [0x4593e8] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x94); /* fsub dword ptr [esp + 0x94] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    fp_top() = fp_top() - MEMF(esp + 0x94); /* fsub dword ptr [esp + 0x94] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001845A7; /* je: equal / zero */

loc_001845DE: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */

loc_001845E8: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184610; /* jne: not equal / not zero */

loc_001845F0: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018465A; /* jp: parity */

loc_001845FD: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018465A; /* jne: not equal / not zero */

loc_0018460E: ;
    goto loc_00184612;

loc_00184610: ;
    fp_pop(); /* fstp st(0) */

loc_00184612: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00184641; /* ja: above (unsigned >) */

loc_00184617: ;
    ecx = ZX8(MEM8(edi + 0x1846A8));
    { uint32_t _jt = MEM32(ecx * 4 + 0x184698); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00184625u) goto loc_00184625;
    if (_jt == 0x0018462Bu) goto loc_0018462B;
    if (_jt == 0x00184631u) goto loc_00184631;
    if (_jt == 0x00184638u) goto loc_00184638;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00184625: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00184641;

loc_0018462B: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00184641;

loc_00184631: ;
    eax = MEM32(esp + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0018463D;

loc_00184638: ;
    eax = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0018463D: ;
    MEM32(esp + 0x28) = eax;

loc_00184641: ;
    ecx = MEM32(esp + 0x20);
    eax = 0; /* xor self */

loc_00184647: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184651; /* je: equal / zero */

loc_0018464B: ;
    MEM32(ecx) = 0;

loc_00184651: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00184647; /* jl: less (signed <) */

loc_0018465A: ;
    esi = esi + 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001843D0; /* jl: less (signed <) */

loc_0018466A: ;
    eax = MEM32(esp + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0018467F; /* je: equal / zero */

loc_00184679: ;
    edx = MEM32(esp + 0x14);
    MEM32(eax) = edx;

loc_0018467F: ;
    eax = MEM32(esp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018468D; /* je: equal / zero */

loc_00184687: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;

loc_0018468D: ;
    SET_LO8(eax, 1);
    esp = esp + 0x6C;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001846C0
 * Original: 0x001846C0 - 0x00184881 (449 bytes, 129 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001846C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001846C0: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x108) = eax;
    eax = MEM32(esp + 0x114);
    PUSH32(esp, 0x80);
    ebp = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001846F0u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001846F0: ;
    esi = MEM32(esp + 0x11C);
    PUSH32(esp, 0x80);
    edx = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM8(esp + 0x11F) = 0;
    PUSH32(esp, 0x0018470Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018470F: ;
    PUSH32(esp, 0x3CE514);
    PUSH32(esp, esi);
    MEM8(esp + 0xA7) = 0;
    PUSH32(esp, 0x00184722u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00184722: ;
    esp = esp + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018476A; /* je: equal / zero */

loc_00184729: ;
    PUSH32(esp, 0x3CF7C4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00184734u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00184734: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018476A; /* je: equal / zero */

loc_0018473B: ;
    PUSH32(esp, 0x3E028C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00184746u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00184746: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018476A; /* je: equal / zero */

loc_0018474D: ;
    PUSH32(esp, 0x3E0284);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00184758u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00184758: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018476A; /* jne: not equal / not zero */

loc_0018475F: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x128); PUSH32(esp, 0x0018476Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018476A: ;
    eax = MEM32(ebp + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184789; /* je: equal / zero */

loc_00184774: ;
    eax = eax + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018477Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018477E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018486A; /* je: equal / zero */

loc_00184789: ;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x00184792u); RECOMP_ABI_CALL(0x001811F0u, sub_001811F0); /* call 0x001811F0 */

loc_00184792: ;
    eax = MEM32(ebp + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001847F1; /* je: equal / zero */

loc_0018479C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001847A5u); RECOMP_ABI_CALL(0x00182EE0u, sub_00182EE0); /* call 0x00182EE0 */

loc_001847A5: ;
    edx = MEM32(ebp);
    edi = ebp + 0x17A8;
    ecx = 0x20;
    esi = esp + 0xC;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edi = ebp + 0x1828;
    ecx = 0x20;
    esi = esp + 0x8C;
    PUSH32(esp, 0);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x001847D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001847D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x001847E8u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001847E8: ;
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

loc_001847F1: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = ebp + 0x12AE0;
    PUSH32(esp, 0x00184801u); RECOMP_ABI_CALL(0x00171C40u, sub_00171C40); /* call 0x00171C40 */

loc_00184801: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184819; /* jne: not equal / not zero */

loc_00184807: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00184813u); RECOMP_ABI_CALL(0x001827A0u, sub_001827A0); /* call 0x001827A0 */

loc_00184813: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018486A; /* je: equal / zero */

loc_00184819: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC08)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC08), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018486A; /* je: equal / zero */

loc_00184821: ;
    SET_LO8(eax, MEM8(esp + 0x88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018483C; /* je: equal / zero */

loc_0018482C: ;
    edx = esp + 0x88;
    PUSH32(esp, edx);
    ecx = esi + 0x78;
    PUSH32(esp, 0x0018483Cu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0018483C: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00184844u); RECOMP_ABI_CALL(0x00184100u, sub_00184100); /* call 0x00184100 */

loc_00184844: ;
    ecx = MEM32(ebp + 0xC08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018486A; /* je: equal / zero */

loc_0018484E: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1794)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x1794), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018486A; /* je: equal / zero */

loc_00184857: ;
    eax = MEM32(ecx);
    esi = ebp + 0x168C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00184863u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184863: ;
    MEM8(esi + 0x108) = MEM8(esi + 0x108) & 0xFE;

loc_0018486A: ;
    ecx = MEM32(esp + 0x108);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x00184878u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00184878: ;
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00184890
 * Original: 0x00184890 - 0x00184A43 (435 bytes, 139 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00184890: ;
    esp = esp - 0x114;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0xC08);
    PUSH32(esp, edi);
    MEM32(esp + 0x120) = eax;
    PUSH32(esp, 0x001848B3u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001848B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001848BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001848BC: ;
    edi = MEM32(esp + 0x128);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001848CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001848CA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001848D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001848D1: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001848D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001848D8: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001848FE; /* je: equal / zero */

loc_001848E2: ;
    PUSH32(esp, 0x80);
    eax = eax + 0x14;
    PUSH32(esp, eax);
    ebp = esi + 0x13C78;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001848F7u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001848F7: ;
    esp = esp + 0xC;
    MEM8(ebp + 0x7F) = 0;

loc_001848FE: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184915; /* je: equal / zero */

loc_00184908: ;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 6), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184915; /* je: equal / zero */

loc_0018490E: ;
    MEM8(esi + 0x949) = MEM8(esi + 0x949) | 4;

loc_00184915: ;
    MEM32(esi + 0xC08) = 0;
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0018492D; /* jns: not sign (positive) */

loc_00184926: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018492Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018492D: ;
    ebp = esi + 0x17A8;
    eax = ebp;
    edx = eax + 1;

loc_00184938: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184938; /* jne: not equal / not zero */

loc_0018493F: ;
    eax = eax - edx;
    MEM32(esp + 0x10) = eax;
    if ((eax == 0)) goto loc_0018498C; /* je: equal / zero */

loc_00184947: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00184950u); RECOMP_ABI_CALL(0x00160910u, sub_00160910); /* call 0x00160910 */

loc_00184950: ;
    edi = esi + 0x1828;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0018495Fu); RECOMP_ABI_CALL(0x001846C0u, sub_001846C0); /* call 0x001846C0 */

loc_0018495F: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018496Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018496F: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    MEM8(ebp + 0x7F) = 0;
    PUSH32(esp, 0x00184983u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00184983: ;
    esp = esp + 0x18;
    MEM8(edi + 0x7F) = 0;
    goto loc_001849F2;

loc_0018498C: ;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00184999u); RECOMP_ABI_CALL(0x00182C00u, sub_00182C00); /* call 0x00182C00 */

loc_00184999: ;
    eax = esp + 0x14;
    edx = eax + 1;

loc_001849A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001849A0; /* jne: not equal / not zero */

loc_001849A7: ;
    eax = eax - edx;
    MEM32(esp + 0x10) = eax;
    if ((eax == 0)) goto loc_001849D8; /* je: equal / zero */

loc_001849AF: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x001849B8u); RECOMP_ABI_CALL(0x00160910u, sub_00160910); /* call 0x00160910 */

loc_001849B8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x001849C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001849C6: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi + 0x168C;
    PUSH32(esp, 0x001849D6u); RECOMP_ABI_CALL(0x001812D0u, sub_001812D0); /* call 0x001812D0 */

loc_001849D6: ;
    goto loc_001849F2;

loc_001849D8: ;
    PUSH32(esp, 0x001849DDu); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_001849DD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001849E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001849E6: ;
    PUSH32(esp, 0x001849EBu); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_001849EB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001849F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001849F2: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x949));
    if (TEST_NZ(_fa, _fb)) goto loc_00184A22; /* jne: not equal / not zero */

loc_00184A02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184A1C; /* jne: not equal / not zero */

loc_00184A06: ;
    SET_LO8(eax, MEM8(esi + 0x9CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184A1C; /* jne: not equal / not zero */

loc_00184A10: ;
    PUSH32(esp, 0x00184A15u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00184A15: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00184A1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184A1C: ;
    SET_LO8(eax, MEM8(esi + 0x949));

loc_00184A22: ;
    ecx = MEM32(esp + 0x120);
    SET_LO8(eax, LO8(eax) & 0xFD);
    POP32(esp, edi);
    MEM8(esi + 0x949) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00184A3Au); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00184A3A: ;
    esp = esp + 0x114;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00184A50
 * Original: 0x00184A50 - 0x00184B38 (232 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184A50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00184A50: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 0x9CC;
    MEM32(esp + 0x10C) = eax;
    eax = ebp;
    edx = eax + 1;
    ebx = 0; /* xor self */

loc_00184A74: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00184A74; /* jne: not equal / not zero */

loc_00184A7B: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00184B22; /* jle: less or equal (signed <=) */

loc_00184A85: ;
    _fa = (uint32_t)(MEM8(esi + 0x948)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x948), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184A9D; /* je: equal / zero */

loc_00184A8E: ;
    ecx = esi;
    PUSH32(esp, 0x00184A95u); RECOMP_ABI_CALL(0x00180E90u, sub_00180E90); /* call 0x00180E90 */

loc_00184A95: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184B22; /* jne: not equal / not zero */

loc_00184A9D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x80);
    eax = esp + 0x94;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00184AB1u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00184AB1: ;
    PUSH32(esp, 0x80);
    edi = esi + 0xA4C;
    ecx = esp + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM8(esp + 0x127) = LO8(ebx);
    PUSH32(esp, 0x00184ACEu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00184ACE: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ebp);
    MEM8(esp + 0xB3) = LO8(ebx);
    PUSH32(esp, 0x00184AE5u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00184AE5: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    MEM8(ebp + 0x7F) = LO8(ebx);
    PUSH32(esp, 0x00184AF8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00184AF8: ;
    MEM8(edi + 0x7F) = LO8(ebx);
    SET_LO8(ebx, MEM8(esi + 0x948));
    esp = esp + 0x30;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    SET_LO8(ebx, LO8(ebx) & 0xEF);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esi + 0x948) = LO8(ebx);
    PUSH32(esp, 0x00184B21u); RECOMP_ABI_CALL(0x001846C0u, sub_001846C0); /* call 0x001846C0 */

loc_00184B21: ;
    POP32(esp, edi);

loc_00184B22: ;
    ecx = MEM32(esp + 0x10C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00184B31u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00184B31: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_00184B40
 * Original: 0x00184B40 - 0x00184B7D (61 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00184B40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ebx + 0x1798;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00184B57u); RECOMP_ABI_CALL(0x00181360u, sub_00181360); /* call 0x00181360 */

loc_00184B57: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00184B5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184B5E: ;
    ecx = MEM32(esi + 8);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184B77; /* je: equal / zero */

loc_00184B6A: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184B77; /* je: equal / zero */

loc_00184B6F: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00184B77u); RECOMP_ABI_CALL(0x00184890u, sub_00184890); /* call 0x00184890 */

loc_00184B77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00184B80
 * Original: 0x00184B80 - 0x00184C35 (181 bytes, 66 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184B80(void)
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

loc_00184B80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00184B93; /* jne: not equal / not zero */

loc_00184B8C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00184B93: ;
    fp_push(MEMF(esi + 0x1798)); /* fld float */
    PUSH32(esp, ebx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    PUSH32(esp, ebp);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00184C2C; /* jp: parity */

loc_00184BAC: ;
    SET_LO8(eax, MEM8(esi + 0x18A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184C2C; /* jne: not equal / not zero */

loc_00184BB6: ;
    eax = MEM32(esi + 0x17A0);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ebp = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00184BE2; /* je: equal / zero */

loc_00184BCA: ;
    _fa = (uint32_t)(MEM32(esi + 0x17A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x17A4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184BE2; /* je: equal / zero */

loc_00184BD2: ;
    _fa = (uint32_t)(MEM32(esi + 0x17A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x17A0), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184BE2; /* je: equal / zero */

loc_00184BDA: ;
    _fa = (uint32_t)(MEM32(esi + 0x17A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x17A4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00184C2C; /* jne: not equal / not zero */

loc_00184BE2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00184BEAu); RECOMP_ABI_CALL(0x00181740u, sub_00181740); /* call 0x00181740 */

loc_00184BEA: ;
    _fa = (uint32_t)(MEM32(esi + 0x17A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x17A0), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184BFA; /* je: equal / zero */

loc_00184BF2: ;
    _fa = (uint32_t)(MEM32(esi + 0x17A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x17A4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00184C0B; /* jne: not equal / not zero */

loc_00184BFA: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00184C02u); RECOMP_ABI_CALL(0x001811C0u, sub_001811C0); /* call 0x001811C0 */

loc_00184C02: ;
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00184C0B: ;
    _fa = (uint32_t)(MEM32(esi + 0x17A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x17A0), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184C1B; /* je: equal / zero */

loc_00184C13: ;
    _fa = (uint32_t)(MEM32(esi + 0x17A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x17A4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00184C23; /* jne: not equal / not zero */

loc_00184C1B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00184C23u); RECOMP_ABI_CALL(0x00184890u, sub_00184890); /* call 0x00184890 */

loc_00184C23: ;
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00184C2C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184C40
 * Original: 0x00184C40 - 0x00184D03 (195 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184C40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00184C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC08);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184CDB; /* je: equal / zero */

loc_00184C52: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x1798;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00184C61u); RECOMP_ABI_CALL(0x00181360u, sub_00181360); /* call 0x00181360 */

loc_00184C61: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00184C68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184C68: ;
    ecx = MEM32(ebp + 8);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184C81; /* je: equal / zero */

loc_00184C74: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184C81; /* je: equal / zero */

loc_00184C79: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00184C81u); RECOMP_ABI_CALL(0x00184890u, sub_00184890); /* call 0x00184890 */

loc_00184C81: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_00184CDB; /* je: equal / zero */

loc_00184C8C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00184C94u); RECOMP_ABI_CALL(0x00184890u, sub_00184890); /* call 0x00184890 */

loc_00184C94: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184CBA; /* je: equal / zero */

loc_00184C9E: ;
    PUSH32(esp, 0x80);
    eax = eax + 0x14;
    PUSH32(esp, eax);
    edi = esi + 0x13C78;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00184CB3u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00184CB3: ;
    esp = esp + 0xC;
    MEM8(edi + 0x7F) = 0;

loc_00184CBA: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184CD1; /* je: equal / zero */

loc_00184CC4: ;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 6), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184CD1; /* je: equal / zero */

loc_00184CCA: ;
    MEM8(esi + 0x949) = MEM8(esi + 0x949) | 4;

loc_00184CD1: ;
    MEM32(esi + 0xC08) = 0;

loc_00184CDB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3C806C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00184CECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184CEC: ;
    ecx = esi + 0x12AE0;
    PUSH32(esp, 0x00184CF7u); RECOMP_ABI_CALL(0x00171DF0u, sub_00171DF0); /* call 0x00171DF0 */

loc_00184CF7: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x88)); return; /* indirect tail jmp */

}

/**
 * sub_00184D10
 * Original: 0x00184D10 - 0x00184FD0 (704 bytes, 228 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184D10(void)
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

loc_00184D10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x12AE0;
    PUSH32(esp, 0x00184D21u); RECOMP_ABI_CALL(0x00171CD0u, sub_00171CD0); /* call 0x00171CD0 */

loc_00184D21: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184D2C; /* je: equal / zero */

loc_00184D25: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00184D2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184D2C: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi = edi | 0xFFFFFFFFu;
    PUSH32(esp, 0x13);
    ecx = esi;
    MEM32(esp + 0x14) = edi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00184D44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184D44: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184E4C; /* je: equal / zero */

loc_00184D4C: ;
    PUSH32(esp, 0x00184D51u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00184D51: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00184D5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184D5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184E4C; /* jne: not equal / not zero */

loc_00184D63: ;
    PUSH32(esp, 0x00184D68u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00184D68: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00184D72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184D72: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00184E4C; /* jnp: not parity */

loc_00184D85: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184E4C; /* jne: not equal / not zero */

loc_00184D93: ;
    PUSH32(esp, 0x00184D98u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00184D98: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00184D9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184D9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184E4C; /* je: equal / zero */

loc_00184DA7: ;
    SET_LO8(eax, MEM8(0x48584F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184E4C; /* jne: not equal / not zero */

loc_00184DB4: ;
    PUSH32(esp, 0x00184DB9u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_00184DB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esp + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00184E15; /* je: equal / zero */

loc_00184DC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184DEA; /* je: equal / zero */

loc_00184DC5: ;
    PUSH32(esp, 0x00184DCAu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00184DCA: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x170); PUSH32(esp, 0x00184DD9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184DD9: ;
    PUSH32(esp, 0x00184DDEu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00184DDE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00184DEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184DEA: ;
    PUSH32(esp, 0x00184DEFu); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_00184DEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184E05; /* jne: not equal / not zero */

loc_00184DF3: ;
    PUSH32(esp, 0x00184DF8u); RECOMP_ABI_CALL(0x000BF740u, sub_000BF740); /* call 0x000BF740 */

loc_00184DF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184E05; /* jne: not equal / not zero */

loc_00184DFC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E02A8);
    goto loc_00184E45;

loc_00184E05: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E029C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00184E13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184E13: ;
    goto loc_00184E4C;

loc_00184E15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184E3E; /* je: equal / zero */

loc_00184E19: ;
    PUSH32(esp, 0x00184E1Eu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00184E1E: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x170); PUSH32(esp, 0x00184E2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184E2D: ;
    PUSH32(esp, 0x00184E32u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00184E32: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00184E3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184E3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D9338);

loc_00184E45: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00184E4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184E4C: ;
    eax = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x12);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x00184E5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184E5D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184F01; /* je: equal / zero */

loc_00184E65: ;
    PUSH32(esp, 0x00184E6Au); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00184E6A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00184E74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184E74: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184F01; /* jne: not equal / not zero */

loc_00184E7C: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184F01; /* jne: not equal / not zero */

loc_00184E86: ;
    PUSH32(esp, 0x00184E8Bu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00184E8B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00184E92u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184E92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184F01; /* je: equal / zero */

loc_00184E96: ;
    SET_LO8(eax, MEM8(0x48584F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184F01; /* jne: not equal / not zero */

loc_00184E9F: ;
    PUSH32(esp, 0x00184EA4u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_00184EA4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184ECA; /* je: equal / zero */

loc_00184EA8: ;
    PUSH32(esp, 0x00184EADu); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_00184EAD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184EBA; /* jne: not equal / not zero */

loc_00184EB1: ;
    PUSH32(esp, 0x00184EB6u); RECOMP_ABI_CALL(0x000BF740u, sub_000BF740); /* call 0x000BF740 */

loc_00184EB6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184ECA; /* je: equal / zero */

loc_00184EBA: ;
    PUSH32(esp, 0x00184EBFu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00184EBF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00184EC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184EC8: ;
    goto loc_00184F01;

loc_00184ECA: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00184EF5; /* je: equal / zero */

loc_00184ED0: ;
    PUSH32(esp, 0x00184ED5u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00184ED5: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x170); PUSH32(esp, 0x00184EE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184EE4: ;
    PUSH32(esp, 0x00184EE9u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00184EE9: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00184EF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184EF5: ;
    PUSH32(esp, 0x00184EFAu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00184EFA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00184F01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184F01: ;
    eax = MEM32(esi + 0xC08);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00184F0Fu); RECOMP_ABI_CALL(0x00184B80u, sub_00184B80); /* call 0x00184B80 */

loc_00184F0F: ;
    ecx = MEM32(esi + 0xC08);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00184F1Du); RECOMP_ABI_CALL(0x00181740u, sub_00181740); /* call 0x00181740 */

loc_00184F1D: ;
    edx = MEM32(esi + 0xBD0);
    edi = esi + 0xBE4;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00184F31u); RECOMP_ABI_CALL(0x0018B790u, sub_0018B790); /* call 0x0018B790 */

loc_00184F31: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00184F38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184F38: ;
    ecx = MEM32(esi + 0xC08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184F58; /* je: equal / zero */

loc_00184F42: ;
    PUSH32(esp, 0x00184F47u); RECOMP_ABI_CALL(0x00160980u, sub_00160980); /* call 0x00160980 */

loc_00184F47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184F87; /* jne: not equal / not zero */

loc_00184F4B: ;
    ecx = MEM32(esi + 0xC08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00184F56u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184F56: ;
    goto loc_00184F87;

loc_00184F58: ;
    ecx = edi;
    PUSH32(esp, 0x00184F5Fu); RECOMP_ABI_CALL(0x0018B4F0u, sub_0018B4F0); /* call 0x0018B4F0 */

loc_00184F5F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CBDD8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cbdd8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00184F87; /* jne: not equal / not zero */

loc_00184F6C: ;
    PUSH32(esp, 0x00184F71u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00184F71: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00184F78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184F78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184F87; /* je: equal / zero */

loc_00184F7C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00184F87u); RECOMP_ABI_CALL(0x0018B6A0u, sub_0018B6A0); /* call 0x0018B6A0 */

loc_00184F87: ;
    PUSH32(esp, 0x00184F8Cu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00184F8C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00184F93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184F93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00184F9E; /* je: equal / zero */

loc_00184F97: ;
    MEM8(esi + 0x949) = MEM8(esi + 0x949) & 0xFB;

loc_00184F9E: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00184FADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184FAD: ;
    PUSH32(esp, 0x00184FB2u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00184FB2: ;
    edx = MEM32(esi);
    edi = eax;
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x00184FC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184FC0: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x88); PUSH32(esp, 0x00184FC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184FC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00184FD0
 * Original: 0x00184FD0 - 0x001850EC (284 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00184FD0: ;
    xml1_pc_native_closed(MEM32(ecx + 0xC08));
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x9CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00184FEE; /* jne: not equal / not zero */

loc_00184FDF: ;
    SET_LO8(eax, MEM8(esi + 0x17A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esp + 0xA) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00184FF3; /* je: equal / zero */

loc_00184FEE: ;
    MEM8(esp + 0xA) = 1;

loc_00184FF3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00184FFAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00184FFA: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00185007u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00185007: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00185011u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185011: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00185033; /* jne: not equal / not zero */

loc_00185015: ;
    PUSH32(esp, 0x0018501Au); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0018501A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00185021u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185021: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00185033; /* je: equal / zero */

loc_00185025: ;
    SET_LO8(eax, MEM8(0x48584E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esp + 0xB) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00185038; /* je: equal / zero */

loc_00185033: ;
    MEM8(esp + 0xB) = 0;

loc_00185038: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00185050; /* je: equal / zero */

loc_0018503C: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00185050; /* jne: not equal / not zero */

loc_00185044: ;
    SET_LO8(eax, MEM8(esp + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001850E6; /* je: equal / zero */

loc_00185050: ;
    _fa = (uint32_t)(MEM8(esi + 0x949)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x949), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00185094; /* jne: not equal / not zero */

loc_00185059: ;
    eax = MEM32(esi + 0xC08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00185094; /* je: equal / zero */

loc_00185063: ;
    PUSH32(esp, 0x00185068u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00185068: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00185074u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185074: ;
    ecx = MEM32(esi + 0xC08);
    PUSH32(esp, eax);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x178)) >> 32) & 1);
    ecx = ecx + 0x178;
    PUSH32(esp, 0x00185086u); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_00185086: ;
    edx = MEM32(esi + 0xC08);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00185094u); RECOMP_ABI_CALL(0x00184B40u, sub_00184B40); /* call 0x00184B40 */

loc_00185094: ;
    SET_LO8(eax, MEM8(esp + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001850E6; /* jne: not equal / not zero */

loc_0018509C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001850E6; /* je: equal / zero */

loc_001850A0: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001850E6; /* je: equal / zero */

loc_001850A8: ;
    PUSH32(esp, 0x001850ADu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001850AD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001850B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001850B4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001850E6; /* je: equal / zero */

loc_001850BB: ;
    ecx = MEM32(0x577210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001850D0; /* jne: not equal / not zero */

loc_001850C5: ;
    PUSH32(esp, 0x001850CAu); RECOMP_ABI_CALL(0x00183CB0u, sub_00183CB0); /* call 0x00183CB0 */

loc_001850CA: ;
    ecx = MEM32(0x577210);

loc_001850D0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x170); PUSH32(esp, 0x001850D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001850D9: ;
    PUSH32(esp, 0x001850DEu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_001850DE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001850E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001850E6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001850F0
 * Original: 0x001850F0 - 0x00185107 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001850F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001850F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001850FFu); RECOMP_ABI_CALL(0x00163520u, sub_00163520); /* call 0x00163520 */

loc_001850FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00185110
 * Original: 0x00185110 - 0x00185380 (624 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00185110: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354A88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ebx = ecx;
    PUSH32(esp, 0x3E02F8);
    ecx = esp + 0x34;
    PUSH32(esp, 0x0018513Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018513C: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = ebx + 0xECC;
    MEM32(esp + 0x48) = 0;
    PUSH32(esp, 0x00185154u); RECOMP_ABI_CALL(0x00125FE0u, sub_00125FE0); /* call 0x00125FE0 */

loc_00185154: ;
    ecx = esp + 0x2C;
    esi = eax;
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00185167u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00185167: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018536F; /* je: equal / zero */

loc_0018516F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00185175u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00185175: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0018517Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018517E: ;
    PUSH32(esp, 0x3E02EC);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0018518Du); RECOMP_ABI_CALL(0x00126C60u, sub_00126C60); /* call 0x00126C60 */

loc_0018518D: ;
    PUSH32(esp, 0x00185192u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00185192: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00185199u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185199: ;
    ecx = esp + 0x10;
    edi = eax;
    PUSH32(esp, 0x001851A4u); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_001851A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001851C5; /* je: equal / zero */

loc_001851A8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001851C5; /* jle: less or equal (signed <=) */

loc_001851AC: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001851B8u); RECOMP_ABI_CALL(0x00126DB0u, sub_00126DB0); /* call 0x00126DB0 */

loc_001851B8: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001851C1u); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_001851C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001851A8; /* jne: not equal / not zero */

loc_001851C5: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001851CEu); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_001851CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018520A; /* jne: not equal / not zero */

loc_001851D2: ;
    PUSH32(esp, 0x001851D7u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_001851D7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001851E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001851E0: ;
    PUSH32(esp, 0x3E02EC);
    PUSH32(esp, esi);
    ecx = esp + 0x38;
    PUSH32(esp, 0x001851EFu); RECOMP_ABI_CALL(0x00126C60u, sub_00126C60); /* call 0x00126C60 */

loc_001851EF: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x1C) = edx;

loc_0018520A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00185213u); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_00185213: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018536E; /* je: equal / zero */

loc_0018521B: ;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3CC13C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0018522Eu); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_0018522E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, 0x3E02EC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0018523Fu); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0018523F: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x00185247u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00185247: ;
    esi = eax;
    PUSH32(esp, 0x0018524Eu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018524E: ;
    edx = MEM32(esi);
    edi = eax;
    eax = MEM32(edi);
    ecx = esi;
    MEM32(esp + 0xC) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0018525Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018525D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00185267u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185267: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00185296; /* jne: not equal / not zero */

loc_0018526B: ;
    PUSH32(esp, 0x00185270u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00185270: ;
    ecx = MEM32(ebx + 0xF14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x68);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00185280u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185280: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E02E4);
    PUSH32(esp, 0x3CE200);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00185291u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_00185291: ;
    esp = esp + 0x14;
    goto loc_001852B8;

loc_00185296: ;
    PUSH32(esp, 0x0018529Bu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0018529B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x68);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001852A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001852A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E02DC);
    PUSH32(esp, 0x3CE200);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001852B5u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_001852B5: ;
    esp = esp + 0x10;

loc_001852B8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x457F84);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E02D4);
    ecx = ebx;
    PUSH32(esp, 0x001852D2u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_001852D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001852D8u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_001852D8: ;
    esi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018536E; /* je: equal / zero */

loc_001852E5: ;
    ecx = esi;
    PUSH32(esp, 0x001852ECu); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_001852EC: ;
    PUSH32(esp, 0x3E02CC);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x001852FFu); RECOMP_ABI_CALL(0x00126D00u, sub_00126D00); /* call 0x00126D00 */

loc_001852FF: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00185308u); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_00185308: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00185368; /* je: equal / zero */

loc_0018530C: ;
    /* nop */

loc_00185310: ;
    edi = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3CC13C);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00185327u); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_00185327: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x60); PUSH32(esp, 0x0018532Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018532D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185350; /* je: equal / zero */

loc_00185334: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E02C4);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00185344u); RECOMP_ABI_CALL(0x001267D0u, sub_001267D0); /* call 0x001267D0 */

loc_00185344: ;
    ecx = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00185350u); RECOMP_ABI_CALL(0x00177D50u, sub_00177D50); /* call 0x00177D50 */

loc_00185350: ;
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0018535Bu); RECOMP_ABI_CALL(0x00126DB0u, sub_00126DB0); /* call 0x00126DB0 */

loc_0018535B: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00185364u); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_00185364: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00185310; /* jne: not equal / not zero */

loc_00185368: ;
    MEM16(esi + 0x7C) = 0;

loc_0018536E: ;
    POP32(esp, edi);

loc_0018536F: ;
    ecx = MEM32(esp + 0x3C);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00185380
 * Original: 0x00185380 - 0x001853FF (127 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185380(void)
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

loc_00185380: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x457F84);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E02D4);
    edi = ecx;
    PUSH32(esp, 0x0018539Cu); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0018539C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001853A2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_001853A2: ;
    esi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001853FC; /* je: equal / zero */

loc_001853AB: ;
    PUSH32(esp, 0x001853B0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001853B0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001853B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001853B7: ;
    fp_top() = fp_top() + MEMF(0x3C9404); /* fadd dword ptr [0x3c9404] */
    ecx = esi;
    MEMF(edi + 0xF10) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(edx, MEM8(esi + 0x39));
    SET_LO8(edx, LO8(edx) & 0xFB);
    MEM8(esi + 0x39) = LO8(edx);
    edi = 0; /* xor self */
    PUSH32(esp, 0x001853D5u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_001853D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001853FC; /* jle: less or equal (signed <=) */

loc_001853D9: ;
    /* nop */

loc_001853E0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001853E8u); RECOMP_ABI_CALL(0x00177D90u, sub_00177D90); /* call 0x00177D90 */

loc_001853E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001853F0; /* je: equal / zero */

loc_001853EC: ;
    MEM16(esi + 0x7C) = LO16(edi);

loc_001853F0: ;
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001853F8u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_001853F8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001853E0; /* jl: less (signed <) */

loc_001853FC: ;
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
 * sub_00185400
 * Original: 0x00185400 - 0x001854BD (189 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00185400: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354A88);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00185420u); RECOMP_ABI_CALL(0x00163930u, sub_00163930); /* call 0x00163930 */

loc_00185420: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x457F84);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E02D4);
    ecx = esi;
    PUSH32(esp, 0x0018543Au); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0018543A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00185440u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_00185440: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018544B; /* je: equal / zero */

loc_00185447: ;
    MEM8(eax + 0x39) = MEM8(eax + 0x39) | 4;

loc_0018544B: ;
    eax = MEM32(esi + 0xED8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0xF14) = 6;
    MEM32(esi + 0xF10) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_001854A6; /* jne: not equal / not zero */

loc_00185469: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E0300);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00185479u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00185479: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0xECC;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x00185495u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_00185495: ;
    ecx = esp + 4;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001854A6u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_001854A6: ;
    ecx = esi;
    PUSH32(esp, 0x001854ADu); RECOMP_ABI_CALL(0x00185110u, sub_00185110); /* call 0x00185110 */

loc_001854AD: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001854C0
 * Original: 0x001854C0 - 0x001856C2 (514 bytes, 159 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001854C0(void)
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

loc_001854C0: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x457F84);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E02D4);
    MEM32(esp + 0x124) = eax;
    esi = ecx;
    PUSH32(esp, 0x001854F0u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_001854F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001854F6u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_001854F6: ;
    esp = esp + 0x14;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00185502u); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_00185502: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    SET_LO8(ebx, 4);
    if (TEST_Z(_fa, _fb)) goto loc_0018554D; /* je: equal / zero */

loc_00185508: ;
    fp_push(MEMF(esi + 0xF10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018554D; /* jne: not equal / not zero */

loc_0018551B: ;
    PUSH32(esp, 0x00185520u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00185520: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00185527u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185527: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xF10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xf10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018554D; /* jne: not equal / not zero */

loc_00185534: ;
    MEM32(esi + 0xF10) = 0;
    SET_LO8(eax, MEM8(edi + 0x39));
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    ecx = esi;
    MEM8(edi + 0x39) = LO8(eax);
    PUSH32(esp, 0x0018554Du); RECOMP_ABI_CALL(0x00185110u, sub_00185110); /* call 0x00185110 */

loc_0018554D: ;
    PUSH32(esp, 0x00185552u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00185552: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0018555Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018555C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001856AB; /* je: equal / zero */

loc_00185566: ;
    ecx = edi;
    PUSH32(esp, 0x0018556Du); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0018556D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001856AB; /* jle: less or equal (signed <=) */

loc_00185575: ;
    _fa = (uint32_t)(MEM8(edi + 0x39)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x39), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001856AB; /* je: equal / zero */

loc_0018557E: ;
    eax = ebp;
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00185595; /* jne: not equal / not zero */

loc_00185587: ;
    ecx = ebp;
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001856AB; /* je: equal / zero */

loc_00185595: ;
    ecx = edi;
    PUSH32(esp, 0x0018559Cu); RECOMP_ABI_CALL(0x00177DE0u, sub_00177DE0); /* call 0x00177DE0 */

loc_0018559C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00185642; /* je: equal / zero */

loc_001855A4: ;
    PUSH32(esp, 0x001855A9u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_001855A9: ;
    edi = eax;
    PUSH32(esp, 0x001855B0u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_001855B0: ;
    edx = MEM32(edi);
    ebp = eax;
    ebx = MEM32(ebp);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001855BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001855BC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(ebx + 0x7C); PUSH32(esp, 0x001855C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001855C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00185636; /* jne: not equal / not zero */

loc_001855C6: ;
    PUSH32(esp, 0x001855CBu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001855CB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E0340);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001855D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001855D7: ;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x001855E1u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_001855E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x97);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001855EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001855ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E0338);
    eax = esp + 0x18;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00185602u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_00185602: ;
    ecx = MEM32(esi + 0xF14);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3CE200);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00185619u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_00185619: ;
    esp = esp + 0x20;
    PUSH32(esp, 0x00185621u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00185621: ;
    ecx = MEM32(esi + 0xF14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00185634u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185634: ;
    goto loc_00185666;

loc_00185636: ;
    PUSH32(esp, 0x0018563Bu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018563B: ;
    PUSH32(esp, 0x3E0324);
    goto loc_0018565F;

loc_00185642: ;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3CE200);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00185652u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_00185652: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x0018565Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018565A: ;
    PUSH32(esp, 0x3E0310);

loc_0018565F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00185666u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185666: ;
    ecx = esi;
    PUSH32(esp, 0x0018566Du); RECOMP_ABI_CALL(0x00185380u, sub_00185380); /* call 0x00185380 */

loc_0018566D: ;
    PUSH32(esp, 0x00185672u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00185672: ;
    esi = eax;
    PUSH32(esp, 0x00185679u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00185679: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00185684u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185684: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x80); PUSH32(esp, 0x0018568Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018568D: ;
    PUSH32(esp, 0x00185692u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00185692: ;
    esi = eax;
    PUSH32(esp, 0x00185699u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00185699: ;
    edx = MEM32(esi);
    edi = eax;
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001856A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001856A4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x78); PUSH32(esp, 0x001856ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001856AB: ;
    ecx = MEM32(esp + 0x110);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x001856BBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001856BB: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001856D0
 * Original: 0x001856D0 - 0x001856F4 (36 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001856D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001856D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001856D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001856D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001856F2; /* je: equal / zero */

loc_001856DC: ;
    /* nop */

loc_001856E0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001856E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001856E7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001856EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001856EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001856E0; /* jne: not equal / not zero */

loc_001856F2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00185700
 * Original: 0x00185700 - 0x0018571F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00185700: ;
    eax = MEM32(0x577670);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018571E; /* je: equal / zero */

loc_00185709: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00185711u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00185711: ;
    esp = esp + 8;
    MEM32(0x577670) = 0;

loc_0018571E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00185720
 * Original: 0x00185720 - 0x00185780 (96 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185720(void)
{

loc_00185720: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x3A20;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00185730u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00185730: ;
    MEM32(edi) = 0;
    edi = esi + 0x3A24;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00185742u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00185742: ;
    MEM32(edi) = 0;
    edi = esi + 0x3A28;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00185754u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00185754: ;
    MEM32(edi) = 0;
    edi = esi + 0x3A2C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00185766u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00185766: ;
    esi = esi + 0x3A30;
    PUSH32(esp, esi);
    MEM32(edi) = 0;
    PUSH32(esp, 0x00185778u); RECOMP_ABI_CALL(0x0018CCA0u, sub_0018CCA0); /* call 0x0018CCA0 */

loc_00185778: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00185780
 * Original: 0x00185780 - 0x0018584F (207 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00185780: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x3A36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3A36), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018584D; /* je: equal / zero */

loc_00185790: ;
    eax = MEM32(esi + 0x3A20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018584D; /* je: equal / zero */

loc_0018579E: ;
    PUSH32(esp, 0x001857A3u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_001857A3: ;
    ecx = MEM32(esi + 0x3A20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001857B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001857B1: ;
    PUSH32(esp, 0x001857B6u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_001857B6: ;
    ecx = MEM32(esi + 0x3A30);
    ecx = MEM32(ecx + 0x438);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001857CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001857CA: ;
    eax = MEM32(esi + 0x3A24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001857E7; /* je: equal / zero */

loc_001857D4: ;
    PUSH32(esp, 0x001857D9u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_001857D9: ;
    ecx = MEM32(esi + 0x3A24);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001857E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001857E7: ;
    eax = MEM32(esi + 0x3A28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00185804; /* je: equal / zero */

loc_001857F1: ;
    PUSH32(esp, 0x001857F6u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_001857F6: ;
    ecx = MEM32(esi + 0x3A28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00185804u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185804: ;
    eax = MEM32(esi + 0x3A2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00185821; /* je: equal / zero */

loc_0018580E: ;
    PUSH32(esp, 0x00185813u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00185813: ;
    ecx = MEM32(esi + 0x3A2C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00185821u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185821: ;
    eax = MEM32(esi + 0x3A30);
    ecx = eax + 0x43C;
    MEM32(eax + 0x400) = 0;
    MEM32(eax + 0x404) = 0;
    PUSH32(esp, 0x00185846u); RECOMP_ABI_CALL(0x0018AE50u, sub_0018AE50); /* call 0x0018AE50 */

loc_00185846: ;
    MEM8(esi + 0x3A36) = MEM8(esi + 0x3A36) & 0xFC;

loc_0018584D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00185850
 * Original: 0x00185850 - 0x00185938 (232 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00185850: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x3A36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3A36), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00185936; /* je: equal / zero */

loc_00185860: ;
    eax = MEM32(esi + 0x3A20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00185936; /* je: equal / zero */

loc_0018586E: ;
    PUSH32(esp, 0x00185873u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00185873: ;
    ecx = MEM32(esi + 0x3A20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00185886u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185886: ;
    PUSH32(esp, 0x0018588Bu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018588B: ;
    ecx = MEM32(esi + 0x3A30);
    ecx = MEM32(ecx + 0x438);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001858A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001858A4: ;
    eax = MEM32(esi + 0x3A24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001858C6; /* je: equal / zero */

loc_001858AE: ;
    PUSH32(esp, 0x001858B3u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001858B3: ;
    ecx = MEM32(esi + 0x3A24);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001858C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001858C6: ;
    eax = MEM32(esi + 0x3A28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001858E8; /* je: equal / zero */

loc_001858D0: ;
    PUSH32(esp, 0x001858D5u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001858D5: ;
    ecx = MEM32(esi + 0x3A28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001858E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001858E8: ;
    eax = MEM32(esi + 0x3A2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018590A; /* je: equal / zero */

loc_001858F2: ;
    PUSH32(esp, 0x001858F7u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001858F7: ;
    ecx = MEM32(esi + 0x3A2C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0018590Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018590A: ;
    eax = MEM32(esi + 0x3A30);
    ecx = eax + 0x43C;
    MEM32(eax + 0x400) = 0;
    MEM32(eax + 0x404) = 0;
    PUSH32(esp, 0x0018592Fu); RECOMP_ABI_CALL(0x0018AE50u, sub_0018AE50); /* call 0x0018AE50 */

loc_0018592F: ;
    MEM8(esi + 0x3A36) = MEM8(esi + 0x3A36) & 0xFC;

loc_00185936: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00185940
 * Original: 0x00185940 - 0x001859A9 (105 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185940(void)
{

loc_00185940: ;
    eax = ecx;
    MEM8(eax) = 0;
    MEM8(eax + 0x80) = 0;
    edx = eax + 0x80;
    MEM8(edx + 0x80) = 0;
    edx = edx + 0x80;
    MEM8(edx + 0x80) = 0;
    edx = edx + 0x80;
    MEM8(edx + 0x80) = 0;
    edx = edx + 0x80;
    MEM8(edx + 0x80) = 0;
    edx = edx + 0x80;
    edx = edx + 0x80;
    MEM8(edx) = 0;
    edx = edx + 0x80;
    MEM8(edx) = 0;
    edx = edx + 0x80;
    MEM8(edx) = 0;
    MEM8(edx + 0x80) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001859B0
 * Original: 0x001859B0 - 0x00185A31 (129 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001859B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001859B0: ;
    esp = esp - 0x108;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    MEM32(esp + 0x108) = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    MEM8(esp + 8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00185A1B; /* jne: not equal / not zero */

loc_001859D4: ;
    PUSH32(esp, 0x001859D9u); RECOMP_ABI_CALL(0x0013C440u, sub_0013C440); /* call 0x0013C440 */

loc_001859D9: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001859E4u); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_001859E4: ;
    eax = MEM32(eax);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00185A1B; /* je: equal / zero */

loc_001859EF: ;
    edx = MEM32(esp + 0x110);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00185A03u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00185A03: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00185A0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185A0D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00185A1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185A1B: ;
    ecx = MEM32(esp + 0x108);
    POP32(esp, esi);
    PUSH32(esp, 0x00185A28u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00185A28: ;
    esp = esp + 0x108;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00185A40
 * Original: 0x00185A40 - 0x00185B44 (260 bytes, 73 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00185A40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x3A20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E03A8);
    PUSH32(esp, 0x00185A56u); RECOMP_ABI_CALL(0x001859B0u, sub_001859B0); /* call 0x001859B0 */

loc_00185A56: ;
    ecx = esi + 0x3A24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E038C);
    ecx = esi;
    PUSH32(esp, 0x00185A69u); RECOMP_ABI_CALL(0x001859B0u, sub_001859B0); /* call 0x001859B0 */

loc_00185A69: ;
    edx = esi + 0x3A28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E038C);
    ecx = esi;
    PUSH32(esp, 0x00185A7Cu); RECOMP_ABI_CALL(0x001859B0u, sub_001859B0); /* call 0x001859B0 */

loc_00185A7C: ;
    eax = esi + 0x3A2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E0364);
    ecx = esi;
    PUSH32(esp, 0x00185A8Fu); RECOMP_ABI_CALL(0x001859B0u, sub_001859B0); /* call 0x001859B0 */

loc_00185A8F: ;
    eax = MEM32(esi + 0x3A30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00185B2A; /* jne: not equal / not zero */

loc_00185A9D: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x5A);
    ecx = esp + 0x14;
    PUSH32(esp, 0x1E);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00185AB5u); RECOMP_ABI_CALL(0x0018CB90u, sub_0018CB90); /* call 0x0018CB90 */

loc_00185AB5: ;
    eax = MEM32(eax);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x3A30) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00185B2A; /* je: equal / zero */

loc_00185AC4: ;
    ecx = eax + 0x43C;
    MEM32(eax + 0x400) = 0;
    MEM32(eax + 0x404) = 0;
    PUSH32(esp, 0x00185AE3u); RECOMP_ABI_CALL(0x0018AE50u, sub_0018AE50); /* call 0x0018AE50 */

loc_00185AE3: ;
    PUSH32(esp, 0x00185AE8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00185AE8: ;
    edx = MEM32(eax);
    edi = MEM32(esi + 0x3A30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x00185AFAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185AFA: ;
    ecx = MEM32(eax);
    MEM32(edi + 0x418) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 0x41C) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 0x420) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0x424) = edx;
    ecx = MEM32(esi + 0x3A30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00185B2Au); RECOMP_ABI_CALL(0x0005E7B0u, sub_0005E7B0); /* call 0x0005E7B0 */

loc_00185B2A: ;
    edi = 0; /* xor self */
    /* nop */

loc_00185B30: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00185B38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185B38: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00185B30; /* jl: less (signed <) */

loc_00185B3E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00185B50
 * Original: 0x00185B50 - 0x00185BB8 (104 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00185B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00185B50: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00185B6B; /* jl: less (signed <) */

loc_00185B5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00185B6B; /* jge: greater or equal (signed >=) */

loc_00185B5F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    edx = eax + ecx + 4;
    goto loc_00185B6E;

loc_00185B6B: ;
    edx = ecx + 4;

loc_00185B6E: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, 1);
    if (TEST_S(_fas, _fbs)) goto loc_00185B9E; /* jl: less (signed <) */

loc_00185B78: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(edx + 0x1354);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00185B9D; /* jge: greater or equal (signed >=) */

loc_00185B84: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x1104)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x1104), esi (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */

loc_00185B9D: ;
    POP32(esp, esi);

loc_00185B9E: ;
    _fa = (uint32_t)(MEM8(edx + 0x1359)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1359), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00185BB3; /* je: equal / zero */

loc_00185BA7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00185BB3; /* je: equal / zero */

loc_00185BAB: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00185BB3: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00185BC0
 * Original: 0x00185BC0 - 0x00185C28 (104 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00185BC0: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00185BDB; /* jl: less (signed <) */

loc_00185BCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00185BDB; /* jge: greater or equal (signed >=) */

loc_00185BCF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    edx = eax + ecx + 4;
    goto loc_00185BDE;

loc_00185BDB: ;
    edx = ecx + 4;

loc_00185BDE: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00185C0E; /* jl: less (signed <) */

loc_00185BE8: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(edx + 0x1354);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00185C0D; /* jge: greater or equal (signed >=) */

loc_00185BF4: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x1108)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x1108), esi (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */

loc_00185C0D: ;
    POP32(esp, esi);

loc_00185C0E: ;
    _fa = (uint32_t)(MEM8(edx + 0x1359)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1359), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00185C20; /* jne: not equal / not zero */

loc_00185C17: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00185C20; /* jne: not equal / not zero */

loc_00185C1B: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_00185C20: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}







/**
 * sub_00185F90
 * Original: 0x00185F90 - 0x0018609E (270 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185F90(void)
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

loc_00185F90: ;
    esp = esp - 0x20C;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x20C) = eax;
    eax = MEM32(esi + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_S(_fas, _fbs)) goto loc_00185FC1; /* jl: less (signed <) */

loc_00185FB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00185FC1; /* jge: greater or equal (signed >=) */

loc_00185FB5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    edi = eax + esi + 4;
    goto loc_00185FC4;

loc_00185FC1: ;
    edi = esi + 4;

loc_00185FC4: ;
    PUSH32(esp, 0x00185FC9u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_00185FC9: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x3A34);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3DA388);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00185FE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185FE6: ;
    PUSH32(esp, 0x200);
    edx = esp + 0x14;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00185FFAu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00185FFA: ;
    esp = esp + 0xC;
    MEM8(esp + 0x20F) = 0;
    PUSH32(esp, 0x0018600Au); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018600A: ;
    fp_push((double)SMEM32(esp + 0x218)); /* fild */
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x3A34);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00186032u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186032: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA844); /* fmul dword ptr [0x3ca844] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    fp_top() = fp_top() / MEMF(esp + 8); /* fdiv dword ptr [esp + 8] */
    fp_top() = MEMF(esp + 0xC) - fp_top(); /* fsubr dword ptr [esp + 0xc] */
    PUSH32(esp, 0x0018604Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018604B: ;
    ecx = MEM32(esi + 0x3A1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00186081; /* jl: less (signed <) */

loc_00186055: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00186081; /* jge: greater or equal (signed >=) */

loc_0018605A: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x135C);
    ecx = ecx + esi + 4;
    POP32(esp, edi);
    MEM8(ecx + 0x1355) = LO8(eax);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x208);
    PUSH32(esp, 0x00186078u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00186078: ;
    esp = esp + 0x20C;
    esp += 8; return; /* ret 4 */

loc_00186081: ;
    ecx = MEM32(esp + 0x210);
    POP32(esp, edi);
    MEM8(esi + 0x1359) = LO8(eax);
    POP32(esp, esi);
    PUSH32(esp, 0x00186095u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00186095: ;
    esp = esp + 0x20C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001860A0
 * Original: 0x001860A0 - 0x00186138 (152 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001860A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001860A0: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001860BB; /* jl: less (signed <) */

loc_001860AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001860BB; /* jge: greater or equal (signed >=) */

loc_001860AF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    goto loc_001860BE;

loc_001860BB: ;
    eax = ecx + 4;

loc_001860BE: ;
    SET_LO8(ecx, MEM8(eax + 0x1357));
    PUSH32(esp, esi);
    esi = SX8(LO8(ecx));
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x1356);
    edx = esi;
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001860DE; /* jge: greater or equal (signed >=) */

loc_001860D9: ;
    SET_LO8(ecx, LO8(ecx) - 2);
    goto loc_001860F6;

loc_001860DE: ;
    SET_LO8(edx, MEM8(eax + 0x1355));
    PUSH32(esp, ebx);
    ebx = SX8(LO8(edx));
    ebx = ebx - esi;
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_001860FC; /* jge: greater or equal (signed >=) */

loc_001860F2: ;
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_001860F6: ;
    MEM8(eax + 0x1356) = LO8(ecx);

loc_001860FC: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1355);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1354);
    ecx = ecx - edx;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1356);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0018611B; /* jge: greater or equal (signed >=) */

loc_00186119: ;
    ecx = edx;

loc_0018611B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM8(eax + 0x1356) = LO8(ecx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018612F; /* jle: less or equal (signed <=) */

loc_00186125: ;
    ecx = SX8(LO8(ecx));
    MEM8(eax + 0x1356) = LO8(ecx);
    esp += 4; return; /* ret */

loc_0018612F: ;
    ecx = 0; /* xor self */
    MEM8(eax + 0x1356) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00186140
 * Original: 0x00186140 - 0x00186251 (273 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186140(void)
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

loc_00186140: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x3A1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00186165; /* jl: less (signed <) */

loc_00186154: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00186165; /* jge: greater or equal (signed >=) */

loc_00186159: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    esi = eax + ebp + 4;
    goto loc_00186168;

loc_00186165: ;
    esi = ebp + 4;

loc_00186168: ;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xC) = ebx;
    _fa = (uint32_t)(MEM8(esi + 0x1354)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1354), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018624A; /* je: equal / zero */

loc_0018617C: ;
    fp_push(MEMF(esi + 0x1350)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018624A; /* jp: parity */

loc_00186193: ;
    PUSH32(esp, 0x00186198u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00186198: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10C); PUSH32(esp, 0x001861B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001861B5: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018624A; /* je: equal / zero */

loc_001861C1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1354);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x1357);
    eax = eax + edi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001861DB; /* jge: greater or equal (signed >=) */

loc_001861D7: ;
    eax = 0; /* xor self */
    goto loc_001861E1;

loc_001861DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001861E1; /* jle: less or equal (signed <=) */

loc_001861DF: ;
    eax = ecx;

loc_001861E1: ;
    SET_LO8(ecx, MEM8(esi + 0x1356));
    edx = SX8(LO8(ecx));
    MEM8(esi + 0x1357) = LO8(eax);
    eax = SX8(LO8(eax));
    ebx = edx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018620B; /* jge: greater or equal (signed >=) */

loc_001861FA: ;
    eax = eax - edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esi + 0x1356) = LO8(ecx);
    goto loc_00186229;

loc_0018620B: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x1355);
    edx = ebx + edx + -2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00186229; /* jl: less (signed <) */

loc_0018621A: ;
    eax = eax - edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    MEM8(esi + 0x1356) = LO8(eax);

loc_00186229: ;
    ecx = ebp;
    PUSH32(esp, 0x00186230u); RECOMP_ABI_CALL(0x001860A0u, sub_001860A0); /* call 0x001860A0 */

loc_00186230: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1357);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0018624A; /* je: equal / zero */

loc_0018623C: ;
    PUSH32(esp, 0x00186241u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00186241: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0018624Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018624A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00186260
 * Original: 0x00186260 - 0x0018628E (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00186260: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00186282; /* jl: less (signed <) */

loc_0018626A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00186282; /* jge: greater or equal (signed >=) */

loc_0018626F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    SET_LO8(eax, MEM8(eax + 0x1359));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

loc_00186282: ;
    eax = ecx + 4;
    SET_LO8(eax, MEM8(eax + 0x1359));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00186290
 * Original: 0x00186290 - 0x001862C0 (48 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00186290: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001862B2; /* jl: less (signed <) */

loc_00186298: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001862B2; /* jge: greater or equal (signed >=) */

loc_0018629D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    SET_LO8(eax, MEM8(eax + 0x1359));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_001862B2: ;
    eax = ecx + 4;
    SET_LO8(eax, MEM8(eax + 0x1359));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001862C0
 * Original: 0x001862C0 - 0x00186419 (345 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001862C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001862C0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x3A36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3A36), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186414; /* jne: not equal / not zero */

loc_001862D3: ;
    ecx = MEM32(esi + 0x3A20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00186414; /* je: equal / zero */

loc_001862E1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001862E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001862E6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0x43660000;
    MEM32(esp + 0x14) = 0x42DC0000;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00186314u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186314: ;
    edx = MEM32(esi + 0x3A30);
    ecx = MEM32(edx + 0x438);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00186325u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186325: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00186353u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186353: ;
    PUSH32(esp, 0x00186358u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00186358: ;
    ecx = MEM32(esi + 0x3A20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00186366u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186366: ;
    PUSH32(esp, 0x0018636Bu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0018636B: ;
    ecx = MEM32(esi + 0x3A30);
    ecx = MEM32(ecx + 0x438);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0018637Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018637F: ;
    eax = MEM32(esi + 0x3A24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018639C; /* je: equal / zero */

loc_00186389: ;
    PUSH32(esp, 0x0018638Eu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0018638E: ;
    ecx = MEM32(esi + 0x3A24);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0018639Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018639C: ;
    eax = MEM32(esi + 0x3A28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001863B9; /* je: equal / zero */

loc_001863A6: ;
    PUSH32(esp, 0x001863ABu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_001863AB: ;
    ecx = MEM32(esi + 0x3A28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001863B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001863B9: ;
    eax = MEM32(esi + 0x3A2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001863D6; /* je: equal / zero */

loc_001863C3: ;
    PUSH32(esp, 0x001863C8u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_001863C8: ;
    ecx = MEM32(esi + 0x3A2C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001863D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001863D6: ;
    eax = MEM32(esi + 0x3A30);
    MEM32(eax + 0x408) = 0x6B;
    MEM32(eax + 0x40C) = 0x10B;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x3A34);
    eax = MEM32(esi + 0x3A30);
    MEM32(eax + 0x410) = edx;
    MEM32(eax + 0x414) = 0xC8;
    MEM8(esi + 0x3A36) = MEM8(esi + 0x3A36) | 3;

loc_00186414: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00186420
 * Original: 0x00186420 - 0x0018659B (379 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00186420: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x3A36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3A36), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186596; /* jne: not equal / not zero */

loc_00186433: ;
    ecx = MEM32(esi + 0x3A20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00186596; /* je: equal / zero */

loc_00186441: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00186446u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186446: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0xC32F0000u;
    MEM32(esp + 0x14) = 0x42DC0000;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00186474u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186474: ;
    edx = MEM32(esi + 0x3A30);
    ecx = MEM32(edx + 0x438);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00186485u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186485: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0xC3480000u;
    MEM32(esp + 0x14) = 0;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001864B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001864B3: ;
    PUSH32(esp, 0x001864B8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001864B8: ;
    ecx = MEM32(esi + 0x3A20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001864CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001864CB: ;
    PUSH32(esp, 0x001864D0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001864D0: ;
    ecx = MEM32(esi + 0x3A30);
    ecx = MEM32(ecx + 0x438);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001864E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001864E9: ;
    eax = MEM32(esi + 0x3A24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018650B; /* je: equal / zero */

loc_001864F3: ;
    PUSH32(esp, 0x001864F8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001864F8: ;
    ecx = MEM32(esi + 0x3A24);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0018650Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018650B: ;
    eax = MEM32(esi + 0x3A28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018652D; /* je: equal / zero */

loc_00186515: ;
    PUSH32(esp, 0x0018651Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018651A: ;
    ecx = MEM32(esi + 0x3A28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0018652Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018652D: ;
    eax = MEM32(esi + 0x3A2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018654F; /* je: equal / zero */

loc_00186537: ;
    PUSH32(esp, 0x0018653Cu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018653C: ;
    ecx = MEM32(esi + 0x3A2C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0018654Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018654F: ;
    eax = MEM32(esi + 0x3A30);
    MEM32(eax + 0x408) = 0x6B;
    MEM32(eax + 0x40C) = 0x10B;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x3A34);
    eax = MEM32(esi + 0x3A30);
    MEM32(eax + 0x410) = edx;
    MEM32(eax + 0x414) = 0xC8;
    SET_LO8(eax, MEM8(esi + 0x3A36));
    SET_LO8(eax, LO8(eax) & 0xFD);
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(esi + 0x3A36) = LO8(eax);

loc_00186596: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001865A0
 * Original: 0x001865A0 - 0x00186BB6 (1558 bytes, 390 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001865A0(void)
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

loc_001865A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354ACA);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x260;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x3A1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x260) = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x4C) = ebx;
    if (TEST_S(_fas, _fbs)) goto loc_001865F5; /* jl: less (signed <) */

loc_001865E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001865F5; /* jge: greater or equal (signed >=) */

loc_001865E5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x135C);
    esi = esi + ebx + 4;
    MEM32(esp + 0x10) = esi;
    goto loc_001865FE;

loc_001865F5: ;
    eax = ebx + 4;
    MEM32(esp + 0x10) = eax;
    esi = eax;

loc_001865FE: ;
    MEM8(esp + 0x60) = 0;
    MEM32(esp + 0x30) = 0xC61C3C00u;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0xC61C3C00u;
    MEM32(esp + 0x3C) = 0xC61C3C00u;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0xC61C3C00u;
    _fa = (uint32_t)(MEM8(esi + 0x1359)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1359), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186648; /* jne: not equal / not zero */

loc_0018663C: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00186643u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186643: ;
    goto loc_00186B95;

loc_00186648: ;
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_00186650: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186650; /* jne: not equal / not zero */

loc_00186657: ;
    eax = eax - edx;
    MEM32(esp + 0x2C) = eax;
    if ((eax == 0)) goto loc_00186739; /* je: equal / zero */

loc_00186663: ;
    _fa = (uint32_t)(MEM8(0x577680)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x577680), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018669B; /* jne: not equal / not zero */

loc_0018666C: ;
    MEM32(0x577680) = MEM32(0x577680) | 1;
    PUSH32(esp, 0x3DE08C);
    MEM32(esp + 0x278) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186688u); RECOMP_ABI_CALL(0x0017CFF0u, sub_0017CFF0); /* call 0x0017CFF0 */

loc_00186688: ;
    esp = esp + 4;
    MEM32(0x57767C) = eax;
    MEM32(esp + 0x274) = 0xFFFFFFFFu;

loc_0018669B: ;
    ecx = 0x80;
    edi = esp + 0x60;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001866ABu); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_001866AB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x3A34);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001866C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001866C8: ;
    eax = MEM32(0x57767C);
    PUSH32(esp, 0);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 1);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001866E0u); RECOMP_ABI_CALL(0x0017D250u, sub_0017D250); /* call 0x0017D250 */

loc_001866E0: ;
    eax = MEM32(ebx + 0x3A30);
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 0x418) = ecx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 0x41C) = edx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x420) = ecx;
    edx = MEM32(esp + 0x34);
    esp = esp + 0x14;
    MEM32(eax + 0x424) = edx;
    ecx = MEM32(ebx + 0x3A30);
    PUSH32(esp, 0);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186723u); RECOMP_ABI_CALL(0x0005E800u, sub_0005E800); /* call 0x0005E800 */

loc_00186723: ;
    ecx = MEM32(ebx + 0x3A30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CB044);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186735u); RECOMP_ABI_CALL(0x0005E800u, sub_0005E800); /* call 0x0005E800 */

loc_00186735: ;
    esi = MEM32(esp + 0x10);

loc_00186739: ;
    ecx = MEM32(ebx + 0x3A2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00186776; /* je: equal / zero */

loc_00186743: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00186748u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186748: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0xC61C3C00u;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0xC61C3C00u;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00186776u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186776: ;
    _fa = (uint32_t)(MEM8(0x577680)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x577680), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001867AE; /* jne: not equal / not zero */

loc_0018677F: ;
    MEM32(0x577680) = MEM32(0x577680) | 2;
    PUSH32(esp, 0x3DE08C);
    MEM32(esp + 0x278) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018679Bu); RECOMP_ABI_CALL(0x0017CFF0u, sub_0017CFF0); /* call 0x0017CFF0 */

loc_0018679B: ;
    esp = esp + 4;
    MEM32(0x577678) = eax;
    MEM32(esp + 0x274) = 0xFFFFFFFFu;

loc_001867AE: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x1356);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1354);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001869F5; /* jge: greater or equal (signed >=) */

loc_001867C4: ;
    eax = edi + 4;
    eax = eax << 7;
    eax = eax + esi;
    MEM32(esp + 0x10) = eax;
    goto loc_001867E0;

loc_001867D2: ;
    eax = MEM32(esp + 0x10);
    goto loc_001867E0;

    /* nop */
    /* nop */

loc_001867E0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1355);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1356);
    ecx = ecx + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001869F5; /* jge: greater or equal (signed >=) */

loc_001867F8: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, eax);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186808u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00186808: ;
    esp = esp + 0xC;
    MEM8(esp + 0x25F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186818u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_00186818: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x3A34);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00186835u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186835: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1357);
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    PUSH32(esp, 0);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 1);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    edx = MEM32(0x577678);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186859u); RECOMP_ABI_CALL(0x0017D250u, sub_0017D250); /* call 0x0017D250 */

loc_00186859: ;
    eax = MEM32(ebx + 0x3A30);
    ecx = MEM32(esp + 0x64);
    MEM32(eax + 0x418) = ecx;
    edx = MEM32(esp + 0x68);
    MEM32(eax + 0x41C) = edx;
    ecx = MEM32(esp + 0x6C);
    MEM32(eax + 0x420) = ecx;
    edx = MEM32(esp + 0x70);
    MEM32(eax + 0x424) = edx;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1357);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001868FD; /* jne: not equal / not zero */

loc_00186895: ;
    ecx = MEM32(ebx + 0x3A2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001868FD; /* je: equal / zero */

loc_0018689F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001868A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001868A4: ;
    edx = MEM32(ebx + 0x3A30);
    ecx = MEM32(edx + 0x40C);
    fp_push(MEMF(edx + 0x404)); /* fld float */
    edx = MEM32(edx + 0x408);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0x28) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5BC9D0);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x1C;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    MEM32(esp + 0x20) = 0xC3410000u;
    PUSH32(esp, ecx);
    ecx = eax;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fp_top() + MEMF(0x3CC230); /* fadd dword ptr [0x3cc230] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax);
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001868FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001868FD: ;
    SET_LO8(eax, MEM8(esi + 0x1356));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018695C; /* jle: less or equal (signed <=) */

loc_00186907: ;
    edx = SX8(LO8(eax));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018695C; /* jne: not equal / not zero */

loc_0018690E: ;
    eax = MEM32(ebx + 0x3A30);
    ecx = MEM32(eax + 0x40C);
    edx = MEM32(eax + 0x404);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 0x410);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(eax + 0x408);
    eax = ecx + edx + -5;
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(esp + 0x34) = 0xC3410000u;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = fp_top() - MEMF(esp + 0x48); /* fsub dword ptr [esp + 0x48] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001869C5;

loc_0018695C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1355);
    edx = SX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1354);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001869C5; /* jge: greater or equal (signed >=) */

loc_00186973: ;
    eax = MEM32(ebx + 0x3A30);
    ecx = MEM32(eax + 0x40C);
    edx = MEM32(eax + 0x404);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 0x410);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x408);
    eax = ecx + edx + -5;
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(esp + 0x40) = 0xC3410000u;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    fp_top() = fp_top() - MEMF(0x3C6DE0); /* fsub dword ptr [0x3c6de0] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */

loc_001869C5: ;
    ecx = MEM32(ebx + 0x3A30);
    PUSH32(esp, 0);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001869D7u); RECOMP_ABI_CALL(0x0005E800u, sub_0005E800); /* call 0x0005E800 */

loc_001869D7: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1354);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001867D2; /* jl: less (signed <) */

loc_001869F5: ;
    ecx = MEM32(ebx + 0x3A24);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186A2C; /* je: equal / zero */

loc_00186A01: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00186A06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186A06: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = 0x40490FDB;
    MEM32(esp + 0x24) = edi;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00186A2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186A2C: ;
    ebx = MEM32(ebx + 0x3A28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186A6B; /* je: equal / zero */

loc_00186A36: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00186A3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186A3D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00186A6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186A6B: ;
    fp_push(MEMF(esi + 0x1350)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00186B95; /* jp: parity */

loc_00186A82: ;
    SET_LO8(ecx, MEM8(0x577680));
    eax = 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00186ABF; /* jne: not equal / not zero */

loc_00186A91: ;
    MEM32(0x577680) = MEM32(0x577680) | eax;
    PUSH32(esp, 0x3DE840);
    MEM32(esp + 0x278) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186AACu); RECOMP_ABI_CALL(0x0017CFF0u, sub_0017CFF0); /* call 0x0017CFF0 */

loc_00186AAC: ;
    esp = esp + 4;
    MEM32(0x577674) = eax;
    MEM32(esp + 0x274) = 0xFFFFFFFFu;

loc_00186ABF: ;
    ebx = esi + 0x110C;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x1C) = 2;
    MEM32(esp + 0x10) = ebx;
    /* nop */

loc_00186AE0: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186B84; /* je: equal / zero */

loc_00186AE9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186AEEu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00186AEE: ;
    ecx = MEM32(0x577674);
    ecx = ZX8(MEM8(ecx + 4));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x00186B03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186B03: ;
    esi = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186B16u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00186B16: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186B28u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00186B28: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186B3Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00186B3B: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    ebx = ebx << 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186B50u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00186B50: ;
    ecx = MEM32(esp + edi * 4 + 0x1C);
    edx = MEM32(esp + 0x54);
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x3A30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x12D);
    PUSH32(esp, 0x5D);
    PUSH32(esp, 0x69);
    ecx = ecx + 0x43C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186B80u); RECOMP_ABI_CALL(0x0018AB00u, sub_0018AB00); /* call 0x0018AB00 */

loc_00186B80: ;
    ebx = MEM32(esp + 0x10);

loc_00186B84: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00186AE0; /* jl: less (signed <) */

loc_00186B95: ;
    ecx = MEM32(esp + 0x26C);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x264);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00186BAFu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00186BAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_00186C60
 * Original: 0x00186C60 - 0x00186CAE (78 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00186C60: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00186C7B; /* jl: less (signed <) */

loc_00186C6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00186C7B; /* jge: greater or equal (signed >=) */

loc_00186C6F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    ecx = eax + ecx + 4;
    goto loc_00186C7E;

loc_00186C7B: ;
    ecx = ecx + 4;

loc_00186C7E: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00186CAB; /* jl: less (signed <) */

loc_00186C86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00186CAB; /* jge: greater or equal (signed >=) */

loc_00186C8B: ;
    PUSH32(esp, esi);
    eax = eax << 6;
    esi = eax + ecx + 0x110C;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00186CA3u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00186CA3: ;
    esp = esp + 0xC;
    MEM8(esi + 0x3F) = 0;
    POP32(esp, esi);

loc_00186CAB: ;
    esp += 12; return; /* ret 8 */

}



/**
 * sub_00186CF0
 * Original: 0x00186CF0 - 0x00186E20 (304 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00186CF0: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00186D0B; /* jl: less (signed <) */

loc_00186CFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00186D0B; /* jge: greater or equal (signed >=) */

loc_00186CFF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    goto loc_00186D0E;

loc_00186D0B: ;
    eax = ecx + 4;

loc_00186D0E: ;
    PUSH32(esp, esi);
    esi = eax + 0x124D;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00186D25u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00186D25: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM8(esi + 0x7F) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00186D4B; /* jge: greater or equal (signed >=) */

loc_00186D3F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    goto loc_00186D4E;

loc_00186D4B: ;
    eax = ecx + 4;

loc_00186D4E: ;
    PUSH32(esp, esi);
    esi = eax + 0x12CD;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00186D65u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00186D65: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM8(esi + 0x7F) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00186D8C; /* jge: greater or equal (signed >=) */

loc_00186D80: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    esi = eax + ecx + 4;
    goto loc_00186D8F;

loc_00186D8C: ;
    esi = ecx + 4;

loc_00186D8F: ;
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(ecx, MEM8(esi + 0x1359));
    if (1) _cf = (int)(((LO8(eax)) >> (8 - (1))) & 1);
    SET_LO8(eax, LO8(eax) << 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 2);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esi + 0x1359) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00186E17; /* jne: not equal / not zero */

loc_00186DAD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00186DB3u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00186DB3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F6);
    ecx = eax;
    edi = esi + 0x110C;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00186DC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186DC5: ;
    esi = eax;
    ecx = edi;
    PUSH32(esp, ebx);
    /* nop */

loc_00186DD0: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00186DF8; /* jne: not equal / not zero */

loc_00186DDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00186DF4; /* je: equal / zero */

loc_00186DDE: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00186DF8; /* jne: not equal / not zero */

loc_00186DEA: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00186DD0; /* jne: not equal / not zero */

loc_00186DF4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00186DFD;

loc_00186DF8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00186DFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00186E16; /* jne: not equal / not zero */

loc_00186E02: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00186E0Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00186E0F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM8(edi + 0x3F) = 0;

loc_00186E16: ;
    POP32(esp, edi);

loc_00186E17: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00186D30
 * Original: 0x00186D30 - 0x00186E20 (240 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00186D30: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00186D4B; /* jl: less (signed <) */

loc_00186D3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00186D4B; /* jge: greater or equal (signed >=) */

loc_00186D3F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    goto loc_00186D4E;

loc_00186D4B: ;
    eax = ecx + 4;

loc_00186D4E: ;
    PUSH32(esp, esi);
    esi = eax + 0x12CD;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00186D65u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00186D65: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM8(esi + 0x7F) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00186D8C; /* jge: greater or equal (signed >=) */

loc_00186D80: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    esi = eax + ecx + 4;
    goto loc_00186D8F;

loc_00186D8C: ;
    esi = ecx + 4;

loc_00186D8F: ;
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(ecx, MEM8(esi + 0x1359));
    if (1) _cf = (int)(((LO8(eax)) >> (8 - (1))) & 1);
    SET_LO8(eax, LO8(eax) << 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 2);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esi + 0x1359) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00186E17; /* jne: not equal / not zero */

loc_00186DAD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00186DB3u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00186DB3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F6);
    ecx = eax;
    edi = esi + 0x110C;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00186DC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186DC5: ;
    esi = eax;
    ecx = edi;
    PUSH32(esp, ebx);
    /* nop */

loc_00186DD0: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00186DF8; /* jne: not equal / not zero */

loc_00186DDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00186DF4; /* je: equal / zero */

loc_00186DDE: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00186DF8; /* jne: not equal / not zero */

loc_00186DEA: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00186DD0; /* jne: not equal / not zero */

loc_00186DF4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00186DFD;

loc_00186DF8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00186DFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00186E16; /* jne: not equal / not zero */

loc_00186E02: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00186E0Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00186E0F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM8(edi + 0x3F) = 0;

loc_00186E16: ;
    POP32(esp, edi);

loc_00186E17: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
