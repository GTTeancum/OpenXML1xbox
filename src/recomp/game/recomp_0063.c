/**
 * X-Men Legends - Recompiled code chunk 63
 * Functions: 250 (0x00281AA0 - 0x0028E190)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00281AA0
 * Original: 0x00281AA0 - 0x00281AEA (74 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281AA0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281AB0; /* jne: not equal / not zero */

loc_00281AA9: ;
    MEM8(0x5BDF6C) = 1;

loc_00281AB0: ;
    PUSH32(esp, 0x471280);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2571F0);
    PUSH32(esp, 0x281A60);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x405800);
    PUSH32(esp, 0x287FD0);
    PUSH32(esp, 0x2555E0);
    PUSH32(esp, 0x2893F0);
    PUSH32(esp, 0x5BDBF0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281AE6u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281AE6: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00281AF0
 * Original: 0x00281AF0 - 0x00281B8D (157 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00281AF9u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00281AF9: ;
    PUSH32(esp, 0x261A30);
    esi = eax;
    PUSH32(esp, 0x00281B05u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00281B05: ;
    ecx = MEM32(0x5BDB7C);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00281B14u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00281B14: ;
    esi = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x00281B23u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_00281B23: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, 0x24B760);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x00281B39u); RECOMP_ABI_CALL(0x001E7C00u, sub_001E7C00); /* call 0x001E7C00 */

loc_00281B39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00281B6B; /* jl: less (signed <) */

loc_00281B3D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = MEM32(edi + 0x14);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    edi = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00281B64; /* je: equal / zero */

loc_00281B4D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00281B64; /* jne: not equal / not zero */

loc_00281B5D: ;
    ecx = esi;
    PUSH32(esp, 0x00281B64u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00281B64: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00281B6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00281B86; /* je: equal / zero */

loc_00281B6F: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00281B86; /* jne: not equal / not zero */

loc_00281B7F: ;
    ecx = esi;
    PUSH32(esp, 0x00281B86u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00281B86: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00281B90
 * Original: 0x00281B90 - 0x00281B95 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281B90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00281B90: ;
    g_seh_ebp = ebp; sub_00281AF0(); return; /* tail jmp 0x00281AF0 */

}

/**
 * sub_00281BA0
 * Original: 0x00281BA0 - 0x00281C0F (111 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281BA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00281BA0: ;
    eax = MEM32(0x5BE5B8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x34);
    edx = MEM32(edi + 0x44);
    eax = MEM32(edi + 0x10);
    ebp = MEM32(edx + ecx * 4);
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebp * 4);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00281BDB; /* je: equal / zero */

loc_00281BC7: ;
    edx = MEM32(edi + 0x30);
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00281BD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00281BD8: ;
    esp = esp + 8;

loc_00281BDB: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00281BEBu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00281BEB: ;
    SET_LO8(eax, MEM8(ebx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00281BF9; /* je: equal / zero */

loc_00281BF2: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00281BF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00281BF9: ;
    eax = MEM32(ebx + 0x150);
    ecx = MEM32(ebx + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281C08u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_00281C08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00281C10
 * Original: 0x00281C10 - 0x00281D3D (301 bytes, 99 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281C10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00281C10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x00281C1Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00281C1A: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281C32; /* jne: not equal / not zero */

loc_00281C24: ;
    eax = MEM32(0x46A694);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281C2Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00281C2F: ;
    esp = esp + 4;

loc_00281C32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281C38u); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_00281C38: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    edi = eax;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00281C49u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00281C49: ;
    ecx = edi;
    PUSH32(esp, 0x00281C50u); RECOMP_ABI_CALL(0x001EB710u, sub_001EB710); /* call 0x001EB710 */

loc_00281C50: ;
    ecx = MEM32(ebx + 0x104);
    PUSH32(esp, 0x24BB70);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x00281C69u); RECOMP_ABI_CALL(0x001E7C00u, sub_001E7C00); /* call 0x001E7C00 */

loc_00281C69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00281D08; /* jge: greater or equal (signed >=) */

loc_00281C71: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = MEM32(ebx + 0x104);
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00281C82; /* je: equal / zero */

loc_00281C7F: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00281C82: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x24BB70);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00281C94u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_00281C94: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ebp = eax;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00281CA5u); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_00281CA5: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00281CB1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00281CB1: ;
    PUSH32(esp, 0x275740);
    esi = eax;
    PUSH32(esp, 0x00281CBDu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00281CBD: ;
    ecx = MEM32(0x5BD9C0);
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00281CCCu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00281CCC: ;
    ebx = MEM32(ebx + 0x108);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00281CDF; /* je: equal / zero */

loc_00281CDC: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00281CDF: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00281CEEu); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_00281CEE: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_00281D14; /* jne: not equal / not zero */

loc_00281CFF: ;
    ecx = esi;
    PUSH32(esp, 0x00281D06u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00281D06: ;
    goto loc_00281D14;

loc_00281D08: ;
    ecx = MEM32(ebx + 0x108);
    edx = MEM32(ecx + 0x10);
    esi = MEM32(edx + eax * 4);

loc_00281D14: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00281D20u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00281D20: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00281D37; /* jne: not equal / not zero */

loc_00281D30: ;
    ecx = edi;
    PUSH32(esp, 0x00281D37u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00281D37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00281D40
 * Original: 0x00281D40 - 0x00281E47 (263 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281D40: ;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x90);
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = edi + 0xA4;
    if (TEST_Z(_fa, _fb)) goto loc_00281D7F; /* je: equal / zero */

loc_00281D78: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);

loc_00281D7F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00281D9E; /* je: equal / zero */

loc_00281D84: ;
    ecx = ecx + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, 0x00281D91u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_00281D91: ;
    PUSH32(esp, esi);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    goto loc_00281DA8;

loc_00281D9E: ;
    PUSH32(esp, 0x46D0A0);
    edx = esp + 0x14;
    PUSH32(esp, edx);

loc_00281DA8: ;
    ebx = MEM32(esp + 0xA0);
    ecx = ebx;
    PUSH32(esp, 0x00281DB6u); RECOMP_ABI_CALL(0x002578D0u, sub_002578D0); /* call 0x002578D0 */

loc_00281DB6: ;
    esi = MEM32(edi + 0x48);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00281DCD; /* jl: less (signed <) */

loc_00281DC1: ;
    PUSH32(esp, 0x29FFE0);
    ecx = esi;
    PUSH32(esp, 0x00281DCDu); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_00281DCD: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    esi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00281DE3; /* je: equal / zero */

loc_00281DE0: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00281DE3: ;
    ecx = MEM32(ebx + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00281DFF; /* je: equal / zero */

loc_00281DEA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00281DFF; /* jne: not equal / not zero */

loc_00281DFA: ;
    PUSH32(esp, 0x00281DFFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00281DFF: ;
    eax = edi + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi + 0xC;
    MEM32(ebx + 0x3C) = esi;
    PUSH32(esp, 0x00281E13u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_00281E13: ;
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00281E1Cu); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_00281E1C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00281E23u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_00281E23: ;
    ecx = MEM32(edi + 0x34);
    esp = esp + 8;
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00281E31u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_00281E31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00281E50
 * Original: 0x00281E50 - 0x00281FAE (350 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281E50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00281E50: ;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x20);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    eax = esi + ecx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x34);
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x10) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00281EE8; /* jae: above or equal (unsigned >=) */

loc_00281E7A: ;
    /* nop */

loc_00281E80: ;
    eax = MEM32(esi);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(edi + 0x44);
    ebx = MEM32(ecx + edx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00281EB3; /* jge: greater or equal (signed >=) */

loc_00281EAB: ;
    edx = ecx + 1;
    MEM32(ebx + 8) = edx;
    goto loc_00281EC6;

loc_00281EB3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00281EBEu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00281EBE: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);

loc_00281EC6: ;
    edx = MEM32(ebx + 0x10);
    PUSH32(esp, ebp);
    MEM32(edx + ecx * 4) = eax;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00281ED5u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00281ED5: ;
    eax = MEM32(esp + 0x10);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00281E80; /* jb: below (unsigned <) */

loc_00281EE0: ;
    ebp = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x24);

loc_00281EE8: ;
    eax = MEM32(esp + 0x28);
    SET_LO8(ecx, MEM8(eax + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00281F21; /* je: equal / zero */

loc_00281EF3: ;
    eax = MEM32(ebx + 0x40);
    ecx = MEM32(ebx + 0x34);
    PUSH32(esp, eax);
    MEM32(eax + 8) = 0;
    PUSH32(esp, 0x00281F06u); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_00281F06: ;
    eax = MEM32(ebx + 0x40);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 8);
    eax = MEM32(ebx + 0x44);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00281F21u); RECOMP_ABI_CALL(0x00200CC0u, sub_00200CC0); /* call 0x00200CC0 */

loc_00281F21: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00281F2Cu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_00281F2C: ;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00281F96; /* je: equal / zero */

loc_00281F37: ;
    ebp = MEM32(ebp + 0x10);
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00281F96; /* jb: below (unsigned <) */

loc_00281F45: ;
    eax = MEM32(esi);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(edi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00281F7B; /* je: equal / zero */

loc_00281F67: ;
    edx = MEM32(edi + 0x30);
    ecx = MEM32(ebx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00281F78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00281F78: ;
    esp = esp + 8;

loc_00281F7B: ;
    ecx = MEM32(ebx + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    MEM32(ebx + 8) = ecx;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00281F8Bu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00281F8B: ;
    eax = MEM32(esp + 0x10);
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00281F45; /* jae: above or equal (unsigned >=) */

loc_00281F96: ;
    esi = MEM32(esp + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00281FB0
 * Original: 0x00281FB0 - 0x00282381 (977 bytes, 335 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281FB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00281FB0: ;
    esp = esp - 0x68;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x74);
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028237A; /* je: equal / zero */

loc_00281FC3: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0028237A; /* je: equal / zero */

loc_00281FD2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x78);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00281FE0u); RECOMP_ABI_CALL(0x0019A5D0u, sub_0019A5D0); /* call 0x0019A5D0 */

loc_00281FE0: ;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebx + 0x20);
    edx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00282255; /* jle: less or equal (signed <=) */

loc_00281FFC: ;
    MEM32(esp + 0x1C) = eax;

loc_00282000: ;
    ecx = MEM32(ebx + 0x34);
    edi = MEM32(ecx + 0x10);
    ecx = eax;
    ecx = ecx & 0x1F;
    ebp = 1;
    edx = eax;
    ebp = ebp << LO8(ecx);
    edx = edx >> 5;
    _fa = (uint32_t)(MEM32(edi + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + edx * 4), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282235; /* je: equal / zero */

loc_00282020: ;
    edx = MEM32(ebx + 0x30);
    ecx = MEM32(edx + 0x10);
    edi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x2C) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00282075; /* je: equal / zero */

loc_00282031: ;
    edx = MEM32(ebx + 0x2C);
    ebp = MEM32(edx + 0x10);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ebp = ebp + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282064; /* je: equal / zero */

loc_00282045: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x0028204Eu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0028204E: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esp + 0x40;
    PUSH32(esp, 0x0028205Du); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0028205D: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    goto loc_00282065;

loc_00282064: ;
    PUSH32(esp, ebp);

loc_00282065: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0028206Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028206C: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00282075u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_00282075: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00282118; /* jle: less or equal (signed <=) */

loc_00282099: ;
    goto loc_002820A0;

loc_0028209B: ;
    eax = MEM32(esp + 0x28);
    /* nop */

loc_002820A0: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(eax + ecx * 4);
    ebp = MEM32(esi + 0x34);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 8);
    eax = MEM32(ebp + 0x44);
    esi = MEM32(eax + edx * 4);
    edi = (uint32_t)(int32_t)SMEM16(ebx + 0xA);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 0x10);
    edi = edi + esi;
    esi = MEM32(edx + edi * 4);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002820DA; /* jge: greater or equal (signed >=) */

loc_002820D2: ;
    ecx = eax + 1;
    MEM32(esi + 8) = ecx;
    goto loc_002820E9;

loc_002820DA: ;
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002820E5u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002820E5: ;
    eax = MEM32(esp + 0x30);

loc_002820E9: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(edx + eax * 4) = ebx;
    PUSH32(esp, 0x002820F8u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_002820F8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028209B; /* jl: less (signed <) */

loc_0028210D: ;
    ebx = MEM32(esp + 0x80);
    edi = MEM32(esp + 0x2C);

loc_00282118: ;
    eax = MEM32(ebx + 0x38);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0028214C; /* je: equal / zero */

loc_00282120: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00282166; /* jne: not equal / not zero */

loc_00282123: ;
    eax = MEM32(esp + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00282166; /* jle: less or equal (signed <=) */

loc_0028212D: ;
    /* nop */

loc_00282130: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + ebp * 4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00282141u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_00282141: ;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00282130; /* jl: less (signed <) */

loc_0028214A: ;
    goto loc_00282166;

loc_0028214C: ;
    eax = MEM32(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x18)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x18))); }
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + edx * 4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00282166u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_00282166: ;
    SET_LO8(eax, MEM8(ebx + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00282235; /* jne: not equal / not zero */

loc_00282171: ;
    ebp = MEM32(esp + 0x24);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_002821E3; /* js: sign (negative) */

loc_00282178: ;
    goto loc_00282180;

    /* nop */

loc_00282180: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + ebp * 4);
    ebx = MEM32(esi + 0x34);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(ebx + 0x44);
    edi = MEM32(ecx + edx * 4);
    edx = MEM32(ebx + 0x10);
    eax = MEM32(edx + 0x10);
    esi = esi + edi;
    edi = MEM32(eax + esi * 4);
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002821C1; /* je: equal / zero */

loc_002821AD: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + edx * 4 + -4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002821BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002821BE: ;
    esp = esp + 8;

loc_002821C1: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x002821D1u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_002821D1: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(esp + 0x7C);
    if ((_fas >= 0)) goto loc_00282180; /* jns: not sign (positive) */

loc_002821D8: ;
    ebx = MEM32(esp + 0x80);
    edi = MEM32(esp + 0x2C);

loc_002821E3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282235; /* je: equal / zero */

loc_002821E7: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 8);
    ebp = MEM32(esi + 0x34);
    ecx = MEM32(ebp + 0x44);
    edx = MEM32(ecx + eax * 4);
    edi = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    edi = edi + edx;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx + 0x10);
    ebx = MEM32(eax + edi * 4);
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028221E; /* je: equal / zero */

loc_0028220A: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + edx * 4 + -4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0028221Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028221B: ;
    esp = esp + 8;

loc_0028221E: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = ebp;
    MEM32(ebx + 8) = edx;
    PUSH32(esp, 0x0028222Eu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028222E: ;
    ebx = MEM32(esp + 0x80);

loc_00282235: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x10);
    edx = edx + 0x40;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00282000; /* jl: less (signed <) */

loc_00282255: ;
    SET_LO8(eax, MEM8(ebx + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282377; /* je: equal / zero */

loc_00282260: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    if ((_fas < 0)) goto loc_00282377; /* js: sign (negative) */

loc_0028226B: ;
    goto loc_00282270;

    /* nop */

loc_00282270: ;
    ecx = MEM32(ebx + 0x34);
    edi = MEM32(ecx + 0x10);
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    eax = edx;
    ebp = ebp << LO8(ecx);
    eax = eax >> 5;
    _fa = (uint32_t)(MEM32(edi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + eax * 4), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028236C; /* je: equal / zero */

loc_00282290: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ebp = MEM32(eax + 8);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = eax;
    if ((_fas < 0)) goto loc_0028230F; /* js: sign (negative) */

loc_002822A3: ;
    goto loc_002822B0;

loc_002822A5: ;
    eax = MEM32(esp + 0x34);
    /* nop */

loc_002822B0: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ebp * 4);
    ebx = MEM32(esi + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(ebx + 0x44);
    edi = MEM32(edx + ecx * 4);
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x10);
    esi = esi + edi;
    edi = MEM32(ecx + esi * 4);
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002822ED; /* je: equal / zero */

loc_002822D9: ;
    edx = MEM32(ebx + 0x30);
    ecx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002822EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002822EA: ;
    esp = esp + 8;

loc_002822ED: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x002822FDu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_002822FD: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(esp + 0x7C);
    if ((_fas >= 0)) goto loc_002822A5; /* jns: not sign (positive) */

loc_00282304: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x80);

loc_0028230F: ;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028236C; /* je: equal / zero */

loc_0028231C: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebp = MEM32(ecx + 0x44);
    edi = edi + MEM32(ebp + edx * 4);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x10);
    ebp = MEM32(edx + edi * 4);
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x34) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0028235A; /* je: equal / zero */

loc_00282342: ;
    ecx = MEM32(ecx + 0x30);
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + edx * 4 + -4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00282353u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00282353: ;
    ecx = MEM32(esp + 0x3C);
    esp = esp + 8;

loc_0028235A: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0x00282368u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00282368: ;
    edx = MEM32(esp + 0x10);

loc_0028236C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    if ((_fas >= 0)) goto loc_00282270; /* jns: not sign (positive) */

loc_00282377: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0028237A: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_00282390
 * Original: 0x00282390 - 0x00282433 (163 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282390: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    ecx = MEM32(edi + 0x14);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002823B9; /* jl: less (signed <) */

loc_002823AD: ;
    PUSH32(esp, 0x295630);
    ecx = edi;
    PUSH32(esp, 0x002823B9u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_002823B9: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x10);
    edx = eax + 1;
    MEM32(edi + 0x14) = edx;
    edi = MEM32(ecx + eax * 4);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x002823CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002823CF: ;
    ebx = MEM32(esp + 0x20);
    ebp = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x9C); PUSH32(esp, 0x002823DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002823DF: ;
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x1C) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x002823EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002823EE: ;
    ecx = MEM32(esp + 0x14);
    MEM32(edi + 0x10) = ebp;
    ebp = MEM32(esp + 0x1C);
    MEM32(edi + 0x14) = ecx;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00282404u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_00282404: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028240Bu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028240B: ;
    esp = esp + 8;
    PUSH32(esp, edi);
    ecx = ebp;
    ebx = eax;
    PUSH32(esp, 0x00282418u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_00282418: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0028241Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028241F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00282440
 * Original: 0x00282440 - 0x002825C0 (384 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282440(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282440: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = MEM32(edi + 0x10C);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    ebx = MEM32(edi + 0x34);
    if (CMP_L(_fas, _fbs)) goto loc_00282466; /* jl: less (signed <) */

loc_0028245A: ;
    PUSH32(esp, 0x2977C0);
    ecx = esi;
    PUSH32(esp, 0x00282466u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_00282466: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    esi = MEM32(edx + eax * 4);
    eax = MEM32(edi + 0xFC);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028248F; /* jle: less or equal (signed <=) */

loc_00282482: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4 + -4);
    MEM32(esp + 0x10) = eax;
    goto loc_00282497;

loc_0028248F: ;
    MEM32(esp + 0x10) = 0;

loc_00282497: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x28);
    edi = MEM32(edx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x14) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002824CA; /* jbe: below or equal (unsigned <=) */

loc_002824A6: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002824B5; /* je: equal / zero */

loc_002824AD: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002824B5u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_002824B5: ;
    eax = edi;
    PUSH32(esp, 0x10);
    eax = eax << 6;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002824C4u); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_002824C4: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = edi;

loc_002824CA: ;
    ecx = MEM32(esp + 0x1C);
    ebp = MEM32(esi + 0xC);
    MEM32(esi + 0x10) = edi;
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028250B; /* jle: less or equal (signed <=) */

loc_002824E0: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + edi * 4);
    edx = MEM32(esp + 0x10);
    eax = eax << 6;
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002824F6u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_002824F6: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(eax + 8);
    esp = esp + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002824E0; /* jl: less (signed <) */

loc_0028250B: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    eax = MEM32(ebx + 0x44);
    edi = MEM32(eax + edx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + edi;
    edi = MEM32(edx + ebp * 4);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00282538; /* jge: greater or equal (signed >=) */

loc_00282530: ;
    ecx = eax + 1;
    MEM32(edi + 8) = ecx;
    goto loc_00282547;

loc_00282538: ;
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00282543u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00282543: ;
    eax = MEM32(esp + 0x10);

loc_00282547: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(edx + eax * 4) = esi;
    PUSH32(esp, 0x00282556u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00282556: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00282565u); RECOMP_ABI_CALL(0x00281E50u, sub_00281E50); /* call 0x00281E50 */

loc_00282565: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    esi = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    ecx = MEM32(ebx + 0x10);
    ebp = eax;
    eax = MEM32(ebx + 0x44);
    edi = MEM32(eax + edx * 4);
    edx = MEM32(ecx + 0x10);
    esi = esi + edi;
    edi = MEM32(edx + esi * 4);
    eax = MEM32(edi + 0x1C);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028259E; /* je: equal / zero */

loc_0028258A: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + edx * 4 + -4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0028259Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028259B: ;
    esp = esp + 8;

loc_0028259E: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(edi + 8) = edx;
    PUSH32(esp, 0x002825AEu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_002825AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002825C0
 * Original: 0x002825C0 - 0x0028262D (109 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002825C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002825C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_002825D3; /* jne: not equal / not zero */

loc_002825CE: ;
    eax = 0x3C806C;

loc_002825D3: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002825DFu); RECOMP_ABI_CALL(0x00258A40u, sub_00258A40); /* call 0x00258A40 */

loc_002825DF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028261F; /* je: equal / zero */

loc_002825E5: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002825F1; /* jne: not equal / not zero */

loc_002825EC: ;
    eax = 0x3C806C;

loc_002825F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002825FBu); RECOMP_ABI_CALL(0x00281C10u, sub_00281C10); /* call 0x00281C10 */

loc_002825FB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00282603u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_00282603: ;
    edi = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00282611; /* jne: not equal / not zero */

loc_0028260C: ;
    eax = 0x3C806C;

loc_00282611: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00282619u); RECOMP_ABI_CALL(0x00258990u, sub_00258990); /* call 0x00258990 */

loc_00282619: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0028261F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00282626u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_00282626: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00282630
 * Original: 0x00282630 - 0x00282775 (325 bytes, 112 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282630(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282630: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x3C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00282666; /* je: equal / zero */

loc_00282642: ;
    eax = MEM32(esi + 0x34);
    edi = MEM32(eax + 0x44);
    ecx = MEM32(0x5BE65C);
    ecx = MEM32(ecx + 8);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(edi + ecx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ecx * 4);
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00282666u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00282666: ;
    ecx = esi;
    PUSH32(esp, 0x0028266Du); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028266D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282673u); RECOMP_ABI_CALL(0x0029FFE0u, sub_0029FFE0); /* call 0x0029FFE0 */

loc_00282673: ;
    esp = esp + 4;
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0028267Fu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028267F: ;
    PUSH32(esp, 0x260B90);
    edi = eax;
    PUSH32(esp, 0x0028268Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028268B: ;
    ecx = MEM32(0x5BDAEC);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028269Au); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028269A: ;
    edi = eax;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002826B8; /* je: equal / zero */

loc_002826A3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002826B8; /* jne: not equal / not zero */

loc_002826B3: ;
    PUSH32(esp, 0x002826B8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002826B8: ;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 8) = 0xFFFFFFFFu;
    MEM32(edi + 0x20) = ebx;
    ecx = esp + 0x14;
    MEM32(esi + 0x204) = 1;
    PUSH32(esp, 0x002826D8u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_002826D8: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ebx = esi + 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002826E6u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_002826E6: ;
    esp = esp + 8;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0xA4;
    PUSH32(esp, 0x002826FEu); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_002826FE: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00282707u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00282707: ;
    ecx = MEM32(esi + 0x1D8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00282713u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00282713: ;
    ecx = MEM32(esi + 0x1DC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028271Fu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028271F: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00282728u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_00282728: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282741; /* jne: not equal / not zero */

loc_0028273A: ;
    ecx = edi;
    PUSH32(esp, 0x00282741u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282741: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282755; /* jne: not equal / not zero */

loc_0028274E: ;
    ecx = ebp;
    PUSH32(esp, 0x00282755u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282755: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028276B; /* je: equal / zero */

loc_0028275C: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0028276Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028276B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00282780
 * Original: 0x00282780 - 0x002827A4 (36 bytes, 14 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282780: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x00282792u); RECOMP_ABI_CALL(0x0027D6C0u, sub_0027D6C0); /* call 0x0027D6C0 */

loc_00282792: ;
    esp = esp + 4;
    MEM32(esp + 0x10) = eax;
    eax = edi;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0027D9C0(); return; /* tail jmp 0x0027D9C0 */

}

/**
 * sub_002827B0
 * Original: 0x002827B0 - 0x00282851 (161 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002827B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002827B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x1FC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x1FC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00282825; /* jne: not equal / not zero */

loc_002827CA: ;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    eax = MEM32(esi + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002827F0; /* jne: not equal / not zero */

loc_002827EC: ;
    edi = 0; /* xor self */
    goto loc_002827F7;

loc_002827F0: ;
    edx = MEM32(eax + 0x10);
    edi = MEM32(edx + ecx * 4 + -4);

loc_002827F7: ;
    edx = MEM32(esi + 0x1D8);
    ecx = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028281C; /* jle: less or equal (signed <=) */

loc_00282806: ;
    edx = MEM32(edx + 0x10);
    /* nop */

loc_00282810: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028281F; /* je: equal / zero */

loc_00282814: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00282810; /* jl: less (signed <) */

loc_0028281C: ;
    eax = eax | 0xFFFFFFFFu;

loc_0028281F: ;
    MEM32(esi + 0x200) = eax;

loc_00282825: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00282831u); RECOMP_ABI_CALL(0x0027D6C0u, sub_0027D6C0); /* call 0x0027D6C0 */

loc_00282831: ;
    MEM32(esp + 0x10) = eax;
    esp = esp + 4;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x00282841u); RECOMP_ABI_CALL(0x0027D9C0u, sub_0027D9C0); /* call 0x0027D9C0 */

loc_00282841: ;
    ecx = MEM32(esi + 0x1FC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1FC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00282860
 * Original: 0x00282860 - 0x00282929 (201 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebp = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esi + 0x1F0) = 1;
    PUSH32(esp, 0x00282879u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00282879: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028287Fu); RECOMP_ABI_CALL(0x0029FFE0u, sub_0029FFE0); /* call 0x0029FFE0 */

loc_0028287F: ;
    esp = esp + 4;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0028288Bu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028288B: ;
    PUSH32(esp, 0x260B90);
    ebx = eax;
    PUSH32(esp, 0x00282897u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00282897: ;
    ecx = MEM32(0x5BDAEC);
    esp = esp + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002828A6u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002828A6: ;
    ebx = eax;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x20);
    MEM32(ebx + 8) = ecx;
    ecx = MEM32(esi + 0x1D8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002828BEu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_002828BE: ;
    ecx = MEM32(esi + 0x1DC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002828CAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_002828CA: ;
    edx = MEM32(edi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002828E1; /* jne: not equal / not zero */

loc_002828DA: ;
    ecx = edi;
    PUSH32(esp, 0x002828E1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002828E1: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002828F8; /* jne: not equal / not zero */

loc_002828F1: ;
    ecx = ebx;
    PUSH32(esp, 0x002828F8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002828F8: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00282900u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_00282900: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028290Bu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028290B: ;
    esp = esp + 8;
    PUSH32(esp, edi);
    ecx = ebp;
    esi = eax;
    PUSH32(esp, 0x00282918u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_00282918: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00282930
 * Original: 0x00282930 - 0x00282A9C (364 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282930: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = MEM32(edi + 0x34);
    ecx = edi;
    MEM8(edi + 0x1F0) = 1;
    PUSH32(esp, 0x0028294Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028294A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282950u); RECOMP_ABI_CALL(0x00297790u, sub_00297790); /* call 0x00297790 */

loc_00282950: ;
    ecx = MEM32(edi + 0x1F8);
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00282961u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00282961: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282978; /* jne: not equal / not zero */

loc_00282971: ;
    ecx = esi;
    PUSH32(esp, 0x00282978u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282978: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x28);
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002829BE; /* jae: above or equal (unsigned >=) */

loc_00282987: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282996; /* je: equal / zero */

loc_0028298E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00282996u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_00282996: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002829A5; /* je: equal / zero */

loc_0028299D: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002829A5u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_002829A5: ;
    ecx = edi * 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002829B4u); RECOMP_ABI_CALL(0x001F7ED0u, sub_001F7ED0); /* call 0x001F7ED0 */

loc_002829B4: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = edi;

loc_002829BE: ;
    MEM32(esi + 0x14) = edi;
    ecx = MEM32(edx + 0x28);
    edi = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002829E7; /* jle: less or equal (signed <=) */

loc_002829CD: ;
    /* nop */

loc_002829D0: ;
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + eax * 4);
    edi = MEM32(esi + 0x10);
    MEM32(edi + eax * 4) = ecx;
    ecx = MEM32(edx + 0x28);
    edi = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002829D0; /* jl: less (signed <) */

loc_002829E7: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    eax = MEM32(ebx + 0x44);
    edi = MEM32(eax + edx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + edi;
    edi = MEM32(edx + ebp * 4);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00282A14; /* jge: greater or equal (signed >=) */

loc_00282A0C: ;
    ecx = eax + 1;
    MEM32(edi + 8) = ecx;
    goto loc_00282A23;

loc_00282A14: ;
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00282A1Fu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00282A1F: ;
    eax = MEM32(esp + 0x10);

loc_00282A23: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(edx + eax * 4) = esi;
    PUSH32(esp, 0x00282A32u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00282A32: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00282A41u); RECOMP_ABI_CALL(0x00281E50u, sub_00281E50); /* call 0x00281E50 */

loc_00282A41: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    esi = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    ecx = MEM32(ebx + 0x10);
    ebp = eax;
    eax = MEM32(ebx + 0x44);
    edi = MEM32(eax + edx * 4);
    edx = MEM32(ecx + 0x10);
    esi = esi + edi;
    edi = MEM32(edx + esi * 4);
    eax = MEM32(edi + 0x1C);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282A7A; /* je: equal / zero */

loc_00282A66: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + edx * 4 + -4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00282A77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00282A77: ;
    esp = esp + 8;

loc_00282A7A: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(edi + 8) = edx;
    PUSH32(esp, 0x00282A8Au); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00282A8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00282AA0
 * Original: 0x00282AA0 - 0x00282BB0 (272 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00282AA0: ;
    SET_LO8(eax, MEM8(0x5BDD58));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00282BAE; /* je: equal / zero */

loc_00282AB2: ;
    ecx = MEM32(0x5BDF20);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282AC7; /* je: equal / zero */

loc_00282ABF: ;
    esi = MEM32(ecx + 8);
    PUSH32(esp, 0x00282AC7u); RECOMP_ABI_CALL(0x00145060u, sub_00145060); /* call 0x00145060 */

loc_00282AC7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = MEM32(0x5BDB64);
    if (TEST_Z(_fa, _fb)) goto loc_00282B42; /* je: equal / zero */

loc_00282AD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282ADF; /* je: equal / zero */

loc_00282AD4: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00282AF1; /* jne: not equal / not zero */

loc_00282ADF: ;
    PUSH32(esp, 0x261930);
    PUSH32(esp, 0x00282AE9u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00282AE9: ;
    eax = MEM32(0x5BDB64);
    esp = esp + 4;

loc_00282AF1: ;
    edx = MEM32(eax + 0x3C);
    MEM32(0x5BDD5C) = edx;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00282B17; /* jne: not equal / not zero */

loc_00282B05: ;
    PUSH32(esp, 0x261930);
    PUSH32(esp, 0x00282B0Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00282B0F: ;
    eax = MEM32(0x5BDB64);
    esp = esp + 4;

loc_00282B17: ;
    MEM32(eax + 0x3C) = 0x260700;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00282B2Au); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00282B2A: ;
    MEM32(esp + 0x10) = eax;
    esp = esp + 4;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x5BDF64;
    PUSH32(esp, 0x00282B40u); RECOMP_ABI_CALL(0x00280FE0u, sub_00280FE0); /* call 0x00280FE0 */

loc_00282B40: ;
    goto loc_00282B97;

loc_00282B42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282B51; /* je: equal / zero */

loc_00282B46: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00282B63; /* jne: not equal / not zero */

loc_00282B51: ;
    PUSH32(esp, 0x261930);
    PUSH32(esp, 0x00282B5Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00282B5B: ;
    eax = MEM32(0x5BDB64);
    esp = esp + 4;

loc_00282B63: ;
    edx = MEM32(0x5BDD5C);
    MEM32(eax + 0x3C) = edx;
    eax = MEM32(0x5BDF64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00282B8D; /* je: equal / zero */

loc_00282B77: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282B8D; /* jne: not equal / not zero */

loc_00282B88: ;
    PUSH32(esp, 0x00282B8Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282B8D: ;
    MEM32(0x5BDF64) = 0;

loc_00282B97: ;
    ecx = MEM32(0x5BDF20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282BA7; /* je: equal / zero */

loc_00282BA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00282BA7u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_00282BA7: ;
    MEM8(0x5BDD58) = LO8(ebx);
    POP32(esp, esi);

loc_00282BAE: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00282BB0
 * Original: 0x00282BB0 - 0x00282BC0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282BB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282BB0: ;
    g_seh_ebp = ebp; sub_00281BA0(); return; /* tail jmp 0x00281BA0 */

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
 * sub_00282BC0
 * Original: 0x00282BC0 - 0x00282C10 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00282BC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00282C0B; /* jne: not equal / not zero */

loc_00282BCA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00282BD0u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00282BD0: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00282BEE; /* je: equal / zero */

loc_00282BD9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282BEE; /* jne: not equal / not zero */

loc_00282BE9: ;
    PUSH32(esp, 0x00282BEEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282BEE: ;
    PUSH32(esp, 0x25F750);
    PUSH32(esp, 0x00282BF8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00282BF8: ;
    ecx = MEM32(0x5BD998);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00282C07u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00282C07: ;
    MEM32(esi + 0x24) = eax;
    POP32(esp, edi);

loc_00282C0B: ;
    eax = MEM32(esi + 0x24);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00282C10
 * Original: 0x00282C10 - 0x00282C78 (104 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00282C10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00282C1Au); RECOMP_ABI_CALL(0x00282BC0u, sub_00282BC0); /* call 0x00282BC0 */

loc_00282C1A: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00282C27; /* je: equal / zero */

loc_00282C24: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00282C27: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282C43; /* je: equal / zero */

loc_00282C2E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282C43; /* jne: not equal / not zero */

loc_00282C3E: ;
    PUSH32(esp, 0x00282C43u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282C43: ;
    PUSH32(esp, 0x259E70);
    eax = esp + 0x14;
    MEM32(esi + 8) = ebx;
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x00282C5Cu); RECOMP_ABI_CALL(0x001E7C00u, sub_001E7C00); /* call 0x001E7C00 */

loc_00282C5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00282C69; /* jne: not equal / not zero */

loc_00282C61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00282C69: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00282C80
 * Original: 0x00282C80 - 0x00282CD1 (81 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00282C80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00282C8Au); RECOMP_ABI_CALL(0x00282BC0u, sub_00282BC0); /* call 0x00282BC0 */

loc_00282C8A: ;
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00282C97; /* je: equal / zero */

loc_00282C94: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00282C97: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282CB3; /* je: equal / zero */

loc_00282C9E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282CB3; /* jne: not equal / not zero */

loc_00282CAE: ;
    PUSH32(esp, 0x00282CB3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282CB3: ;
    PUSH32(esp, 0x259E70);
    MEM32(esi + 8) = ebx;
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00282CC9u); RECOMP_ABI_CALL(0x0024F8A0u, sub_0024F8A0); /* call 0x0024F8A0 */

loc_00282CC9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00282CE0
 * Original: 0x00282CE0 - 0x00282F50 (624 bytes, 230 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282CE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282CE0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, 0x00282CF4u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_00282CF4: ;
    ecx = MEM32(esi + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00282D12; /* je: equal / zero */

loc_00282CFD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282D12; /* jne: not equal / not zero */

loc_00282D0D: ;
    PUSH32(esp, 0x00282D12u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282D12: ;
    MEM32(esi + 0x1C) = edi;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00282D31; /* je: equal / zero */

loc_00282D1C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282D31; /* jne: not equal / not zero */

loc_00282D2C: ;
    PUSH32(esp, 0x00282D31u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282D31: ;
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    MEM32(esi + 0x20) = edi;
    PUSH32(esp, 0x00282D3Du); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_00282D3D: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00282D4Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00282D4B: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00282D54u); RECOMP_ABI_CALL(0x0027DF50u, sub_0027DF50); /* call 0x0027DF50 */

loc_00282D54: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00282D60; /* jne: not equal / not zero */

loc_00282D58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00282D60: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282D6Eu); RECOMP_ABI_CALL(0x001F8320u, sub_001F8320); /* call 0x001F8320 */

loc_00282D6E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00282D78u); RECOMP_ABI_CALL(0x001A42F0u, sub_001A42F0); /* call 0x001A42F0 */

loc_00282D78: ;
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00282D84u); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_00282D84: ;
    ecx = esi;
    PUSH32(esp, 0x00282D8Bu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00282D8B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282D91u); RECOMP_ABI_CALL(0x002209B0u, sub_002209B0); /* call 0x002209B0 */

loc_00282D91: ;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    esp = esp + 4;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x405848);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00282DA9u); RECOMP_ABI_CALL(0x00230E70u, sub_00230E70); /* call 0x00230E70 */

loc_00282DA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00282DEC; /* jne: not equal / not zero */

loc_00282DAD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00282DC8; /* je: equal / zero */

loc_00282DB1: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282DC8; /* jne: not equal / not zero */

loc_00282DC1: ;
    ecx = ebx;
    PUSH32(esp, 0x00282DC8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282DC8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00282DE0; /* je: equal / zero */

loc_00282DCC: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00282DE0; /* jne: not equal / not zero */

loc_00282DD8: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282DE0u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00282DE0: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00282DEC: ;
    ecx = esi;
    PUSH32(esp, 0x00282DF3u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00282DF3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282DF9u); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_00282DF9: ;
    ecx = 0; /* xor self */
    edi = eax;
    MEM32(esp + 0x24) = ecx;
    eax = MEM32(ebx + 8);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00282EFA; /* jle: less or equal (signed <=) */

loc_00282E17: ;
    goto loc_00282E20;

    /* nop */

loc_00282E20: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282E48; /* je: equal / zero */

loc_00282E2E: ;
    edx = MEM32(ebp + -4);
    eax = ebp + -8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edx;
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00282E48; /* jne: not equal / not zero */

loc_00282E40: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282E48u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00282E48: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00282E50u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00282E50: ;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, 5);
    PUSH32(esp, edx);
    PUSH32(esp, 0x405840);
    ecx = edi;
    PUSH32(esp, 0x00282E62u); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_00282E62: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00282E6E; /* jne: not equal / not zero */

loc_00282E69: ;
    eax = MEM32(0x46A3C8);

loc_00282E6E: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282E87u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_00282E87: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282E9A; /* je: equal / zero */

loc_00282E8B: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00282E98u); RECOMP_ABI_CALL(0x0026DC50u, sub_0026DC50); /* call 0x0026DC50 */

loc_00282E98: ;
    goto loc_00282EC5;

loc_00282E9A: ;
    SET_LO8(eax, MEM8(0x5BDFE4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00282EC5; /* jne: not equal / not zero */

loc_00282EA3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x40581C);
    PUSH32(esp, 0x00282EAEu); RECOMP_ABI_CALL(0x001F83B0u, sub_001F83B0); /* call 0x001F83B0 */

loc_00282EAE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00282EB9; /* jne: not equal / not zero */

loc_00282EB6: ;
    /* int3: debug-trap slide byte, stepped over */
    goto loc_00282EC5;

loc_00282EB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00282EC5; /* jne: not equal / not zero */

loc_00282EBE: ;
    MEM8(0x5BDFE4) = 1;

loc_00282EC5: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00282E20; /* jl: less (signed <) */

loc_00282EDA: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282EF6; /* je: equal / zero */

loc_00282EE2: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00282EF6; /* jne: not equal / not zero */

loc_00282EEE: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282EF6u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00282EF6: ;
    ebp = MEM32(esp + 0x14);

loc_00282EFA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282F15; /* je: equal / zero */

loc_00282EFE: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282F15; /* jne: not equal / not zero */

loc_00282F0E: ;
    ecx = edi;
    PUSH32(esp, 0x00282F15u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282F15: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00282F2C; /* jne: not equal / not zero */

loc_00282F25: ;
    ecx = ebx;
    PUSH32(esp, 0x00282F2Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00282F2C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00282F44; /* je: equal / zero */

loc_00282F30: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00282F44; /* jne: not equal / not zero */

loc_00282F3C: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282F44u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00282F44: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00282F50
 * Original: 0x00282F50 - 0x002839CF (2687 bytes, 908 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282F50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282F50: ;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x00282F68u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00282F68: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282F6Eu); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_00282F6E: ;
    esi = MEM32(esp + 0x5C);
    edi = eax;
    eax = MEM32(esi + 8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x00282F8Bu); RECOMP_ABI_CALL(0x00212550u, sub_00212550); /* call 0x00212550 */

loc_00282F8B: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi + 8) = ebp;
    PUSH32(esp, 0x00282F9Au); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00282F9A: ;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4056C4);
    ecx = edi;
    PUSH32(esp, 0x00282FACu); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_00282FAC: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00282FB8; /* jne: not equal / not zero */

loc_00282FB3: ;
    eax = MEM32(0x46A3C8);

loc_00282FB8: ;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00282FD2u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_00282FD2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283102; /* je: equal / zero */

loc_00282FDA: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00282FEAu); RECOMP_ABI_CALL(0x0020A1A0u, sub_0020A1A0); /* call 0x0020A1A0 */

loc_00282FEA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x34) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0028306F; /* je: equal / zero */

loc_00282FF4: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00283003u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00283003: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002830BC; /* jne: not equal / not zero */

loc_0028300B: ;
    ebx = MEM32(esp + 0x48);
    MEM32(ebx) = 0;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028302C; /* jne: not equal / not zero */

loc_00283025: ;
    ecx = esi;
    PUSH32(esp, 0x0028302Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028302C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283048; /* je: equal / zero */

loc_00283034: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00283048; /* jne: not equal / not zero */

loc_00283040: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283048u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00283048: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002839C3; /* jne: not equal / not zero */

loc_0028305C: ;
    ecx = edi;
    PUSH32(esp, 0x00283063u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00283063: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 24; return; /* ret 20 */

loc_0028306F: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + 0x48);
    MEM32(esi) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00283095; /* je: equal / zero */

loc_00283081: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00283095; /* jne: not equal / not zero */

loc_0028308D: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283095u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00283095: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028391C; /* jne: not equal / not zero */

loc_002830A9: ;
    ecx = edi;
    PUSH32(esp, 0x002830B0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002830B0: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 24; return; /* ret 20 */

loc_002830BC: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x002830CAu); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_002830CA: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002830DE; /* je: equal / zero */

loc_002830DB: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002830DE: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0x002830E7u); RECOMP_ABI_CALL(0x00219480u, sub_00219480); /* call 0x00219480 */

loc_002830E7: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002830FE; /* jne: not equal / not zero */

loc_002830F7: ;
    ecx = esi;
    PUSH32(esp, 0x002830FEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002830FE: ;
    ebp = MEM32(esp + 0x1C);

loc_00283102: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0028310Eu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0028310E: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028311A; /* jne: not equal / not zero */

loc_00283115: ;
    eax = MEM32(0x46A3C8);

loc_0028311A: ;
    esi = MEM32(esp + 0x4C);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00283134u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_00283134: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028317E; /* jne: not equal / not zero */

loc_00283138: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4056B0);
    ecx = edi;
    PUSH32(esp, 0x0028314Au); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_0028314A: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = MEM32(0x46A3C8);
    if (TEST_Z(_fa, _fb)) goto loc_00283158; /* je: equal / zero */

loc_00283156: ;
    eax = edi;

loc_00283158: ;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028316Eu); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0028316E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028379F; /* je: equal / zero */

loc_00283176: ;
    ebx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x20);

loc_0028317E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    esi = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_002831D1; /* je: equal / zero */

loc_00283187: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = MEM32(esp + 0x48);
    MEM32(ebx) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_002831AD; /* je: equal / zero */

loc_00283199: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_002831AD; /* jne: not equal / not zero */

loc_002831A5: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002831ADu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_002831AD: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002831C1; /* jne: not equal / not zero */

loc_002831BA: ;
    ecx = edi;
    PUSH32(esp, 0x002831C1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002831C1: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    MEM32(ebp + 4) = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    goto loc_002839BA;

loc_002831D1: ;
    eax = MEM32(0x5BC3C8);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x002831E2u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_002831E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002836E9; /* je: equal / zero */

loc_002831EA: ;
    ecx = ebx;
    PUSH32(esp, 0x002831F1u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002831F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002831F7u); RECOMP_ABI_CALL(0x002209B0u, sub_002209B0); /* call 0x002209B0 */

loc_002831F7: ;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edi + 8);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028320A; /* jne: not equal / not zero */

loc_00283205: ;
    eax = MEM32(0x46A3C8);

loc_0028320A: ;
    esi = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x4C);
    edi = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, 0x00283223u); RECOMP_ABI_CALL(0x00230E70u, sub_00230E70); /* call 0x00230E70 */

loc_00283223: ;
    edx = MEM32(edi + 0x2C);
    ebp = MEM32(esi + 8);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = ebp;
    PUSH32(esp, 0x0028323Cu); RECOMP_ABI_CALL(0x00216E80u, sub_00216E80); /* call 0x00216E80 */

loc_0028323C: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E226C);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0028324Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028324A: ;
    ecx = eax;
    PUSH32(esp, 0x00283251u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_00283251: ;
    ecx = MEM32(esp + 0x18);
    esi = eax;
    edi = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E7404);
    MEM32(esp + 0x38) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00283268u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00283268: ;
    ecx = eax;
    PUSH32(esp, 0x0028326Fu); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_0028326F: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F88A4);
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0028327Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028327F: ;
    ecx = eax;
    PUSH32(esp, 0x00283286u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_00283286: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(esp + 0x18);
    MEM32(edx + ecx) = ebp;
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x28);
    MEM32(ecx + eax) = ebp;
    eax = MEM32(edx + 0x2C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002832B4u); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_002832B4: ;
    eax = MEM32(0x5BC448);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002832C1u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_002832C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028348D; /* je: equal / zero */

loc_002832C9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ecx = MEM32(esi + 8);
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + ecx);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00283695; /* jle: less or equal (signed <=) */

loc_002832E7: ;
    goto loc_002832F0;

    /* nop */

loc_002832F0: ;
    edi = MEM32(esp + 0x24);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028331C; /* je: equal / zero */

loc_00283302: ;
    edx = MEM32(esi + -4);
    eax = esi + -8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edx;
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0028331C; /* jne: not equal / not zero */

loc_00283314: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028331Cu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0028331C: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(edx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028332Bu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0028332B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00283406; /* je: equal / zero */

loc_00283338: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00283341u); RECOMP_ABI_CALL(0x001A42F0u, sub_001A42F0); /* call 0x001A42F0 */

loc_00283341: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0x0028334Au); RECOMP_ABI_CALL(0x00219480u, sub_00219480); /* call 0x00219480 */

loc_0028334A: ;
    eax = MEM32(esp + 0x34);
    ebx = MEM32(eax + 0x34);
    eax = MEM32(ebx + 8);
    ebp = MEM32(esp + 0x30);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x3C) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002833DA; /* jle: less or equal (signed <=) */

loc_00283362: ;
    ecx = MEM32(ebx + 0x10);
    esi = MEM32(ecx + edi * 4);
    edx = MEM32(esp + 0x28);
    ecx = MEM32(edx + 0x1C);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0x00283391u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_00283391: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_002833AB; /* je: equal / zero */

loc_00283399: ;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x002833A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002833A7: ;
    eax = MEM32(esp + 0x1C);

loc_002833AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002833C3; /* je: equal / zero */

loc_002833AF: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_002833C3; /* jne: not equal / not zero */

loc_002833BB: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002833C3u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_002833C3: ;
    ecx = ZX16(MEM16(esi + 0x14));
    ecx = ecx + ebp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x002833D2u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_002833D2: ;
    ebp = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x3C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00283362; /* jl: less (signed <) */

loc_002833DA: ;
    edx = MEM32(esp + 0x34);
    ecx = ZX16(MEM16(edx + 0x14));
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    edx = edx + ecx;
    ecx = MEM32(esp + 0x40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_002832F0; /* jl: less (signed <) */

loc_00283401: ;
    goto loc_00283691;

loc_00283406: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + 0x48);
    MEM32(esi) = 0;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00283432; /* je: equal / zero */

loc_0028341A: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00283432; /* jne: not equal / not zero */

loc_0028342D: ;
    PUSH32(esp, 0x00283432u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00283432: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028344B; /* jne: not equal / not zero */

loc_00283444: ;
    ecx = edi;
    PUSH32(esp, 0x0028344Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028344B: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283467; /* je: equal / zero */

loc_00283453: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00283467; /* jne: not equal / not zero */

loc_0028345F: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283467u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00283467: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028391C; /* jne: not equal / not zero */

loc_0028347C: ;
    PUSH32(esp, 0x00283481u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00283481: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 24; return; /* ret 20 */

loc_0028348D: ;
    edx = MEM32(0x5BC248);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0028349Bu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0028349B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(esi + 8);
    if (TEST_Z(_fa, _fb)) goto loc_002835DA; /* je: equal / zero */

loc_002834A6: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x30) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00283695; /* jle: less or equal (signed <=) */

loc_002834BB: ;
    goto loc_002834C0;

    /* nop */

loc_002834C0: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x10);
    edi = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002834E8; /* je: equal / zero */

loc_002834CE: ;
    edx = MEM32(edi + -4);
    eax = edi + -8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edx;
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_002834E8; /* jne: not equal / not zero */

loc_002834E0: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002834E8u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_002834E8: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002834F9u); RECOMP_ABI_CALL(0x0027F080u, sub_0027F080); /* call 0x0027F080 */

loc_002834F9: ;
    esi = MEM32(esp + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283551; /* je: equal / zero */

loc_00283501: ;
    ecx = MEM32(esp + 0x30);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028350Fu); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0028350F: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00283518u); RECOMP_ABI_CALL(0x001A42F0u, sub_001A42F0); /* call 0x001A42F0 */

loc_00283518: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0x00283521u); RECOMP_ABI_CALL(0x00219480u, sub_00219480); /* call 0x00219480 */

loc_00283521: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00283538; /* jne: not equal / not zero */

loc_00283531: ;
    ecx = esi;
    PUSH32(esp, 0x00283538u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00283538: ;
    ecx = MEM32(esp + 0x30);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_002834C0; /* jl: less (signed <) */

loc_0028354C: ;
    goto loc_00283691;

loc_00283551: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + 0x48);
    MEM32(esi) = 0;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0028357D; /* je: equal / zero */

loc_00283565: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0028357D; /* jne: not equal / not zero */

loc_00283578: ;
    PUSH32(esp, 0x0028357Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028357D: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0x7FFFFF;
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00283598; /* jne: not equal / not zero */

loc_00283593: ;
    PUSH32(esp, 0x00283598u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00283598: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002835B4; /* je: equal / zero */

loc_002835A0: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_002835B4; /* jne: not equal / not zero */

loc_002835AC: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002835B4u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_002835B4: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028391C; /* jne: not equal / not zero */

loc_002835C9: ;
    PUSH32(esp, 0x002835CEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002835CE: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 24; return; /* ret 20 */

loc_002835DA: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + ecx);
    ecx = MEM32(0x5BC374);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x002835F3u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_002835F3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00283691; /* jle: less or equal (signed <=) */

loc_00283601: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(edx + 0x10);
    esi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283629; /* je: equal / zero */

loc_0028360F: ;
    edx = MEM32(esi + -4);
    eax = esi + -8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edx;
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00283629; /* jne: not equal / not zero */

loc_00283621: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283629u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00283629: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283668; /* je: equal / zero */

loc_00283631: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x34); PUSH32(esp, 0x00283634u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00283634: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283668; /* je: equal / zero */

loc_00283638: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x40) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00283652u); RECOMP_ABI_CALL(0x00216780u, sub_00216780); /* call 0x00216780 */

loc_00283652: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00283668; /* jne: not equal / not zero */

loc_0028365C: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = ecx;
    goto loc_0028367A;

loc_00283668: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x0028367Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028367A: ;
    edx = ZX16(MEM16(edi + 0x14));
    ecx = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00283601; /* jl: less (signed <) */

loc_00283691: ;
    eax = MEM32(esp + 0x18);

loc_00283695: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002836A2; /* je: equal / zero */

loc_0028369B: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x18);

loc_002836A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002836C4; /* je: equal / zero */

loc_002836AC: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_002836C4; /* jne: not equal / not zero */

loc_002836BF: ;
    PUSH32(esp, 0x002836C4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002836C4: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(eax + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x7FFFFF (32-bit) */
    MEM32(eax + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028379F; /* jne: not equal / not zero */

loc_002836DD: ;
    ecx = eax;
    PUSH32(esp, 0x002836E4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002836E4: ;
    goto loc_0028379F;

loc_002836E9: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x002836FCu); RECOMP_ABI_CALL(0x0027F080u, sub_0027F080); /* call 0x0027F080 */

loc_002836FC: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028374A; /* jne: not equal / not zero */

loc_00283704: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = MEM32(esp + 0x48);
    MEM32(ebx) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00283726; /* je: equal / zero */

loc_00283712: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00283726; /* jne: not equal / not zero */

loc_0028371E: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283726u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00283726: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002839C3; /* jne: not equal / not zero */

loc_00283737: ;
    ecx = edi;
    PUSH32(esp, 0x0028373Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028373E: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 24; return; /* ret 20 */

loc_0028374A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00283750u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00283750: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00283767; /* jne: not equal / not zero */

loc_00283754: ;
    esi = MEM32(esp + 0x48);
    MEM32(esi) = 0;
    ecx = esp + 0x24;
    goto loc_002838FC;

loc_00283767: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00283775u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_00283775: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    eax = esp;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283789; /* je: equal / zero */

loc_00283786: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00283789: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0x00283792u); RECOMP_ABI_CALL(0x00219480u, sub_00219480); /* call 0x00219480 */

loc_00283792: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0028379Bu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0028379B: ;
    ebp = MEM32(esp + 0x1C);

loc_0028379F: ;
    edx = MEM32(esp + 0x50);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002837AFu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002837AF: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4056A8);
    ecx = esi;
    PUSH32(esp, 0x002837C1u); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_002837C1: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002837CD; /* jne: not equal / not zero */

loc_002837C8: ;
    eax = MEM32(0x46A3C8);

loc_002837CD: ;
    edi = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x4C);
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002837EBu); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_002837EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002837FE; /* je: equal / zero */

loc_002837EF: ;
    ebx = MEM32(esp + 0x48);
    MEM32(ebx) = 0;
    goto loc_00283976;

loc_002837FE: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028380Au); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0028380A: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40569C);
    ecx = esi;
    PUSH32(esp, 0x0028381Cu); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_0028381C: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00283828; /* jne: not equal / not zero */

loc_00283823: ;
    eax = MEM32(0x46A3C8);

loc_00283828: ;
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0028383Eu); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0028383E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283969; /* je: equal / zero */

loc_00283846: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    eax = MEM32(esp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_00283892; /* je: equal / zero */

loc_0028384E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = MEM32(esp + 0x48);
    MEM32(ebx) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00283870; /* je: equal / zero */

loc_0028385C: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00283870; /* jne: not equal / not zero */

loc_00283868: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283870u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00283870: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002839AF; /* jne: not equal / not zero */

loc_00283886: ;
    ecx = esi;
    PUSH32(esp, 0x0028388Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028388D: ;
    goto loc_002839AF;

loc_00283892: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002838A1u); RECOMP_ABI_CALL(0x0027F080u, sub_0027F080); /* call 0x0027F080 */

loc_002838A1: ;
    edi = MEM32(esp + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002838B5; /* jne: not equal / not zero */

loc_002838A9: ;
    esi = MEM32(esp + 0x48);
    MEM32(esi) = 0;
    goto loc_002838F8;

loc_002838B5: ;
    edx = MEM32(0x5BD934);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x002838C3u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_002838C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002838A9; /* je: equal / zero */

loc_002838C7: ;
    eax = MEM32(edi);
    ecx = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x002838D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002838D3: ;
    edx = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002838E1u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_002838E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00283928; /* jne: not equal / not zero */

loc_002838E5: ;
    esi = MEM32(esp + 0x48);
    ecx = esp + 0x50;
    MEM32(esi) = 0;
    PUSH32(esp, 0x002838F8u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002838F8: ;
    ecx = esp + 0x4C;

loc_002838FC: ;
    PUSH32(esp, 0x00283901u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00283901: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0028390Au); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0028390A: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00283913u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00283913: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0028391Cu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0028391C: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 24; return; /* ret 20 */

loc_00283928: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00283936u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_00283936: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    eax = esp;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028394A; /* je: equal / zero */

loc_00283947: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028394A: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0x00283953u); RECOMP_ABI_CALL(0x00219480u, sub_00219480); /* call 0x00219480 */

loc_00283953: ;
    ecx = esp + 0x50;
    PUSH32(esp, 0x0028395Cu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0028395C: ;
    ecx = esp + 0x4C;
    PUSH32(esp, 0x00283965u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00283965: ;
    ebp = MEM32(esp + 0x1C);

loc_00283969: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = MEM32(esp + 0x48);
    MEM32(ebx) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00283976; /* je: equal / zero */

loc_00283973: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00283976: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283992; /* je: equal / zero */

loc_0028397E: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00283992; /* jne: not equal / not zero */

loc_0028398A: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283992u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00283992: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    eax = ecx;
    edi = 0x7FFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002839AB; /* jne: not equal / not zero */

loc_002839A4: ;
    ecx = esi;
    PUSH32(esp, 0x002839ABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002839AB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002839C3; /* je: equal / zero */

loc_002839AF: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 4) = ecx;
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */

loc_002839BA: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002839C3; /* jne: not equal / not zero */

loc_002839BC: ;
    ecx = ebp;
    PUSH32(esp, 0x002839C3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002839C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002839D0
 * Original: 0x002839D0 - 0x00283A33 (99 bytes, 39 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002839D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002839D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002839E5u); RECOMP_ABI_CALL(0x0027F3D0u, sub_0027F3D0); /* call 0x0027F3D0 */

loc_002839E5: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283A2E; /* je: equal / zero */

loc_002839ED: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x002839F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002839F7: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00283A04u); RECOMP_ABI_CALL(0x00259FD0u, sub_00259FD0); /* call 0x00259FD0 */

loc_00283A04: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00283A17u); RECOMP_ABI_CALL(0x00235C40u, sub_00235C40); /* call 0x00235C40 */

loc_00283A17: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00283A2E; /* jne: not equal / not zero */

loc_00283A27: ;
    ecx = esi;
    PUSH32(esp, 0x00283A2Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00283A2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00283A40
 * Original: 0x00283A40 - 0x0028440E (2510 bytes, 852 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00283A40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00283A40: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x60);
    esi = ecx;
    ecx = MEM32(edi + 0x24);
    eax = MEM32(ecx);
    MEM32(esp + 0x3C) = ecx;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00283A59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00283A59: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00283A60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00283A60: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40568C);
    PUSH32(esp, 0x00283A6Fu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_00283A6F: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284402; /* je: equal / zero */

loc_00283A7A: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00283A86u); RECOMP_ABI_CALL(0x0027E210u, sub_0027E210); /* call 0x0027E210 */

loc_00283A86: ;
    ebx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283AA7; /* je: equal / zero */

loc_00283A8E: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00283AA7u); RECOMP_ABI_CALL(0x002839D0u, sub_002839D0); /* call 0x002839D0 */

loc_00283AA7: ;
    edx = MEM32(esi + 0x30);
    edi = MEM32(edx + 0x1C);
    PUSH32(esp, 0x4058AC);
    ecx = edi;
    PUSH32(esp, 0x00283AB9u); RECOMP_ABI_CALL(0x00204450u, sub_00204450); /* call 0x00204450 */

loc_00283AB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00283AC6; /* je: equal / zero */

loc_00283ABE: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00283AC6u); RECOMP_ABI_CALL(0x0020EA70u, sub_0020EA70); /* call 0x0020EA70 */

loc_00283AC6: ;
    eax = MEM32(esp + 0x60);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4058AC);
    ecx = edi;
    PUSH32(esp, 0x00283ADAu); RECOMP_ABI_CALL(0x0021B0A0u, sub_0021B0A0); /* call 0x0021B0A0 */

loc_00283ADA: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40589C);
    PUSH32(esp, ebp);
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0x00283AFCu); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_00283AFC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esp + 0x1C);
    if (TEST_NZ(_fa, _fb)) goto loc_00283B2C; /* jne: not equal / not zero */

loc_00283B04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283B1C; /* je: equal / zero */

loc_00283B08: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00283B1C; /* jne: not equal / not zero */

loc_00283B14: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283B1Cu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00283B1C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028438A; /* je: equal / zero */

loc_00283B24: ;
    eax = ebx + -8;
    goto loc_0028437D;

loc_00283B2C: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283B37u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_00283B37: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00283B88; /* je: equal / zero */

loc_00283B42: ;
    ecx = esi;
    PUSH32(esp, 0x00283B49u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00283B49: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283B4Fu); RECOMP_ABI_CALL(0x002209B0u, sub_002209B0); /* call 0x002209B0 */

loc_00283B4F: ;
    ecx = MEM32(esi + 0x1C);
    esp = esp + 4;
    PUSH32(esp, 0);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x405894);
    PUSH32(esp, ebp);
    MEM32(esp + 0x44) = edi;
    PUSH32(esp, 0x00283B69u); RECOMP_ABI_CALL(0x00230E70u, sub_00230E70); /* call 0x00230E70 */

loc_00283B69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00283B91; /* jne: not equal / not zero */

loc_00283B6D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283B88; /* je: equal / zero */

loc_00283B71: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00283B88; /* jne: not equal / not zero */

loc_00283B81: ;
    ecx = edi;
    PUSH32(esp, 0x00283B88u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00283B88: ;
    eax = MEM32(esp + 0x1C);
    goto loc_00283B04;

loc_00283B91: ;
    ebx = 0; /* xor self */
    ecx = esi;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x64) = ebx;
    PUSH32(esp, 0x00283BA2u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00283BA2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283BA8u); RECOMP_ABI_CALL(0x002209B0u, sub_002209B0); /* call 0x002209B0 */

loc_00283BA8: ;
    esp = esp + 4;
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00283BB6u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00283BB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283BBCu); RECOMP_ABI_CALL(0x002209B0u, sub_002209B0); /* call 0x002209B0 */

loc_00283BBC: ;
    ecx = MEM32(edi + 8);
    esp = esp + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x405888);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebp);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x00283BE3u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_00283BE3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283E11; /* je: equal / zero */

loc_00283BEB: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283BF9u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_00283BF9: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    edi = eax;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x00283C12u); RECOMP_ABI_CALL(0x0027F080u, sub_0027F080); /* call 0x0027F080 */

loc_00283C12: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00283C1F; /* je: equal / zero */

loc_00283C1C: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00283C1F: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, 0x00283C2Du); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_00283C2D: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x00283C36u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00283C36: ;
    ecx = esp + 0x48;
    PUSH32(esp, 0x00283C3Fu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00283C3F: ;
    ecx = esi;
    PUSH32(esp, 0x00283C46u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00283C46: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x00283C58u); RECOMP_ABI_CALL(0x002209D0u, sub_002209D0); /* call 0x002209D0 */

loc_00283C58: ;
    ebx = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4056D8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00283C6Du); RECOMP_ABI_CALL(0x00230E70u, sub_00230E70); /* call 0x00230E70 */

loc_00283C6D: ;
    ecx = esi;
    PUSH32(esp, 0x00283C74u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00283C74: ;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x00283C86u); RECOMP_ABI_CALL(0x0011CE60u, sub_0011CE60); /* call 0x0011CE60 */

loc_00283C86: ;
    ecx = esi;
    PUSH32(esp, 0x00283C8Du); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00283C8D: ;
    MEM32(esp + 0x48) = eax;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x00283C9Fu); RECOMP_ABI_CALL(0x0011CE60u, sub_0011CE60); /* call 0x0011CE60 */

loc_00283C9F: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283DEE; /* je: equal / zero */

loc_00283CAA: ;
    edi = MEM32(esp + 0x30);
    edi = edi;

loc_00283CB0: ;
    ecx = MEM32(ebx + 0x10);
    ebp = MEM32(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283CBC; /* je: equal / zero */

loc_00283CB9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00283CBC: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00283CC4u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00283CC4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283CDD; /* je: equal / zero */

loc_00283CC8: ;
    eax = MEM32(ebp + -4);
    ebp = ebp + 0xFFFFFFF8u;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 4) = eax;
    if ((_fa != 0)) goto loc_00283CDD; /* jne: not equal / not zero */

loc_00283CD4: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00283CDDu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00283CDD: ;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, 6);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4056B0);
    ecx = edi;
    PUSH32(esp, 0x00283CEFu); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_00283CEF: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x00283CFDu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00283CFD: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00283D09; /* jne: not equal / not zero */

loc_00283D04: ;
    eax = MEM32(0x46A3C8);

loc_00283D09: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283D23u); RECOMP_ABI_CALL(0x00230C80u, sub_00230C80); /* call 0x00230C80 */

loc_00283D23: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00283D9E; /* jne: not equal / not zero */

loc_00283D27: ;
    ecx = MEM32(ebx + 0x10);
    ebp = MEM32(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283D33; /* je: equal / zero */

loc_00283D30: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00283D33: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00283D3Bu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00283D3B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283D54; /* je: equal / zero */

loc_00283D3F: ;
    eax = MEM32(ebp + -4);
    ebp = ebp + 0xFFFFFFF8u;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 4) = eax;
    if ((_fa != 0)) goto loc_00283D54; /* jne: not equal / not zero */

loc_00283D4B: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00283D54u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00283D54: ;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, 9);
    PUSH32(esp, edx);
    PUSH32(esp, 0x40569C);
    ecx = edi;
    PUSH32(esp, 0x00283D66u); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_00283D66: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x00283D74u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00283D74: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00283D80; /* jne: not equal / not zero */

loc_00283D7B: ;
    eax = MEM32(0x46A3C8);

loc_00283D80: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283D9Au); RECOMP_ABI_CALL(0x00230C80u, sub_00230C80); /* call 0x00230C80 */

loc_00283D9A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283DDA; /* je: equal / zero */

loc_00283D9E: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00283DAE; /* jne: not equal / not zero */

loc_00283DA9: ;
    eax = MEM32(0x46A3C8);

loc_00283DAE: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283DB7u); RECOMP_ABI_CALL(0x001A42F0u, sub_001A42F0); /* call 0x001A42F0 */

loc_00283DB7: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x00283DC0u); RECOMP_ABI_CALL(0x00219480u, sub_00219480); /* call 0x00219480 */

loc_00283DC0: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00283DD1; /* je: equal / zero */

loc_00283DCE: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00283DD1: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x00283DDAu); RECOMP_ABI_CALL(0x00219480u, sub_00219480); /* call 0x00219480 */

loc_00283DDA: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x00283DE3u); RECOMP_ABI_CALL(0x00212650u, sub_00212650); /* call 0x00212650 */

loc_00283DE3: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00283CB0; /* jne: not equal / not zero */

loc_00283DEE: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x00283DF7u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00283DF7: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00283E00u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00283E00: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00283E09u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00283E09: ;
    ebp = MEM32(esp + 0x64);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00283E2A; /* jne: not equal / not zero */

loc_00283E11: ;
    eax = MEM32(esi + 0x2C);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = esp + 0x68;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x00283E26u); RECOMP_ABI_CALL(0x0025E2A0u, sub_0025E2A0); /* call 0x0025E2A0 */

loc_00283E26: ;
    ebp = MEM32(esp + 0x64);

loc_00283E2A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x405874);
    PUSH32(esp, eax);
    MEM8(esp + 0x58) = 0;
    PUSH32(esp, 0x00283E4Au); RECOMP_ABI_CALL(0x002311C0u, sub_002311C0); /* call 0x002311C0 */

loc_00283E4A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00283E5F; /* je: equal / zero */

loc_00283E4E: ;
    ecx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00283E5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00283E5F: ;
    ecx = MEM32(esp + 0x60);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x00283E6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00283E6C: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00283E7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00283E7A: ;
    ecx = esi;
    PUSH32(esp, 0x00283E81u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00283E81: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283E87u); RECOMP_ABI_CALL(0x002209B0u, sub_002209B0); /* call 0x002209B0 */

loc_00283E87: ;
    edi = eax;
    eax = MEM32(esp + 0x44);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x30) = 0;
    ebx = 0x7FFFFF;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002841D9; /* jle: less or equal (signed <=) */

loc_00283EA9: ;
    /* nop */

loc_00283EB0: ;
    ebp = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00283EC0u); RECOMP_ABI_CALL(0x0026DE00u, sub_0026DE00); /* call 0x0026DE00 */

loc_00283EC0: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(eax + 0x10);
    ebp = MEM32(ecx + ebp * 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00283EEA; /* je: equal / zero */

loc_00283ED0: ;
    edx = MEM32(ebp + -4);
    eax = ebp + -8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edx;
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00283EEA; /* jne: not equal / not zero */

loc_00283EE2: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283EEAu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00283EEA: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00283EF4u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_00283EF4: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002842B9; /* je: equal / zero */

loc_00283EFF: ;
    edx = MEM32(0x5BE69C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x405868);
    PUSH32(esp, ebp);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x00283F29u); RECOMP_ABI_CALL(0x00282F50u, sub_00282F50); /* call 0x00282F50 */

loc_00283F29: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00283F33u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_00283F33: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00283F53; /* je: equal / zero */

loc_00283F3D: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00283F53; /* jne: not equal / not zero */

loc_00283F4E: ;
    PUSH32(esp, 0x00283F53u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00283F53: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284006; /* je: equal / zero */

loc_00283F5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283F65u); RECOMP_ABI_CALL(0x00249100u, sub_00249100); /* call 0x00249100 */

loc_00283F65: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00283F72u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_00283F72: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00283F8Eu); RECOMP_ABI_CALL(0x00259E90u, sub_00259E90); /* call 0x00259E90 */

loc_00283F8E: ;
    ecx = MEM32(0x5BE69C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40585C);
    PUSH32(esp, ebp);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00283FA8u); RECOMP_ABI_CALL(0x00282F50u, sub_00282F50); /* call 0x00282F50 */

loc_00283FA8: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00283FB2u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_00283FB2: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00283FD2; /* je: equal / zero */

loc_00283FBC: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00283FD2; /* jne: not equal / not zero */

loc_00283FCD: ;
    PUSH32(esp, 0x00283FD2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00283FD2: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284396; /* je: equal / zero */

loc_00283FDE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00283FE4u); RECOMP_ABI_CALL(0x00249100u, sub_00249100); /* call 0x00249100 */

loc_00283FE4: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00283FF1u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_00283FF1: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    goto loc_00284087;

loc_00284006: ;
    ecx = MEM32(0x5BE69C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x405848);
    PUSH32(esp, ebp);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00284020u); RECOMP_ABI_CALL(0x00282F50u, sub_00282F50); /* call 0x00282F50 */

loc_00284020: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0028402Au); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0028402A: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0028404A; /* je: equal / zero */

loc_00284034: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028404A; /* jne: not equal / not zero */

loc_00284045: ;
    PUSH32(esp, 0x0028404Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028404A: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284396; /* je: equal / zero */

loc_00284056: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028405Cu); RECOMP_ABI_CALL(0x00249100u, sub_00249100); /* call 0x00249100 */

loc_0028405C: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00284069u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_00284069: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00284077u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_00284077: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);

loc_00284087: ;
    eax = MEM32(esp + 0x74);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00284093u); RECOMP_ABI_CALL(0x00259E90u, sub_00259E90); /* call 0x00259E90 */

loc_00284093: ;
    ecx = MEM32(0x5BD9C0);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x405850);
    PUSH32(esp, ebp);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002840ADu); RECOMP_ABI_CALL(0x00282F50u, sub_00282F50); /* call 0x00282F50 */

loc_002840AD: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x002840B7u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_002840B7: ;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002840D9; /* je: equal / zero */

loc_002840C1: ;
    ebp = MEM32(eax + 4);
    eax = eax + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_002840D9; /* jne: not equal / not zero */

loc_002840D4: ;
    PUSH32(esp, 0x002840D9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002840D9: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284110; /* je: equal / zero */

loc_002840E1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002840E7u); RECOMP_ABI_CALL(0x00249030u, sub_00249030); /* call 0x00249030 */

loc_002840E7: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x002840F4u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_002840F4: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00284110u); RECOMP_ABI_CALL(0x00259E90u, sub_00259E90); /* call 0x00259E90 */

loc_00284110: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x0028411Fu); RECOMP_ABI_CALL(0x0026DB60u, sub_0026DB60); /* call 0x0026DB60 */

loc_0028411F: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00284132u); RECOMP_ABI_CALL(0x0026DBB0u, sub_0026DBB0); /* call 0x0026DBB0 */

loc_00284132: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00284145u); RECOMP_ABI_CALL(0x0026DC00u, sub_0026DC00); /* call 0x0026DC00 */

loc_00284145: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284160; /* je: equal / zero */

loc_00284149: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284160; /* jne: not equal / not zero */

loc_00284159: ;
    ecx = ebp;
    PUSH32(esp, 0x00284160u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284160: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284180; /* je: equal / zero */

loc_00284168: ;
    edx = MEM32(eax + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x7FFFFF (32-bit) */
    MEM32(eax + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284180; /* jne: not equal / not zero */

loc_00284179: ;
    ecx = eax;
    PUSH32(esp, 0x00284180u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284180: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002841A0; /* je: equal / zero */

loc_00284188: ;
    edx = MEM32(eax + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x7FFFFF (32-bit) */
    MEM32(eax + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002841A0; /* jne: not equal / not zero */

loc_00284199: ;
    ecx = eax;
    PUSH32(esp, 0x002841A0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002841A0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002841BB; /* je: equal / zero */

loc_002841A4: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002841BB; /* jne: not equal / not zero */

loc_002841B4: ;
    ecx = ebx;
    PUSH32(esp, 0x002841BBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002841BB: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00283EB0; /* jl: less (signed <) */

loc_002841D0: ;
    ebp = MEM32(esp + 0x64);
    ebx = 0x7FFFFF;

loc_002841D9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = MEM32(esp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_002841F5; /* je: equal / zero */

loc_002841E1: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002841F5; /* jne: not equal / not zero */

loc_002841EE: ;
    ecx = edi;
    PUSH32(esp, 0x002841F5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002841F5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028420D; /* je: equal / zero */

loc_002841F9: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028420D; /* jne: not equal / not zero */

loc_00284206: ;
    ecx = esi;
    PUSH32(esp, 0x0028420Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028420D: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284229; /* je: equal / zero */

loc_00284215: ;
    edx = MEM32(eax + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ecx (32-bit) */
    MEM32(eax + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284229; /* jne: not equal / not zero */

loc_00284222: ;
    ecx = eax;
    PUSH32(esp, 0x00284229u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284229: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284241; /* je: equal / zero */

loc_0028422D: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284241; /* jne: not equal / not zero */

loc_0028423A: ;
    ecx = ebp;
    PUSH32(esp, 0x00284241u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284241: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028425D; /* je: equal / zero */

loc_00284249: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0028425D; /* jne: not equal / not zero */

loc_00284255: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028425Du); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0028425D: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(eax + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ecx (32-bit) */
    MEM32(eax + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284275; /* jne: not equal / not zero */

loc_0028426E: ;
    ecx = eax;
    PUSH32(esp, 0x00284275u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284275: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284291; /* je: equal / zero */

loc_0028427D: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00284291; /* jne: not equal / not zero */

loc_00284289: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00284291u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00284291: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002842AD; /* je: equal / zero */

loc_00284299: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_002842AD; /* jne: not equal / not zero */

loc_002842A5: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002842ADu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_002842AD: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

loc_002842B9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = 0x7FFFFF;
    if (CMP_EQ(_fa, _fb)) goto loc_002842D6; /* je: equal / zero */

loc_002842C2: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002842D6; /* jne: not equal / not zero */

loc_002842CF: ;
    ecx = edi;
    PUSH32(esp, 0x002842D6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002842D6: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002842F0; /* je: equal / zero */

loc_002842DE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002842F0; /* jne: not equal / not zero */

loc_002842EB: ;
    PUSH32(esp, 0x002842F0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002842F0: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028430A; /* je: equal / zero */

loc_002842F8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028430A; /* jne: not equal / not zero */

loc_00284305: ;
    PUSH32(esp, 0x0028430Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028430A: ;
    ecx = MEM32(esp + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284324; /* je: equal / zero */

loc_00284312: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284324; /* jne: not equal / not zero */

loc_0028431F: ;
    PUSH32(esp, 0x00284324u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284324: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284340; /* je: equal / zero */

loc_0028432C: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00284340; /* jne: not equal / not zero */

loc_00284338: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00284340u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00284340: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284356; /* jne: not equal / not zero */

loc_00284351: ;
    PUSH32(esp, 0x00284356u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284356: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284372; /* je: equal / zero */

loc_0028435E: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00284372; /* jne: not equal / not zero */

loc_0028436A: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00284372u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00284372: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028438A; /* je: equal / zero */

loc_0028437A: ;
    eax = eax + 0xFFFFFFF8u;

loc_0028437D: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0028438A; /* jne: not equal / not zero */

loc_00284382: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028438Au); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0028438A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

loc_00284396: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0028439Fu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0028439F: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x002843A8u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002843A8: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x002843B1u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002843B1: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x002843BAu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002843BA: ;
    ecx = esp + 0x48;
    PUSH32(esp, 0x002843C3u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002843C3: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x002843CCu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002843CC: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x002843D5u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002843D5: ;
    ecx = esp + 0x64;
    PUSH32(esp, 0x002843DEu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002843DE: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x002843E7u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_002843E7: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x002843F0u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002843F0: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x002843F9u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_002843F9: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x00284402u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_00284402: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00284410
 * Original: 0x00284410 - 0x002844F7 (231 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284410(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00284410: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x0028441Fu); RECOMP_ABI_CALL(0x0027DE90u, sub_0027DE90); /* call 0x0027DE90 */

loc_0028441F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebp = MEM32(esp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_00284497; /* je: equal / zero */

loc_00284427: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00284432; /* je: equal / zero */

loc_0028442F: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00284432: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0028444E; /* je: equal / zero */

loc_00284439: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028444E; /* jne: not equal / not zero */

loc_00284449: ;
    PUSH32(esp, 0x0028444Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028444E: ;
    ecx = ebp;
    MEM32(esi + 0x30) = edi;
    PUSH32(esp, 0x00284458u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00284458: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00284461; /* je: equal / zero */

loc_0028445E: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00284461: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0028447D; /* je: equal / zero */

loc_00284468: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028447D; /* jne: not equal / not zero */

loc_00284478: ;
    PUSH32(esp, 0x0028447Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028447D: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x0028448Du); RECOMP_ABI_CALL(0x00283A40u, sub_00283A40); /* call 0x00283A40 */

loc_0028448D: ;
    SET_LO8(ebx, LO8(eax));
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002844A9; /* je: equal / zero */

loc_00284497: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x002844A9u); RECOMP_ABI_CALL(0x0025C6C0u, sub_0025C6C0); /* call 0x0025C6C0 */

loc_002844A9: ;
    ecx = MEM32(esi + 0x30);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002844C7; /* je: equal / zero */

loc_002844B2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002844C7; /* jne: not equal / not zero */

loc_002844C2: ;
    PUSH32(esp, 0x002844C7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002844C7: ;
    MEM32(esi + 0x30) = edi;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002844E6; /* je: equal / zero */

loc_002844D1: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002844E6; /* jne: not equal / not zero */

loc_002844E1: ;
    PUSH32(esp, 0x002844E6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002844E6: ;
    MEM32(esi + 0x2C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebp);
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00284500
 * Original: 0x00284500 - 0x002849B1 (1201 bytes, 417 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284500(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00284500: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002849AC; /* je: equal / zero */

loc_00284511: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0x1C;
    if (TEST_NZ(_fa, _fb)) goto loc_002845AB; /* jne: not equal / not zero */

loc_00284522: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00284532u); RECOMP_ABI_CALL(0x00279090u, sub_00279090); /* call 0x00279090 */

loc_00284532: ;
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi) (32-bit) */
    ebx = 0x7FFFFF;
    if (CMP_EQ(_fa, _fb)) goto loc_00284591; /* je: equal / zero */

loc_0028453F: ;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284558; /* je: equal / zero */

loc_00284546: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284558; /* jne: not equal / not zero */

loc_00284553: ;
    PUSH32(esp, 0x00284558u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284558: ;
    PUSH32(esp, 0);
    ecx = ebp + 0x24;
    MEM32(ebp + 0x20) = 0;
    PUSH32(esp, 0x00284569u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_00284569: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp + 0x28) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00284577; /* je: equal / zero */

loc_00284574: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00284577: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028458F; /* je: equal / zero */

loc_0028457D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028458F; /* jne: not equal / not zero */

loc_0028458A: ;
    PUSH32(esp, 0x0028458Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028458F: ;
    MEM32(edi) = esi;

loc_00284591: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002845B0; /* je: equal / zero */

loc_00284595: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002845B0; /* jne: not equal / not zero */

loc_002845A2: ;
    ecx = esi;
    PUSH32(esp, 0x002845A9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002845A9: ;
    goto loc_002845B0;

loc_002845AB: ;
    ebx = 0x7FFFFF;

loc_002845B0: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00284892; /* jne: not equal / not zero */

loc_002845BB: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00284657; /* jne: not equal / not zero */

loc_002845C4: ;
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x002845D4u); RECOMP_ABI_CALL(0x00279090u, sub_00279090); /* call 0x00279090 */

loc_002845D4: ;
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028462E; /* je: equal / zero */

loc_002845DC: ;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002845F5; /* je: equal / zero */

loc_002845E3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002845F5; /* jne: not equal / not zero */

loc_002845F0: ;
    PUSH32(esp, 0x002845F5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002845F5: ;
    PUSH32(esp, 0);
    ecx = ebp + 0x24;
    MEM32(ebp + 0x20) = 0;
    PUSH32(esp, 0x00284606u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_00284606: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp + 0x28) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00284614; /* je: equal / zero */

loc_00284611: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00284614: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028462C; /* je: equal / zero */

loc_0028461A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028462C; /* jne: not equal / not zero */

loc_00284627: ;
    PUSH32(esp, 0x0028462Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028462C: ;
    MEM32(edi) = esi;

loc_0028462E: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028464F; /* je: equal / zero */

loc_00284638: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028464F; /* jne: not equal / not zero */

loc_00284648: ;
    ecx = esi;
    PUSH32(esp, 0x0028464Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028464F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284892; /* je: equal / zero */

loc_00284657: ;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = ebp + 0x20;
    if (TEST_Z(_fa, _fb)) goto loc_00284676; /* je: equal / zero */

loc_00284661: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284676; /* jne: not equal / not zero */

loc_00284671: ;
    PUSH32(esp, 0x00284676u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284676: ;
    ecx = ebp + 0x24;
    PUSH32(esp, 0);
    MEM32(ebx) = 0;
    PUSH32(esp, 0x00284686u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_00284686: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x405680);
    MEM32(ebp + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0028469Bu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0028469B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00284892; /* jl: less (signed <) */

loc_002846A5: ;
    ecx = MEM32(edi);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x405674);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x002846C7u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_002846C7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002846E2; /* jne: not equal / not zero */

loc_002846D5: ;
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x002846E2u); RECOMP_ABI_CALL(0x001A5A10u, sub_001A5A10); /* call 0x001A5A10 */

loc_002846E2: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40566C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002846FBu); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_002846FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00284744; /* jne: not equal / not zero */

loc_002846FF: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028471B; /* je: equal / zero */

loc_00284707: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0028471B; /* jne: not equal / not zero */

loc_00284713: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028471Bu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0028471B: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284892; /* je: equal / zero */

loc_00284727: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00284892; /* jne: not equal / not zero */

loc_00284737: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028473Fu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0028473F: ;
    goto loc_00284892;

loc_00284744: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00284752u); RECOMP_ABI_CALL(0x00269890u, sub_00269890); /* call 0x00269890 */

loc_00284752: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0028475Fu); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0028475F: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00284781; /* je: equal / zero */

loc_00284769: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00284781; /* jne: not equal / not zero */

loc_0028477C: ;
    PUSH32(esp, 0x00284781u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284781: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00284790u); RECOMP_ABI_CALL(0x00269890u, sub_00269890); /* call 0x00269890 */

loc_00284790: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0028479Du); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0028479D: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002847BF; /* je: equal / zero */

loc_002847A7: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_002847BF; /* jne: not equal / not zero */

loc_002847BA: ;
    PUSH32(esp, 0x002847BFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002847BF: ;
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028486E; /* je: equal / zero */

loc_002847CB: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(0x46A3C8);
    ecx = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002847E0; /* je: equal / zero */

loc_002847DE: ;
    ecx = eax;

loc_002847E0: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002847E9; /* jne: not equal / not zero */

loc_002847E7: ;
    eax = edx;

loc_002847E9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002847F0u); RECOMP_ABI_CALL(0x001EB7F0u, sub_001EB7F0); /* call 0x001EB7F0 */

loc_002847F0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00284801; /* jne: not equal / not zero */

loc_002847F7: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x002847FFu); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_002847FF: ;
    goto loc_00284828;

loc_00284801: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00284812u); RECOMP_ABI_CALL(0x00279090u, sub_00279090); /* call 0x00279090 */

loc_00284812: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028481Au); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0028481A: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00284823u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00284823: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028486E; /* je: equal / zero */

loc_00284828: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00284836u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_00284836: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 0x28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00284861; /* jne: not equal / not zero */

loc_0028483E: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284859; /* je: equal / zero */

loc_00284844: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284859; /* jne: not equal / not zero */

loc_00284854: ;
    PUSH32(esp, 0x00284859u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284859: ;
    MEM32(ebx) = 0;
    goto loc_0028486E;

loc_00284861: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebp + 0x24;
    PUSH32(esp, 0x0028486Eu); RECOMP_ABI_CALL(0x001A5A10u, sub_001A5A10); /* call 0x001A5A10 */

loc_0028486E: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00284877u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00284877: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00284880u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00284880: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00284889u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_00284889: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00284892u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_00284892: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0028489Eu); RECOMP_ABI_CALL(0x0027E210u, sub_0027E210); /* call 0x0027E210 */

loc_0028489E: ;
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284912; /* je: equal / zero */

loc_002848A6: ;
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x002848B3u); RECOMP_ABI_CALL(0x0027F3D0u, sub_0027F3D0); /* call 0x0027F3D0 */

loc_002848B3: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002848BC; /* je: equal / zero */

loc_002848B9: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002848BC: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002848DE; /* je: equal / zero */

loc_002848C6: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_002848DE; /* jne: not equal / not zero */

loc_002848D9: ;
    PUSH32(esp, 0x002848DEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002848DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284912; /* je: equal / zero */

loc_002848E2: ;
    ecx = esi;
    PUSH32(esp, 0x002848E9u); RECOMP_ABI_CALL(0x0022F750u, sub_0022F750); /* call 0x0022F750 */

loc_002848E9: ;
    edi = eax;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x002848F3u); RECOMP_ABI_CALL(0x0027F300u, sub_0027F300); /* call 0x0027F300 */

loc_002848F3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002848FBu); RECOMP_ABI_CALL(0x00207210u, sub_00207210); /* call 0x00207210 */

loc_002848FB: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284912; /* jne: not equal / not zero */

loc_0028490B: ;
    ecx = esi;
    PUSH32(esp, 0x00284912u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284912: ;
    ecx = MEM32(ebp + 0x1C);
    edi = 0; /* xor self */
    PUSH32(esp, 0x0028491Cu); RECOMP_ABI_CALL(0x001F8310u, sub_001F8310); /* call 0x001F8310 */

loc_0028491C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00284991; /* jle: less or equal (signed <=) */

loc_00284920: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00284929u); RECOMP_ABI_CALL(0x001F8300u, sub_001F8300); /* call 0x001F8300 */

loc_00284929: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284984; /* je: equal / zero */

loc_0028492F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284984; /* je: equal / zero */

loc_00284936: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284984; /* je: equal / zero */

loc_0028493D: ;
    PUSH32(esp, 0x4056A8);
    PUSH32(esp, 0x00284947u); RECOMP_ABI_CALL(0x001EB780u, sub_001EB780); /* call 0x001EB780 */

loc_00284947: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284984; /* je: equal / zero */

loc_0028494B: ;
    esi = MEM32(esi + 0xC);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028495A; /* jne: not equal / not zero */

loc_00284955: ;
    eax = MEM32(0x46A3C8);

loc_0028495A: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00284967u); RECOMP_ABI_CALL(0x00279330u, sub_00279330); /* call 0x00279330 */

loc_00284967: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284984; /* je: equal / zero */

loc_0028496F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284984; /* jne: not equal / not zero */

loc_0028497F: ;
    PUSH32(esp, 0x00284984u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284984: ;
    ecx = MEM32(ebp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0028498Du); RECOMP_ABI_CALL(0x001F8310u, sub_001F8310); /* call 0x001F8310 */

loc_0028498D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00284920; /* jl: less (signed <) */

loc_00284991: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002849A9; /* je: equal / zero */

loc_00284995: ;
    ecx = MEM32(ebx + -4);
    eax = ebx + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_002849A9; /* jne: not equal / not zero */

loc_002849A1: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002849A9u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_002849A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002849AC: ;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002849C0
 * Original: 0x002849C0 - 0x00284A2C (108 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002849C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002849C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002849C9u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002849C9: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002849E7; /* je: equal / zero */

loc_002849D2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002849E7; /* jne: not equal / not zero */

loc_002849E2: ;
    PUSH32(esp, 0x002849E7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002849E7: ;
    PUSH32(esp, 0x260330);
    PUSH32(esp, 0x002849F1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002849F1: ;
    ecx = MEM32(0x5BDA5C);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00284A00u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00284A00: ;
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(esi + 0x2C);
    MEM8(esi + 0x21) = 0;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    MEM32(ecx + 0x14) = 0;
    POP32(esp, esi);
    if (TEST_S(_fas, _fbs)) goto loc_00284A22; /* jl: less (signed <) */

loc_00284A1A: ;
    MEM32(ecx + 8) = 0;
    esp += 4; return; /* ret */

loc_00284A22: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00284A2Bu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00284A2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00284A30
 * Original: 0x00284A30 - 0x00284B37 (263 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00284A30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00284A41u); RECOMP_ABI_CALL(0x00280EA0u, sub_00280EA0); /* call 0x00280EA0 */

loc_00284A41: ;
    eax = MEM32(0x5BD9C8);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284A58; /* je: equal / zero */

loc_00284A4D: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00284A6A; /* jne: not equal / not zero */

loc_00284A58: ;
    PUSH32(esp, 0x281490);
    PUSH32(esp, 0x00284A62u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00284A62: ;
    eax = MEM32(0x5BD9C8);
    esp = esp + 4;

loc_00284A6A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00284A72u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_00284A72: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284B34; /* je: equal / zero */

loc_00284A7A: ;
    eax = MEM32(0x5BDA90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284A8E; /* je: equal / zero */

loc_00284A83: ;
    edx = MEM32(eax + 0x24);
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00284AA0; /* jne: not equal / not zero */

loc_00284A8E: ;
    PUSH32(esp, 0x286290);
    PUSH32(esp, 0x00284A98u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00284A98: ;
    eax = MEM32(0x5BDA90);
    esp = esp + 4;

loc_00284AA0: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00284AA8u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_00284AA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284ABE; /* je: equal / zero */

loc_00284AAC: ;
    PUSH32(esp, 0x27FA40);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00284AB8u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_00284AB8: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00284ABE: ;
    eax = MEM32(0x5BD8C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284AD2; /* je: equal / zero */

loc_00284AC7: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00284AE4; /* jne: not equal / not zero */

loc_00284AD2: ;
    PUSH32(esp, 0x285C00);
    PUSH32(esp, 0x00284ADCu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00284ADC: ;
    eax = MEM32(0x5BD8C8);
    esp = esp + 4;

loc_00284AE4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00284AECu); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_00284AEC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284B02; /* je: equal / zero */

loc_00284AF0: ;
    PUSH32(esp, 0x27F930);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00284AFCu); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_00284AFC: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00284B02: ;
    PUSH32(esp, 0x00284B07u); RECOMP_ABI_CALL(0x0025E320u, sub_0025E320); /* call 0x0025E320 */

loc_00284B07: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00284B0Fu); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_00284B0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284B25; /* je: equal / zero */

loc_00284B13: ;
    PUSH32(esp, 0x27F8A0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00284B1Fu); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_00284B1F: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00284B25: ;
    PUSH32(esp, 0x2123A0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00284B31u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_00284B31: ;
    esp = esp + 0xC;

loc_00284B34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00284B40
 * Original: 0x00284B40 - 0x00284CF7 (439 bytes, 153 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284B40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00284B40: ;
    esp = esp - 0x50;
    edx = MEM32(esp + 0x5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x68);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00284B5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00284B5F: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00284B68u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00284B68: ;
    eax = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00284B7Au); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_00284B7A: ;
    ecx = MEM32(0x5BA824);
    ecx = MEM32(ecx + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xAC);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = ecx + edx;
    PUSH32(esp, 0x00284B99u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_00284B99: ;
    eax = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284BAB; /* je: equal / zero */

loc_00284BA2: ;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x60) = edx;
    goto loc_00284BAF;

loc_00284BAB: ;
    MEM32(esp + 0x60) = ebx;

loc_00284BAF: ;
    _fa = (uint32_t)(MEM32(esp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x60), ebx (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00284CEF; /* jle: less or equal (signed <=) */

loc_00284BBD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_00284BC0: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x10);
    edi = MEM32(ecx + ebx * 4);
    edx = MEM32(edi);
    ebp = MEM32(0x5BDA30);
    ecx = edi;
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00284BDAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00284BDA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00284BFE; /* jne: not equal / not zero */

loc_00284BDE: ;
    eax = MEM32(esp + 0x70);
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00284BF9u); RECOMP_ABI_CALL(0x00284B40u, sub_00284B40); /* call 0x00284B40 */

loc_00284BF9: ;
    goto loc_00284CDC;

loc_00284BFE: ;
    edi = MEM32(esp + 0x64);
    esi = MEM32(edi + 0x48);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00284C19; /* jl: less (signed <) */

loc_00284C0D: ;
    PUSH32(esp, 0x29FFE0);
    ecx = esi;
    PUSH32(esp, 0x00284C19u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_00284C19: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    edx = eax + 1;
    MEM32(esi + 0x14) = edx;
    esi = MEM32(ecx + eax * 4);
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00284C34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00284C34: ;
    edi = MEM32(edi + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    edx = MEM32(edi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00284C64; /* jge: greater or equal (signed >=) */

loc_00284C5C: ;
    edx = eax + 1;
    MEM32(ebx + 8) = edx;
    goto loc_00284C73;

loc_00284C64: ;
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00284C6Fu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00284C6F: ;
    eax = MEM32(esp + 0x14);

loc_00284C73: ;
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = esi;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00284C82u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00284C82: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00284C90u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_00284C90: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx + eax * 4);
    esi = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    esi = esi + edx;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edx + 0x10);
    ebx = MEM32(eax + esi * 4);
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00284CC4; /* je: equal / zero */

loc_00284CB0: ;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ebx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + edx * 4 + -4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00284CC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00284CC1: ;
    esp = esp + 8;

loc_00284CC4: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(ebx + 8) = edx;
    PUSH32(esp, 0x00284CD4u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00284CD4: ;
    esi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x10);

loc_00284CDC: ;
    eax = MEM32(esp + 0x68);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00284BC0; /* jl: less (signed <) */

loc_00284CED: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00284CEF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00284D00
 * Original: 0x00284D00 - 0x00285039 (825 bytes, 296 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284D00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00284D00: ;
    esp = esp - 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00284DA4; /* jne: not equal / not zero */

loc_00284D16: ;
    PUSH32(esp, 0x00284D1Bu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00284D1B: ;
    PUSH32(esp, 0x25FCD0);
    esi = eax;
    PUSH32(esp, 0x00284D27u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00284D27: ;
    ecx = MEM32(0x5BDA18);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00284D36u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00284D36: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284D3F; /* je: equal / zero */

loc_00284D3C: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00284D3F: ;
    ecx = MEM32(ebx + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284D5B; /* je: equal / zero */

loc_00284D46: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284D5B; /* jne: not equal / not zero */

loc_00284D56: ;
    PUSH32(esp, 0x00284D5Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284D5B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(ebx + 0x48) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00284D79; /* je: equal / zero */

loc_00284D62: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284D79; /* jne: not equal / not zero */

loc_00284D72: ;
    ecx = esi;
    PUSH32(esp, 0x00284D79u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284D79: ;
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(ebx + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00284D85u); RECOMP_ABI_CALL(0x001EA870u, sub_001EA870); /* call 0x001EA870 */

loc_00284D85: ;
    ecx = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284DA1; /* je: equal / zero */

loc_00284D8C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00284DA1; /* jne: not equal / not zero */

loc_00284D9C: ;
    PUSH32(esp, 0x00284DA1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00284DA1: ;
    MEM32(ebx + 0x2C) = edi;

loc_00284DA4: ;
    ecx = MEM32(ebx + 0x48);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00284DAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00284DAF: ;
    eax = MEM32(eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00284F1C; /* je: equal / zero */

loc_00284DC3: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00284DCCu); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_00284DCC: ;
    eax = MEM32(ebx + 0x48);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00284DEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00284DED: ;
    eax = MEM32(ebx + 0x48);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284E01; /* je: equal / zero */

loc_00284DF5: ;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x10) = ecx;
    ebp = ecx;
    goto loc_00284E74;

loc_00284E01: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284E4F; /* je: equal / zero */

loc_00284E09: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284E4F; /* je: equal / zero */

loc_00284E0E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00284E4F; /* je: equal / zero */

loc_00284E13: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00284E22; /* jne: not equal / not zero */

loc_00284E17: ;
    edx = MEM32(eax + 0x2C);
    MEM32(esp + 0x10) = edx;
    ebp = edx;
    goto loc_00284E74;

loc_00284E22: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00284E34; /* jne: not equal / not zero */

loc_00284E27: ;
    eax = MEM32(eax + 0x2C);
    eax = eax << 1;
    MEM32(esp + 0x10) = eax;
    ebp = eax;
    goto loc_00284E74;

loc_00284E34: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00284E47; /* jne: not equal / not zero */

loc_00284E39: ;
    eax = MEM32(eax + 0x2C);
    eax = eax + eax * 2;
    MEM32(esp + 0x10) = eax;
    ebp = eax;
    goto loc_00284E74;

loc_00284E47: ;
    MEM32(esp + 0x10) = edi;
    ebp = edi;
    goto loc_00284E74;

loc_00284E4F: ;
    ecx = MEM32(eax + 0x2C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00284E74; /* jbe: below or equal (unsigned <=) */

loc_00284E58: ;
    eax = MEM32(eax + 0x38);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00284E63u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00284E63: ;
    ebp = ebp + eax;
    eax = MEM32(ebx + 0x48);
    ecx = MEM32(eax + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00284E58; /* jb: below (unsigned <) */

loc_00284E70: ;
    MEM32(esp + 0x10) = ebp;

loc_00284E74: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00284E8D; /* jne: not equal / not zero */

loc_00284E7B: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00284E8Bu); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_00284E8B: ;
    goto loc_00284EAB;

loc_00284E8D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    esi = MEM32(esp + 0x2C);
    if (CMP_BE(_fa, _fb)) goto loc_00284EAB; /* jbe: below or equal (unsigned <=) */

loc_00284E95: ;
    edi = ebp;

loc_00284E97: ;
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00284EA4u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_00284EA4: ;
    esi = esi + MEM32(esp + 0x30);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00284E97; /* jne: not equal / not zero */

loc_00284EAB: ;
    eax = MEM32(ebx + 0x48);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00284EBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00284EBD: ;
    edx = MEM32(ebx + 0x48);
    eax = MEM32(edx + 0x18);
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00284F18; /* jle: less or equal (signed <=) */

loc_00284ED0: ;
    eax = MEM32(eax + 0x10);
    esi = MEM32(eax + ecx * 4);
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00284F06; /* jle: less or equal (signed <=) */

loc_00284EDF: ;
    ebp = 0; /* xor self */

loc_00284EE1: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x7C);
    eax = eax + ebp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00284EF3u); RECOMP_ABI_CALL(0x0023EF60u, sub_0023EF60); /* call 0x0023EF60 */

loc_00284EF3: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00284EE1; /* jl: less (signed <) */

loc_00284EFE: ;
    ebp = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);

loc_00284F06: ;
    edx = MEM32(ebx + 0x48);
    eax = MEM32(edx + 0x18);
    edx = MEM32(eax + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00284ED0; /* jl: less (signed <) */

loc_00284F18: ;
    eax = MEM32(esp + 0x18);

loc_00284F1C: ;
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00285024; /* je: equal / zero */

loc_00284F26: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x00284F2Fu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00284F2F: ;
    eax = MEM32(esp + 0x7C);
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    PUSH32(esp, 0x00284F45u); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_00284F45: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x00284F4Eu); RECOMP_ABI_CALL(0x002423F0u, sub_002423F0); /* call 0x002423F0 */

loc_00284F4E: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00284F57u); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_00284F57: ;
    edx = MEM32(ebx + 0x48);
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x1C) = 0;
    ecx = MEM32(edx + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00284F79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00284F79: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00284F92; /* jne: not equal / not zero */

loc_00284F80: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00284F90u); RECOMP_ABI_CALL(0x0023EF60u, sub_0023EF60); /* call 0x0023EF60 */

loc_00284F90: ;
    goto loc_00284FB4;

loc_00284F92: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    esi = MEM32(esp + 0x2C);
    if (CMP_BE(_fa & _fb, 0)) goto loc_00284FB4; /* jbe: below or equal (unsigned <=) */

loc_00284F9A: ;
    edi = ebp;
    /* nop */

loc_00284FA0: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00284FADu); RECOMP_ABI_CALL(0x0023EF60u, sub_0023EF60); /* call 0x0023EF60 */

loc_00284FAD: ;
    esi = esi + MEM32(esp + 0x30);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00284FA0; /* jne: not equal / not zero */

loc_00284FB4: ;
    eax = MEM32(ebx + 0x48);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00284FC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00284FC6: ;
    edx = MEM32(ebx + 0x48);
    eax = MEM32(edx + 0x20);
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x7C) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00285024; /* jle: less or equal (signed <=) */

loc_00284FD9: ;
    /* nop */

loc_00284FE0: ;
    eax = MEM32(eax + 0x10);
    esi = MEM32(eax + ecx * 4);
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00285012; /* jle: less or equal (signed <=) */

loc_00284FEF: ;
    ebp = 0; /* xor self */

loc_00284FF1: ;
    eax = MEM32(esi + 0x10);
    eax = eax + ebp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00285003u); RECOMP_ABI_CALL(0x0023EF60u, sub_0023EF60); /* call 0x0023EF60 */

loc_00285003: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00284FF1; /* jl: less (signed <) */

loc_0028500E: ;
    ecx = MEM32(esp + 0x7C);

loc_00285012: ;
    edx = MEM32(ebx + 0x48);
    eax = MEM32(edx + 0x20);
    edx = MEM32(eax + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x7C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00284FE0; /* jl: less (signed <) */

loc_00285024: ;
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028502Fu); RECOMP_ABI_CALL(0x0027FD60u, sub_0027FD60); /* call 0x0027FD60 */

loc_0028502F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x68;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00285040
 * Original: 0x00285040 - 0x00285691 (1617 bytes, 580 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00285040: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x54);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x34);
    ebp = ecx;
    ecx = MEM32(ebp + 0x64);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edx = ebp + 0x40;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0028505Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028505C: ;
    ecx = MEM32(ebp + 0x68);
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 0x6D));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0028506Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028506A: ;
    eax = MEM32(0x5BDD80);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    edi = edi + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00285086u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00285086: ;
    eax = MEM32(0x5BDD84);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    edi = edi + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002850A2u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002850A2: ;
    eax = MEM32(0x5BDD88);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    edi = edi + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002850BEu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002850BE: ;
    eax = MEM32(ebp + 0x64);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    edi = edi + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002850D8u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002850D8: ;
    eax = MEM32(0x5BDD90);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    edi = edi + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002850F4u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002850F4: ;
    eax = MEM32(ebp + 0x68);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    edi = edi + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028510Eu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028510E: ;
    eax = MEM32(0x5BDD94);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    edi = edi + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028512Au); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028512A: ;
    eax = MEM32(0x5BDD98);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    edi = edi + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00285146u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00285146: ;
    SET_LO8(eax, MEM8(ebp + 0x6C));
    edx = MEM32(esi + 0x44);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(0x5BDD78);
    if (TEST_NZ(_fa, _fb)) goto loc_0028515A; /* jne: not equal / not zero */

loc_00285155: ;
    eax = MEM32(0x5BDD7C);

loc_0028515A: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028516Eu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028516E: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00285176u); RECOMP_ABI_CALL(0x0025ADF0u, sub_0025ADF0); /* call 0x0025ADF0 */

loc_00285176: ;
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00285322; /* jle: less or equal (signed <=) */

loc_0028518A: ;
    /* nop */

loc_00285190: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edi * 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028519Eu); RECOMP_ABI_CALL(0x002634A0u, sub_002634A0); /* call 0x002634A0 */

loc_0028519E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028530F; /* je: equal / zero */

loc_002851A6: ;
    ecx = MEM32(ebp + 0x2C);
    edx = MEM32(ecx + 0x10);
    edi = MEM32(edx + edi * 4);
    eax = ebx + 0xA4;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002851C0u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_002851C0: ;
    esp = esp + 8;
    edi = edi + 0xC;
    edx = esp + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = edx;
    PUSH32(esp, 0x002851D3u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_002851D3: ;
    eax = ebx + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002851E1u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_002851E1: ;
    edx = MEM32(0x5BE578);
    eax = MEM32(edx + 8);
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0028520C; /* jl: less (signed <) */

loc_00285200: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4);
    MEM32(esp + 0x10) = eax;
    goto loc_00285227;

loc_0028520C: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00285220; /* je: equal / zero */

loc_00285213: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4 + -4);
    MEM32(esp + 0x10) = eax;
    goto loc_00285227;

loc_00285220: ;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x10) = ecx;

loc_00285227: ;
    edi = MEM32(ebx + 0x60);
    edx = MEM32(edi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028523E; /* jl: less (signed <) */

loc_00285232: ;
    PUSH32(esp, 0x296140);
    ecx = edi;
    PUSH32(esp, 0x0028523Eu); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0028523E: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x10);
    ecx = eax + 1;
    MEM32(edi + 0x14) = ecx;
    edi = MEM32(edx + eax * 4);
    eax = MEM32(esp + 0x10);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi + 0xC;
    PUSH32(esp, 0x00285262u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_00285262: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 8);
    ecx = MEM32(esi + 0x44);
    ebx = MEM32(ecx + edx * 4);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + 0x10);
    eax = eax + ebx;
    ebx = MEM32(ecx + eax * 4);
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00285293; /* jge: greater or equal (signed >=) */

loc_0028528B: ;
    edx = ecx + 1;
    MEM32(ebx + 8) = edx;
    goto loc_002852A6;

loc_00285293: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0028529Eu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028529E: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);

loc_002852A6: ;
    edx = MEM32(ebx + 0x10);
    PUSH32(esp, eax);
    MEM32(edx + ecx * 4) = edi;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002852B5u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_002852B5: ;
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002852C0u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_002852C0: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    ebx = MEM32(edx + ecx * 4);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    edi = edi + ebx;
    ebx = MEM32(ecx + edi * 4);
    eax = MEM32(ebx + 0x1C);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002852F7; /* je: equal / zero */

loc_002852E3: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(ebx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002852F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002852F4: ;
    esp = esp + 8;

loc_002852F7: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(ebx + 8) = edx;
    PUSH32(esp, 0x00285307u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00285307: ;
    ebx = MEM32(esp + 0x60);
    edi = MEM32(esp + 0x14);

loc_0028530F: ;
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(eax + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00285190; /* jl: less (signed <) */

loc_00285322: ;
    SET_LO8(eax, MEM8(ebp + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00285353; /* je: equal / zero */

loc_00285329: ;
    eax = MEM32(0x5BDD78);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    edi = MEM32(ecx + edx * 4);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + 0x10);
    ebx = ebx + edi;
    edi = MEM32(ecx + ebx * 4);
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + edx * 4 + -4);
    goto loc_0028537B;

loc_00285353: ;
    eax = MEM32(0x5BDD7C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebx = ebx + edi;
    edi = MEM32(edx + ebx * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);

loc_0028537B: ;
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00285390; /* je: equal / zero */

loc_00285382: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00285390; /* jne: not equal / not zero */

loc_00285386: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028538Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028538D: ;
    esp = esp + 8;

loc_00285390: ;
    edx = MEM32(edi + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 8) = edx;
    ecx = MEM32(edi + 0x18);
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002853A7; /* jne: not equal / not zero */

loc_002853A0: ;
    MEM32(edi + 0x18) = 0xFFFFFFFFu;

loc_002853A7: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002853B0u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_002853B0: ;
    eax = MEM32(0x5BDD98);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebx = ebx + edi;
    edi = MEM32(edx + ebx * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002853ED; /* je: equal / zero */

loc_002853DF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002853ED; /* jne: not equal / not zero */

loc_002853E3: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x002853EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002853EA: ;
    esp = esp + 8;

loc_002853ED: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00285404; /* jne: not equal / not zero */

loc_002853FD: ;
    MEM32(edi + 0x18) = 0xFFFFFFFFu;

loc_00285404: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028540Du); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028540D: ;
    eax = MEM32(0x5BDD94);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebx = ebx + edi;
    edi = MEM32(edx + ebx * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028544A; /* je: equal / zero */

loc_0028543C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028544A; /* jne: not equal / not zero */

loc_00285440: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00285447u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00285447: ;
    esp = esp + 8;

loc_0028544A: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00285461; /* jne: not equal / not zero */

loc_0028545A: ;
    MEM32(edi + 0x18) = 0xFFFFFFFFu;

loc_00285461: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028546Au); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028546A: ;
    eax = MEM32(ebp + 0x68);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebx = ebx + edi;
    edi = MEM32(edx + ebx * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002854A5; /* je: equal / zero */

loc_00285497: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002854A5; /* jne: not equal / not zero */

loc_0028549B: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x002854A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002854A2: ;
    esp = esp + 8;

loc_002854A5: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002854BC; /* jne: not equal / not zero */

loc_002854B5: ;
    MEM32(edi + 0x18) = 0xFFFFFFFFu;

loc_002854BC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002854C5u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_002854C5: ;
    eax = MEM32(0x5BDD90);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebx = ebx + edi;
    edi = MEM32(edx + ebx * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00285502; /* je: equal / zero */

loc_002854F4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00285502; /* jne: not equal / not zero */

loc_002854F8: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x002854FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002854FF: ;
    esp = esp + 8;

loc_00285502: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00285519; /* jne: not equal / not zero */

loc_00285512: ;
    MEM32(edi + 0x18) = 0xFFFFFFFFu;

loc_00285519: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00285522u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00285522: ;
    eax = MEM32(ebp + 0x64);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + edi;
    edi = MEM32(edx + ebp * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028555D; /* je: equal / zero */

loc_0028554F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028555D; /* jne: not equal / not zero */

loc_00285553: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028555Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028555A: ;
    esp = esp + 8;

loc_0028555D: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00285573; /* jne: not equal / not zero */

loc_00285570: ;
    MEM32(edi + 0x18) = ebx;

loc_00285573: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028557Cu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028557C: ;
    eax = MEM32(0x5BDD88);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + edi;
    edi = MEM32(edx + ebp * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002855B9; /* je: equal / zero */

loc_002855AB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002855B9; /* jne: not equal / not zero */

loc_002855AF: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x002855B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002855B6: ;
    esp = esp + 8;

loc_002855B9: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002855CC; /* jne: not equal / not zero */

loc_002855C9: ;
    MEM32(edi + 0x18) = ebx;

loc_002855CC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002855D5u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_002855D5: ;
    eax = MEM32(0x5BDD84);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + edi;
    edi = MEM32(edx + ebp * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00285612; /* je: equal / zero */

loc_00285604: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00285612; /* jne: not equal / not zero */

loc_00285608: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028560Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028560F: ;
    esp = esp + 8;

loc_00285612: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00285625; /* jne: not equal / not zero */

loc_00285622: ;
    MEM32(edi + 0x18) = ebx;

loc_00285625: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028562Eu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028562E: ;
    eax = MEM32(0x5BDD80);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + edi;
    edi = MEM32(edx + ebp * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028566B; /* je: equal / zero */

loc_0028565D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028566B; /* jne: not equal / not zero */

loc_00285661: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00285668u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00285668: ;
    esp = esp + 8;

loc_0028566B: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028567E; /* jne: not equal / not zero */

loc_0028567B: ;
    MEM32(edi + 0x18) = ebx;

loc_0028567E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00285687u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00285687: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002856A0
 * Original: 0x002856A0 - 0x00285866 (454 bytes, 149 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002856A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002856A0: ;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xCC);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x002856C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002856C0: ;
    ecx = MEM32(edi + 0x90);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002856CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002856CD: ;
    eax = MEM32(0x5BDDA4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002856E9u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002856E9: ;
    eax = MEM32(edi + 0xCC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00285706u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00285706: ;
    eax = MEM32(0x5BDDE0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00285722u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00285722: ;
    eax = MEM32(0x5BDDE8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028573Eu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028573E: ;
    eax = MEM32(edi + 0x90);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028575Bu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028575B: ;
    eax = MEM32(0x5BDDF0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00285777u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00285777: ;
    eax = MEM32(0x5BDDA0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00285784u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_00285784: ;
    ecx = MEM32(0x5BDDF8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00285792u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_00285792: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0028579Au); RECOMP_ABI_CALL(0x00280300u, sub_00280300); /* call 0x00280300 */

loc_0028579A: ;
    edx = MEM32(0x5BDDF8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002857A8u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_002857A8: ;
    eax = MEM32(0x5BDDA0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002857B5u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_002857B5: ;
    eax = MEM32(0x5BDDF0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002857D1u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_002857D1: ;
    eax = MEM32(edi + 0x90);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002857EEu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_002857EE: ;
    eax = MEM32(0x5BDDE8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028580Au); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028580A: ;
    eax = MEM32(0x5BDDE0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00285826u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00285826: ;
    edi = MEM32(edi + 0xCC);
    eax = (uint32_t)(int32_t)SMEM16(edi + 8);
    ecx = MEM32(esi + 0x44);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    edx = edx + MEM32(ecx + eax * 4);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00285843u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00285843: ;
    eax = MEM32(0x5BDDA4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028585Fu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028585F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00285870
 * Original: 0x00285870 - 0x00285A96 (550 bytes, 183 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00285870: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    SET_LO8(ecx, MEM8(ebx + 0x94));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x34);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0028588F; /* je: equal / zero */

loc_00285887: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028588Fu); RECOMP_ABI_CALL(0x00280300u, sub_00280300); /* call 0x00280300 */

loc_0028588F: ;
    eax = MEM32(0x5BDDA0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002858ABu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002858AB: ;
    edi = MEM32(esp + 0x18);
    eax = (uint32_t)(int32_t)SMEM16(edi + 8);
    ecx = MEM32(esi + 0x44);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    edx = edx + MEM32(ecx + eax * 4);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002858C6u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002858C6: ;
    eax = MEM32(0x5BDDDC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002858E2u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002858E2: ;
    eax = MEM32(0x5BDDE4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002858FEu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002858FE: ;
    eax = MEM32(ebx + 0x90);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028591Bu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028591B: ;
    eax = MEM32(0x5BDDEC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00285937u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00285937: ;
    eax = MEM32(0x5BDDB4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00285953u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00285953: ;
    eax = MEM32(0x5BDDAC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028596Fu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028596F: ;
    eax = MEM32(0x5BDDF4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028598Bu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028598B: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00285997u); RECOMP_ABI_CALL(0x00280300u, sub_00280300); /* call 0x00280300 */

loc_00285997: ;
    eax = MEM32(0x5BDDF4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002859B3u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_002859B3: ;
    eax = MEM32(0x5BDDAC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002859CFu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_002859CF: ;
    eax = MEM32(0x5BDDB4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002859EBu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_002859EB: ;
    eax = MEM32(0x5BDDEC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00285A07u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00285A07: ;
    eax = MEM32(ebx + 0x90);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00285A24u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00285A24: ;
    eax = MEM32(0x5BDDE4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00285A40u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00285A40: ;
    eax = MEM32(0x5BDDDC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00285A5Cu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00285A5C: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 8);
    ecx = MEM32(esi + 0x44);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    edx = edx + MEM32(ecx + eax * 4);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00285A73u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00285A73: ;
    eax = MEM32(0x5BDDA0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00285A8Fu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00285A8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00285AA0
 * Original: 0x00285AA0 - 0x00285B3B (155 bytes, 50 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285AA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x27B1D0);
    PUSH32(esp, 0x00285AACu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00285AAC: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00285AB7u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00285AB7: ;
    PUSH32(esp, 0x2874F0);
    esi = eax;
    PUSH32(esp, 0x00285AC3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00285AC3: ;
    ecx = MEM32(0x5BD930);
    esp = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00285AD2u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00285AD2: ;
    esi = eax;
    PUSH32(esp, 0x401664);
    ecx = esi;
    PUSH32(esp, 0x00285AE0u); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_00285AE0: ;
    PUSH32(esp, 0x3ED140);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC50C);
    PUSH32(esp, 0x00285AF5u); RECOMP_ABI_CALL(0x00237F20u, sub_00237F20); /* call 0x00237F20 */

loc_00285AF5: ;
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00285AFDu); RECOMP_ABI_CALL(0x00207060u, sub_00207060); /* call 0x00207060 */

loc_00285AFD: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00285B1D; /* je: equal / zero */

loc_00285B07: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00285B1D; /* jne: not equal / not zero */

loc_00285B18: ;
    PUSH32(esp, 0x00285B1Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00285B1D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00285B38; /* je: equal / zero */

loc_00285B21: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00285B38; /* jne: not equal / not zero */

loc_00285B31: ;
    ecx = esi;
    PUSH32(esp, 0x00285B38u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00285B38: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00285B40
 * Original: 0x00285B40 - 0x00285B55 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285B40(void)
{

loc_00285B40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BDED0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00285B51u); RECOMP_ABI_CALL(0x00280EA0u, sub_00280EA0); /* call 0x00280EA0 */

loc_00285B51: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00285B60
 * Original: 0x00285B60 - 0x00285BA4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285B60: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285B70; /* jne: not equal / not zero */

loc_00285B69: ;
    MEM8(0x5BDF6C) = 1;

loc_00285B70: ;
    PUSH32(esp, 0x471298);
    PUSH32(esp, 0);
    PUSH32(esp, 0x251A90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x4058C0);
    PUSH32(esp, 0x24FA10);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BD888);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00285BA0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285BA0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285BB0
 * Original: 0x00285BB0 - 0x00285BF7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285BB0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285BC0; /* jne: not equal / not zero */

loc_00285BB9: ;
    MEM8(0x5BDF6C) = 1;

loc_00285BC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249320);
    PUSH32(esp, 0x281090);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x4058CC);
    PUSH32(esp, 0x24FD60);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BD8B0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285BF3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285BF3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285C00
 * Original: 0x00285C00 - 0x00285C47 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285C00: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285C10; /* jne: not equal / not zero */

loc_00285C09: ;
    MEM8(0x5BDF6C) = 1;

loc_00285C10: ;
    PUSH32(esp, 0x4712A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25EF00);
    PUSH32(esp, 0x27AE40);
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x4058E0);
    PUSH32(esp, 0x24FD90);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BD8C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285C43u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285C43: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285C50
 * Original: 0x00285C50 - 0x00285C97 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285C50: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285C60; /* jne: not equal / not zero */

loc_00285C59: ;
    MEM8(0x5BDF6C) = 1;

loc_00285C60: ;
    PUSH32(esp, 0x4712AC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x251FA0);
    PUSH32(esp, 0x27AF00);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x4058EC);
    PUSH32(esp, 0x24FEE0);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BD8D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285C93u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285C93: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285CA0
 * Original: 0x00285CA0 - 0x00285CE7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285CA0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285CB0; /* jne: not equal / not zero */

loc_00285CA9: ;
    MEM8(0x5BDF6C) = 1;

loc_00285CB0: ;
    PUSH32(esp, 0x4712B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x252210);
    PUSH32(esp, 0x27AF60);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x4058FC);
    PUSH32(esp, 0x24FF40);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BD8E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285CE3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285CE3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285CF0
 * Original: 0x00285CF0 - 0x00285CFC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285CF0(void)
{

loc_00285CF0: ;
    PUSH32(esp, 0x281200);
    PUSH32(esp, 0x00285CFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00285CFA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00285D00
 * Original: 0x00285D00 - 0x00285D47 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285D00: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285D10; /* jne: not equal / not zero */

loc_00285D09: ;
    MEM8(0x5BDF6C) = 1;

loc_00285D10: ;
    PUSH32(esp, 0x4712BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x252AA0);
    PUSH32(esp, 0x274800);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x405908);
    PUSH32(esp, 0x250510);
    PUSH32(esp, 0x249200);
    PUSH32(esp, 0x256A20);
    PUSH32(esp, 0x5BD918);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285D43u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285D43: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285D50
 * Original: 0x00285D50 - 0x00285D91 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285D50: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285D60; /* jne: not equal / not zero */

loc_00285D59: ;
    MEM8(0x5BDF6C) = 1;

loc_00285D60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x281270);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x405914);
    PUSH32(esp, 0x250570);
    PUSH32(esp, 0x147AF0);
    PUSH32(esp, 0x285B60);
    PUSH32(esp, 0x5BD924);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285D8Du); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285D8D: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285DA0
 * Original: 0x00285DA0 - 0x00285DA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285DA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00285DA0: ;
    g_seh_ebp = ebp; sub_00285AA0(); return; /* tail jmp 0x00285AA0 */

}

/**
 * sub_00285DB0
 * Original: 0x00285DB0 - 0x00285DF1 (65 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285DB0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285DC0; /* jne: not equal / not zero */

loc_00285DB9: ;
    MEM8(0x5BDF6C) = 1;

loc_00285DC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2497C0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x405928);
    PUSH32(esp, 0x2505A0);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BD948);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00285DEDu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285DED: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285E00
 * Original: 0x00285E00 - 0x00285E47 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285E00: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285E10; /* jne: not equal / not zero */

loc_00285E09: ;
    MEM8(0x5BDF6C) = 1;

loc_00285E10: ;
    PUSH32(esp, 0x4712C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x252E00);
    PUSH32(esp, 0x27B220);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x405934);
    PUSH32(esp, 0x2506F0);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BD950);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285E43u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285E43: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285E50
 * Original: 0x00285E50 - 0x00285E9A (74 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285E50: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285E60; /* jne: not equal / not zero */

loc_00285E59: ;
    MEM8(0x5BDF6C) = 1;

loc_00285E60: ;
    PUSH32(esp, 0x4712D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x252F10);
    PUSH32(esp, 0x27B410);
    PUSH32(esp, 0xE8);
    PUSH32(esp, 0x405940);
    PUSH32(esp, 0x250720);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BD980);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285E96u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285E96: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285EA0
 * Original: 0x00285EA0 - 0x00285EE1 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285EA0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285EB0; /* jne: not equal / not zero */

loc_00285EA9: ;
    MEM8(0x5BDF6C) = 1;

loc_00285EB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x27B450);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x405954);
    PUSH32(esp, 0x250750);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BD984);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285EDDu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285EDD: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285EF0
 * Original: 0x00285EF0 - 0x00285F31 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285EF0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285F00; /* jne: not equal / not zero */

loc_00285EF9: ;
    MEM8(0x5BDF6C) = 1;

loc_00285F00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x27B740);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x405960);
    PUSH32(esp, 0x250900);
    PUSH32(esp, 0x19C360);
    PUSH32(esp, 0x281860);
    PUSH32(esp, 0x5BD9AC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285F2Du); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285F2D: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285F40
 * Original: 0x00285F40 - 0x00285F4C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285F40(void)
{

loc_00285F40: ;
    PUSH32(esp, 0x281420);
    PUSH32(esp, 0x00285F4Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00285F4A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00285F50
 * Original: 0x00285F50 - 0x00285F97 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285F50: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285F60; /* jne: not equal / not zero */

loc_00285F59: ;
    MEM8(0x5BDF6C) = 1;

loc_00285F60: ;
    PUSH32(esp, 0x47131C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249A40);
    PUSH32(esp, 0x27B820);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x405974);
    PUSH32(esp, 0x250960);
    PUSH32(esp, 0x274960);
    PUSH32(esp, 0x285E00);
    PUSH32(esp, 0x5BD9CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285F93u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285F93: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285FA0
 * Original: 0x00285FA0 - 0x00285FE4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285FA0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00285FB0; /* jne: not equal / not zero */

loc_00285FA9: ;
    MEM8(0x5BDF6C) = 1;

loc_00285FB0: ;
    PUSH32(esp, 0x471324);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2757A0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40598C);
    PUSH32(esp, 0x250B10);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD9D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00285FE0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00285FE0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00285FF0
 * Original: 0x00285FF0 - 0x00286037 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00285FF0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286000; /* jne: not equal / not zero */

loc_00285FF9: ;
    MEM8(0x5BDF6C) = 1;

loc_00286000: ;
    PUSH32(esp, 0x47132C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2545C0);
    PUSH32(esp, 0x25FB90);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x405998);
    PUSH32(esp, 0x250C60);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDA04);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00286033u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00286033: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00286040
 * Original: 0x00286040 - 0x00286084 (68 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286040: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286050; /* jne: not equal / not zero */

loc_00286049: ;
    MEM8(0x5BDF6C) = 1;

loc_00286050: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249FF0);
    PUSH32(esp, 0x27BAE0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x4059A8);
    PUSH32(esp, 0x250CC0);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BDA20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00286080u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00286080: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00286090
 * Original: 0x00286090 - 0x002860D7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286090: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002860A0; /* jne: not equal / not zero */

loc_00286099: ;
    MEM8(0x5BDF6C) = 1;

loc_002860A0: ;
    PUSH32(esp, 0x471338);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2549E0);
    PUSH32(esp, 0x27BB30);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x4059C4);
    PUSH32(esp, 0x250D20);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BDA24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002860D3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002860D3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002860E0
 * Original: 0x002860E0 - 0x00286127 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002860E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002860E0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002860F0; /* jne: not equal / not zero */

loc_002860E9: ;
    MEM8(0x5BDF6C) = 1;

loc_002860F0: ;
    PUSH32(esp, 0x471344);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24A070);
    PUSH32(esp, 0x27BB90);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x4059CC);
    PUSH32(esp, 0x250D50);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BDA28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00286123u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00286123: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00286130
 * Original: 0x00286130 - 0x0028617A (74 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286130: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286140; /* jne: not equal / not zero */

loc_00286139: ;
    MEM8(0x5BDF6C) = 1;

loc_00286140: ;
    PUSH32(esp, 0x47134C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24A130);
    PUSH32(esp, 0x27BBE0);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x4059DC);
    PUSH32(esp, 0x2891A0);
    PUSH32(esp, 0x2745B0);
    PUSH32(esp, 0x285C00);
    PUSH32(esp, 0x5BDA30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00286176u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00286176: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00286180
 * Original: 0x00286180 - 0x002861C7 (71 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286180: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286190; /* jne: not equal / not zero */

loc_00286189: ;
    MEM8(0x5BDF6C) = 1;

loc_00286190: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25FD80);
    PUSH32(esp, 0x27BC60);
    PUSH32(esp, 0x170);
    PUSH32(esp, 0x4059E4);
    PUSH32(esp, 0x251050);
    PUSH32(esp, 0x275B10);
    PUSH32(esp, 0x286130);
    PUSH32(esp, 0x5BDA40);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002861C3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002861C3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002861D0
 * Original: 0x002861D0 - 0x00286217 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002861D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002861D0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002861E0; /* jne: not equal / not zero */

loc_002861D9: ;
    MEM8(0x5BDF6C) = 1;

loc_002861E0: ;
    PUSH32(esp, 0x471354);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24A5E0);
    PUSH32(esp, 0x27BD70);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x405A00);
    PUSH32(esp, 0x2511D0);
    PUSH32(esp, 0x147AF0);
    PUSH32(esp, 0x285B60);
    PUSH32(esp, 0x5BDA7C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00286213u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00286213: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00286220
 * Original: 0x00286220 - 0x00286264 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286220: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286230; /* jne: not equal / not zero */

loc_00286229: ;
    MEM8(0x5BDF6C) = 1;

loc_00286230: ;
    PUSH32(esp, 0x47135C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x275F00);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405A14);
    PUSH32(esp, 0x251230);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDA84);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00286260u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00286260: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00286270
 * Original: 0x00286270 - 0x0028628E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286270(void)
{

loc_00286270: ;
    PUSH32(esp, 0x27BDC0);
    PUSH32(esp, 0x0028627Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028627A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDA88);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028628Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028628D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00286290
 * Original: 0x00286290 - 0x002862DA (74 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286290: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002862A0; /* jne: not equal / not zero */

loc_00286299: ;
    MEM8(0x5BDF6C) = 1;

loc_002862A0: ;
    PUSH32(esp, 0x471364);
    PUSH32(esp, 0x260490);
    PUSH32(esp, 0x24A6D0);
    PUSH32(esp, 0x275F30);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x405A24);
    PUSH32(esp, 0x2501B0);
    PUSH32(esp, 0x19C360);
    PUSH32(esp, 0x281860);
    PUSH32(esp, 0x5BDA90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002862D6u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002862D6: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002862E0
 * Original: 0x002862E0 - 0x002862E9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002862E0(void)
{

loc_002862E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002862E7u); RECOMP_ABI_CALL(0x00282AA0u, sub_00282AA0); /* call 0x00282AA0 */

loc_002862E7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002862F0
 * Original: 0x002862F0 - 0x002862F9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002862F0(void)
{

loc_002862F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002862F7u); RECOMP_ABI_CALL(0x00282AA0u, sub_00282AA0); /* call 0x00282AA0 */

loc_002862F7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00286300
 * Original: 0x00286300 - 0x0028630C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286300(void)
{

loc_00286300: ;
    PUSH32(esp, 0x281750);
    PUSH32(esp, 0x0028630Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028630A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00286310
 * Original: 0x00286310 - 0x00286357 (71 bytes, 18 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286310: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286320; /* jne: not equal / not zero */

loc_00286319: ;
    MEM8(0x5BDF6C) = 1;

loc_00286320: ;
    PUSH32(esp, 0x47136C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24AD90);
    PUSH32(esp, 0x27C030);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x405A30);
    PUSH32(esp, 0x2516B0);
    PUSH32(esp, 0x2614D0);
    PUSH32(esp, 0x2817C0);
    PUSH32(esp, 0x5BDB00);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00286353u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00286353: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00286360
 * Original: 0x00286360 - 0x002863AA (74 bytes, 18 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286360: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286370; /* jne: not equal / not zero */

loc_00286369: ;
    MEM8(0x5BDF6C) = 1;

loc_00286370: ;
    PUSH32(esp, 0x471374);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24AF50);
    PUSH32(esp, 0x27C0E0);
    PUSH32(esp, 0xAC);
    PUSH32(esp, 0x405A3C);
    PUSH32(esp, 0x250390);
    PUSH32(esp, 0x19C360);
    PUSH32(esp, 0x281860);
    PUSH32(esp, 0x5BDB14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002863A6u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002863A6: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002863B0
 * Original: 0x002863B0 - 0x002863F7 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002863B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002863B0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002863C0; /* jne: not equal / not zero */

loc_002863B9: ;
    MEM8(0x5BDF6C) = 1;

loc_002863C0: ;
    PUSH32(esp, 0x47137C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24B020);
    PUSH32(esp, 0x276A10);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x405A50);
    PUSH32(esp, 0x250090);
    PUSH32(esp, 0x1A4490);
    PUSH32(esp, 0x1A7600);
    PUSH32(esp, 0x5BDB38);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002863F3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002863F3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00286400
 * Original: 0x00286400 - 0x0028640C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286400(void)
{

loc_00286400: ;
    PUSH32(esp, 0x281860);
    PUSH32(esp, 0x0028640Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028640A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00286410
 * Original: 0x00286410 - 0x00286457 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286410: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286420; /* jne: not equal / not zero */

loc_00286419: ;
    MEM8(0x5BDF6C) = 1;

loc_00286420: ;
    PUSH32(esp, 0x47138C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2569A0);
    PUSH32(esp, 0x2619C0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x405A5C);
    PUSH32(esp, 0x251860);
    PUSH32(esp, 0x1A4510);
    PUSH32(esp, 0x2371D0);
    PUSH32(esp, 0x5BDB74);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00286453u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00286453: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00286460
 * Original: 0x00286460 - 0x0028646C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286460(void)
{

loc_00286460: ;
    PUSH32(esp, 0x281920);
    PUSH32(esp, 0x0028646Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028646A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00286470
 * Original: 0x00286470 - 0x002864B4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286470: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286480; /* jne: not equal / not zero */

loc_00286479: ;
    MEM8(0x5BDF6C) = 1;

loc_00286480: ;
    PUSH32(esp, 0x471394);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276D70);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405A6C);
    PUSH32(esp, 0x250DB0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDBB0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002864B0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002864B0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002864C0
 * Original: 0x002864C0 - 0x002864CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002864C0(void)
{

loc_002864C0: ;
    PUSH32(esp, 0x2819D0);
    PUSH32(esp, 0x002864CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002864CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002864D0
 * Original: 0x002864D0 - 0x00286593 (195 bytes, 72 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002864D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002864D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x002864DCu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002864DC: ;
    PUSH32(esp, 0x27C4F0);
    esi = eax;
    PUSH32(esp, 0x002864E8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002864E8: ;
    ecx = MEM32(0x5BDBB8);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002864F7u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002864F7: ;
    edi = MEM32(esp + 0x18);
    ebx = eax;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00286505u); RECOMP_ABI_CALL(0x00262270u, sub_00262270); /* call 0x00262270 */

loc_00286505: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0028650Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028650C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00286566; /* jle: less or equal (signed <=) */

loc_0028651A: ;
    /* nop */

loc_00286520: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00286528u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286528: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00286530u); RECOMP_ABI_CALL(0x002572F0u, sub_002572F0); /* call 0x002572F0 */

loc_00286530: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00286539; /* je: equal / zero */

loc_00286535: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00286539: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(ecx + esi * 4) = eax;
    eax = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00286520; /* jl: less (signed <) */

loc_00286548: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00286566; /* je: equal / zero */

loc_00286550: ;
    edx = eax;
    MEM32(ebx + 0x10) = edx;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0028655Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028655E: ;
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = ebx;
    goto loc_00286570;

loc_00286566: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = 0;

loc_00286570: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00286587; /* jne: not equal / not zero */

loc_00286580: ;
    ecx = ebx;
    PUSH32(esp, 0x00286587u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00286587: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002865A0
 * Original: 0x002865A0 - 0x002865E6 (70 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002865A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002865A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x002865BCu); RECOMP_ABI_CALL(0x00257360u, sub_00257360); /* call 0x00257360 */

loc_002865BC: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002865D3; /* je: equal / zero */

loc_002865C4: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = MEM32(eax + 0x10);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_002865D3: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002865E0u); RECOMP_ABI_CALL(0x002864D0u, sub_002864D0); /* call 0x002864D0 */

loc_002865E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002865F0
 * Original: 0x002865F0 - 0x002868F1 (769 bytes, 249 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002865F0(void)
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

loc_002865F0: ;
    esp = esp - 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xC);
    MEM8(edi + 0x50) = 0;
    eax = MEM32(ecx);
    MEM32(esp + 0x10) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00286609u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286609: ;
    ecx = MEM32(edi + 0x38);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028661F; /* jne: not equal / not zero */

loc_00286617: ;
    MEM32(esp + 0x38) = 0;

loc_0028661F: ;
    ecx = MEM32(0x5BDF20);
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    esi = ecx + 0x14;
    ebp = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0028663C; /* jl: less (signed <) */

loc_00286632: ;
    PUSH32(esp, 0x27C2C0);
    PUSH32(esp, 0x0028663Cu); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0028663C: ;
    eax = MEM32(esi);
    edx = MEM32(ebp + 0x10);
    ebx = MEM32(esp + 0x34);
    ecx = eax + 1;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esi) = ecx;
    esi = MEM32(edx + eax * 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00286656; /* je: equal / zero */

loc_00286653: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00286656: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00286672; /* je: equal / zero */

loc_0028665D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00286672; /* jne: not equal / not zero */

loc_0028666D: ;
    PUSH32(esp, 0x00286672u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00286672: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi);
    MEM32(esi + 0x10) = ecx;
    ecx = esi;
    MEM32(esi + 0x14) = edx;
    MEM8(esi + 0x1C) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00286695u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286695: ;
    MEM32(esi + 0x48) = ebp;
    MEM32(esi + 0x4C) = ebp;
    ecx = MEM32(edi + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002866A4u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_002866A4: ;
    eax = MEM32(edi + 0x10);
    edi = MEM32(edi + 0x14);
    ecx = eax;
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002866B7; /* je: equal / zero */

loc_002866B3: ;
    edx = edi;
    goto loc_002866C2;

loc_002866B7: ;
    ecx = MEM32(0x5BC568);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x002866C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002866C2: ;
    MEM32(esi + 0x98) = eax;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x9C) = edx;
    MEM32(esp + 0x3C) = ebp;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002868E5; /* jle: less or equal (signed <=) */

loc_002866DE: ;
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x38) = eax;
    edi = edi;

loc_002866F0: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(edx + ebp * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002868C9; /* je: equal / zero */

loc_00286703: ;
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(ecx + 0x10);
    edi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002868C9; /* je: equal / zero */

loc_00286714: ;
    ecx = MEM32(0x5BDF38);
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    ebx = ecx + 0x14;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00286733; /* jl: less (signed <) */

loc_00286729: ;
    PUSH32(esp, 0x281970);
    PUSH32(esp, 0x00286733u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_00286733: ;
    eax = MEM32(ebx);
    edx = MEM32(esp + 0x14);
    ecx = eax + 1;
    MEM32(ebx) = ecx;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(edi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    ebx = MEM32(ecx + eax * 4);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002867ED; /* je: equal / zero */

loc_00286757: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x34);
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(ecx + ebp * 4);
    if (TEST_Z(_fa, _fb)) goto loc_0028678E; /* je: equal / zero */

loc_0028676C: ;
    eax = MEM32(eax + 0x10);
    edx = ecx;
    ecx = ecx & 0x1F;
    edi = 1;
    edx = edx >> 5;
    edi = edi << LO8(ecx);
    ecx = MEM32(eax + edx * 4);
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, ecx (32-bit) */
    MEM8(esp + 0x44) = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* setne */
    goto loc_00286793;

loc_0028678E: ;
    MEM8(esp + 0x44) = 0;

loc_00286793: ;
    ecx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x002867A8u); RECOMP_ABI_CALL(0x0025E750u, sub_0025E750); /* call 0x0025E750 */

loc_002867A8: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002867B2u); RECOMP_ABI_CALL(0x002622E0u, sub_002622E0); /* call 0x002622E0 */

loc_002867B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002867BA; /* je: equal / zero */

loc_002867B7: ;
    MEM32(ebx + 0x38) = eax;

loc_002867BA: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002868AD; /* jne: not equal / not zero */

loc_002867C6: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0xC);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esp + 0x40);
    fp_push(MEMF(eax + ecx + 8)); /* fld float */
    eax = eax + ecx;
    ecx = MEM32(eax);
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(ebx + 0x24) = ecx;
    MEMF(ebx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_002868AD;

loc_002867ED: ;
    edx = MEM32(esp + 0x4C);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x34);
    eax = MEM32(eax + ecx * 4);
    ecx = MEM32(edx + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebp = edi + 0x10;
    if (TEST_Z(_fa, _fb)) goto loc_0028682B; /* je: equal / zero */

loc_00286809: ;
    edi = MEM32(ecx + 0x10);
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = eax;
    edx = edx >> 5;
    _fa = (uint32_t)(MEM32(edi + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + edx * 4), ebx (32-bit) */
    ebx = MEM32(esp + 0x14);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028683B; /* jne: not equal / not zero */

loc_0028682B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0xC);
    edi = MEM32(ecx + 0xC);
    edi = edi + MEM32(esp + 0x40);
    goto loc_0028684B;

loc_0028683B: ;
    edx = MEM32(esp + 0x34);
    ecx = MEM32(edx + 0x14);
    edx = MEM32(ecx + 0x10);
    edi = MEM32(edx + eax * 4);
    edi = edi + 0x20;

loc_0028684B: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286859u); RECOMP_ABI_CALL(0x002622E0u, sub_002622E0); /* call 0x002622E0 */

loc_00286859: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00286898; /* je: equal / zero */

loc_0028685E: ;
    fp_push(MEMF(ebp)); /* fld float */
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ebp + 4)); /* fld float */
    edx = MEM32(ebp + 0xC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x28) = ecx;
    fp_top() = -fp_top(); /* fchs */
    eax = esp + eax * 4 + 0x20;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = edx;
    ebp = esp + 0x20;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_00286898: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x002868A9u); RECOMP_ABI_CALL(0x0025E7C0u, sub_0025E7C0); /* call 0x0025E7C0 */

loc_002868A9: ;
    ebp = MEM32(esp + 0x3C);

loc_002868AD: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002868BA; /* je: equal / zero */

loc_002868B5: ;
    MEM32(esp + 0x38) = MEM32(esp + 0x38) + 4;

loc_002868BA: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002868C5u); RECOMP_ABI_CALL(0x0027C760u, sub_0027C760); /* call 0x0027C760 */

loc_002868C5: ;
    ebx = MEM32(esp + 0x34);

loc_002868C9: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x3C) = ebp;
    MEM32(esp + 0x40) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_002866F0; /* jl: less (signed <) */

loc_002868E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00286900
 * Original: 0x00286900 - 0x00286971 (113 bytes, 49 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00286922u); RECOMP_ABI_CALL(0x00257360u, sub_00257360); /* call 0x00257360 */

loc_00286922: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286948; /* jne: not equal / not zero */

loc_0028692A: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00286937u); RECOMP_ABI_CALL(0x002864D0u, sub_002864D0); /* call 0x002864D0 */

loc_00286937: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286948; /* jne: not equal / not zero */

loc_0028693F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

loc_00286948: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0028696Au); RECOMP_ABI_CALL(0x002865F0u, sub_002865F0); /* call 0x002865F0 */

loc_0028696A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00286980
 * Original: 0x00286980 - 0x002869F5 (117 bytes, 37 insns)
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286980(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00286980: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002869A8u); RECOMP_ABI_CALL(0x00286900u, sub_00286900); /* call 0x00286900 */

loc_002869A8: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    esi = MEM32(esi + 0x38);
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esi + 8);
    ecx = MEM32(edx + ecx * 4 + -4);
    edx = MEM32(esp + 0x30);
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x60) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 0x64) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 0x58) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 0x5C) = edx;
    MEM32(ecx + 0x48) = 1;
    MEM32(ecx + 0x4C) = 0;
    POP32(esp, esi);
    esp += 52; return; /* ret 48 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00286A00
 * Original: 0x00286A00 - 0x00286B74 (372 bytes, 145 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286A00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00286A00: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00286A4D; /* jle: less or equal (signed <=) */

loc_00286A21: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(edx + esi * 4);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + esi * 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286A3F; /* jne: not equal / not zero */

loc_00286A3A: ;
    eax = MEM32(0x46A3C8);

loc_00286A3F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00286A48u); RECOMP_ABI_CALL(0x00281C10u, sub_00281C10); /* call 0x00281C10 */

loc_00286A48: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00286A21; /* jl: less (signed <) */

loc_00286A4D: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00286A69; /* je: equal / zero */

loc_00286A54: ;
    ecx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00286A65; /* je: equal / zero */

loc_00286A5D: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00286A65u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_00286A65: ;
    MEM32(esp + 0x10) = eax;

loc_00286A69: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00286A95; /* jle: less or equal (signed <=) */

loc_00286A75: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + esi * 4);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00286A8A; /* je: equal / zero */

loc_00286A82: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00286A8Au); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_00286A8A: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00286A75; /* jl: less (signed <) */

loc_00286A95: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00286B3E; /* jle: less or equal (signed <=) */

loc_00286AA9: ;
    /* nop */

loc_00286AB0: ;
    edx = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = MEM32(edx + ecx * 4);
    if (TEST_Z(_fa, _fb)) goto loc_00286B12; /* je: equal / zero */

loc_00286ABD: ;
    eax = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00286AC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286AC4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00286B12; /* je: equal / zero */

loc_00286ACB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00286B23; /* jne: not equal / not zero */

loc_00286AD0: ;
    eax = MEM32(esi);
    ebx = MEM32(0x5BD9C8);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00286ADDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286ADD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00286B12; /* je: equal / zero */

loc_00286AE1: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00286B23; /* je: equal / zero */

loc_00286AE8: ;
    esi = MEM32(eax + 0x10);
    ecx = MEM32(eax + 8);
    ebx = esi + ecx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00286B23; /* jae: above or equal (unsigned >=) */

loc_00286AF5: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00286AFFu); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_00286AFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00286B23; /* je: equal / zero */

loc_00286B04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00286B23; /* je: equal / zero */

loc_00286B09: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00286AF5; /* jb: below (unsigned <) */

loc_00286B10: ;
    goto loc_00286B23;

loc_00286B12: ;
    ecx = MEM32(edi + 0x1C);
    eax = MEM32(esi + 0x18);
    edx = MEM32(ecx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + eax * 4); PUSH32(esp, 0x00286B20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286B20: ;
    esp = esp + 8;

loc_00286B23: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x14);
    edx = MEM32(eax + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00286AB0; /* jl: less (signed <) */

loc_00286B3A: ;
    ebx = MEM32(esp + 0x14);

loc_00286B3E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00286B66; /* jle: less or equal (signed <=) */

loc_00286B44: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + esi * 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00286B59; /* jne: not equal / not zero */

loc_00286B54: ;
    eax = MEM32(0x46A3C8);

loc_00286B59: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00286B61u); RECOMP_ABI_CALL(0x00258990u, sub_00258990); /* call 0x00258990 */

loc_00286B61: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00286B44; /* jl: less (signed <) */

loc_00286B66: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00286B80
 * Original: 0x00286B80 - 0x00286BD0 (80 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286B80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00286B80: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286B8Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286B8C: ;
    PUSH32(esp, 0x27B3C0);
    esi = eax;
    PUSH32(esp, 0x00286B98u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00286B98: ;
    ecx = MEM32(0x5BD97C);
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00286BA7u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00286BA7: ;
    MEM32(0x5BDC9C) = eax;
    PUSH32(esp, 0x00286BB1u); RECOMP_ABI_CALL(0x00292A20u, sub_00292A20); /* call 0x00292A20 */

loc_00286BB1: ;
    PUSH32(esp, 0x00286BB6u); RECOMP_ABI_CALL(0x002A0810u, sub_002A0810); /* call 0x002A0810 */

loc_00286BB6: ;
    PUSH32(esp, 0x00286BBBu); RECOMP_ABI_CALL(0x0029FCF0u, sub_0029FCF0); /* call 0x0029FCF0 */

loc_00286BBB: ;
    PUSH32(esp, 0x00286BC0u); RECOMP_ABI_CALL(0x002909E0u, sub_002909E0); /* call 0x002909E0 */

loc_00286BC0: ;
    PUSH32(esp, 0x00286BC5u); RECOMP_ABI_CALL(0x00290B20u, sub_00290B20); /* call 0x00290B20 */

loc_00286BC5: ;
    PUSH32(esp, 0x00286BCAu); RECOMP_ABI_CALL(0x002908E0u, sub_002908E0); /* call 0x002908E0 */

loc_00286BCA: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00290930(); return; /* tail jmp 0x00290930 */

}

/**
 * sub_00286BD0
 * Original: 0x00286BD0 - 0x00286C49 (121 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286BD0: ;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    eax = MEM32(esi + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00286C21; /* je: equal / zero */

loc_00286BFA: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(edx + ecx * 4 + -4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00286C09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286C09: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = edi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00286C19u); RECOMP_ABI_CALL(0x00284B40u, sub_00284B40); /* call 0x00284B40 */

loc_00286C19: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_00286C21: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00286C2Au); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00286C2A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00286C31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286C31: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00286C42u); RECOMP_ABI_CALL(0x00284B40u, sub_00284B40); /* call 0x00284B40 */

loc_00286C42: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00286C50
 * Original: 0x00286C50 - 0x00286CDA (138 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286C50: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00286C64u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286C64: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x94); PUSH32(esp, 0x00286C6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286C6E: ;
    eax = MEM32(esi + 0x34);
    ebx = MEM32(eax + 0x44);
    ecx = MEM32(0x5BE5B8);
    ecx = MEM32(ecx + 8);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebx + ecx * 4);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4);
    ecx = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00286C99; /* je: equal / zero */

loc_00286C92: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ecx * 4 + -4);

loc_00286C99: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00286CA0; /* je: equal / zero */

loc_00286C9D: ;
    edx = ecx + 0xC;

loc_00286CA0: ;
    ecx = MEM32(0x5BD2A4);
    ecx = MEM32(ecx + 8);
    ecx = ecx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00286CC7; /* je: equal / zero */

loc_00286CAF: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00286CB6u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00286CB6: ;
    esp = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00286CC0u); RECOMP_ABI_CALL(0x00286BD0u, sub_00286BD0); /* call 0x00286BD0 */

loc_00286CC0: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00286CC7: ;
    PUSH32(esp, 0x00286CCCu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00286CCC: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00286CD3u); RECOMP_ABI_CALL(0x00286BD0u, sub_00286BD0); /* call 0x00286BD0 */

loc_00286CD3: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00286CE0
 * Original: 0x00286CE0 - 0x00286E38 (344 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286CE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00286CE0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00286CF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286CF3: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(ecx + 0x34);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 8) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00286E30; /* jle: less or equal (signed <=) */

loc_00286D14: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    goto loc_00286D20;

loc_00286D18: ;
    esi = MEM32(esp + 0x28);
    /* nop */

loc_00286D20: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x74);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx);
    ecx = MEM32(0x5BD2A4);
    ebx = MEM32(ecx + 8);
    edx = MEM32(esp + 0x24);
    esi = MEM32(edx + 0x48);
    ecx = MEM32(esi + 8);
    ebx = ebx + eax;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00286D61; /* jl: less (signed <) */

loc_00286D55: ;
    PUSH32(esp, 0x29FFE0);
    ecx = esi;
    PUSH32(esp, 0x00286D61u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_00286D61: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    esi = MEM32(edx + eax * 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00286D78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286D78: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    edx = MEM32(edi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00286DA5; /* jge: greater or equal (signed >=) */

loc_00286D9D: ;
    edx = eax + 1;
    MEM32(ebx + 8) = edx;
    goto loc_00286DB4;

loc_00286DA5: ;
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00286DB0u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00286DB0: ;
    eax = MEM32(esp + 0x14);

loc_00286DB4: ;
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = esi;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00286DC3u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00286DC3: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286DD2u); RECOMP_ABI_CALL(0x00286C50u, sub_00286C50); /* call 0x00286C50 */

loc_00286DD2: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    edx = MEM32(edi + 0x44);
    esi = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    ebx = MEM32(edx + ecx * 4);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    esi = esi + ebx;
    ebx = MEM32(ecx + esi * 4);
    eax = MEM32(ebx + 0x1C);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00286E09; /* je: equal / zero */

loc_00286DF5: ;
    edx = MEM32(edi + 0x30);
    ecx = MEM32(ebx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00286E06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00286E06: ;
    esp = esp + 8;

loc_00286E09: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0x00286E19u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00286E19: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00286D18; /* jl: less (signed <) */

loc_00286E2E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00286E30: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00286E40
 * Original: 0x00286E40 - 0x00286E51 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00286E40(void)
{

loc_00286E40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286E4Eu); RECOMP_ABI_CALL(0x00285040u, sub_00285040); /* call 0x00285040 */

loc_00286E4E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00286E60
 * Original: 0x00286E60 - 0x00286E75 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286E60(void)
{

loc_00286E60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BDD74);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00286E71u); RECOMP_ABI_CALL(0x00284A30u, sub_00284A30); /* call 0x00284A30 */

loc_00286E71: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00286E80
 * Original: 0x00286E80 - 0x00287230 (944 bytes, 252 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286E80(void)
{

loc_00286E80: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286E8Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286E8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286E92u); RECOMP_ABI_CALL(0x00295E60u, sub_00295E60); /* call 0x00295E60 */

loc_00286E92: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDE90) = eax;
    PUSH32(esp, 0x00286EA3u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286EA3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286EA9u); RECOMP_ABI_CALL(0x00295E30u, sub_00295E30); /* call 0x00295E30 */

loc_00286EA9: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDE94) = eax;
    PUSH32(esp, 0x00286EBAu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286EBA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286EC0u); RECOMP_ABI_CALL(0x00297730u, sub_00297730); /* call 0x00297730 */

loc_00286EC0: ;
    MEM32(0x5BDEAC) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286ED0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286ED0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286ED6u); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_00286ED6: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDEB0) = eax;
    PUSH32(esp, 0x00286EE7u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286EE7: ;
    PUSH32(esp, 0x27B3C0);
    esi = eax;
    PUSH32(esp, 0x00286EF3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00286EF3: ;
    ecx = MEM32(0x5BD97C);
    esp = esp + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00286F02u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00286F02: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDDFC) = eax;
    PUSH32(esp, 0x00286F13u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286F13: ;
    PUSH32(esp, 0x27B3C0);
    esi = eax;
    PUSH32(esp, 0x00286F1Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00286F1F: ;
    ecx = MEM32(0x5BD97C);
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00286F2Eu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00286F2E: ;
    MEM32(0x5BDE00) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286F3Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286F3E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286F44u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00286F44: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDE10) = eax;
    PUSH32(esp, 0x00286F55u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286F55: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286F5Bu); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00286F5B: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDE18) = eax;
    PUSH32(esp, 0x00286F6Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286F6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286F72u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00286F72: ;
    MEM32(0x5BDE1C) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286F82u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286F82: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286F88u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00286F88: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDE20) = eax;
    PUSH32(esp, 0x00286F99u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286F99: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286F9Fu); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00286F9F: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDE24) = eax;
    PUSH32(esp, 0x00286FB0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286FB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286FB6u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00286FB6: ;
    MEM32(0x5BDE14) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286FC6u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286FC6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286FCCu); RECOMP_ABI_CALL(0x002968D0u, sub_002968D0); /* call 0x002968D0 */

loc_00286FCC: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDE08) = eax;
    PUSH32(esp, 0x00286FDDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286FDD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286FE3u); RECOMP_ABI_CALL(0x002975A0u, sub_002975A0); /* call 0x002975A0 */

loc_00286FE3: ;
    edx = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, edx);
    MEM32(0x5BDE0C) = eax;
    PUSH32(esp, 0x00286FF7u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00286FF7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00286FFDu); RECOMP_ABI_CALL(0x002975A0u, sub_002975A0); /* call 0x002975A0 */

loc_00286FFD: ;
    MEM32(0x5BDE44) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028700Du); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028700D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287013u); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_00287013: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDE48) = eax;
    PUSH32(esp, 0x00287024u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00287024: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028702Au); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_0028702A: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDE4C) = eax;
    PUSH32(esp, 0x0028703Bu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028703B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287041u); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_00287041: ;
    MEM32(0x5BDE50) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287051u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00287051: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287057u); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_00287057: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDE54) = eax;
    PUSH32(esp, 0x00287068u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00287068: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028706Eu); RECOMP_ABI_CALL(0x00295770u, sub_00295770); /* call 0x00295770 */

loc_0028706E: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDE58) = eax;
    PUSH32(esp, 0x0028707Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028707F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287085u); RECOMP_ABI_CALL(0x00295770u, sub_00295770); /* call 0x00295770 */

loc_00287085: ;
    MEM32(0x5BDE5C) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287095u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00287095: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028709Bu); RECOMP_ABI_CALL(0x00295770u, sub_00295770); /* call 0x00295770 */

loc_0028709B: ;
    ecx = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, ecx);
    MEM32(0x5BDE60) = eax;
    PUSH32(esp, 0x002870AFu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002870AF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002870B5u); RECOMP_ABI_CALL(0x002A0870u, sub_002A0870); /* call 0x002A0870 */

loc_002870B5: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDE04) = eax;
    PUSH32(esp, 0x002870C6u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002870C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002870CCu); RECOMP_ABI_CALL(0x00297410u, sub_00297410); /* call 0x00297410 */

loc_002870CC: ;
    MEM32(0x5BDE64) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002870DCu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002870DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002870E2u); RECOMP_ABI_CALL(0x00297410u, sub_00297410); /* call 0x00297410 */

loc_002870E2: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDE68) = eax;
    PUSH32(esp, 0x002870F3u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002870F3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002870F9u); RECOMP_ABI_CALL(0x00297410u, sub_00297410); /* call 0x00297410 */

loc_002870F9: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDE6C) = eax;
    PUSH32(esp, 0x0028710Au); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028710A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287110u); RECOMP_ABI_CALL(0x00297AC0u, sub_00297AC0); /* call 0x00297AC0 */

loc_00287110: ;
    MEM32(0x5BDE70) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287120u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00287120: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287126u); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_00287126: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDE28) = eax;
    PUSH32(esp, 0x00287137u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00287137: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028713Du); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_0028713D: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDE2C) = eax;
    PUSH32(esp, 0x0028714Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028714E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287154u); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_00287154: ;
    MEM32(0x5BDE30) = eax;
    eax = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287167u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00287167: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028716Du); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_0028716D: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDE38) = eax;
    PUSH32(esp, 0x0028717Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028717E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287184u); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_00287184: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDE34) = eax;
    PUSH32(esp, 0x00287195u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00287195: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028719Bu); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_0028719B: ;
    MEM32(0x5BDE3C) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002871ABu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002871AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002871B1u); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_002871B1: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDE40) = eax;
    PUSH32(esp, 0x002871C2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002871C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002871C8u); RECOMP_ABI_CALL(0x00297C10u, sub_00297C10); /* call 0x00297C10 */

loc_002871C8: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDEB4) = eax;
    PUSH32(esp, 0x002871D9u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002871D9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002871DFu); RECOMP_ABI_CALL(0x00296360u, sub_00296360); /* call 0x00296360 */

loc_002871DF: ;
    MEM32(0x5BDEB8) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002871EFu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002871EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002871F5u); RECOMP_ABI_CALL(0x00296280u, sub_00296280); /* call 0x00296280 */

loc_002871F5: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDEBC) = eax;
    PUSH32(esp, 0x00287206u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00287206: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028720Cu); RECOMP_ABI_CALL(0x002961E0u, sub_002961E0); /* call 0x002961E0 */

loc_0028720C: ;
    esp = esp + 0x40;
    MEM32(0x5BDEC0) = eax;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00287220u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00287220: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287226u); RECOMP_ABI_CALL(0x00297330u, sub_00297330); /* call 0x00297330 */

loc_00287226: ;
    esp = esp + 8;
    MEM32(0x5BDE8C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00287230
 * Original: 0x00287230 - 0x00287257 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287230: ;
    eax = MEM32(0x5BD89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00287244; /* je: equal / zero */

loc_00287239: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287256; /* jne: not equal / not zero */

loc_00287244: ;
    PUSH32(esp, 0x27AD30);
    PUSH32(esp, 0x0028724Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028724E: ;
    eax = MEM32(0x5BD89C);
    esp = esp + 4;

loc_00287256: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00287260
 * Original: 0x00287260 - 0x0028729B (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287260(void)
{

loc_00287260: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028726Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028726C: ;
    PUSH32(esp, 0x27B3C0);
    esi = eax;
    PUSH32(esp, 0x00287278u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00287278: ;
    ecx = MEM32(0x5BD97C);
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00287287u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00287287: ;
    PUSH32(esp, 0x285B40);
    MEM32(0x5BDED0) = eax;
    PUSH32(esp, 0x00287296u); RECOMP_ABI_CALL(0x002041B0u, sub_002041B0); /* call 0x002041B0 */

loc_00287296: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002872A0
 * Original: 0x002872A0 - 0x002873DF (319 bytes, 99 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002872A0(void)
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

loc_002872A0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD8AC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002872B4u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002872B4: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x471408);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002872C4u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002872C4: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002872CCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002872CC: ;
    ebp = eax;
    PUSH32(esp, 0x002872D3u); RECOMP_ABI_CALL(0x0023B790u, sub_0023B790); /* call 0x0023B790 */

loc_002872D3: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    ebx = 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002872E9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002872E9: ;
    ebp = eax;
    PUSH32(esp, 0x002872F0u); RECOMP_ABI_CALL(0x0023B6E0u, sub_0023B6E0); /* call 0x0023B6E0 */

loc_002872F0: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00287301u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00287301: ;
    ebp = eax;
    PUSH32(esp, 0x00287308u); RECOMP_ABI_CALL(0x0023B790u, sub_0023B790); /* call 0x0023B790 */

loc_00287308: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00287319u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00287319: ;
    ebp = eax;
    PUSH32(esp, 0x00287320u); RECOMP_ABI_CALL(0x00222EB0u, sub_00222EB0); /* call 0x00222EB0 */

loc_00287320: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00287331u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00287331: ;
    fp_push(MEMD(0x3E1ED0)); /* fld double */
    esp = esp - 8;
    ecx = eax;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00287344u); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_00287344: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028734Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0028734F: ;
    ebp = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00287365u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00287365: ;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x221530;
    PUSH32(esp, 0x00287377u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00287377: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00287381u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00287381: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x00287390u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00287390: ;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x002873B4u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002873B4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4713E4);
    PUSH32(esp, 0x4713C0);
    PUSH32(esp, 0x47139C);
    ecx = esi;
    PUSH32(esp, 0x002873CBu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002873CB: ;
    eax = MEM32(0x5BD8AC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x3C) = 0x287230;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002873E0
 * Original: 0x002873E0 - 0x002873EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002873E0(void)
{

loc_002873E0: ;
    PUSH32(esp, 0x285BB0);
    PUSH32(esp, 0x002873EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002873EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002873F0
 * Original: 0x002873F0 - 0x002873FC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002873F0(void)
{

loc_002873F0: ;
    PUSH32(esp, 0x285C00);
    PUSH32(esp, 0x002873FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002873FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00287400
 * Original: 0x00287400 - 0x0028741E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287400(void)
{

loc_00287400: ;
    PUSH32(esp, 0x2811A0);
    PUSH32(esp, 0x0028740Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028740A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BD8CC);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028741Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028741D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00287420
 * Original: 0x00287420 - 0x00287464 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287420: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287430; /* jne: not equal / not zero */

loc_00287429: ;
    MEM8(0x5BDF6C) = 1;

loc_00287430: ;
    PUSH32(esp, 0x47142C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274760);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x405AD0);
    PUSH32(esp, 0x250240);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BD904);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00287460u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00287460: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00287470
 * Original: 0x00287470 - 0x0028748E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287470(void)
{

loc_00287470: ;
    PUSH32(esp, 0x281200);
    PUSH32(esp, 0x0028747Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028747A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BD908);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028748Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028748D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00287490
 * Original: 0x00287490 - 0x0028749C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287490(void)
{

loc_00287490: ;
    PUSH32(esp, 0x285D00);
    PUSH32(esp, 0x0028749Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028749A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002874A0
 * Original: 0x002874A0 - 0x002874E7 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002874A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002874A0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002874B0; /* jne: not equal / not zero */

loc_002874A9: ;
    MEM8(0x5BDF6C) = 1;

loc_002874B0: ;
    PUSH32(esp, 0x471434);
    PUSH32(esp, 0);
    PUSH32(esp, 0x252B40);
    PUSH32(esp, 0x2812C0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x405AE4);
    PUSH32(esp, 0x2505D0);
    PUSH32(esp, 0x249210);
    PUSH32(esp, 0x285DB0);
    PUSH32(esp, 0x5BD928);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002874E3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002874E3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002874F0
 * Original: 0x002874F0 - 0x0028753A (74 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002874F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002874F0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287500; /* jne: not equal / not zero */

loc_002874F9: ;
    MEM8(0x5BDF6C) = 1;

loc_00287500: ;
    PUSH32(esp, 0x471448);
    PUSH32(esp, 0x285DA0);
    PUSH32(esp, 0x2748A0);
    PUSH32(esp, 0x274870);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x404C98);
    PUSH32(esp, 0x250600);
    PUSH32(esp, 0x1A4510);
    PUSH32(esp, 0x2371D0);
    PUSH32(esp, 0x5BD930);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00287536u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00287536: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00287540
 * Original: 0x00287540 - 0x00287587 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287540: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287550; /* jne: not equal / not zero */

loc_00287549: ;
    MEM8(0x5BDF6C) = 1;

loc_00287550: ;
    PUSH32(esp, 0x471450);
    PUSH32(esp, 0);
    PUSH32(esp, 0x252D40);
    PUSH32(esp, 0x252CF0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x405AF4);
    PUSH32(esp, 0x25E440);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD944);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00287583u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00287583: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00287590
 * Original: 0x00287590 - 0x0028759C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287590(void)
{

loc_00287590: ;
    PUSH32(esp, 0x285FA0);
    PUSH32(esp, 0x0028759Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028759A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002875A0
 * Original: 0x002875A0 - 0x002875E7 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002875A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002875A0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002875B0; /* jne: not equal / not zero */

loc_002875A9: ;
    MEM8(0x5BDF6C) = 1;

loc_002875B0: ;
    PUSH32(esp, 0x471460);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249AD0);
    PUSH32(esp, 0x25FAA0);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x405B04);
    PUSH32(esp, 0x250A20);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD9E4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002875E3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002875E3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002875F0
 * Original: 0x002875F0 - 0x00287637 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002875F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002875F0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287600; /* jne: not equal / not zero */

loc_002875F9: ;
    MEM8(0x5BDF6C) = 1;

loc_00287600: ;
    PUSH32(esp, 0x471474);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2543F0);
    PUSH32(esp, 0x281500);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x405B0C);
    PUSH32(esp, 0x250B70);
    PUSH32(esp, 0x19C7E0);
    PUSH32(esp, 0x286290);
    PUSH32(esp, 0x5BD9EC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00287633u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00287633: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00287640
 * Original: 0x00287640 - 0x0028764C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287640(void)
{

loc_00287640: ;
    PUSH32(esp, 0x285FF0);
    PUSH32(esp, 0x0028764Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028764A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00287650
 * Original: 0x00287650 - 0x00287697 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287650: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287660; /* jne: not equal / not zero */

loc_00287659: ;
    MEM8(0x5BDF6C) = 1;

loc_00287660: ;
    PUSH32(esp, 0x471488);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249E20);
    PUSH32(esp, 0x27BA00);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x405B2C);
    PUSH32(esp, 0x250C90);
    PUSH32(esp, 0x19C7E0);
    PUSH32(esp, 0x286290);
    PUSH32(esp, 0x5BDA10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00287693u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00287693: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002876A0
 * Original: 0x002876A0 - 0x002876E7 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002876A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002876A0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002876B0; /* jne: not equal / not zero */

loc_002876A9: ;
    MEM8(0x5BDF6C) = 1;

loc_002876B0: ;
    PUSH32(esp, 0x47149C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x254720);
    PUSH32(esp, 0x27BA60);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x405B40);
    PUSH32(esp, 0x250BD0);
    PUSH32(esp, 0x19C7E0);
    PUSH32(esp, 0x286290);
    PUSH32(esp, 0x5BDA14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002876E3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002876E3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002876F0
 * Original: 0x002876F0 - 0x002876FC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002876F0(void)
{

loc_002876F0: ;
    PUSH32(esp, 0x286040);
    PUSH32(esp, 0x002876FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002876FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00287700
 * Original: 0x00287700 - 0x0028770C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287700(void)
{

loc_00287700: ;
    PUSH32(esp, 0x2860E0);
    PUSH32(esp, 0x0028770Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028770A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00287710
 * Original: 0x00287710 - 0x0028772E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287710(void)
{

loc_00287710: ;
    PUSH32(esp, 0x281570);
    PUSH32(esp, 0x0028771Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028771A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDA2C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028772Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028772D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00287730
 * Original: 0x00287730 - 0x0028773C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287730(void)
{

loc_00287730: ;
    PUSH32(esp, 0x286180);
    PUSH32(esp, 0x0028773Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028773A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00287740
 * Original: 0x00287740 - 0x0028777B (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287740(void)
{

loc_00287740: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028774Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028774C: ;
    PUSH32(esp, 0x27B3C0);
    esi = eax;
    PUSH32(esp, 0x00287758u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00287758: ;
    ecx = MEM32(0x5BD97C);
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00287767u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00287767: ;
    PUSH32(esp, 0x286E60);
    MEM32(0x5BDD74) = eax;
    PUSH32(esp, 0x00287776u); RECOMP_ABI_CALL(0x002041B0u, sub_002041B0); /* call 0x002041B0 */

loc_00287776: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00287780
 * Original: 0x00287780 - 0x002877C7 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287780: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287790; /* jne: not equal / not zero */

loc_00287789: ;
    MEM8(0x5BDF6C) = 1;

loc_00287790: ;
    PUSH32(esp, 0x4714B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24A390);
    PUSH32(esp, 0x2815C0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x405B50);
    PUSH32(esp, 0x251140);
    PUSH32(esp, 0x27B100);
    PUSH32(esp, 0x2874A0);
    PUSH32(esp, 0x5BDA64);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002877C3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002877C3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002877D0
 * Original: 0x002877D0 - 0x002877DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002877D0(void)
{

loc_002877D0: ;
    PUSH32(esp, 0x286220);
    PUSH32(esp, 0x002877DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002877DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002877E0
 * Original: 0x002877E0 - 0x002877EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002877E0(void)
{

loc_002877E0: ;
    PUSH32(esp, 0x286290);
    PUSH32(esp, 0x002877EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002877EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002877F0
 * Original: 0x002877F0 - 0x00287856 (102 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002877F0(void)
{

loc_002877F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAAC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002877FFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002877FF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4714D8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0028780Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0028780F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00287817u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00287817: ;
    MEM8(eax + 0x26) = 0;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00287826u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00287826: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0028782Fu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0028782F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4714D0);
    PUSH32(esp, 0x4714C8);
    PUSH32(esp, 0x4714C0);
    ecx = esi;
    PUSH32(esp, 0x00287846u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00287846: ;
    PUSH32(esp, 0x2862F0);
    PUSH32(esp, 0x00287850u); RECOMP_ABI_CALL(0x00204190u, sub_00204190); /* call 0x00204190 */

loc_00287850: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00287860
 * Original: 0x00287860 - 0x0028787E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287860(void)
{

loc_00287860: ;
    PUSH32(esp, 0x2817C0);
    PUSH32(esp, 0x0028786Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028786A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDB04);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028787Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028787D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00287880
 * Original: 0x00287880 - 0x0028788C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287880(void)
{

loc_00287880: ;
    PUSH32(esp, 0x2863B0);
    PUSH32(esp, 0x0028788Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028788A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00287890
 * Original: 0x00287890 - 0x002878D4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287890: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002878A0; /* jne: not equal / not zero */

loc_00287899: ;
    MEM8(0x5BDF6C) = 1;

loc_002878A0: ;
    PUSH32(esp, 0x4714E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x27C1E0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405B7C);
    PUSH32(esp, 0x250180);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BDB3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002878D0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002878D0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002878E0
 * Original: 0x002878E0 - 0x002878FE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002878E0(void)
{

loc_002878E0: ;
    PUSH32(esp, 0x281860);
    PUSH32(esp, 0x002878EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002878EA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDB40);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002878FDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002878FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00287900
 * Original: 0x00287900 - 0x00287947 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287900: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287910; /* jne: not equal / not zero */

loc_00287909: ;
    MEM8(0x5BDF6C) = 1;

loc_00287910: ;
    PUSH32(esp, 0x4714E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24B420);
    PUSH32(esp, 0x261AA0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405B98);
    PUSH32(esp, 0x250420);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDB8C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00287943u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00287943: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00287950
 * Original: 0x00287950 - 0x00287994 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287950: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287960; /* jne: not equal / not zero */

loc_00287959: ;
    MEM8(0x5BDF6C) = 1;

loc_00287960: ;
    PUSH32(esp, 0x4714F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276C60);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405BAC);
    PUSH32(esp, 0x2513E0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDB9C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00287990u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00287990: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002879A0
 * Original: 0x002879A0 - 0x002879AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002879A0(void)
{

loc_002879A0: ;
    PUSH32(esp, 0x286470);
    PUSH32(esp, 0x002879AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002879AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002879B0
 * Original: 0x002879B0 - 0x002879F7 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002879B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002879B0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002879C0; /* jne: not equal / not zero */

loc_002879B9: ;
    MEM8(0x5BDF6C) = 1;

loc_002879C0: ;
    PUSH32(esp, 0x4714F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x256EA0);
    PUSH32(esp, 0x261D20);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405BD0);
    PUSH32(esp, 0x250ED0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDBC8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002879F3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002879F3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00287A00
 * Original: 0x00287A00 - 0x00287BB8 (440 bytes, 164 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287A00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00287A00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00287A13; /* je: equal / zero */

loc_00287A10: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00287A13: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00287A2F; /* je: equal / zero */

loc_00287A1A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00287A2F; /* jne: not equal / not zero */

loc_00287A2A: ;
    PUSH32(esp, 0x00287A2Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00287A2F: ;
    MEM32(esi + 0xC) = edi;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00287A39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287A39: ;
    edx = MEM32(edi);
    ecx = edi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00287A42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287A42: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    edi = eax;
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00287A9D; /* jle: less or equal (signed <=) */

loc_00287A4C: ;
    ebp = ebx;
    edi = edi;

loc_00287A50: ;
    ecx = esi;
    PUSH32(esp, 0x00287A57u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00287A57: ;
    PUSH32(esp, 0x281920);
    edi = eax;
    PUSH32(esp, 0x00287A63u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00287A63: ;
    ecx = MEM32(0x5BDBA0);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00287A72u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00287A72: ;
    ecx = MEM32(esi + 0x30);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00287A7Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00287A7D: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00287A94; /* jne: not equal / not zero */

loc_00287A8D: ;
    ecx = edi;
    PUSH32(esp, 0x00287A94u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00287A94: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00287A50; /* jne: not equal / not zero */

loc_00287A97: ;
    edi = MEM32(esp + 0x14);
    ebp = 0; /* xor self */

loc_00287A9D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    ecx = MEM32(esi + 0x34);
    if (CMP_L(_fas, _fbs)) goto loc_00287AB6; /* jl: less (signed <) */

loc_00287AA4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00287AAE; /* jg: greater (signed >) */

loc_00287AA9: ;
    MEM32(ecx + 8) = ebx;
    goto loc_00287AB6;

loc_00287AAE: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00287AB6u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00287AB6: ;
    ecx = esi;
    PUSH32(esp, 0x00287ABDu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00287ABD: ;
    ecx = MEM32(0x5BCF28);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287AD0u); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_00287AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BCF28);
    PUSH32(esp, 0x00287AE2u); RECOMP_ABI_CALL(0x001E9D80u, sub_001E9D80); /* call 0x001E9D80 */

loc_00287AE2: ;
    ecx = esi;
    PUSH32(esp, 0x00287AE9u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00287AE9: ;
    ecx = MEM32(0x5BD444);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00287AFCu); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_00287AFC: ;
    ecx = MEM32(0x5BD444);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287B0Eu); RECOMP_ABI_CALL(0x001E9D80u, sub_001E9D80); /* call 0x001E9D80 */

loc_00287B0E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    eax = MEM32(esi + 0x40);
    if (CMP_LE(_fas, _fbs)) goto loc_00287B31; /* jle: less or equal (signed <=) */

loc_00287B15: ;
    eax = eax + 0x1C;
    ecx = ebx;
    edx = 0x3F800000;
    /* nop */

loc_00287B20: ;
    MEM32(eax + -16) = ebp;
    MEM32(eax) = ebp;
    MEM32(eax + 0x10) = ebp;
    MEM32(eax + 0x20) = edx;
    eax = eax + 0x40;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00287B20; /* jne: not equal / not zero */

loc_00287B31: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00287B43; /* je: equal / zero */

loc_00287B38: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00287B40u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_00287B40: ;
    MEM32(esi + 0x54) = ebp;

loc_00287B43: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00287B55; /* je: equal / zero */

loc_00287B4A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00287B52u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_00287B52: ;
    MEM32(esi + 0x58) = ebp;

loc_00287B55: ;
    ecx = esi;
    PUSH32(esp, 0x00287B5Cu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00287B5C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BCCAC);
    PUSH32(esp, 0x00287B6Fu); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_00287B6F: ;
    ecx = MEM32(0x5BCCAC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00287B81u); RECOMP_ABI_CALL(0x001E9D80u, sub_001E9D80); /* call 0x001E9D80 */

loc_00287B81: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00287BB1; /* je: equal / zero */

loc_00287B85: ;
    ecx = esi;
    PUSH32(esp, 0x00287B8Cu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00287B8C: ;
    ecx = MEM32(0x5BD460);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287B9Fu); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_00287B9F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BD460);
    PUSH32(esp, 0x00287BB1u); RECOMP_ABI_CALL(0x001E9D80u, sub_001E9D80); /* call 0x001E9D80 */

loc_00287BB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00287BC0
 * Original: 0x00287BC0 - 0x00287CCD (269 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287BC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00287BC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00287CC9; /* je: equal / zero */

loc_00287BD1: ;
    eax = MEM32(0x5BDA80);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00287BE0u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00287BE0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_00287C54; /* je: equal / zero */

loc_00287BEC: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00287BFC; /* je: equal / zero */

loc_00287BF3: ;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    goto loc_00287C00;

loc_00287BFC: ;
    MEM32(esp + 0x10) = esi;

loc_00287C00: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00287C54; /* jbe: below or equal (unsigned <=) */

loc_00287C08: ;
    goto loc_00287C10;

    /* nop */

loc_00287C10: ;
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edx + 0x10);
    ebx = MEM32(eax + esi * 4);
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 8);
    edx = MEM32(eax + edx * 4 + -4);
    eax = MEM32(edx + 0x1C);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + esi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287C35u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00287C35: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00287C3Du); RECOMP_ABI_CALL(0x00287BC0u, sub_00287BC0); /* call 0x00287BC0 */

loc_00287C3D: ;
    esp = esp + 0xC;
    ecx = edi;
    PUSH32(esp, 0x00287C47u); RECOMP_ABI_CALL(0x00279030u, sub_00279030); /* call 0x00279030 */

loc_00287C47: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00287C10; /* jb: below (unsigned <) */

loc_00287C54: ;
    ecx = MEM32(0x5BDB04);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00287C62u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00287C62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00287CC7; /* je: equal / zero */

loc_00287C66: ;
    ecx = ebp;
    PUSH32(esp, 0x00287C6Du); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00287C6D: ;
    PUSH32(esp, 0x27BDC0);
    esi = eax;
    PUSH32(esp, 0x00287C79u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00287C79: ;
    ecx = MEM32(0x5BDA88);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00287C88u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00287C88: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00287C92u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287C92: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287CA0u); RECOMP_ABI_CALL(0x001EAB70u, sub_001EAB70); /* call 0x001EAB70 */

loc_00287CA0: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00287CA9u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00287CA9: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00287CC7; /* jne: not equal / not zero */

loc_00287CB9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00287CC7: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00287CC9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00287CD0
 * Original: 0x00287CD0 - 0x00287D11 (65 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287CD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00287CDEu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_00287CDE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287CF3; /* jne: not equal / not zero */

loc_00287CE2: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x70); PUSH32(esp, 0x00287CECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287CEC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x00287CF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287CF2: ;
    POP32(esp, edi);

loc_00287CF3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00287CFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287CFC: ;
    ecx = eax;
    PUSH32(esp, 0x00287D03u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_00287D03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00287D0E; /* jne: not equal / not zero */

loc_00287D09: ;
    PUSH32(esp, 0x00287D0Eu); RECOMP_ABI_CALL(0x00286E80u, sub_00286E80); /* call 0x00286E80 */

loc_00287D0E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00287D20
 * Original: 0x00287D20 - 0x00287D47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287D20: ;
    eax = MEM32(0x5BD8CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00287D34; /* je: equal / zero */

loc_00287D29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287D46; /* jne: not equal / not zero */

loc_00287D34: ;
    PUSH32(esp, 0x2811A0);
    PUSH32(esp, 0x00287D3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00287D3E: ;
    eax = MEM32(0x5BD8CC);
    esp = esp + 4;

loc_00287D46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00287D50
 * Original: 0x00287D50 - 0x00287D7F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287D50: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00287D68; /* jl: less (signed <) */

loc_00287D5C: ;
    PUSH32(esp, 0x287470);
    ecx = esi;
    PUSH32(esp, 0x00287D68u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_00287D68: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(eax + 8);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00287D80
 * Original: 0x00287D80 - 0x00287E55 (213 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287D80: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xFC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00287E37; /* je: equal / zero */

loc_00287D96: ;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00287DBF; /* je: equal / zero */

loc_00287DB8: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);

loc_00287DBF: ;
    PUSH32(esp, ebx);
    ecx = ecx + 0xC;
    ebx = esi + 0x7C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00287DCEu); RECOMP_ABI_CALL(0x0004AF50u, sub_0004AF50); /* call 0x0004AF50 */

loc_00287DCE: ;
    eax = edi + 0xA4;
    PUSH32(esp, eax);
    ecx = esi + 0xBC;
    PUSH32(esp, 0x00287DE0u); RECOMP_ABI_CALL(0x0004AF50u, sub_0004AF50); /* call 0x0004AF50 */

loc_00287DE0: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287DF7; /* jne: not equal / not zero */

loc_00287DEA: ;
    SET_LO8(eax, MEM8(esi + 0x78));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287DF7; /* jne: not equal / not zero */

loc_00287DF1: ;
    MEM8(esi + 0x79) = 0;
    goto loc_00287DFB;

loc_00287DF7: ;
    MEM8(esi + 0x79) = 1;

loc_00287DFB: ;
    SET_LO8(eax, MEM8(esi + 0x79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00287E07; /* je: equal / zero */

loc_00287E02: ;
    eax = MEM32(esi + 0x24);
    goto loc_00287E0F;

loc_00287E07: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00287E0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287E0F: ;
    ecx = MEM32(0x5BD474);
    edx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    edx = edx + esi;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00287E23u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_00287E23: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00287E2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287E2D: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00287E36u); RECOMP_ABI_CALL(0x00287E60u, sub_00287E60); /* call 0x00287E60 */

loc_00287E36: ;
    POP32(esp, ebx);

loc_00287E37: ;
    SET_LO8(eax, MEM8(esi + 0xFD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00287E4E; /* je: equal / zero */

loc_00287E41: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00287E49u); RECOMP_ABI_CALL(0x00287ED0u, sub_00287ED0); /* call 0x00287ED0 */

loc_00287E49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00287E4E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00287E60
 * Original: 0x00287E60 - 0x00287ECF (111 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287E60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00287E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287E80; /* jne: not equal / not zero */

loc_00287E6A: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00287E72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287E72: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287ECB; /* jne: not equal / not zero */

loc_00287E76: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00287E80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287E80: ;
    SET_LO8(eax, MEM8(esi + 0x79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00287E98; /* je: equal / zero */

loc_00287E93: ;
    ebx = MEM32(esi + 0x28);
    goto loc_00287E9F;

loc_00287E98: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00287E9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287E9D: ;
    ebx = eax;

loc_00287E9F: ;
    SET_LO8(eax, MEM8(esi + 0x79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00287EAB; /* je: equal / zero */

loc_00287EA6: ;
    eax = MEM32(esi + 0x24);
    goto loc_00287EB3;

loc_00287EAB: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00287EB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287EB3: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00287EC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287EC8: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00287ECB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00287ED0
 * Original: 0x00287ED0 - 0x00287F06 (54 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287ED0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00287EDEu); RECOMP_ABI_CALL(0x00287F60u, sub_00287F60); /* call 0x00287F60 */

loc_00287EDE: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00287EEF; /* je: equal / zero */

loc_00287EE5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00287EEBu); RECOMP_ABI_CALL(0x00286A00u, sub_00286A00); /* call 0x00286A00 */

loc_00287EEB: ;
    esi = eax;
    goto loc_00287EF1;

loc_00287EEF: ;
    esi = 0; /* xor self */

loc_00287EF1: ;
    ecx = edi;
    PUSH32(esp, 0x00287EF8u); RECOMP_ABI_CALL(0x00287F10u, sub_00287F10); /* call 0x00287F10 */

loc_00287EF8: ;
    ecx = edi;
    PUSH32(esp, 0x00287EFFu); RECOMP_ABI_CALL(0x00287F30u, sub_00287F30); /* call 0x00287F30 */

loc_00287EFF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00287F10
 * Original: 0x00287F10 - 0x00287F21 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287F10: ;
    ecx = MEM32(ecx + 0xF8);
    eax = MEM32(ecx + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287F20u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_00287F20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00287F30
 * Original: 0x00287F30 - 0x00287F55 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287F30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xFC);
    eax = MEM32(ecx + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287F43u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_00287F43: ;
    ecx = MEM32(esi + 0x100);
    edx = MEM32(ecx + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00287F53u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_00287F53: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00287F60
 * Original: 0x00287F60 - 0x00287FCF (111 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287F60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00287F71; /* je: equal / zero */

loc_00287F6C: ;
    eax = MEM32(esi + 0x24);
    goto loc_00287F79;

loc_00287F71: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00287F79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287F79: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0xF8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00287F89u); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_00287F89: ;
    SET_LO8(eax, MEM8(esi + 0x79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(esi + 0x20);
    ebx = MEM32(ecx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00287F9B; /* je: equal / zero */

loc_00287F96: ;
    esi = MEM32(esi + 0x28);
    goto loc_00287FA2;

loc_00287F9B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00287FA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287FA0: ;
    esi = eax;

loc_00287FA2: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00287FA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00287FA9: ;
    ecx = MEM32(edi + 0xFC);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00287FB9u); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_00287FB9: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x100);
    PUSH32(esp, 0x00287FC9u); RECOMP_ABI_CALL(0x001358C0u, sub_001358C0); /* call 0x001358C0 */

loc_00287FC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00287FD0
 * Original: 0x00287FD0 - 0x00287FF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00287FD0: ;
    eax = MEM32(0x5BDBF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00287FE4; /* je: equal / zero */

loc_00287FD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00287FF6; /* jne: not equal / not zero */

loc_00287FE4: ;
    PUSH32(esp, 0x281AA0);
    PUSH32(esp, 0x00287FEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00287FEE: ;
    eax = MEM32(0x5BDBF0);
    esp = esp + 4;

loc_00287FF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00288000
 * Original: 0x00288000 - 0x0028804A (74 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288000: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288010; /* jne: not equal / not zero */

loc_00288009: ;
    MEM8(0x5BDF6C) = 1;

loc_00288010: ;
    PUSH32(esp, 0x471508);
    PUSH32(esp, 0x287260);
    PUSH32(esp, 0x25E930);
    PUSH32(esp, 0x25E900);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x405BF0);
    PUSH32(esp, 0x25E3D0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD88C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00288046u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00288046: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00288050
 * Original: 0x00288050 - 0x00288097 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288050: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288060; /* jne: not equal / not zero */

loc_00288059: ;
    MEM8(0x5BDF6C) = 1;

loc_00288060: ;
    PUSH32(esp, 0x471510);
    PUSH32(esp, 0);
    PUSH32(esp, 0x251BA0);
    PUSH32(esp, 0x2744B0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x405BFC);
    PUSH32(esp, 0x25E470);
    PUSH32(esp, 0x251B90);
    PUSH32(esp, 0x287540);
    PUSH32(esp, 0x5BD890);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00288093u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00288093: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002880A0
 * Original: 0x002880A0 - 0x002880E4 (68 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002880A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002880A0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002880B0; /* jne: not equal / not zero */

loc_002880A9: ;
    MEM8(0x5BDF6C) = 1;

loc_002880B0: ;
    PUSH32(esp, 0x471520);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2872A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x405C14);
    PUSH32(esp, 0x24FD30);
    PUSH32(esp, 0x249170);
    PUSH32(esp, 0x251D80);
    PUSH32(esp, 0x5BD8AC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x002880E0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002880E0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002880F0
 * Original: 0x002880F0 - 0x00288134 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002880F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002880F0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288100; /* jne: not equal / not zero */

loc_002880F9: ;
    MEM8(0x5BDF6C) = 1;

loc_00288100: ;
    PUSH32(esp, 0x471530);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x281120);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405C28);
    PUSH32(esp, 0x24FE50);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BD8B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00288130u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00288130: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00288140
 * Original: 0x00288140 - 0x00288184 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288140: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288150; /* jne: not equal / not zero */

loc_00288149: ;
    MEM8(0x5BDF6C) = 1;

loc_00288150: ;
    PUSH32(esp, 0x471538);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274570);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405C48);
    PUSH32(esp, 0x24FDF0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD8BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00288180u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00288180: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00288190
 * Original: 0x00288190 - 0x002881D4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288190: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002881A0; /* jne: not equal / not zero */

loc_00288199: ;
    MEM8(0x5BDF6C) = 1;

loc_002881A0: ;
    PUSH32(esp, 0x471540);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x27AE10);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405C58);
    PUSH32(esp, 0x24FDC0);
    PUSH32(esp, 0x1A4490);
    PUSH32(esp, 0x1A7600);
    PUSH32(esp, 0x5BD8C0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002881D0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002881D0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002881E0
 * Original: 0x002881E0 - 0x002881FE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002881E0(void)
{

loc_002881E0: ;
    PUSH32(esp, 0x285C00);
    PUSH32(esp, 0x002881EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002881EA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BD8C8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002881FDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002881FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00288200
 * Original: 0x00288200 - 0x00288260 (96 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288200(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00288200: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BD8D0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028820Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0028820F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x471560);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0028821Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0028821F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00288227u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00288227: ;
    fp_push(MEMD(0x3D45C8)); /* fld double */
    esp = esp - 8;
    ecx = eax;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0028823Au); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_0028823A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471558);
    PUSH32(esp, 0x471550);
    PUSH32(esp, 0x471548);
    ecx = esi;
    PUSH32(esp, 0x00288251u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00288251: ;
    eax = MEM32(0x5BD8D0);
    POP32(esp, edi);
    MEM32(eax + 0x3C) = 0x287D20;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00288260
 * Original: 0x00288260 - 0x00288270 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288260(void)
{

loc_00288260: ;
    PUSH32(esp, 0x287420);
    PUSH32(esp, 0x0028826Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028826A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00288270
 * Original: 0x00288270 - 0x002882B4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288270: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288280; /* jne: not equal / not zero */

loc_00288279: ;
    MEM8(0x5BDF6C) = 1;

loc_00288280: ;
    PUSH32(esp, 0x471568);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2747D0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405C7C);
    PUSH32(esp, 0x250540);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD914);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002882B0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002882B0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002882C0
 * Original: 0x002882C0 - 0x00288307 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002882C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002882C0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002882D0; /* jne: not equal / not zero */

loc_002882C9: ;
    MEM8(0x5BDF6C) = 1;

loc_002882D0: ;
    PUSH32(esp, 0x471570);
    PUSH32(esp, 0);
    PUSH32(esp, 0x253460);
    PUSH32(esp, 0x25F6A0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3F5F34);
    PUSH32(esp, 0x250780);
    PUSH32(esp, 0x1A4510);
    PUSH32(esp, 0x2371D0);
    PUSH32(esp, 0x5BD988);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00288303u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00288303: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00288310
 * Original: 0x00288310 - 0x0028835A (74 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288310: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288320; /* jne: not equal / not zero */

loc_00288319: ;
    MEM8(0x5BDF6C) = 1;

loc_00288320: ;
    PUSH32(esp, 0x471588);
    PUSH32(esp, 0);
    PUSH32(esp, 0x253810);
    PUSH32(esp, 0x27B4F0);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x405C8C);
    PUSH32(esp, 0x250840);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BD9A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00288356u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00288356: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00288360
 * Original: 0x00288360 - 0x0028836C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288360(void)
{

loc_00288360: ;
    PUSH32(esp, 0x2875A0);
    PUSH32(esp, 0x0028836Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028836A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00288370
 * Original: 0x00288370 - 0x002883B4 (68 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288370: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288380; /* jne: not equal / not zero */

loc_00288379: ;
    MEM8(0x5BDF6C) = 1;

loc_00288380: ;
    PUSH32(esp, 0x4715D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2759D0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405CA8);
    PUSH32(esp, 0x250CF0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDA1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002883B0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002883B0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002883C0
 * Original: 0x002883C0 - 0x002883DE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002883C0(void)
{

loc_002883C0: ;
    PUSH32(esp, 0x286040);
    PUSH32(esp, 0x002883CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002883CA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDA20);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002883DDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002883DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002883E0
 * Original: 0x002883E0 - 0x002883FE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002883E0(void)
{

loc_002883E0: ;
    PUSH32(esp, 0x2860E0);
    PUSH32(esp, 0x002883EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002883EA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDA28);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002883FDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002883FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00288400
 * Original: 0x00288400 - 0x00288444 (68 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288400: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288410; /* jne: not equal / not zero */

loc_00288409: ;
    MEM8(0x5BDF6C) = 1;

loc_00288410: ;
    PUSH32(esp, 0x4715D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x275B70);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405CC8);
    PUSH32(esp, 0x251080);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDA3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00288440u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00288440: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00288450
 * Original: 0x00288450 - 0x0028849A (74 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288450: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288460; /* jne: not equal / not zero */

loc_00288459: ;
    MEM8(0x5BDF6C) = 1;

loc_00288460: ;
    PUSH32(esp, 0x4715E0);
    PUSH32(esp, 0x287740);
    PUSH32(esp, 0x260160);
    PUSH32(esp, 0x260110);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x405CE8);
    PUSH32(esp, 0x2510E0);
    PUSH32(esp, 0x251B10);
    PUSH32(esp, 0x288000);
    PUSH32(esp, 0x5BDA54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00288496u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00288496: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002884A0
 * Original: 0x002884A0 - 0x002884E7 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002884A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002884A0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002884B0; /* jne: not equal / not zero */

loc_002884A9: ;
    MEM8(0x5BDF6C) = 1;

loc_002884B0: ;
    PUSH32(esp, 0x4715F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24A300);
    PUSH32(esp, 0x275D40);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x405D00);
    PUSH32(esp, 0x250660);
    PUSH32(esp, 0x25E9D0);
    PUSH32(esp, 0x288050);
    PUSH32(esp, 0x5BDA60);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002884E3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002884E3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002884F0
 * Original: 0x002884F0 - 0x0028850E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002884F0(void)
{

loc_002884F0: ;
    PUSH32(esp, 0x286220);
    PUSH32(esp, 0x002884FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002884FA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDA84);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028850Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028850D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00288510
 * Original: 0x00288510 - 0x00288554 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288510: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288520; /* jne: not equal / not zero */

loc_00288519: ;
    MEM8(0x5BDF6C) = 1;

loc_00288520: ;
    PUSH32(esp, 0x471604);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2816D0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405D18);
    PUSH32(esp, 0x2501E0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDA8C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00288550u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00288550: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00288560
 * Original: 0x00288560 - 0x0028857E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288560(void)
{

loc_00288560: ;
    PUSH32(esp, 0x286290);
    PUSH32(esp, 0x0028856Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028856A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDA90);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028857Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028857D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00288580
 * Original: 0x00288580 - 0x00288759 (473 bytes, 158 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288580(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00288580: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAA0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00288591u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00288591: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x471718);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002885A1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002885A1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002885A9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002885A9: ;
    ebx = eax;
    PUSH32(esp, 0x002885B0u); RECOMP_ABI_CALL(0x00290BA0u, sub_00290BA0); /* call 0x00290BA0 */

loc_002885B0: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002885BEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002885BE: ;
    ebx = eax;
    PUSH32(esp, 0x002885C5u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_002885C5: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x002885D3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002885D3: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x002885DFu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002885DF: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002885EAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002885EA: ;
    ebx = eax;
    PUSH32(esp, 0x002885F1u); RECOMP_ABI_CALL(0x00290CD0u, sub_00290CD0); /* call 0x00290CD0 */

loc_002885F1: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002885FFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002885FF: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0); /* xor self */
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0028860Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0028860F: ;
    ebp = eax;
    PUSH32(esp, 0x00288616u); RECOMP_ABI_CALL(0x00292950u, sub_00292950); /* call 0x00292950 */

loc_00288616: ;
    edx = edi + 9;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0028862Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0028862B: ;
    ebp = eax;
    PUSH32(esp, 0x00288632u); RECOMP_ABI_CALL(0x00292950u, sub_00292950); /* call 0x00292950 */

loc_00288632: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00288647u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00288647: ;
    ecx = edi + 0xB;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00288655u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00288655: ;
    edx = edi + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00288663u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00288663: ;
    ebp = eax;
    PUSH32(esp, 0x0028866Au); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_0028866A: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    eax = edi + 0xD;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028867Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0028867B: ;
    ebp = eax;
    PUSH32(esp, 0x00288682u); RECOMP_ABI_CALL(0x00290C60u, sub_00290C60); /* call 0x00290C60 */

loc_00288682: ;
    ecx = edi + 0xE;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00288693u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00288693: ;
    ebp = eax;
    PUSH32(esp, 0x0028869Au); RECOMP_ABI_CALL(0x00290B30u, sub_00290B30); /* call 0x00290B30 */

loc_0028869A: ;
    edx = edi + 0xF;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002886ABu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002886AB: ;
    ebp = eax;
    PUSH32(esp, 0x002886B2u); RECOMP_ABI_CALL(0x00290C60u, sub_00290C60); /* call 0x00290C60 */

loc_002886B2: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002886C3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002886C3: ;
    ebp = eax;
    PUSH32(esp, 0x002886CAu); RECOMP_ABI_CALL(0x00290B30u, sub_00290B30); /* call 0x00290B30 */

loc_002886CA: ;
    ecx = edi + 0x11;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002886DBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002886DB: ;
    ebp = eax;
    PUSH32(esp, 0x002886E2u); RECOMP_ABI_CALL(0x00292630u, sub_00292630); /* call 0x00292630 */

loc_002886E2: ;
    edx = edi + 0x12;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002886F3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002886F3: ;
    ebp = eax;
    PUSH32(esp, 0x002886FAu); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_002886FA: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x13;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0028870Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0028870B: ;
    ebp = eax;
    PUSH32(esp, 0x00288712u); RECOMP_ABI_CALL(0x00290C60u, sub_00290C60); /* call 0x00290C60 */

loc_00288712: ;
    ecx = edi + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00288723u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00288723: ;
    ebp = eax;
    PUSH32(esp, 0x0028872Au); RECOMP_ABI_CALL(0x00290B30u, sub_00290B30); /* call 0x00290B30 */

loc_0028872A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4716C0);
    PUSH32(esp, 0x471668);
    PUSH32(esp, 0x471610);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00288747u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00288747: ;
    edx = MEM32(0x5BDAA0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x3C) = 0x287FD0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00288760
 * Original: 0x00288760 - 0x002887AA (74 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288760: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288770; /* jne: not equal / not zero */

loc_00288769: ;
    MEM8(0x5BDF6C) = 1;

loc_00288770: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2862E0);
    PUSH32(esp, 0x2877F0);
    PUSH32(esp, 0x276030);
    PUSH32(esp, 0xA8);
    PUSH32(esp, 0x405E80);
    PUSH32(esp, 0x2514D0);
    PUSH32(esp, 0x256780);
    PUSH32(esp, 0x261930);
    PUSH32(esp, 0x5BDAAC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002887A6u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002887A6: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002887B0
 * Original: 0x002887B0 - 0x002887F4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002887B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002887B0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002887C0; /* jne: not equal / not zero */

loc_002887B9: ;
    MEM8(0x5BDF6C) = 1;

loc_002887C0: ;
    PUSH32(esp, 0x47176C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2769E0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405E98);
    PUSH32(esp, 0x2500C0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDB34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002887F0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002887F0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00288800
 * Original: 0x00288800 - 0x0028880C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288800(void)
{

loc_00288800: ;
    PUSH32(esp, 0x287900);
    PUSH32(esp, 0x0028880Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028880A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00288810
 * Original: 0x00288810 - 0x0028881C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288810(void)
{

loc_00288810: ;
    PUSH32(esp, 0x287950);
    PUSH32(esp, 0x0028881Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028881A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00288820
 * Original: 0x00288820 - 0x0028882C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288820(void)
{

loc_00288820: ;
    PUSH32(esp, 0x2879B0);
    PUSH32(esp, 0x0028882Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028882A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00288830
 * Original: 0x00288830 - 0x00288943 (275 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288830: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028883Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028883C: ;
    esi = eax;
    eax = MEM32(0x5BDF38);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00288862; /* je: equal / zero */

loc_0028884C: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00288862; /* jne: not equal / not zero */

loc_0028885D: ;
    PUSH32(esp, 0x00288862u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00288862: ;
    PUSH32(esp, 0x2818D0);
    PUSH32(esp, 0x0028886Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028886C: ;
    ecx = MEM32(0x5BDB98);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028887Bu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028887B: ;
    MEM32(0x5BDF38) = eax;
    MEM8(eax + 0x1C) = 0;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00288890u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288890: ;
    esi = eax;
    eax = MEM32(0x5BDF20);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002888B6; /* je: equal / zero */

loc_002888A0: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002888B6; /* jne: not equal / not zero */

loc_002888B1: ;
    PUSH32(esp, 0x002888B6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002888B6: ;
    PUSH32(esp, 0x27C220);
    PUSH32(esp, 0x002888C0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002888C0: ;
    ecx = MEM32(0x5BDB50);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002888CFu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002888CF: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDF20) = eax;
    PUSH32(esp, 0x002888E0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002888E0: ;
    esi = eax;
    eax = MEM32(0x5BDF58);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00288906; /* je: equal / zero */

loc_002888F0: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00288906; /* jne: not equal / not zero */

loc_00288901: ;
    PUSH32(esp, 0x00288906u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00288906: ;
    PUSH32(esp, 0x28DCE0);
    PUSH32(esp, 0x00288910u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00288910: ;
    ecx = MEM32(0x5BDBC0);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028891Fu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028891F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5BD2B0);
    MEM32(0x5BDF58) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x38);
    PUSH32(esp, 0x405EAC);
    PUSH32(esp, 7);
    PUSH32(esp, 0x00288941u); RECOMP_ABI_CALL(0x002311C0u, sub_002311C0); /* call 0x002311C0 */

loc_00288941: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00288950
 * Original: 0x00288950 - 0x00288D98 (1096 bytes, 301 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00288950: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0028895Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0028895E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288973; /* jne: not equal / not zero */

loc_00288962: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x70); PUSH32(esp, 0x0028896Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028896C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x00288972u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00288972: ;
    POP32(esp, edi);

loc_00288973: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0028897Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028897C: ;
    ecx = eax;
    PUSH32(esp, 0x00288983u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_00288983: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288D93; /* jne: not equal / not zero */

loc_0028898B: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00288997u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288997: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028899Du); RECOMP_ABI_CALL(0x002975A0u, sub_002975A0); /* call 0x002975A0 */

loc_0028899D: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDCA8) = eax;
    PUSH32(esp, 0x002889AEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002889AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002889B4u); RECOMP_ABI_CALL(0x002968D0u, sub_002968D0); /* call 0x002968D0 */

loc_002889B4: ;
    MEM32(0x5BDD50) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002889C4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002889C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002889CAu); RECOMP_ABI_CALL(0x002A0870u, sub_002A0870); /* call 0x002A0870 */

loc_002889CA: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDCAC) = eax;
    PUSH32(esp, 0x002889DBu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002889DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002889E1u); RECOMP_ABI_CALL(0x002A0870u, sub_002A0870); /* call 0x002A0870 */

loc_002889E1: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDCB0) = eax;
    PUSH32(esp, 0x002889F2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002889F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002889F8u); RECOMP_ABI_CALL(0x002A0870u, sub_002A0870); /* call 0x002A0870 */

loc_002889F8: ;
    MEM32(0x5BDCB4) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288A08u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288A08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288A0Eu); RECOMP_ABI_CALL(0x00295F20u, sub_00295F20); /* call 0x00295F20 */

loc_00288A0E: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDCB8) = eax;
    PUSH32(esp, 0x00288A1Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288A1F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288A25u); RECOMP_ABI_CALL(0x00295F20u, sub_00295F20); /* call 0x00295F20 */

loc_00288A25: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDCBC) = eax;
    PUSH32(esp, 0x00288A36u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288A36: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288A3Cu); RECOMP_ABI_CALL(0x00295F20u, sub_00295F20); /* call 0x00295F20 */

loc_00288A3C: ;
    MEM32(0x5BDCC0) = eax;
    eax = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288A4Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288A4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288A55u); RECOMP_ABI_CALL(0x002A0740u, sub_002A0740); /* call 0x002A0740 */

loc_00288A55: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDD14) = eax;
    PUSH32(esp, 0x00288A66u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288A66: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288A6Cu); RECOMP_ABI_CALL(0x002A0740u, sub_002A0740); /* call 0x002A0740 */

loc_00288A6C: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDD18) = eax;
    PUSH32(esp, 0x00288A7Du); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288A7D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288A83u); RECOMP_ABI_CALL(0x002A0DB0u, sub_002A0DB0); /* call 0x002A0DB0 */

loc_00288A83: ;
    MEM32(0x5BDD1C) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288A93u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288A93: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288A99u); RECOMP_ABI_CALL(0x002A0DB0u, sub_002A0DB0); /* call 0x002A0DB0 */

loc_00288A99: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDD20) = eax;
    PUSH32(esp, 0x00288AAAu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288AAA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288AB0u); RECOMP_ABI_CALL(0x002A0DB0u, sub_002A0DB0); /* call 0x002A0DB0 */

loc_00288AB0: ;
    edx = MEM32(0x46A680);
    MEM32(0x5BDD24) = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00288AC1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288AC1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288AC7u); RECOMP_ABI_CALL(0x002A0DB0u, sub_002A0DB0); /* call 0x002A0DB0 */

loc_00288AC7: ;
    MEM32(0x5BDD28) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288AD7u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288AD7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288ADDu); RECOMP_ABI_CALL(0x002A0DB0u, sub_002A0DB0); /* call 0x002A0DB0 */

loc_00288ADD: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDD2C) = eax;
    PUSH32(esp, 0x00288AEEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288AEE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288AF4u); RECOMP_ABI_CALL(0x002A0DB0u, sub_002A0DB0); /* call 0x002A0DB0 */

loc_00288AF4: ;
    edx = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, edx);
    MEM32(0x5BDD30) = eax;
    PUSH32(esp, 0x00288B08u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288B08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288B0Eu); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_00288B0E: ;
    MEM32(0x5BDCFC) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288B1Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288B1E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288B24u); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_00288B24: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDD00) = eax;
    PUSH32(esp, 0x00288B35u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288B35: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288B3Bu); RECOMP_ABI_CALL(0x00297BB0u, sub_00297BB0); /* call 0x00297BB0 */

loc_00288B3B: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDD04) = eax;
    PUSH32(esp, 0x00288B4Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288B4C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288B52u); RECOMP_ABI_CALL(0x00296280u, sub_00296280); /* call 0x00296280 */

loc_00288B52: ;
    MEM32(0x5BDD08) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288B62u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288B62: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288B68u); RECOMP_ABI_CALL(0x002961E0u, sub_002961E0); /* call 0x002961E0 */

loc_00288B68: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDD0C) = eax;
    PUSH32(esp, 0x00288B79u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288B79: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288B7Fu); RECOMP_ABI_CALL(0x00297BE0u, sub_00297BE0); /* call 0x00297BE0 */

loc_00288B7F: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDD10) = eax;
    PUSH32(esp, 0x00288B90u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288B90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288B96u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00288B96: ;
    MEM32(0x5BDCCC) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288BA6u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288BA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288BACu); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00288BAC: ;
    ecx = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, ecx);
    MEM32(0x5BDCD0) = eax;
    PUSH32(esp, 0x00288BC0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288BC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288BC6u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00288BC6: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDCD4) = eax;
    PUSH32(esp, 0x00288BD7u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288BD7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288BDDu); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00288BDD: ;
    MEM32(0x5BDCD8) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288BEDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288BED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288BF3u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00288BF3: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDCDC) = eax;
    PUSH32(esp, 0x00288C04u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288C04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288C0Au); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00288C0A: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDCE0) = eax;
    PUSH32(esp, 0x00288C1Bu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288C1B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288C21u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00288C21: ;
    MEM32(0x5BDCE4) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288C31u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288C31: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288C37u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00288C37: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDCE8) = eax;
    PUSH32(esp, 0x00288C48u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288C48: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288C4Eu); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_00288C4E: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDCEC) = eax;
    PUSH32(esp, 0x00288C5Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288C5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288C65u); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_00288C65: ;
    MEM32(0x5BDCF0) = eax;
    eax = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288C78u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288C78: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288C7Eu); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_00288C7E: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDCF4) = eax;
    PUSH32(esp, 0x00288C8Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288C8F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288C95u); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_00288C95: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDCF8) = eax;
    PUSH32(esp, 0x00288CA6u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288CA6: ;
    PUSH32(esp, 0x286290);
    esi = eax;
    PUSH32(esp, 0x00288CB2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00288CB2: ;
    ecx = MEM32(0x5BDA90);
    esp = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00288CC1u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00288CC1: ;
    MEM32(0x5BDCC4) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288CD1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288CD1: ;
    PUSH32(esp, 0x286290);
    esi = eax;
    PUSH32(esp, 0x00288CDDu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00288CDD: ;
    ecx = MEM32(0x5BDA90);
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00288CECu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00288CEC: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDCC8) = eax;
    PUSH32(esp, 0x00288CFDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288CFD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288D03u); RECOMP_ABI_CALL(0x00296140u, sub_00296140); /* call 0x00296140 */

loc_00288D03: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDD34) = eax;
    PUSH32(esp, 0x00288D14u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288D14: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288D1Au); RECOMP_ABI_CALL(0x00296140u, sub_00296140); /* call 0x00296140 */

loc_00288D1A: ;
    MEM32(0x5BDD38) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288D2Au); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288D2A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288D30u); RECOMP_ABI_CALL(0x00296140u, sub_00296140); /* call 0x00296140 */

loc_00288D30: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDD3C) = eax;
    PUSH32(esp, 0x00288D41u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288D41: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288D47u); RECOMP_ABI_CALL(0x002972C0u, sub_002972C0); /* call 0x002972C0 */

loc_00288D47: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDD40) = eax;
    PUSH32(esp, 0x00288D58u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288D58: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288D5Eu); RECOMP_ABI_CALL(0x002972C0u, sub_002972C0); /* call 0x002972C0 */

loc_00288D5E: ;
    MEM32(0x5BDD44) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288D6Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288D6E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288D74u); RECOMP_ABI_CALL(0x00297AC0u, sub_00297AC0); /* call 0x00297AC0 */

loc_00288D74: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDD48) = eax;
    PUSH32(esp, 0x00288D85u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00288D85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288D8Bu); RECOMP_ABI_CALL(0x0029FFE0u, sub_0029FFE0); /* call 0x0029FFE0 */

loc_00288D8B: ;
    esp = esp + 0x38;
    MEM32(0x5BDD4C) = eax;

loc_00288D93: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00288DA0
 * Original: 0x00288DA0 - 0x00288E5D (189 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288DA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00288DA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00288DA9u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00288DA9: ;
    PUSH32(esp, 0x286220);
    edi = eax;
    PUSH32(esp, 0x00288DB5u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00288DB5: ;
    ecx = MEM32(0x5BDA84);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00288DC4u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00288DC4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00288DCD; /* je: equal / zero */

loc_00288DCA: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00288DCD: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00288DE9; /* je: equal / zero */

loc_00288DD4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00288DE9; /* jne: not equal / not zero */

loc_00288DE4: ;
    PUSH32(esp, 0x00288DE9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00288DE9: ;
    ecx = edi;
    MEM32(esi + 0x1C) = edi;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00288E03; /* jne: not equal / not zero */

loc_00288DFE: ;
    PUSH32(esp, 0x00288E03u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00288E03: ;
    ecx = esi;
    PUSH32(esp, 0x00288E0Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00288E0A: ;
    PUSH32(esp, 0x27BDC0);
    edi = eax;
    PUSH32(esp, 0x00288E16u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00288E16: ;
    ecx = MEM32(0x5BDA88);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00288E25u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00288E25: ;
    edi = eax;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00288E33u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00288E33: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00288E3Eu); RECOMP_ABI_CALL(0x00287BC0u, sub_00287BC0); /* call 0x00287BC0 */

loc_00288E3E: ;
    ecx = MEM32(edi + 4);
    esp = esp + 0xC;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00288E5A; /* jne: not equal / not zero */

loc_00288E51: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00288E5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00288E60
 * Original: 0x00288E60 - 0x002890E8 (648 bytes, 228 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288E60(void)
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

loc_00288E60: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00288E87; /* jne: not equal / not zero */

loc_00288E6F: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x00288E7Fu); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_00288E7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_00288E87: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002890DF; /* je: equal / zero */

loc_00288E94: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 0xD (8-bit) */
    PUSH32(esp, ebx);
    MEM8(esp + 0x13) = 0;
    ebx = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00288F00; /* je: equal / zero */

loc_00288EA5: ;
    _fa = (uint32_t)(MEM8(0x5BDFF0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x5BDFF0), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288EBD; /* jne: not equal / not zero */

loc_00288EAD: ;
    MEM32(0x5BDFF0) = MEM32(0x5BDFF0) | ebx;
    PUSH32(esp, 0x00288EB8u); RECOMP_ABI_CALL(0x00297750u, sub_00297750); /* call 0x00297750 */

loc_00288EB8: ;
    MEM32(0x5BDFEC) = eax;

loc_00288EBD: ;
    edx = MEM32(0x5BDFEC);
    eax = MEM32(edx + 8);
    ecx = MEM32(ebp + 0x44);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00288EE4; /* jl: less (signed <) */

loc_00288EDC: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4);
    goto loc_00288EF7;

loc_00288EE4: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00288EF4; /* je: equal / zero */

loc_00288EEB: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4 + -4);
    goto loc_00288EF7;

loc_00288EF4: ;
    eax = MEM32(eax + 0x14);

loc_00288EF7: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00288F00; /* jne: not equal / not zero */

loc_00288EFC: ;
    MEM8(esp + 0x13) = LO8(ebx);

loc_00288F00: ;
    SET_LO8(eax, MEM8(edi + 0x82));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00288F0E; /* je: equal / zero */

loc_00288F0A: ;
    MEM8(esp + 0x13) = LO8(ebx);

loc_00288F0E: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x72) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x72 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288F4C; /* jne: not equal / not zero */

loc_00288F15: ;
    SET_LO8(ecx, MEM8(edi + 0x70));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288F4C; /* jne: not equal / not zero */

loc_00288F1C: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288F4C; /* jne: not equal / not zero */

loc_00288F24: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00288F32u); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_00288F32: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00288F3Fu); RECOMP_ABI_CALL(0x0026E920u, sub_0026E920); /* call 0x0026E920 */

loc_00288F3F: ;
    esp = esp + 8;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_00288F4C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x50) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x50 (8-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00288F5E; /* jg: greater (signed >) */

loc_00288F50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00288F5C; /* jle: less or equal (signed <=) */

loc_00288F54: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288F5E; /* jne: not equal / not zero */

loc_00288F5C: ;
    SET_LO8(ebx, 0); /* xor self */

loc_00288F5E: ;
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288FBF; /* jne: not equal / not zero */

loc_00288F65: ;
    eax = MEM32(edi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00288FBF; /* je: equal / zero */

loc_00288F6C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00288F87; /* jne: not equal / not zero */

loc_00288F70: ;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00288F7Au); RECOMP_ABI_CALL(0x0026E920u, sub_0026E920); /* call 0x0026E920 */

loc_00288F7A: ;
    esp = esp + 8;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_00288F87: ;
    ecx = edi;
    PUSH32(esp, 0x00288F8Eu); RECOMP_ABI_CALL(0x00287D50u, sub_00287D50); /* call 0x00287D50 */

loc_00288F8E: ;
    ecx = MEM32(esp + 0x30);
    esi = eax;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 8) = 0;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00288FA8u); RECOMP_ABI_CALL(0x0026E920u, sub_0026E920); /* call 0x0026E920 */

loc_00288FA8: ;
    eax = MEM32(edi + 0x7C);
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(edi + 0x7C);
    eax = MEM32(edx + 0x14);
    esp = esp + 8;
    MEM32(esi + 0x14) = eax;
    goto loc_00288FD5;

loc_00288FBF: ;
    ecx = edi;
    PUSH32(esp, 0x00288FC6u); RECOMP_ABI_CALL(0x00287D50u, sub_00287D50); /* call 0x00287D50 */

loc_00288FC6: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    esi = eax;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00288FD5u); RECOMP_ABI_CALL(0x00279C80u, sub_00279C80); /* call 0x00279C80 */

loc_00288FD5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(edi + 0x7C) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0028909D; /* je: equal / zero */

loc_00288FE0: ;
    SET_LO8(ecx, MEM8(0x5BDFF0));
    edx = MEM32(esp + 0x30);
    ebp = MEM32(edx + 0xC);
    eax = 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289006; /* jne: not equal / not zero */

loc_00288FF6: ;
    MEM32(0x5BDFF0) = MEM32(0x5BDFF0) | eax;
    PUSH32(esp, 0x00289001u); RECOMP_ABI_CALL(0x00291A20u, sub_00291A20); /* call 0x00291A20 */

loc_00289001: ;
    MEM32(0x5BDFE8) = eax;

loc_00289006: ;
    eax = MEM32(0x5BDFE8);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289015u); RECOMP_ABI_CALL(0x0019A8A0u, sub_0019A8A0); /* call 0x0019A8A0 */

loc_00289015: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00289029; /* je: equal / zero */

loc_0028901B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00289027u); RECOMP_ABI_CALL(0x00244540u, sub_00244540); /* call 0x00244540 */

loc_00289027: ;
    goto loc_00289046;

loc_00289029: ;
    edx = MEM32(0x5BC9D0);
    eax = MEM32(0x5BC9D4);
    ecx = MEM32(0x5BC9D8);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;

loc_00289046: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00289062; /* je: equal / zero */

loc_0028904A: ;
    ebx = ebx + 0xC;
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0028905Cu); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0028905C: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    goto loc_00289076;

loc_00289062: ;
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;

loc_00289076: ;
    SET_LO8(eax, MEM8(edi + 0x81));
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289098; /* jne: not equal / not zero */

loc_00289084: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */

loc_00289098: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0028909D: ;
    SET_LO8(eax, MEM8(edi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002890BA; /* je: equal / zero */

loc_002890A4: ;
    edx = MEM32(edi + 0x74);
    ecx = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002890B0u); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_002890B0: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_002890BA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002890D5; /* je: equal / zero */

loc_002890C2: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002890CBu); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_002890CB: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_002890D5: ;
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002890DEu); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_002890DE: ;
    POP32(esp, ebx);

loc_002890DF: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002890F0
 * Original: 0x002890F0 - 0x00289194 (164 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002890F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002890F0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x78);
    SET_LO8(eax, MEM8(edi + 0x70));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(edi + 0x78) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028917A; /* jne: not equal / not zero */

loc_00289101: ;
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(ecx, MEM8(esp + 0xC));
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x10);
    MEM8(edi + 0x70) = 1;
    MEM8(edi + 0x71) = LO8(eax);
    MEM8(edi + 0x72) = LO8(ecx);
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028912B; /* jl: less (signed <) */

loc_0028911F: ;
    PUSH32(esp, 0x287470);
    ecx = esi;
    PUSH32(esp, 0x0028912Bu); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0028912B: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    esi = MEM32(edx + eax * 4);
    ecx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(edi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00289163; /* je: equal / zero */

loc_0028914E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00289163; /* jne: not equal / not zero */

loc_0028915E: ;
    PUSH32(esp, 0x00289163u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00289163: ;
    MEM32(edi + 0x74) = esi;
    ecx = esi;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_S(_fas, _fbs)) goto loc_0028917E; /* jl: less (signed <) */

loc_00289173: ;
    MEM32(ecx + 8) = 0;

loc_0028917A: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0028917E: ;
    POP32(esp, edi);
    MEM32(esp + 8) = 4;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00200BE0(); return; /* tail jmp 0x00200BE0 */

}

/**
 * sub_002891A0
 * Original: 0x002891A0 - 0x002891C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002891A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002891A0: ;
    eax = MEM32(0x5BDA30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002891B4; /* je: equal / zero */

loc_002891A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002891C6; /* jne: not equal / not zero */

loc_002891B4: ;
    PUSH32(esp, 0x286130);
    PUSH32(esp, 0x002891BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002891BE: ;
    eax = MEM32(0x5BDA30);
    esp = esp + 4;

loc_002891C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002891D0
 * Original: 0x002891D0 - 0x002891DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002891D0(void)
{

loc_002891D0: ;
    PUSH32(esp, 0x2880F0);
    PUSH32(esp, 0x002891DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002891DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002891E0
 * Original: 0x002891E0 - 0x002891EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002891E0(void)
{

loc_002891E0: ;
    PUSH32(esp, 0x288140);
    PUSH32(esp, 0x002891EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002891EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002891F0
 * Original: 0x002891F0 - 0x002891FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002891F0(void)
{

loc_002891F0: ;
    PUSH32(esp, 0x288190);
    PUSH32(esp, 0x002891FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002891FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00289200
 * Original: 0x00289200 - 0x00289241 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00289200: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289210; /* jne: not equal / not zero */

loc_00289209: ;
    MEM8(0x5BDF6C) = 1;

loc_00289210: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x288200);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x405EC0);
    PUSH32(esp, 0x24FE80);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BD8D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0028923Du); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028923D: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00289250
 * Original: 0x00289250 - 0x0028929A (74 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00289250: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289260; /* jne: not equal / not zero */

loc_00289259: ;
    MEM8(0x5BDF6C) = 1;

loc_00289260: ;
    PUSH32(esp, 0x471774);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2525E0);
    PUSH32(esp, 0x25F240);
    PUSH32(esp, 0x84);
    PUSH32(esp, 0x405ED0);
    PUSH32(esp, 0x2502A0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD8FC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00289296u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00289296: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002892A0
 * Original: 0x002892A0 - 0x002892AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002892A0(void)
{

loc_002892A0: ;
    PUSH32(esp, 0x288270);
    PUSH32(esp, 0x002892AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002892AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002892B0
 * Original: 0x002892B0 - 0x002892BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002892B0(void)
{

loc_002892B0: ;
    PUSH32(esp, 0x2882C0);
    PUSH32(esp, 0x002892BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002892BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002892C0
 * Original: 0x002892C0 - 0x00289304 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002892C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002892C0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002892D0; /* jne: not equal / not zero */

loc_002892C9: ;
    MEM8(0x5BDF6C) = 1;

loc_002892D0: ;
    PUSH32(esp, 0x47179C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x275810);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405EDC);
    PUSH32(esp, 0x250A50);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD9E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00289300u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00289300: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00289310
 * Original: 0x00289310 - 0x0028931C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289310(void)
{

loc_00289310: ;
    PUSH32(esp, 0x288370);
    PUSH32(esp, 0x0028931Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028931A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00289320
 * Original: 0x00289320 - 0x0028932C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289320(void)
{

loc_00289320: ;
    PUSH32(esp, 0x288400);
    PUSH32(esp, 0x0028932Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028932A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00289330
 * Original: 0x00289330 - 0x0028937A (74 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00289330: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289340; /* jne: not equal / not zero */

loc_00289339: ;
    MEM8(0x5BDF6C) = 1;

loc_00289340: ;
    PUSH32(esp, 0x4717A4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24A180);
    PUSH32(esp, 0x27BCC0);
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x405EE8);
    PUSH32(esp, 0x250FC0);
    PUSH32(esp, 0x2745B0);
    PUSH32(esp, 0x285C00);
    PUSH32(esp, 0x5BDA48);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00289376u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00289376: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00289380
 * Original: 0x00289380 - 0x0028938C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289380(void)
{

loc_00289380: ;
    PUSH32(esp, 0x2884A0);
    PUSH32(esp, 0x0028938Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028938A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00289390
 * Original: 0x00289390 - 0x002893D7 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00289390: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002893A0; /* jne: not equal / not zero */

loc_00289399: ;
    MEM8(0x5BDF6C) = 1;

loc_002893A0: ;
    PUSH32(esp, 0x4717B0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24A440);
    PUSH32(esp, 0x260390);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x405F04);
    PUSH32(esp, 0x2511A0);
    PUSH32(esp, 0x252C80);
    PUSH32(esp, 0x25F5C0);
    PUSH32(esp, 0x5BDA6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002893D3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002893D3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002893E0
 * Original: 0x002893E0 - 0x002893EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002893E0(void)
{

loc_002893E0: ;
    PUSH32(esp, 0x288510);
    PUSH32(esp, 0x002893EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002893EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002893F0
 * Original: 0x002893F0 - 0x00289434 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002893F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002893F0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289400; /* jne: not equal / not zero */

loc_002893F9: ;
    MEM8(0x5BDF6C) = 1;

loc_00289400: ;
    PUSH32(esp, 0x4717C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x288580);
    PUSH32(esp, 0);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x405F18);
    PUSH32(esp, 0x251290);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BDAA0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00289430u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00289430: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00289440
 * Original: 0x00289440 - 0x0028948A (74 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00289440: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289450; /* jne: not equal / not zero */

loc_00289449: ;
    MEM8(0x5BDF6C) = 1;

loc_00289450: ;
    PUSH32(esp, 0x4717E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x255D70);
    PUSH32(esp, 0x27BFF0);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x405F30);
    PUSH32(esp, 0x251650);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BDAFC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00289486u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00289486: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00289490
 * Original: 0x00289490 - 0x002894DA (74 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00289490: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002894A0; /* jne: not equal / not zero */

loc_00289499: ;
    MEM8(0x5BDF6C) = 1;

loc_002894A0: ;
    PUSH32(esp, 0x47180C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x255FC0);
    PUSH32(esp, 0x27C080);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x405F40);
    PUSH32(esp, 0x250870);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BDB0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002894D6u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002894D6: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002894E0
 * Original: 0x002894E0 - 0x002894EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002894E0(void)
{

loc_002894E0: ;
    PUSH32(esp, 0x2887B0);
    PUSH32(esp, 0x002894EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002894EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002894F0
 * Original: 0x002894F0 - 0x00289537 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002894F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002894F0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289500; /* jne: not equal / not zero */

loc_002894F9: ;
    MEM8(0x5BDF6C) = 1;

loc_00289500: ;
    PUSH32(esp, 0x471838);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24B150);
    PUSH32(esp, 0x2618C0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x405F50);
    PUSH32(esp, 0x251770);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BDB48);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00289533u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00289533: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00289540
 * Original: 0x00289540 - 0x00289584 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00289540: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289550; /* jne: not equal / not zero */

loc_00289549: ;
    MEM8(0x5BDF6C) = 1;

loc_00289550: ;
    PUSH32(esp, 0x471850);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276BD0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405F60);
    PUSH32(esp, 0x250450);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDB84);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00289580u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00289580: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00289590
 * Original: 0x00289590 - 0x00289595 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289590: ;
    g_seh_ebp = ebp; sub_00288830(); return; /* tail jmp 0x00288830 */

}

/**
 * sub_002895A0
 * Original: 0x002895A0 - 0x002895E4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002895A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002895A0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002895B0; /* jne: not equal / not zero */

loc_002895A9: ;
    MEM8(0x5BDF6C) = 1;

loc_002895B0: ;
    PUSH32(esp, 0x471858);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276E20);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405F78);
    PUSH32(esp, 0x250F00);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDBC4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002895E0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002895E0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002895F0
 * Original: 0x002895F0 - 0x00289844 (596 bytes, 205 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002895F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002895F0: ;
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028983D; /* je: equal / zero */

loc_00289601: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028983D; /* je: equal / zero */

loc_0028960C: ;
    ecx = MEM32(edi + 0x48);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00289637; /* jl: less (signed <) */

loc_0028961F: ;
    ecx = MEM32(edi + 0x44);
    eax = eax + 4;
    MEM32(edi + 0x48) = eax;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00289634u); RECOMP_ABI_CALL(0x001F7F60u, sub_001F7F60); /* call 0x001F7F60 */

loc_00289634: ;
    MEM32(edi + 0x44) = eax;

loc_00289637: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BE5E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x5BE5E8) (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0028964A; /* jne: not equal / not zero */

loc_00289640: ;
    MEM32(esp + 0xC) = 1;
    goto loc_002896AE;

loc_0028964A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BE5E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x5BE5E0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028965F; /* jne: not equal / not zero */

loc_00289652: ;
    PUSH32(esp, 0x00289657u); RECOMP_ABI_CALL(0x0024E830u, sub_0024E830); /* call 0x0024E830 */

loc_00289657: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_002896AE; /* jg: greater (signed >) */

loc_0028965F: ;
    ecx = MEM32(edi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0028966Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028966F: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0028967Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028967C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0028968C; /* jg: greater (signed >) */

loc_00289684: ;
    MEM32(esp + 0xC) = 1;

loc_0028968C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002896AE; /* je: equal / zero */

loc_00289696: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_002896AE; /* jne: not equal / not zero */

loc_002896A9: ;
    PUSH32(esp, 0x002896AEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002896AE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0xC);
    esi = eax + ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002896C2u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_002896C2: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002896CBu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_002896CB: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ecx + edx * 4) = ebp;
    MEM32(edi + 0xC) = esi;
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028983A; /* jle: less or equal (signed <=) */

loc_002896EC: ;
    goto loc_002896F2;

loc_002896EE: ;
    ebx = MEM32(esp + 0x24);

loc_002896F2: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(edi + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00289705u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00289705: ;
    ecx = edi;
    PUSH32(esp, 0x0028970Cu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028970C: ;
    PUSH32(esp, 0x2863B0);
    esi = eax;
    PUSH32(esp, 0x00289718u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00289718: ;
    ecx = MEM32(0x5BDB38);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00289727u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00289727: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00289736; /* je: equal / zero */

loc_00289733: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00289736: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00289752; /* je: equal / zero */

loc_0028973D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00289752; /* jne: not equal / not zero */

loc_0028974D: ;
    PUSH32(esp, 0x00289752u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00289752: ;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x1C) = 0;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(esi + 4);
    ebx = MEM32(edi + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    ecx = MEM32(ebx + 0x10);
    ecx = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028978C; /* je: equal / zero */

loc_00289777: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028978C; /* jne: not equal / not zero */

loc_00289787: ;
    PUSH32(esp, 0x0028978Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028978C: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002897A1; /* je: equal / zero */

loc_00289793: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002897A1; /* jl: less (signed <) */

loc_00289797: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002897A1; /* jge: greater or equal (signed >=) */

loc_0028979B: ;
    edx = MEM32(ebx + 0x10);
    MEM32(edx + ebp * 4) = esi;

loc_002897A1: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = MEM32(edi + 0x14);
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002897B3; /* je: equal / zero */

loc_002897B0: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002897B3: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + ebp * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002897D2; /* je: equal / zero */

loc_002897BD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002897D2; /* jne: not equal / not zero */

loc_002897CD: ;
    PUSH32(esp, 0x002897D2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002897D2: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002897EB; /* je: equal / zero */

loc_002897D9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002897EB; /* jl: less (signed <) */

loc_002897DD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002897EB; /* jge: greater or equal (signed >=) */

loc_002897E1: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + ebp * 4) = edx;

loc_002897EB: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00289802; /* jne: not equal / not zero */

loc_002897FB: ;
    ecx = esi;
    PUSH32(esp, 0x00289802u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00289802: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00289824; /* je: equal / zero */

loc_0028980C: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00289824; /* jne: not equal / not zero */

loc_0028981F: ;
    PUSH32(esp, 0x00289824u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00289824: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002896EE; /* jl: less (signed <) */

loc_0028983A: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0028983D: ;
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00289850
 * Original: 0x00289850 - 0x0028994F (255 bytes, 92 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00289850: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00289860; /* je: equal / zero */

loc_0028985D: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00289860: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028987C; /* je: equal / zero */

loc_00289867: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028987C; /* jne: not equal / not zero */

loc_00289877: ;
    PUSH32(esp, 0x0028987Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028987C: ;
    MEM32(esi + 0x38) = edi;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028988A; /* je: equal / zero */

loc_00289887: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028988A: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002898A6; /* je: equal / zero */

loc_00289891: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002898A6; /* jne: not equal / not zero */

loc_002898A1: ;
    PUSH32(esp, 0x002898A6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002898A6: ;
    MEM32(esi + 0x34) = edi;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x002898B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002898B0: ;
    edi = MEM32(esi + 0x14);
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x002898C0u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_002898C0: ;
    ecx = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002898DF; /* jle: less or equal (signed <=) */

loc_002898C9: ;
    /* nop */

loc_002898D0: ;
    edx = MEM32(edi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002898D0; /* jl: less (signed <) */

loc_002898DF: ;
    MEM32(edi + 8) = 0;
    edi = MEM32(esi + 0x10);
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x002898F6u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_002898F6: ;
    ecx = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028990F; /* jle: less or equal (signed <=) */

loc_002898FF: ;
    /* nop */

loc_00289900: ;
    edx = MEM32(edi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00289900; /* jl: less (signed <) */

loc_0028990F: ;
    eax = MEM32(0x5BDBF4);
    MEM32(edi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    ebx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00289949; /* jle: less or equal (signed <=) */

loc_0028992B: ;
    goto loc_00289930;

    /* nop */

loc_00289930: ;
    ecx = MEM32(0x5BDBF4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + edi * 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289944u); RECOMP_ABI_CALL(0x002895F0u, sub_002895F0); /* call 0x002895F0 */

loc_00289944: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00289930; /* jl: less (signed <) */

loc_00289949: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00289950
 * Original: 0x00289950 - 0x00289C41 (753 bytes, 247 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289950(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    ecx = MEM32(ebp + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00289969u); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_00289969: ;
    ecx = edi;
    PUSH32(esp, 0x00289970u); RECOMP_ABI_CALL(0x00265B40u, sub_00265B40); /* call 0x00265B40 */

loc_00289970: ;
    ecx = edi;
    PUSH32(esp, 0x00289977u); RECOMP_ABI_CALL(0x00265C80u, sub_00265C80); /* call 0x00265C80 */

loc_00289977: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0028997Fu); RECOMP_ABI_CALL(0x00264500u, sub_00264500); /* call 0x00264500 */

loc_0028997F: ;
    eax = MEM32(0x5BDC5C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028999Bu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028999B: ;
    eax = MEM32(0x5BDC60);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002899B7u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002899B7: ;
    eax = MEM32(0x5BDC38);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002899D3u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002899D3: ;
    eax = MEM32(0x5BDC20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002899EFu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_002899EF: ;
    eax = MEM32(edi + 0xC0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289A0Cu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289A0C: ;
    eax = MEM32(0x5BDC4C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289A28u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289A28: ;
    eax = MEM32(edi + 0xB0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289A45u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289A45: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00289A4Cu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_00289A4C: ;
    eax = MEM32(edi + 0xB0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    esp = esp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289A6Cu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289A6C: ;
    eax = MEM32(0x5BDC4C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289A88u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289A88: ;
    eax = MEM32(edi + 0xC0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289AA5u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289AA5: ;
    eax = MEM32(0x5BDC20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289AC1u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289AC1: ;
    eax = MEM32(0x5BDC38);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289ADDu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289ADD: ;
    PUSH32(esp, 0x00289AE2u); RECOMP_ABI_CALL(0x002A0DD0u, sub_002A0DD0); /* call 0x002A0DD0 */

loc_00289AE2: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00289B04; /* je: equal / zero */

loc_00289AF8: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM8(esp + 0x14) = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* setne */
    goto loc_00289B09;

loc_00289B04: ;
    MEM8(esp + 0x14) = 0;

loc_00289B09: ;
    eax = MEM32(0x5BDC00);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289B22u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289B22: ;
    eax = MEM32(0x5BDC40);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289B3Eu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289B3E: ;
    eax = MEM32(0x5BDC34);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = ebx + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289B5Au); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289B5A: ;
    SET_LO8(ebx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289B7D; /* jne: not equal / not zero */

loc_00289B62: ;
    eax = MEM32(0x5BDC20);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289B6Fu); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_00289B6F: ;
    ecx = MEM32(edi + 0xAC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00289B7Du); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_00289B7D: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00289B84u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_00289B84: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289BA6; /* jne: not equal / not zero */

loc_00289B8B: ;
    edx = MEM32(edi + 0xAC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00289B99u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_00289B99: ;
    eax = MEM32(0x5BDC20);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289BA6u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_00289BA6: ;
    eax = MEM32(0x5BDC34);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289BC2u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289BC2: ;
    eax = MEM32(0x5BDC40);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289BDEu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289BDE: ;
    eax = MEM32(0x5BDC00);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289BFAu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289BFA: ;
    eax = MEM32(0x5BDC60);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289C16u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289C16: ;
    eax = MEM32(0x5BDC5C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289C32u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289C32: ;
    ecx = MEM32(ebp + 0x44);
    PUSH32(esp, 0x00289C3Au); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_00289C3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00289C50
 * Original: 0x00289C50 - 0x00289FE2 (914 bytes, 303 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289C50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289C50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x00289C60u); RECOMP_ABI_CALL(0x00264E60u, sub_00264E60); /* call 0x00264E60 */

loc_00289C60: ;
    ecx = MEM32(ebx + 0x44);
    esi = MEM32(ebx + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00289C6Fu); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_00289C6F: ;
    eax = MEM32(0x5BDC5C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289C8Bu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289C8B: ;
    eax = MEM32(0x5BDC60);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289CA7u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289CA7: ;
    eax = MEM32(0x5BDC20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289CC3u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289CC3: ;
    eax = MEM32(edi + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289CDDu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289CDD: ;
    eax = MEM32(edi + 0xB0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289CFAu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289CFA: ;
    eax = MEM32(0x5BDC40);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289D16u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289D16: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00289D1Du); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_00289D1D: ;
    eax = MEM32(0x5BDC40);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    esp = esp + 8;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289D3Cu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289D3C: ;
    eax = MEM32(edi + 0xB0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289D59u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289D59: ;
    eax = MEM32(edi + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289D73u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289D73: ;
    eax = MEM32(0x5BDC20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289D8Fu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289D8F: ;
    eax = MEM32(edi + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289DA9u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289DA9: ;
    eax = MEM32(edi + 0xB4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289DC6u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289DC6: ;
    eax = MEM32(0x5BDC20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289DE2u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289DE2: ;
    eax = MEM32(0x5BDBFC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289DFEu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289DFE: ;
    eax = MEM32(0x5BDC34);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289E1Au); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289E1A: ;
    eax = MEM32(0x5BDC40);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289E36u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289E36: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00289E3Du); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_00289E3D: ;
    eax = MEM32(0x5BDC40);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    esp = esp + 8;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289E5Cu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289E5C: ;
    eax = MEM32(0x5BDC34);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289E78u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289E78: ;
    eax = MEM32(0x5BDBFC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289E94u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289E94: ;
    eax = MEM32(0x5BDC20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289EB0u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289EB0: ;
    eax = MEM32(edi + 0xB4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289ECDu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289ECD: ;
    eax = MEM32(edi + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289EE7u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289EE7: ;
    eax = MEM32(0x5BDC00);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289F03u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289F03: ;
    eax = MEM32(0x5BDC44);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00289F1Fu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289F1F: ;
    eax = MEM32(0x5BDC34);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289F3Bu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00289F3B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00289F42u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_00289F42: ;
    eax = MEM32(0x5BDC34);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebp = MEM32(edx + ecx * 4);
    esp = esp + 8;
    edi = edi + ebp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289F63u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289F63: ;
    eax = MEM32(0x5BDC44);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289F7Fu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289F7F: ;
    eax = MEM32(0x5BDC00);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289F9Bu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289F9B: ;
    eax = MEM32(0x5BDC60);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289FB7u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289FB7: ;
    eax = MEM32(0x5BDC5C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00289FD3u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_00289FD3: ;
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, 0x00289FDBu); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_00289FDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00289FF0
 * Original: 0x00289FF0 - 0x0028B1F1 (4609 bytes, 1584 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289FF0(void)
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

loc_00289FF0: ;
    esp = esp - 0x94;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B1E7; /* je: equal / zero */

loc_0028A004: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B1E7; /* je: equal / zero */

loc_0028A00F: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0028A019u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A019: ;
    ecx = MEM32(edi + 0x20);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0028A029u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A029: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0028A039u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A039: ;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0028A049u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A049: ;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0028A059u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A059: ;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0028A066u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A066: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0028A073u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A073: ;
    ecx = MEM32(edi + 0x94);
    edx = MEM32(edi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0028A082u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A082: ;
    ecx = MEM32(edi + 0x98);
    edx = MEM32(edi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0028A091u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A091: ;
    SET_LO8(eax, MEM8(0x5BDFF4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = MEM32(esp + 0xA8);
    esi = MEM32(ebx + 0x34);
    if (TEST_NZ(_fa, _fb)) goto loc_0028A0F1; /* jne: not equal / not zero */

loc_0028A0A4: ;
    ecx = MEM32(ebx + 0x20);
    eax = MEM32(0x5BC508);
    MEM8(esp + 0x1B) = 1;
    edx = MEM32(ecx);
    ebp = MEM32(eax + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    MEM8(0x5BDFF4) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0028A0C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A0C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028A0E4; /* je: equal / zero */

loc_0028A0C6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x23;
    PUSH32(esp, eax);
    PUSH32(esp, 0x405F9C);
    PUSH32(esp, 7);
    PUSH32(esp, ebp);
    MEM8(esp + 0x33) = 0;
    PUSH32(esp, 0x0028A0E1u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_0028A0E1: ;
    esp = esp + 0x18;

loc_0028A0E4: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(0x471860) = (TEST_Z(_fa, _fb)) ? 1 : 0; /* sete */

loc_0028A0F1: ;
    SET_LO8(eax, MEM8(0x471860));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028A3FB; /* je: equal / zero */

loc_0028A0FE: ;
    eax = MEM32(0x5BDC80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028A137; /* jne: not equal / not zero */

loc_0028A107: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0028A113u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028A113: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A119u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_0028A119: ;
    esp = esp + 8;
    MEM32(0x5BDC80) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0028A12Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A12A: ;
    ecx = MEM32(0x5BDC80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0028A137u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A137: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0028A141u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A141: ;
    ecx = MEM32(edi + 0x98);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0028A14Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A14E: ;
    eax = MEM32(edi + 0x88);
    ecx = MEM32(ebx + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A15Du); RECOMP_ABI_CALL(0x002634A0u, sub_002634A0); /* call 0x002634A0 */

loc_0028A15D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028A168; /* je: equal / zero */

loc_0028A161: ;
    ecx = edi;
    PUSH32(esp, 0x0028A168u); RECOMP_ABI_CALL(0x00258930u, sub_00258930); /* call 0x00258930 */

loc_0028A168: ;
    eax = MEM32(0x5BDC88);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A184u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028A184: ;
    eax = MEM32(0x5BDC8C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A1A0u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028A1A0: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(edi + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0028A1BA; /* jp: parity */

loc_0028A1B2: ;
    eax = MEM32(0x5BDC90);
    PUSH32(esp, eax);
    goto loc_0028A1C1;

loc_0028A1BA: ;
    ecx = MEM32(0x5BDC94);
    PUSH32(esp, ecx);

loc_0028A1C1: ;
    ecx = esi;
    PUSH32(esp, 0x0028A1C8u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028A1C8: ;
    eax = MEM32(0x5BDC6C);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A1E4u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028A1E4: ;
    eax = MEM32(edi + 0x24);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A1FEu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028A1FE: ;
    eax = MEM32(0x5BDC78);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A21Au); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028A21A: ;
    eax = MEM32(edi + 0x94);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A237u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028A237: ;
    eax = MEM32(0x5BDC80);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A253u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028A253: ;
    eax = MEM32(edi + 0x20);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A26Du); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028A26D: ;
    eax = MEM32(0x5BDC7C);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A289u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028A289: ;
    eax = MEM32(edi + 0x98);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A2A6u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028A2A6: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0028A2ADu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028A2AD: ;
    eax = MEM32(edi + 0x98);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    esp = esp + 8;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(ecx + edx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028A2CDu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028A2CD: ;
    eax = MEM32(0x5BDC7C);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(ecx + edx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028A2E9u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028A2E9: ;
    eax = MEM32(edi + 0x20);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(ecx + edx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028A303u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028A303: ;
    eax = MEM32(0x5BDC80);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(ecx + edx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028A31Fu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028A31F: ;
    eax = MEM32(edi + 0x94);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(ecx + edx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028A33Cu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028A33C: ;
    eax = MEM32(0x5BDC78);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(ecx + edx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028A358u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028A358: ;
    eax = MEM32(edi + 0x24);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(ecx + edx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028A372u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028A372: ;
    eax = MEM32(0x5BDC6C);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(ecx + edx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028A38Eu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028A38E: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(edi + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    ecx = esi;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0028A3AB; /* jp: parity */

loc_0028A3A2: ;
    edx = MEM32(0x5BDC90);
    PUSH32(esp, edx);
    goto loc_0028A3B1;

loc_0028A3AB: ;
    eax = MEM32(0x5BDC94);
    PUSH32(esp, eax);

loc_0028A3B1: ;
    PUSH32(esp, 0x0028A3B6u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028A3B6: ;
    eax = MEM32(0x5BDC8C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028A3D2u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028A3D2: ;
    eax = MEM32(0x5BDC88);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028A3EEu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028A3EE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = esp + 0x94;
    esp += 8; return; /* ret 4 */

loc_0028A3FB: ;
    ecx = MEM32(0x5BDA90);
    ebx = MEM32(0x5BDC9C);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x0028A410u); RECOMP_ABI_CALL(0x001EA500u, sub_001EA500); /* call 0x001EA500 */

loc_0028A410: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028A44F; /* jle: less or equal (signed <=) */

loc_0028A41A: ;
    /* nop */

loc_0028A420: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0028A42Au); RECOMP_ABI_CALL(0x001F7A50u, sub_001F7A50); /* call 0x001F7A50 */

loc_0028A42A: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(edx + ecx * 4);
    PUSH32(esp, 0x2782C0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + ebp * 4 + 0x30) = ecx;
    PUSH32(esp, 0x0028A443u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028A443: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 0xC;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028A420; /* jl: less (signed <) */

loc_0028A44F: ;
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, 0);
    MEM32(0x5BDC98) = edi;
    PUSH32(esp, 0x0028A45Fu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0028A45F: ;
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028A469u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0028A469: ;
    ebp = MEM32(esp + 0xA8);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0028A477u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028A477: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028A51E; /* jle: less or equal (signed <=) */

loc_0028A48E: ;
    edi = edi;

loc_0028A490: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028A49Eu); RECOMP_ABI_CALL(0x001F7A50u, sub_001F7A50); /* call 0x001F7A50 */

loc_0028A49E: ;
    ecx = MEM32(0x5BD9C8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0028A4B0u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028A4B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028A502; /* je: equal / zero */

loc_0028A4B4: ;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(eax + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028A4C5; /* jge: greater or equal (signed >=) */

loc_0028A4BF: ;
    ebp = MEM32(ebx + 8);
    MEM32(eax + 8) = ebp;

loc_0028A4C5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028A4E5; /* jl: less (signed <) */

loc_0028A4CA: ;
    eax = ebp + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0028A4E5; /* jl: less (signed <) */

loc_0028A4D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0028A4DB; /* jg: greater (signed >) */

loc_0028A4D6: ;
    MEM32(ebx + 8) = eax;
    goto loc_0028A4E5;

loc_0028A4DB: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028A4E5u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028A4E5: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028A502; /* je: equal / zero */

loc_0028A4EC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0028A502; /* jl: less (signed <) */

loc_0028A4F0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028A502; /* jge: greater or equal (signed >=) */

loc_0028A4F4: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(ebx + 0x10);
    eax = MEM32(esp + eax * 4 + 0x24);
    MEM32(edx + ebp * 4) = eax;

loc_0028A502: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028A490; /* jl: less (signed <) */

loc_0028A517: ;
    ebp = MEM32(esp + 0xA8);

loc_0028A51E: ;
    ecx = MEM32(ebp + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028A52Au); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_0028A52A: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0028A532u); RECOMP_ABI_CALL(0x00266390u, sub_00266390); /* call 0x00266390 */

loc_0028A532: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0028A53Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A53C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028AD41; /* jl: less (signed <) */

loc_0028A545: ;
    eax = MEM32(0x5BDC80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028A57D; /* jne: not equal / not zero */

loc_0028A54E: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A559u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028A559: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028A55Fu); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_0028A55F: ;
    esp = esp + 8;
    MEM32(0x5BDC80) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0028A570u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A570: ;
    ecx = MEM32(0x5BDC80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0028A57Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A57D: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0028A587u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A587: ;
    ecx = MEM32(edi + 0x98);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0028A594u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A594: ;
    eax = MEM32(0x5BDC88);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028A5C3; /* jge: greater or equal (signed >=) */

loc_0028A5BD: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028A5C3: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028A5D5; /* jge: greater or equal (signed >=) */

loc_0028A5CF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028A5E4;

loc_0028A5D5: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028A5E4u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028A5E4: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028A5FBu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028A5FB: ;
    eax = MEM32(0x5BDC84);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028A62A; /* jge: greater or equal (signed >=) */

loc_0028A624: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028A62A: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028A63C; /* jge: greater or equal (signed >=) */

loc_0028A636: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028A64B;

loc_0028A63C: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028A64Bu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028A64B: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028A662u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028A662: ;
    eax = MEM32(0x5BDC6C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028A691; /* jge: greater or equal (signed >=) */

loc_0028A68B: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028A691: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028A6A3; /* jge: greater or equal (signed >=) */

loc_0028A69D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028A6B2;

loc_0028A6A3: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028A6B2u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028A6B2: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028A6C9u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028A6C9: ;
    eax = MEM32(edi + 0x24);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028A6F6; /* jge: greater or equal (signed >=) */

loc_0028A6F0: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028A6F6: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028A708; /* jge: greater or equal (signed >=) */

loc_0028A702: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028A717;

loc_0028A708: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028A717u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028A717: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028A72Eu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028A72E: ;
    eax = MEM32(0x5BDC78);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028A75D; /* jge: greater or equal (signed >=) */

loc_0028A757: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028A75D: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028A76F; /* jge: greater or equal (signed >=) */

loc_0028A769: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028A77E;

loc_0028A76F: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028A77Eu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028A77E: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028A795u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028A795: ;
    eax = MEM32(edi + 0x94);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028A7C5; /* jge: greater or equal (signed >=) */

loc_0028A7BF: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028A7C5: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028A7D7; /* jge: greater or equal (signed >=) */

loc_0028A7D1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028A7E6;

loc_0028A7D7: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028A7E6u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028A7E6: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028A7FDu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028A7FD: ;
    eax = MEM32(0x5BDC80);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028A82C; /* jge: greater or equal (signed >=) */

loc_0028A826: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028A82C: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028A83E; /* jge: greater or equal (signed >=) */

loc_0028A838: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028A84D;

loc_0028A83E: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028A84Du); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028A84D: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028A864u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028A864: ;
    eax = MEM32(edi + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028A891; /* jge: greater or equal (signed >=) */

loc_0028A88B: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028A891: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028A8A3; /* jge: greater or equal (signed >=) */

loc_0028A89D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028A8B2;

loc_0028A8A3: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028A8B2u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028A8B2: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028A8C9u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028A8C9: ;
    eax = MEM32(0x5BDC7C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028A8F8; /* jge: greater or equal (signed >=) */

loc_0028A8F2: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028A8F8: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028A90A; /* jge: greater or equal (signed >=) */

loc_0028A904: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028A919;

loc_0028A90A: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028A919u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028A919: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028A930u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028A930: ;
    eax = MEM32(edi + 0x98);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028A960; /* jge: greater or equal (signed >=) */

loc_0028A95A: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028A960: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028A972; /* jge: greater or equal (signed >=) */

loc_0028A96C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028A981;

loc_0028A972: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028A981u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028A981: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028A998u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028A998: ;
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0028A9A6u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028A9A6: ;
    eax = MEM32(edi + 0x98);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    ebx = MEM32(ecx + edx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 8);
    edx = MEM32(ecx + edx * 4 + -4);
    ecx = MEM32(ebx + 0x1C);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028A9E7; /* je: equal / zero */

loc_0028A9D9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028A9E7; /* jne: not equal / not zero */

loc_0028A9DD: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028A9E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028A9E4: ;
    esp = esp + 8;

loc_0028A9E7: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028A9FE; /* jne: not equal / not zero */

loc_0028A9F7: ;
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;

loc_0028A9FE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028AA07u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AA07: ;
    eax = MEM32(0x5BDC7C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(edx + ebp * 4);
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028AA44; /* je: equal / zero */

loc_0028AA36: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028AA44; /* jne: not equal / not zero */

loc_0028AA3A: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028AA41u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028AA41: ;
    esp = esp + 8;

loc_0028AA44: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028AA5B; /* jne: not equal / not zero */

loc_0028AA54: ;
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;

loc_0028AA5B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028AA64u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AA64: ;
    eax = MEM32(edi + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(edx + ebp * 4);
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028AA9F; /* je: equal / zero */

loc_0028AA91: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028AA9F; /* jne: not equal / not zero */

loc_0028AA95: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028AA9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028AA9C: ;
    esp = esp + 8;

loc_0028AA9F: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028AAB6; /* jne: not equal / not zero */

loc_0028AAAF: ;
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;

loc_0028AAB6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028AABFu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AABF: ;
    eax = MEM32(0x5BDC80);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(edx + ebp * 4);
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028AAFC; /* je: equal / zero */

loc_0028AAEE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028AAFC; /* jne: not equal / not zero */

loc_0028AAF2: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028AAF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028AAF9: ;
    esp = esp + 8;

loc_0028AAFC: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028AB13; /* jne: not equal / not zero */

loc_0028AB0C: ;
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;

loc_0028AB13: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028AB1Cu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AB1C: ;
    eax = MEM32(edi + 0x94);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(edx + ebp * 4);
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028AB5A; /* je: equal / zero */

loc_0028AB4C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028AB5A; /* jne: not equal / not zero */

loc_0028AB50: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028AB57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028AB57: ;
    esp = esp + 8;

loc_0028AB5A: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028AB71; /* jne: not equal / not zero */

loc_0028AB6A: ;
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;

loc_0028AB71: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028AB7Au); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AB7A: ;
    eax = MEM32(0x5BDC78);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(edx + ebp * 4);
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028ABB7; /* je: equal / zero */

loc_0028ABA9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028ABB7; /* jne: not equal / not zero */

loc_0028ABAD: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028ABB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028ABB4: ;
    esp = esp + 8;

loc_0028ABB7: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028ABCE; /* jne: not equal / not zero */

loc_0028ABC7: ;
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;

loc_0028ABCE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028ABD7u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028ABD7: ;
    eax = MEM32(edi + 0x24);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    edi = edi + ebx;
    ebx = MEM32(edx + edi * 4);
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028AC12; /* je: equal / zero */

loc_0028AC04: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028AC12; /* jne: not equal / not zero */

loc_0028AC08: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028AC0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028AC0F: ;
    esp = esp + 8;

loc_0028AC12: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028AC28; /* jne: not equal / not zero */

loc_0028AC25: ;
    MEM32(ebx + 0x18) = ebp;

loc_0028AC28: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028AC31u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AC31: ;
    eax = MEM32(0x5BDC6C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebx = ebx + edi;
    edi = MEM32(edx + ebx * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028AC6E; /* je: equal / zero */

loc_0028AC60: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028AC6E; /* jne: not equal / not zero */

loc_0028AC64: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028AC6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028AC6B: ;
    esp = esp + 8;

loc_0028AC6E: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028AC81; /* jne: not equal / not zero */

loc_0028AC7E: ;
    MEM32(edi + 0x18) = ebp;

loc_0028AC81: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028AC8Au); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AC8A: ;
    eax = MEM32(0x5BDC84);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebx = ebx + edi;
    edi = MEM32(edx + ebx * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028ACC7; /* je: equal / zero */

loc_0028ACB9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028ACC7; /* jne: not equal / not zero */

loc_0028ACBD: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028ACC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028ACC4: ;
    esp = esp + 8;

loc_0028ACC7: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028ACDA; /* jne: not equal / not zero */

loc_0028ACD7: ;
    MEM32(edi + 0x18) = ebp;

loc_0028ACDA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028ACE3u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028ACE3: ;
    eax = MEM32(0x5BDC88);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebx = ebx + edi;
    edi = MEM32(edx + ebx * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028AD20; /* je: equal / zero */

loc_0028AD12: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028AD20; /* jne: not equal / not zero */

loc_0028AD16: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028AD1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028AD1D: ;
    esp = esp + 8;

loc_0028AD20: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028AD33; /* jne: not equal / not zero */

loc_0028AD30: ;
    MEM32(edi + 0x18) = ebp;

loc_0028AD33: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028AD3Cu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AD3C: ;
    goto loc_0028B1D5;

loc_0028AD41: ;
    eax = MEM32(0x5BDC88);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028AD70; /* jge: greater or equal (signed >=) */

loc_0028AD6A: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028AD70: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028AD82; /* jge: greater or equal (signed >=) */

loc_0028AD7C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028AD91;

loc_0028AD82: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028AD91u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028AD91: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028ADA8u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028ADA8: ;
    eax = MEM32(0x5BDC84);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028ADD7; /* jge: greater or equal (signed >=) */

loc_0028ADD1: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028ADD7: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028ADE9; /* jge: greater or equal (signed >=) */

loc_0028ADE3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028ADF8;

loc_0028ADE9: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028ADF8u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028ADF8: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028AE0Fu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AE0F: ;
    eax = MEM32(0x5BDC6C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028AE3E; /* jge: greater or equal (signed >=) */

loc_0028AE38: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028AE3E: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028AE50; /* jge: greater or equal (signed >=) */

loc_0028AE4A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028AE5F;

loc_0028AE50: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028AE5Fu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028AE5F: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028AE76u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AE76: ;
    eax = MEM32(0x5BDC78);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028AEA5; /* jge: greater or equal (signed >=) */

loc_0028AE9F: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028AEA5: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028AEB7; /* jge: greater or equal (signed >=) */

loc_0028AEB1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028AEC6;

loc_0028AEB7: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028AEC6u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028AEC6: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028AEDDu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AEDD: ;
    eax = MEM32(edi + 0x24);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028AF0A; /* jge: greater or equal (signed >=) */

loc_0028AF04: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028AF0A: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028AF1C; /* jge: greater or equal (signed >=) */

loc_0028AF16: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028AF2B;

loc_0028AF1C: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028AF2Bu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028AF2B: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028AF42u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AF42: ;
    eax = MEM32(edi + 0x94);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028AF72; /* jge: greater or equal (signed >=) */

loc_0028AF6C: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = edx;

loc_0028AF72: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028AF84; /* jge: greater or equal (signed >=) */

loc_0028AF7E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    goto loc_0028AF93;

loc_0028AF84: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028AF93u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028AF93: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028AFAAu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028AFAA: ;
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0028AFB8u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028AFB8: ;
    eax = MEM32(edi + 0x94);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    ebx = MEM32(ecx + edx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + ebp * 4);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 8);
    edx = MEM32(ecx + edx * 4 + -4);
    ecx = MEM32(ebx + 0x1C);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028AFF9; /* je: equal / zero */

loc_0028AFEB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028AFF9; /* jne: not equal / not zero */

loc_0028AFEF: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028AFF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028AFF6: ;
    esp = esp + 8;

loc_0028AFF9: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028B010; /* jne: not equal / not zero */

loc_0028B009: ;
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;

loc_0028B010: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028B019u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028B019: ;
    eax = MEM32(edi + 0x24);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + ebx;
    ebx = MEM32(edx + ebp * 4);
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B054; /* je: equal / zero */

loc_0028B046: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028B054; /* jne: not equal / not zero */

loc_0028B04A: ;
    eax = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028B051u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B051: ;
    esp = esp + 8;

loc_0028B054: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028B06B; /* jne: not equal / not zero */

loc_0028B064: ;
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;

loc_0028B06B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0028B074u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028B074: ;
    eax = MEM32(edi + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028B08Eu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028B08E: ;
    eax = MEM32(edi + 0x98);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028B0ABu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028B0AB: ;
    eax = MEM32(0x5BDC74);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028B0C7u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028B0C7: ;
    eax = MEM32(0x5BDC68);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028B0E3u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028B0E3: ;
    eax = MEM32(esp + 0xA8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028B0F1u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028B0F1: ;
    eax = MEM32(0x5BDC68);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebp = MEM32(edx + ecx * 4);
    esp = esp + 8;
    ebx = ebx + ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028B112u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028B112: ;
    eax = MEM32(0x5BDC74);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028B12Eu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028B12E: ;
    eax = MEM32(edi + 0x98);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebx = ebx + MEM32(edx + ecx * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028B14Bu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028B14B: ;
    edi = MEM32(edi + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(edi + 8);
    ecx = MEM32(esi + 0x44);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    edx = edx + MEM32(ecx + eax * 4);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028B165u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028B165: ;
    eax = MEM32(0x5BDC78);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028B181u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028B181: ;
    eax = MEM32(0x5BDC6C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028B19Du); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028B19D: ;
    eax = MEM32(0x5BDC84);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028B1B9u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028B1B9: ;
    eax = MEM32(0x5BDC88);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028B1D5u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028B1D5: ;
    eax = MEM32(esp + 0xA8);
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, 0x0028B1E4u); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028B1E4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0028B1E7: ;
    POP32(esp, edi);
    esp = esp + 0x94;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0028B200
 * Original: 0x0028B200 - 0x0028B273 (115 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028B200: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0028B20F; /* je: equal / zero */

loc_0028B20C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028B20F: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B22B; /* je: equal / zero */

loc_0028B216: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B22B; /* jne: not equal / not zero */

loc_0028B226: ;
    PUSH32(esp, 0x0028B22Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028B22B: ;
    MEM32(esi + 0x20) = edi;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B239; /* je: equal / zero */

loc_0028B236: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028B239: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B255; /* je: equal / zero */

loc_0028B240: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B255; /* jne: not equal / not zero */

loc_0028B250: ;
    PUSH32(esp, 0x0028B255u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028B255: ;
    MEM32(esi + 0x24) = edi;
    eax = MEM32(esi + 0x20);
    edx = MEM32(0x5BE6A0);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028B26Eu); RECOMP_ABI_CALL(0x00289850u, sub_00289850); /* call 0x00289850 */

loc_0028B26E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0028B280
 * Original: 0x0028B280 - 0x0028B437 (439 bytes, 168 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028B280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0028B291; /* je: equal / zero */

loc_0028B28E: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028B291: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B2AD; /* je: equal / zero */

loc_0028B298: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B2AD; /* jne: not equal / not zero */

loc_0028B2A8: ;
    PUSH32(esp, 0x0028B2ADu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028B2AD: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esi + 0x3C) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B31D; /* jne: not equal / not zero */

loc_0028B2B6: ;
    ecx = esi;
    PUSH32(esp, 0x0028B2BDu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028B2BD: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0028B2DB; /* je: equal / zero */

loc_0028B2C6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B2DB; /* jne: not equal / not zero */

loc_0028B2D6: ;
    PUSH32(esp, 0x0028B2DBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028B2DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028B2E1u); RECOMP_ABI_CALL(0x00296FD0u, sub_00296FD0); /* call 0x00296FD0 */

loc_0028B2E1: ;
    esp = esp + 4;
    ecx = esi;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x0028B2EEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028B2EE: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0028B30C; /* je: equal / zero */

loc_0028B2F7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B30C; /* jne: not equal / not zero */

loc_0028B307: ;
    PUSH32(esp, 0x0028B30Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028B30C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028B312u); RECOMP_ABI_CALL(0x001E0AD0u, sub_001E0AD0); /* call 0x001E0AD0 */

loc_0028B312: ;
    esp = esp + 4;
    MEM32(esi + 0x20) = eax;
    goto loc_0028B421;

loc_0028B31D: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028B39F; /* jne: not equal / not zero */

loc_0028B324: ;
    ecx = esi;
    PUSH32(esp, 0x0028B32Bu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028B32B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028B331u); RECOMP_ABI_CALL(0x00295300u, sub_00295300); /* call 0x00295300 */

loc_0028B331: ;
    ecx = MEM32(ebp + 4);
    esp = esp + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    MEM32(ebp + 4) = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B359; /* je: equal / zero */

loc_0028B344: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B359; /* jne: not equal / not zero */

loc_0028B354: ;
    PUSH32(esp, 0x0028B359u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028B359: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(edi + 8) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0028B363; /* je: equal / zero */

loc_0028B360: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028B363: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B37F; /* je: equal / zero */

loc_0028B36A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B37F; /* jne: not equal / not zero */

loc_0028B37A: ;
    PUSH32(esp, 0x0028B37Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028B37F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x24) = edi;
    SET_LO8(ebx, 1);
    if (TEST_Z(_fa, _fb)) goto loc_0028B39F; /* je: equal / zero */

loc_0028B388: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B39F; /* jne: not equal / not zero */

loc_0028B398: ;
    ecx = edi;
    PUSH32(esp, 0x0028B39Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028B39F: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028B41D; /* jne: not equal / not zero */

loc_0028B3A6: ;
    ecx = esi;
    PUSH32(esp, 0x0028B3ADu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028B3AD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028B3B3u); RECOMP_ABI_CALL(0x001E08E0u, sub_001E08E0); /* call 0x001E08E0 */

loc_0028B3B3: ;
    ecx = MEM32(ebp + 4);
    esp = esp + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    MEM32(ebp + 4) = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_0028B3DD; /* je: equal / zero */

loc_0028B3CB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B3DD; /* jne: not equal / not zero */

loc_0028B3D8: ;
    PUSH32(esp, 0x0028B3DDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028B3DD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(edi + 8) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0028B3E7; /* je: equal / zero */

loc_0028B3E4: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028B3E7: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B400; /* je: equal / zero */

loc_0028B3EE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B400; /* jne: not equal / not zero */

loc_0028B3FB: ;
    PUSH32(esp, 0x0028B400u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028B400: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x20) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0028B421; /* je: equal / zero */

loc_0028B407: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B421; /* jne: not equal / not zero */

loc_0028B414: ;
    ecx = edi;
    PUSH32(esp, 0x0028B41Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028B41B: ;
    goto loc_0028B421;

loc_0028B41D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B430; /* je: equal / zero */

loc_0028B421: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028B430u); RECOMP_ABI_CALL(0x0028B200u, sub_0028B200); /* call 0x0028B200 */

loc_0028B430: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028B440
 * Original: 0x0028B440 - 0x0028B631 (497 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B440(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028B440: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 0x24));
    esp = esp - 0x14;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B62B; /* je: equal / zero */

loc_0028B452: ;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x14), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028B62B; /* jne: not equal / not zero */

loc_0028B45C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5BE4E8);
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(edx + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x14) = ebp;
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x28) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0028B575; /* je: equal / zero */

loc_0028B49E: ;
    PUSH32(esp, 0x0028B4A3u); RECOMP_ABI_CALL(0x002A0470u, sub_002A0470); /* call 0x002A0470 */

loc_0028B4A3: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0028B4B0u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028B4B0: ;
    ecx = MEM32(esi + 0x34);
    edi = MEM32(esi + 0x58);
    ebp = MEM32(esi + 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0028B4BFu); RECOMP_ABI_CALL(0x0019A8A0u, sub_0019A8A0); /* call 0x0019A8A0 */

loc_0028B4BF: ;
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x0028B4C8u); RECOMP_ABI_CALL(0x0025E240u, sub_0025E240); /* call 0x0025E240 */

loc_0028B4C8: ;
    edi = eax;
    eax = MEM32(ebx + 0x18);
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0028B4E0u); RECOMP_ABI_CALL(0x0024FA40u, sub_0024FA40); /* call 0x0024FA40 */

loc_0028B4E0: ;
    ecx = MEM32(0x5BE184);
    edx = MEM32(ecx + 8);
    eax = MEM32(0x5BE0C8);
    ecx = MEM32(eax + 8);
    edx = edx + ebx;
    ecx = ecx + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0028B4FEu); RECOMP_ABI_CALL(0x00294B10u, sub_00294B10); /* call 0x00294B10 */

loc_0028B4FE: ;
    eax = MEM32(esp + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028B566; /* jle: less or equal (signed <=) */

loc_0028B508: ;
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028B51C; /* jl: less (signed <) */

loc_0028B510: ;
    PUSH32(esp, 0x1A5E80);
    ecx = ebp;
    PUSH32(esp, 0x0028B51Cu); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0028B51C: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    ecx = eax + 1;
    MEM32(ebp + 0x14) = ecx;
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + edi * 4);
    edx = MEM32(0x5BA824);
    ecx = ecx + MEM32(edx + 8);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, ecx);
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028B54Bu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0028B54B: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x1C);
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028B55Du); RECOMP_ABI_CALL(0x0025E380u, sub_0025E380); /* call 0x0025E380 */

loc_0028B55D: ;
    eax = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028B508; /* jl: less (signed <) */

loc_0028B566: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x0028B573u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028B573: ;
    goto loc_0028B5D9;

loc_0028B575: ;
    edx = MEM32(0x5BE4E4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0028B583u); RECOMP_ABI_CALL(0x00274470u, sub_00274470); /* call 0x00274470 */

loc_0028B583: ;
    SET_LO8(ecx, MEM8(eax + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028B59D; /* jne: not equal / not zero */

loc_0028B58A: ;
    eax = MEM32(0x5BE4E0);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0028B597u); RECOMP_ABI_CALL(0x00274470u, sub_00274470); /* call 0x00274470 */

loc_0028B597: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028B5DD; /* jne: not equal / not zero */

loc_0028B59D: ;
    eax = MEM32(esi + 0xF8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0028B5DD; /* jle: less or equal (signed <=) */

loc_0028B5AA: ;
    edx = MEM32(eax + 0x10);
    ebx = MEM32(edx + ecx * 4 + -4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028B5DD; /* je: equal / zero */

loc_0028B5B5: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x0028B5BDu); RECOMP_ABI_CALL(0x0025E210u, sub_0025E210); /* call 0x0025E210 */

loc_0028B5BD: ;
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x1C) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0028B5CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B5CB: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028B5D4u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028B5D4: ;
    MEM8(esp + 0x28) = 1;

loc_0028B5D9: ;
    ebp = MEM32(esp + 0x18);

loc_0028B5DD: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028B5EEu); RECOMP_ABI_CALL(0x00288E60u, sub_00288E60); /* call 0x00288E60 */

loc_0028B5EE: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B616; /* je: equal / zero */

loc_0028B5F6: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028B603u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_0028B603: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0028B60Cu); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_0028B60C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0028B616: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B627; /* je: equal / zero */

loc_0028B61E: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0028B627u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_0028B627: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0028B62B: ;
    eax = 0; /* xor self */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0028B640
 * Original: 0x0028B640 - 0x0028B651 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0028B640(void)
{

loc_0028B640: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028B64Eu); RECOMP_ABI_CALL(0x00289FF0u, sub_00289FF0); /* call 0x00289FF0 */

loc_0028B64E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0028B660
 * Original: 0x0028B660 - 0x0028B86D (525 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028B660: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    SET_LO8(eax, MEM8(esi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    ebx = MEM32(edi + 0x34);
    MEM32(esp + 0x14) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028B692; /* jne: not equal / not zero */

loc_0028B67D: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0028B687u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B687: ;
    ecx = esi;
    MEM16(esi + 0x3C) = LO16(eax);
    PUSH32(esp, 0x0028B692u); RECOMP_ABI_CALL(0x0026BBB0u, sub_0026BBB0); /* call 0x0026BBB0 */

loc_0028B692: ;
    ecx = MEM32(esi + 0x44);
    ebp = MEM32(ecx + 8);
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x30) = ebp;
    PUSH32(esp, 0x0028B6A8u); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_0028B6A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028B85B; /* jle: less or equal (signed <=) */

loc_0028B6B6: ;
    edx = MEM32(esi + 0x44);
    ecx = MEM32(edx + 0x10);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028B754; /* jle: less or equal (signed <=) */

loc_0028B6D9: ;
    /* nop */

loc_0028B6E0: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(eax + ecx * 4);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(ebx + 0x44);
    ecx = MEM32(eax + edx * 4);
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0xA);
    edi = edi + ecx;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + 0x10);
    esi = MEM32(edx + edi * 4);
    ebx = MEM32(esi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028B714; /* jge: greater or equal (signed >=) */

loc_0028B70C: ;
    eax = ebx + 1;
    MEM32(esi + 8) = eax;
    goto loc_0028B721;

loc_0028B714: ;
    PUSH32(esp, 4);
    ecx = ebx + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028B721u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028B721: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(edx + ebx * 4) = ebp;
    PUSH32(esp, 0x0028B732u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028B732: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 8);
    ebx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028B6E0; /* jl: less (signed <) */

loc_0028B74A: ;
    edi = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x34);
    eax = ecx;

loc_0028B754: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B7E0; /* je: equal / zero */

loc_0028B75F: ;
    ebp = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 8);
    ecx = ebp + edx * 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0028B7E0; /* jae: above or equal (unsigned >=) */

loc_0028B771: ;
    SET_LO8(eax, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = MEM32(ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0028B7B0; /* je: equal / zero */

loc_0028B77B: ;
    eax = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0028B782u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B782: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B7B0; /* je: equal / zero */

loc_0028B789: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028B7CD; /* jne: not equal / not zero */

loc_0028B78E: ;
    eax = MEM32(0x5BD9C8);
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0028B79Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B79E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028B7B0; /* je: equal / zero */

loc_0028B7A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028B7ABu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028B7AB: ;
    esp = esp + 8;
    goto loc_0028B7C8;

loc_0028B7B0: ;
    ecx = MEM32(edi + 0x1C);
    eax = MEM32(esi + 0x18);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0028B7C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B7C0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028B7D8; /* je: equal / zero */

loc_0028B7C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028B7D8; /* je: equal / zero */

loc_0028B7CD: ;
    eax = MEM32(esp + 0x24);
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0028B771; /* jb: below (unsigned <) */

loc_0028B7D8: ;
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x34);

loc_0028B7E0: ;
    ebp = MEM32(eax + 8);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0028B846; /* js: sign (negative) */

loc_0028B7E6: ;
    goto loc_0028B7F0;

    /* nop */
    /* nop */

loc_0028B7F0: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + ebp * 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(ebx + 0x44);
    edi = MEM32(edx + ecx * 4);
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x10);
    esi = esi + edi;
    edi = MEM32(ecx + esi * 4);
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B82B; /* je: equal / zero */

loc_0028B817: ;
    edx = MEM32(ebx + 0x30);
    ecx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0028B828u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B828: ;
    esp = esp + 8;

loc_0028B82B: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x0028B83Bu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028B83B: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0028B7F0; /* jns: not sign (positive) */

loc_0028B83E: ;
    edi = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x34);

loc_0028B846: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028B6B6; /* jl: less (signed <) */

loc_0028B85B: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, 0x0028B863u); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028B863: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028B870
 * Original: 0x0028B870 - 0x0028B8FB (139 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028B870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0028B880u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B880: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = MEM32(esp + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0028B8A7; /* je: equal / zero */

loc_0028B888: ;
    eax = MEM32(edi + 0x20);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0028B896u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B896: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028B8A7; /* jne: not equal / not zero */

loc_0028B89A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028B8A1u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028B8A1: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028B8A7: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0028B8B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B8B3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0028B8BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B8BD: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B8DC; /* je: equal / zero */

loc_0028B8C3: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0028B8D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B8D3: ;
    ecx = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028B8DBu); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_0028B8DB: ;
    POP32(esp, ebp);

loc_0028B8DC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0028B8E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B8E7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    esi = eax;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0028B8F6; /* je: equal / zero */

loc_0028B8EE: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, 0x0028B8F6u); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028B8F6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0028B900
 * Original: 0x0028B900 - 0x0028BDD2 (1234 bytes, 378 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028B900: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 0x24));
    esp = esp - 0x40;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028BDCC; /* je: equal / zero */

loc_0028B912: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x34) = 0x60AD78EC;
    MEM32(esp + 0x30) = 0x60AD78EC;
    MEM32(esp + 0x2C) = 0x60AD78EC;
    MEM32(esp + 0x28) = 0xE0AD78ECu;
    MEM32(esp + 0x24) = 0xE0AD78ECu;
    MEM32(esp + 0x20) = 0xE0AD78ECu;
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028BB02; /* jle: less or equal (signed <=) */

loc_0028B96A: ;
    goto loc_0028B970;

loc_0028B96C: ;
    eax = MEM32(esp + 0x18);

loc_0028B970: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 0x14);
    esi = MEM32(eax + ecx * 4);
    edx = MEM32(0x5BE600);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028B988u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0028B988: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028B99E; /* je: equal / zero */

loc_0028B98C: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028B99Cu); RECOMP_ABI_CALL(0x00263670u, sub_00263670); /* call 0x00263670 */

loc_0028B99C: ;
    goto loc_0028B9BF;

loc_0028B99E: ;
    edx = MEM32(esi);
    edi = MEM32(0x5BE5F8);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0028B9ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028B9AB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028B9D9; /* jne: not equal / not zero */

loc_0028B9AF: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028B9BFu); RECOMP_ABI_CALL(0x00263850u, sub_00263850); /* call 0x00263850 */

loc_0028B9BF: ;
    edx = esp + 0x44;
    edi = esp + 0x50;
    ecx = esp + 0x38;
    esi = esp + 0x2C;
    esp = esp + 0xC;
    PUSH32(esp, 0x0028B9D7u); RECOMP_ABI_CALL(0x0024BC60u, sub_0024BC60); /* call 0x0024BC60 */

loc_0028B9D7: ;
    SET_LO8(ebx, 1);

loc_0028B9D9: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028B96C; /* jl: less (signed <) */

loc_0028B9EA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028BB02; /* je: equal / zero */

loc_0028B9F2: ;
    ebx = MEM32(ebp + 0x1E8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028BA91; /* jne: not equal / not zero */

loc_0028BA00: ;
    ecx = ebp;
    PUSH32(esp, 0x0028BA07u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028BA07: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028BA0Du); RECOMP_ABI_CALL(0x00246D40u, sub_00246D40); /* call 0x00246D40 */

loc_0028BA0D: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028BA19; /* je: equal / zero */

loc_0028BA16: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028BA19: ;
    ecx = MEM32(ebp + 0x1E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028BA38; /* je: equal / zero */

loc_0028BA23: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028BA38; /* jne: not equal / not zero */

loc_0028BA33: ;
    PUSH32(esp, 0x0028BA38u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028BA38: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    MEM32(ebp + 0x1E8) = esi;
    eax = esi;
    eax = eax + 8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 8) = edx;
    eax = MEM32(ebp + 0x1E8);
    edx = MEM32(esp + 0x24);
    eax = eax + 0x14;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028BB02; /* jne: not equal / not zero */

loc_0028BA88: ;
    ecx = esi;
    PUSH32(esp, 0x0028BA8Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028BA8F: ;
    goto loc_0028BB02;

loc_0028BA91: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ebx + 0xC);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(ebx + 0x14);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(ebx + 0x1C);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ebx + 0x18);
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x4C) = ecx;
    esi = esp + 0x44;
    ecx = esp + 0x38;
    edi = esp + 0x20;
    edx = esp + 0x2C;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x0028BAD0u); RECOMP_ABI_CALL(0x0024BC60u, sub_0024BC60); /* call 0x0024BC60 */

loc_0028BAD0: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    MEM32(ebx + 8) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(ebx + 0xC) = eax;
    MEM32(ebx + 0x10) = ecx;
    eax = MEM32(ebp + 0x1E8);
    ecx = MEM32(esp + 0x48);
    eax = eax + 0x14;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_0028BB02: ;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x14), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028BDC8; /* jne: not equal / not zero */

loc_0028BB10: ;
    eax = MEM32(ebp + 0x34);
    ebx = MEM32(0x5BE4E8);
    edx = MEM32(eax + 0x44);
    ecx = MEM32(ebx + 8);
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0x10);
    ecx = MEM32(edx + ecx * 4);
    esi = MEM32(ecx + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM8(esp + 0x13) = LO8(ecx);
    MEM32(esp + 0x14) = edi;
    MEM8(esp + 0x54) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0028BC0F; /* je: equal / zero */

loc_0028BB4A: ;
    ecx = ebp;
    PUSH32(esp, 0x0028BB51u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028BB51: ;
    PUSH32(esp, 0x260B90);
    esi = eax;
    PUSH32(esp, 0x0028BB5Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028BB5D: ;
    ecx = MEM32(0x5BDAEC);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028BB6Cu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028BB6C: ;
    esi = eax;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028BB8A; /* je: equal / zero */

loc_0028BB75: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028BB8A; /* jne: not equal / not zero */

loc_0028BB85: ;
    PUSH32(esp, 0x0028BB8Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028BB8A: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 8) = 0xFFFFFFFEu;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;
    MEM8(esi + 0x1C) = 0;
    PUSH32(esp, 0x0028BBA4u); RECOMP_ABI_CALL(0x002A0470u, sub_002A0470); /* call 0x002A0470 */

loc_0028BBA4: ;
    ecx = MEM32(ebp + 0x1D8);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028BBB2u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028BBB2: ;
    ecx = MEM32(ebp + 0x1DC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028BBBEu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028BBBE: ;
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028BBC7u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028BBC7: ;
    ecx = MEM32(ebp + 0x34);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(ebx + 8);
    edx = MEM32(eax + edx * 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edx * 4);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028BBEA; /* je: equal / zero */

loc_0028BBE3: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + edx * 4 + -4);

loc_0028BBEA: ;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x0028BBF4u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028BBF4: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028BD72; /* jne: not equal / not zero */

loc_0028BC08: ;
    ecx = esi;
    goto loc_0028BD6D;

loc_0028BC0F: ;
    ecx = MEM32(0x5BE4E4);
    edx = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028BC36; /* jl: less (signed <) */

loc_0028BC2E: ;
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + edx * 4);
    goto loc_0028BC49;

loc_0028BC36: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028BC46; /* je: equal / zero */

loc_0028BC3D: ;
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + edx * 4 + -4);
    goto loc_0028BC49;

loc_0028BC46: ;
    ecx = MEM32(ecx + 0x14);

loc_0028BC49: ;
    esi = MEM32(eax + 0x44);
    edx = MEM32(0x5BE4E0);
    edx = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    edx = MEM32(esi + edx * 4);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edx * 4);
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028BC70; /* jl: less (signed <) */

loc_0028BC68: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edx * 4);
    goto loc_0028BC83;

loc_0028BC70: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028BC80; /* je: equal / zero */

loc_0028BC77: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edx * 4 + -4);
    goto loc_0028BC83;

loc_0028BC80: ;
    eax = MEM32(eax + 0x14);

loc_0028BC83: ;
    SET_LO8(edx, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028BC94; /* jne: not equal / not zero */

loc_0028BC8A: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028BD72; /* jne: not equal / not zero */

loc_0028BC94: ;
    eax = MEM32(ebp + 0xF8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0028BD72; /* jle: less or equal (signed <=) */

loc_0028BCA5: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(MEM32(edx + ecx * 4 + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ecx * 4 + -4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028BD72; /* je: equal / zero */

loc_0028BCB2: ;
    ecx = ebp;
    PUSH32(esp, 0x0028BCB9u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028BCB9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028BCBFu); RECOMP_ABI_CALL(0x0029FFE0u, sub_0029FFE0); /* call 0x0029FFE0 */

loc_0028BCBF: ;
    esp = esp + 4;
    ecx = ebp;
    edi = eax;
    PUSH32(esp, 0x0028BCCBu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028BCCB: ;
    PUSH32(esp, 0x260B90);
    esi = eax;
    PUSH32(esp, 0x0028BCD7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028BCD7: ;
    ecx = MEM32(0x5BDAEC);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028BCE6u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028BCE6: ;
    esi = eax;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_0028BD06; /* je: equal / zero */

loc_0028BCF4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028BD06; /* jne: not equal / not zero */

loc_0028BD01: ;
    PUSH32(esp, 0x0028BD06u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028BD06: ;
    eax = 0; /* xor self */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;
    MEM8(esi + 0x1C) = LO8(eax);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x46D0A0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0028BD24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028BD24: ;
    ecx = MEM32(ebp + 0x1D8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028BD30u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028BD30: ;
    ecx = MEM32(ebp + 0x1DC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028BD3Cu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028BD3C: ;
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028BD45u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028BD45: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM8(esp + 0x54) = 1;
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028BD5E; /* jne: not equal / not zero */

loc_0028BD57: ;
    ecx = esi;
    PUSH32(esp, 0x0028BD5Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028BD5E: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028BD72; /* jne: not equal / not zero */

loc_0028BD6B: ;
    ecx = edi;

loc_0028BD6D: ;
    PUSH32(esp, 0x0028BD72u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028BD72: ;
    ecx = MEM32(ebp + 0x34);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028BD83u); RECOMP_ABI_CALL(0x00288E60u, sub_00288E60); /* call 0x00288E60 */

loc_0028BD83: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028BDB1; /* je: equal / zero */

loc_0028BD8B: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028BD98u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_0028BD98: ;
    ecx = MEM32(0x5BE5B8);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, 0x0028BDA7u); RECOMP_ABI_CALL(0x0027C920u, sub_0027C920); /* call 0x0027C920 */

loc_0028BDA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_0028BDB1: ;
    SET_LO8(eax, MEM8(esp + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028BDC8; /* je: equal / zero */

loc_0028BDB9: ;
    edx = MEM32(0x5BE5B8);
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028BDC8u); RECOMP_ABI_CALL(0x0027C920u, sub_0027C920); /* call 0x0027C920 */

loc_0028BDC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0028BDCC: ;
    eax = 0; /* xor self */
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0028BDE0
 * Original: 0x0028BDE0 - 0x0028C397 (1463 bytes, 449 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028BDE0(void)
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

loc_0028BDE0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0028C390; /* je: equal / zero */

loc_0028BDF1: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0028C390; /* je: equal / zero */

loc_0028BDFC: ;
    SET_LO8(eax, MEM8(ebx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_0028C370; /* je: equal / zero */

loc_0028BE0D: ;
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0028C370; /* jne: not equal / not zero */

loc_0028BE21: ;
    SET_LO8(eax, MEM8(0x46D9A4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebp = MEM32(edi + 0x3C);
    if (TEST_Z(_fa, _fb)) goto loc_0028BE4E; /* je: equal / zero */

loc_0028BE2D: ;
    eax = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028BE38u); RECOMP_ABI_CALL(0x00267950u, sub_00267950); /* call 0x00267950 */

loc_0028BE38: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x5BDCA4) = LO8(eax);
    MEM8(0x46D9A4) = 0;
    goto loc_0028BE53;

loc_0028BE4E: ;
    SET_LO8(eax, MEM8(0x5BDCA4));

loc_0028BE53: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0028C370; /* je: equal / zero */

loc_0028BE5B: ;
    SET_LO8(eax, MEM8(ebx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_0028BE71; /* je: equal / zero */

loc_0028BE66: ;
    ecx = ebx;
    PUSH32(esp, 0x0028BE6Du); RECOMP_ABI_CALL(0x0024C470u, sub_0024C470); /* call 0x0024C470 */

loc_0028BE6D: ;
    MEM8(ebx + 0x40) = 0;

loc_0028BE71: ;
    eax = MEM32(ebp);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x2D4); PUSH32(esp, 0x0028BE81u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028BE81: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2DC); PUSH32(esp, 0x0028BE8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028BE8C: ;
    ecx = MEM32(0x5BDCA8);
    eax = esp + 0x10;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028BEA0u); RECOMP_ABI_CALL(0x0024B9E0u, sub_0024B9E0); /* call 0x0024B9E0 */

loc_0028BEA0: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = MEM32(0x5BDCA8);
    ecx = MEM32(esp + 0x24);
    MEMD(eax + 0x30) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028BEBFu); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_0028BEBF: ;
    edx = MEM32(0x5BDCB0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028BECDu); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BECD: ;
    eax = MEM32(0x5BDCBC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028BEDAu); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BEDA: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028BEEBu); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_0028BEEB: ;
    ecx = MEM32(0x5BDCA8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028BEF9u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BEF9: ;
    edx = MEM32(0x5BDD3C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028BF07u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BF07: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028BF0Eu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028BF0E: ;
    eax = MEM32(0x5BDD3C);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028BF1Eu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028BF1E: ;
    ecx = MEM32(0x5BDCA8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028BF2Cu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028BF2C: ;
    edx = MEM32(0x5BDCBC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028BF3Au); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028BF3A: ;
    eax = MEM32(0x5BDCB0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028BF47u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028BF47: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028BF58u); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_0028BF58: ;
    ecx = MEM32(0x5BDD48);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028BF66u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BF66: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0028BF73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028BF73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0028C1DA; /* je: equal / zero */

loc_0028BF7B: ;
    eax = MEM32(0x5BDCB4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028BF88u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BF88: ;
    ecx = MEM32(0x5BDCC0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028BF96u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BF96: ;
    edx = MEM32(0x5BDD34);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028BFA4u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BFA4: ;
    eax = MEM32(0x5BDD4C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028BFB1u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BFB1: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028BFBAu); RECOMP_ABI_CALL(0x0026E070u, sub_0026E070); /* call 0x0026E070 */

loc_0028BFBA: ;
    ecx = MEM32(0x5BDCCC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028BFC8u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BFC8: ;
    edx = MEM32(0x5BDCD4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028BFD6u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BFD6: ;
    eax = MEM32(0x5BDCDC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028BFE3u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BFE3: ;
    ecx = MEM32(0x5BDCE4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028BFF1u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BFF1: ;
    edx = MEM32(0x5BDCEC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028BFFFu); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028BFFF: ;
    eax = MEM32(0x5BDCF0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C00Cu); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C00C: ;
    ecx = MEM32(0x5BDCF4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C01Au); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C01A: ;
    edx = MEM32(0x5BDCF8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C028u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C028: ;
    eax = MEM32(0x5BDD20);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C035u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C035: ;
    ecx = MEM32(0x5BDD24);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C043u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C043: ;
    edx = MEM32(0x5BDD28);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C051u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C051: ;
    eax = MEM32(0x5BDD2C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C05Eu); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C05E: ;
    ecx = MEM32(0x5BDD04);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C06Cu); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C06C: ;
    edx = MEM32(0x5BDD0C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C07Au); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C07A: ;
    eax = MEM32(0x5BDD10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C087u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C087: ;
    ecx = MEM32(0x5BDD44);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C095u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C095: ;
    edx = MEM32(0x5BDD50);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C0A3u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C0A3: ;
    eax = MEM32(0x5BDCC8);
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C0B2u); RECOMP_ABI_CALL(0x00288E60u, sub_00288E60); /* call 0x00288E60 */

loc_0028C0B2: ;
    ecx = MEM32(0x5BDD50);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C0C0u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C0C0: ;
    edx = MEM32(0x5BDD44);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C0CEu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C0CE: ;
    eax = MEM32(0x5BDD10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C0DBu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C0DB: ;
    ecx = MEM32(0x5BDD0C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C0E9u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C0E9: ;
    edx = MEM32(0x5BDD04);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C0F7u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C0F7: ;
    eax = MEM32(0x5BDD2C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C104u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C104: ;
    ecx = MEM32(0x5BDD28);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C112u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C112: ;
    edx = MEM32(0x5BDD24);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C120u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C120: ;
    eax = MEM32(0x5BDD20);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C12Du); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C12D: ;
    ecx = MEM32(0x5BDCF8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C13Bu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C13B: ;
    edx = MEM32(0x5BDCF4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C149u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C149: ;
    eax = MEM32(0x5BDCF0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C156u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C156: ;
    ecx = MEM32(0x5BDCEC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C164u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C164: ;
    edx = MEM32(0x5BDCE4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C172u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C172: ;
    eax = MEM32(0x5BDCDC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C17Fu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C17F: ;
    ecx = MEM32(0x5BDCD4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C18Du); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C18D: ;
    edx = MEM32(0x5BDCCC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C19Bu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C19B: ;
    eax = MEM32(0x5BDD4C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C1A8u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C1A8: ;
    ecx = MEM32(0x5BDD34);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C1B6u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C1B6: ;
    edx = MEM32(0x5BDCC0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C1C4u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C1C4: ;
    eax = MEM32(0x5BDCB4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C1D1u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C1D1: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028C1DAu); RECOMP_ABI_CALL(0x0026E070u, sub_0026E070); /* call 0x0026E070 */

loc_0028C1DA: ;
    ecx = MEM32(0x5BDD34);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C1E8u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C1E8: ;
    edx = MEM32(0x5BDD4C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C1F6u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C1F6: ;
    eax = MEM32(edi + 0x44);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C207u); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_0028C207: ;
    eax = MEM32(0x5BDCCC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C214u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C214: ;
    ecx = MEM32(0x5BDCEC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C222u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C222: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0028C22Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028C22F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0028C23B; /* je: equal / zero */

loc_0028C233: ;
    eax = MEM32(0x5BDD30);
    PUSH32(esp, eax);
    goto loc_0028C242;

loc_0028C23B: ;
    ecx = MEM32(0x5BDD20);
    PUSH32(esp, ecx);

loc_0028C242: ;
    ecx = esi;
    PUSH32(esp, 0x0028C249u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C249: ;
    edx = MEM32(0x5BDD00);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C257u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C257: ;
    eax = MEM32(0x5BDD44);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C264u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C264: ;
    ecx = MEM32(0x5BDD50);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C272u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C272: ;
    edx = MEM32(0x5BDCC4);
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028C282u); RECOMP_ABI_CALL(0x00288E60u, sub_00288E60); /* call 0x00288E60 */

loc_0028C282: ;
    eax = MEM32(0x5BDD50);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C28Fu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C28F: ;
    ecx = MEM32(0x5BDD44);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C29Du); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C29D: ;
    edx = MEM32(0x5BDD00);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C2ABu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C2AB: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0028C2B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028C2B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0028C2C5; /* je: equal / zero */

loc_0028C2BC: ;
    ecx = MEM32(0x5BDD30);
    PUSH32(esp, ecx);
    goto loc_0028C2CC;

loc_0028C2C5: ;
    edx = MEM32(0x5BDD20);
    PUSH32(esp, edx);

loc_0028C2CC: ;
    ecx = esi;
    PUSH32(esp, 0x0028C2D3u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C2D3: ;
    eax = MEM32(0x5BDCEC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C2E0u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C2E0: ;
    ecx = MEM32(0x5BDCCC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C2EEu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C2EE: ;
    edx = MEM32(0x5BDD4C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C2FCu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C2FC: ;
    eax = MEM32(0x5BDD34);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C309u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C309: ;
    ecx = MEM32(0x5BDD48);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C317u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C317: ;
    edx = MEM32(edi + 0x44);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C328u); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_0028C328: ;
    edx = MEM32(0x5BDD38);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028C336u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0028C336: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028C33Du); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028C33D: ;
    eax = MEM32(0x5BDD38);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C34Du); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0028C34D: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C35Eu); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_0028C35E: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, 0x0028C366u); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028C366: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_0028C370: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028C37Cu); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_0028C37C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028C383u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028C383: ;
    ecx = MEM32(edi + 0x44);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    PUSH32(esp, 0x0028C38Eu); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028C38E: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0028C390: ;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0028C3A0
 * Original: 0x0028C3A0 - 0x0028C607 (615 bytes, 225 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C3A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028C3A0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    ebp = MEM32(edi + 0x34);
    MEM32(esp + 0x18) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0028C3C9; /* jne: not equal / not zero */

loc_0028C3BB: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB8); PUSH32(esp, 0x0028C3C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028C3C9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0028C3D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028C3D4: ;
    eax = MEM32(esi + 0x40);
    ebx = MEM32(eax + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x28) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028C3F6; /* jne: not equal / not zero */

loc_0028C3E2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028C3E9u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028C3E9: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_0028C3F6: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028C40D; /* je: equal / zero */

loc_0028C3FD: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x30));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, 0x0028C40Du); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_0028C40D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028C5EE; /* jle: less or equal (signed <=) */

loc_0028C41B: ;
    goto loc_0028C420;

    /* nop */

loc_0028C420: ;
    edx = MEM32(esi + 0x40);
    ecx = MEM32(edx + 0x10);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028C4CB; /* jle: less or equal (signed <=) */

loc_0028C444: ;
    goto loc_0028C450;

loc_0028C446: ;
    eax = MEM32(esp + 0x14);
    /* nop */

loc_0028C450: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esp + 0x10);
    ebx = MEM32(edx + eax * 4);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 8);
    edx = MEM32(ebp + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(ebx + 0xA);
    esi = MEM32(edx + ecx * 4);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x10);
    edi = edi + esi;
    esi = MEM32(ecx + edi * 4);
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028C480; /* jge: greater or equal (signed >=) */

loc_0028C47A: ;
    edx = MEM32(esi + 8);
    MEM32(esi + 0x18) = edx;

loc_0028C480: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028C494; /* jge: greater or equal (signed >=) */

loc_0028C48C: ;
    ecx = eax + 1;
    MEM32(esi + 8) = ecx;
    goto loc_0028C4A3;

loc_0028C494: ;
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C49Fu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028C49F: ;
    eax = MEM32(esp + 0x20);

loc_0028C4A3: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(edx + eax * 4) = ebx;
    PUSH32(esp, 0x0028C4B2u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028C4B2: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028C446; /* jl: less (signed <) */

loc_0028C4C3: ;
    edi = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x18);

loc_0028C4CB: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028C54E; /* je: equal / zero */

loc_0028C4D2: ;
    ebx = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    eax = ebx + eax * 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0028C54E; /* jae: above or equal (unsigned >=) */

loc_0028C4E3: ;
    SET_LO8(eax, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = MEM32(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0028C522; /* je: equal / zero */

loc_0028C4EC: ;
    eax = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0028C4F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028C4F3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028C522; /* je: equal / zero */

loc_0028C4FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028C53F; /* jne: not equal / not zero */

loc_0028C4FF: ;
    ecx = MEM32(0x5BD9C8);
    edx = MEM32(esi);
    MEM32(esp + 0x24) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0028C510u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028C510: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028C522; /* je: equal / zero */

loc_0028C516: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028C51Du); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028C51D: ;
    esp = esp + 8;
    goto loc_0028C53A;

loc_0028C522: ;
    ecx = MEM32(edi + 0x1C);
    eax = MEM32(esi + 0x18);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0028C532u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028C532: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028C54A; /* je: equal / zero */

loc_0028C53A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028C54A; /* je: equal / zero */

loc_0028C53F: ;
    eax = MEM32(esp + 0x20);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0028C4E3; /* jb: below (unsigned <) */

loc_0028C54A: ;
    esi = MEM32(esp + 0x18);

loc_0028C54E: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + edx * 4);
    ebx = MEM32(eax + 8);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fas < 0)) goto loc_0028C5D9; /* js: sign (negative) */

loc_0028C565: ;
    goto loc_0028C570;

loc_0028C567: ;
    eax = MEM32(esp + 0x14);
    goto loc_0028C570;

    /* nop */

loc_0028C570: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ebx * 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(ebp + 0x44);
    esi = MEM32(edx + ecx * 4);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 0x10);
    edi = edi + esi;
    esi = MEM32(edx + edi * 4);
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028C5AE; /* je: equal / zero */

loc_0028C5A0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028C5AE; /* jne: not equal / not zero */

loc_0028C5A4: ;
    eax = MEM32(ebp + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028C5ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028C5AB: ;
    esp = esp + 8;

loc_0028C5AE: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0028C5C5; /* jne: not equal / not zero */

loc_0028C5BE: ;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;

loc_0028C5C5: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0028C5CEu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028C5CE: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0028C567; /* jns: not sign (positive) */

loc_0028C5D1: ;
    edi = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x18);

loc_0028C5D9: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028C420; /* jl: less (signed <) */

loc_0028C5EE: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028C5FD; /* je: equal / zero */

loc_0028C5F5: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, 0x0028C5FDu); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028C5FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028C610
 * Original: 0x0028C610 - 0x0028C81B (523 bytes, 173 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C610(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028C610: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028C626u); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_0028C626: ;
    eax = MEM32(0x5BDE18);
    esi = MEM32(ebx + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C645u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028C645: ;
    eax = MEM32(edi + 0xA0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C662u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028C662: ;
    eax = MEM32(0x5BDE50);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C67Eu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028C67E: ;
    eax = MEM32(edi + 0x64);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C698u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028C698: ;
    eax = MEM32(0x5BDE5C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C6B4u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028C6B4: ;
    eax = MEM32(0x5BDEB4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C6D0u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028C6D0: ;
    eax = MEM32(edi + 0xB4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C6EDu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028C6ED: ;
    eax = MEM32(0x5BDEB8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C709u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028C709: ;
    eax = MEM32(0x5BDEC0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C716u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028C716: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0028C71Eu); RECOMP_ABI_CALL(0x00280300u, sub_00280300); /* call 0x00280300 */

loc_0028C71E: ;
    ecx = MEM32(0x5BDEC0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028C72Cu); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_0028C72C: ;
    eax = MEM32(0x5BDEB8);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C748u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028C748: ;
    eax = MEM32(edi + 0xB4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C765u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028C765: ;
    eax = MEM32(0x5BDEB4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C781u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028C781: ;
    eax = MEM32(0x5BDE5C);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C79Du); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028C79D: ;
    eax = MEM32(edi + 0x64);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C7B7u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028C7B7: ;
    eax = MEM32(0x5BDE50);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C7D3u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028C7D3: ;
    edi = MEM32(edi + 0xA0);
    edx = (uint32_t)(int32_t)SMEM16(edi + 8);
    eax = MEM32(esi + 0x44);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    ecx = ecx + MEM32(eax + edx * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028C7F0u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028C7F0: ;
    eax = MEM32(0x5BDE18);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(ecx + edx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C80Cu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028C80C: ;
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, 0x0028C814u); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028C814: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028C820
 * Original: 0x0028C820 - 0x0028C87A (90 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028C820: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x64);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C833u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028C833: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028C843u); RECOMP_ABI_CALL(0x00288E60u, sub_00288E60); /* call 0x00288E60 */

loc_0028C843: ;
    ecx = MEM32(esi + 0x64);
    esi = MEM32(ecx + 0x20);
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0028C856u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_0028C856: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028C86F; /* jle: less or equal (signed <=) */

loc_0028C85F: ;
    /* nop */

loc_0028C860: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028C860; /* jl: less (signed <) */

loc_0028C86F: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0028C880
 * Original: 0x0028C880 - 0x0028C8C4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028C880: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028C890; /* jne: not equal / not zero */

loc_0028C889: ;
    MEM8(0x5BDF6C) = 1;

loc_0028C890: ;
    PUSH32(esp, 0x471864);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x27ADE0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405FB4);
    PUSH32(esp, 0x24FE20);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD8B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028C8C0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028C8C0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028C8D0
 * Original: 0x0028C8D0 - 0x0028C8DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C8D0(void)
{

loc_0028C8D0: ;
    PUSH32(esp, 0x289250);
    PUSH32(esp, 0x0028C8DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028C8DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028C8E0
 * Original: 0x0028C8E0 - 0x0028C8FE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C8E0(void)
{

loc_0028C8E0: ;
    PUSH32(esp, 0x2882C0);
    PUSH32(esp, 0x0028C8EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028C8EA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BD988);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028C8FDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028C8FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0028C900
 * Original: 0x0028C900 - 0x0028C947 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028C900: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028C910; /* jne: not equal / not zero */

loc_0028C909: ;
    MEM8(0x5BDF6C) = 1;

loc_0028C910: ;
    PUSH32(esp, 0x47186C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x253D80);
    PUSH32(esp, 0x281350);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x405FC8);
    PUSH32(esp, 0x2508A0);
    PUSH32(esp, 0x19C360);
    PUSH32(esp, 0x281860);
    PUSH32(esp, 0x5BD9A4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028C943u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028C943: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028C950
 * Original: 0x0028C950 - 0x0028C95C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C950(void)
{

loc_0028C950: ;
    PUSH32(esp, 0x289330);
    PUSH32(esp, 0x0028C95Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028C95A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028C960
 * Original: 0x0028C960 - 0x0028C96C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C960(void)
{

loc_0028C960: ;
    PUSH32(esp, 0x2893F0);
    PUSH32(esp, 0x0028C96Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028C96A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028C970
 * Original: 0x0028C970 - 0x0028C97C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C970(void)
{

loc_0028C970: ;
    PUSH32(esp, 0x2894F0);
    PUSH32(esp, 0x0028C97Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028C97A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028C980
 * Original: 0x0028C980 - 0x0028C98C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C980(void)
{

loc_0028C980: ;
    PUSH32(esp, 0x289540);
    PUSH32(esp, 0x0028C98Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028C98A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028C990
 * Original: 0x0028C990 - 0x0028C9DA (74 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028C990: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028C9A0; /* jne: not equal / not zero */

loc_0028C999: ;
    MEM8(0x5BDF6C) = 1;

loc_0028C9A0: ;
    PUSH32(esp, 0x47188C);
    PUSH32(esp, 0x289590);
    PUSH32(esp, 0x27C350);
    PUSH32(esp, 0x276D10);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x405FE0);
    PUSH32(esp, 0x2518F0);
    PUSH32(esp, 0x2492B0);
    PUSH32(esp, 0x276AD0);
    PUSH32(esp, 0x5BDBAC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028C9D6u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028C9D6: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028C9E0
 * Original: 0x0028C9E0 - 0x0028C9EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C9E0(void)
{

loc_0028C9E0: ;
    PUSH32(esp, 0x2895A0);
    PUSH32(esp, 0x0028C9EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028C9EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028C9F0
 * Original: 0x0028C9F0 - 0x0028CA89 (153 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028C9F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0028C9F6u); RECOMP_ABI_CALL(0x00297A90u, sub_00297A90); /* call 0x00297A90 */

loc_0028C9F6: ;
    ebx = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028CA02u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028CA02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028CA87; /* je: equal / zero */

loc_0028CA0A: ;
    SET_LO8(eax, MEM8(ebx + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028CA87; /* jne: not equal / not zero */

loc_0028CA11: ;
    eax = MEM32(0x5BDBF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028CA33; /* jne: not equal / not zero */

loc_0028CA1A: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CA25u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028CA25: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CA2Bu); RECOMP_ABI_CALL(0x0022A870u, sub_0022A870); /* call 0x0022A870 */

loc_0028CA2B: ;
    esp = esp + 8;
    MEM32(0x5BDBF4) = eax;

loc_0028CA33: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028CA53; /* jle: less or equal (signed <=) */

loc_0028CA3E: ;
    esi = MEM32(eax + 0x10);

loc_0028CA41: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028CA4F; /* je: equal / zero */

loc_0028CA45: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028CA41; /* jl: less (signed <) */

loc_0028CA4D: ;
    goto loc_0028CA53;

loc_0028CA4F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028CA85; /* jge: greater or equal (signed >=) */

loc_0028CA53: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0028CA5Bu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028CA5B: ;
    eax = MEM32(0x5BDBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028CA85; /* je: equal / zero */

loc_0028CA64: ;
    edi = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028CA85; /* jle: less or equal (signed <=) */

loc_0028CA6D: ;
    goto loc_0028CA74;

loc_0028CA6F: ;
    eax = MEM32(0x5BDBF8);

loc_0028CA74: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + esi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0028CA80u); RECOMP_ABI_CALL(0x002895F0u, sub_002895F0); /* call 0x002895F0 */

loc_0028CA80: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028CA6F; /* jl: less (signed <) */

loc_0028CA85: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0028CA87: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028CA90
 * Original: 0x0028CA90 - 0x0028CE6B (987 bytes, 327 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028CA90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028CA90: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebx + 0x20);
    eax = MEM32(ecx);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0028CAA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028CAA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = edi;
    if (CMP_G(_fas, _fbs)) goto loc_0028CAB4; /* jg: greater (signed >) */

loc_0028CAA9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0028CAAFu); RECOMP_ABI_CALL(0x00289C50u, sub_00289C50); /* call 0x00289C50 */

loc_0028CAAF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0028CAB4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0028CABCu); RECOMP_ABI_CALL(0x00264E60u, sub_00264E60); /* call 0x00264E60 */

loc_0028CABC: ;
    ecx = MEM32(ebx + 0x44);
    esi = MEM32(ebx + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028CACBu); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_0028CACB: ;
    eax = MEM32(edi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028CB27; /* jne: not equal / not zero */

loc_0028CAD5: ;
    ecx = edi;
    PUSH32(esp, 0x0028CADCu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028CADC: ;
    ecx = MEM32(edi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0028CAFD; /* je: equal / zero */

loc_0028CAE8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028CAFD; /* jne: not equal / not zero */

loc_0028CAF8: ;
    PUSH32(esp, 0x0028CAFDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028CAFD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0028CB03u); RECOMP_ABI_CALL(0x002A0DB0u, sub_002A0DB0); /* call 0x002A0DB0 */

loc_0028CB03: ;
    esp = esp + 4;
    ecx = eax;
    MEM32(edi + 0xA4) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0028CB15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028CB15: ;
    edx = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0xA4);
    edx = MEM32(edx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0028CB27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028CB27: ;
    ecx = MEM32(edi + 0xB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0028CB34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028CB34: ;
    eax = MEM32(0x5BDC5C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CB50u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CB50: ;
    eax = MEM32(0x5BDC60);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CB6Cu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CB6C: ;
    eax = MEM32(0x5BDC38);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CB88u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CB88: ;
    eax = MEM32(0x5BDC20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CBA4u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CBA4: ;
    eax = MEM32(edi + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CBBEu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CBBE: ;
    eax = MEM32(0x5BDC3C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CBDAu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CBDA: ;
    eax = MEM32(edi + 0xB0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CBF7u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CBF7: ;
    eax = MEM32(0x5BDC24);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CC13u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CC13: ;
    eax = MEM32(edi + 0xA4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028CC30u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CC30: ;
    eax = MEM32(0x5BDC50);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CC4Cu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CC4C: ;
    eax = MEM32(edi + 0xB4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CC69u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CC69: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0028CC70u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028CC70: ;
    eax = MEM32(edi + 0xB4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    esp = esp + 8;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028CC90u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CC90: ;
    eax = MEM32(0x5BDC50);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CCACu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CCAC: ;
    eax = MEM32(edi + 0xA4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CCC9u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CCC9: ;
    eax = MEM32(0x5BDC24);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CCE5u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CCE5: ;
    eax = MEM32(edi + 0xB0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CD02u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CD02: ;
    eax = MEM32(0x5BDC3C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CD1Eu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CD1E: ;
    eax = MEM32(edi + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CD38u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CD38: ;
    eax = MEM32(0x5BDC20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CD54u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CD54: ;
    eax = MEM32(0x5BDC38);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CD70u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CD70: ;
    eax = MEM32(0x5BDC00);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CD8Cu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CD8C: ;
    eax = MEM32(0x5BDC40);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CDA8u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CDA8: ;
    eax = MEM32(0x5BDC34);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CDC4u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028CDC4: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0028CDCBu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028CDCB: ;
    eax = MEM32(0x5BDC34);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebp = MEM32(edx + ecx * 4);
    esp = esp + 8;
    edi = edi + ebp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028CDECu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CDEC: ;
    eax = MEM32(0x5BDC40);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028CE08u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CE08: ;
    eax = MEM32(0x5BDC00);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028CE24u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CE24: ;
    eax = MEM32(0x5BDC60);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028CE40u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CE40: ;
    eax = MEM32(0x5BDC5C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028CE5Cu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028CE5C: ;
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, 0x0028CE64u); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028CE64: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028CE70
 * Original: 0x0028CE70 - 0x0028CEFF (143 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028CE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028CE70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0028CE78u); RECOMP_ABI_CALL(0x00265A70u, sub_00265A70); /* call 0x00265A70 */

loc_0028CE78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028CE8E; /* jne: not equal / not zero */

loc_0028CE7C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CE87u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028CE87: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0028CE8E: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028CE9Bu); RECOMP_ABI_CALL(0x00265AC0u, sub_00265AC0); /* call 0x00265AC0 */

loc_0028CE9B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028CEA3u); RECOMP_ABI_CALL(0x0027C9D0u, sub_0027C9D0); /* call 0x0027C9D0 */

loc_0028CEA3: ;
    ecx = MEM32(esi + 0xB0);
    eax = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0028CEB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028CEB2: ;
    ecx = MEM32(esi + 0xB4);
    eax = MEM32(esi + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0028CEC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028CEC1: ;
    ecx = MEM32(esi + 0xA0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0028CECEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028CECE: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0028CED8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028CED8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028CEF2; /* je: equal / zero */

loc_0028CEDC: ;
    SET_LO8(eax, MEM8(0x5BDEC4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028CEF2; /* jne: not equal / not zero */

loc_0028CEE5: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028CEEDu); RECOMP_ABI_CALL(0x00289950u, sub_00289950); /* call 0x00289950 */

loc_0028CEED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0028CEF2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028CEFAu); RECOMP_ABI_CALL(0x0028CA90u, sub_0028CA90); /* call 0x0028CA90 */

loc_0028CEFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028CF00
 * Original: 0x0028CF00 - 0x0028CF48 (72 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028CF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028CF00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028CF0F; /* je: equal / zero */

loc_0028CF0B: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028CF0F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0028CF1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028CF1B: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028CF2D; /* je: equal / zero */

loc_0028CF22: ;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028CF2Du); RECOMP_ABI_CALL(0x0026B730u, sub_0026B730); /* call 0x0026B730 */

loc_0028CF2D: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028CF3B; /* je: equal / zero */

loc_0028CF34: ;
    ecx = esi;
    PUSH32(esp, 0x0028CF3Bu); RECOMP_ABI_CALL(0x0026ACB0u, sub_0026ACB0); /* call 0x0026ACB0 */

loc_0028CF3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028CF42u); RECOMP_ABI_CALL(0x0028B440u, sub_0028B440); /* call 0x0028B440 */

loc_0028CF42: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0028CF50
 * Original: 0x0028CF50 - 0x0028CFB3 (99 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028CF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028CF50: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028CF5F; /* je: equal / zero */

loc_0028CF5B: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0028CF5F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0028CF6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028CF6B: ;
    ecx = MEM32(edi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028CF7D; /* je: equal / zero */

loc_0028CF72: ;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028CF7Du); RECOMP_ABI_CALL(0x0026B730u, sub_0026B730); /* call 0x0026B730 */

loc_0028CF7D: ;
    ecx = edi;
    PUSH32(esp, 0x0028CF84u); RECOMP_ABI_CALL(0x0026B450u, sub_0026B450); /* call 0x0026B450 */

loc_0028CF84: ;
    eax = MEM32(esi + 0xEC);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028CF93u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028CF93: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028CF9Au); RECOMP_ABI_CALL(0x0028B440u, sub_0028B440); /* call 0x0028B440 */

loc_0028CF9A: ;
    ecx = MEM32(esi + 0xEC);
    esp = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    edi = eax;
    PUSH32(esp, 0x0028CFAEu); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_0028CFAE: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0028CFC0
 * Original: 0x0028CFC0 - 0x0028D0FA (314 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028CFC0(void)
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

loc_0028CFC0: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    ecx = MEM32(esi + 0x50);
    eax = MEM32(esi + 0x4C);
    edx = MEM32(esi + 0x54);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x5BE5B8);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0028D00C; /* jl: less (signed <) */

loc_0028D004: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4);
    goto loc_0028D01F;

loc_0028D00C: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D01C; /* je: equal / zero */

loc_0028D013: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4 + -4);
    goto loc_0028D01F;

loc_0028D01C: ;
    eax = MEM32(eax + 0x14);

loc_0028D01F: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D02D; /* je: equal / zero */

loc_0028D025: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0028D02D: ;
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0028D03Fu); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0028D03F: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    edx = MEM32(esi + 0x58);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(esi + 0x5C);
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x28) = eax;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0028D0DE; /* jnp: not parity */

loc_0028D07E: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028D0DE; /* je: equal / zero */

loc_0028D086: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028D099; /* jne: not equal / not zero */

loc_0028D095: ;
    PUSH32(esp, 0);
    goto loc_0028D0E3;

loc_0028D099: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_NZ(_fa, _fb)) goto loc_0028D0BA; /* jne: not equal / not zero */

loc_0028D0B3: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    goto loc_0028D0E3;

loc_0028D0BA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028D0CD; /* jne: not equal / not zero */

loc_0028D0BF: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0028D0E3;

loc_0028D0CD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028D0EA; /* jne: not equal / not zero */

loc_0028D0D2: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0028D0E3;

loc_0028D0DE: ;
    PUSH32(esp, 0x3F800000);

loc_0028D0E3: ;
    ecx = esi;
    PUSH32(esp, 0x0028D0EAu); RECOMP_ABI_CALL(0x0026B920u, sub_0026B920); /* call 0x0026B920 */

loc_0028D0EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D0F1u); RECOMP_ABI_CALL(0x0028B440u, sub_0028B440); /* call 0x0028B440 */

loc_0028D0F1: ;
    esp = esp + 8;
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
 * sub_0028D100
 * Original: 0x0028D100 - 0x0028D111 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0028D100(void)
{

loc_0028D100: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D10Eu); RECOMP_ABI_CALL(0x0028CE70u, sub_0028CE70); /* call 0x0028CE70 */

loc_0028D10E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0028D120
 * Original: 0x0028D120 - 0x0028D131 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0028D120(void)
{

loc_0028D120: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D12Eu); RECOMP_ABI_CALL(0x0028BDE0u, sub_0028BDE0); /* call 0x0028BDE0 */

loc_0028D12E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0028D140
 * Original: 0x0028D140 - 0x0028D38E (590 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028D140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028D140: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D151u); RECOMP_ABI_CALL(0x0028F3A0u, sub_0028F3A0); /* call 0x0028F3A0 */

loc_0028D151: ;
    eax = MEM32(0x5BD9A0);
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028D161u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D161: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D177; /* je: equal / zero */

loc_0028D165: ;
    PUSH32(esp, 0x24BCD0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D171u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D171: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D177: ;
    ecx = MEM32(0x5BDAC0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028D185u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D185: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D19B; /* je: equal / zero */

loc_0028D189: ;
    PUSH32(esp, 0x24BCD0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D195u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D195: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D19B: ;
    edx = MEM32(0x5BDAA0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028D1A9u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D1A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D1BF; /* je: equal / zero */

loc_0028D1AD: ;
    PUSH32(esp, 0x258B40);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D1B9u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D1B9: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D1BF: ;
    eax = MEM32(0x5BD9CC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028D1CCu); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D1CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D1E2; /* je: equal / zero */

loc_0028D1D0: ;
    PUSH32(esp, 0x24BCD0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D1DCu); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D1DC: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D1E2: ;
    ecx = MEM32(0x5BDAFC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028D1F0u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D1F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D206; /* je: equal / zero */

loc_0028D1F4: ;
    PUSH32(esp, 0x24BCD0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D200u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D200: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D206: ;
    edx = MEM32(0x5BDB0C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028D214u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D214: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D22A; /* je: equal / zero */

loc_0028D218: ;
    PUSH32(esp, 0x24BCD0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D224u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D224: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D22A: ;
    eax = MEM32(0x5BD9A4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028D237u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D237: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D24D; /* je: equal / zero */

loc_0028D23B: ;
    PUSH32(esp, 0x24BCD0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D247u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D247: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D24D: ;
    ecx = MEM32(0x5BD950);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028D25Bu); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D25B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D271; /* je: equal / zero */

loc_0028D25F: ;
    PUSH32(esp, 0x24BCD0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D26Bu); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D26B: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D271: ;
    edx = MEM32(0x5BDA90);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028D27Fu); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D27F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D295; /* je: equal / zero */

loc_0028D283: ;
    PUSH32(esp, 0x28B900);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D28Fu); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D28F: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D295: ;
    eax = MEM32(0x5BDA30);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028D2A2u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D2A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D2B8; /* je: equal / zero */

loc_0028D2A6: ;
    PUSH32(esp, 0x2827B0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D2B2u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D2B2: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D2B8: ;
    ecx = MEM32(0x5BD8C8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028D2C6u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D2C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D2DC; /* je: equal / zero */

loc_0028D2CA: ;
    PUSH32(esp, 0x282780);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D2D6u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D2D6: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D2DC: ;
    edx = MEM32(0x5BDAD8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028D2EAu); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D2EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D300; /* je: equal / zero */

loc_0028D2EE: ;
    PUSH32(esp, 0x27DA20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D2FAu); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D2FA: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D300: ;
    eax = MEM32(0x5BDA20);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028D30Du); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D30D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D323; /* je: equal / zero */

loc_0028D311: ;
    PUSH32(esp, 0x282860);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D31Du); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D31D: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D323: ;
    ecx = MEM32(0x5BDB14);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028D331u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D331: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D347; /* je: equal / zero */

loc_0028D335: ;
    PUSH32(esp, 0x282930);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D341u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D341: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D347: ;
    edx = MEM32(0x5BDBEC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028D355u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D355: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D36B; /* je: equal / zero */

loc_0028D359: ;
    PUSH32(esp, 0x2123A0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D365u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D365: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0028D36B: ;
    eax = MEM32(0x5BD984);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028D378u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028D378: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D38B; /* je: equal / zero */

loc_0028D37C: ;
    PUSH32(esp, 0x2123A0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028D388u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028D388: ;
    esp = esp + 0xC;

loc_0028D38B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0028D390
 * Original: 0x0028D390 - 0x0028D90D (1405 bytes, 459 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028D390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028D390: ;
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x95));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028D3C1; /* jne: not equal / not zero */

loc_0028D3A0: ;
    SET_LO8(eax, MEM8(edi + 0x78));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028D3B4; /* jne: not equal / not zero */

loc_0028D3A7: ;
    eax = MEM32(edi + 0xA4);
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_0028D3B4: ;
    eax = MEM32(edi + 0xB4);
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_0028D3C1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028D3D7u); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_0028D3D7: ;
    eax = MEM32(edi + 0x44);
    ecx = eax;
    edx = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(edi + 0x74);
    MEM32(esp + 0x18) = edx;
    edx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = 0x3F800000;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0028D3FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028D3FF: ;
    eax = MEM32(edi + 0x98);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D41Cu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D41C: ;
    eax = MEM32(edi + 0x9C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D439u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D439: ;
    eax = MEM32(edi + 0xC0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D456u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D456: ;
    eax = MEM32(0x5BDDCC);
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D465u); RECOMP_ABI_CALL(0x0028C820u, sub_0028C820); /* call 0x0028C820 */

loc_0028D465: ;
    eax = MEM32(edi + 0xC0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D482u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D482: ;
    eax = MEM32(0x5BDDBC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D49Eu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D49E: ;
    eax = MEM32(0x5BDDD8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D4BAu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D4BA: ;
    eax = MEM32(0x5BDDA8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D4D6u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D4D6: ;
    eax = MEM32(edi + 0x58);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028D4E1u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028D4E1: ;
    ecx = MEM32(edi + 0x5C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028D4ECu); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028D4EC: ;
    SET_LO8(eax, MEM8(edi + 0xED));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D510; /* je: equal / zero */

loc_0028D4F6: ;
    eax = MEM32(edi + 0x74);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D510u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D510: ;
    eax = MEM32(edi + 0xC4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D52Du); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D52D: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0028D535u); RECOMP_ABI_CALL(0x002802C0u, sub_002802C0); /* call 0x002802C0 */

loc_0028D535: ;
    eax = MEM32(edi + 0xC4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D552u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D552: ;
    SET_LO8(eax, MEM8(edi + 0xED));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028D576; /* je: equal / zero */

loc_0028D55C: ;
    eax = MEM32(edi + 0x74);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(ecx + edx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D576u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D576: ;
    edx = MEM32(edi + 0x5C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028D581u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_0028D581: ;
    eax = MEM32(edi + 0x58);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028D58Cu); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_0028D58C: ;
    eax = MEM32(0x5BDDA8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D5A8u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D5A8: ;
    eax = MEM32(edi + 0x9C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D5C5u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D5C5: ;
    eax = MEM32(edi + 0x98);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D5E2u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D5E2: ;
    eax = MEM32(0x5BDDD8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D5FEu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D5FE: ;
    eax = MEM32(0x5BDDBC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D61Au); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D61A: ;
    SET_LO8(eax, MEM8(edi + 0x78));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028D639; /* jne: not equal / not zero */

loc_0028D621: ;
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, 0x0028D629u); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028D629: ;
    eax = MEM32(edi + 0xA4);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_0028D639: ;
    eax = MEM32(edi + 0xA8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D656u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D656: ;
    eax = MEM32(edi + 0xAC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D673u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D673: ;
    eax = MEM32(edi + 0xC0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D690u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D690: ;
    eax = MEM32(0x5BDDD0);
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D69Fu); RECOMP_ABI_CALL(0x0028C820u, sub_0028C820); /* call 0x0028C820 */

loc_0028D69F: ;
    eax = MEM32(0x5BDDB0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D6BBu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D6BB: ;
    eax = MEM32(0x5BDDB4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D6D7u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D6D7: ;
    eax = MEM32(0x5BDDD8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D6F3u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D6F3: ;
    eax = MEM32(0x5BDDA0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D70Fu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D70F: ;
    eax = MEM32(edi + 0xA4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D72Cu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D72C: ;
    eax = MEM32(0x5BDDE4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D748u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D748: ;
    eax = MEM32(edi + 0x60);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D762u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D762: ;
    eax = MEM32(edi + 0x64);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D77Cu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D77C: ;
    eax = MEM32(0x5BDDBC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D798u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D798: ;
    eax = MEM32(edi + 0x6C);
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D7A5u); RECOMP_ABI_CALL(0x00288E60u, sub_00288E60); /* call 0x00288E60 */

loc_0028D7A5: ;
    eax = MEM32(0x5BDDBC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D7C1u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D7C1: ;
    eax = MEM32(edi + 0x64);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D7DBu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D7DB: ;
    eax = MEM32(edi + 0x60);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D7F5u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D7F5: ;
    eax = MEM32(0x5BDDE4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D811u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D811: ;
    eax = MEM32(edi + 0xA4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D82Eu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D82E: ;
    eax = MEM32(0x5BDDA0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D84Au); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D84A: ;
    eax = MEM32(0x5BDDD8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D866u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D866: ;
    eax = MEM32(0x5BDDB4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D882u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D882: ;
    eax = MEM32(0x5BDDB0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D89Eu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D89E: ;
    eax = MEM32(edi + 0xC0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D8BBu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D8BB: ;
    eax = MEM32(edi + 0xAC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D8D8u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D8D8: ;
    eax = MEM32(edi + 0xA8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D8F5u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D8F5: ;
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, 0x0028D8FDu); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028D8FD: ;
    eax = MEM32(edi + 0xB4);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028D910
 * Original: 0x0028D910 - 0x0028DB25 (533 bytes, 176 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028D910(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028D910: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = ecx;
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028D929u); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_0028D929: ;
    eax = MEM32(0x5BDE08);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D945u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D945: ;
    eax = MEM32(edi + 0x90);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D962u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D962: ;
    eax = MEM32(edi + 0x94);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D97Fu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D97F: ;
    eax = MEM32(edi + 0xB0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D99Cu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D99C: ;
    eax = MEM32(0x5BDE0C);
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D9ABu); RECOMP_ABI_CALL(0x0028C820u, sub_0028C820); /* call 0x0028C820 */

loc_0028D9AB: ;
    eax = MEM32(edi + 0xB0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D9C8u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028D9C8: ;
    eax = MEM32(0x5BDE8C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028D9E4u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028D9E4: ;
    eax = MEM32(0x5BDE64);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028DA00u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028DA00: ;
    eax = MEM32(0x5BDE14);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028DA1Cu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0028DA1C: ;
    eax = MEM32(edi + 0x5C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028DA27u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028DA27: ;
    ecx = MEM32(edi + 0x60);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028DA32u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028DA32: ;
    edx = MEM32(edi + 0xE4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028DA40u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0028DA40: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0028DA48u); RECOMP_ABI_CALL(0x00280340u, sub_00280340); /* call 0x00280340 */

loc_0028DA48: ;
    eax = MEM32(edi + 0xE4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028DA56u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_0028DA56: ;
    ecx = MEM32(edi + 0x60);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028DA61u); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_0028DA61: ;
    edx = MEM32(edi + 0x5C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028DA6Cu); RECOMP_ABI_CALL(0x00281030u, sub_00281030); /* call 0x00281030 */

loc_0028DA6C: ;
    eax = MEM32(0x5BDE14);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028DA88u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028DA88: ;
    eax = MEM32(0x5BDE64);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028DAA4u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028DAA4: ;
    eax = MEM32(0x5BDE8C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028DAC0u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028DAC0: ;
    eax = MEM32(edi + 0x94);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(esi + 0x44);
    ebp = ebp + MEM32(edx + ecx * 4);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028DADDu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028DADD: ;
    edi = MEM32(edi + 0x90);
    eax = (uint32_t)(int32_t)SMEM16(edi + 8);
    ecx = MEM32(esi + 0x44);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    edx = edx + MEM32(ecx + eax * 4);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028DAFAu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028DAFA: ;
    eax = MEM32(0x5BDE08);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(esi + 0x44);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028DB16u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0028DB16: ;
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, 0x0028DB1Eu); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028DB1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028DB30
 * Original: 0x0028DB30 - 0x0028DBA7 (119 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028DB30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0028DB51; /* jne: not equal / not zero */

loc_0028DB3C: ;
    PUSH32(esp, 0x0028DB41u); RECOMP_ABI_CALL(0x0026D2A0u, sub_0026D2A0); /* call 0x0026D2A0 */

loc_0028DB41: ;
    ecx = esi;
    PUSH32(esp, 0x0028DB48u); RECOMP_ABI_CALL(0x0026D5F0u, sub_0026D5F0); /* call 0x0026D5F0 */

loc_0028DB48: ;
    PUSH32(esp, 0x0028DB4Du); RECOMP_ABI_CALL(0x00280380u, sub_00280380); /* call 0x00280380 */

loc_0028DB4D: ;
    MEM8(esi + 0x20) = 1;

loc_0028DB51: ;
    edi = MEM32(esp + 0x10);
    eax = edi + 0xA4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028DB63u); RECOMP_ABI_CALL(0x0025C4F0u, sub_0025C4F0); /* call 0x0025C4F0 */

loc_0028DB63: ;
    ecx = MEM32(0x5BDDFC);
    ebx = MEM32(0x5BDC9C);
    MEM32(0x5BDC9C) = ecx;
    SET_LO8(eax, MEM8(esi + 0x8C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028DB87; /* je: equal / zero */

loc_0028DB7F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028DB87u); RECOMP_ABI_CALL(0x0028D910u, sub_0028D910); /* call 0x0028D910 */

loc_0028DB87: ;
    edx = MEM32(0x5BDE00);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(0x5BDC9C) = edx;
    PUSH32(esp, 0x0028DB9Bu); RECOMP_ABI_CALL(0x0028C610u, sub_0028C610); /* call 0x0028C610 */

loc_0028DB9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x5BDC9C) = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028DBB0
 * Original: 0x0028DBB0 - 0x0028DBF4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028DBB0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028DBC0; /* jne: not equal / not zero */

loc_0028DBB9: ;
    MEM8(0x5BDF6C) = 1;

loc_0028DBC0: ;
    PUSH32(esp, 0x47189C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x275C30);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405FF4);
    PUSH32(esp, 0x250FF0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDA44);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028DBF0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028DBF0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028DC00
 * Original: 0x0028DC00 - 0x0028DC44 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028DC00: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028DC10; /* jne: not equal / not zero */

loc_0028DC09: ;
    MEM8(0x5BDF6C) = 1;

loc_0028DC10: ;
    PUSH32(esp, 0x4718A4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276000);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x406014);
    PUSH32(esp, 0x2512C0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDA9C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028DC40u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028DC40: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028DC50
 * Original: 0x0028DC50 - 0x0028DC5C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DC50(void)
{

loc_0028DC50: ;
    PUSH32(esp, 0x28C9F0);
    PUSH32(esp, 0x0028DC5Au); RECOMP_ABI_CALL(0x002041B0u, sub_002041B0); /* call 0x002041B0 */

loc_0028DC5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028DC60
 * Original: 0x0028DC60 - 0x0028DCA4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028DC60: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028DC70; /* jne: not equal / not zero */

loc_0028DC69: ;
    MEM8(0x5BDF6C) = 1;

loc_0028DC70: ;
    PUSH32(esp, 0x4718AC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276AA0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x406030);
    PUSH32(esp, 0x2517A0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDB44);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028DCA0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028DCA0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028DCB0
 * Original: 0x0028DCB0 - 0x0028DCCE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DCB0(void)
{

loc_0028DCB0: ;
    PUSH32(esp, 0x2894F0);
    PUSH32(esp, 0x0028DCBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028DCBA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDB48);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028DCCDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028DCCD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0028DCD0
 * Original: 0x0028DCD0 - 0x0028DCDC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DCD0(void)
{

loc_0028DCD0: ;
    PUSH32(esp, 0x28C990);
    PUSH32(esp, 0x0028DCDAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028DCDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028DCE0
 * Original: 0x0028DCE0 - 0x0028DD27 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028DCE0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028DCF0; /* jne: not equal / not zero */

loc_0028DCE9: ;
    MEM8(0x5BDF6C) = 1;

loc_0028DCF0: ;
    PUSH32(esp, 0x4718B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x256D70);
    PUSH32(esp, 0x256D20);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x406044);
    PUSH32(esp, 0x25E6F0);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BDBC0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028DD23u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028DD23: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028DD30
 * Original: 0x0028DD30 - 0x0028DD41 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0028DD30(void)
{

loc_0028DD30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028DD3Eu); RECOMP_ABI_CALL(0x0028DB30u, sub_0028DB30); /* call 0x0028DB30 */

loc_0028DD3E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0028DD50
 * Original: 0x0028DD50 - 0x0028DD65 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DD50(void)
{

loc_0028DD50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BDCA0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0028DD61u); RECOMP_ABI_CALL(0x0028D140u, sub_0028D140); /* call 0x0028D140 */

loc_0028DD61: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0028DD70
 * Original: 0x0028DD70 - 0x0028DDFA (138 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028DD70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028DD85u); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_0028DD85: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0028DD8Du); RECOMP_ABI_CALL(0x0028D390u, sub_0028D390); /* call 0x0028D390 */

loc_0028DD8D: ;
    ecx = MEM32(esi + 0x20);
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0028DD99u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028DD99: ;
    SET_LO8(ecx, MEM8(edi + 0x94));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028DDB3; /* je: equal / zero */

loc_0028DDA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0028DDB3; /* jle: less or equal (signed <=) */

loc_0028DDA8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0028DDB1u); RECOMP_ABI_CALL(0x002856A0u, sub_002856A0); /* call 0x002856A0 */

loc_0028DDB1: ;
    goto loc_0028DDBC;

loc_0028DDB3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0028DDBCu); RECOMP_ABI_CALL(0x00285870u, sub_00285870); /* call 0x00285870 */

loc_0028DDBC: ;
    SET_LO8(eax, MEM8(edi + 0xEC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028DDEC; /* je: equal / zero */

loc_0028DDC6: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(edi + 0xE4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028DDD9u); RECOMP_ABI_CALL(0x0028C820u, sub_0028C820); /* call 0x0028C820 */

loc_0028DDD9: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(edi + 0xE8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x0028DDECu); RECOMP_ABI_CALL(0x0028C820u, sub_0028C820); /* call 0x0028C820 */

loc_0028DDEC: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x0028DDF4u); RECOMP_ABI_CALL(0x0026EA00u, sub_0026EA00); /* call 0x0026EA00 */

loc_0028DDF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028DE00
 * Original: 0x0028DE00 - 0x0028DE85 (133 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028DE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0028DE1E; /* jne: not equal / not zero */

loc_0028DE0B: ;
    PUSH32(esp, 0x0028DE10u); RECOMP_ABI_CALL(0x0025B080u, sub_0025B080); /* call 0x0025B080 */

loc_0028DE10: ;
    ecx = esi;
    PUSH32(esp, 0x0028DE17u); RECOMP_ABI_CALL(0x0026CBE0u, sub_0026CBE0); /* call 0x0026CBE0 */

loc_0028DE17: ;
    MEM32(esi + 0x68) = 1;

loc_0028DE1E: ;
    eax = MEM32(esi + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028DE66; /* je: equal / zero */

loc_0028DE28: ;
    ecx = MEM32(eax + 0x74);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(eax + 0x78);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(eax + 0x7C);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0xC8);
    ecx = MEM32(eax + 0x80);
    eax = eax + 0x80;
    MEM32(esi + 0x2C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x30) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(esi + 0xC8);
    edx = MEM32(ecx + 0x60);
    MEM32(esi + 0x38) = edx;

loc_0028DE66: ;
    edi = MEM32(esp + 0xC);
    eax = edi + 0xA4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028DE78u); RECOMP_ABI_CALL(0x0025B850u, sub_0025B850); /* call 0x0025B850 */

loc_0028DE78: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0028DE80u); RECOMP_ABI_CALL(0x0028DD70u, sub_0028DD70); /* call 0x0028DD70 */

loc_0028DE80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028DE90
 * Original: 0x0028DE90 - 0x0028DE9C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DE90(void)
{

loc_0028DE90: ;
    PUSH32(esp, 0x28DBB0);
    PUSH32(esp, 0x0028DE9Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028DE9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028DEA0
 * Original: 0x0028DEA0 - 0x0028DEAC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DEA0(void)
{

loc_0028DEA0: ;
    PUSH32(esp, 0x28DC00);
    PUSH32(esp, 0x0028DEAAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028DEAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028DEB0
 * Original: 0x0028DEB0 - 0x0028DEF7 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028DEB0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028DEC0; /* jne: not equal / not zero */

loc_0028DEB9: ;
    MEM8(0x5BDF6C) = 1;

loc_0028DEC0: ;
    PUSH32(esp, 0x4718C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x255820);
    PUSH32(esp, 0x27BED0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x406050);
    PUSH32(esp, 0x2515F0);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BDAD8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028DEF3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028DEF3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028DF00
 * Original: 0x0028DF00 - 0x0028DF3B (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DF00(void)
{

loc_0028DF00: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028DF0Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028DF0C: ;
    PUSH32(esp, 0x27B3C0);
    esi = eax;
    PUSH32(esp, 0x0028DF18u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028DF18: ;
    ecx = MEM32(0x5BD97C);
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028DF27u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028DF27: ;
    PUSH32(esp, 0x28DD50);
    MEM32(0x5BDCA0) = eax;
    PUSH32(esp, 0x0028DF36u); RECOMP_ABI_CALL(0x002041B0u, sub_002041B0); /* call 0x002041B0 */

loc_0028DF36: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0028DF40
 * Original: 0x0028DF40 - 0x0028DF8A (74 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028DF40: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028DF50; /* jne: not equal / not zero */

loc_0028DF49: ;
    MEM8(0x5BDF6C) = 1;

loc_0028DF50: ;
    PUSH32(esp, 0x4718EC);
    PUSH32(esp, 0x28DC50);
    PUSH32(esp, 0x2616E0);
    PUSH32(esp, 0x261670);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x406060);
    PUSH32(esp, 0x2500F0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDB30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028DF86u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028DF86: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028DF90
 * Original: 0x0028DF90 - 0x0028DF9C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DF90(void)
{

loc_0028DF90: ;
    PUSH32(esp, 0x28DC60);
    PUSH32(esp, 0x0028DF9Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028DF9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028DFA0
 * Original: 0x0028DFA0 - 0x0028DFE4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028DFA0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028DFB0; /* jne: not equal / not zero */

loc_0028DFA9: ;
    MEM8(0x5BDF6C) = 1;

loc_0028DFB0: ;
    PUSH32(esp, 0x471910);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x281990);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x406074);
    PUSH32(esp, 0x251920);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDBA8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028DFE0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028DFE0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028DFF0
 * Original: 0x0028DFF0 - 0x0028E00E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DFF0(void)
{

loc_0028DFF0: ;
    PUSH32(esp, 0x28C990);
    PUSH32(esp, 0x0028DFFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028DFFA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDBAC);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E00Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028E00D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0028E010
 * Original: 0x0028E010 - 0x0028E021 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0028E010(void)
{

loc_0028E010: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E01Eu); RECOMP_ABI_CALL(0x0028DE00u, sub_0028DE00); /* call 0x0028DE00 */

loc_0028E01E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0028E030
 * Original: 0x0028E030 - 0x0028E182 (338 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E030(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028E030: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028E165; /* jle: less or equal (signed <=) */

loc_0028E04A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0028E050: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E05Bu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028E05B: ;
    PUSH32(esp, 0x289390);
    esi = eax;
    PUSH32(esp, 0x0028E067u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028E067: ;
    ecx = MEM32(0x5BDA6C);
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028E076u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028E076: ;
    ecx = MEM32(ebx + 0x10);
    esi = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0028E085; /* je: equal / zero */

loc_0028E082: ;
    MEM32(esi + -4) = MEM32(esi + -4) + 1;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028E085: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0028E08Du); RECOMP_ABI_CALL(0x00282CE0u, sub_00282CE0); /* call 0x00282CE0 */

loc_0028E08D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(_fa, _fb)) goto loc_0028E0A7; /* je: equal / zero */

loc_0028E093: ;
    eax = MEM32(esi + -4);
    esi = esi + 0xFFFFFFF8u;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_0028E0A7; /* jne: not equal / not zero */

loc_0028E09F: ;
    ecx = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028E0A7u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0028E0A7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E137; /* je: equal / zero */

loc_0028E0AF: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028E0BB; /* jne: not equal / not zero */

loc_0028E0B6: ;
    eax = 0x3C806C;

loc_0028E0BB: ;
    edx = MEM32(0x5BB964);
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028E0CFu); RECOMP_ABI_CALL(0x001EAC30u, sub_001EAC30); /* call 0x001EAC30 */

loc_0028E0CF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E12E; /* je: equal / zero */

loc_0028E0D5: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028E11E; /* jne: not equal / not zero */

loc_0028E0DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028E11E; /* jne: not equal / not zero */

loc_0028E0E2: ;
    eax = MEM32(0x5BDA6C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028E0EFu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0028E0EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E11E; /* je: equal / zero */

loc_0028E0F3: ;
    ecx = MEM32(0x5BDA6C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0028E101u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0028E101: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E11E; /* je: equal / zero */

loc_0028E105: ;
    ebx = MEM32(edi + 0x38);
    ecx = ebx;
    PUSH32(esp, 0x0028E10Fu); RECOMP_ABI_CALL(0x0020EA00u, sub_0020EA00); /* call 0x0020EA00 */

loc_0028E10F: ;
    edx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0028E11Au); RECOMP_ABI_CALL(0x001F8220u, sub_001F8220); /* call 0x001F8220 */

loc_0028E11A: ;
    ebx = MEM32(esp + 0x1C);

loc_0028E11E: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E12Eu); RECOMP_ABI_CALL(0x00209950u, sub_00209950); /* call 0x00209950 */

loc_0028E12E: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028E137u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028E137: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E152; /* je: equal / zero */

loc_0028E13B: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E152; /* jne: not equal / not zero */

loc_0028E14B: ;
    ecx = edi;
    PUSH32(esp, 0x0028E152u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E152: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x20);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028E050; /* jl: less (signed <) */

loc_0028E163: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0028E165: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E17C; /* jne: not equal / not zero */

loc_0028E175: ;
    ecx = ebx;
    PUSH32(esp, 0x0028E17Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E17C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0028E190
 * Original: 0x0028E190 - 0x0028E1D7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028E190: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028E1A0; /* jne: not equal / not zero */

loc_0028E199: ;
    MEM8(0x5BDF6C) = 1;

loc_0028E1A0: ;
    PUSH32(esp, 0x471918);
    PUSH32(esp, 0);
    PUSH32(esp, 0x254BA0);
    PUSH32(esp, 0x275B20);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x40608C);
    PUSH32(esp, 0x251020);
    PUSH32(esp, 0x19C050);
    PUSH32(esp, 0x281490);
    PUSH32(esp, 0x5BDA38);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028E1D3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028E1D3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}
