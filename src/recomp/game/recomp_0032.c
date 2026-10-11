#include "engine/inventory/raven_stash_menu_guest.h"
#include "engine/inventory/raven_stash_owner.h"
#include "ui/pc_menu.h"
/**
 * X-Men Legends - Recompiled code chunk 32
 * Functions: 250 (0x00171F60 - 0x0017D750)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include "game/xml1/character_limits.h"

/**
 * sub_00171F60
 * Original: 0x00171F60 - 0x00171F7E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00171F68u); RECOMP_ABI_CALL(0x00172C80u, sub_00172C80); /* call 0x00172C80 */

loc_00171F68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00171F78; /* je: equal / zero */

loc_00171F6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00171F75u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00171F75: ;
    esp = esp + 4;

loc_00171F78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00171F80
 * Original: 0x00171F80 - 0x00172015 (149 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171F80(void)
{

loc_00171F80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354268);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00171FA3u); RECOMP_ABI_CALL(0x0016AE80u, sub_0016AE80); /* call 0x0016AE80 */

loc_00171FA3: ;
    SET_LO8(eax, MEM8(esi + 0xED0));
    ebx = 0; /* xor self */
    SET_LO8(eax, LO8(eax) & 0xFE);
    ecx = esi + 0xED4;
    MEM32(esp + 0x14) = ebx;
    MEM32(esi) = 0x3DE764;
    MEM32(esi + 0xECC) = ebx;
    MEM8(esi + 0xED0) = LO8(eax);
    MEM8(esi + 0xED1) = LO8(ebx);
    PUSH32(esp, 0x00171FD4u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_00171FD4: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0xF18) = 0x3F800000;
    MEM32(esi + 0xF1C) = ebx;
    MEM32(esi + 0xF20) = ebx;
    MEM32(esi + 0xF24) = ebx;
    MEM32(esi + 0xF28) = ebx;
    MEM32(esi + 0xF2C) = ebx;
    MEM32(esi + 0xF30) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00172020
 * Original: 0x00172020 - 0x00172040 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172020(void)
{

loc_00172020: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00172028u); RECOMP_ABI_CALL(0x0016AE80u, sub_0016AE80); /* call 0x0016AE80 */

loc_00172028: ;
    eax = 0; /* xor self */
    MEM32(esi + 0xECC) = eax;
    MEM8(esi + 0xED0) = LO8(eax);
    MEM32(esi) = 0x3DEC7C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00172040
 * Original: 0x00172040 - 0x001720A1 (97 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172040(void)
{

loc_00172040: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354268);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x00172062u); RECOMP_ABI_CALL(0x0016AE80u, sub_0016AE80); /* call 0x0016AE80 */

loc_00172062: ;
    ecx = esi + 0xECC;
    MEM32(esp + 0x10) = 0;
    MEM32(esi) = 0x3DECEC;
    PUSH32(esp, 0x0017207Bu); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_0017207B: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0xF10) = 0;
    MEM32(esi + 0xF14) = 0;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001720B0
 * Original: 0x001720B0 - 0x001720C2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001720B0(void)
{

loc_001720B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001720B8u); RECOMP_ABI_CALL(0x0016AE80u, sub_0016AE80); /* call 0x0016AE80 */

loc_001720B8: ;
    MEM32(esi) = 0x3DED5C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001720D0
 * Original: 0x001720D0 - 0x001720F0 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001720D0(void)
{

loc_001720D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001720D8u); RECOMP_ABI_CALL(0x0016AE80u, sub_0016AE80); /* call 0x0016AE80 */

loc_001720D8: ;
    raven_stash_menu_set(esi, 0);
    eax = 0; /* xor self */
    MEM32(esi + 0xECC) = eax;
    MEM32(esi + 0xED0) = eax;
    MEM32(esi) = 0x3DEDCC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001720F0
 * Original: 0x001720F0 - 0x001720F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001720F0(void)
{

loc_001720F0: ;
    eax = 0x3CEFF4;
    esp += 4; return; /* ret */

}

/**
 * sub_00172100
 * Original: 0x00172100 - 0x00172112 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172100(void)
{

loc_00172100: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00172108u); RECOMP_ABI_CALL(0x0016AE80u, sub_0016AE80); /* call 0x0016AE80 */

loc_00172108: ;
    MEM32(esi) = 0x3DEE44;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00172120
 * Original: 0x00172120 - 0x00172132 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172120(void)
{

loc_00172120: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00172128u); RECOMP_ABI_CALL(0x00171EE0u, sub_00171EE0); /* call 0x00171EE0 */

loc_00172128: ;
    MEM32(esi) = 0x3DEEB4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00172140
 * Original: 0x00172140 - 0x0017215E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00172148u); RECOMP_ABI_CALL(0x00172160u, sub_00172160); /* call 0x00172160 */

loc_00172148: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172158; /* je: equal / zero */

loc_0017214F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00172155u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00172155: ;
    esp = esp + 4;

loc_00172158: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00172160
 * Original: 0x00172160 - 0x00172165 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00172160: ;
    g_seh_ebp = ebp; sub_00172C80(); return; /* tail jmp 0x00172C80 */

}

/**
 * sub_00172170
 * Original: 0x00172170 - 0x00172182 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172170(void)
{

loc_00172170: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00172178u); RECOMP_ABI_CALL(0x0016AE80u, sub_0016AE80); /* call 0x0016AE80 */

loc_00172178: ;
    MEM32(esi) = 0x3DEF24;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00172190
 * Original: 0x00172190 - 0x001721A2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172190(void)
{

loc_00172190: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00172198u); RECOMP_ABI_CALL(0x0016AE80u, sub_0016AE80); /* call 0x0016AE80 */

loc_00172198: ;
    MEM32(esi) = 0x3DEF94;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001721B0
 * Original: 0x001721B0 - 0x001721C2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001721B0(void)
{

loc_001721B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001721B8u); RECOMP_ABI_CALL(0x0016AE80u, sub_0016AE80); /* call 0x0016AE80 */

loc_001721B8: ;
    MEM32(esi) = 0x3DF004;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001721D0
 * Original: 0x001721D0 - 0x001721EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001721D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001721D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001721D8u); RECOMP_ABI_CALL(0x001721F0u, sub_001721F0); /* call 0x001721F0 */

loc_001721D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001721E8; /* je: equal / zero */

loc_001721DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001721E5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001721E5: ;
    esp = esp + 4;

loc_001721E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001721F0
 * Original: 0x001721F0 - 0x00172236 (70 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001721F0(void)
{

loc_001721F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354268);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0xECC;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00172220u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_00172220: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DE4AC;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00172240
 * Original: 0x00172240 - 0x001726F4 (1204 bytes, 362 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172240(void)
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

loc_00172240: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354308);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x38);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00172295; /* jne: not equal / not zero */

loc_00172266: ;
    PUSH32(esp, 0x0017226Bu); RECOMP_ABI_CALL(0x00171DF0u, sub_00171DF0); /* call 0x00171DF0 */

loc_0017226B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017227B; /* je: equal / zero */

loc_0017226F: ;
    PUSH32(esp, 0x00172274u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00172274: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017227Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017227B: ;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00172295; /* jne: not equal / not zero */

loc_00172280: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_00172295: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0017229Eu); RECOMP_ABI_CALL(0x00171D80u, sub_00171D80); /* call 0x00171D80 */

loc_0017229E: ;
    esi = MEM32(esp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00172651; /* je: equal / zero */

loc_001722AC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00172651; /* je: equal / zero */

loc_001722B5: ;
    PUSH32(esp, 0x3DF178);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001722C0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001722C0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001722F2; /* jne: not equal / not zero */

loc_001722C7: ;
    ecx = edi;
    PUSH32(esp, 0x001722CEu); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_001722CE: ;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00172641; /* je: equal / zero */

loc_001722E6: ;
    ecx = eax;
    PUSH32(esp, 0x001722EDu); RECOMP_ABI_CALL(0x0016B400u, sub_0016B400); /* call 0x0016B400 */

loc_001722ED: ;
    goto loc_00172643;

loc_001722F2: ;
    PUSH32(esp, 0x3DF168);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001722FDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001722FD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017231F; /* jne: not equal / not zero */

loc_00172304: ;
    ecx = edi;
    PUSH32(esp, 0x0017230Bu); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_0017230B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172598; /* je: equal / zero */

loc_00172313: ;
    ecx = eax;
    PUSH32(esp, 0x0017231Au); RECOMP_ABI_CALL(0x00171E90u, sub_00171E90); /* call 0x00171E90 */

loc_0017231A: ;
    goto loc_0017264B;

loc_0017231F: ;
    PUSH32(esp, 0x3DF150);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017232Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017232A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017234C; /* jne: not equal / not zero */

loc_00172331: ;
    ecx = edi;
    PUSH32(esp, 0x00172338u); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_00172338: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172598; /* je: equal / zero */

loc_00172340: ;
    ecx = eax;
    PUSH32(esp, 0x00172347u); RECOMP_ABI_CALL(0x001720B0u, sub_001720B0); /* call 0x001720B0 */

loc_00172347: ;
    goto loc_0017264B;

loc_0017234C: ;
    PUSH32(esp, 0x3DF13C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00172357u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00172357: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00172379; /* jne: not equal / not zero */

loc_0017235E: ;
    ecx = edi;
    PUSH32(esp, 0x00172365u); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_00172365: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172598; /* je: equal / zero */

loc_0017236D: ;
    ecx = eax;
    PUSH32(esp, 0x00172374u); RECOMP_ABI_CALL(0x00171EC0u, sub_00171EC0); /* call 0x00171EC0 */

loc_00172374: ;
    goto loc_0017264B;

loc_00172379: ;
    PUSH32(esp, 0x3DF12C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00172384u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00172384: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001723A6; /* jne: not equal / not zero */

loc_0017238B: ;
    ecx = edi;
    PUSH32(esp, 0x00172392u); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_00172392: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172598; /* je: equal / zero */

loc_0017239A: ;
    ecx = eax;
    PUSH32(esp, 0x001723A1u); RECOMP_ABI_CALL(0x00171E60u, sub_00171E60); /* call 0x00171E60 */

loc_001723A1: ;
    goto loc_0017264B;

loc_001723A6: ;
    PUSH32(esp, 0x3DF11C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001723B1u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001723B1: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001723D3; /* jne: not equal / not zero */

loc_001723B8: ;
    ecx = edi;
    PUSH32(esp, 0x001723BFu); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_001723BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172598; /* je: equal / zero */

loc_001723C7: ;
    ecx = eax;
    PUSH32(esp, 0x001723CEu); RECOMP_ABI_CALL(0x001720D0u, sub_001720D0); /* call 0x001720D0 */

loc_001723CE: ;
    goto loc_0017264B;

loc_001723D3: ;
    PUSH32(esp, 0x3DF110);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001723DEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001723DE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00172400; /* jne: not equal / not zero */

loc_001723E5: ;
    ecx = edi;
    PUSH32(esp, 0x001723ECu); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_001723EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172598; /* je: equal / zero */

loc_001723F4: ;
    ecx = eax;
    PUSH32(esp, 0x001723FBu); RECOMP_ABI_CALL(0x00172100u, sub_00172100); /* call 0x00172100 */

loc_001723FB: ;
    goto loc_0017264B;

loc_00172400: ;
    PUSH32(esp, 0x3DF104);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017240Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017240B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00172439; /* jne: not equal / not zero */

loc_00172412: ;
    ecx = edi;
    PUSH32(esp, 0x00172419u); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_00172419: ;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00172641; /* je: equal / zero */

loc_0017242D: ;
    ecx = eax;
    PUSH32(esp, 0x00172434u); RECOMP_ABI_CALL(0x0017EFD0u, sub_0017EFD0); /* call 0x0017EFD0 */

loc_00172434: ;
    goto loc_00172643;

loc_00172439: ;
    PUSH32(esp, 0x3DF0F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00172444u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00172444: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00172476; /* jne: not equal / not zero */

loc_0017244B: ;
    ecx = edi;
    PUSH32(esp, 0x00172452u); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_00172452: ;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_00172641; /* je: equal / zero */

loc_0017246A: ;
    ecx = eax;
    PUSH32(esp, 0x00172471u); RECOMP_ABI_CALL(0x00171EE0u, sub_00171EE0); /* call 0x00171EE0 */

loc_00172471: ;
    goto loc_00172643;

loc_00172476: ;
    PUSH32(esp, 0x3DF0E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00172481u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00172481: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001724B3; /* jne: not equal / not zero */

loc_00172488: ;
    ecx = edi;
    PUSH32(esp, 0x0017248Fu); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_0017248F: ;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_00172641; /* je: equal / zero */

loc_001724A7: ;
    ecx = eax;
    PUSH32(esp, 0x001724AEu); RECOMP_ABI_CALL(0x00172120u, sub_00172120); /* call 0x00172120 */

loc_001724AE: ;
    goto loc_00172643;

loc_001724B3: ;
    PUSH32(esp, 0x3DF0CC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001724BEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001724BE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001724E0; /* jne: not equal / not zero */

loc_001724C5: ;
    ecx = edi;
    PUSH32(esp, 0x001724CCu); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_001724CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172598; /* je: equal / zero */

loc_001724D4: ;
    ecx = eax;
    PUSH32(esp, 0x001724DBu); RECOMP_ABI_CALL(0x00172170u, sub_00172170); /* call 0x00172170 */

loc_001724DB: ;
    goto loc_0017264B;

loc_001724E0: ;
    PUSH32(esp, 0x3DF0C0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001724EBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001724EB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017251D; /* jne: not equal / not zero */

loc_001724F2: ;
    ecx = edi;
    PUSH32(esp, 0x001724F9u); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_001724F9: ;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = 4;
    if (TEST_Z(_fa, _fb)) goto loc_00172641; /* je: equal / zero */

loc_00172511: ;
    ecx = eax;
    PUSH32(esp, 0x00172518u); RECOMP_ABI_CALL(0x00171F80u, sub_00171F80); /* call 0x00171F80 */

loc_00172518: ;
    goto loc_00172643;

loc_0017251D: ;
    PUSH32(esp, 0x3DF0B4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00172528u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00172528: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00172546; /* jne: not equal / not zero */

loc_0017252F: ;
    ecx = edi;
    PUSH32(esp, 0x00172536u); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_00172536: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172598; /* je: equal / zero */

loc_0017253A: ;
    ecx = eax;
    PUSH32(esp, 0x00172541u); RECOMP_ABI_CALL(0x00172020u, sub_00172020); /* call 0x00172020 */

loc_00172541: ;
    goto loc_0017264B;

loc_00172546: ;
    PUSH32(esp, 0x3DF0A4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00172551u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00172551: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017256F; /* jne: not equal / not zero */

loc_00172558: ;
    ecx = edi;
    PUSH32(esp, 0x0017255Fu); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_0017255F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172598; /* je: equal / zero */

loc_00172563: ;
    ecx = eax;
    PUSH32(esp, 0x0017256Au); RECOMP_ABI_CALL(0x00172190u, sub_00172190); /* call 0x00172190 */

loc_0017256A: ;
    goto loc_0017264B;

loc_0017256F: ;
    PUSH32(esp, 0x3DF094);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017257Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017257A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017259F; /* jne: not equal / not zero */

loc_00172581: ;
    ecx = edi;
    PUSH32(esp, 0x00172588u); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_00172588: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172598; /* je: equal / zero */

loc_0017258C: ;
    ecx = eax;
    PUSH32(esp, 0x00172593u); RECOMP_ABI_CALL(0x001721B0u, sub_001721B0); /* call 0x001721B0 */

loc_00172593: ;
    goto loc_0017264B;

loc_00172598: ;
    eax = 0; /* xor self */
    goto loc_0017264B;

loc_0017259F: ;
    PUSH32(esp, 0x3DF088);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001725AAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001725AA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001725D5; /* jne: not equal / not zero */

loc_001725B1: ;
    ecx = edi;
    PUSH32(esp, 0x001725B8u); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_001725B8: ;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = 5;
    if (TEST_Z(_fa, _fb)) goto loc_00172641; /* je: equal / zero */

loc_001725CC: ;
    ecx = eax;
    PUSH32(esp, 0x001725D3u); RECOMP_ABI_CALL(0x00172040u, sub_00172040); /* call 0x00172040 */

loc_001725D3: ;
    goto loc_00172643;

loc_001725D5: ;
    PUSH32(esp, 0x3DF078);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001725E0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001725E0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017260B; /* jne: not equal / not zero */

loc_001725E7: ;
    ecx = edi;
    PUSH32(esp, 0x001725EEu); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_001725EE: ;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = 6;
    if (TEST_Z(_fa, _fb)) goto loc_00172641; /* je: equal / zero */

loc_00172602: ;
    ecx = eax;
    PUSH32(esp, 0x00172609u); RECOMP_ABI_CALL(0x001719F0u, sub_001719F0); /* call 0x001719F0 */

loc_00172609: ;
    goto loc_00172643;

loc_0017260B: ;
    PUSH32(esp, 0x3DF06C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00172616u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00172616: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00172651; /* jne: not equal / not zero */

loc_0017261D: ;
    ecx = edi;
    PUSH32(esp, 0x00172624u); RECOMP_ABI_CALL(0x00171B70u, sub_00171B70); /* call 0x00171B70 */

loc_00172624: ;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = 7;
    if (TEST_Z(_fa, _fb)) goto loc_00172641; /* je: equal / zero */

loc_00172638: ;
    ecx = eax;
    PUSH32(esp, 0x0017263Fu); RECOMP_ABI_CALL(0x00171B20u, sub_00171B20); /* call 0x00171B20 */

loc_0017263F: ;
    goto loc_00172643;

loc_00172641: ;
    eax = 0; /* xor self */

loc_00172643: ;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;

loc_0017264B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017268B; /* jne: not equal / not zero */

loc_00172651: ;
    eax = MEM32(edi + 8);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = edi + 0x3C;
    esi = edx + ecx * 4 + 0x1158;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1158);
    ecx = ecx & 0x1F;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi);
    ecx = ecx | ebx;
    eax = eax + edx;
    MEM32(esi) = ecx;
    if ((eax == 0)) goto loc_00172683; /* je: equal / zero */

loc_0017267A: ;
    ecx = eax;
    PUSH32(esp, 0x00172681u); RECOMP_ABI_CALL(0x0016AE80u, sub_0016AE80); /* call 0x0016AE80 */

loc_00172681: ;
    goto loc_00172685;

loc_00172683: ;
    eax = 0; /* xor self */

loc_00172685: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001726C1; /* je: equal / zero */

loc_0017268B: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017269B; /* je: equal / zero */

loc_00172693: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017269B; /* je: equal / zero */

loc_00172698: ;
    PUSH32(esp, eax);
    goto loc_001726A2;

loc_0017269B: ;
    edx = MEM32(0x4583F8);
    PUSH32(esp, edx);

loc_001726A2: ;
    ecx = ebp;
    PUSH32(esp, 0x001726A9u); RECOMP_ABI_CALL(0x001613A0u, sub_001613A0); /* call 0x001613A0 */

loc_001726A9: ;
    ecx = edi;
    PUSH32(esp, 0x001726B0u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_001726B0: ;
    PUSH32(esp, 0x001726B5u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_001726B5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001726BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001726BC: ;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001726DD;

loc_001726C1: ;
    eax = MEM32(0x4583FC);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001726CEu); RECOMP_ABI_CALL(0x001613A0u, sub_001613A0); /* call 0x001613A0 */

loc_001726CE: ;
    ecx = edi;
    PUSH32(esp, 0x001726D5u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_001726D5: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x001726DDu); RECOMP_ABI_CALL(0x00171BE0u, sub_00171BE0); /* call 0x00171BE0 */

loc_001726DD: ;
    ecx = MEM32(esp + 0x14);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00172700
 * Original: 0x00172700 - 0x0017271E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172700: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00172708u); RECOMP_ABI_CALL(0x00172720u, sub_00172720); /* call 0x00172720 */

loc_00172708: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172718; /* je: equal / zero */

loc_0017270F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00172715u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00172715: ;
    esp = esp + 4;

loc_00172718: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00172720
 * Original: 0x00172720 - 0x00172727 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172720(void)
{

loc_00172720: ;
    raven_stash_menu_set(ecx, 0);
    MEM32(ecx) = 0x3DE4AC;
    esp += 4; return; /* ret */

}

/**
 * sub_00172730
 * Original: 0x00172730 - 0x00172774 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172730: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xED8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0xED8;
    if (TEST_Z(_fa, _fb)) goto loc_00172767; /* je: equal / zero */

loc_00172744: ;
    PUSH32(esp, 0x00172749u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00172749: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00172758u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172758: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017275Eu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_0017275E: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00172767: ;
    MEM32(edi + 0xED4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00172780
 * Original: 0x00172780 - 0x00172824 (164 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00172780: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xEDC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xEDC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172822; /* je: equal / zero */

loc_00172790: ;
    PUSH32(esp, 0x00172795u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00172795: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0017279Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017279F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017281A; /* je: equal / zero */

loc_001727A3: ;
    _fa = (uint32_t)(MEM8(esi + 0xEDC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xEDC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017281A; /* je: equal / zero */

loc_001727AC: ;
    ecx = eax;
    ecx = ecx >> 0xB;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017281A; /* jne: not equal / not zero */

loc_001727B6: ;
    edx = eax;
    edx = edx >> 0xC;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017281A; /* jne: not equal / not zero */

loc_001727C0: ;
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017281A; /* jne: not equal / not zero */

loc_001727CA: ;
    edx = eax;
    edx = edx >> 0x11;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017281A; /* jne: not equal / not zero */

loc_001727D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017281A; /* jne: not equal / not zero */

loc_001727D8: ;
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017281A; /* jne: not equal / not zero */

loc_001727E1: ;
    edx = eax;
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017281A; /* jne: not equal / not zero */

loc_001727EB: ;
    ecx = eax;
    ecx = ecx >> 3;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017281A; /* jne: not equal / not zero */

loc_001727F5: ;
    eax = eax >> 0x15;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017280A; /* jne: not equal / not zero */

loc_001727FC: ;
    PUSH32(esp, 0x00172801u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00172801: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017280Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017280A: ;
    PUSH32(esp, 0x0017280Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017280F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0017281Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017281A: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00160A40(); return; /* tail jmp 0x00160A40 */

loc_00172822: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00172830
 * Original: 0x00172830 - 0x00172879 (73 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172830: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00172839u); RECOMP_ABI_CALL(0x00161DA0u, sub_00161DA0); /* call 0x00161DA0 */

loc_00172839: ;
    eax = MEM32(edi + 0xED8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0xED8;
    if (TEST_Z(_fa, _fb)) goto loc_0017286C; /* je: equal / zero */

loc_00172849: ;
    PUSH32(esp, 0x0017284Eu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017284E: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017285Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017285D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00172863u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00172863: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0017286C: ;
    MEM32(edi + 0xED4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00172880
 * Original: 0x00172880 - 0x001729A5 (293 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172880: ;
    esp = esp - 0x108;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x108) = eax;
    eax = MEM32(esi + 0xED8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001728B8; /* je: equal / zero */

loc_001728A0: ;
    PUSH32(esp, 0x001728A5u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001728A5: ;
    ecx = MEM32(esi + 0xED8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001728B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001728B8: ;
    edi = MEM32(esp + 0x114);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017298E; /* je: equal / zero */

loc_001728C7: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017298E; /* je: equal / zero */

loc_001728D0: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x001728E2u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_001728E2: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x001728EAu); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_001728EA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001728FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001728FB: ;
    PUSH32(esp, 0x00172900u); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_00172900: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00172911u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172911: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0xED4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0017297F; /* je: equal / zero */

loc_0017291D: ;
    eax = MEM32(esi + 0xED8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017294A; /* jne: not equal / not zero */

loc_00172927: ;
    PUSH32(esp, 0x0017292Cu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017292C: ;
    edx = MEM32(eax);
    ecx = esi + 0xECC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00172942u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172942: ;
    edx = MEM32(eax);
    MEM32(esi + 0xED8) = edx;

loc_0017294A: ;
    ecx = MEM32(esi + 0xED8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017297F; /* je: equal / zero */

loc_00172954: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00172959u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172959: ;
    ecx = MEM32(esi + 0xED4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00172967u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172967: ;
    PUSH32(esp, 0x0017296Cu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017296C: ;
    ecx = MEM32(esi + 0xED8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0017297Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017297F: ;
    PUSH32(esp, 0x00172984u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_00172984: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0017298Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017298E: ;
    ecx = MEM32(esp + 0x10C);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x0017299Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017299C: ;
    esp = esp + 0x108;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001729B0
 * Original: 0x001729B0 - 0x00172A2C (124 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001729B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001729B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xED4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00172A24; /* jne: not equal / not zero */

loc_001729BD: ;
    PUSH32(esp, 0x001729C2u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001729C2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x001729CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001729CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172A24; /* je: equal / zero */

loc_001729D0: ;
    PUSH32(esp, 0x001729D5u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001729D5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x001729DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001729DF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00172A24; /* je: equal / zero */

loc_001729E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001729EBu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_001729EB: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001729F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001729F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00172A24; /* jne: not equal / not zero */

loc_001729F9: ;
    PUSH32(esp, 0x001729FEu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001729FE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x00172A08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172A08: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00172A10u); RECOMP_ABI_CALL(0x00172880u, sub_00172880); /* call 0x00172880 */

loc_00172A10: ;
    PUSH32(esp, 0x00172A15u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00172A15: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x00172A24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172A24: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00161E60(); return; /* tail jmp 0x00161E60 */

}

/**
 * sub_00172A30
 * Original: 0x00172A30 - 0x00172C7E (590 bytes, 163 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172A30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00172A30: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354350);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00172A5Bu); RECOMP_ABI_CALL(0x00163520u, sub_00163520); /* call 0x00163520 */

loc_00172A5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00172A72; /* jne: not equal / not zero */

loc_00172A5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

loc_00172A72: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00172A7Bu); RECOMP_ABI_CALL(0x00172730u, sub_00172730); /* call 0x00172730 */

loc_00172A7B: ;
    ecx = esp + 0x10;
    ebx = esi + 0xECC;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x14) = 0x44000000;
    MEM32(esp + 0x18) = 0x43C00000;
    PUSH32(esp, 0x00172A9Du); RECOMP_ABI_CALL(0x0018A240u, sub_0018A240); /* call 0x0018A240 */

loc_00172A9D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x43C00000;
    PUSH32(esp, 0x00172AC1u); RECOMP_ABI_CALL(0x0018A210u, sub_0018A210); /* call 0x0018A210 */

loc_00172AC1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE154);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172AD1u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172AD1: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x00172AE5u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172AE5: ;
    ebx = ebx | 0xFFFFFFFFu;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172AF7u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172AF7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172B3B; /* je: equal / zero */

loc_00172AFB: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE154);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172B0Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172B0B: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x3C) = 1;
    PUSH32(esp, 0x00172B1Fu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172B1F: ;
    ecx = eax;
    PUSH32(esp, 0x00172B26u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00172B26: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00172B2Eu); RECOMP_ABI_CALL(0x00172880u, sub_00172880); /* call 0x00172880 */

loc_00172B2E: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172B3Bu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172B3B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF19C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172B4Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172B4B: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x3C) = 2;
    PUSH32(esp, 0x00172B5Fu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172B5F: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172B6Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172B6E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172BD0; /* je: equal / zero */

loc_00172B72: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF19C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172B82u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172B82: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x3C) = 3;
    PUSH32(esp, 0x00172B96u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172B96: ;
    PUSH32(esp, 0x3CB744);
    ecx = eax;
    PUSH32(esp, 0x00172BA2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00172BA2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00172BA8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00172BA8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0xEDC));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    ecx = esp + 0x10;
    MEM8(esi + 0xEDC) = LO8(eax);
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172BD0u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172BD0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF190);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172BE0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172BE0: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x3C) = 4;
    PUSH32(esp, 0x00172BF4u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172BF4: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172C03u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172C03: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172C67; /* je: equal / zero */

loc_00172C07: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF190);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00172C17u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172C17: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x3C) = 5;
    PUSH32(esp, 0x00172C2Bu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172C2B: ;
    PUSH32(esp, 0x3CB744);
    ecx = eax;
    PUSH32(esp, 0x00172C37u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00172C37: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00172C3Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00172C3D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0xEDC));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    ecx = esp + 0x20;
    MEM8(esi + 0xEDC) = LO8(eax);
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172C67u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172C67: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00172C80
 * Original: 0x00172C80 - 0x00172D10 (144 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172C80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354376);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = edi;
    MEM32(edi) = 0x3DEC0C;
    eax = MEM32(edi + 0xED8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0xED8;
    MEM32(esp + 0x14) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00172CDF; /* je: equal / zero */

loc_00172CBC: ;
    PUSH32(esp, 0x00172CC1u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00172CC1: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00172CD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172CD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00172CD6u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00172CD6: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00172CDF: ;
    ecx = edi + 0xECC;
    MEM32(edi + 0xED4) = 0;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x00172CF9u); RECOMP_ABI_CALL(0x0018A490u, sub_0018A490); /* call 0x0018A490 */

loc_00172CF9: ;
    ecx = MEM32(esp + 0xC);
    MEM32(edi) = 0x3DE4AC;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00172D10
 * Original: 0x00172D10 - 0x00172D30 (32 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172D10(void)
{

loc_00172D10: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    eax = MEM32(ecx);
    MEM32(ecx + 0x3C) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00172D1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172D1E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00172D30
 * Original: 0x00172D30 - 0x00172D65 (53 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172D30(void)
{

loc_00172D30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00172D39u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00172D39: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x00172D4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172D4F: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00172D60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172D60: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00172D70
 * Original: 0x00172D70 - 0x00172FDA (618 bytes, 184 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172D70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00172D70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3543B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 0x3D6254);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172D9Eu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172D9E: ;
    edi = MEM32(esp + 0x40);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x00172DB6u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172DB6: ;
    ebx = ebx | 0xFFFFFFFFu;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172DC8u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172DC8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172DDF; /* je: equal / zero */

loc_00172DCC: ;
    ecx = ebp;
    PUSH32(esp, 0x00172DD3u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00172DD3: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00172DDCu); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_00172DDC: ;
    MEM32(esi + 0x40) = eax;

loc_00172DDF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C842C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172DEFu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172DEF: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x3C) = 1;
    PUSH32(esp, 0x00172E03u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172E03: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172E12u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172E12: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172E29; /* je: equal / zero */

loc_00172E16: ;
    ecx = ebp;
    PUSH32(esp, 0x00172E1Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00172E1D: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00172E26u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_00172E26: ;
    MEM32(esi + 0x44) = eax;

loc_00172E29: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8434);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172E39u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172E39: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x3C) = 2;
    PUSH32(esp, 0x00172E4Du); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172E4D: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172E5Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172E5C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172E73; /* je: equal / zero */

loc_00172E60: ;
    ecx = ebp;
    PUSH32(esp, 0x00172E67u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00172E67: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00172E70u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_00172E70: ;
    MEM32(esi + 0x48) = eax;

loc_00172E73: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DDC78);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172E83u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172E83: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x3C) = 3;
    PUSH32(esp, 0x00172E97u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172E97: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172EA6u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172EA6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172EBD; /* je: equal / zero */

loc_00172EAA: ;
    ecx = ebp;
    PUSH32(esp, 0x00172EB1u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00172EB1: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00172EBAu); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_00172EBA: ;
    MEM32(esi + 0x4C) = eax;

loc_00172EBD: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF1E8);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172ECDu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172ECD: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x3C) = 4;
    PUSH32(esp, 0x00172EE1u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172EE1: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172EF0u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172EF0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172F0F; /* je: equal / zero */

loc_00172EF4: ;
    ecx = ebp;
    PUSH32(esp, 0x00172EFBu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00172EFB: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00172F04u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_00172F04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x50) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00172F0F; /* je: equal / zero */

loc_00172F0B: ;
    MEM8(eax + 0x39) = MEM8(eax + 0x39) | 0x10;

loc_00172F0F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF1D8);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172F1Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172F1F: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x3C) = 5;
    PUSH32(esp, 0x00172F33u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172F33: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172F42u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172F42: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172F61; /* je: equal / zero */

loc_00172F46: ;
    ecx = ebp;
    PUSH32(esp, 0x00172F4Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00172F4D: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00172F56u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_00172F56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x58) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00172F61; /* je: equal / zero */

loc_00172F5D: ;
    MEM8(eax + 0x39) = MEM8(eax + 0x39) | 0x10;

loc_00172F61: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF1D0);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00172F71u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00172F71: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x3C) = 6;
    PUSH32(esp, 0x00172F85u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00172F85: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x00172F94u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00172F94: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00172FC3; /* je: equal / zero */

loc_00172F98: ;
    PUSH32(esp, 0x3CB744);
    ecx = edi;
    PUSH32(esp, 0x00172FA4u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00172FA4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00172FAAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00172FAA: ;
    SET_LO8(ebx, MEM8(esi + 0x3A));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x3A) = LO8(eax);

loc_00172FC3: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00172FE0
 * Original: 0x00172FE0 - 0x00173013 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172FE0(void)
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

loc_00172FE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017300B; /* je: equal / zero */

loc_00172FEA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00172FEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172FEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017300B; /* je: equal / zero */

loc_00172FF3: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00172FFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00172FFB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00173002u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173002: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00173009u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173009: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017300B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00173020
 * Original: 0x00173020 - 0x00173154 (308 bytes, 110 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173020(void)
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

loc_00173020: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00173029u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173029: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x39), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00173151; /* jne: not equal / not zero */

loc_00173033: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001730C5; /* je: equal / zero */

loc_0017303E: ;
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(0x3DF1CC); /* fmul dword ptr [0x3df1cc] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001730C5; /* jne: not equal / not zero */

loc_00173060: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001730C5; /* jp: parity */

loc_00173071: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001730C5; /* je: equal / zero */

loc_00173078: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017307Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017307D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173151; /* je: equal / zero */

loc_00173085: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0017308Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017308D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00173094u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173094: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0017309Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017309B: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x001730A5u); RECOMP_ABI_CALL(0x00161360u, sub_00161360); /* call 0x00161360 */

loc_001730A5: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001730AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001730AF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001730B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001730B6: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001730C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001730C2: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001730C5: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173151; /* je: equal / zero */

loc_001730D0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001730D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001730D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173151; /* je: equal / zero */

loc_001730D9: ;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3A), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173151; /* je: equal / zero */

loc_001730DF: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001730E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001730E7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001730EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001730EE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001730F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001730F5: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00173151; /* jne: not equal / not zero */

loc_00173106: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017310Cu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017310C: ;
    ecx = MEM32(esi + 0x3C);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00173116u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173116: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017311Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017311D: ;
    esi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00173126u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173126: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 8); /* fdiv dword ptr [esp + 8] */
    edi = MEM32(esi);
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMD(0x3D45C8)); /* fld double */
    PUSH32(esp, 0x00173147u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_00173147: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x00173150u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173150: ;
    POP32(esp, edi);

loc_00173151: ;
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
 * sub_00173160
 * Original: 0x00173160 - 0x0017322F (207 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173160: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0017316Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017316A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00173174u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173174: ;
    ebx = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001731AB; /* je: equal / zero */

loc_0017317D: ;
    ecx = ebx;
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173190; /* je: equal / zero */

loc_00173187: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0017318Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017318E: ;
    goto loc_001731A5;

loc_00173190: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001731AB; /* je: equal / zero */

loc_00173194: ;
    eax = ebx;
    eax = eax >> 0x15;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001731AB; /* je: equal / zero */

loc_0017319D: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001731A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001731A5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001731EA; /* jne: not equal / not zero */

loc_001731AB: ;
    ebx = ebx >> 4;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017322B; /* je: equal / zero */

loc_001731B3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x001731BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001731BA: ;
    edi = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001731EA; /* je: equal / zero */

loc_001731C3: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x39), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001731D2; /* je: equal / zero */

loc_001731C9: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001731D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001731D0: ;
    goto loc_001731E4;

loc_001731D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001731EA; /* je: equal / zero */

loc_001731D6: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x39), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001731EA; /* je: equal / zero */

loc_001731DC: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x001731E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001731E4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001731EA; /* jg: greater (signed >) */

loc_001731E8: ;
    edi = eax;

loc_001731EA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00173201; /* jne: not equal / not zero */

loc_001731EF: ;
    PUSH32(esp, 0x001731F4u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001731F4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001731FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001731FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00173201: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00173218; /* jne: not equal / not zero */

loc_00173206: ;
    PUSH32(esp, 0x0017320Bu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017320B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00173214u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173214: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00173218: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017322B; /* jne: not equal / not zero */

loc_0017321D: ;
    PUSH32(esp, 0x00173222u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00173222: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017322Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017322B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00173230
 * Original: 0x00173230 - 0x00173238 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173230(void)
{

loc_00173230: ;
    MEM32(ecx + 0x3C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00173240
 * Original: 0x00173240 - 0x0017328D (77 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00173240(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00173240: ;
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x60);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x5C);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x5E);
    fp_push((double)SMEM32(esp)); /* fild */
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x62);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEM32(esp) = edx;
    fp_top() = fp_top() + (double)SMEM32(esp); /* fiadd dword ptr [esp] */
    MEM32(esp) = eax;
    eax = MEM32(esp + 8);
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(eax + 4) = 0xC2C80000u;
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00173290
 * Original: 0x00173290 - 0x0017329D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173290(void)
{

loc_00173290: ;
    eax = ecx;
    MEM32(eax + 0x84) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001732A0
 * Original: 0x001732A0 - 0x00173333 (147 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001732A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001732A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001732B3; /* jne: not equal / not zero */

loc_001732AC: ;
    eax = 0x3C806C;
    goto loc_001732C9;

loc_001732B3: ;
    PUSH32(esp, 0x001732B8u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_001732B8: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x1008;

loc_001732C9: ;
    edx = eax + 1;
    /* nop */

loc_001732D0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001732D0; /* jne: not equal / not zero */

loc_001732D7: ;
    eax = eax - edx;
    MEM32(esp + 8) = eax;
    if ((eax == 0)) goto loc_0017332D; /* je: equal / zero */

loc_001732DF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001732E5u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_001732E5: ;
    esi = MEM32(edi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00173305; /* jne: not equal / not zero */

loc_001732EE: ;
    edx = MEM32(ebx);
    eax = 0x3C806C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001732FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001732FB: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00173305: ;
    PUSH32(esp, 0x0017330Au); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017330A: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x1008;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00173323u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173323: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0017332D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00173340
 * Original: 0x00173340 - 0x00173403 (195 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173340(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00173340: ;
    xml1_pc_native_focus_trace(ecx,MEM32(esp),MEM32(esp+4));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001733A0; /* je: equal / zero */

loc_00173351: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017338B; /* je: equal / zero */

loc_00173355: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017338B; /* je: equal / zero */

loc_0017335C: ;
    edi = MEM32(esi + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017336A; /* jne: not equal / not zero */

loc_00173363: ;
    eax = 0x3C806C;
    goto loc_00173380;

loc_0017336A: ;
    PUSH32(esp, 0x0017336Fu); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017336F: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x1008;

loc_00173380: ;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0017338Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017338B: ;
    PUSH32(esp, 0x00173390u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00173390: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_001733CE; /* jne: not equal / not zero */

loc_00173399: ;
    eax = 0x3C806C;
    goto loc_001733E4;

loc_001733A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001733B9; /* je: equal / zero */

loc_001733A4: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001733B9; /* je: equal / zero */

loc_001733AB: ;
    edx = MEM32(0x458674);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x001733B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001733B9: ;
    PUSH32(esp, 0x001733BEu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_001733BE: ;
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_001733CE; /* jne: not equal / not zero */

loc_001733C7: ;
    eax = 0x3C806C;
    goto loc_001733E4;

loc_001733CE: ;
    PUSH32(esp, 0x001733D3u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_001733D3: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x1008;

loc_001733E4: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001733EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001733ED: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    SET_LO8(ecx, MEM8(esi + 0x39));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x39) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00173410
 * Original: 0x00173410 - 0x001734CE (190 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173410: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001734C6; /* je: equal / zero */

loc_0017342A: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00173439; /* jne: not equal / not zero */

loc_00173432: ;
    eax = 0x3C806C;
    goto loc_0017344F;

loc_00173439: ;
    PUSH32(esp, 0x0017343Eu); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017343E: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x1008;

loc_0017344F: ;
    ecx = MEM32(ebx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00173460u); RECOMP_ABI_CALL(0x00161300u, sub_00161300); /* call 0x00161300 */

loc_00173460: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001734B8; /* je: equal / zero */

loc_00173465: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173487; /* je: equal / zero */

loc_0017346D: ;
    edx = MEM32(esp + 8);
    MEM32(eax) = edx;
    ecx = MEM32(ebx);
    edx = MEM32(edi);
    MEM32(edi + 0x3C) = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0017347Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017347F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00173487: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001734A4; /* je: equal / zero */

loc_0017348F: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00173499u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00173499: ;
    esp = esp + 4;
    MEM32(esp + 8) = 0;

loc_001734A4: ;
    ecx = MEM32(ebx);
    edx = MEM32(edi);
    MEM32(edi + 0x3C) = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001734B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001734B0: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001734B8: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001734C6; /* je: equal / zero */

loc_001734BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001734C3u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_001734C3: ;
    esp = esp + 4;

loc_001734C6: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001734D0
 * Original: 0x001734D0 - 0x001735F3 (291 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001734D0(void)
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

loc_001734D0: ;
    esp = esp - 0x68;
    eax = MEM32(0x5BC9D0);
    edx = MEM32(0x5BC9D8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC9D4);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00173502; /* jne: not equal / not zero */

loc_001734FB: ;
    eax = 0x3C806C;
    goto loc_00173518;

loc_00173502: ;
    PUSH32(esp, 0x00173507u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00173507: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x1008;

loc_00173518: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00173526u); RECOMP_ABI_CALL(0x001612B0u, sub_001612B0); /* call 0x001612B0 */

loc_00173526: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001735ED; /* je: equal / zero */

loc_00173530: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, 0x0017353Au); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0017353A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00173541u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173541: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017354Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017354F: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, 0x0017355Du); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0017355D: ;
    eax = MEM32(edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0017356Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017356E: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    PUSH32(esp, 0x0017357Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0017357B: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    MEM16(esi + 0x60) = LO16(eax);
    PUSH32(esp, 0x0017358Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0017358C: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM16(esi + 0x62) = LO16(eax);
    PUSH32(esp, 0x00173599u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00173599: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    SET_LO16(edi, LO16(eax));
    MEM16(esi + 0x64) = LO16(edi);
    PUSH32(esp, 0x001735A9u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001735A9: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    SET_LO16(ebx, LO16(eax));
    MEM16(esi + 0x66) = LO16(ebx);
    PUSH32(esp, 0x001735B9u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001735B9: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = eax + edi;
    MEM16(esi + 0x5C) = LO16(eax);
    PUSH32(esp, 0x001735C8u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001735C8: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = eax + ebx;
    MEM16(esi + 0x5E) = LO16(eax);
    PUSH32(esp, 0x001735D7u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001735D7: ;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    PUSH32(esp, 0x001735E8u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001735E8: ;
    MEM16(esi + 0x68) = LO16(eax);
    POP32(esp, ebx);

loc_001735ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00173600
 * Original: 0x00173600 - 0x0017360C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173600(void)
{

loc_00173600: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00173608u); RECOMP_ABI_CALL(0x00173290u, sub_00173290); /* call 0x00173290 */

loc_00173608: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00173610
 * Original: 0x00173610 - 0x0017362D (29 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173610: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0017362A; /* jl: less (signed <) */

loc_00173618: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017362A; /* jge: greater or equal (signed >=) */

loc_0017361D: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = ecx + eax * 4;
    PUSH32(esp, 0x0017362Au); RECOMP_ABI_CALL(0x001613A0u, sub_001613A0); /* call 0x001613A0 */

loc_0017362A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00173630
 * Original: 0x00173630 - 0x0017370B (219 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173630(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00173630: ;
    esp = esp - 0x88;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    esi = ebp;
    PUSH32(esp, 0x00173647u); RECOMP_ABI_CALL(0x00173600u, sub_00173600); /* call 0x00173600 */

loc_00173647: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001736C3; /* je: equal / zero */

loc_0017364D: ;
    edi = MEM32(esp + 0xA0);
    edx = MEM32(esp + 0x9C);
    ecx = MEM32(esp + 0x94);

loc_00173662: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00173669; /* jl: less (signed <) */

loc_00173667: ;
    SET_LO8(ebx, 1);

loc_00173669: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017367B; /* jle: less or equal (signed <=) */

loc_0017366F: ;
    /* nop */

loc_00173670: ;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x10), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001736D2; /* je: equal / zero */

loc_00173676: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00173670; /* jl: less (signed <) */

loc_0017367B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001736D2; /* jne: not equal / not zero */

loc_0017367F: ;
    MEM32(esp + ecx * 4 + 0x10) = esi;
    ecx = MEM32(esp + 0x94);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x94) = ecx;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0017369B; /* jge: greater or equal (signed >=) */

loc_00173696: ;
    esi = MEM32(esi + 0x40);
    goto loc_001736B0;

loc_0017369B: ;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001736A2; /* jle: less or equal (signed <=) */

loc_0017369D: ;
    esi = MEM32(esi + 0x44);
    goto loc_001736B0;

loc_001736A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001736AB; /* jge: greater or equal (signed >=) */

loc_001736A6: ;
    esi = MEM32(esi + 0x48);
    goto loc_001736B0;

loc_001736AB: ;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001736B0; /* jle: less or equal (signed <=) */

loc_001736AD: ;
    esi = MEM32(esi + 0x4C);

loc_001736B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001736C3; /* je: equal / zero */

loc_001736B4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001736C3; /* je: equal / zero */

loc_001736B8: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00173662; /* jne: not equal / not zero */

loc_001736BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173662; /* je: equal / zero */

loc_001736C3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 12; return; /* ret 8 */

loc_001736D2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001736EB; /* js: sign (negative) */

loc_001736D5: ;
    eax = MEM32(esp + ecx * 4 + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001736E8; /* je: equal / zero */

loc_001736DD: ;
    SET_LO8(eax, MEM8(eax + 0x39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001736E8; /* jne: not equal / not zero */

loc_001736E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001736FA; /* jne: not equal / not zero */

loc_001736E8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001736D5; /* jns: not sign (positive) */

loc_001736EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 12; return; /* ret 8 */

loc_001736FA: ;
    eax = MEM32(esp + ecx * 4 + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00173710
 * Original: 0x00173710 - 0x00173882 (370 bytes, 110 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00173710: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3543E0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x68;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF200);
    ecx = esp + 0x18;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x0017374Au); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017374A: ;
    ecx = MEM32(esp + 0x84);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x80) = 0;
    PUSH32(esp, 0x00173766u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00173766: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173779u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173779: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001737B1; /* je: equal / zero */

loc_0017377D: ;
    ecx = esi;
    PUSH32(esp, 0x00173784u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173784: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001737AB; /* je: equal / zero */

loc_0017378A: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001737AB; /* je: equal / zero */

loc_0017378F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00173795u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00173795: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001737A0u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_001737A0: ;
    ecx = eax;
    PUSH32(esp, 0x001737A7u); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_001737A7: ;
    MEM32(edi) = eax;
    goto loc_001737B1;

loc_001737AB: ;
    MEM32(edi) = 0;

loc_001737B1: ;
    esi = 0; /* xor self */

loc_001737B3: ;
    ebp = esi + 1;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3DF1F4);
    ecx = esp + 0x38;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x001737CDu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_001737CD: ;
    esp = esp + 0x10;
    PUSH32(esp, 2);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x001737E0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_001737E0: ;
    ecx = MEM32(esp + 0x84);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM32(esp + 0x80) = 1;
    PUSH32(esp, 0x001737FCu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_001737FC: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017380Fu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017380F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017385A; /* je: equal / zero */

loc_00173813: ;
    ecx = edi;
    PUSH32(esp, 0x0017381Au); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017381A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_S(_fas, _fbs)) goto loc_0017385A; /* jl: less (signed <) */

loc_00173820: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017385A; /* jge: greater or equal (signed >=) */

loc_00173825: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017384F; /* je: equal / zero */

loc_00173829: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017384F; /* je: equal / zero */

loc_0017382E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00173834u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00173834: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017383Fu); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017383F: ;
    ecx = eax;
    PUSH32(esp, 0x00173846u); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_00173846: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + esi * 4) = eax;
    goto loc_0017385A;

loc_0017384F: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx + esi * 4) = 0;

loc_0017385A: ;
    esi = ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001737B3; /* jl: less (signed <) */

loc_00173865: ;
    ecx = MEM32(esp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x68);
    POP32(esp, ebp);
    PUSH32(esp, 0x0017387Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017387C: ;
    esp = esp + 0x74;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00173890
 * Original: 0x00173890 - 0x00173EE9 (1625 bytes, 462 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00173890: ;
    xml1_pc_native_item(ecx, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35447F);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x8C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x18;
    MEM32(esp + 0xA0) = eax;
    PUSH32(esp, 0x001738CDu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_001738CD: ;
    edi = MEM32(esp + 0xAC);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0xA8) = 0;
    PUSH32(esp, 0x001738EBu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_001738EB: ;
    ebx = ebx | 0xFFFFFFFFu;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x00173900u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173900: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017393B; /* je: equal / zero */

loc_00173904: ;
    ecx = ebp;
    PUSH32(esp, 0x0017390Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017390B: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173934; /* je: equal / zero */

loc_00173911: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00173934; /* je: equal / zero */

loc_00173917: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0017391Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0017391D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00173928u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00173928: ;
    ecx = eax;
    PUSH32(esp, 0x0017392Fu); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_0017392F: ;
    MEM32(esi + 8) = eax;
    goto loc_0017393B;

loc_00173934: ;
    MEM32(esi + 8) = 0;

loc_0017393B: ;
    PUSH32(esp, edi);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00173944u); RECOMP_ABI_CALL(0x00173710u, sub_00173710); /* call 0x00173710 */

loc_00173944: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF268);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00173954u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00173954: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0xA8) = 1;
    PUSH32(esp, 0x0017396Bu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017396B: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x0017397Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017397D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017399E; /* je: equal / zero */

loc_00173981: ;
    ecx = ebp;
    PUSH32(esp, 0x00173988u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173988: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, 0x00173993u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00173993: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017399E; /* jne: not equal / not zero */

loc_0017399A: ;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 0x20;

loc_0017399E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF25C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x001739AEu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_001739AE: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0xA8) = 2;
    PUSH32(esp, 0x001739C5u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_001739C5: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x001739D7u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_001739D7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001739F8; /* je: equal / zero */

loc_001739DB: ;
    ecx = ebp;
    PUSH32(esp, 0x001739E2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001739E2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, 0x001739EDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001739ED: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001739F8; /* jne: not equal / not zero */

loc_001739F4: ;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 0x40;

loc_001739F8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF254);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00173A08u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00173A08: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0xA8) = 3;
    PUSH32(esp, 0x00173A1Fu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00173A1F: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x00173A31u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173A31: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173A6C; /* je: equal / zero */

loc_00173A35: ;
    ecx = ebp;
    PUSH32(esp, 0x00173A3Cu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173A3C: ;
    xml1_pc_native_command(esi, (const char *)((uintptr_t)g_xbox_mem_offset+eax));
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173A65; /* je: equal / zero */

loc_00173A42: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00173A65; /* je: equal / zero */

loc_00173A48: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00173A4Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00173A4E: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00173A59u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00173A59: ;
    ecx = eax;
    PUSH32(esp, 0x00173A60u); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_00173A60: ;
    MEM32(esi + 0x24) = eax;
    goto loc_00173A6C;

loc_00173A65: ;
    MEM32(esi + 0x24) = 0;

loc_00173A6C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF248);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00173A7Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00173A7C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0xA8) = 4;
    PUSH32(esp, 0x00173A93u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00173A93: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x00173AA5u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173AA5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173AE0; /* je: equal / zero */

loc_00173AA9: ;
    ecx = ebp;
    PUSH32(esp, 0x00173AB0u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173AB0: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173AD9; /* je: equal / zero */

loc_00173AB6: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00173AD9; /* je: equal / zero */

loc_00173ABC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00173AC2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00173AC2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00173ACDu); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00173ACD: ;
    ecx = eax;
    PUSH32(esp, 0x00173AD4u); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_00173AD4: ;
    MEM32(esi + 0x28) = eax;
    goto loc_00173AE0;

loc_00173AD9: ;
    MEM32(esi + 0x28) = 0;

loc_00173AE0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF240);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00173AF0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00173AF0: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0xA8) = 5;
    PUSH32(esp, 0x00173B07u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00173B07: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x00173B19u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173B19: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173B54; /* je: equal / zero */

loc_00173B1D: ;
    ecx = ebp;
    PUSH32(esp, 0x00173B24u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173B24: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173B4D; /* je: equal / zero */

loc_00173B2A: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00173B4D; /* je: equal / zero */

loc_00173B30: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00173B36u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00173B36: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00173B41u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00173B41: ;
    ecx = eax;
    PUSH32(esp, 0x00173B48u); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_00173B48: ;
    MEM32(esi + 0x2C) = eax;
    goto loc_00173B54;

loc_00173B4D: ;
    MEM32(esi + 0x2C) = 0;

loc_00173B54: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF238);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00173B64u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00173B64: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0xA8) = 6;
    PUSH32(esp, 0x00173B7Bu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00173B7B: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x00173B8Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173B8D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173BD2; /* je: equal / zero */

loc_00173B91: ;
    PUSH32(esp, 0x00173B96u); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_00173B96: ;
    ebx = MEM32(eax);
    ecx = ebp;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00173BA3u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173BA3: ;
    xml1_pc_native_item(esi, (const char *)((uintptr_t)g_xbox_mem_offset+eax));
    ecx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 8); PUSH32(esp, 0x00173BABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173BAB: ;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x00173BB3u); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_00173BB3: ;
    ebx = eax;
    eax = MEM32(ebx);
    ecx = ebp;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00173BC2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173BC2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00173BCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173BCC: ;
    MEM32(esi + 0x30) = eax;
    ebx = ebx | 0xFFFFFFFFu;

loc_00173BD2: ;
    SET_LO8(ecx, MEM8(esi + 0x39));
    SET_LO8(ecx, LO8(ecx) | 4);
    PUSH32(esp, 2);
    MEM8(esi + 0x39) = LO8(ecx);
    PUSH32(esp, 0x3CEE9C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00173BEBu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00173BEB: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0xA8) = 7;
    PUSH32(esp, 0x00173C02u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00173C02: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x00173C14u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173C14: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173C4B; /* je: equal / zero */

loc_00173C18: ;
    PUSH32(esp, 0x3CB744);
    ecx = ebp;
    PUSH32(esp, 0x00173C24u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173C24: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00173C2Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00173C2A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x39));
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    MEM8(esi + 0x39) = LO8(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_00173C4B; /* jne: not equal / not zero */

loc_00173C46: ;
    SET_LO8(eax, LO8(eax) | 0x10);
    MEM8(esi + 0x39) = LO8(eax);

loc_00173C4B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D1CC4);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00173C5Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00173C5B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0xA8) = 8;
    PUSH32(esp, 0x00173C72u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00173C72: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x00173C84u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173C84: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173CB0; /* je: equal / zero */

loc_00173C88: ;
    PUSH32(esp, 0x3CB744);
    ecx = ebp;
    PUSH32(esp, 0x00173C94u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173C94: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00173C9Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00173C9A: ;
    SET_LO8(edx, MEM8(esi + 0x39));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 7);
    SET_LO8(edx, LO8(edx) & 0x7F);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(esi + 0x39) = LO8(ecx);

loc_00173CB0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF22C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00173CC0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00173CC0: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0xA8) = 9;
    PUSH32(esp, 0x00173CD7u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00173CD7: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x00173CE9u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173CE9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173D81; /* je: equal / zero */

loc_00173CF1: ;
    eax = MEM32(0x498DB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173D81; /* je: equal / zero */

loc_00173CFE: ;
    ecx = ebp;
    PUSH32(esp, 0x00173D05u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173D05: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00173D12u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00173D12: ;
    edx = esp + 0x40;
    PUSH32(esp, 0x3D3194);
    PUSH32(esp, edx);
    MEM8(esp + 0xAB) = 0;
    PUSH32(esp, 0x00173D29u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_00173D29: ;
    ebp = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173D81; /* je: equal / zero */

loc_00173D32: ;
    PUSH32(esp, 0x3CD004);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00173D3Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00173D3D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00173D4D; /* jne: not equal / not zero */

loc_00173D44: ;
    _fa = (uint32_t)(MEM32(0x498DB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x498DB0), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00173D68; /* je: equal / zero */

loc_00173D4D: ;
    PUSH32(esp, 0x3CCFFC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00173D58u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00173D58: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00173D6C; /* jne: not equal / not zero */

loc_00173D5F: ;
    _fa = (uint32_t)(MEM32(0x498DB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x498DB0), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00173D6C; /* jne: not equal / not zero */

loc_00173D68: ;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) | 1;

loc_00173D6C: ;
    PUSH32(esp, 0x3D3194);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00173D78u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_00173D78: ;
    ebp = eax;
    esp = esp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00173D32; /* jne: not equal / not zero */

loc_00173D81: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    PUSH32(esp, 2);
    SET_LO8(eax, LO8(eax) & 0xFD);
    PUSH32(esp, 0x3DF224);
    ecx = esp + 0x18;
    MEM8(esi + 0x39) = LO8(eax);
    PUSH32(esp, 0x00173D99u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00173D99: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0xA8) = 0xA;
    PUSH32(esp, 0x00173DB0u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00173DB0: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x00173DC2u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173DC2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173DCA; /* je: equal / zero */

loc_00173DC6: ;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 2;

loc_00173DCA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF218);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00173DDAu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00173DDA: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0xA8) = 0xB;
    PUSH32(esp, 0x00173DF1u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00173DF1: ;
    ecx = esp + 0x10;
    ebp = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x00173E03u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173E03: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173E24; /* je: equal / zero */

loc_00173E07: ;
    ecx = ebp;
    PUSH32(esp, 0x00173E0Eu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173E0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, 0x00173E19u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00173E19: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00173E24; /* jne: not equal / not zero */

loc_00173E20: ;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 1;

loc_00173E24: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF20C);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00173E34u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00173E34: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0xA8) = 0xC;
    PUSH32(esp, 0x00173E4Bu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00173E4B: ;
    ecx = esp + 0x24;
    edi = eax;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, 0x00173E5Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00173E5D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173E97; /* je: equal / zero */

loc_00173E61: ;
    ecx = edi;
    PUSH32(esp, 0x00173E68u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00173E68: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173E90; /* je: equal / zero */

loc_00173E6E: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00173E90; /* je: equal / zero */

loc_00173E73: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00173E79u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00173E79: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00173E84u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00173E84: ;
    ecx = eax;
    PUSH32(esp, 0x00173E8Bu); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_00173E8B: ;
    MEM32(esi + 0x54) = eax;
    goto loc_00173E97;

loc_00173E90: ;
    MEM32(esi + 0x54) = 0;

loc_00173E97: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00173EB1; /* jns: not sign (positive) */

loc_00173E9E: ;
    PUSH32(esp, 0x00173EA3u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00173EA3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x00173EADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173EAD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173EB7; /* je: equal / zero */

loc_00173EB1: ;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3A), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173EBB; /* je: equal / zero */

loc_00173EB7: ;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 0x10;

loc_00173EBB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00173EC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173EC2: ;
    ecx = MEM32(esp + 0x9C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x8C);
    POP32(esp, ebx);
    PUSH32(esp, 0x00173EE0u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00173EE0: ;
    esp = esp + 0x98;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00173EF0
 * Original: 0x00173EF0 - 0x00173F05 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173EF0(void)
{

loc_00173EF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00173EFDu); RECOMP_ABI_CALL(0x00173890u, sub_00173890); /* call 0x00173890 */

loc_00173EFD: ;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 0x10;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00173F10
 * Original: 0x00173F10 - 0x00173F2C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173F10: ;
    eax = MEM32(ecx + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx + 0x70;
    if (TEST_Z(_fa, _fb)) goto loc_00173F2A; /* je: equal / zero */

loc_00173F1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00173F21u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00173F21: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00173F2A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00173F30
 * Original: 0x00173F30 - 0x00173F71 (65 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173F30: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173F6A; /* je: equal / zero */

loc_00173F3D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00173F46u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00173F46: ;
    ecx = MEM32(esi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00173F4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173F4E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00173F5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173F5C: ;
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00173F6Au); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_00173F6A: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00173F80
 * Original: 0x00173F80 - 0x00173FD5 (85 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173F80: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00173FCE; /* je: equal / zero */

loc_00173F8D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00173F96u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00173F96: ;
    ecx = MEM32(esi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00173F9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173F9E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00173FACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173FAC: ;
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00173FBAu); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_00173FBA: ;
    ecx = MEM32(esi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00173FC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173FC2: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00173FCEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173FCE: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00173FE0
 * Original: 0x00173FE0 - 0x00174029 (73 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173FE0: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174022; /* je: equal / zero */

loc_00173FED: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00173FF6u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00173FF6: ;
    ecx = MEM32(esi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00173FFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00173FFE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017400Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017400C: ;
    eax = MEM32(esp + 0x48);
    edx = eax + 8;
    PUSH32(esp, edx);
    ecx = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00174022u); RECOMP_ABI_CALL(0x00242850u, sub_00242850); /* call 0x00242850 */

loc_00174022: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00174030
 * Original: 0x00174030 - 0x0017408F (95 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174030: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174088; /* je: equal / zero */

loc_0017403D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00174046u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00174046: ;
    ecx = MEM32(esi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0017404Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017404E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017405Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017405C: ;
    eax = MEM32(esp + 0x48);
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00174074u); RECOMP_ABI_CALL(0x0023E770u, sub_0023E770); /* call 0x0023E770 */

loc_00174074: ;
    ecx = MEM32(esi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0017407Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017407C: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00174088u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174088: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00174090
 * Original: 0x00174090 - 0x00174142 (178 bytes, 66 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174090(void)
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

loc_00174090: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017413E; /* je: equal / zero */

loc_0017409E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001740A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001740A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017413E; /* je: equal / zero */

loc_001740AB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ebx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    PUSH32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00174106; /* jne: not equal / not zero */

loc_001740BE: ;
    PUSH32(esp, 0x001740C3u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001740C3: ;
    ecx = MEM32(edi + 0x6C);
    edx = MEM32(ecx);
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001740CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001740CD: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esp + 0x1C);
    ebx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001740F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001740F0: ;
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx + 0xA4); PUSH32(esp, 0x00174100u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174100: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_00174106: ;
    PUSH32(esp, 0x0017410Bu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017410B: ;
    ecx = MEM32(edi + 0x6C);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00174115u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174115: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    edi = eax;
    ebx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0017412Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017412C: ;
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx + 0x94); PUSH32(esp, 0x0017413Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017413C: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0017413E: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00174150
 * Original: 0x00174150 - 0x001741C2 (114 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174150(void)
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

loc_00174150: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001741BB; /* je: equal / zero */

loc_00174163: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00174168u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174168: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001741BB; /* je: equal / zero */

loc_0017416C: ;
    ecx = MEM32(esi + 0x6C);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00174175u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174175: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0017417Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017417C: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001741B3; /* je: equal / zero */

loc_00174182: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001741B3; /* je: equal / zero */

loc_00174187: ;
    ecx = MEM32(esi + 0x6C);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00174191u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174191: ;
    ecx = MEM32(esi + 0x6C);
    edx = MEM32(ecx);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017419Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017419B: ;
    esi = eax;
    eax = MEM32(edi);
    ebp = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x001741A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001741A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x50); PUSH32(esp, 0x001741ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001741AD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001741B3: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001741BB: ;
    fp_push(MEMF(esp + 4)); /* fld float */
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
 * sub_001741D0
 * Original: 0x001741D0 - 0x0017421F (79 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001741D0(void)
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

loc_001741D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00174218; /* je: equal / zero */

loc_001741E3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001741E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001741E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174218; /* je: equal / zero */

loc_001741EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001741F3u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001741F3: ;
    ecx = MEM32(edi + 0x6C);
    edx = MEM32(ecx);
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001741FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001741FD: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0017420Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017420A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx + 0x48); PUSH32(esp, 0x00174213u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174213: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00174218: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00174220
 * Original: 0x00174220 - 0x00174274 (84 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174220: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017426D; /* je: equal / zero */

loc_0017422E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00174233u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174233: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0017423Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017423C: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42200000);
    edx = esp + 8;
    MEM32(esp + 8) = 0x3F800000;
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0017426Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017426D: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00174280
 * Original: 0x00174280 - 0x001742E9 (105 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174280: ;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001742E2; /* je: equal / zero */

loc_0017428D: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00174296u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00174296: ;
    ecx = MEM32(esi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0017429Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017429E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001742ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001742AC: ;
    edx = MEM32(esp + 0x54);
    ecx = edx;
    eax = edx;
    MEM32(esp + 4) = edx;
    edx = esp + 4;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x001742CEu); RECOMP_ABI_CALL(0x0023E590u, sub_0023E590); /* call 0x0023E590 */

loc_001742CE: ;
    ecx = MEM32(esi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001742D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001742D6: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001742E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001742E2: ;
    POP32(esp, esi);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001742F0
 * Original: 0x001742F0 - 0x00174345 (85 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001742F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001742F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00174340; /* je: equal / zero */

loc_001742FC: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174340; /* je: equal / zero */

loc_00174301: ;
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174340; /* je: equal / zero */

loc_00174308: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0017430Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017430D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174340; /* je: equal / zero */

loc_00174311: ;
    ecx = MEM32(esi + 0x6C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00174319u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174319: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00174326u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174326: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174340; /* je: equal / zero */

loc_0017432A: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00174340u); RECOMP_ABI_CALL(0x00174090u, sub_00174090); /* call 0x00174090 */

loc_00174340: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00174350
 * Original: 0x00174350 - 0x001743F4 (164 bytes, 65 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174350: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = edi + 0x70;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0017436Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017436E: ;
    eax = MEM32(edi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0x6C;
    MEM32(ebx) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0017438D; /* je: equal / zero */

loc_0017437E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00174384u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00174384: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0017438D: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001743EB; /* je: equal / zero */

loc_00174395: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001743EA; /* je: equal / zero */

loc_0017439E: ;
    PUSH32(esp, 0x001743A3u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001743A3: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x184); PUSH32(esp, 0x001743BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001743BD: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001743EA; /* je: equal / zero */

loc_001743C5: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001743D9; /* je: equal / zero */

loc_001743CA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001743D0u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_001743D0: ;
    esp = esp + 4;
    MEM32(ebx) = 0;

loc_001743D9: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001743E1u); RECOMP_ABI_CALL(0x00174220u, sub_00174220); /* call 0x00174220 */

loc_001743E1: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001743EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001743EA: ;
    POP32(esp, ebp);

loc_001743EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00174400
 * Original: 0x00174400 - 0x00174521 (289 bytes, 109 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174400: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017451A; /* je: equal / zero */

loc_00174413: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174449; /* je: equal / zero */

loc_0017441B: ;
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = esi + 0x70;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0x74) = ebp;
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00174432u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174432: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(ebx) = ebp;
    ebx = esi + 0x6C;
    if (CMP_EQ(_fa, _fb)) goto loc_00174449; /* je: equal / zero */

loc_0017443E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00174444u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00174444: ;
    esp = esp + 4;
    MEM32(ebx) = ebp;

loc_00174449: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174511; /* je: equal / zero */

loc_00174451: ;
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017445F; /* jne: not equal / not zero */

loc_0017445A: ;
    ebp = 0xC;

loc_0017445F: ;
    PUSH32(esp, 0x00174464u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00174464: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0017446Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017446B: ;
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x00174474u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00174474: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0017447Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017447D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00174487u); RECOMP_ABI_CALL(0x000B0F20u, sub_000B0F20); /* call 0x000B0F20 */

loc_00174487: ;
    PUSH32(esp, 0x0017448Cu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0017448C: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00174498u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174498: ;
    PUSH32(esp, 0x0017449Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017449D: ;
    PUSH32(esp, ebp);
    edx = edi + 0x2AC;
    PUSH32(esp, edx);
    ebx = eax;
    eax = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x001744B8u); RECOMP_ABI_CALL(0x000B0EA0u, xml1_guest_character_format_skin); /* call 0x000B0EA0 */

loc_001744B8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x184); PUSH32(esp, 0x001744CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001744CA: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = esi + 0x6C;
    MEM32(ebx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00174511; /* je: equal / zero */

loc_001744D5: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebp = esi + 0x70;
    if (TEST_Z(_fa, _fb)) goto loc_001744EF; /* je: equal / zero */

loc_001744DF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001744E5u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_001744E5: ;
    esp = esp + 4;
    MEM32(ebp) = 0;

loc_001744EF: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001744F7u); RECOMP_ABI_CALL(0x00174220u, sub_00174220); /* call 0x00174220 */

loc_001744F7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00174500u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174500: ;
    MEM32(esi + 0x74) = edi;
    eax = MEM32(edi + 0x3A8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00174511u); RECOMP_ABI_CALL(0x00174280u, sub_00174280); /* call 0x00174280 */

loc_00174511: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0017451A: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00174530
 * Original: 0x00174530 - 0x0017483D (781 bytes, 271 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174530(void)
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

loc_00174530: ;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x78), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017454A; /* jne: not equal / not zero */

loc_00174540: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 8; return; /* ret 4 */

loc_0017454A: ;
    eax = MEM32(edi + 0x6C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017466F; /* je: equal / zero */

loc_00174559: ;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = edi + 0x70;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0017456Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017456D: ;
    MEM32(ebx) = ebp;
    PUSH32(esp, 0x00174574u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00174574: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017457Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017457B: ;
    ecx = MEM32(eax);
    edx = MEM32(edi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00174586u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174586: ;
    ecx = MEM32(edi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017460A; /* je: equal / zero */

loc_0017458D: ;
    MEM32(esp + 0x5C) = 0xFFFFFFFFu;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0017459Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017459D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017460A; /* je: equal / zero */

loc_001745A1: ;
    edx = MEM32(edi + 0xBC);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001745B5u); RECOMP_ABI_CALL(0x0003D600u, sub_0003D600); /* call 0x0003D600 */

loc_001745B5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017460A; /* je: equal / zero */

loc_001745B9: ;
    PUSH32(esp, 0x001745BEu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_001745BE: ;
    ecx = MEM32(edi + 0x78);
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x001745CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001745CB: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001745D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001745D2: ;
    ecx = MEM32(edi + 0xC4);
    edx = MEM32(edi + 0xC0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, edx);
    edx = MEM32(ebx);
    ebp = eax;
    eax = MEM32(ebp);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x001745F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001745F8: ;
    eax = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00174608u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174608: ;
    ebp = 0; /* xor self */

loc_0017460A: ;
    ecx = MEM32(edi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00174612u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174612: ;
    edx = MEM32(eax);
    ecx = edi + 0x7C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017461Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017461D: ;
    ecx = MEM32(edi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174635; /* je: equal / zero */

loc_00174624: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0017462Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017462B: ;
    ecx = MEM32(edi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00174635u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174635: ;
    SET_LO8(eax, MEM8(edi + 0xC8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017464B; /* jne: not equal / not zero */

loc_0017463F: ;
    ecx = MEM32(edi + 0x78);
    PUSH32(esp, 0x00174647u); RECOMP_ABI_CALL(0x0002E280u, sub_0002E280); /* call 0x0002E280 */

loc_00174647: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017464F; /* je: equal / zero */

loc_0017464B: ;
    eax = 0; /* xor self */
    SET_LO8(eax, 1);

loc_0017464F: ;
    ecx = MEM32(edi + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00174658u); RECOMP_ABI_CALL(0x0002E220u, sub_0002E220); /* call 0x0002E220 */

loc_00174658: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0xC9));
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x78);
    PUSH32(esp, 0x00174669u); RECOMP_ABI_CALL(0x0002F1C0u, sub_0002F1C0); /* call 0x0002F1C0 */

loc_00174669: ;
    MEM32(edi + 0x6C) = ebp;
    MEM32(edi + 0x78) = ebp;

loc_0017466F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174831; /* je: equal / zero */

loc_00174677: ;
    MEM32(edi + 0x78) = esi;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00174684u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174684: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0017468Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017468B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001746B1; /* je: equal / zero */

loc_0017468F: ;
    PUSH32(esp, 0x00174694u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00174694: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017469Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017469B: ;
    ebx = MEM32(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x001746A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001746A7: ;
    eax = MEM32(eax);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001746B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001746B1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x001746BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001746BB: ;
    eax = MEM32(eax);
    MEM32(edi + 0x6C) = eax;
    SET_LO8(edx, MEM8(esi + 0x336));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x39C);
    SET_LO8(edx, LO8(edx) & 0xF7);
    MEM8(esi + 0x336) = LO8(edx);
    MEM32(edi + 0xBC) = ecx;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x001746E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001746E6: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001746EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001746ED: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi + 0x7C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001746F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001746F9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00174703u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174703: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0017470Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017470A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00174715u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174715: ;
    MEMF(edi + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00174720u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00174720: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0017472Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017472C: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00174733u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174733: ;
    edx = MEM32(ebp);
    ebx = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    MEM32(esp + 0x60) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00174748u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174748: ;
    eax = MEM32(esp + 0x60);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00174755u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174755: ;
    MEMF(edi + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x336));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    ecx = esi;
    MEM8(edi + 0xC8) = LO8(eax);
    PUSH32(esp, 0x00174773u); RECOMP_ABI_CALL(0x0002F200u, sub_0002F200); /* call 0x0002F200 */

loc_00174773: ;
    ecx = MEM32(edi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(edi + 0xC9) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0017478A; /* je: equal / zero */

loc_00174780: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0017478Au); RECOMP_ABI_CALL(0x00076B40u, xml1_guest_entity_set_alpha); /* call 0x00076B40 */

loc_0017478A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00174794u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174794: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0017479Cu); RECOMP_ABI_CALL(0x00174220u, sub_00174220); /* call 0x00174220 */

loc_0017479C: ;
    eax = MEM32(edi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = edi + 0x70;
    if (TEST_Z(_fa, _fb)) goto loc_001747B5; /* je: equal / zero */

loc_001747A6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001747ACu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_001747AC: ;
    esp = esp + 4;
    MEM32(ebx) = 0;

loc_001747B5: ;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x001747C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001747C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x24); PUSH32(esp, 0x001747C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001747C8: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174819; /* je: equal / zero */

loc_001747CD: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x001747D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001747D7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174819; /* je: equal / zero */

loc_001747DC: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x001747E5u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_001747E5: ;
    ebx = MEM32(ebx);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001747EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001747EE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001747FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001747FC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00174806u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174806: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0017480Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017480D: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00174819u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174819: ;
    esi = MEM32(esi + 0x2D8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174831; /* je: equal / zero */

loc_00174823: ;
    edx = MEM32(esi + 0x3A8);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00174831u); RECOMP_ABI_CALL(0x00174280u, sub_00174280); /* call 0x00174280 */

loc_00174831: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00174840
 * Original: 0x00174840 - 0x0017485C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00174840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174840: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174859; /* je: equal / zero */

loc_00174847: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x571758);
    PUSH32(esp, 1);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00174850u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174850: ;
    esp = esp + 8;
    eax = 3;
    esp += 4; return; /* ret */

loc_00174859: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}



/**
 * sub_00174920
 * Original: 0x00174920 - 0x00174A55 (309 bytes, 94 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174920: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3544A0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edi = ecx;
    PUSH32(esp, 0x00174947u); RECOMP_ABI_CALL(0x0017D080u, sub_0017D080); /* call 0x0017D080 */

loc_00174947: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF298);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00174957u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00174957: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0x0017496Bu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017496B: ;
    ecx = esp + 0xC;
    esi = eax;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017497Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017497E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001749B8; /* je: equal / zero */

loc_00174982: ;
    ecx = esi;
    PUSH32(esp, 0x00174989u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00174989: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001749B1; /* je: equal / zero */

loc_0017498F: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001749B1; /* je: equal / zero */

loc_00174994: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017499Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0017499A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001749A5u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_001749A5: ;
    ecx = eax;
    PUSH32(esp, 0x001749ACu); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_001749AC: ;
    MEM32(edi + 0x7C) = eax;
    goto loc_001749B8;

loc_001749B1: ;
    MEM32(edi + 0x7C) = 0;

loc_001749B8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF28C);
    ecx = esp + 0x24;
    PUSH32(esp, 0x001749C8u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_001749C8: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x38) = 1;
    PUSH32(esp, 0x001749DCu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_001749DC: ;
    ecx = esp + 0x1C;
    esi = eax;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001749EFu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_001749EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174A41; /* je: equal / zero */

loc_001749F3: ;
    ecx = esi;
    PUSH32(esp, 0x001749FAu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001749FA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174A37; /* je: equal / zero */

loc_00174A00: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174A37; /* je: equal / zero */

loc_00174A05: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00174A0Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00174A0B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00174A16u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00174A16: ;
    ecx = eax;
    PUSH32(esp, 0x00174A1Du); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_00174A1D: ;
    MEM32(edi + 0x80) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

loc_00174A37: ;
    MEM32(edi + 0x80) = 0;

loc_00174A41: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00174A60
 * Original: 0x00174A60 - 0x00174BA8 (328 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174A60(void)
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

loc_00174A60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3544C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x00174A87u); RECOMP_ABI_CALL(0x001785B0u, sub_001785B0); /* call 0x001785B0 */

loc_00174A87: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF3BC);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00174A97u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00174A97: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0x00174AABu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00174AAB: ;
    ecx = esp + 0xC;
    ebx = eax;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00174ABEu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00174ABE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174ADE; /* je: equal / zero */

loc_00174AC2: ;
    ecx = ebx;
    PUSH32(esp, 0x00174AC9u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00174AC9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00174ACFu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00174ACF: ;
    ecx = MEM32(edi + 0x88);
    esp = esp + 4;
    MEM8(ecx + 0xFB5) = LO8(eax);

loc_00174ADE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF3B4);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00174AEEu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00174AEE: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x38) = 1;
    PUSH32(esp, 0x00174B02u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00174B02: ;
    ecx = esp + 0xC;
    ebx = eax;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00174B15u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00174B15: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174B35; /* je: equal / zero */

loc_00174B19: ;
    ecx = ebx;
    PUSH32(esp, 0x00174B20u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00174B20: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00174B26u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00174B26: ;
    ecx = MEM32(edi + 0x88);
    esp = esp + 4;
    MEM8(ecx + 0xFB6) = LO8(eax);

loc_00174B35: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CD3B8);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00174B45u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00174B45: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x38) = 2;
    PUSH32(esp, 0x00174B59u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00174B59: ;
    ecx = esp + 0x1C;
    esi = eax;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00174B6Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00174B6C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174B8C; /* je: equal / zero */

loc_00174B70: ;
    ecx = esi;
    PUSH32(esp, 0x00174B77u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00174B77: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00174B7Du); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_00174B7D: ;
    eax = MEM32(edi + 0x88);
    MEMF(eax + 0xFB0) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_00174B8C: ;
    SET_LO8(eax, MEM8(edi + 0x39));
    ecx = MEM32(esp + 0x2C);
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM8(edi + 0x39) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00174BB0
 * Original: 0x00174BB0 - 0x00174C0F (95 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174BB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_00174C0A; /* jl: less (signed <) */

loc_00174BBC: ;
    PUSH32(esp, 0x00174BC1u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174BC1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00174C0A; /* jge: greater or equal (signed >=) */

loc_00174BC5: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(edi + 0x88);
    edx = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00174BF5; /* je: equal / zero */

loc_00174BDD: ;
    eax = eax + 0x10;
    eax = eax + ecx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_00174BF5: ;
    eax = eax + 0x10;
    eax = eax + ecx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_00174C0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00174C10
 * Original: 0x00174C10 - 0x00174C6F (95 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174C10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_00174C6A; /* jl: less (signed <) */

loc_00174C1C: ;
    PUSH32(esp, 0x00174C21u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174C21: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00174C6A; /* jge: greater or equal (signed >=) */

loc_00174C25: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(edi + 0x88);
    edx = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00174C55; /* je: equal / zero */

loc_00174C3D: ;
    eax = eax + 0x1C;
    eax = eax + ecx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_00174C55: ;
    eax = eax + 0x1C;
    eax = eax + ecx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_00174C6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00174C70
 * Original: 0x00174C70 - 0x00174CCF (95 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174C70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_00174CCA; /* jl: less (signed <) */

loc_00174C7C: ;
    PUSH32(esp, 0x00174C81u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174C81: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00174CCA; /* jge: greater or equal (signed >=) */

loc_00174C85: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(edi + 0x88);
    edx = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00174CB5; /* je: equal / zero */

loc_00174C9D: ;
    eax = eax + 0x34;
    eax = eax + ecx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_00174CB5: ;
    eax = eax + 0x34;
    eax = eax + ecx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_00174CCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00174CD0
 * Original: 0x00174CD0 - 0x00174D14 (68 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00174CD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_00174D0D; /* jl: less (signed <) */

loc_00174CDC: ;
    PUSH32(esp, 0x00174CE1u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174CE1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00174D0D; /* jge: greater or equal (signed >=) */

loc_00174CE5: ;
    edx = MEM32(edi + 0x88);
    ecx = esi;
    eax = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((5) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edx + eax * 4 + 0x34);
    esi = 1;
    if (LO8(ecx)) _cf = (int)(((esi) >> (32 - (LO8(ecx)))) & 1);
    esi = esi << LO8(ecx);
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00174D0D: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00174D20
 * Original: 0x00174D20 - 0x00174DC1 (161 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174D20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174D20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00174D54; /* jl: less (signed <) */

loc_00174D30: ;
    eax = MEM32(edi + 0x88);
    edx = ZX8(MEM8(eax + 0xFBB));
    eax = ZX8(MEM8(eax + 0xFBA));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00174D54; /* jge: greater or equal (signed >=) */

loc_00174D4D: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00174D54: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    ebp = 0; /* xor self */
    /* nop */

loc_00174D60: ;
    eax = MEM32(edi + 0x88);
    ecx = ZX8(MEM8(eax + 0xFBB));
    edx = ZX8(MEM8(eax + 0xFBA));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00174DB8; /* jge: greater or equal (signed >=) */

loc_00174D7C: ;
    /* nop */

loc_00174D80: ;
    ecx = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00174D88u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174D88: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00174D8E; /* jl: less (signed <) */

loc_00174D8C: ;
    esi = 0; /* xor self */

loc_00174D8E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00174D96; /* jne: not equal / not zero */

loc_00174D94: ;
    SET_LO8(ebx, 1);

loc_00174D96: ;
    edx = MEM32(edi + 0x88);
    ecx = esi;
    ecx = ecx & 0x1F;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + ecx * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + ecx * 4 + 0x28), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00174D80; /* jne: not equal / not zero */

loc_00174DB3: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174D60; /* je: equal / zero */

loc_00174DB8: ;
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00174DD0
 * Original: 0x00174DD0 - 0x00174EEE (286 bytes, 110 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174DD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174DD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00174DD9u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174DD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00174DE4; /* jne: not equal / not zero */

loc_00174DDD: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_00174DE4: ;
    eax = MEM32(edi + 0x88);
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(eax + 0xFB7));
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM16(edi + 0x7C);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ebp;
    esi = ebp;
    goto loc_00174E04;

loc_00174E00: ;
    ebp = MEM32(esp + 0x10);

loc_00174E04: ;
    eax = MEM32(esp + 0x18);
    ecx = edi;
    esi = esi + eax;
    PUSH32(esp, 0x00174E11u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174E11: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00174E1A; /* jle: less or equal (signed <=) */

loc_00174E16: ;
    esi = 0; /* xor self */
    goto loc_00174E28;

loc_00174E1A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00174E28; /* jge: greater or equal (signed >=) */

loc_00174E1E: ;
    ecx = edi;
    PUSH32(esp, 0x00174E25u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174E25: ;
    esi = eax;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00174E28: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174EE4; /* je: equal / zero */

loc_00174E30: ;
    ebp = MEM32(edi + 0x88);
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    eax = esi;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + eax * 4 + 0x28), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00174E00; /* jne: not equal / not zero */

loc_00174E4D: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174E5B; /* je: equal / zero */

loc_00174E55: ;
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + eax * 4 + 4), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00174E00; /* jne: not equal / not zero */

loc_00174E5B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00174E64u); RECOMP_ABI_CALL(0x00174D20u, sub_00174D20); /* call 0x00174D20 */

loc_00174E64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00174ECA; /* jne: not equal / not zero */

loc_00174E68: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00174E9E; /* jle: less or equal (signed <=) */

loc_00174E70: ;
    ecx = edi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00174E78u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174E78: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00174E7F; /* jle: less or equal (signed <=) */

loc_00174E7D: ;
    ebx = 0; /* xor self */

loc_00174E7F: ;
    ecx = ebx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(edi + 0x88);
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4 + 0x28), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00174E70; /* jne: not equal / not zero */

loc_00174E9C: ;
    goto loc_00174ECA;

loc_00174E9E: ;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00174ECA; /* jge: greater or equal (signed >=) */

loc_00174EA0: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00174EAD; /* jns: not sign (positive) */

loc_00174EA3: ;
    ecx = edi;
    PUSH32(esp, 0x00174EAAu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174EAA: ;
    ebx = eax;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00174EAD: ;
    ecx = ebx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(edi + 0x88);
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4 + 0x28), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00174EA0; /* jne: not equal / not zero */

loc_00174ECA: ;
    edx = MEM32(edi + 0x88);
    MEM16(edi + 0x7C) = LO16(esi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx + 0xFB7) = LO8(ebx);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_00174EE4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00174EF0
 * Original: 0x00174EF0 - 0x00174F1B (43 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174EF0(void)
{

loc_00174EF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00174EFDu); RECOMP_ABI_CALL(0x001779A0u, sub_001779A0); /* call 0x001779A0 */

loc_00174EFD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00174F0Au); RECOMP_ABI_CALL(0x00174DD0u, sub_00174DD0); /* call 0x00174DD0 */

loc_00174F0A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x00174F17u); RECOMP_ABI_CALL(0x00174DD0u, sub_00174DD0); /* call 0x00174DD0 */

loc_00174F17: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00174F20
 * Original: 0x00174F20 - 0x00174F5F (63 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174F20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00174F36u); RECOMP_ABI_CALL(0x00174DD0u, sub_00174DD0); /* call 0x00174DD0 */

loc_00174F36: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174F50; /* je: equal / zero */

loc_00174F3A: ;
    PUSH32(esp, 0x00174F3Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00174F3F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00174F48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174F48: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00174F50: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00174F59u); RECOMP_ABI_CALL(0x00200190u, sub_00200190); /* call 0x00200190 */

loc_00174F59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00174F60
 * Original: 0x00174F60 - 0x00174FEB (139 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174F60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00174F6Eu); RECOMP_ABI_CALL(0x00173340u, sub_00173340); /* call 0x00173340 */

loc_00174F6E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174FE6; /* je: equal / zero */

loc_00174F72: ;
    SET_LO16(eax, MEM16(esi + 0x7C));
    ebx = SX16(LO16(eax));
    PUSH32(esp, edi);
    /* nop */

loc_00174F80: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00174FC0; /* jl: less (signed <) */

loc_00174F85: ;
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    ecx = esi;
    PUSH32(esp, 0x00174F90u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174F90: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00174FC0; /* jg: greater (signed >) */

loc_00174F95: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00174F9Du); RECOMP_ABI_CALL(0x001782C0u, sub_001782C0); /* call 0x001782C0 */

loc_00174F9D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174FC0; /* je: equal / zero */

loc_00174FA1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    edx = MEM32(esi + 0x88);
    eax = ecx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 4), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174FE5; /* je: equal / zero */

loc_00174FC0: ;
    MEM16(esi + 0x7C) = MEM16(esi + 0x7C) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x7C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    PUSH32(esp, 0x00174FCBu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00174FCB: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00174FDA; /* jle: less or equal (signed <=) */

loc_00174FD4: ;
    MEM16(esi + 0x7C) = 0;

loc_00174FDA: ;
    SET_LO16(eax, MEM16(esi + 0x7C));
    edx = SX16(LO16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00174F80; /* jne: not equal / not zero */

loc_00174FE5: ;
    POP32(esp, edi);

loc_00174FE6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00174FF0
 * Original: 0x00174FF0 - 0x00175030 (64 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174FF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_00175029; /* jl: less (signed <) */

loc_00174FFC: ;
    PUSH32(esp, 0x00175001u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00175001: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00175029; /* jge: greater or equal (signed >=) */

loc_00175005: ;
    edx = MEM32(edi + 0x88);
    ecx = esi;
    eax = esi;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 4), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175029; /* je: equal / zero */

loc_00175022: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00175029: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00175030
 * Original: 0x00175030 - 0x001750EB (187 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175030: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0017503Fu); RECOMP_ABI_CALL(0x00178220u, sub_00178220); /* call 0x00178220 */

loc_0017503F: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001750E5; /* jle: less or equal (signed <=) */

loc_0017504A: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001750C1; /* je: equal / zero */

loc_00175052: ;
    eax = MEM32(esi + 0x88);
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + 0x28;
    eax = eax + edx * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    _fa = (uint32_t)(MEM16(esi + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x7C), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001750E5; /* jle: less or equal (signed <=) */

loc_00175076: ;
    PUSH32(esp, edi);

loc_00175077: ;
    SET_LO16(edx, MEM16(esi + 0x7C));
    eax = SX16(LO16(edx));
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(esi + 0x88);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4 + 0x28), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001750BA; /* je: equal / zero */

loc_00175099: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM16(esi + 0x7C) = LO16(edx);
    PUSH32(esp, 0x001750A5u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_001750A5: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001750B3; /* jl: less (signed <) */

loc_001750AD: ;
    MEM16(esi + 0x7C) = 0;

loc_001750B3: ;
    _fa = (uint32_t)(MEM16(esi + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x7C), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00175077; /* jg: greater (signed >) */

loc_001750BA: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001750C1: ;
    esi = MEM32(esi + 0x88);
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    esi = esi + 0x28;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4);
    eax = esi + eax * 4;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_001750E5: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001750F0
 * Original: 0x001750F0 - 0x0017518D (157 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001750F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001750F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001750F8u); RECOMP_ABI_CALL(0x00177AB0u, sub_00177AB0); /* call 0x00177AB0 */

loc_001750F8: ;
    _fa = (uint32_t)(MEM16(esi + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x7C), 0 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175155; /* jl: less (signed <) */

loc_001750FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_00175101: ;
    SET_LO16(ebx, MEM16(esi + 0x7C));
    ecx = esi;
    edi = SX16(LO16(ebx));
    PUSH32(esp, 0x0017510Fu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017510F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00175153; /* jge: greater or equal (signed >=) */

loc_00175114: ;
    edx = MEM32(esi + 0x88);
    ecx = edi;
    eax = edi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x28), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175153; /* je: equal / zero */

loc_00175131: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM16(esi + 0x7C) = LO16(ebx);
    PUSH32(esp, 0x0017513Du); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017513D: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0017514C; /* jle: less or equal (signed <=) */

loc_00175146: ;
    MEM16(esi + 0x7C) = 0;

loc_0017514C: ;
    _fa = (uint32_t)(MEM16(esi + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x7C), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00175101; /* jge: greater or equal (signed >=) */

loc_00175153: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00175155: ;
    SET_LO16(eax, MEM16(esi + 0x7C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0017518B; /* jle: less or equal (signed <=) */

loc_0017515F: ;
    edx = MEM32(esi + 0x88);
    ecx = ZX8(MEM8(edx + 0xFB7));
    edx = SX16(LO16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00175178u); RECOMP_ABI_CALL(0x00174D20u, sub_00174D20); /* call 0x00174D20 */

loc_00175178: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017518B; /* jne: not equal / not zero */

loc_0017517C: ;
    eax = MEM32(esi + 0x88);
    SET_LO8(ecx, MEM8(esi + 0x7C));
    MEM8(eax + 0xFB7) = LO8(ecx);

loc_0017518B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00175190
 * Original: 0x00175190 - 0x001751CB (59 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175190: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001751B3; /* je: equal / zero */

loc_00175198: ;
    ecx = MEM32(ecx + 0x88);
    ecx = ecx + 0x28;
    eax = 0xFFFFFFFFu;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_001751B3: ;
    eax = MEM32(ecx + 0x88);
    eax = eax + 0x28;
    edx = 0; /* xor self */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001751D0
 * Original: 0x001751D0 - 0x001752A8 (216 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001751D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001751D0: ;
    eax = MEM32(ecx + 0x300);
    PUSH32(esp, esi);
    esi = ecx + 0x300;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001751FE; /* jne: not equal / not zero */

loc_001751E3: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x60 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017529C; /* jge: greater or equal (signed >=) */

loc_001751F2: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001751E3; /* je: equal / zero */

loc_001751FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017520B; /* jne: not equal / not zero */

loc_00175205: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0017520B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175215; /* jne: not equal / not zero */

loc_0017520F: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00175215: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017521F; /* jne: not equal / not zero */

loc_00175219: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0017521F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017522A; /* jne: not equal / not zero */

loc_00175223: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175223; /* je: equal / zero */

loc_0017522A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x60 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017529C; /* jge: greater or equal (signed >=) */

loc_0017522F: ;
    /* nop */

loc_00175230: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x60 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017529C; /* jge: greater or equal (signed >=) */

loc_00175236: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175267; /* jne: not equal / not zero */

loc_00175249: ;
    /* nop */

loc_00175250: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x60 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017529C; /* jge: greater or equal (signed >=) */

loc_0017525B: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175250; /* je: equal / zero */

loc_00175267: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175274; /* jne: not equal / not zero */

loc_0017526E: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00175274: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017527E; /* jne: not equal / not zero */

loc_00175278: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0017527E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175288; /* jne: not equal / not zero */

loc_00175282: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00175288: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175297; /* jne: not equal / not zero */

loc_0017528C: ;
    /* nop */

loc_00175290: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175290; /* je: equal / zero */

loc_00175297: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x60 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175230; /* jl: less (signed <) */

loc_0017529C: ;
    edx = 0; /* xor self */
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001752B0
 * Original: 0x001752B0 - 0x001753AE (254 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001752B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001752B0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1F78);
    PUSH32(esp, edi);
    edi = ebx + 0x1F78;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001752E1; /* jne: not equal / not zero */

loc_001752C6: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001753A5; /* jge: greater or equal (signed >=) */

loc_001752D5: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001752C6; /* je: equal / zero */

loc_001752E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001752EE; /* jne: not equal / not zero */

loc_001752E8: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_001752EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001752F8; /* jne: not equal / not zero */

loc_001752F2: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_001752F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175302; /* jne: not equal / not zero */

loc_001752FC: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_00175302: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017530D; /* jne: not equal / not zero */

loc_00175306: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175306; /* je: equal / zero */

loc_0017530D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001753A5; /* jge: greater or equal (signed >=) */

loc_00175316: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_00175320: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFBC);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00175331u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175331: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001753A4; /* jge: greater or equal (signed >=) */

loc_00175339: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175367; /* jne: not equal / not zero */

loc_0017534C: ;
    /* nop */

loc_00175350: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001753A4; /* jge: greater or equal (signed >=) */

loc_0017535B: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175350; /* je: equal / zero */

loc_00175367: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175375; /* jne: not equal / not zero */

loc_0017536F: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00175375: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017537F; /* jne: not equal / not zero */

loc_00175379: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0017537F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017538A; /* jne: not equal / not zero */

loc_00175384: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0017538A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175398; /* jne: not equal / not zero */

loc_0017538F: ;
    /* nop */

loc_00175390: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175390; /* je: equal / zero */

loc_00175398: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001753A4; /* jge: greater or equal (signed >=) */

loc_0017539D: ;
    esi = eax;
    goto loc_00175320;

loc_001753A4: ;
    POP32(esp, esi);

loc_001753A5: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001753B0
 * Original: 0x001753B0 - 0x00175DE8 (2616 bytes, 729 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001753B0(void)
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

loc_001753B0: ;
    esp = esp - 0xD4;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0xE0) = eax;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0x001753D1u); RECOMP_ABI_CALL(0x00173020u, sub_00173020); /* call 0x00173020 */

loc_001753D1: ;
    ecx = edi;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    ebp = 0; /* xor self */
    PUSH32(esp, 0x001753F2u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_001753F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017550F; /* jle: less or equal (signed <=) */

loc_001753FA: ;
    ebx = 0x370;
    /* nop */

loc_00175400: ;
    eax = MEM32(edi + 0x88);
    esi = ebx + eax + -784;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175430; /* je: equal / zero */

loc_00175413: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175430; /* je: equal / zero */

loc_00175418: ;
    PUSH32(esp, 0x0017541Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017541D: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017542Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017542C: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;

loc_00175430: ;
    esi = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(esi + ebx + 4));
    esi = esi + ebx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017545D; /* je: equal / zero */

loc_00175440: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017545D; /* je: equal / zero */

loc_00175445: ;
    PUSH32(esp, 0x0017544Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017544A: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00175459u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175459: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;

loc_0017545D: ;
    edx = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(ebx + edx + 0x314));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = ebx + edx + 0x310;
    if (TEST_Z(_fa, _fb)) goto loc_00175492; /* je: equal / zero */

loc_00175475: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175492; /* je: equal / zero */

loc_0017547A: ;
    PUSH32(esp, 0x0017547Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017547F: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017548Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017548E: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;

loc_00175492: ;
    edx = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(ebx + edx + 0x624));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = ebx + edx + 0x620;
    if (TEST_Z(_fa, _fb)) goto loc_001754C7; /* je: equal / zero */

loc_001754AA: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001754C7; /* je: equal / zero */

loc_001754AF: ;
    PUSH32(esp, 0x001754B4u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001754B4: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001754C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001754C3: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;

loc_001754C7: ;
    edx = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(ebx + edx + 0x934));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = ebx + edx + 0x930;
    if (TEST_Z(_fa, _fb)) goto loc_001754FC; /* je: equal / zero */

loc_001754DF: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001754FC; /* je: equal / zero */

loc_001754E4: ;
    PUSH32(esp, 0x001754E9u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001754E9: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001754F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001754F8: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;

loc_001754FC: ;
    ecx = edi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 8;
    PUSH32(esp, 0x00175507u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00175507: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175400; /* jl: less (signed <) */

loc_0017550F: ;
    esi = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(esi + 0x44));
    esi = esi + 0x40;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017553C; /* je: equal / zero */

loc_0017551F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017553C; /* je: equal / zero */

loc_00175524: ;
    PUSH32(esp, 0x00175529u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175529: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00175538u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175538: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;

loc_0017553C: ;
    esi = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(esi + 0x4C));
    esi = esi + 0x48;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175569; /* je: equal / zero */

loc_0017554C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175569; /* je: equal / zero */

loc_00175551: ;
    PUSH32(esp, 0x00175556u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175556: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00175565u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175565: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;

loc_00175569: ;
    esi = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(esi + 0x54));
    esi = esi + 0x50;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175596; /* je: equal / zero */

loc_00175579: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175596; /* je: equal / zero */

loc_0017557E: ;
    PUSH32(esp, 0x00175583u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175583: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00175592u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175592: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;

loc_00175596: ;
    esi = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(esi + 0x5C));
    esi = esi + 0x58;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001755C3; /* je: equal / zero */

loc_001755A6: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001755C3; /* je: equal / zero */

loc_001755AB: ;
    PUSH32(esp, 0x001755B0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001755B0: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001755BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001755BF: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;

loc_001755C3: ;
    _fa = (uint32_t)(MEM8(edi + 0x39)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x39), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175DD1; /* jne: not equal / not zero */

loc_001755CD: ;
    edx = MEM32(edi + 0x88);
    _fa = (uint32_t)(MEM8(edx + 0xFB7)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0xFB7), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175DD1; /* je: equal / zero */

loc_001755E0: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x5C);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x68);
    esi = MEM32(edi + 0x88);
    eax = eax - 0xF;
    MEM32(esp + 0x10) = eax;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x62);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x5E);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esp + 0x10) = ecx;
    edx = edx - eax;
    MEM32(esp + 0x40) = 0;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x44) = 0x4048F5C3;
    MEM32(esp + 0x48) = 0;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0xFB0);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017568A; /* je: equal / zero */

loc_0017564D: ;
    _fa = (uint32_t)(MEM8(esi + 0x54)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x54), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017566C; /* jne: not equal / not zero */

loc_00175653: ;
    PUSH32(esp, 0x00175658u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175658: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00175668u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175668: ;
    MEM8(esi + 0x54) = MEM8(esi + 0x54) | 1;

loc_0017566C: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00175674u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175674: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017568Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017568A: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x60);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x5C);
    esi = MEM32(edi + 0x88);
    ecx = edx + eax + 0xA;
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x68);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x62);
    MEM32(esp + 0x10) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x5E);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ecx = ecx - eax;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x3C) = 0;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(esi + 0xFB0);
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00175739; /* je: equal / zero */

loc_001756FC: ;
    _fa = (uint32_t)(MEM8(esi + 0x5C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x5C), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017571B; /* jne: not equal / not zero */

loc_00175702: ;
    PUSH32(esp, 0x00175707u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175707: ;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00175717u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175717: ;
    MEM8(esi + 0x5C) = MEM8(esi + 0x5C) | 1;

loc_0017571B: ;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00175723u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175723: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00175739u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175739: ;
    eax = MEM32(edi + 0x88);
    edx = ZX8(MEM8(eax + 0xFB4));
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x5C);
    esi = ZX8(MEM8(eax + 0xFB7));
    edx = edx + ecx;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x5E);
    MEM32(esp + 0x10) = edx;
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x68);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edi = MEM32(edi + 0x88);
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX8(MEM8(eax + 0xFB4));
    ecx = ecx - eax;
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = 0;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(edi + 0xFBB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00175DD1; /* jbe: below or equal (unsigned <=) */

loc_001757A4: ;
    goto loc_001757B0;

    /* nop */
    /* nop */

loc_001757B0: ;
    SET_LO8(eax, MEM8(edi + 0xFBA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x28) = 0;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00175D98; /* jbe: below or equal (unsigned <=) */

loc_001757C6: ;
    ebp = MEM32(esp + 0x24);
    /* nop */

loc_001757D0: ;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + eax * 4 + 0x28), edx (32-bit) */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x2C) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00175D73; /* jne: not equal / not zero */

loc_001757F3: ;
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + eax * 4 + 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175866; /* je: equal / zero */

loc_001757F9: ;
    edi = MEM32(ebp + 0x88);
    eax = MEM32(edi + esi * 8 + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(edi + 0xFB0);
    MEM32(esp + 0x50) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00175854; /* je: equal / zero */

loc_00175811: ;
    _fa = (uint32_t)(MEM8(edi + esi * 8 + 0x64)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + esi * 8 + 0x64), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175833; /* jne: not equal / not zero */

loc_00175818: ;
    PUSH32(esp, 0x0017581Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017581D: ;
    ecx = MEM32(edi + esi * 8 + 0x60);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0017582Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017582E: ;
    MEM8(edi + esi * 8 + 0x64) = MEM8(edi + esi * 8 + 0x64) | 1;

loc_00175833: ;
    edi = MEM32(edi + esi * 8 + 0x60);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017583Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017583E: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00175854u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175854: ;
    edx = MEM32(ebp + 0x88);
    edi = edx + esi * 8 + 0x370;
    goto loc_00175C31;

loc_00175866: ;
    SET_LO8(eax, MEM8(edi + esi * 8 + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ebx = edi + esi * 8 + 0x64;
    if (TEST_Z(_fa, _fb)) goto loc_00175893; /* je: equal / zero */

loc_00175872: ;
    eax = MEM32(edi + esi * 8 + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175893; /* je: equal / zero */

loc_0017587A: ;
    PUSH32(esp, 0x0017587Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017587F: ;
    ecx = MEM32(edi + esi * 8 + 0x60);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00175890u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175890: ;
    MEM8(ebx) = MEM8(ebx) & 0xFE;

loc_00175893: ;
    edi = MEM32(ebp + 0x88);
    eax = MEM32(edi + esi * 8 + 0x370);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(edi + 0xFB0);
    MEM32(esp + 0x5C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_001758FD; /* je: equal / zero */

loc_001758AE: ;
    _fa = (uint32_t)(MEM8(edi + esi * 8 + 0x374)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + esi * 8 + 0x374), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001758D9; /* jne: not equal / not zero */

loc_001758B8: ;
    PUSH32(esp, 0x001758BDu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001758BD: ;
    ecx = MEM32(edi + esi * 8 + 0x370);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001758D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001758D1: ;
    MEM8(edi + esi * 8 + 0x374) = MEM8(edi + esi * 8 + 0x374) | 1;

loc_001758D9: ;
    edi = MEM32(edi + esi * 8 + 0x370);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001758E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001758E7: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001758FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001758FD: ;
    edi = MEM32(ebp + 0x88);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(MEM32(edi + edx * 4 + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + edx * 4 + 0x10), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175A68; /* je: equal / zero */

loc_00175915: ;
    eax = MEM32(edi + esi * 8 + 0x990);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(edi + 0xFB0);
    MEM32(esp + 0x60) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00175979; /* je: equal / zero */

loc_0017592A: ;
    _fa = (uint32_t)(MEM8(edi + esi * 8 + 0x994)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + esi * 8 + 0x994), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175955; /* jne: not equal / not zero */

loc_00175934: ;
    PUSH32(esp, 0x00175939u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175939: ;
    ecx = MEM32(edi + esi * 8 + 0x990);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0017594Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017594D: ;
    MEM8(edi + esi * 8 + 0x994) = MEM8(edi + esi * 8 + 0x994) | 1;

loc_00175955: ;
    edi = MEM32(edi + esi * 8 + 0x990);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00175963u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175963: ;
    ecx = MEM32(esp + 0x60);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00175979u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175979: ;
    _fa = (uint32_t)(MEM8(0x571720)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x571720), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175AA1; /* jne: not equal / not zero */

loc_00175986: ;
    PUSH32(esp, 0x0017598Bu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017598B: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    edi = eax;
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00175999u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175999: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x40); PUSH32(esp, 0x0017599Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017599F: ;
    ebp = eax;
    MEM8(esp + 0x7C) = 0;
    ebx = 3;
    PUSH32(esp, 0x001759B0u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_001759B0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001759B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001759B7: ;
    ecx = ebp;
    edi = eax;
    PUSH32(esp, 0x001759C0u); RECOMP_ABI_CALL(0x000AF6B0u, sub_000AF6B0); /* call 0x000AF6B0 */

loc_001759C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001759C9; /* jbe: below or equal (unsigned <=) */

loc_001759C4: ;
    ebx = 6;

loc_001759C9: ;
    PUSH32(esp, 0x001759CEu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_001759CE: ;
    ecx = ebp;
    edi = eax;
    PUSH32(esp, 0x001759D7u); RECOMP_ABI_CALL(0x000AF6B0u, sub_000AF6B0); /* call 0x000AF6B0 */

loc_001759D7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3FF);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001759E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001759E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DF3CC);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001759FAu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_001759FA: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x00175A02u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175A02: ;
    edi = eax;
    PUSH32(esp, 0x00175A09u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175A09: ;
    edx = esp + 0x7C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ebp = eax;
    eax = MEM32(edi);
    PUSH32(esp, 6);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x00175A1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175A1C: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3CA9A8); /* fsub dword ptr [0x3ca9a8] */
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0x3F800000);
    fp_top() = fp_top() - MEMF(0x3CC230); /* fsub dword ptr [0x3cc230] */
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x00175A3Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00175A3D: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3CA9A8); /* fsub dword ptr [0x3ca9a8] */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00175A4Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00175A4D: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x00175A5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175A5B: ;
    ecx = eax;
    PUSH32(esp, 0x00175A62u); RECOMP_ABI_CALL(0x0018C350u, sub_0018C350); /* call 0x0018C350 */

loc_00175A62: ;
    ebp = MEM32(esp + 0x24);
    goto loc_00175AA1;

loc_00175A68: ;
    SET_LO8(eax, MEM8(edi + esi * 8 + 0x994));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ebx = edi + esi * 8 + 0x994;
    if (TEST_Z(_fa, _fb)) goto loc_00175AA1; /* je: equal / zero */

loc_00175A7A: ;
    eax = MEM32(edi + esi * 8 + 0x990);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175AA1; /* je: equal / zero */

loc_00175A85: ;
    PUSH32(esp, 0x00175A8Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175A8A: ;
    ecx = MEM32(edi + esi * 8 + 0x990);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00175A9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175A9E: ;
    MEM8(ebx) = MEM8(ebx) & 0xFE;

loc_00175AA1: ;
    edi = MEM32(ebp + 0x88);
    eax = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + eax * 4 + 0x1C), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175B6F; /* je: equal / zero */

loc_00175AB9: ;
    fp_push(MEMF(edi + 0xFB0)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3DA0BC); /* fmul dword ptr [0x3da0bc] */
    fp_push(MEMF(edi + 0xFB0)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3DF3C8); /* fmul dword ptr [0x3df3c8] */
    fp_push(MEMF(edi + 0xFB0)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3DF3C4); /* fmul dword ptr [0x3df3c4] */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + esi * 8 + 0xCA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    fp_push(MEMF(edi + 0xFB0)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA9DC); /* fmul dword ptr [0x3ca9dc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_00175BA8; /* je: equal / zero */

loc_00175B1E: ;
    _fa = (uint32_t)(MEM8(edi + esi * 8 + 0xCA4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + esi * 8 + 0xCA4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175B49; /* jne: not equal / not zero */

loc_00175B28: ;
    PUSH32(esp, 0x00175B2Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175B2D: ;
    ecx = MEM32(edi + esi * 8 + 0xCA0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00175B41u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175B41: ;
    MEM8(edi + esi * 8 + 0xCA4) = MEM8(edi + esi * 8 + 0xCA4) | 1;

loc_00175B49: ;
    edi = MEM32(edi + esi * 8 + 0xCA0);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00175B57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175B57: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00175B6Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175B6D: ;
    goto loc_00175BA8;

loc_00175B6F: ;
    SET_LO8(eax, MEM8(edi + esi * 8 + 0xCA4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ebx = edi + esi * 8 + 0xCA4;
    if (TEST_Z(_fa, _fb)) goto loc_00175BA8; /* je: equal / zero */

loc_00175B81: ;
    eax = MEM32(edi + esi * 8 + 0xCA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175BA8; /* je: equal / zero */

loc_00175B8C: ;
    PUSH32(esp, 0x00175B91u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175B91: ;
    ecx = MEM32(edi + esi * 8 + 0xCA0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00175BA5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175BA5: ;
    MEM8(ebx) = MEM8(ebx) & 0xFE;

loc_00175BA8: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00175BB0u); RECOMP_ABI_CALL(0x001782C0u, sub_001782C0); /* call 0x001782C0 */

loc_00175BB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175C24; /* jne: not equal / not zero */

loc_00175BB4: ;
    edi = MEM32(ebp + 0x88);
    eax = MEM32(edi + esi * 8 + 0x680);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(edi + 0xFB0);
    MEM32(esp + 0x54) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00175C54; /* je: equal / zero */

loc_00175BD3: ;
    _fa = (uint32_t)(MEM8(edi + esi * 8 + 0x684)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + esi * 8 + 0x684), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175BFE; /* jne: not equal / not zero */

loc_00175BDD: ;
    PUSH32(esp, 0x00175BE2u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175BE2: ;
    ecx = MEM32(edi + esi * 8 + 0x680);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00175BF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175BF6: ;
    MEM8(edi + esi * 8 + 0x684) = MEM8(edi + esi * 8 + 0x684) | 1;

loc_00175BFE: ;
    edi = MEM32(edi + esi * 8 + 0x680);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00175C0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175C0C: ;
    ecx = MEM32(esp + 0x54);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00175C22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175C22: ;
    goto loc_00175C54;

loc_00175C24: ;
    edx = MEM32(ebp + 0x88);
    edi = edx + esi * 8 + 0x680;

loc_00175C31: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175C54; /* je: equal / zero */

loc_00175C37: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175C54; /* je: equal / zero */

loc_00175C3C: ;
    PUSH32(esp, 0x00175C41u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175C41: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00175C50u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175C50: ;
    MEM8(edi + 4) = MEM8(edi + 4) & 0xFE;

loc_00175C54: ;
    _fa = (uint32_t)(MEM8(ebp + 0x39)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x39), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175D4D; /* je: equal / zero */

loc_00175C5E: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175D4D; /* jne: not equal / not zero */

loc_00175C6A: ;
    eax = MEM32(ebp + 0x88);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x30);
    fp_top() = fp_top() + MEMF(0x3C8324); /* fadd dword ptr [0x3c8324] */
    edi = MEM32(eax + edx * 4 + 0x34);
    ecx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00175CE9; /* je: equal / zero */

loc_00175C8C: ;
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x48) = ecx;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(edi + 0xFB0);
    MEM32(esp + 0x4C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00175D4D; /* je: equal / zero */

loc_00175CB5: ;
    _fa = (uint32_t)(MEM8(edi + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x4C), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175CD4; /* jne: not equal / not zero */

loc_00175CBB: ;
    PUSH32(esp, 0x00175CC0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175CC0: ;
    ecx = MEM32(edi + 0x48);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00175CD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175CD0: ;
    MEM8(edi + 0x4C) = MEM8(edi + 0x4C) | 1;

loc_00175CD4: ;
    edi = MEM32(edi + 0x48);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00175CDEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175CDE: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    goto loc_00175D40;

loc_00175CE9: ;
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(edi + 0xFB0);
    MEM32(esp + 0x58) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00175D4D; /* je: equal / zero */

loc_00175D0E: ;
    _fa = (uint32_t)(MEM8(edi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x44), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175D2D; /* jne: not equal / not zero */

loc_00175D14: ;
    PUSH32(esp, 0x00175D19u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175D19: ;
    ecx = MEM32(edi + 0x40);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00175D29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175D29: ;
    MEM8(edi + 0x44) = MEM8(edi + 0x44) | 1;

loc_00175D2D: ;
    edi = MEM32(edi + 0x40);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00175D37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175D37: ;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    ecx = esp + 0x68;

loc_00175D40: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00175D4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175D4D: ;
    edx = MEM32(ebp + 0x88);
    eax = ZX8(MEM8(edx + 0xFB9));
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEM32(esp + 0x28) = eax;
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_00175D73: ;
    ecx = ebp;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00175D7Bu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00175D7B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175D81; /* jl: less (signed <) */

loc_00175D7F: ;
    esi = 0; /* xor self */

loc_00175D81: ;
    edi = MEM32(ebp + 0x88);
    ecx = ZX8(MEM8(edi + 0xFBA));
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001757D0; /* jl: less (signed <) */

loc_00175D98: ;
    edx = MEM32(esp + 0x24);
    edi = MEM32(edx + 0x88);
    eax = ZX8(MEM8(edi + 0xFB8));
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEM32(esp + 0x10) = eax;
    fp_top() = MEMF(esp + 0x1C) - fp_top(); /* fsubr dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ZX8(MEM8(edi + 0xFBB));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001757B0; /* jl: less (signed <) */

loc_00175DD1: ;
    ecx = MEM32(esp + 0xE0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00175DE1u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00175DE1: ;
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00175DF0
 * Original: 0x00175DF0 - 0x00175F5F (367 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175DF0(void)
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

loc_00175DF0: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x88);
    ecx = MEM32(edi + 0x67C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00175F59; /* jle: less or equal (signed <=) */

loc_00175E0D: ;
    edx = edi + 0x370;

loc_00175E13: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175E26; /* jne: not equal / not zero */

loc_00175E18: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175E13; /* jl: less (signed <) */

loc_00175E20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_00175E26: ;
    eax = MEM32(edi + eax * 8 + 0x370);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175E42; /* je: equal / zero */

loc_00175E31: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00175E42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175E42: ;
    edi = MEM32(esi + 0x88);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    edx = ZX8(MEM8(edi + 0xFB6));
    MEM32(esp + 8) = edx;
    fp_top() = fp_top() * MEMF(edi + 0xFB0); /* fmul dword ptr [edi + 0xfb0] */
    fp_top() = fp_top() + (double)SMEM32(esp + 8); /* fiadd dword ptr [esp + 8] */
    PUSH32(esp, 0x00175E6Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00175E6A: ;
    MEM8(edi + 0xFB8) = LO8(eax);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edi = MEM32(esi + 0x88);
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    eax = ZX8(MEM8(edi + 0xFB5));
    MEM32(esp + 8) = eax;
    fp_top() = fp_top() * MEMF(edi + 0xFB0); /* fmul dword ptr [edi + 0xfb0] */
    fp_top() = fp_top() + (double)SMEM32(esp + 8); /* fiadd dword ptr [esp + 8] */
    PUSH32(esp, 0x00175E98u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00175E98: ;
    MEM8(edi + 0xFB9) = LO8(eax);
    SET_LO16(edx, MEM16(esi + 0x60));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00175EE9; /* jle: less or equal (signed <=) */

loc_00175EA7: ;
    edi = MEM32(esi + 0x88);
    SET_LO8(eax, MEM8(edi + 0xFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00175EE9; /* jbe: below or equal (unsigned <=) */

loc_00175EB7: ;
    SET_LO8(eax, MEM8(edi + 0xFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00175EE9; /* jbe: below or equal (unsigned <=) */

loc_00175EC1: ;
    ecx = edi;
    eax = ZX8(MEM8(ecx + 0xFB5));
    ecx = ZX8(MEM8(ecx + 0xFB9));
    edx = SX16(LO16(edx));
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00175EE3; /* jge: greater or equal (signed >=) */

loc_00175EDE: ;
    eax = 1;

loc_00175EE3: ;
    MEM8(edi + 0xFBA) = LO8(eax);

loc_00175EE9: ;
    SET_LO16(edx, MEM16(esi + 0x62));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00175F34; /* jle: less or equal (signed <=) */

loc_00175EF2: ;
    edi = MEM32(esi + 0x88);
    SET_LO8(eax, MEM8(edi + 0xFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00175F34; /* jbe: below or equal (unsigned <=) */

loc_00175F02: ;
    SET_LO8(eax, MEM8(edi + 0xFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00175F34; /* jbe: below or equal (unsigned <=) */

loc_00175F0C: ;
    ecx = edi;
    eax = ZX8(MEM8(ecx + 0xFB6));
    ecx = ZX8(MEM8(ecx + 0xFB8));
    edx = SX16(LO16(edx));
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00175F2E; /* jge: greater or equal (signed >=) */

loc_00175F29: ;
    eax = 1;

loc_00175F2E: ;
    MEM8(edi + 0xFBB) = LO8(eax);

loc_00175F34: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esi = MEM32(esi + 0x88);
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    fp_top() = fp_top() * MEMF(esi + 0xFB0); /* fmul dword ptr [esi + 0xfb0] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    PUSH32(esp, 0x00175F53u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00175F53: ;
    MEM8(esi + 0xFB4) = LO8(eax);

loc_00175F59: ;
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
 * sub_00175F60
 * Original: 0x00175F60 - 0x00176159 (505 bytes, 163 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175F60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175F60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00176156; /* je: equal / zero */

loc_00175F72: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00175F81u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00175F81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ebx, 0xFE);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001760A4; /* jle: less or equal (signed <=) */

loc_00175F8B: ;
    PUSH32(esp, ebp);
    ebp = 0x370;

loc_00175F91: ;
    eax = MEM32(edi + 0x88);
    esi = eax + ebp + -784;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175FC0; /* je: equal / zero */

loc_00175FA4: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175FC0; /* je: equal / zero */

loc_00175FA9: ;
    PUSH32(esp, 0x00175FAEu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175FAE: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00175FBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175FBD: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_00175FC0: ;
    esi = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(esi + ebp + 4));
    esi = esi + ebp;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175FEC; /* je: equal / zero */

loc_00175FD0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175FEC; /* je: equal / zero */

loc_00175FD5: ;
    PUSH32(esp, 0x00175FDAu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00175FDA: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00175FE9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00175FE9: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_00175FEC: ;
    edx = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(edx + ebp + 0x314));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = edx + ebp + 0x310;
    if (TEST_Z(_fa, _fb)) goto loc_00176020; /* je: equal / zero */

loc_00176004: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176020; /* je: equal / zero */

loc_00176009: ;
    PUSH32(esp, 0x0017600Eu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017600E: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017601Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017601D: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_00176020: ;
    edx = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(edx + ebp + 0x624));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = edx + ebp + 0x620;
    if (TEST_Z(_fa, _fb)) goto loc_00176054; /* je: equal / zero */

loc_00176038: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176054; /* je: equal / zero */

loc_0017603D: ;
    PUSH32(esp, 0x00176042u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176042: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00176051u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176051: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_00176054: ;
    edx = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(edx + ebp + 0x934));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = edx + ebp + 0x930;
    if (TEST_Z(_fa, _fb)) goto loc_00176088; /* je: equal / zero */

loc_0017606C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176088; /* je: equal / zero */

loc_00176071: ;
    PUSH32(esp, 0x00176076u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176076: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00176085u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176085: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_00176088: ;
    esi = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    MEM32(esp + 0x10) = esi;
    ebp = ebp + 8;
    PUSH32(esp, 0x0017609Bu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017609B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175F91; /* jl: less (signed <) */

loc_001760A3: ;
    POP32(esp, ebp);

loc_001760A4: ;
    esi = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(esi + 0x44));
    esi = esi + 0x40;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001760D0; /* je: equal / zero */

loc_001760B4: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001760D0; /* je: equal / zero */

loc_001760B9: ;
    PUSH32(esp, 0x001760BEu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001760BE: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001760CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001760CD: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_001760D0: ;
    esi = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(esi + 0x4C));
    esi = esi + 0x48;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001760FC; /* je: equal / zero */

loc_001760E0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001760FC; /* je: equal / zero */

loc_001760E5: ;
    PUSH32(esp, 0x001760EAu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001760EA: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001760F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001760F9: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_001760FC: ;
    esi = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(esi + 0x54));
    esi = esi + 0x50;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00176128; /* je: equal / zero */

loc_0017610C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176128; /* je: equal / zero */

loc_00176111: ;
    PUSH32(esp, 0x00176116u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176116: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00176125u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176125: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_00176128: ;
    edi = MEM32(edi + 0x88);
    SET_LO8(eax, MEM8(edi + 0x5C));
    edi = edi + 0x58;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00176154; /* je: equal / zero */

loc_00176138: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176154; /* je: equal / zero */

loc_0017613D: ;
    PUSH32(esp, 0x00176142u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176142: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00176151u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176151: ;
    MEM8(edi + 4) = MEM8(edi + 4) & LO8(ebx);

loc_00176154: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00176156: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00176160
 * Original: 0x00176160 - 0x001761B2 (82 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176160: ;
    eax = ecx;
    ecx = MEM32(eax + 0x30C);
    edx = eax + ecx * 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0017617F; /* je: equal / zero */

loc_00176171: ;
    esi = MEM32(esp + 0xC);
    edi = MEM32(esi);
    MEM32(edx) = edi;
    esi = MEM32(esi + 4);
    MEM32(edx + 4) = esi;

loc_0017617F: ;
    edx = ecx;
    ecx = ecx & 0x1F;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edi = MEM32(eax + edx * 4 + 0x300);
    esi = 1;
    esi = esi << LO8(ecx);
    edx = eax + edx * 4 + 0x300;
    edi = edi | esi;
    MEM32(edx) = edi;
    ecx = MEM32(eax + 0x30C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x30C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001761C0
 * Original: 0x001761C0 - 0x0017621F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001761C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001761C0: ;
    edx = ecx;
    eax = MEM32(edx + 0x300);
    eax = MEM32(edx + eax * 4 + 0x2DC);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x308;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x300);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    MEM32(edx + 0x300) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00176209; /* jl: less (signed <) */

loc_001761FF: ;
    MEM32(edx + 0x300) = 0;

loc_00176209: ;
    MEM32(edx + 0x304) = MEM32(edx + 0x304) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x304)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x30C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x30C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176220
 * Original: 0x00176220 - 0x0017627F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176220: ;
    edx = ecx;
    eax = MEM32(edx + 0x1F8C);
    eax = MEM32(edx + eax * 4 + 0x1F7C);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1F94;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x1F8C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM32(edx + 0x1F8C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00176269; /* jl: less (signed <) */

loc_0017625F: ;
    MEM32(edx + 0x1F8C) = 0;

loc_00176269: ;
    MEM32(edx + 0x1F90) = MEM32(edx + 0x1F90) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1F90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1F98);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1F98) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176280
 * Original: 0x00176280 - 0x001764B4 (564 bytes, 192 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00176280: ;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    edx = 0; /* xor self */
    eax = esi + 0x10;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    ecx = 0; /* xor self */
    edx = esi + 0x1C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    eax = 0; /* xor self */
    ecx = esi + 0x28;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    edx = 0; /* xor self */
    eax = esi + 0x34;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    eax = MEM32(esi + 0x36C);
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00176314; /* jle: less or equal (signed <=) */

loc_001762D5: ;
    edi = esi + 0x60;

loc_001762D8: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001762F9; /* je: equal / zero */

loc_001762DE: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176306; /* je: equal / zero */

loc_001762E2: ;
    PUSH32(esp, 0x001762E7u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001762E7: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001762F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001762F5: ;
    MEM8(edi + 4) = MEM8(edi + 4) & 0xFE;

loc_001762F9: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176306; /* je: equal / zero */

loc_001762FD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00176303u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00176303: ;
    esp = esp + 4;

loc_00176306: ;
    eax = MEM32(esi + 0x36C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001762D8; /* jl: less (signed <) */

loc_00176314: ;
    edi = esi + 0x60;
    ecx = edi;
    PUSH32(esp, 0x0017631Eu); RECOMP_ABI_CALL(0x001751D0u, sub_001751D0); /* call 0x001751D0 */

loc_0017631E: ;
    MEM32(edi + 0x30C) = ebx;
    eax = MEM32(esi + 0x67C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00176372; /* jle: less or equal (signed <=) */

loc_00176330: ;
    edi = esi + 0x370;

loc_00176336: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00176357; /* je: equal / zero */

loc_0017633C: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176364; /* je: equal / zero */

loc_00176340: ;
    PUSH32(esp, 0x00176345u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176345: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00176353u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176353: ;
    MEM8(edi + 4) = MEM8(edi + 4) & 0xFE;

loc_00176357: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176364; /* je: equal / zero */

loc_0017635B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00176361u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00176361: ;
    esp = esp + 4;

loc_00176364: ;
    eax = MEM32(esi + 0x67C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00176336; /* jl: less (signed <) */

loc_00176372: ;
    edi = esi + 0x370;
    ecx = edi;
    PUSH32(esp, 0x0017637Fu); RECOMP_ABI_CALL(0x001751D0u, sub_001751D0); /* call 0x001751D0 */

loc_0017637F: ;
    MEM32(edi + 0x30C) = ebx;
    eax = MEM32(esi + 0x98C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001763D3; /* jle: less or equal (signed <=) */

loc_00176391: ;
    edi = esi + 0x680;

loc_00176397: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001763B8; /* je: equal / zero */

loc_0017639D: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001763C5; /* je: equal / zero */

loc_001763A1: ;
    PUSH32(esp, 0x001763A6u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001763A6: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001763B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001763B4: ;
    MEM8(edi + 4) = MEM8(edi + 4) & 0xFE;

loc_001763B8: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001763C5; /* je: equal / zero */

loc_001763BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001763C2u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_001763C2: ;
    esp = esp + 4;

loc_001763C5: ;
    eax = MEM32(esi + 0x98C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00176397; /* jl: less (signed <) */

loc_001763D3: ;
    edi = esi + 0x680;
    ecx = edi;
    PUSH32(esp, 0x001763E0u); RECOMP_ABI_CALL(0x001751D0u, sub_001751D0); /* call 0x001751D0 */

loc_001763E0: ;
    MEM32(edi + 0x30C) = ebx;
    eax = MEM32(esi + 0xC9C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00176434; /* jle: less or equal (signed <=) */

loc_001763F2: ;
    edi = esi + 0x990;

loc_001763F8: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00176419; /* je: equal / zero */

loc_001763FE: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176426; /* je: equal / zero */

loc_00176402: ;
    PUSH32(esp, 0x00176407u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176407: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00176415u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176415: ;
    MEM8(edi + 4) = MEM8(edi + 4) & 0xFE;

loc_00176419: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176426; /* je: equal / zero */

loc_0017641D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00176423u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00176423: ;
    esp = esp + 4;

loc_00176426: ;
    eax = MEM32(esi + 0xC9C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001763F8; /* jl: less (signed <) */

loc_00176434: ;
    edi = esi + 0x990;
    ecx = edi;
    PUSH32(esp, 0x00176441u); RECOMP_ABI_CALL(0x001751D0u, sub_001751D0); /* call 0x001751D0 */

loc_00176441: ;
    MEM32(edi + 0x30C) = ebx;
    eax = MEM32(esi + 0xFAC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0017649C; /* jle: less or equal (signed <=) */

loc_00176453: ;
    edi = esi + 0xCA0;
    /* nop */

loc_00176460: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00176481; /* je: equal / zero */

loc_00176466: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017648E; /* je: equal / zero */

loc_0017646A: ;
    PUSH32(esp, 0x0017646Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017646F: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017647Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017647D: ;
    MEM8(edi + 4) = MEM8(edi + 4) & 0xFE;

loc_00176481: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017648E; /* je: equal / zero */

loc_00176485: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017648Bu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_0017648B: ;
    esp = esp + 4;

loc_0017648E: ;
    eax = MEM32(esi + 0xFAC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00176460; /* jl: less (signed <) */

loc_0017649C: ;
    esi = esi + 0xCA0;
    ecx = esi;
    PUSH32(esp, 0x001764A9u); RECOMP_ABI_CALL(0x001751D0u, sub_001751D0); /* call 0x001751D0 */

loc_001764A9: ;
    POP32(esp, edi);
    MEM32(esi + 0x30C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001764C0
 * Original: 0x001764C0 - 0x001764D9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001764C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001764C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001764C8u); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_001764C8: ;
    ecx = MEM32(esi + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001764D8; /* je: equal / zero */

loc_001764D3: ;
    g_seh_ebp = ebp; sub_00176280(); return; /* tail jmp 0x00176280 */

loc_001764D8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001764E0
 * Original: 0x001764E0 - 0x001768E6 (1030 bytes, 338 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001764E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001764E0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x88);
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00176540; /* jne: not equal / not zero */

loc_001764F5: ;
    PUSH32(esp, 0x001764FAu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001764FA: ;
    ecx = MEM32(0x4587C0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x00176512u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176512: ;
    edi = MEM32(esi + 0x88);
    edi = edi + 0x40;
    ebx = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176531; /* je: equal / zero */

loc_00176522: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00176528u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00176528: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_00176531: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(edi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00176540; /* je: equal / zero */

loc_00176539: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00176540u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176540: ;
    eax = MEM32(esi + 0x88);
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00176598; /* jne: not equal / not zero */

loc_0017654D: ;
    PUSH32(esp, 0x00176552u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176552: ;
    ecx = MEM32(0x4587CC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x0017656Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017656A: ;
    edi = MEM32(esi + 0x88);
    edi = edi + 0x48;
    ebx = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176589; /* je: equal / zero */

loc_0017657A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00176580u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00176580: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_00176589: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(edi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00176598; /* je: equal / zero */

loc_00176591: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00176598u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176598: ;
    eax = MEM32(esi + 0x88);
    ecx = MEM32(eax + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001765F0; /* jne: not equal / not zero */

loc_001765A5: ;
    PUSH32(esp, 0x001765AAu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001765AA: ;
    ecx = MEM32(0x4587D0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x001765C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001765C2: ;
    edi = MEM32(esi + 0x88);
    edi = edi + 0x50;
    ebx = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001765E1; /* je: equal / zero */

loc_001765D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001765D8u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_001765D8: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_001765E1: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(edi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001765F0; /* je: equal / zero */

loc_001765E9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x001765F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001765F0: ;
    eax = MEM32(esi + 0x88);
    ecx = MEM32(eax + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00176648; /* jne: not equal / not zero */

loc_001765FD: ;
    PUSH32(esp, 0x00176602u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176602: ;
    ecx = MEM32(0x4587D0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x0017661Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017661A: ;
    edi = MEM32(esi + 0x88);
    edi = edi + 0x58;
    ebx = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176639; /* je: equal / zero */

loc_0017662A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00176630u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00176630: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_00176639: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(edi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00176648; /* je: equal / zero */

loc_00176641: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00176648u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176648: ;
    ebx = MEM32(esp + 0x18);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00176656u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176656: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001768DB; /* jle: less or equal (signed <=) */

loc_0017665F: ;
    ecx = esi;
    PUSH32(esp, 0x00176666u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00176666: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017668F; /* je: equal / zero */

loc_0017666F: ;
    edx = MEM32(esi + 0x88);
    ecx = SX16(LO16(eax));
    edi = ecx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((5) & 31u));
    edx = edx + 4;
    edx = edx + edi * 4;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(edx) = MEM32(edx) | edi;

loc_0017668F: ;
    SET_LO8(ecx, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001766B7; /* je: equal / zero */

loc_00176697: ;
    edx = MEM32(esi + 0x88);
    ecx = SX16(LO16(eax));
    edi = ecx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((5) & 31u));
    edx = edx + 0x10;
    edx = edx + edi * 4;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(edx) = MEM32(edx) | edi;

loc_001766B7: ;
    SET_LO8(ecx, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001766DF; /* je: equal / zero */

loc_001766BF: ;
    edx = MEM32(esi + 0x88);
    ecx = SX16(LO16(eax));
    edi = ecx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((5) & 31u));
    edx = edx + 0x1C;
    edx = edx + edi * 4;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(edx) = MEM32(edx) | edi;

loc_001766DF: ;
    ecx = MEM32(esp + 0x20);
    edi = SX16(LO16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001766EFu); RECOMP_ABI_CALL(0x001782F0u, sub_001782F0); /* call 0x001782F0 */

loc_001766EF: ;
    PUSH32(esp, 0x001766F4u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001766F4: ;
    ecx = MEM32(0x4587BC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x0017670Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017670C: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    ecx = MEM32(eax);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = LO8(edx);
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00176728; /* je: equal / zero */

loc_00176721: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00176728u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176728: ;
    ecx = MEM32(esi + 0x88);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ecx + 0x60;
    PUSH32(esp, 0x0017673Bu); RECOMP_ABI_CALL(0x00176160u, sub_00176160); /* call 0x00176160 */

loc_0017673B: ;
    PUSH32(esp, 0x00176740u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176740: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x178); PUSH32(esp, 0x00176754u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176754: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    ecx = MEM32(eax);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = LO8(edx);
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00176770; /* je: equal / zero */

loc_00176769: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00176770u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176770: ;
    ecx = MEM32(esi + 0x88);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ecx + 0x370;
    PUSH32(esp, 0x00176786u); RECOMP_ABI_CALL(0x00176160u, sub_00176160); /* call 0x00176160 */

loc_00176786: ;
    ecx = MEM32(esi + 0x88);
    ebx = edi * 8 + 0x370;
    _fa = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001767E3; /* jne: not equal / not zero */

loc_00176799: ;
    PUSH32(esp, 0x0017679Eu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017679E: ;
    ecx = MEM32(0x4587BC);
    edi = MEM32(esi + 0x88);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = eax;
    edi = edi + ebx;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x001767BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001767BE: ;
    ebx = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001767D4; /* je: equal / zero */

loc_001767C5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001767CBu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_001767CB: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_001767D4: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(edi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001767E3; /* je: equal / zero */

loc_001767DC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x001767E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001767E3: ;
    PUSH32(esp, 0x001767E8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001767E8: ;
    ecx = MEM32(0x4587C4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x00176800u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176800: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    ecx = MEM32(eax);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = LO8(edx);
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0017681C; /* je: equal / zero */

loc_00176815: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0017681Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017681C: ;
    ecx = MEM32(esi + 0x88);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ecx + 0x990;
    PUSH32(esp, 0x00176832u); RECOMP_ABI_CALL(0x00176160u, sub_00176160); /* call 0x00176160 */

loc_00176832: ;
    PUSH32(esp, 0x00176837u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176837: ;
    ecx = MEM32(0x4587C8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x0017684Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017684F: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    ecx = MEM32(eax);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = LO8(edx);
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0017686B; /* je: equal / zero */

loc_00176864: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0017686Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017686B: ;
    ecx = MEM32(esi + 0x88);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ecx + 0xCA0;
    PUSH32(esp, 0x00176881u); RECOMP_ABI_CALL(0x00176160u, sub_00176160); /* call 0x00176160 */

loc_00176881: ;
    PUSH32(esp, 0x00176886u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176886: ;
    ecx = MEM32(0x4587B8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x0017689Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017689E: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    ecx = MEM32(eax);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = LO8(edx);
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001768BA; /* je: equal / zero */

loc_001768B3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x001768BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001768BA: ;
    ecx = MEM32(esi + 0x88);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ecx + 0x680;
    PUSH32(esp, 0x001768D0u); RECOMP_ABI_CALL(0x00176160u, sub_00176160); /* call 0x00176160 */

loc_001768D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

loc_001768DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001768F0
 * Original: 0x001768F0 - 0x001768F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001768F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001768F0: ;
    g_seh_ebp = ebp; sub_001751D0(); return; /* tail jmp 0x001751D0 */

}

/**
 * sub_00176900
 * Original: 0x00176900 - 0x00176A4A (330 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176900: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354523);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0xC) = edi;
    MEM32(edi) = 0x3DF3DC;
    MEM32(esp + 0x18) = 4;
    PUSH32(esp, 0x00176932u); RECOMP_ABI_CALL(0x00176280u, sub_00176280); /* call 0x00176280 */

loc_00176932: ;
    SET_LO8(eax, MEM8(edi + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = edi + 0x40;
    SET_LO8(ebx, 0xFE);
    if (TEST_Z(_fa, _fb)) goto loc_0017695A; /* je: equal / zero */

loc_0017693E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176968; /* je: equal / zero */

loc_00176943: ;
    PUSH32(esp, 0x00176948u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00176948: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00176957u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176957: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_0017695A: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176968; /* je: equal / zero */

loc_0017695F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00176965u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00176965: ;
    esp = esp + 4;

loc_00176968: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = edi + 0x48;
    if (TEST_Z(_fa, _fb)) goto loc_0017698E; /* je: equal / zero */

loc_00176972: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017699C; /* je: equal / zero */

loc_00176977: ;
    PUSH32(esp, 0x0017697Cu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017697C: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017698Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017698B: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_0017698E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017699C; /* je: equal / zero */

loc_00176993: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00176999u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00176999: ;
    esp = esp + 4;

loc_0017699C: ;
    SET_LO8(eax, MEM8(edi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = edi + 0x50;
    if (TEST_Z(_fa, _fb)) goto loc_001769C2; /* je: equal / zero */

loc_001769A6: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001769D0; /* je: equal / zero */

loc_001769AB: ;
    PUSH32(esp, 0x001769B0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001769B0: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001769BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001769BF: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_001769C2: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001769D0; /* je: equal / zero */

loc_001769C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001769CDu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_001769CD: ;
    esp = esp + 4;

loc_001769D0: ;
    SET_LO8(eax, MEM8(edi + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = edi + 0x58;
    if (TEST_Z(_fa, _fb)) goto loc_001769F6; /* je: equal / zero */

loc_001769DA: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176A04; /* je: equal / zero */

loc_001769DF: ;
    PUSH32(esp, 0x001769E4u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001769E4: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001769F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001769F3: ;
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(ebx);

loc_001769F6: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176A04; /* je: equal / zero */

loc_001769FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00176A01u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00176A01: ;
    esp = esp + 4;

loc_00176A04: ;
    ecx = edi + 0xCA0;
    PUSH32(esp, 0x00176A0Fu); RECOMP_ABI_CALL(0x001751D0u, sub_001751D0); /* call 0x001751D0 */

loc_00176A0F: ;
    ecx = edi + 0x990;
    PUSH32(esp, 0x00176A1Au); RECOMP_ABI_CALL(0x001751D0u, sub_001751D0); /* call 0x001751D0 */

loc_00176A1A: ;
    ecx = edi + 0x680;
    PUSH32(esp, 0x00176A25u); RECOMP_ABI_CALL(0x001751D0u, sub_001751D0); /* call 0x001751D0 */

loc_00176A25: ;
    ecx = edi + 0x370;
    PUSH32(esp, 0x00176A30u); RECOMP_ABI_CALL(0x001751D0u, sub_001751D0); /* call 0x001751D0 */

loc_00176A30: ;
    ecx = edi + 0x60;
    PUSH32(esp, 0x00176A38u); RECOMP_ABI_CALL(0x001751D0u, sub_001751D0); /* call 0x001751D0 */

loc_00176A38: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00176A50
 * Original: 0x00176A50 - 0x00176AC2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176A50: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x308;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x2FC);
    edi = MEM32(eax + 0x304);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    MEM32(eax + 0x2FC) = ecx;
    MEM32(eax + 0x304) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00176AA8; /* jl: less (signed <) */

loc_00176A97: ;
    MEM32(eax + 0x2FC) = 0;
    ecx = 6;
    goto loc_00176AA9;

loc_00176AA8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00176AA9: ;
    MEM32(eax + ecx * 4 + 0x2DC) = esi;
    ecx = MEM32(eax + 0x30C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x30C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00176AD0
 * Original: 0x00176AD0 - 0x00176B61 (145 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFBC);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00176AEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00176AEA: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x1F78);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x1F78) = ecx;
    MEM32(eax + esi + 0x1F94) = MEM32(eax + esi + 0x1F94) & edx;
    eax = MEM32(esi + 0x1F88);
    edx = MEM32(esi + 0x1F90);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esi + 0x1F88) = eax;
    MEM32(esi + 0x1F90) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00176B47; /* jl: less (signed <) */

loc_00176B36: ;
    MEM32(esi + 0x1F88) = 0;
    eax = 1;
    goto loc_00176B48;

loc_00176B47: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00176B48: ;
    MEM32(esi + eax * 4 + 0x1F7C) = edi;
    eax = MEM32(esi + 0x1F98);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1F98) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00176B70
 * Original: 0x00176B70 - 0x00176BCD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176B70: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1F88) = esi;
    MEM32(ecx + 0x1F8C) = esi;
    MEM32(ecx + 0x1F90) = esi;
    edx = 0; /* xor self */
    goto loc_00176B90;

    /* nop */

loc_00176B90: ;
    eax = MEM32(ecx + 0x1F88);
    edi = MEM32(ecx + 0x1F90);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ecx + 0x1F88) = eax;
    MEM32(ecx + 0x1F90) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00176BBC; /* jl: less (signed <) */

loc_00176BAF: ;
    MEM32(ecx + 0x1F88) = esi;
    eax = 1;
    goto loc_00176BBD;

loc_00176BBC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00176BBD: ;
    MEM32(ecx + eax * 4 + 0x1F7C) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00176B90; /* jl: less (signed <) */

loc_00176BCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176BD0
 * Original: 0x00176BD0 - 0x00176C13 (67 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00176BD8u); RECOMP_ABI_CALL(0x0017D8B0u, sub_0017D8B0); /* call 0x0017D8B0 */

loc_00176BD8: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3DF3E4;
    MEM16(esi + 0x7C) = LO16(eax);
    MEM32(esi + 0x80) = eax;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 8;
    _fa = (uint32_t)(MEM32(0x573B44)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x573B44), 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176C09; /* je: equal / zero */

loc_00176BF7: ;
    ecx = 0x573838;
    PUSH32(esp, 0x00176C01u); RECOMP_ABI_CALL(0x001761C0u, sub_001761C0); /* call 0x001761C0 */

loc_00176C01: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    eax = eax + 0x573838;

loc_00176C09: ;
    MEM32(esi + 0x84) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176C20
 * Original: 0x00176C20 - 0x00176D72 (338 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176C20(void)
{

loc_00176C20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354523);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3DF3DC;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = ecx;
    SET_LO8(edx, MEM8(esi + 0x44));
    MEM32(esi + 0x40) = eax;
    SET_LO8(ecx, 0xFE);
    SET_LO8(edx, LO8(edx) & LO8(ecx));
    MEM8(esi + 0x44) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x4C));
    MEM32(esi + 0x48) = eax;
    SET_LO8(edx, LO8(edx) & LO8(ecx));
    MEM8(esi + 0x4C) = LO8(edx);
    MEM8(esi + 0x54) = MEM8(esi + 0x54) & LO8(ecx);
    MEM32(esi + 0x50) = eax;
    MEM8(esi + 0x5C) = MEM8(esi + 0x5C) & LO8(ecx);
    MEM32(esi + 0x58) = eax;
    edx = 0; /* xor self */
    MEM32(esi + 0x360) = edx;
    MEM32(esi + 0x364) = edx;
    MEM32(esi + 0x368) = edx;
    MEM32(esi + 0x36C) = eax;
    ecx = 0; /* xor self */
    MEM32(esi + 0x670) = ecx;
    MEM32(esi + 0x674) = ecx;
    MEM32(esi + 0x678) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x67C) = eax;
    MEM32(esi + 0x980) = edx;
    MEM32(esi + 0x984) = edx;
    MEM32(esi + 0x988) = edx;
    MEM32(esi + 0x98C) = eax;
    MEM32(esi + 0xC90) = ecx;
    MEM32(esi + 0xC94) = ecx;
    MEM32(esi + 0xC98) = ecx;
    MEM32(esi + 0xC9C) = eax;
    MEM32(esi + 0xFA0) = edx;
    MEM32(esi + 0xFA4) = edx;
    MEM32(esi + 0xFA8) = edx;
    MEM32(esi + 0xFAC) = eax;
    ecx = esi;
    MEM8(esp + 0x10) = 4;
    MEM8(esi + 0xFBA) = LO8(eax);
    MEM8(esi + 0xFBB) = LO8(eax);
    MEM8(esi + 0xFB7) = LO8(eax);
    MEM8(esi + 0xFB8) = LO8(eax);
    MEM8(esi + 0xFB9) = LO8(eax);
    MEM8(esi + 0xFB5) = LO8(eax);
    MEM8(esi + 0xFB6) = LO8(eax);
    MEM32(esi + 0xFB0) = 0x3F800000;
    MEM8(esi + 0xFB4) = LO8(eax);
    PUSH32(esp, 0x00176D60u); RECOMP_ABI_CALL(0x00176280u, sub_00176280); /* call 0x00176280 */

loc_00176D60: ;
    eax = esi;
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00176D80
 * Original: 0x00176D80 - 0x00176D9E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176D80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00176D88u); RECOMP_ABI_CALL(0x00176900u, sub_00176900); /* call 0x00176900 */

loc_00176D88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00176D98; /* je: equal / zero */

loc_00176D8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00176D95u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00176D95: ;
    esp = esp + 4;

loc_00176D98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00176DA0
 * Original: 0x00176DA0 - 0x00176E22 (130 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176DA0(void)
{

loc_00176DA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354538);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DF3E4;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00176DD0u); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_00176DD0: ;
    eax = MEM32(esi + 0x84);
    eax = eax - 0x573838;
    ecx = eax;
    eax = 0x4EC4EC4F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = 0x573838;
    PUSH32(esp, 0x00176DF9u); RECOMP_ABI_CALL(0x00176A50u, sub_00176A50); /* call 0x00176A50 */

loc_00176DF9: ;
    ecx = esi;
    MEM32(esi + 0x84) = 0;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00176E12u); RECOMP_ABI_CALL(0x0017D9E0u, sub_0017D9E0); /* call 0x0017D9E0 */

loc_00176E12: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00176E30
 * Original: 0x00176E30 - 0x00176E4E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00176E38u); RECOMP_ABI_CALL(0x00176DA0u, sub_00176DA0); /* call 0x00176DA0 */

loc_00176E38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00176E48; /* je: equal / zero */

loc_00176E3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00176E45u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00176E45: ;
    esp = esp + 4;

loc_00176E48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00176E50
 * Original: 0x00176E50 - 0x00176E55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176E50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00176E50: ;
    g_seh_ebp = ebp; sub_001752B0(); return; /* tail jmp 0x001752B0 */

}

/**
 * sub_00176E60
 * Original: 0x00176E60 - 0x00176EE1 (129 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176E60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354558);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DF464;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00176EC2; /* je: equal / zero */

loc_00176E95: ;
    eax = eax - 0x571898;
    ecx = eax;
    eax = 0x104525E1;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = 0x571898;
    PUSH32(esp, 0x00176EB8u); RECOMP_ABI_CALL(0x00176AD0u, sub_00176AD0); /* call 0x00176AD0 */

loc_00176EB8: ;
    MEM32(esi + 0x88) = 0;

loc_00176EC2: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00176ED1u); RECOMP_ABI_CALL(0x00176DA0u, sub_00176DA0); /* call 0x00176DA0 */

loc_00176ED1: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00176EF0
 * Original: 0x00176EF0 - 0x00176F22 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176EF0(void)
{

loc_00176EF0: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x1F78) = eax;
    MEM32(esi + 0x1F88) = eax;
    MEM32(esi + 0x1F8C) = eax;
    MEM32(esi + 0x1F90) = eax;
    MEM32(esi + 0x1F94) = eax;
    MEM32(esi + 0x1F98) = eax;
    PUSH32(esp, 0x00176F1Eu); RECOMP_ABI_CALL(0x00176B70u, sub_00176B70); /* call 0x00176B70 */

loc_00176F1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176F30
 * Original: 0x00176F30 - 0x00176F4E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176F30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00176F38u); RECOMP_ABI_CALL(0x00176E60u, sub_00176E60); /* call 0x00176E60 */

loc_00176F38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00176F48; /* je: equal / zero */

loc_00176F3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00176F45u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00176F45: ;
    esp = esp + 4;

loc_00176F48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00176F50
 * Original: 0x00176F50 - 0x0017704B (251 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176F50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00176F50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354589);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00176F75u); RECOMP_ABI_CALL(0x0017D8B0u, sub_0017D8B0); /* call 0x0017D8B0 */

loc_00176F75: ;
    ebp = 0; /* xor self */
    MEM32(esi) = 0x3DF3E4;
    MEM16(esi + 0x7C) = LO16(ebp);
    MEM32(esi + 0x80) = ebp;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 8;
    _fa = (uint32_t)(MEM32(0x573B44)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x573B44), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00176F9C; /* jne: not equal / not zero */

loc_00176F94: ;
    MEM32(esi + 0x84) = ebp;
    goto loc_00176FB4;

loc_00176F9C: ;
    ecx = 0x573838;
    PUSH32(esp, 0x00176FA6u); RECOMP_ABI_CALL(0x001761C0u, sub_001761C0); /* call 0x001761C0 */

loc_00176FA6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    eax = eax + 0x573838;
    MEM32(esi + 0x84) = eax;

loc_00176FB4: ;
    MEM32(esi) = 0x3DF464;
    _fa = (uint32_t)(MEM32(0x573830)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x573830), 2 (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00176FE0; /* jne: not equal / not zero */

loc_00176FC7: ;
    MEM32(esi + 0x88) = ebp;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00176FE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = 0x571898;
    PUSH32(esp, 0x00176FECu); RECOMP_ABI_CALL(0x00176220u, sub_00176220); /* call 0x00176220 */

loc_00176FEC: ;
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFBC);
    ebx = eax + 0x571898;
    ecx = ebx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM8(esp + 0x24) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00177012; /* je: equal / zero */

loc_0017700D: ;
    PUSH32(esp, 0x00177012u); RECOMP_ABI_CALL(0x00176C20u, sub_00176C20); /* call 0x00176C20 */

loc_00177012: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ecx * 4 + 0x573810;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x88) = ebx;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00177050
 * Original: 0x00177050 - 0x00177074 (36 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177050(void)
{

loc_00177050: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00177058u); RECOMP_ABI_CALL(0x0017D8B0u, sub_0017D8B0); /* call 0x0017D8B0 */

loc_00177058: ;
    MEM8(esi + 0x7C) = MEM8(esi + 0x7C) & 0xFE;
    eax = 0; /* xor self */
    MEM32(esi + 0x80) = eax;
    MEM32(esi) = 0x3DF4EC;
    MEM32(esi + 0x84) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00177080
 * Original: 0x00177080 - 0x001770E2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177080: ;
    edx = ecx;
    eax = MEM32(edx + 0x11218);
    eax = MEM32(edx + eax * 4 + 0x11010);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x11220;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x11218);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    MEM32(edx + 0x11218) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001770CC; /* jl: less (signed <) */

loc_001770C2: ;
    MEM32(edx + 0x11218) = 0;

loc_001770CC: ;
    MEM32(edx + 0x1121C) = MEM32(edx + 0x1121C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1121C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x11230);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x11230) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001770F0
 * Original: 0x001770F0 - 0x0017715E (110 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001770F0(void)
{

loc_001770F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi) = 0x3DF554;
    MEM32(esi + 4) = edi;
    ecx = esi + 0xC;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x0017710Au); RECOMP_ABI_CALL(0x00165CB0u, sub_00165CB0); /* call 0x00165CB0 */

loc_0017710A: ;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    SET_LO8(eax, MEM8(esi + 0x3A));
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    SET_LO8(eax, LO8(eax) & 0xFC);
    MEM8(esi + 0x3A) = LO8(eax);
    MEM8(esi + 0x38) = 0xFF;
    MEM8(esi + 0x39) = 4;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x58) = edi;
    MEM16(esi + 0x5C) = LO16(edi);
    MEM16(esi + 0x5E) = LO16(edi);
    MEM16(esi + 0x60) = LO16(edi);
    MEM16(esi + 0x62) = LO16(edi);
    MEM16(esi + 0x64) = LO16(edi);
    MEM16(esi + 0x66) = LO16(edi);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00177160
 * Original: 0x00177160 - 0x0017716B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177160: ;
    MEM32(ecx) = 0x3DF554;
    g_seh_ebp = ebp; sub_00173230(); return; /* tail jmp 0x00173230 */

}

/**
 * sub_00177170
 * Original: 0x00177170 - 0x001771C4 (84 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177170(void)
{

loc_00177170: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3545A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x00177192u); RECOMP_ABI_CALL(0x001770F0u, sub_001770F0); /* call 0x001770F0 */

loc_00177192: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3DF5B4;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    ecx = esi + 0x7C;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    PUSH32(esp, 0x001771B2u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_001771B2: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001771D0
 * Original: 0x001771D0 - 0x001771EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001771D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001771D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001771D8u); RECOMP_ABI_CALL(0x001771F0u, sub_001771F0); /* call 0x001771F0 */

loc_001771D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001771E8; /* je: equal / zero */

loc_001771DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001771E5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001771E5: ;
    esp = esp + 4;

loc_001771E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001771F0
 * Original: 0x001771F0 - 0x00177245 (85 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001771F0(void)
{

loc_001771F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3545A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DF5B4;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00177220u); RECOMP_ABI_CALL(0x00173F10u, sub_00173F10); /* call 0x00173F10 */

loc_00177220: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3DF554;
    PUSH32(esp, 0x00177235u); RECOMP_ABI_CALL(0x00173230u, sub_00173230); /* call 0x00173230 */

loc_00177235: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00177250
 * Original: 0x00177250 - 0x0017732B (219 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177250: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3545C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00177273u); RECOMP_ABI_CALL(0x0017D8B0u, sub_0017D8B0); /* call 0x0017D8B0 */

loc_00177273: ;
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3DF614;
    PUSH32(esp, 0x00177286u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00177286: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3EC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00177292u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177292: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001772BA; /* je: equal / zero */

loc_00177298: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001772BA; /* je: equal / zero */

loc_0017729D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001772A3u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_001772A3: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001772AEu); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_001772AE: ;
    ecx = eax;
    PUSH32(esp, 0x001772B5u); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_001772B5: ;
    MEM32(esi + 0x7C) = eax;
    goto loc_001772C1;

loc_001772BA: ;
    MEM32(esi + 0x7C) = 0;

loc_001772C1: ;
    PUSH32(esp, 0x001772C6u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_001772C6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3ED);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001772D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001772D2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017730E; /* je: equal / zero */

loc_001772D8: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017730E; /* je: equal / zero */

loc_001772DD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001772E3u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_001772E3: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001772EEu); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_001772EE: ;
    ecx = eax;
    PUSH32(esp, 0x001772F5u); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_001772F5: ;
    MEM32(esi + 0x80) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0017730E: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x80) = 0;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00177330
 * Original: 0x00177330 - 0x0017734E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177330: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00177338u); RECOMP_ABI_CALL(0x00177350u, sub_00177350); /* call 0x00177350 */

loc_00177338: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177348; /* je: equal / zero */

loc_0017733F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00177345u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00177345: ;
    esp = esp + 4;

loc_00177348: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177350
 * Original: 0x00177350 - 0x00177355 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177350: ;
    g_seh_ebp = ebp; sub_0017D9E0(); return; /* tail jmp 0x0017D9E0 */

}

/**
 * sub_00177360
 * Original: 0x00177360 - 0x001773F3 (147 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177360: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x220);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0017737Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017737A: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x11000);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x11000) = ecx;
    MEM32(eax + esi + 0x11220) = MEM32(eax + esi + 0x11220) & edx;
    eax = MEM32(esi + 0x11214);
    edx = MEM32(esi + 0x1121C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(esi + 0x11214) = eax;
    MEM32(esi + 0x1121C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001773D9; /* jl: less (signed <) */

loc_001773C8: ;
    MEM32(esi + 0x11214) = 0;
    eax = 0x7F;
    goto loc_001773DA;

loc_001773D9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001773DA: ;
    MEM32(esi + eax * 4 + 0x11010) = edi;
    eax = MEM32(esi + 0x11230);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x11230) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177400
 * Original: 0x00177400 - 0x0017741E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177400: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00177408u); RECOMP_ABI_CALL(0x00177160u, sub_00177160); /* call 0x00177160 */

loc_00177408: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177418; /* je: equal / zero */

loc_0017740F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00177415u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00177415: ;
    esp = esp + 4;

loc_00177418: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177420
 * Original: 0x00177420 - 0x00177440 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177420: ;
    edx = MEM32(esp + 4);
    edx = edx - ecx;
    eax = 0x78787879;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00177360(); return; /* tail jmp 0x00177360 */

}

/**
 * sub_00177440
 * Original: 0x00177440 - 0x001774F7 (183 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00177449u); RECOMP_ABI_CALL(0x0017D8B0u, sub_0017D8B0); /* call 0x0017D8B0 */

loc_00177449: ;
    ebx = 0; /* xor self */
    MEM32(esi) = 0x3DF3E4;
    MEM16(esi + 0x7C) = LO16(ebx);
    MEM32(esi + 0x80) = ebx;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 8;
    _fa = (uint32_t)(MEM32(0x573B44)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x573B44), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00177470; /* jne: not equal / not zero */

loc_00177468: ;
    MEM32(esi + 0x84) = ebx;
    goto loc_00177488;

loc_00177470: ;
    ecx = 0x573838;
    PUSH32(esp, 0x0017747Au); RECOMP_ABI_CALL(0x001761C0u, sub_001761C0); /* call 0x001761C0 */

loc_0017747A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    eax = eax + 0x573838;
    MEM32(esi + 0x84) = eax;

loc_00177488: ;
    MEM8(esi + 0xA2) = LO8(ebx);
    MEM16(esi + 0xA4) = LO16(ebx);
    MEM32(esi) = 0x3DF6DC;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = 0x3D8BD0;
    MEM32(esi + 0xFC) = ebx;
    MEM8(esi + 0x100) = LO8(ebx);
    MEM32(esi + 0x104) = ebx;
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x10C) = 0x3DD750;
    MEM32(esi + 0x20C) = ebx;
    MEM32(esi + 0x210) = ebx;
    MEM32(esi + 0x214) = ebx;
    MEM8(esi + 0x218) = MEM8(esi + 0x218) & 0xE0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00177500
 * Original: 0x00177500 - 0x0017751E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177500: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00177508u); RECOMP_ABI_CALL(0x0017A0B0u, sub_0017A0B0); /* call 0x0017A0B0 */

loc_00177508: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177518; /* je: equal / zero */

loc_0017750F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00177515u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00177515: ;
    esp = esp + 4;

loc_00177518: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177520
 * Original: 0x00177520 - 0x00177539 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177520(void)
{

loc_00177520: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00177528u); RECOMP_ABI_CALL(0x00177440u, sub_00177440); /* call 0x00177440 */

loc_00177528: ;
    MEM8(esi + 0x21C) = MEM8(esi + 0x21C) & 0xFC;
    MEM32(esi) = 0x3DF75C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00177540
 * Original: 0x00177540 - 0x0017755E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177540: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00177548u); RECOMP_ABI_CALL(0x00177560u, sub_00177560); /* call 0x00177560 */

loc_00177548: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177558; /* je: equal / zero */

loc_0017754F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00177555u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00177555: ;
    esp = esp + 4;

loc_00177558: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177560
 * Original: 0x00177560 - 0x00177565 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177560: ;
    g_seh_ebp = ebp; sub_0017A0B0(); return; /* tail jmp 0x0017A0B0 */

}

/**
 * sub_00177570
 * Original: 0x00177570 - 0x001775B9 (73 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177570: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00177578u); RECOMP_ABI_CALL(0x0017D8B0u, sub_0017D8B0); /* call 0x0017D8B0 */

loc_00177578: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3DF3E4;
    MEM16(esi + 0x7C) = LO16(eax);
    MEM32(esi + 0x80) = eax;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 8;
    _fa = (uint32_t)(MEM32(0x573B44)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x573B44), 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001775A9; /* je: equal / zero */

loc_00177597: ;
    ecx = 0x573838;
    PUSH32(esp, 0x001775A1u); RECOMP_ABI_CALL(0x001761C0u, sub_001761C0); /* call 0x001761C0 */

loc_001775A1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    eax = eax + 0x573838;

loc_001775A9: ;
    MEM32(esi + 0x84) = eax;
    MEM32(esi) = 0x3DF7DC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001775C0
 * Original: 0x001775C0 - 0x001778B1 (753 bytes, 218 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001775C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001775C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35469B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x11230);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001775FE; /* jne: not equal / not zero */

loc_001775E9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_001775FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00177607u); RECOMP_ABI_CALL(0x00177080u, sub_00177080); /* call 0x00177080 */

loc_00177607: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ebx = MEM32(ebp + ecx * 4 + 0x11000);
    edx = ebp + ecx * 4 + 0x11000;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x220);
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    eax = eax + ebp;
    PUSH32(esp, 0x3DDC90);
    ebx = ebx | esi;
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x28);
    esi = eax;
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x00177647u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00177647: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001776A1; /* jne: not equal / not zero */

loc_0017764E: ;
    MEM32(esp + 0x24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00177661; /* je: equal / zero */

loc_0017765A: ;
    ecx = esi;
    PUSH32(esp, 0x00177661u); RECOMP_ABI_CALL(0x0017D8B0u, sub_0017D8B0); /* call 0x0017D8B0 */

loc_00177661: ;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    edi = eax;

loc_0017766B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017768A; /* jne: not equal / not zero */

loc_0017766F: ;
    esi = esi - ebp;
    eax = 0x78787879;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0017768Au); RECOMP_ABI_CALL(0x00177360u, sub_00177360); /* call 0x00177360 */

loc_0017768A: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_001776A1: ;
    PUSH32(esp, 0x3DF914);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001776ACu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001776AC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001776D4; /* jne: not equal / not zero */

loc_001776B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001776D0; /* je: equal / zero */

loc_001776B7: ;
    ecx = esi;
    PUSH32(esp, 0x001776BEu); RECOMP_ABI_CALL(0x001770F0u, sub_001770F0); /* call 0x001770F0 */

loc_001776BE: ;
    SET_LO8(eax, MEM8(esi + 0x6C));
    SET_LO8(eax, LO8(eax) & 0xFC);
    MEM32(esi) = 0x3DF67C;
    MEM8(esi + 0x6C) = LO8(eax);
    edi = esi;
    goto loc_0017766B;

loc_001776D0: ;
    edi = 0; /* xor self */
    goto loc_0017766B;

loc_001776D4: ;
    PUSH32(esp, 0x3DF904);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001776DFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001776DF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177709; /* jne: not equal / not zero */

loc_001776E6: ;
    MEM32(esp + 0x24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00177702; /* je: equal / zero */

loc_001776F6: ;
    ecx = esi;
    PUSH32(esp, 0x001776FDu); RECOMP_ABI_CALL(0x00176BD0u, sub_00176BD0); /* call 0x00176BD0 */

loc_001776FD: ;
    goto loc_00177661;

loc_00177702: ;
    eax = 0; /* xor self */
    goto loc_00177661;

loc_00177709: ;
    PUSH32(esp, 0x3DF8EC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00177714u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00177714: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177737; /* jne: not equal / not zero */

loc_0017771B: ;
    MEM32(esp + 0x24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_00177702; /* je: equal / zero */

loc_0017772B: ;
    ecx = esi;
    PUSH32(esp, 0x00177732u); RECOMP_ABI_CALL(0x00177570u, sub_00177570); /* call 0x00177570 */

loc_00177732: ;
    goto loc_00177661;

loc_00177737: ;
    PUSH32(esp, 0x3DF8D8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00177742u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00177742: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177765; /* jne: not equal / not zero */

loc_00177749: ;
    MEM32(esp + 0x24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_00177702; /* je: equal / zero */

loc_00177759: ;
    ecx = esi;
    PUSH32(esp, 0x00177760u); RECOMP_ABI_CALL(0x00177050u, sub_00177050); /* call 0x00177050 */

loc_00177760: ;
    goto loc_00177661;

loc_00177765: ;
    PUSH32(esp, 0x3DF8C4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00177770u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00177770: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177797; /* jne: not equal / not zero */

loc_00177777: ;
    MEM32(esp + 0x24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 4;
    if (TEST_Z(_fa, _fb)) goto loc_00177702; /* je: equal / zero */

loc_0017778B: ;
    ecx = esi;
    PUSH32(esp, 0x00177792u); RECOMP_ABI_CALL(0x00177250u, sub_00177250); /* call 0x00177250 */

loc_00177792: ;
    goto loc_00177661;

loc_00177797: ;
    PUSH32(esp, 0x3DF8B0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001777A2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001777A2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001777C9; /* jne: not equal / not zero */

loc_001777A9: ;
    MEM32(esp + 0x24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 5;
    if (TEST_Z(_fa, _fb)) goto loc_00177702; /* je: equal / zero */

loc_001777BD: ;
    ecx = esi;
    PUSH32(esp, 0x001777C4u); RECOMP_ABI_CALL(0x00177440u, sub_00177440); /* call 0x00177440 */

loc_001777C4: ;
    goto loc_00177661;

loc_001777C9: ;
    PUSH32(esp, 0x3DF89C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001777D4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001777D4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001777FB; /* jne: not equal / not zero */

loc_001777DB: ;
    MEM32(esp + 0x24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 6;
    if (TEST_Z(_fa, _fb)) goto loc_00177702; /* je: equal / zero */

loc_001777EF: ;
    ecx = esi;
    PUSH32(esp, 0x001777F6u); RECOMP_ABI_CALL(0x00177520u, sub_00177520); /* call 0x00177520 */

loc_001777F6: ;
    goto loc_00177661;

loc_001777FB: ;
    PUSH32(esp, 0x3DF888);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00177806u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00177806: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017782D; /* jne: not equal / not zero */

loc_0017780D: ;
    MEM32(esp + 0x24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 7;
    if (TEST_Z(_fa, _fb)) goto loc_00177702; /* je: equal / zero */

loc_00177821: ;
    ecx = esi;
    PUSH32(esp, 0x00177828u); RECOMP_ABI_CALL(0x0017E490u, sub_0017E490); /* call 0x0017E490 */

loc_00177828: ;
    goto loc_00177661;

loc_0017782D: ;
    PUSH32(esp, 0x3DF870);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00177838u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00177838: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017785F; /* jne: not equal / not zero */

loc_0017783F: ;
    MEM32(esp + 0x24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 8;
    if (TEST_Z(_fa, _fb)) goto loc_00177702; /* je: equal / zero */

loc_00177853: ;
    ecx = esi;
    PUSH32(esp, 0x0017785Au); RECOMP_ABI_CALL(0x00176F50u, sub_00176F50); /* call 0x00176F50 */

loc_0017785A: ;
    goto loc_00177661;

loc_0017785F: ;
    PUSH32(esp, 0x3DF858);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0017786Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017786A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x24) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00177891; /* jne: not equal / not zero */

loc_00177875: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 9;
    if (TEST_Z(_fa, _fb)) goto loc_00177702; /* je: equal / zero */

loc_00177885: ;
    ecx = esi;
    PUSH32(esp, 0x0017788Cu); RECOMP_ABI_CALL(0x00177170u, sub_00177170); /* call 0x00177170 */

loc_0017788C: ;
    goto loc_00177661;

loc_00177891: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 0xA;
    if (TEST_Z(_fa, _fb)) goto loc_001778A4; /* je: equal / zero */

loc_0017789D: ;
    ecx = esi;
    PUSH32(esp, 0x001778A4u); RECOMP_ABI_CALL(0x0017D8B0u, sub_0017D8B0); /* call 0x0017D8B0 */

loc_001778A4: ;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    goto loc_0017766F;

}

/**
 * sub_001778C0
 * Original: 0x001778C0 - 0x001778DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001778C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001778C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001778C8u); RECOMP_ABI_CALL(0x001778E0u, sub_001778E0); /* call 0x001778E0 */

loc_001778C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001778D8; /* je: equal / zero */

loc_001778CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001778D5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001778D5: ;
    esp = esp + 4;

loc_001778D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001778E0
 * Original: 0x001778E0 - 0x001778E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001778E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001778E0: ;
    g_seh_ebp = ebp; sub_00176DA0(); return; /* tail jmp 0x00176DA0 */

}

/**
 * sub_001778F0
 * Original: 0x001778F0 - 0x001778F5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001778F0(void)
{

loc_001778F0: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x7C);
    esp += 4; return; /* ret */

}

/**
 * sub_00177900
 * Original: 0x00177900 - 0x00177913 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177900(void)
{

loc_00177900: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x7C);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x100) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177920
 * Original: 0x00177920 - 0x00177935 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177920(void)
{

loc_00177920: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx + 0x100);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00177930u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177930: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_00177980
 * Original: 0x00177980 - 0x00177991 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00177980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177980: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017798E; /* je: equal / zero */

loc_0017798A: ;
    eax = MEM32(eax + 0x64);
    esp += 4; return; /* ret */

loc_0017798E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001779A0
 * Original: 0x001779A0 - 0x001779C6 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001779A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001779A0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001779BF; /* je: equal / zero */

loc_001779A8: ;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001779C3; /* jle: less or equal (signed <=) */

loc_001779AA: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001779B9; /* je: equal / zero */

loc_001779B4: ;
    eax = MEM32(eax + 0x64);
    goto loc_001779BB;

loc_001779B9: ;
    eax = 0; /* xor self */

loc_001779BB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001779C3; /* jge: greater or equal (signed >=) */

loc_001779BF: ;
    MEM16(ecx + 0x7C) = LO16(edx);

loc_001779C3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001779D0
 * Original: 0x001779D0 - 0x00177A1D (77 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001779D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001779D0: ;
    SET_LO16(edx, MEM16(ecx + 0x7C));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001779F2; /* jl: less (signed <) */

loc_001779D9: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001779E8; /* je: equal / zero */

loc_001779E3: ;
    eax = MEM32(eax + 0x64);
    goto loc_001779EA;

loc_001779E8: ;
    eax = 0; /* xor self */

loc_001779EA: ;
    edx = SX16(LO16(edx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00177A12; /* jle: less or equal (signed <=) */

loc_001779F2: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177A01; /* je: equal / zero */

loc_001779FC: ;
    eax = MEM32(eax + 0x64);
    goto loc_00177A03;

loc_00177A01: ;
    eax = 0; /* xor self */

loc_00177A03: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    MEM16(ecx + 0x7C) = LO16(eax);

loc_00177A12: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x7C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00177A1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177A1C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00177A20
 * Original: 0x00177A20 - 0x00177AAE (142 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177A20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177A20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    /* nop */

loc_00177A30: ;
    eax = MEM32(edi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00177A3F; /* je: equal / zero */

loc_00177A3A: ;
    eax = MEM32(eax + 0x64);
    goto loc_00177A41;

loc_00177A3F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_00177A41: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00177AA7; /* jge: greater or equal (signed >=) */

loc_00177A45: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(edi);
    ecx = edi;
    PUSH32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_00177A8B; /* je: equal / zero */

loc_00177A52: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00177A55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177A55: ;
    esi = eax;
    ecx = ebx;
    /* nop */

loc_00177A60: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00177A84; /* jne: not equal / not zero */

loc_00177A68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00177A80; /* je: equal / zero */

loc_00177A6C: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00177A84; /* jne: not equal / not zero */

loc_00177A76: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00177A60; /* jne: not equal / not zero */

loc_00177A80: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00177A98;

loc_00177A84: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    goto loc_00177A98;

loc_00177A8B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00177A8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177A8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00177A95u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00177A95: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_00177A98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00177A9F; /* je: equal / zero */

loc_00177A9C: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00177A30;

loc_00177A9F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00177AA7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177AA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00177AB0
 * Original: 0x00177AB0 - 0x00177AFD (77 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177AB0: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00177AC1; /* je: equal / zero */

loc_00177ABC: ;
    esi = MEM32(eax + 0x64);
    goto loc_00177AC3;

loc_00177AC1: ;
    esi = 0; /* xor self */

loc_00177AC3: ;
    SET_LO16(edx, MEM16(ecx + 0x7C));
    edi = SX16(LO16(edx));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00177AE6; /* jle: less or equal (signed <=) */

loc_00177AD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177ADE; /* je: equal / zero */

loc_00177AD5: ;
    eax = MEM32(eax + 0x64);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx + 0x7C) = LO16(eax);
    esp += 4; return; /* ret */

loc_00177ADE: ;
    eax = 0; /* xor self */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx + 0x7C) = LO16(eax);
    esp += 4; return; /* ret */

loc_00177AE6: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00177AFC; /* jge: greater or equal (signed >=) */

loc_00177AEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177AFC; /* je: equal / zero */

loc_00177AEF: ;
    edx = MEM32(eax + 0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00177AFC; /* jle: less or equal (signed <=) */

loc_00177AF6: ;
    MEM16(ecx + 0x7C) = 0;

loc_00177AFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00177B00
 * Original: 0x00177B00 - 0x00177BDB (219 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177B00: ;
    eax = MEM32(ecx + 0x1F40);
    PUSH32(esp, esi);
    esi = ecx + 0x1F40;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177B2E; /* jne: not equal / not zero */

loc_00177B13: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00177BCC; /* jge: greater or equal (signed >=) */

loc_00177B22: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177B13; /* je: equal / zero */

loc_00177B2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177B3B; /* jne: not equal / not zero */

loc_00177B35: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00177B3B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177B45; /* jne: not equal / not zero */

loc_00177B3F: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00177B45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177B4F; /* jne: not equal / not zero */

loc_00177B49: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00177B4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177B5A; /* jne: not equal / not zero */

loc_00177B53: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177B53; /* je: equal / zero */

loc_00177B5A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00177BCC; /* jge: greater or equal (signed >=) */

loc_00177B5F: ;
    /* nop */

loc_00177B60: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00177BCC; /* jge: greater or equal (signed >=) */

loc_00177B66: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177B97; /* jne: not equal / not zero */

loc_00177B79: ;
    /* nop */

loc_00177B80: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00177BCC; /* jge: greater or equal (signed >=) */

loc_00177B8B: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177B80; /* je: equal / zero */

loc_00177B97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177BA4; /* jne: not equal / not zero */

loc_00177B9E: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00177BA4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177BAE; /* jne: not equal / not zero */

loc_00177BA8: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00177BAE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177BB8; /* jne: not equal / not zero */

loc_00177BB2: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00177BB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177BC7; /* jne: not equal / not zero */

loc_00177BBC: ;
    /* nop */

loc_00177BC0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177BC0; /* je: equal / zero */

loc_00177BC7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00177B60; /* jl: less (signed <) */

loc_00177BCC: ;
    edx = 0; /* xor self */
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00177BE0
 * Original: 0x00177BE0 - 0x00177C03 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177BE0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177C02; /* je: equal / zero */

loc_00177BEA: ;
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x4D));
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM8(eax + 0x4C) = 0xFF;
    MEM8(eax + 0x4D) = LO8(ecx);

loc_00177C02: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00177C10
 * Original: 0x00177C10 - 0x00177C1A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177C10(void)
{

loc_00177C10: ;
    eax = ecx;
    MEM32(eax + 0x64) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00177C20
 * Original: 0x00177C20 - 0x00177C3A (26 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177C20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177C35; /* je: equal / zero */

loc_00177C29: ;
    ecx = MEM32(ecx + 0x84);
    SET_LO8(eax, MEM8(eax + ecx));
    esp += 8; return; /* ret 4 */

loc_00177C35: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177C40
 * Original: 0x00177C40 - 0x00177C9F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177C40: ;
    edx = ecx;
    eax = MEM32(edx + 0x20E8);
    eax = MEM32(edx + eax * 4 + 0x1F50);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x20F0;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x20E8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    MEM32(edx + 0x20E8) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00177C89; /* jl: less (signed <) */

loc_00177C7F: ;
    MEM32(edx + 0x20E8) = 0;

loc_00177C89: ;
    MEM32(edx + 0x20EC) = MEM32(edx + 0x20EC) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x20EC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x2100);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x2100) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00177CA0
 * Original: 0x00177CA0 - 0x00177CAC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177CA0(void)
{

loc_00177CA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00177CA8u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00177CA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00177CB0
 * Original: 0x00177CB0 - 0x00177D47 (151 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177CB0: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00177CB8u); RECOMP_ABI_CALL(0x0017D4F0u, sub_0017D4F0); /* call 0x0017D4F0 */

loc_00177CB8: ;
    SET_LO16(eax, MEM16(edi + 0x7C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00177D45; /* jl: less (signed <) */

loc_00177CC5: ;
    ecx = MEM32(edi + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177CD4; /* je: equal / zero */

loc_00177CCF: ;
    edx = MEM32(ecx + 0x64);
    goto loc_00177CD6;

loc_00177CD4: ;
    edx = 0; /* xor self */

loc_00177CD6: ;
    eax = SX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00177D45; /* jge: greater or equal (signed >=) */

loc_00177CDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177CE7; /* je: equal / zero */

loc_00177CE2: ;
    SET_LO8(eax, MEM8(ecx + eax));
    goto loc_00177CE9;

loc_00177CE7: ;
    SET_LO8(eax, LO8(eax) | 0xFF);

loc_00177CE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    eax = ZX8(LO8(eax));
    PUSH32(esp, 0x457E24);
    esi = eax + eax * 4;
    eax = MEM32(edi + 0x50);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    esi = esi << 4;
    PUSH32(esp, eax);
    esi = esi + 0x573B48;
    PUSH32(esp, 0x00177D10u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_00177D10: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177D3C; /* je: equal / zero */

loc_00177D17: ;
    ecx = MEM32(edi + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0x457E24);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00177D2Eu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_00177D2E: ;
    edx = MEM32(eax);
    esp = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00177D39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177D39: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00177D3C: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00177D44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177D44: ;
    POP32(esp, esi);

loc_00177D45: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00177D50
 * Original: 0x00177D50 - 0x00177D8F (63 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177D50: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00177D8C; /* jl: less (signed <) */

loc_00177D58: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177D67; /* je: equal / zero */

loc_00177D62: ;
    ecx = MEM32(eax + 0x64);
    goto loc_00177D69;

loc_00177D67: ;
    ecx = 0; /* xor self */

loc_00177D69: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00177D8C; /* jge: greater or equal (signed >=) */

loc_00177D6D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177D77; /* je: equal / zero */

loc_00177D72: ;
    SET_LO8(eax, MEM8(eax + edx));
    goto loc_00177D79;

loc_00177D77: ;
    SET_LO8(eax, LO8(eax) | 0xFF);

loc_00177D79: ;
    ecx = MEM32(esp + 8);
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(eax + 0x573B88) = ecx;

loc_00177D8C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00177D90
 * Original: 0x00177D90 - 0x00177DE0 (80 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00177D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177D90: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00177DDB; /* jl: less (signed <) */

loc_00177D98: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177DA7; /* je: equal / zero */

loc_00177DA2: ;
    ecx = MEM32(eax + 0x64);
    goto loc_00177DA9;

loc_00177DA7: ;
    ecx = 0; /* xor self */

loc_00177DA9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00177DDB; /* jge: greater or equal (signed >=) */

loc_00177DAD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177DC7; /* je: equal / zero */

loc_00177DB2: ;
    SET_LO8(eax, MEM8(eax + edx));
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = MEM32(eax + 0x573B88);
    esp += 8; return; /* ret 4 */

loc_00177DC7: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = MEM32(eax + 0x573B88);
    esp += 8; return; /* ret 4 */

loc_00177DDB: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177DE0
 * Original: 0x00177DE0 - 0x00177DEB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177DE0(void)
{

loc_00177DE0: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00177DEAu); RECOMP_ABI_CALL(0x00177D90u, sub_00177D90); /* call 0x00177D90 */

loc_00177DEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00177DF0
 * Original: 0x00177DF0 - 0x00177E3E (78 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00177DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177DF0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00177E39; /* jl: less (signed <) */

loc_00177DF8: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177E07; /* je: equal / zero */

loc_00177E02: ;
    ecx = MEM32(eax + 0x64);
    goto loc_00177E09;

loc_00177E07: ;
    ecx = 0; /* xor self */

loc_00177E09: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00177E39; /* jge: greater or equal (signed >=) */

loc_00177E0D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177E26; /* je: equal / zero */

loc_00177E12: ;
    SET_LO8(eax, MEM8(eax + edx));
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x573B48;
    esp += 8; return; /* ret 4 */

loc_00177E26: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x573B48;
    esp += 8; return; /* ret 4 */

loc_00177E39: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177E40
 * Original: 0x00177E40 - 0x00177F37 (247 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177F25; /* je: equal / zero */

loc_00177E4F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    SET_LO16(eax, MEM16(esi + 0x7C));
    edx = SX16(LO16(eax));
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00177E5F; /* jge: greater or equal (signed >=) */

loc_00177E5C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00177E62;

loc_00177E5F: ;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00177E66; /* jle: less or equal (signed <=) */

loc_00177E61: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00177E62: ;
    MEM16(esi + 0x7C) = LO16(eax);

loc_00177E66: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177E75; /* je: equal / zero */

loc_00177E70: ;
    ecx = MEM32(eax + 0x64);
    goto loc_00177E77;

loc_00177E75: ;
    ecx = 0; /* xor self */

loc_00177E77: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00177E88; /* jle: less or equal (signed <=) */

loc_00177E82: ;
    MEM16(esi + 0x7C) = 0;

loc_00177E88: ;
    _fa = (uint32_t)(MEM16(esi + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x7C), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00177E9F; /* jge: greater or equal (signed >=) */

loc_00177E8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177E98; /* je: equal / zero */

loc_00177E93: ;
    eax = MEM32(eax + 0x64);
    goto loc_00177E9A;

loc_00177E98: ;
    eax = 0; /* xor self */

loc_00177E9A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 0x7C) = LO16(eax);

loc_00177E9F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177EB5; /* je: equal / zero */

loc_00177EA7: ;
    PUSH32(esp, 0x00177EACu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00177EAC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00177EB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177EB5: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177F1F; /* je: equal / zero */

loc_00177EBC: ;
    MEM8(0x571864) = MEM8(0x571864) & 0xF0;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177ED7; /* je: equal / zero */

loc_00177ECC: ;
    ecx = MEM32(esi + 0x84);
    SET_LO8(eax, MEM8(eax + ecx));
    goto loc_00177ED9;

loc_00177ED7: ;
    SET_LO8(eax, LO8(eax) | 0xFF);

loc_00177ED9: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x573B48;
    if ((eax == 0)) goto loc_00177F12; /* je: equal / zero */

loc_00177EE9: ;
    SET_LO8(ecx, MEM8(0x571864));
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    SET_LO8(ecx, LO8(ecx) | 1);
    PUSH32(esp, 0x571758);
    MEM8(0x571864) = LO8(ecx);
    PUSH32(esp, 0x00177F08u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00177F08: ;
    esp = esp + 0xC;
    MEM8(0x571857) = 0;

loc_00177F12: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x571758);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x00177F1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177F1C: ;
    esp = esp + 8;

loc_00177F1F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00177F25: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00177F33u); RECOMP_ABI_CALL(0x00200190u, sub_00200190); /* call 0x00200190 */

loc_00177F33: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00177F40
 * Original: 0x00177F40 - 0x001780CD (397 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177F40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x80);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177F59; /* jne: not equal / not zero */

loc_00177F52: ;
    eax = 0x3C806C;
    goto loc_00177F6F;

loc_00177F59: ;
    PUSH32(esp, 0x00177F5Eu); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00177F5E: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x1008;

loc_00177F6F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00177F75u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00177F75: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178056; /* je: equal / zero */

loc_00177F80: ;
    eax = MEM32(edi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177F8F; /* je: equal / zero */

loc_00177F8A: ;
    ecx = MEM32(eax + 0x64);
    goto loc_00177F91;

loc_00177F8F: ;
    ecx = 0; /* xor self */

loc_00177F91: ;
    SET_LO16(eax, MEM16(edi + 0x7C));
    edx = SX16(LO16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178056; /* jge: greater or equal (signed >=) */

loc_00177FA0: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00178056; /* je: equal / zero */

loc_00177FAA: ;
    esi = MEM32(edi + 0x80);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00177FBB; /* jne: not equal / not zero */

loc_00177FB4: ;
    eax = 0x3C806C;
    goto loc_00177FD1;

loc_00177FBB: ;
    PUSH32(esp, 0x00177FC0u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00177FC0: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x1008;

loc_00177FD1: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x575C50);
    PUSH32(esp, 0x00177FE1u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00177FE1: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x3D3FF8);
    ecx = 0x575C50;
    MEM8(0x575D4F) = 0;
    PUSH32(esp, 0x00177FFAu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_00177FFA: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017800E; /* je: equal / zero */

loc_00178003: ;
    edx = MEM32(edi + 0x84);
    SET_LO8(eax, MEM8(eax + edx));
    goto loc_00178010;

loc_0017800E: ;
    SET_LO8(eax, LO8(eax) | 0xFF);

loc_00178010: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x573B48;
    PUSH32(esp, eax);
    ecx = 0x575C50;
    PUSH32(esp, 0x00178029u); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_00178029: ;
    PUSH32(esp, 0x0017802Eu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0017802E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x575C50);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017803Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017803A: ;
    eax = 0x575C50;
    edx = eax + 1;

loc_00178042: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00178042; /* jne: not equal / not zero */

loc_00178049: ;
    eax = eax - edx;
    MEM32(esp + 0xC) = eax;
    if ((eax == 0)) goto loc_00178056; /* je: equal / zero */

loc_00178051: ;
    ebp = 3;

loc_00178056: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0017805Cu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0017805C: ;
    esi = MEM32(edi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0017806C; /* jne: not equal / not zero */

loc_00178065: ;
    eax = 0x3C806C;
    goto loc_00178082;

loc_0017806C: ;
    PUSH32(esp, 0x00178071u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00178071: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x1008;

loc_00178082: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017808Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017808A: ;
    esi = MEM32(edi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00178099; /* jne: not equal / not zero */

loc_00178092: ;
    eax = 0x3C806C;
    goto loc_001780AF;

loc_00178099: ;
    PUSH32(esp, 0x0017809Eu); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017809E: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x1008;

loc_001780AF: ;
    edx = eax + 1;

loc_001780B2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001780B2; /* jne: not equal / not zero */

loc_001780B9: ;
    eax = eax - edx;
    MEM32(esp + 0xC) = eax;
    eax = 3;
    if ((eax != 0)) goto loc_001780C8; /* jne: not equal / not zero */

loc_001780C6: ;
    eax = ebp;

loc_001780C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001780D0
 * Original: 0x001780D0 - 0x00178147 (119 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001780D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001780D0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x84);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    edi = edi;

loc_001780E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001780E9; /* je: equal / zero */

loc_001780E4: ;
    eax = MEM32(esi + 0x64);
    goto loc_001780EB;

loc_001780E9: ;
    eax = 0; /* xor self */

loc_001780EB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178142; /* jge: greater or equal (signed >=) */

loc_001780EF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0017812E; /* jl: less (signed <) */

loc_001780F3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001780FC; /* je: equal / zero */

loc_001780F7: ;
    eax = MEM32(esi + 0x64);
    goto loc_001780FE;

loc_001780FC: ;
    eax = 0; /* xor self */

loc_001780FE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017812E; /* jge: greater or equal (signed >=) */

loc_00178102: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017811B; /* je: equal / zero */

loc_00178107: ;
    SET_LO8(eax, MEM8(esi + edx));
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = MEM32(eax + 0x573B88);
    goto loc_00178130;

loc_0017811B: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = MEM32(eax + 0x573B88);
    goto loc_00178130;

loc_0017812E: ;
    eax = 0; /* xor self */

loc_00178130: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00178137; /* je: equal / zero */

loc_00178134: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001780E0;

loc_00178137: ;
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x68)); return; /* indirect tail jmp */

loc_00178142: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00178150
 * Original: 0x00178150 - 0x00178218 (200 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178150(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00178150: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    edx = MEM32(ecx + 0x84);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    MEM32(esp + 0x14) = edx;
    goto loc_00178170;

    /* nop */

loc_00178170: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00178179; /* je: equal / zero */

loc_00178174: ;
    eax = MEM32(edx + 0x64);
    goto loc_0017817B;

loc_00178179: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0017817B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0017820E; /* jge: greater or equal (signed >=) */

loc_00178183: ;
    SET_LO8(ebx, MEM8(ebp + 0x10C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001781E5; /* je: equal / zero */

loc_0017818E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00178198; /* je: equal / zero */

loc_00178193: ;
    SET_LO8(eax, MEM8(edx + edi));
    goto loc_0017819A;

loc_00178198: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xFF);

loc_0017819A: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    esi = ebp;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x573B48)) >> 32) & 1);
    eax = eax + 0x573B48;
    /* nop */

loc_001781B0: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001781D4; /* jne: not equal / not zero */

loc_001781B8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001781D0; /* je: equal / zero */

loc_001781BC: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001781D4; /* jne: not equal / not zero */

loc_001781C6: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001781B0; /* jne: not equal / not zero */

loc_001781D0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001781D9;

loc_001781D4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_001781D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_001781F8; /* je: equal / zero */

loc_001781E1: ;
    edx = MEM32(esp + 0x14);

loc_001781E5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001781F2; /* je: equal / zero */

loc_001781EA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x100), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00178208; /* je: equal / zero */

loc_001781F2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00178170;

loc_001781F8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001781FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001781FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00178208: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0017820Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017820E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00178220
 * Original: 0x00178220 - 0x001782BF (159 bytes, 71 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178220(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00178220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    /* nop */

loc_00178230: ;
    eax = MEM32(ebx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017823F; /* je: equal / zero */

loc_0017823A: ;
    ecx = MEM32(eax + 0x64);
    goto loc_00178241;

loc_0017823F: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */

loc_00178241: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001782B5; /* jge: greater or equal (signed >=) */

loc_00178245: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0017824F; /* je: equal / zero */

loc_0017824A: ;
    SET_LO8(eax, MEM8(eax + edi));
    goto loc_00178251;

loc_0017824F: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xFF);

loc_00178251: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x573B48)) >> 32) & 1);
    eax = eax + 0x573B48;
    if ((eax == 0)) goto loc_001782A9; /* je: equal / zero */

loc_00178261: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017829B; /* je: equal / zero */

loc_00178269: ;
    esi = ebp;
    goto loc_00178270;

    /* nop */

loc_00178270: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00178294; /* jne: not equal / not zero */

loc_00178278: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00178290; /* je: equal / zero */

loc_0017827C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00178294; /* jne: not equal / not zero */

loc_00178286: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00178270; /* jne: not equal / not zero */

loc_00178290: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001782A5;

loc_00178294: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    goto loc_001782A5;

loc_0017829B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001782A2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001782A2: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_001782A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001782AC; /* je: equal / zero */

loc_001782A9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00178230;

loc_001782AC: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001782B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001782C0
 * Original: 0x001782C0 - 0x001782ED (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001782C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001782C0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001782E8; /* jl: less (signed <) */

loc_001782C8: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001782E8; /* jge: greater or equal (signed >=) */

loc_001782D3: ;
    eax = ZX8(MEM8(eax + edx));
    eax = eax + eax * 4;
    eax = eax << 4;
    SET_LO8(eax, MEM8(eax + 0x573B95));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_001782E8: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001782F0
 * Original: 0x001782F0 - 0x00178329 (57 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001782F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001782F0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00178326; /* jl: less (signed <) */

loc_001782F8: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178326; /* jge: greater or equal (signed >=) */

loc_00178303: ;
    eax = ZX8(MEM8(eax + edx));
    SET_LO8(edx, MEM8(esp + 8));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x573B48;
    SET_LO8(ecx, MEM8(eax + 0x4D));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(edx, MEM8(eax + 0x4D));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x4D) = LO8(edx);

loc_00178326: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00178330
 * Original: 0x00178330 - 0x00178392 (98 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178330(void)
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

loc_00178330: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00178368; /* jl: less (signed <) */

loc_00178338: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178368; /* jge: greater or equal (signed >=) */

loc_00178343: ;
    eax = ZX8(MEM8(eax + edx));
    eax = eax + eax * 4;
    eax = eax << 4;
    ecx = MEM32(eax + 0x573B8C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017835Fu); RECOMP_ABI_CALL(0x000758D0u, sub_000758D0); /* call 0x000758D0 */

loc_0017835F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00178368: ;
    fp_push(MEMF(0x5BCA00)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x5BCA04);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x5BCA08);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x5BCA0C);
    MEM32(eax + 0xC) = edx;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001783A0
 * Original: 0x001783A0 - 0x001783D7 (55 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001783A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001783A0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001783D3; /* jl: less (signed <) */

loc_001783A9: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001783D2; /* jge: greater or equal (signed >=) */

loc_001783B5: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001783BFu); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_001783BF: ;
    ecx = ZX8(MEM8(esi + edi));
    ecx = ecx + ecx * 4;
    esp = esp + 4;
    ecx = ecx << 4;
    MEM32(ecx + 0x573B8C) = eax;

loc_001783D2: ;
    POP32(esp, esi);

loc_001783D3: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001783E0
 * Original: 0x001783E0 - 0x00178442 (98 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001783E0(void)
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

loc_001783E0: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00178418; /* jl: less (signed <) */

loc_001783E8: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178418; /* jge: greater or equal (signed >=) */

loc_001783F3: ;
    eax = ZX8(MEM8(eax + edx));
    eax = eax + eax * 4;
    eax = eax << 4;
    ecx = MEM32(eax + 0x573B90);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017840Fu); RECOMP_ABI_CALL(0x000758D0u, sub_000758D0); /* call 0x000758D0 */

loc_0017840F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00178418: ;
    fp_push(MEMF(0x5BCA00)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x5BCA04);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x5BCA08);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x5BCA0C);
    MEM32(eax + 0xC) = edx;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00178450
 * Original: 0x00178450 - 0x00178487 (55 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178450: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00178483; /* jl: less (signed <) */

loc_00178459: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178482; /* jge: greater or equal (signed >=) */

loc_00178465: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017846Fu); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_0017846F: ;
    ecx = ZX8(MEM8(esi + edi));
    ecx = ecx + ecx * 4;
    esp = esp + 4;
    ecx = ecx << 4;
    MEM32(ecx + 0x573B90) = eax;

loc_00178482: ;
    POP32(esp, esi);

loc_00178483: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00178490
 * Original: 0x00178490 - 0x001784CD (61 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178490: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001784C7; /* jl: less (signed <) */

loc_00178498: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001784C7; /* jge: greater or equal (signed >=) */

loc_001784A3: ;
    eax = ZX8(MEM8(eax + edx));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x573B48;
    SET_LO8(eax, MEM8(eax + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001784C1; /* jne: not equal / not zero */

loc_001784B9: ;
    eax = 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

loc_001784C1: ;
    eax = ZX8(LO8(eax));
    esp += 8; return; /* ret 4 */

loc_001784C7: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001784D0
 * Original: 0x001784D0 - 0x0017850F (63 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001784D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001784D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0017850B; /* jl: less (signed <) */

loc_001784D9: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x64) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017850B; /* jge: greater or equal (signed >=) */

loc_001784E4: ;
    eax = ZX8(MEM8(eax + esi));
    ecx = MEM32(esp + 0xC);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x573B48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00178503; /* jl: less (signed <) */

loc_001784FB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00178508; /* jle: less or equal (signed <=) */

loc_00178503: ;
    ecx = 0xFF;

loc_00178508: ;
    MEM8(eax + 0x4C) = LO8(ecx);

loc_0017850B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00178510
 * Original: 0x00178510 - 0x0017854F (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178510(void)
{

loc_00178510: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00178519u); RECOMP_ABI_CALL(0x00177C40u, sub_00177C40); /* call 0x00177C40 */

loc_00178519: ;
    esi = eax;
    eax = esi + esi * 4;
    eax = eax << 4;
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00178529u); RECOMP_ABI_CALL(0x00177BE0u, sub_00177BE0); /* call 0x00177BE0 */

loc_00178529: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = edi + ecx * 4 + 0x1F40;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178550
 * Original: 0x00178550 - 0x001785AD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178550: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x20E4) = esi;
    MEM32(ecx + 0x20E8) = esi;
    MEM32(ecx + 0x20EC) = esi;
    edx = 0; /* xor self */
    goto loc_00178570;

    /* nop */

loc_00178570: ;
    eax = MEM32(ecx + 0x20E4);
    edi = MEM32(ecx + 0x20EC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    MEM32(ecx + 0x20E4) = eax;
    MEM32(ecx + 0x20EC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0017859C; /* jl: less (signed <) */

loc_0017858F: ;
    MEM32(ecx + 0x20E4) = esi;
    eax = 0x63;
    goto loc_0017859D;

loc_0017859C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0017859D: ;
    MEM32(ecx + eax * 4 + 0x1F50) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00178570; /* jl: less (signed <) */

loc_001785AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001785B0
 * Original: 0x001785B0 - 0x00178769 (441 bytes, 136 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001785B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001785B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3546C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x001785D8u); RECOMP_ABI_CALL(0x0017D080u, sub_0017D080); /* call 0x0017D080 */

loc_001785D8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF934);
    ecx = esp + 0x18;
    PUSH32(esp, 0x001785E8u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_001785E8: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x001785FCu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_001785FC: ;
    ebx = ebx | 0xFFFFFFFFu;
    ecx = esp + 0x10;
    esi = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x0017860Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017860E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017864E; /* je: equal / zero */

loc_00178612: ;
    ecx = esi;
    PUSH32(esp, 0x00178619u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00178619: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178644; /* je: equal / zero */

loc_0017861F: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00178644; /* je: equal / zero */

loc_00178624: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017862Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0017862A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00178635u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00178635: ;
    ecx = eax;
    PUSH32(esp, 0x0017863Cu); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_0017863C: ;
    MEM32(ebp + 0x80) = eax;
    goto loc_0017864E;

loc_00178644: ;
    MEM32(ebp + 0x80) = 0;

loc_0017864E: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178726; /* je: equal / zero */

loc_00178659: ;
    edi = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    esi = ecx;
    if ((ecx == 0)) goto loc_00178726; /* je: equal / zero */

loc_0017866F: ;
    /* nop */

loc_00178670: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF92C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00178680u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00178680: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x3C) = 1;
    PUSH32(esp, 0x00178694u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00178694: ;
    ecx = esp + 0x10;
    edi = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x001786A3u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_001786A3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001786C0; /* je: equal / zero */

loc_001786A7: ;
    PUSH32(esp, 0x3CC6B4);
    ecx = edi;
    PUSH32(esp, 0x001786B3u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001786B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001786B9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001786B9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178715; /* je: equal / zero */

loc_001786C0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2D78);
    ecx = esp + 0x28;
    PUSH32(esp, 0x001786D0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_001786D0: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x3C) = 2;
    PUSH32(esp, 0x001786E4u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_001786E4: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x001786F3u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_001786F3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178715; /* je: equal / zero */

loc_001786F7: ;
    eax = MEM32(ebp);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0x00178707u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00178707: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00178711u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178711: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00178754; /* je: equal / zero */

loc_00178715: ;
    ecx = esi;
    PUSH32(esp, 0x0017871Cu); RECOMP_ABI_CALL(0x00126040u, sub_00126040); /* call 0x00126040 */

loc_0017871C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00178670; /* jne: not equal / not zero */

loc_00178726: ;
    eax = MEM32(ebp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178754; /* je: equal / zero */

loc_0017872D: ;
    SET_LO8(ebx, MEM8(0x571864));
    SET_LO8(ebx, LO8(ebx) & 0xF0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x571758);
    MEM8(0x571864) = LO8(ebx);
    { uint32_t _icall_target = MEM32(ebp + 0x34); PUSH32(esp, 0x00178744u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178744: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x571758);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00178754u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178754: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00178770
 * Original: 0x00178770 - 0x00178914 (420 bytes, 142 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00178770: ;
    if (getenv("XML1_CHARACTER_TRACE") && MEM32(esp+4))
        fprintf(stderr, "[ROSTER LIST] owner=%08X caller=%08X name=%s\n", ecx, MEM32(esp),
            (const char *)((uintptr_t)g_xbox_mem_offset + MEM32(esp+4)));
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(MEM32(0x575C48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x575C48), 0x64 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00178797; /* je: equal / zero */

loc_00178787: ;
    eax = MEM32(ebx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00178797; /* je: equal / zero */

loc_00178791: ;
    _fa = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x64), 0x60 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001787A1; /* jne: not equal / not zero */

loc_00178797: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_001787A1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x573B48;
    PUSH32(esp, 0x001787AEu); RECOMP_ABI_CALL(0x00178510u, sub_00178510); /* call 0x00178510 */

loc_001787AE: ;
    esi = eax + eax * 4;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x40);
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    PUSH32(esp, eax);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x573B48)) >> 32) & 1);
    esi = esi + 0x573B48;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001787CBu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001787CB: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esi + 0x3F) = 0;
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_001788F4; /* je: equal / zero */

loc_001787E4: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    goto loc_001787F0;

    /* nop */
    /* nop */

loc_001787F0: ;
    edi = MEM32(ebx + 0x84);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0x64) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001788F0; /* jge: greater or equal (signed >=) */

loc_001787FF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00178809; /* je: equal / zero */

loc_00178804: ;
    SET_LO8(eax, MEM8(edi + ebp));
    goto loc_0017880B;

loc_00178809: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xFF);

loc_0017880B: ;
    esi = MEM32(esp + 0x20);
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x573B48)) >> 32) & 1);
    eax = eax + 0x573B48;
    /* nop */

loc_00178820: ;
    SET_LO8(edx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00178844; /* jne: not equal / not zero */

loc_00178828: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00178840; /* je: equal / zero */

loc_0017882C: ;
    SET_LO8(edx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00178844; /* jne: not equal / not zero */

loc_00178836: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00178820; /* jne: not equal / not zero */

loc_00178840: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00178849;

loc_00178844: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00178849: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001788A1; /* jge: greater or equal (signed >=) */

loc_0017884D: ;
    ecx = MEM32(edi + 0x64);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    MEM8(ecx) = LO8(eax);
    MEM32(edi + 0x64) = MEM32(edi + 0x64) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebx + 0x84);
    eax = MEM32(edx + 0x64);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00178888; /* jle: less or equal (signed <=) */

loc_00178867: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00178877; /* je: equal / zero */

loc_0017886B: ;
    ecx = MEM32(ebx + 0x84);
    SET_LO8(ecx, MEM8(ecx + eax + -1));
    goto loc_0017887A;

loc_00178877: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | 0xFF);

loc_0017887A: ;
    edx = MEM32(ebx + 0x84);
    MEM8(eax + edx) = LO8(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00178867; /* jg: greater (signed >) */

loc_00178888: ;
    eax = MEM32(ebx + 0x84);
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM8(eax + ebp) = LO8(ecx);
    SET_LO8(eax, 1);
    MEM32(esp + 0x14) = ebp;
    MEM8(esp + 0x13) = LO8(eax);
    goto loc_001788A5;

loc_001788A1: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_001788A5: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001787F0; /* je: equal / zero */

loc_001788AE: ;
    ecx = MEM32(esp + 0x14);

loc_001788B2: ;
    eax = MEM32(ebx + 0x84);
    edx = MEM32(eax + 0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_001788C6; /* je: equal / zero */

loc_001788C2: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x39) = MEM8(ebx + 0x39) & 0xF7;

loc_001788C6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001788E7; /* jle: less or equal (signed <=) */

loc_001788CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_001788E7; /* jl: less (signed <) */

loc_001788CF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x64) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001788E7; /* jge: greater or equal (signed >=) */

loc_001788D4: ;
    eax = ZX8(MEM8(eax + ecx));
    eax = eax + eax * 4;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x573B48)) >> 32) & 1);
    eax = eax + 0x573B48;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x4D) = MEM8(eax + 0x4D) | 1;

loc_001788E7: ;
    eax = ecx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_001788F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001788AE; /* jne: not equal / not zero */

loc_001788F4: ;
    eax = MEM32(ebx + 0x84);
    edx = MEM32(eax + 0x64);
    SET_LO8(ecx, MEM8(esp + 0x18));
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    MEM8(edx) = LO8(ecx);
    MEM32(eax + 0x64) = MEM32(eax + 0x64) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebx + 0x84);
    ecx = MEM32(edx + 0x64);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001788B2;

}

/**
 * sub_00178920
 * Original: 0x00178920 - 0x0017899F (127 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178920: ;
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
    edi = MEM32(ecx + eax + 0x1F40);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0x1F40) = edi;
    MEM32(ecx + eax + 0x20F0) = MEM32(ecx + eax + 0x20F0) & edx;
    ecx = MEM32(eax + 0x20E4);
    edx = MEM32(eax + 0x20EC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    MEM32(eax + 0x20E4) = ecx;
    MEM32(eax + 0x20EC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00178985; /* jl: less (signed <) */

loc_00178974: ;
    MEM32(eax + 0x20E4) = 0;
    ecx = 0x63;
    goto loc_00178986;

loc_00178985: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00178986: ;
    MEM32(eax + ecx * 4 + 0x1F50) = esi;
    ecx = MEM32(eax + 0x2100);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x2100) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001789A0
 * Original: 0x001789A0 - 0x001789FD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001789A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001789A0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x2FC) = esi;
    MEM32(ecx + 0x300) = esi;
    MEM32(ecx + 0x304) = esi;
    edx = 0; /* xor self */
    goto loc_001789C0;

    /* nop */

loc_001789C0: ;
    eax = MEM32(ecx + 0x2FC);
    edi = MEM32(ecx + 0x304);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM32(ecx + 0x2FC) = eax;
    MEM32(ecx + 0x304) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001789EC; /* jl: less (signed <) */

loc_001789DF: ;
    MEM32(ecx + 0x2FC) = esi;
    eax = 6;
    goto loc_001789ED;

loc_001789EC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001789ED: ;
    MEM32(ecx + eax * 4 + 0x2DC) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001789C0; /* jl: less (signed <) */

loc_001789FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178A00
 * Original: 0x00178A00 - 0x00178A59 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_00178A06: ;
    eax = MEM32(edi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178A15; /* je: equal / zero */

loc_00178A10: ;
    ecx = MEM32(eax + 0x64);
    goto loc_00178A17;

loc_00178A15: ;
    ecx = 0; /* xor self */

loc_00178A17: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178A47; /* jge: greater or equal (signed >=) */

loc_00178A1B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00178A34; /* je: equal / zero */

loc_00178A20: ;
    SET_LO8(eax, MEM8(eax + esi));
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = 0x573B48;
    PUSH32(esp, 0x00178A31u); RECOMP_ABI_CALL(0x00178920u, sub_00178920); /* call 0x00178920 */

loc_00178A31: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00178A06;

loc_00178A34: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = 0x573B48;
    PUSH32(esp, 0x00178A44u); RECOMP_ABI_CALL(0x00178920u, sub_00178920); /* call 0x00178920 */

loc_00178A44: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00178A06;

loc_00178A47: ;
    ecx = MEM32(edi + 0x84);
    POP32(esp, edi);
    MEM32(ecx + 0x64) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178A60
 * Original: 0x00178A60 - 0x00178A65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178A60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00178A60: ;
    g_seh_ebp = ebp; sub_00177B00(); return; /* tail jmp 0x00177B00 */

}

/**
 * sub_00178A70
 * Original: 0x00178A70 - 0x00178ABC (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178A70(void)
{

loc_00178A70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    ecx = esi + 0x1F40;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(esi + 0x20E4) = eax;
    MEM32(esi + 0x20E8) = eax;
    MEM32(esi + 0x20EC) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0x20F0;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    ecx = esi;
    MEM32(esi + 0x2100) = eax;
    PUSH32(esp, 0x00178AB8u); RECOMP_ABI_CALL(0x00178550u, sub_00178550); /* call 0x00178550 */

loc_00178AB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178AC0
 * Original: 0x00178AC0 - 0x00178AD0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178AC0(void)
{

loc_00178AC0: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 7);
    PUSH32(esp, 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00178ACFu); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00178ACF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00178AD0
 * Original: 0x00178AD0 - 0x00178B12 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178AD0(void)
{

loc_00178AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x177CA0);
    PUSH32(esp, 7);
    esi = ecx;
    PUSH32(esp, 0x68);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00178AE7u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_00178AE7: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x2FC) = eax;
    MEM32(esi + 0x300) = eax;
    MEM32(esi + 0x304) = eax;
    MEM32(esi + 0x308) = eax;
    ecx = esi;
    MEM32(esi + 0x30C) = eax;
    PUSH32(esp, 0x00178B0Eu); RECOMP_ABI_CALL(0x001789A0u, sub_001789A0); /* call 0x001789A0 */

loc_00178B0E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178B20
 * Original: 0x00178B20 - 0x00178B42 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178B20(void)
{

loc_00178B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00178B2Eu); RECOMP_ABI_CALL(0x00177900u, sub_00177900); /* call 0x00177900 */

loc_00178B2E: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    MEM32(edi + 0x104) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00178B50
 * Original: 0x00178B50 - 0x00178B85 (53 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178B50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00178B5Eu); RECOMP_ABI_CALL(0x00177920u, sub_00177920); /* call 0x00177920 */

loc_00178B5E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178B7E; /* je: equal / zero */

loc_00178B62: ;
    SET_LO16(eax, MEM16(edi + 0x104));
    edx = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA4) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00178B77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178B77: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00178B7E: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00178B90
 * Original: 0x00178B90 - 0x00178C01 (113 bytes, 47 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178B90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00178B90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0x00178BAFu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00178BAF: ;
    ebp = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    eax = 0; /* xor self */
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    edi = ebp;
    edx = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if (TEST_Z(_fa, _fb)) goto loc_00178BF7; /* je: equal / zero */

loc_00178BC6: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00178BF7; /* je: equal / zero */

loc_00178BCB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x28) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178BF7; /* jge: greater or equal (signed >=) */

loc_00178BD1: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(eax + 0xA1));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178BEB; /* jge: greater or equal (signed >=) */

loc_00178BE0: ;
    _fa = (uint32_t)(MEM32(ebp + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + esi * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00178BEB; /* jne: not equal / not zero */

loc_00178BE7: ;
    MEM32(ebp + esi * 4) = edx;

loc_00178BEB: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00178BF4; /* jne: not equal / not zero */

loc_00178BF0: ;
    MEM8(edx) = 0;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00178BF4: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00178BC6; /* jne: not equal / not zero */

loc_00178BF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00178C10
 * Original: 0x00178C10 - 0x00178C15 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178C10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00178C10: ;
    g_seh_ebp = ebp; sub_00173160(); return; /* tail jmp 0x00173160 */

}

/**
 * sub_00178C20
 * Original: 0x00178C20 - 0x00178C38 (24 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178C20(void)
{

loc_00178C20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00178C2Du); RECOMP_ABI_CALL(0x001779A0u, sub_001779A0); /* call 0x001779A0 */

loc_00178C2D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00178C34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178C34: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00178C40
 * Original: 0x00178C40 - 0x00178CDD (157 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00178C49u); RECOMP_ABI_CALL(0x00177AB0u, sub_00177AB0); /* call 0x00177AB0 */

loc_00178C49: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x7C));
    edi = SX16(LO16(eax));
    edx = edi;
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178C67; /* jge: greater or equal (signed >=) */

loc_00178C62: ;
    eax = eax + 0xFFFFFFFEu;
    goto loc_00178C82;

loc_00178C67: ;
    SET_LO8(edx, MEM8(esi + 0xA0));
    PUSH32(esp, ebx);
    ebx = ZX8(LO8(edx));
    ebx = ebx - edi;
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_00178C89; /* jge: greater or equal (signed >=) */

loc_00178C7B: ;
    SET_LO16(ecx, ZX8(LO8(edx)));
    eax = eax - ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00178C82: ;
    MEM16(esi + 0xA4) = LO16(eax);

loc_00178C89: ;
    edi = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    ecx = esi;
    PUSH32(esp, 0x00178C97u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00178C97: ;
    edx = ZX8(MEM8(esi + 0xA0));
    eax = eax - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178CA8; /* jge: greater or equal (signed >=) */

loc_00178CA4: ;
    eax = edi;
    goto loc_00178CB8;

loc_00178CA8: ;
    ecx = esi;
    PUSH32(esp, 0x00178CAFu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00178CAF: ;
    ecx = ZX8(MEM8(esi + 0xA0));
    eax = eax - ecx;

loc_00178CB8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    MEM16(esi + 0xA4) = LO16(eax);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00178CD1; /* jle: less or equal (signed <=) */

loc_00178CC4: ;
    eax = SX16(LO16(eax));
    POP32(esp, edi);
    MEM16(esi + 0xA4) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00178CD1: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM16(esi + 0xA4) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178CE0
 * Original: 0x00178CE0 - 0x00178D7B (155 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178D15; /* je: equal / zero */

loc_00178CED: ;
    _fa = (uint32_t)(MEM8(esi + 0x218)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x218), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178D15; /* je: equal / zero */

loc_00178CF6: ;
    PUSH32(esp, 0x00178CFBu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00178CFB: ;
    ecx = MEM32(esi + 0xA8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00178D0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178D0E: ;
    MEM8(esi + 0x218) = MEM8(esi + 0x218) & 0xFE;

loc_00178D15: ;
    eax = MEM32(esi + 0x214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178D47; /* je: equal / zero */

loc_00178D1F: ;
    _fa = (uint32_t)(MEM8(esi + 0x218)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x218), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178D47; /* je: equal / zero */

loc_00178D28: ;
    PUSH32(esp, 0x00178D2Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00178D2D: ;
    ecx = MEM32(esi + 0x214);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00178D40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178D40: ;
    MEM8(esi + 0x218) = MEM8(esi + 0x218) & 0xFB;

loc_00178D47: ;
    eax = MEM32(esi + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178D79; /* je: equal / zero */

loc_00178D51: ;
    _fa = (uint32_t)(MEM8(esi + 0x218)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x218), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178D79; /* je: equal / zero */

loc_00178D5A: ;
    PUSH32(esp, 0x00178D5Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00178D5F: ;
    ecx = MEM32(esi + 0x210);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00178D72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178D72: ;
    MEM8(esi + 0x218) = MEM8(esi + 0x218) & 0xFD;

loc_00178D79: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178D80
 * Original: 0x00178D80 - 0x00178E07 (135 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178D80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00178D80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0xA8;
    if (TEST_Z(_fa, _fb)) goto loc_00178DC7; /* je: equal / zero */

loc_00178D94: ;
    _fa = (uint32_t)(MEM8(edi + 0x218)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x218), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178DB8; /* je: equal / zero */

loc_00178D9D: ;
    PUSH32(esp, 0x00178DA2u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00178DA2: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00178DB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178DB1: ;
    MEM8(edi + 0x218) = MEM8(edi + 0x218) & 0xFE;

loc_00178DB8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00178DBEu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00178DBE: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00178DC7: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178E02; /* je: equal / zero */

loc_00178DCF: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00178E02; /* je: equal / zero */

loc_00178DD4: ;
    PUSH32(esp, 0x00178DD9u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00178DD9: ;
    edx = MEM32(eax);
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x00178DEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178DEB: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00178E02; /* je: equal / zero */

loc_00178DF3: ;
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x40)); return; /* indirect tail jmp */

loc_00178E02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00178E10
 * Original: 0x00178E10 - 0x00178E9D (141 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x210;
    if (TEST_Z(_fa, _fb)) goto loc_00178E57; /* je: equal / zero */

loc_00178E24: ;
    _fa = (uint32_t)(MEM8(esi + 0x218)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x218), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178E48; /* je: equal / zero */

loc_00178E2D: ;
    PUSH32(esp, 0x00178E32u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00178E32: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00178E41u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178E41: ;
    MEM8(esi + 0x218) = MEM8(esi + 0x218) & 0xFD;

loc_00178E48: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00178E4Eu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00178E4E: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_00178E57: ;
    eax = MEM32(esi + 0x214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = esi + 0x214;
    if (TEST_Z(_fa, _fb)) goto loc_00178E9A; /* je: equal / zero */

loc_00178E67: ;
    _fa = (uint32_t)(MEM8(esi + 0x218)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x218), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178E8B; /* je: equal / zero */

loc_00178E70: ;
    PUSH32(esp, 0x00178E75u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00178E75: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00178E84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178E84: ;
    MEM8(esi + 0x218) = MEM8(esi + 0x218) & 0xFB;

loc_00178E8B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00178E91u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00178E91: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_00178E9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178EA0
 * Original: 0x00178EA0 - 0x00178EEE (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178EA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0x104;
    if (TEST_Z(_fa, _fb)) goto loc_00178ED7; /* je: equal / zero */

loc_00178EB4: ;
    PUSH32(esp, 0x00178EB9u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00178EB9: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00178EC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178EC8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00178ECEu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00178ECE: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00178ED7: ;
    eax = MEM32(edi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178EEB; /* je: equal / zero */

loc_00178EE1: ;
    MEM32(edi + 0x108) = 0;

loc_00178EEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178EF0
 * Original: 0x00178EF0 - 0x00178F3E (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0xAC;
    if (TEST_Z(_fa, _fb)) goto loc_00178F27; /* je: equal / zero */

loc_00178F04: ;
    PUSH32(esp, 0x00178F09u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00178F09: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00178F18u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00178F18: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00178F1Eu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00178F1E: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00178F27: ;
    eax = MEM32(edi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00178F3B; /* je: equal / zero */

loc_00178F31: ;
    MEM32(edi + 0xB0) = 0;

loc_00178F3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178F40
 * Original: 0x00178F40 - 0x00179060 (288 bytes, 110 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00178F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00178F40: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0017904D; /* je: equal / zero */

loc_00178F50: ;
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00178F5Bu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00178F5B: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx + ebp;
    if (((int32_t)ecx >= 0)) goto loc_00178F68; /* jns: not sign (positive) */

loc_00178F64: ;
    ecx = 0; /* xor self */
    goto loc_00178F6E;

loc_00178F68: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00178F6E; /* jle: less or equal (signed <=) */

loc_00178F6C: ;
    ecx = eax;

loc_00178F6E: ;
    _fa = (uint32_t)(MEM8(esi + 0x218)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x218), 8 (8-bit) */
    MEM16(esi + 0x7C) = LO16(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00178FCF; /* je: equal / zero */

loc_00178F7B: ;
    eax = SX16(LO16(ecx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00178FBB; /* je: equal / zero */

loc_00178F82: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00178F8Eu); RECOMP_ABI_CALL(0x001782C0u, sub_001782C0); /* call 0x001782C0 */

loc_00178F8E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00178FBB; /* jne: not equal / not zero */

loc_00178F92: ;
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    ecx = esi;
    PUSH32(esp, 0x00178F9Du); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00178F9D: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx + ebp;
    if (((int32_t)ecx >= 0)) goto loc_00178FAA; /* jns: not sign (positive) */

loc_00178FA6: ;
    ecx = 0; /* xor self */
    goto loc_00178FB0;

loc_00178FAA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00178FB0; /* jle: less or equal (signed <=) */

loc_00178FAE: ;
    ecx = eax;

loc_00178FB0: ;
    edx = SX16(LO16(ecx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM16(esi + 0x7C) = LO16(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00178F82; /* jne: not equal / not zero */

loc_00178FBB: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00178FC7u); RECOMP_ABI_CALL(0x001782C0u, sub_001782C0); /* call 0x001782C0 */

loc_00178FC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00178FCF; /* jne: not equal / not zero */

loc_00178FCB: ;
    MEM16(esi + 0x7C) = LO16(ebx);

loc_00178FCF: ;
    SET_LO16(ecx, MEM16(esi + 0xA4));
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    edx = SX16(LO16(ecx));
    edi = edx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00178FF6; /* jge: greater or equal (signed >=) */

loc_00178FE4: ;
    eax = eax - ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    ecx = ecx - eax;
    MEM16(esi + 0xA4) = LO16(ecx);
    goto loc_00179015;

loc_00178FF6: ;
    edi = ZX8(MEM8(esi + 0xA0));
    edx = edi + edx + -2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00179015; /* jl: less (signed <) */

loc_00179005: ;
    eax = eax - ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    eax = eax + ecx;
    MEM16(esi + 0xA4) = LO16(eax);

loc_00179015: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0017901Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017901C: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    POP32(esp, edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0017903B; /* je: equal / zero */

loc_00179026: ;
    PUSH32(esp, 0x0017902Bu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017902B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00179034u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179034: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0017903B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00179048u); RECOMP_ABI_CALL(0x00200190u, sub_00200190); /* call 0x00200190 */

loc_00179048: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0017904D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0017905Bu); RECOMP_ABI_CALL(0x00200190u, sub_00200190); /* call 0x00200190 */

loc_0017905B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00179060
 * Original: 0x00179060 - 0x00179100 (160 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179060(void)
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

loc_00179060: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001790A3; /* je: equal / zero */

loc_0017906D: ;
    PUSH32(esp, 0x00179072u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_00179072: ;
    edi = eax;
    PUSH32(esp, 0x00179079u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_00179079: ;
    ecx = MEM32(esi + 0x70);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    ebx = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0017908Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017908A: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebx);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    ecx = ebx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0017909Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017909D: ;
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    goto loc_001790D1;

loc_001790A3: ;
    PUSH32(esp, 0x001790A8u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_001790A8: ;
    edi = eax;
    PUSH32(esp, 0x001790AFu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_001790AF: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001790BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001790BA: ;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    eax = MEM32(ebx);
    ecx = ebx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001790CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001790CD: ;
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */

loc_001790D1: ;
    PUSH32(esp, 0x001790D6u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001790D6: ;
    SET_LO8(ecx, LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM8(esi + 0xA2) = LO8(eax);
    if (CMP_BE(_fa & _fb, 0)) goto loc_001790F2; /* jbe: below or equal (unsigned <=) */

loc_001790E2: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x62);
    ecx = ZX8(LO8(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esi + 0xA0) = LO8(eax);

loc_001790F2: ;
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
 * sub_00179100
 * Original: 0x00179100 - 0x00179105 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00179100: ;
    g_seh_ebp = ebp; sub_00178CE0(); return; /* tail jmp 0x00178CE0 */

}

/**
 * sub_00179110
 * Original: 0x00179110 - 0x0017921D (269 bytes, 81 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00179110: ;
    esp = esp - 0x108;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10C) = eax;
    esi = ecx;
    PUSH32(esp, 0x0017912Bu); RECOMP_ABI_CALL(0x00178EF0u, sub_00178EF0); /* call 0x00178EF0 */

loc_0017912B: ;
    PUSH32(esp, 0x00179130u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00179130: ;
    edx = MEM32(eax);
    edi = esi + 0xB4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00179146u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179146: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0xAC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001791D9; /* je: equal / zero */

loc_00179156: ;
    eax = MEM32(esp + 0x114);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0017916Fu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0017916F: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x00179177u); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_00179177: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00179188u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179188: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0xB0) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001791C1; /* je: equal / zero */

loc_00179194: ;
    ecx = MEM32(esi + 0xAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017919Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017919F: ;
    ecx = MEM32(esi + 0xB0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001791ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001791AD: ;
    ecx = MEM32(esi + 0xAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001791B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001791B8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001791C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001791C1: ;
    PUSH32(esp, 0x001791C6u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001791C6: ;
    ecx = MEM32(esi + 0xAC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001791D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001791D9: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    SET_LO8(edx, MEM8(esp + 0x118));
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xF);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(edi + 0x4C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x4C));
    SET_LO8(eax, MEM8(esp + 0x11C));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    ecx = MEM32(esp + 0x10C);
    MEM8(edi + 0x4C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x00179214u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00179214: ;
    esp = esp + 0x108;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00179220
 * Original: 0x00179220 - 0x001792FE (222 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00179220: ;
    esp = esp - 0x108;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x108) = eax;
    esi = ecx;
    PUSH32(esp, 0x0017923Au); RECOMP_ABI_CALL(0x00178EA0u, sub_00178EA0); /* call 0x00178EA0 */

loc_0017923A: ;
    PUSH32(esp, 0x0017923Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017923F: ;
    edx = MEM32(eax);
    ecx = esi + 0x10C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00179255u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179255: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x104) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001792E8; /* je: equal / zero */

loc_00179265: ;
    eax = MEM32(esp + 0x110);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x0017927Eu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0017927E: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x00179286u); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_00179286: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00179297u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179297: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x108) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001792D0; /* je: equal / zero */

loc_001792A3: ;
    ecx = MEM32(esi + 0x104);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001792AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001792AE: ;
    ecx = MEM32(esi + 0x108);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001792BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001792BC: ;
    ecx = MEM32(esi + 0x104);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001792C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001792C7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001792D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001792D0: ;
    PUSH32(esp, 0x001792D5u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001792D5: ;
    ecx = MEM32(esi + 0x104);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001792E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001792E8: ;
    ecx = MEM32(esp + 0x108);
    POP32(esp, esi);
    PUSH32(esp, 0x001792F5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001792F5: ;
    esp = esp + 0x108;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00179300
 * Original: 0x00179300 - 0x0017944C (332 bytes, 94 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179300(void)
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

loc_00179300: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0017930Cu); RECOMP_ABI_CALL(0x00178E10u, sub_00178E10); /* call 0x00178E10 */

loc_0017930C: ;
    PUSH32(esp, 0x00179311u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00179311: ;
    edi = MEM32(esp + 0x28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x00179327u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179327: ;
    edx = MEM32(eax);
    MEM32(esi + 0x210) = edx;
    PUSH32(esp, 0x00179334u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00179334: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x00179346u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179346: ;
    ecx = MEM32(esi + 0x210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = MEM32(eax);
    MEM32(esi + 0x214) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_001793C6; /* je: equal / zero */

loc_00179358: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0017935Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017935D: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x5C);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    ecx = ecx + edx + -3;
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
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001793C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001793C6: ;
    ecx = MEM32(esi + 0x214);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179444; /* je: equal / zero */

loc_001793D0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001793D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001793D5: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x5C);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    ecx = ecx + edx + -3;
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
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00179444u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179444: ;
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
 * sub_00179450
 * Original: 0x00179450 - 0x0017955C (268 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179450(void)
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

loc_00179450: ;
    esp = esp - 0x118;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x120) = eax;
    esi = ecx;
    PUSH32(esp, 0x0017946Cu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017946C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017948B; /* jne: not equal / not zero */

loc_00179470: ;
    eax = esi + 0x8C;
    ecx = 4;
    goto loc_00179480;

    /* nop */

loc_00179480: ;
    MEM16(eax) = 0;
    eax = eax + 6;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00179480; /* jne: not equal / not zero */

loc_0017948B: ;
    eax = MEM32(esp + 0x12C);
    edi = MEM32(esp + 0x128);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001794A2u); RECOMP_ABI_CALL(0x00178770u, sub_00178770); /* call 0x00178770 */

loc_001794A2: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00179542; /* jle: less or equal (signed <=) */

loc_001794AD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x100);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esp + 0x38) = 0;
    PUSH32(esp, 0x001794CCu); RECOMP_ABI_CALL(0x00178B90u, sub_00178B90); /* call 0x00178B90 */

loc_001794CC: ;
    ebx = 0; /* xor self */
    edi = esi + 0x8C;

loc_001794D4: ;
    esi = MEM32(esp + ebx * 4 + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179538; /* je: equal / zero */

loc_001794DC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00179538; /* je: equal / zero */

loc_001794E1: ;
    PUSH32(esp, 0x001794E6u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_001794E6: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    edx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, esi);
    ecx = eax;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00179504u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179504: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0017951C; /* jp: parity */

loc_0017950F: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    goto loc_00179530;

loc_0017951C: ;
    PUSH32(esp, 0x00179521u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_00179521: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00179530u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179530: ;
    PUSH32(esp, 0x00179535u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00179535: ;
    MEM16(edi) = LO16(eax);

loc_00179538: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001794D4; /* jl: less (signed <) */

loc_00179541: ;
    POP32(esp, ebx);

loc_00179542: ;
    ecx = MEM32(esp + 0x120);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    PUSH32(esp, 0x00179553u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00179553: ;
    esp = esp + 0x118;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00179560
 * Original: 0x00179560 - 0x00179C58 (1784 bytes, 472 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179560(void)
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

loc_00179560: ;
    esp = esp - 0x1B8;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x1B8) = eax;
    esi = ecx;
    PUSH32(esp, 0x0017957Au); RECOMP_ABI_CALL(0x00173020u, sub_00173020); /* call 0x00173020 */

loc_0017957A: ;
    ecx = esi;
    PUSH32(esp, 0x00179581u); RECOMP_ABI_CALL(0x00178CE0u, sub_00178CE0); /* call 0x00178CE0 */

loc_00179581: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x39), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00179C44; /* jne: not equal / not zero */

loc_0017958B: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179C44; /* je: equal / zero */

loc_00179596: ;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001795DF; /* je: equal / zero */

loc_001795A0: ;
    edx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    MEM32(esp + 0x30) = 0x42C80000;
    MEM32(esp + 0x34) = 0xC2C80000u;
    MEM32(esp + 0x38) = 0x42C80000;
    MEM32(esp + 0x20) = 0xC2C80000u;
    MEM32(esp + 0x24) = 0xC2C80000u;
    MEM32(esp + 0x28) = 0xC2C80000u;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001795DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001795DF: ;
    ecx = MEM32(esi + 0x104);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017962D; /* je: equal / zero */

loc_001795E9: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x68);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 8) = eax;
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    eax = esp + 0x30;
    MEM32(esp + 0x20) = 0x42C80000;
    MEM32(esp + 0x28) = 0x42C80000;
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    MEM32(esp + 0x30) = 0xC2C80000u;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x38) = 0xC2C80000u;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0017962Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017962D: ;
    _fa = (uint32_t)(MEM16(esi + 0xA4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA4), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00179669; /* jle: less or equal (signed <=) */

loc_00179637: ;
    eax = MEM32(esi + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179669; /* je: equal / zero */

loc_00179641: ;
    _fa = (uint32_t)(MEM8(esi + 0x218)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x218), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00179669; /* jne: not equal / not zero */

loc_0017964A: ;
    PUSH32(esp, 0x0017964Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017964F: ;
    ecx = MEM32(esi + 0x210);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00179662u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179662: ;
    MEM8(esi + 0x218) = MEM8(esi + 0x218) | 2;

loc_00179669: ;
    ecx = esi;
    PUSH32(esp, 0x00179670u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00179670: ;
    edx = ZX8(MEM8(esi + 0xA0));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001796B6; /* jge: greater or equal (signed >=) */

loc_00179684: ;
    eax = MEM32(esi + 0x214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001796B6; /* je: equal / zero */

loc_0017968E: ;
    _fa = (uint32_t)(MEM8(esi + 0x218)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x218), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001796B6; /* jne: not equal / not zero */

loc_00179697: ;
    PUSH32(esp, 0x0017969Cu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017969C: ;
    ecx = MEM32(esi + 0x214);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001796AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001796AF: ;
    MEM8(esi + 0x218) = MEM8(esi + 0x218) | 4;

loc_001796B6: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ecx = esi;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x001796C4u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_001796C4: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00179C43; /* jge: greater or equal (signed >=) */

loc_001796D3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    goto loc_001796E0;

loc_001796D7: ;
    edi = MEM32(esp + 0x18);
    goto loc_001796E0;

    /* nop */

loc_001796E0: ;
    eax = ZX8(MEM8(esi + 0xA0));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00179C41; /* jge: greater or equal (signed >=) */

loc_001796EF: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    PUSH32(esp, 4);
    ecx = esp + 0xB8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x100);
    edx = esp + 0xD0;
    PUSH32(esp, edx);
    eax = eax + edi;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0xD8) = 0;
    PUSH32(esp, 0x0017971Fu); RECOMP_ABI_CALL(0x00177DF0u, sub_00177DF0); /* call 0x00177DF0 */

loc_0017971F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00179727u); RECOMP_ABI_CALL(0x00178B90u, sub_00178B90); /* call 0x00178B90 */

loc_00179727: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x39), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179747; /* je: equal / zero */

loc_0017972D: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    ecx = ecx + edi;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0017973Eu); RECOMP_ABI_CALL(0x001782C0u, sub_001782C0); /* call 0x001782C0 */

loc_0017973E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x48) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_0017974C; /* jne: not equal / not zero */

loc_00179747: ;
    MEM8(esp + 0x48) = 0;

loc_0017974C: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    edx = edx + edi;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esi;
    ebp = 0; /* xor self */
    PUSH32(esp, 0x00179764u); RECOMP_ABI_CALL(0x00178330u, sub_00178330); /* call 0x00178330 */

loc_00179764: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x60); /* fmul dword ptr [esp + 0x60] */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x68); /* fmul dword ptr [esp + 0x68] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x64); /* fmul dword ptr [esp + 0x64] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C832C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c832c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00179791; /* jne: not equal / not zero */

loc_0017978D: ;
    ebp = esp + 0x60;

loc_00179791: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x39), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001797AC; /* je: equal / zero */

loc_00179797: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    ecx = ecx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001797AC; /* jne: not equal / not zero */

loc_001797A8: ;
    SET_LO8(ebx, 1);
    goto loc_001797AE;

loc_001797AC: ;
    SET_LO8(ebx, 0); /* xor self */

loc_001797AE: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x70);
    ecx = esp + 0xAC;
    MEM8(esp + 0x4C) = LO8(ebx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001797CEu); RECOMP_ABI_CALL(0x0017D250u, sub_0017D250); /* call 0x0017D250 */

loc_001797CE: ;
    eax = ZX8(MEM8(esi + 0xA2));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x66);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x5E);
    MEM32(esp + 0x24) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ecx = ecx - eax;
    MEM32(esp + 0x28) = ecx;
    edx = edx - eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0x14;
    eax = eax + edi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00179826u); RECOMP_ABI_CALL(0x00178490u, sub_00178490); /* call 0x00178490 */

loc_00179826: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(esp + 0x5C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00179943; /* je: equal / zero */

loc_00179832: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179943; /* je: equal / zero */

loc_00179840: ;
    _fa = (uint32_t)(MEM8(esi + 0x218)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x218), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00179868; /* jne: not equal / not zero */

loc_00179849: ;
    PUSH32(esp, 0x0017984Eu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017984E: ;
    ecx = MEM32(esi + 0xA8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00179861u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179861: ;
    MEM8(esi + 0x218) = MEM8(esi + 0x218) | 1;

loc_00179868: ;
    ecx = MEM32(esi + 0xA8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00179873u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179873: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x5C);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x68);
    ecx = ecx + 3;
    MEM32(esp + 0x10) = ecx;
    edx = edx - 5;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0x30;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    ecx = eax;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6DE0); /* fsub dword ptr [0x3c6de0] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001798BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001798BD: ;
    ecx = MEM32(esi + 0xA8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001798C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001798C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179943; /* je: equal / zero */

loc_001798CC: ;
    ecx = MEM32(esi + 0xA8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001798D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001798D7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001798DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001798DE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001798E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001798E5: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00179943; /* jne: not equal / not zero */

loc_001798F6: ;
    PUSH32(esp, 0x001798FBu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001798FB: ;
    ecx = MEM32(esi + 0xA8);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00179908u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179908: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017990Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017990F: ;
    ebp = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00179918u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179918: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x10); /* fdiv dword ptr [esp + 0x10] */
    edi = MEM32(ebp);
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMD(0x3D45C8)); /* fld double */
    PUSH32(esp, 0x0017993Au); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0017993A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x00179943u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179943: ;
    ebp = (uint32_t)(int32_t)SMEM16(esi + 0x64);
    SET_LO8(eax, MEM8(esi + 0xA1));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00179AE5; /* jbe: below or equal (unsigned <=) */

loc_0017995B: ;
    ebx = MEM32(esp + 0x1C);
    /* nop */

loc_00179960: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00179A10; /* jne: not equal / not zero */

loc_00179968: ;
    eax = MEM32(esp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00179A10; /* jl: less (signed <) */

loc_00179974: ;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179A2F; /* je: equal / zero */

loc_00179982: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x5C);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x68);
    ecx = ecx + ebp;
    MEM32(esp + 0x34) = ecx;
    edx = edx - 0xA;
    PUSH32(esp, edi);
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    ecx = esi + 0xB4;
    MEM32(esp + 0xA8) = 0x3F800000;
    MEM32(esp + 0xAC) = 0x3F800000;
    MEMF(esp + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xB0) = 0x3F800000;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(esp + 0xB4) = 0x3F800000;
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    fp_top() = fp_top() - MEMF(0x3C837C); /* fsub dword ptr [0x3c837c] */
    MEMF(esp + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00179A10u); RECOMP_ABI_CALL(0x00188DA0u, sub_00188DA0); /* call 0x00188DA0 */

loc_00179A10: ;
    eax = MEM32(esi + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179A2F; /* je: equal / zero */

loc_00179A1A: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    PUSH32(esp, 0x00179A2Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00179A2D: ;
    ebp = eax;

loc_00179A2F: ;
    eax = MEM32(esp + edi * 4 + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179A8B; /* je: equal / zero */

loc_00179A3A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00179A8B; /* je: equal / zero */

loc_00179A3F: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x39), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00179A8B; /* jne: not equal / not zero */

loc_00179A45: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    edx = esp + 0xAC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00179A55u); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_00179A55: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = edi + edi * 2 + 0x45;
    ecx = (uint32_t)(int32_t)SMEM16(esi + eax * 2);
    ecx = ecx | 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x00179A73u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00179A73: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, eax);
    edx = edi + edi * 2;
    eax = (uint32_t)(int32_t)SMEM16(esi + edx * 2 + 0x88);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00179A8Bu); RECOMP_ABI_CALL(0x0018AB00u, sub_0018AB00); /* call 0x0018AB00 */

loc_00179A8B: ;
    ecx = ZX8(MEM8(esi + 0xA1));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00179AC4; /* jge: greater or equal (signed >=) */

loc_00179A97: ;
    edx = edi + edi * 2;
    SET_LO16(ecx, MEM16(esi + edx * 2 + 0x8E));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    eax = esi + edx * 2;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00179AC4; /* jge: greater or equal (signed >=) */

loc_00179AAA: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x92);
    ebp = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x5C);
    ebp = ebp - eax;
    eax = SX16(LO16(ecx));
    ebp = ebp + edx;
    ebp = ebp + eax;
    goto loc_00179AD1;

loc_00179AC4: ;
    ecx = edi + edi * 2;
    edx = (uint32_t)(int32_t)SMEM16(esi + ecx * 2 + 0x88);
    ebp = ebp + edx;

loc_00179AD1: ;
    eax = ZX8(MEM8(esi + 0xA1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00179960; /* jl: less (signed <) */

loc_00179AE5: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    edi = MEM32(esp + 0x18);
    ecx = ecx + edi;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00179AFFu); RECOMP_ABI_CALL(0x001783E0u, sub_001783E0); /* call 0x001783E0 */

loc_00179AFF: ;
    eax = MEM32(esi + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179C24; /* je: equal / zero */

loc_00179B0D: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x54); /* fmul dword ptr [esp + 0x54] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x50); /* fmul dword ptr [esp + 0x50] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C832C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c832c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00179C24; /* jne: not equal / not zero */

loc_00179B3A: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x5C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0xAC);
    ebp = ebp + 0xFFFFFFEAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00179B75; /* je: equal / zero */

loc_00179B53: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x00179B60u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00179B60: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x18) = eax;
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x00179B71u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00179B71: ;
    MEM32(esp + 0x10) = eax;

loc_00179B75: ;
    ecx = ZX8(MEM8(esi + 0xA2));
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x68);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ecx - 2;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0);
    eax = esp + 0x58;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    ecx = esi + 0x10C;
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6DE0); /* fsub dword ptr [0x3c6de0] */
    MEMF(esp + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00179BE8u); RECOMP_ABI_CALL(0x0018A2C0u, sub_0018A2C0); /* call 0x0018A2C0 */

loc_00179BE8: ;
    ecx = MEM32(esi + 0x104);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00179BF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179BF3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0x78;
    MEM32(esp + 0x78) = 0;
    MEM32(esp + 0x7C) = 0x41A00000;
    MEM32(esp + 0x80) = 0;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00179C24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179C24: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x00179C30u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00179C30: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xA4);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001796D7; /* jl: less (signed <) */

loc_00179C41: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00179C43: ;
    POP32(esp, edi);

loc_00179C44: ;
    ecx = MEM32(esp + 0x1B8);
    POP32(esp, esi);
    PUSH32(esp, 0x00179C51u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00179C51: ;
    esp = esp + 0x1B8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00179C60
 * Original: 0x00179C60 - 0x00179CDC (124 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00179C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(0x575D90));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00179C80; /* jne: not equal / not zero */

loc_00179C73: ;
    MEM32(0x575D90) = MEM32(0x575D90) | eax;
    MEM8(0x575D50) = 0;

loc_00179C80: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00179CD5; /* jl: less (signed <) */

loc_00179C88: ;
    ecx = edi;
    PUSH32(esp, 0x00179C8Fu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_00179C8F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00179CD5; /* jg: greater (signed >) */

loc_00179C94: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00179C9Eu); RECOMP_ABI_CALL(0x00177DF0u, sub_00177DF0); /* call 0x00177DF0 */

loc_00179C9E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x575D50);
    PUSH32(esp, 0x00179CA9u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00179CA9: ;
    esp = esp + 0xC;
    ecx = 0x575D50;

loc_00179CB1: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00179CCB; /* je: equal / zero */

loc_00179CB7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00179CC8; /* je: equal / zero */

loc_00179CBB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00179CB1; /* jne: not equal / not zero */

loc_00179CBE: ;
    POP32(esp, edi);
    eax = 0x575D50;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00179CC8: ;
    MEM8(ecx) = 0;

loc_00179CCB: ;
    POP32(esp, edi);
    eax = 0x575D50;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00179CD5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00179CE0
 * Original: 0x00179CE0 - 0x0017A0A6 (966 bytes, 266 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179CE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00179CE0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354718);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x6C));
    esp = esp - 0x6C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x80);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esp + 0x7C) = eax;
    ebp = ecx;
    PUSH32(esp, 0x00179D14u); RECOMP_ABI_CALL(0x001785B0u, sub_001785B0); /* call 0x001785B0 */

loc_00179D14: ;
    esi = MEM32(ebp + 0x54);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00179D24; /* jne: not equal / not zero */

loc_00179D1D: ;
    eax = 0x3C806C;
    goto loc_00179D3A;

loc_00179D24: ;
    PUSH32(esp, 0x00179D29u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_00179D29: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x1008;

loc_00179D3A: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00179D42u); RECOMP_ABI_CALL(0x00178D80u, sub_00178D80); /* call 0x00178D80 */

loc_00179D42: ;
    SET_LO16(edx, MEM16(ebp + 0x60));
    PUSH32(esp, 2);
    esi = ebp + 0x8A;
    PUSH32(esp, 0x3DF98C);
    ecx = esp + 0x1C;
    MEM8(ebp + 0xA1) = 1;
    MEM16(ebp + 0x88) = LO16(edx);
    MEM16(esi) = LO16(edi);
    MEM16(ebp + 0x8C) = LO16(edi);
    PUSH32(esp, 0x00179D74u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00179D74: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x88) = edi;
    PUSH32(esp, 0x00179D87u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00179D87: ;
    ecx = esp + 0x14;
    edi = eax;
    MEM32(esp + 0x84) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00179D9Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00179D9D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00179E4B; /* je: equal / zero */

loc_00179DA5: ;
    ecx = edi;
    PUSH32(esp, 0x00179DACu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00179DAC: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00179DB5u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00179DB5: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00179DC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179DC1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00179DC7u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00179DC7: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00179DD4; /* jle: less or equal (signed <=) */

loc_00179DCF: ;
    eax = 4;

loc_00179DD4: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(ebp + 0xA1) = LO8(eax);
    if (CMP_BE(_fa & _fb, 0)) goto loc_00179E4B; /* jbe: below or equal (unsigned <=) */

loc_00179DE0: ;
    PUSH32(esp, 0x00179DE5u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00179DE5: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00179DF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179DF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00179DF7u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00179DF7: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM16(esi + -2) = LO16(eax);
    MEM16(esi) = 0;
    PUSH32(esp, 0x00179E08u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00179E08: ;
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00179E19u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00179E19: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x458990);
    PUSH32(esp, 0x00179E24u); RECOMP_ABI_CALL(0x00123100u, sub_00123100); /* call 0x00123100 */

loc_00179E24: ;
    eax = ZX8(LO8(eax));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00179E36; /* je: equal / zero */

loc_00179E2E: ;
    SET_LO16(edx, MEM16(esp + 0x24));
    MEM16(esi) = LO16(edx);

loc_00179E36: ;
    MEM16(esi + 2) = 0;
    eax = ZX8(MEM8(ebp + 0xA1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(6)) >> 32) & 1);
    esi = esi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00179DE0; /* jl: less (signed <) */

loc_00179E4B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF984);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00179E5Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00179E5B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x88) = 1;
    PUSH32(esp, 0x00179E72u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00179E72: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0xFFFFFFFFu;
    ecx = esp + 0x14;
    edi = eax;
    MEM32(esp + 0x84) = esi;
    PUSH32(esp, 0x00179E87u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00179E87: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00179F78; /* je: equal / zero */

loc_00179E91: ;
    ecx = edi;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x10) = eax;
    MEM8(esp + 0x38) = LO8(eax);
    PUSH32(esp, 0x00179EA7u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00179EA7: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00179EB4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00179EB4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF978);
    ecx = esp + 0x1C;
    MEM8(esp + 0x7F) = 0;
    PUSH32(esp, 0x00179ECCu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00179ECC: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x88) = 2;
    PUSH32(esp, 0x00179EE3u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00179EE3: ;
    ecx = esp + 0x14;
    edi = eax;
    MEM32(esp + 0x84) = esi;
    PUSH32(esp, 0x00179EF5u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00179EF5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00179F10; /* je: equal / zero */

loc_00179EF9: ;
    ecx = edi;
    PUSH32(esp, 0x00179F00u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00179F00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00179F06u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00179F06: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM32(esp + 0x8C) = eax;

loc_00179F10: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF96C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00179F20u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00179F20: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x88) = 3;
    PUSH32(esp, 0x00179F37u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00179F37: ;
    ecx = esp + 0x14;
    edi = eax;
    MEM32(esp + 0x84) = esi;
    PUSH32(esp, 0x00179F49u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00179F49: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00179F5F; /* je: equal / zero */

loc_00179F4D: ;
    ecx = edi;
    PUSH32(esp, 0x00179F54u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00179F54: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00179F5Au); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00179F5A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    goto loc_00179F63;

loc_00179F5F: ;
    eax = MEM32(esp + 0x10);

loc_00179F63: ;
    edx = MEM32(esp + 0x8C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00179F78u); RECOMP_ABI_CALL(0x00179110u, sub_00179110); /* call 0x00179110 */

loc_00179F78: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF95C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00179F88u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00179F88: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x88) = 4;
    PUSH32(esp, 0x00179F9Fu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00179F9F: ;
    ecx = esp + 0x14;
    edi = eax;
    MEM32(esp + 0x84) = esi;
    PUSH32(esp, 0x00179FB1u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00179FB1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00179FC4; /* je: equal / zero */

loc_00179FB5: ;
    ecx = edi;
    PUSH32(esp, 0x00179FBCu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00179FBC: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00179FC4u); RECOMP_ABI_CALL(0x00179220u, sub_00179220); /* call 0x00179220 */

loc_00179FC4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF950);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00179FD4u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00179FD4: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x88) = 5;
    PUSH32(esp, 0x00179FEBu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00179FEB: ;
    ecx = esp + 0x14;
    edi = eax;
    MEM32(esp + 0x84) = esi;
    PUSH32(esp, 0x00179FFDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00179FFD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017A010; /* je: equal / zero */

loc_0017A001: ;
    ecx = edi;
    PUSH32(esp, 0x0017A008u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017A008: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0017A010u); RECOMP_ABI_CALL(0x00179300u, sub_00179300); /* call 0x00179300 */

loc_0017A010: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF944);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0017A020u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017A020: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x88) = 6;
    PUSH32(esp, 0x0017A037u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017A037: ;
    ecx = esp + 0x28;
    ebx = eax;
    MEM32(esp + 0x84) = esi;
    PUSH32(esp, 0x0017A049u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017A049: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017A088; /* je: equal / zero */

loc_0017A04D: ;
    ecx = ebx;
    edi = 0x3CB744;
    PUSH32(esp, 0x0017A059u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017A059: ;
    esi = eax;
    ecx = 5;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0017A06B; /* je: equal / zero */

loc_0017A066: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0017A06B: ;
    SET_LO8(ebx, MEM8(ebp + 0x218));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (4) _cf = (int)(((LO8(ecx)) >> (8 - (4))) & 1);
    SET_LO8(ecx, LO8(ecx) << 4);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(ebp + 0x218) = LO8(eax);

loc_0017A088: ;
    ecx = MEM32(esp + 0x7C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x6C);
    POP32(esp, ebx);
    PUSH32(esp, 0x0017A0A0u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017A0A0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x78)) >> 32) & 1);
    esp = esp + 0x78;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017A0B0
 * Original: 0x0017A0B0 - 0x0017A140 (144 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A0B0(void)
{

loc_0017A0B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354754);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DF6DC;
    MEM32(esp + 0x10) = 2;
    PUSH32(esp, 0x0017A0E0u); RECOMP_ABI_CALL(0x00178CE0u, sub_00178CE0); /* call 0x00178CE0 */

loc_0017A0E0: ;
    ecx = esi;
    PUSH32(esp, 0x0017A0E7u); RECOMP_ABI_CALL(0x00178EF0u, sub_00178EF0); /* call 0x00178EF0 */

loc_0017A0E7: ;
    ecx = esi;
    PUSH32(esp, 0x0017A0EEu); RECOMP_ABI_CALL(0x00178EA0u, sub_00178EA0); /* call 0x00178EA0 */

loc_0017A0EE: ;
    ecx = esi;
    PUSH32(esp, 0x0017A0F5u); RECOMP_ABI_CALL(0x00178E10u, sub_00178E10); /* call 0x00178E10 */

loc_0017A0F5: ;
    PUSH32(esp, 0x3C806C);
    ecx = esi;
    PUSH32(esp, 0x0017A101u); RECOMP_ABI_CALL(0x00178D80u, sub_00178D80); /* call 0x00178D80 */

loc_0017A101: ;
    ecx = esi + 0x10C;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x0017A111u); RECOMP_ABI_CALL(0x0018A5E0u, sub_0018A5E0); /* call 0x0018A5E0 */

loc_0017A111: ;
    ecx = esi + 0xB4;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0017A121u); RECOMP_ABI_CALL(0x00188EE0u, sub_00188EE0); /* call 0x00188EE0 */

loc_0017A121: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017A130u); RECOMP_ABI_CALL(0x00176DA0u, sub_00176DA0); /* call 0x00176DA0 */

loc_0017A130: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0017A140
 * Original: 0x0017A140 - 0x0017A1C5 (133 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017A140: ;
    _fa = (uint32_t)(MEM8(ecx + 0x21C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x21C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017A158; /* je: equal / zero */

loc_0017A149: ;
    PUSH32(esp, 0x0017A14Eu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A14E: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x84)); return; /* indirect tail jmp */

loc_0017A158: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017A15Fu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A15F: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0017A16Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A16B: ;
    edi = eax;
    PUSH32(esp, 0x0017A172u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A172: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0017A17Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A17D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017A1BE; /* je: equal / zero */

loc_0017A181: ;
    PUSH32(esp, 0x0017A186u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017A186: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x0017A190u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A190: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A199; /* jne: not equal / not zero */

loc_0017A194: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017A1B7; /* je: equal / zero */

loc_0017A199: ;
    PUSH32(esp, 0x0017A19Eu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017A19E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x0017A1A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A1A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017A1BE; /* jne: not equal / not zero */

loc_0017A1AD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017A1B7; /* je: equal / zero */

loc_0017A1B2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017A1BE; /* jne: not equal / not zero */

loc_0017A1B7: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0017A1BE: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017A1D0
 * Original: 0x0017A1D0 - 0x0017A273 (163 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017A1D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354768);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0017A1F6u); RECOMP_ABI_CALL(0x00179CE0u, sub_00179CE0); /* call 0x00179CE0 */

loc_0017A1F6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB7B4);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0017A206u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017A206: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0017A21Au); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017A21A: ;
    ecx = esp + 8;
    edi = eax;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017A22Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017A22D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017A260; /* je: equal / zero */

loc_0017A231: ;
    PUSH32(esp, 0x3CB744);
    ecx = edi;
    PUSH32(esp, 0x0017A23Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017A23D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017A243u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017A243: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x21C));
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x21C) = LO8(eax);

loc_0017A260: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017A280
 * Original: 0x0017A280 - 0x0017A30D (141 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017A280: ;
    esp = esp - 0x68;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x70) = eax;
    edi = ecx;
    MEM8(esp + 0xC) = 0;
    PUSH32(esp, 0x0017A29Bu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A29B: ;
    ebx = MEM32(esp + 0x78);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0017A2A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A2A7: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A2B4; /* jne: not equal / not zero */

loc_0017A2AD: ;
    eax = 0x3C806C;
    goto loc_0017A2CA;

loc_0017A2B4: ;
    PUSH32(esp, 0x0017A2B9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017A2B9: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0017A2CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    edx = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0017A2DCu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0017A2DC: ;
    eax = MEM32(edi);
    esp = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0017A2EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A2ED: ;
    edx = ZX8(LO8(ebx));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0017A2F9u); RECOMP_ABI_CALL(0x00177D50u, sub_00177D50); /* call 0x00177D50 */

loc_0017A2F9: ;
    ecx = MEM32(esp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    PUSH32(esp, 0x0017A307u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017A307: ;
    esp = esp + 0x68;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017A310
 * Original: 0x0017A310 - 0x0017A3AD (157 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017A310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    PUSH32(esp, 0x0017A31Du); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017A31D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017A39B; /* jle: less or equal (signed <=) */

loc_0017A321: ;
    PUSH32(esp, 0x0017A326u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A326: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0017A332u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A332: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A33F; /* jne: not equal / not zero */

loc_0017A338: ;
    edi = 0x3C806C;
    goto loc_0017A355;

loc_0017A33F: ;
    PUSH32(esp, 0x0017A344u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017A344: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    edi = edx + eax + 0x8008;

loc_0017A355: ;
    eax = MEM32(ebp);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0017A35Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A35E: ;
    esi = eax;
    ecx = edi;

loc_0017A362: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0017A386; /* jne: not equal / not zero */

loc_0017A36A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017A382; /* je: equal / zero */

loc_0017A36E: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0017A386; /* jne: not equal / not zero */

loc_0017A378: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A362; /* jne: not equal / not zero */

loc_0017A382: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0017A38B;

loc_0017A386: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0017A38B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017A3A4; /* je: equal / zero */

loc_0017A38F: ;
    ecx = ebp;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0017A397u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017A397: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0017A321; /* jl: less (signed <) */

loc_0017A39B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0017A3A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017A3B0
 * Original: 0x0017A3B0 - 0x0017A69A (746 bytes, 267 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A3B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017A3B0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = edi;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x0017A3C9u); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_0017A3C9: ;
    _fa = (uint32_t)(MEM8(edi + 0x21C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x21C), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A54C; /* jne: not equal / not zero */

loc_0017A3D6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0017A3DCu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A3DC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0017A3E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A3E3: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0017A411; /* jle: less or equal (signed <=) */

loc_0017A3E9: ;
    edi = MEM32(esp + 0x1C);
    /* nop */

loc_0017A3F0: ;
    PUSH32(esp, 0x0017A3F5u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A3F5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017A3FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A3FD: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0017A40B; /* je: equal / zero */

loc_0017A404: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0017A3F0; /* jl: less (signed <) */

loc_0017A409: ;
    goto loc_0017A40D;

loc_0017A40B: ;
    ebx = esi;

loc_0017A40D: ;
    edi = MEM32(esp + 0x14);

loc_0017A411: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0017A4EB; /* jl: less (signed <) */

loc_0017A41B: ;
    goto loc_0017A420;

    /* nop */

loc_0017A420: ;
    PUSH32(esp, 0x0017A425u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A425: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017A42Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A42D: ;
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017A435u); RECOMP_ABI_CALL(0x0017A140u, sub_0017A140); /* call 0x0017A140 */

loc_0017A435: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017A4D8; /* je: equal / zero */

loc_0017A43D: ;
    PUSH32(esp, 0x0017A442u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A442: ;
    esi = eax;
    PUSH32(esp, 0x0017A449u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A449: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    edi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0017A459u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A459: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A466; /* jne: not equal / not zero */

loc_0017A45F: ;
    esi = 0x3C806C;
    goto loc_0017A47C;

loc_0017A466: ;
    PUSH32(esp, 0x0017A46Bu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017A46B: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    esi = edx + eax + 0x8008;

loc_0017A47C: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0017A484u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A484: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A491; /* jne: not equal / not zero */

loc_0017A48A: ;
    eax = 0x3C806C;
    goto loc_0017A4A7;

loc_0017A491: ;
    PUSH32(esp, 0x0017A496u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017A496: ;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0017A4A7: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0017A4CB; /* jne: not equal / not zero */

loc_0017A4AF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017A4C7; /* je: equal / zero */

loc_0017A4B3: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0017A4CB; /* jne: not equal / not zero */

loc_0017A4BD: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A4A7; /* jne: not equal / not zero */

loc_0017A4C7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0017A4D0;

loc_0017A4CB: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0017A4D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A4EB; /* jne: not equal / not zero */

loc_0017A4D4: ;
    edi = MEM32(esp + 0x14);

loc_0017A4D8: ;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0017A420; /* jge: greater or equal (signed >=) */

loc_0017A4EB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0017A53E; /* jge: greater or equal (signed >=) */

loc_0017A4FB: ;
    goto loc_0017A500;

    /* nop */

loc_0017A500: ;
    PUSH32(esp, 0x0017A505u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A505: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017A50Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A50D: ;
    ebx = MEM32(esp + 0x14);
    MEM8(esp + 0x1C) = LO8(eax);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0017A521u); RECOMP_ABI_CALL(0x0017A140u, sub_0017A140); /* call 0x0017A140 */

loc_0017A521: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017A539; /* je: equal / zero */

loc_0017A525: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0017A52Du); RECOMP_ABI_CALL(0x0017A310u, sub_0017A310); /* call 0x0017A310 */

loc_0017A52D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A539; /* jne: not equal / not zero */

loc_0017A531: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0017A539u); RECOMP_ABI_CALL(0x0017A280u, sub_0017A280); /* call 0x0017A280 */

loc_0017A539: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0017A500; /* jl: less (signed <) */

loc_0017A53E: ;
    POP32(esp, ebp);

loc_0017A53F: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0017A54C: ;
    eax = MEM32(esp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0017A560; /* jge: greater or equal (signed >=) */

loc_0017A556: ;
    ebx = 2;
    goto loc_0017A634;

loc_0017A560: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0017A634; /* jl: less (signed <) */

loc_0017A56B: ;
    goto loc_0017A570;

    /* nop */

loc_0017A570: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0017A578u); RECOMP_ABI_CALL(0x0017A140u, sub_0017A140); /* call 0x0017A140 */

loc_0017A578: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017A621; /* je: equal / zero */

loc_0017A580: ;
    PUSH32(esp, 0x0017A585u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A585: ;
    esi = eax;
    PUSH32(esp, 0x0017A58Cu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A58C: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    edi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0017A59Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A59C: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A5A9; /* jne: not equal / not zero */

loc_0017A5A2: ;
    esi = 0x3C806C;
    goto loc_0017A5BF;

loc_0017A5A9: ;
    PUSH32(esp, 0x0017A5AEu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017A5AE: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    esi = edx + eax + 0x8008;

loc_0017A5BF: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0017A5C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A5C7: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A5D4; /* jne: not equal / not zero */

loc_0017A5CD: ;
    eax = 0x3C806C;
    goto loc_0017A5F0;

loc_0017A5D4: ;
    PUSH32(esp, 0x0017A5D9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017A5D9: ;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x8008;
    /* nop */

loc_0017A5F0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0017A614; /* jne: not equal / not zero */

loc_0017A5F8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017A610; /* je: equal / zero */

loc_0017A5FC: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0017A614; /* jne: not equal / not zero */

loc_0017A606: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A5F0; /* jne: not equal / not zero */

loc_0017A610: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0017A619;

loc_0017A614: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0017A619: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edi = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_0017A634; /* jne: not equal / not zero */

loc_0017A621: ;
    edx = MEM32(esp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xC) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0017A570; /* jge: greater or equal (signed >=) */

loc_0017A634: ;
    MEM8(esp + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0017A63Du); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A63D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0017A644u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A644: ;
    ecx = ZX8(LO8(ebx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0017A53F; /* jge: greater or equal (signed >=) */

loc_0017A64F: ;
    /* nop */

loc_0017A650: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0017A65Cu); RECOMP_ABI_CALL(0x0017A140u, sub_0017A140); /* call 0x0017A140 */

loc_0017A65C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017A674; /* je: equal / zero */

loc_0017A660: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0017A668u); RECOMP_ABI_CALL(0x0017A310u, sub_0017A310); /* call 0x0017A310 */

loc_0017A668: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A674; /* jne: not equal / not zero */

loc_0017A66C: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0017A674u); RECOMP_ABI_CALL(0x0017A280u, sub_0017A280); /* call 0x0017A280 */

loc_0017A674: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0017A67Fu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017A67F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0017A686u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A686: ;
    ecx = ZX8(LO8(ebx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0017A650; /* jl: less (signed <) */

loc_0017A68D: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017A6A0
 * Original: 0x0017A6A0 - 0x0017A6A5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A6A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017A6A0: ;
    g_seh_ebp = ebp; sub_00200190(); return; /* tail jmp 0x00200190 */

}

/**
 * sub_0017A6B0
 * Original: 0x0017A6B0 - 0x0017A761 (177 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017A6B0: ;
    SET_LO16(eax, MEM16(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(esi + 0x7C) = MEM16(esi + 0x7C) + LO16(eax);
    PUSH32(esp, 0x0017A6C1u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017A6C1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0017A6D0; /* jle: less or equal (signed <=) */

loc_0017A6CA: ;
    MEM16(esi + 0x7C) = 0;

loc_0017A6D0: ;
    _fa = (uint32_t)(MEM16(esi + 0x7C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x7C), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017A6E3; /* jge: greater or equal (signed >=) */

loc_0017A6D7: ;
    ecx = esi;
    PUSH32(esp, 0x0017A6DEu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017A6DE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 0x7C) = LO16(eax);

loc_0017A6E3: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017A75B; /* je: equal / zero */

loc_0017A6EA: ;
    MEM8(0x571864) = MEM8(0x571864) & 0xF0;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0017A6FDu); RECOMP_ABI_CALL(0x00177C20u, sub_00177C20); /* call 0x00177C20 */

loc_0017A6FD: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x573B48;
    if ((eax == 0)) goto loc_0017A736; /* je: equal / zero */

loc_0017A70D: ;
    SET_LO8(edx, MEM8(0x571864));
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    SET_LO8(edx, LO8(edx) | 1);
    PUSH32(esp, 0x571758);
    MEM8(0x571864) = LO8(edx);
    PUSH32(esp, 0x0017A72Cu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0017A72C: ;
    esp = esp + 0xC;
    MEM8(0x571857) = 0;

loc_0017A736: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x7C);
    SET_LO8(ecx, MEM8(0x571864));
    SET_LO8(ecx, LO8(ecx) | 2);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x571758);
    PUSH32(esp, 4);
    MEM8(0x571864) = LO8(ecx);
    MEM32(0x571858) = eax;
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x0017A758u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A758: ;
    esp = esp + 8;

loc_0017A75B: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017A770
 * Original: 0x0017A770 - 0x0017A7AB (59 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017A770: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017A778u); RECOMP_ABI_CALL(0x00173160u, sub_00173160); /* call 0x00173160 */

loc_0017A778: ;
    PUSH32(esp, 0x0017A77Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017A77D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0017A787u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A787: ;
    eax = eax >> 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017A7A9; /* je: equal / zero */

loc_0017A78E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x0017A797u); RECOMP_ABI_CALL(0x0017A6B0u, sub_0017A6B0); /* call 0x0017A6B0 */

loc_0017A797: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017A7A9; /* je: equal / zero */

loc_0017A79B: ;
    PUSH32(esp, 0x0017A7A0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017A7A0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017A7A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A7A9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017A7B0
 * Original: 0x0017A7B0 - 0x0017A7D4 (36 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017A7B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017A7B8u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017A7B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017A7D0; /* jle: less or equal (signed <=) */

loc_0017A7BC: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0017A7C5u); RECOMP_ABI_CALL(0x0017A6B0u, sub_0017A6B0); /* call 0x0017A6B0 */

loc_0017A7C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017A7D0; /* je: equal / zero */

loc_0017A7C9: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017A7D0: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017A7E0
 * Original: 0x0017A7E0 - 0x0017A7E5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A7E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017A7E0: ;
    g_seh_ebp = ebp; sub_00173020(); return; /* tail jmp 0x00173020 */

}

/**
 * sub_0017A7F0
 * Original: 0x0017A7F0 - 0x0017A8FA (266 bytes, 80 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A7F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017A7F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354790);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0017A817u); RECOMP_ABI_CALL(0x00173890u, sub_00173890); /* call 0x00173890 */

loc_0017A817: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF9BC);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0017A827u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017A827: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x0017A83Bu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017A83B: ;
    ecx = esp + 0xC;
    ebp = eax;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017A84Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017A84E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017A856; /* je: equal / zero */

loc_0017A852: ;
    MEM8(esi + 0x6C) = MEM8(esi + 0x6C) | 1;

loc_0017A856: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DF9AC);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0017A866u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017A866: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0017A87Au); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017A87A: ;
    ecx = esp + 0xC;
    edi = eax;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017A88Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017A88D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017A895; /* je: equal / zero */

loc_0017A891: ;
    MEM8(esi + 0x6C) = MEM8(esi + 0x6C) | 2;

loc_0017A895: ;
    PUSH32(esp, 0x0017A89Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017A89A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x0017A8A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A8A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A8AF; /* jne: not equal / not zero */

loc_0017A8A8: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0017A8BB; /* js: sign (negative) */

loc_0017A8AF: ;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3A), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017A8BB; /* jne: not equal / not zero */

loc_0017A8B5: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x39), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017A8E6; /* je: equal / zero */

loc_0017A8BB: ;
    PUSH32(esp, 0x0017A8C0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017A8C0: ;
    ecx = MEM32(0x458674);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x0017A8D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A8D8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0017A8E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A8E6: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017A900
 * Original: 0x0017A900 - 0x0017AA1B (283 bytes, 107 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A900(void)
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

loc_0017A900: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0017A910u); RECOMP_ABI_CALL(0x00173340u, sub_00173340); /* call 0x00173340 */

loc_0017A910: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017A9B9; /* je: equal / zero */

loc_0017A918: ;
    PUSH32(esp, 0x0017A91Du); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0017A91D: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0017A92D; /* jne: not equal / not zero */

loc_0017A926: ;
    eax = 0x3C806C;
    goto loc_0017A943;

loc_0017A92D: ;
    PUSH32(esp, 0x0017A932u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017A932: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x1008;

loc_0017A943: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017A94Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A94B: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017AA14; /* je: equal / zero */

loc_0017A956: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0017A95Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A95B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017AA14; /* je: equal / zero */

loc_0017A963: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017AA14; /* jne: not equal / not zero */

loc_0017A96D: ;
    PUSH32(esp, 0x0017A972u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017A972: ;
    edi = eax;
    PUSH32(esp, 0x0017A979u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017A979: ;
    esi = MEM32(esi + 0x3C);
    edx = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017A985u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A985: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017A98Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A98C: ;
    esi = eax;
    eax = MEM32(edi);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0017A99Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A99E: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0017A9A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A9A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp); PUSH32(esp, 0x0017A9B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A9B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0017A9B9: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017AA14; /* je: equal / zero */

loc_0017A9C0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0017A9C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A9C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017AA14; /* je: equal / zero */

loc_0017A9C9: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017AA14; /* jne: not equal / not zero */

loc_0017A9CF: ;
    PUSH32(esp, 0x0017A9D4u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017A9D4: ;
    edi = eax;
    PUSH32(esp, 0x0017A9DBu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017A9DB: ;
    esi = MEM32(esi + 0x3C);
    edx = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017A9E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A9E7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017A9EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017A9EE: ;
    esi = eax;
    eax = MEM32(edi);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0017AA00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AA00: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0017AA0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AA0B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0017AA14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AA14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0017AA20
 * Original: 0x0017AA20 - 0x0017AA38 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017AA20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017AA32; /* je: equal / zero */

loc_0017AA28: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    eax = 0x3CB044;
    if (CMP_NE(_fa, _fb)) goto loc_0017AA37; /* jne: not equal / not zero */

loc_0017AA32: ;
    eax = 0x3C806C;

loc_0017AA37: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017AA40
 * Original: 0x0017AA40 - 0x0017AA97 (87 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0017AA40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017AA46u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AA46: ;
    esi = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0017AA52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AA52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0017AA69; /* jne: not equal / not zero */

loc_0017AA57: ;
    PUSH32(esp, 0x0017AA5Cu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AA5C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0017AA67u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AA67: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017AA69: ;
    PUSH32(esp, 0x0017AA6Eu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AA6E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0017AA76u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AA76: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017AA81; /* je: equal / zero */

loc_0017AA7A: ;
    eax = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017AA81: ;
    PUSH32(esp, 0x0017AA86u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AA86: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0017AA8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AA8E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 5;
    esp += 4; return; /* ret */

}

/**
 * sub_0017AAA0
 * Original: 0x0017AAA0 - 0x0017AAA5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AAA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017AAA0: ;
    g_seh_ebp = ebp; sub_001608E0(); return; /* tail jmp 0x001608E0 */

}

/**
 * sub_0017AAB0
 * Original: 0x0017AAB0 - 0x0017AACA (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AAB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017AAB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017AAB8u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AAB8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x0017AAC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AAC2: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00163C00(); return; /* tail jmp 0x00163C00 */

}

/**
 * sub_0017AAD0
 * Original: 0x0017AAD0 - 0x0017AB6B (155 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017AAD0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if ((_fa == 0)) goto loc_0017AB28; /* je: equal / zero */

loc_0017AADB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0017AAE5; /* je: equal / zero */

loc_0017AADE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0017AAE5: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DFA04);
    ecx = esi;
    PUSH32(esp, 0x0017AAF6u); RECOMP_ABI_CALL(0x00163430u, sub_00163430); /* call 0x00163430 */

loc_0017AAF6: ;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3DFA04);
    ecx = esi;
    PUSH32(esp, 0x0017AB16u); RECOMP_ABI_CALL(0x001629D0u, sub_001629D0); /* call 0x001629D0 */

loc_0017AB16: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DFA04);
    ecx = esi;
    PUSH32(esp, 0x0017AB23u); RECOMP_ABI_CALL(0x00162990u, sub_00162990); /* call 0x00162990 */

loc_0017AB23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0017AB28: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DF9F8);
    ecx = esi;
    PUSH32(esp, 0x0017AB39u); RECOMP_ABI_CALL(0x00163430u, sub_00163430); /* call 0x00163430 */

loc_0017AB39: ;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3DF9F8);
    ecx = esi;
    PUSH32(esp, 0x0017AB59u); RECOMP_ABI_CALL(0x001629D0u, sub_001629D0); /* call 0x001629D0 */

loc_0017AB59: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DF9F8);
    ecx = esi;
    PUSH32(esp, 0x0017AB66u); RECOMP_ABI_CALL(0x00162990u, sub_00162990); /* call 0x00162990 */

loc_0017AB66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0017AB70
 * Original: 0x0017AB70 - 0x0017AB95 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AB70(void)
{

loc_0017AB70: ;
    if (xml1_stash_menu_labels(ecx, 0, 0)) { esp += 4; return; }
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017AB78u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AB78: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017AB7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AB7F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, 0x3DE170);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017AB90u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017AB90: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017ABA0
 * Original: 0x0017ABA0 - 0x0017AC0C (108 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017ABA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017ABA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x458004);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFA24);
    esi = ecx;
    PUSH32(esp, 0x0017ABBBu); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017ABBB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017ABC1u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017ABC1: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017ABF5; /* je: equal / zero */

loc_0017ABC8: ;
    _fa = (uint32_t)(MEM32(esi + 0xED0)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xED0), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017ABF5; /* je: equal / zero */

loc_0017ABD1: ;
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFA18);
    ecx = eax;
    PUSH32(esp, 0x0017ABE4u); RECOMP_ABI_CALL(0x001742F0u, sub_001742F0); /* call 0x001742F0 */

loc_0017ABE4: ;
    MEM32(esi + 0xED0) = 4;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017ABF5: ;
    PUSH32(esp, 0x0017ABFAu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017ABFA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0017AC05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AC05: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017AC10
 * Original: 0x0017AC10 - 0x0017ACDE (206 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AC10(void)
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

loc_0017AC10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x458004);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFA24);
    esi = ecx;
    PUSH32(esp, 0x0017AC2Cu); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017AC2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017AC32u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017AC32: ;
    edi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017ACDB; /* je: equal / zero */

loc_0017AC3F: ;
    eax = MEM32(esi + 0xED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017ACC1; /* je: equal / zero */

loc_0017AC49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017ACC1; /* je: equal / zero */

loc_0017AC4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017AC89; /* jne: not equal / not zero */

loc_0017AC53: ;
    ecx = edi;
    PUSH32(esp, 0x0017AC5Au); RECOMP_ABI_CALL(0x001741D0u, sub_001741D0); /* call 0x001741D0 */

loc_0017AC5A: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0017ACDB; /* jp: parity */

loc_0017AC69: ;
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFA3C);
    ecx = edi;
    MEM32(esi + 0xED0) = 3;
    PUSH32(esp, 0x0017AC86u); RECOMP_ABI_CALL(0x001742F0u, sub_001742F0); /* call 0x001742F0 */

loc_0017AC86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017AC89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017ACDB; /* jne: not equal / not zero */

loc_0017AC8E: ;
    ecx = edi;
    PUSH32(esp, 0x0017AC95u); RECOMP_ABI_CALL(0x001741D0u, sub_001741D0); /* call 0x001741D0 */

loc_0017AC95: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0017ACDB; /* jp: parity */

loc_0017ACA4: ;
    MEM32(esi + 0xED0) = 0;
    PUSH32(esp, 0x0017ACB3u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017ACB3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0017ACBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ACBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017ACC1: ;
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DFA30);
    ecx = edi;
    MEM32(esi + 0xED0) = eax;
    PUSH32(esp, 0x0017ACDBu); RECOMP_ABI_CALL(0x001742F0u, sub_001742F0); /* call 0x001742F0 */

loc_0017ACDB: ;
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
 * sub_0017ACE0
 * Original: 0x0017ACE0 - 0x0017AD10 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017ACE0(void)
{

loc_0017ACE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017ACE7u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017ACE7: ;
    esi = eax;
    PUSH32(esp, 0x0017ACEEu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017ACEE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0017ACF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ACF5: ;
    edi = SX16(LO16(eax));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0017ACFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ACFF: ;
    ecx = SX16(LO16(eax));
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x7D0);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017AD10
 * Original: 0x0017AD10 - 0x0017AD44 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017AD10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017AD21; /* jge: greater or equal (signed >=) */

loc_0017AD1A: ;
    esi = 0xFFFFFFFEu;
    goto loc_0017AD2B;

loc_0017AD21: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0017AD2B; /* jle: less or equal (signed <=) */

loc_0017AD26: ;
    esi = 2;

loc_0017AD2B: ;
    PUSH32(esp, 0x0017AD30u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017AD30: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi * 4 + 0x3DF9EC));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017AD42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AD42: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017AD50
 * Original: 0x0017AD50 - 0x0017AD72 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AD50(void)
{

loc_0017AD50: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = 0; /* xor self */
    SET_LO8(eax, 0xFD);
    SET_LO8(eax, LO8(eax) - LO8(edx));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017AD60u); RECOMP_ABI_CALL(0x000C0470u, sub_000C0470); /* call 0x000C0470 */

loc_0017AD60: ;
    eax = ZX8(MEM8(eax + 0x32));
    eax = (uint32_t)((int32_t)eax * (int32_t)eax);
    eax = eax + eax * 4;
    esp = esp + 4;
    eax = eax << 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017AD80
 * Original: 0x0017AD80 - 0x0017AD93 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017AD80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017AD92; /* je: equal / zero */

loc_0017AD88: ;
    MEM8(eax) = 0xFF;
    MEM32(eax + 4) = 0;

loc_0017AD92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017ADA0
 * Original: 0x0017ADA0 - 0x0017AFD0 (560 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017ADA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017ADA0: ;
    if (xml1_stash_menu_eligibility(ecx)) { esp += 4; return; }
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x458028);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DF9F8);
    PUSH32(esp, 0x0017ADBCu); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017ADBC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017ADC2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017ADC2: ;
    ebp = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017AFCB; /* je: equal / zero */

loc_0017ADCF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017ADD5u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017ADD5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017ADDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017ADDC: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    ecx = ebp;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0x0017ADEDu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017ADED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017AFBE; /* jle: less or equal (signed <=) */

loc_0017ADF5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_0017ADF7: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0017ADFFu); RECOMP_ABI_CALL(0x00177D90u, sub_00177D90); /* call 0x00177D90 */

loc_0017ADFF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0017AEFC; /* jl: less (signed <) */

loc_0017AE09: ;
    PUSH32(esp, 0x0017AE0Eu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AE0E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0017AE16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AE16: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0017AE1Fu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AE1F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0017AE27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AE27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017AE5B; /* je: equal / zero */

loc_0017AE2B: ;
    PUSH32(esp, 0x0017AE30u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AE30: ;
    esi = eax;
    PUSH32(esp, 0x0017AE37u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AE37: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0017AE40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AE40: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM16(esp + 0x14) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0017AE4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AE4C: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x13) = 1;
    if (CMP_AE(_fa, _fb)) goto loc_0017AE60; /* jae: above or equal (unsigned >=) */

loc_0017AE5B: ;
    MEM8(esp + 0x13) = 0;

loc_0017AE60: ;
    PUSH32(esp, 0x0017AE65u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AE65: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0017AE6Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AE6D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017AEA1; /* je: equal / zero */

loc_0017AE71: ;
    PUSH32(esp, 0x0017AE76u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AE76: ;
    esi = eax;
    PUSH32(esp, 0x0017AE7Du); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AE7D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0017AE86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AE86: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM16(esp + 0x14) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0017AE92u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AE92: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x14) = 1;
    if (CMP_AE(_fa, _fb)) goto loc_0017AEA6; /* jae: above or equal (unsigned >=) */

loc_0017AEA1: ;
    MEM8(esp + 0x14) = 0;

loc_0017AEA6: ;
    PUSH32(esp, 0x0017AEABu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AEAB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0017AEB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AEB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0017AECE; /* jne: not equal / not zero */

loc_0017AEB8: ;
    PUSH32(esp, 0x0017AEBDu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AEBD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0017AEC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AEC4: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x14 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0017AECE; /* jb: below (unsigned <) */

loc_0017AECA: ;
    SET_LO8(eax, 1);
    goto loc_0017AED0;

loc_0017AECE: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */

loc_0017AED0: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0017AEF5; /* jg: greater (signed >) */

loc_0017AEDA: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017AEF5; /* jne: not equal / not zero */

loc_0017AEE2: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017AEF5; /* jne: not equal / not zero */

loc_0017AEEA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017AEF5; /* jne: not equal / not zero */

loc_0017AEEE: ;
    SET_LO8(eax, 1);
    goto loc_0017AF9F;

loc_0017AEF5: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    goto loc_0017AF9F;

loc_0017AEFC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0017AF76; /* jne: not equal / not zero */

loc_0017AF01: ;
    PUSH32(esp, 0x0017AF06u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AF06: ;
    esi = eax;
    PUSH32(esp, 0x0017AF0Du); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AF0D: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0017AF16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AF16: ;
    esi = SX16(LO16(eax));
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0017AF20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AF20: ;
    ecx = SX16(LO16(eax));
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x7D0);
    PUSH32(esp, 0x0017AF31u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017AF31: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0017AF38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017AF38: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x14 (16-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0017AF61; /* jg: greater (signed >) */

loc_0017AF48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017AF61; /* jne: not equal / not zero */

loc_0017AF4C: ;
    SET_LO8(eax, 1);
    ecx = ebp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017AF5Bu); RECOMP_ABI_CALL(0x001782F0u, sub_001782F0); /* call 0x001782F0 */

loc_0017AF5B: ;
    edi = MEM32(esp + 0x14);
    goto loc_0017AFA8;

loc_0017AF61: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    ecx = ebp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017AF70u); RECOMP_ABI_CALL(0x001782F0u, sub_001782F0); /* call 0x001782F0 */

loc_0017AF70: ;
    edi = MEM32(esp + 0x14);
    goto loc_0017AFA8;

loc_0017AF76: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFDu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0017AFA8; /* jg: greater (signed >) */

loc_0017AF7B: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, 0xFD);
    _cf = (int)((uint32_t)(LO8(ecx)) < (uint32_t)(LO8(ebx)));
    SET_LO8(ecx, LO8(ecx) - LO8(ebx));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0017AF87u); RECOMP_ABI_CALL(0x000C0470u, sub_000C0470); /* call 0x000C0470 */

loc_0017AF87: ;
    eax = ZX8(MEM8(eax + 0x32));
    esi = MEM32(esp + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)eax);
    edx = eax + eax * 4;
    if (1) _cf = (int)(((edx) >> (32 - (1))) & 1);
    edx = edx << 1;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */

loc_0017AF9F: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017AFA8u); RECOMP_ABI_CALL(0x001782F0u, sub_001782F0); /* call 0x001782F0 */

loc_0017AFA8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x0017AFB4u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017AFB4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0017ADF7; /* jl: less (signed <) */

loc_0017AFBC: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0017AFBE: ;
    edx = MEM32(ebp);
    POP32(esp, edi);
    ecx = ebp;
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x64)); return; /* indirect tail jmp */

loc_0017AFCB: ;
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0017AFD0
 * Original: 0x0017AFD0 - 0x0017B060 (144 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017AFD0: ;
    eax = MEM32(ecx + 0x800);
    PUSH32(esp, esi);
    esi = ecx + 0x800;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017AFFD; /* jne: not equal / not zero */

loc_0017AFE3: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017B045; /* jge: greater or equal (signed >=) */

loc_0017AFF1: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017AFE3; /* je: equal / zero */

loc_0017AFFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B00A; /* jne: not equal / not zero */

loc_0017B004: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0017B00A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B014; /* jne: not equal / not zero */

loc_0017B00E: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0017B014: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B01E; /* jne: not equal / not zero */

loc_0017B018: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0017B01E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B029; /* jne: not equal / not zero */

loc_0017B022: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017B022; /* je: equal / zero */

loc_0017B029: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017B045; /* jge: greater or equal (signed >=) */

loc_0017B031: ;
    eax = edx;

loc_0017B033: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017B03Eu); RECOMP_ABI_CALL(0x000A2F60u, sub_000A2F60); /* call 0x000A2F60 */

loc_0017B03E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017B033; /* jl: less (signed <) */

loc_0017B045: ;
    ecx = 0; /* xor self */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017B060
 * Original: 0x0017B060 - 0x0017B1A8 (328 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017B060: ;
    esp = esp - 0x8C;
    eax = MEM32(0x47A050);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x458004);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFA24);
    MEM32(esp + 0xA0) = eax;
    edi = ecx;
    PUSH32(esp, 0x0017B08Du); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017B08D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017B093u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017B093: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0017B194; /* je: equal / zero */

loc_0017B0A2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017B0AAu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017B0AA: ;
    esi = eax;
    eax = MEM32(edi);
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0017B0B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B0B5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x3C); PUSH32(esp, 0x0017B0BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B0BB: ;
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x0017B0C4u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017B0C4: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017B0D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B0D0: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B0DD; /* jne: not equal / not zero */

loc_0017B0D6: ;
    ebp = 0x3C806C;
    goto loc_0017B0F3;

loc_0017B0DD: ;
    PUSH32(esp, 0x0017B0E2u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017B0E2: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    ebp = ecx + eax + 0x8008;

loc_0017B0F3: ;
    PUSH32(esp, 0x0017B0F8u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017B0F8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0017B100u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B100: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B10D; /* jne: not equal / not zero */

loc_0017B106: ;
    edi = 0x3C806C;
    goto loc_0017B123;

loc_0017B10D: ;
    PUSH32(esp, 0x0017B112u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017B112: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    edi = ecx + eax + 0x8008;

loc_0017B123: ;
    PUSH32(esp, 0x0017B128u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017B128: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0017B130u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B130: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B13D; /* jne: not equal / not zero */

loc_0017B136: ;
    esi = 0x3C806C;
    goto loc_0017B153;

loc_0017B13D: ;
    PUSH32(esp, 0x0017B142u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017B142: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x8008;

loc_0017B153: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3DE73C);
    edx = esp + 0x24;
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0x0017B16Eu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0017B16E: ;
    esp = esp + 0x14;
    PUSH32(esp, 0x0017B176u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_0017B176: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0017B184u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B184: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0xD);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017B191u); RECOMP_ABI_CALL(0x00174350u, sub_00174350); /* call 0x00174350 */

loc_0017B191: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0017B194: ;
    ecx = MEM32(esp + 0x8C);
    POP32(esp, edi);
    PUSH32(esp, 0x0017B1A1u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017B1A1: ;
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_0017B1B0
 * Original: 0x0017B1B0 - 0x0017B56B (955 bytes, 313 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B1B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017B1B0: ;
    esp = esp - 0x118;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x124) = eax;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0x0017B1D1u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B1D1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0017B1DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B1DD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x458028);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DF9F8);
    ecx = ebp;
    MEM8(esp + 0x38) = 0;
    PUSH32(esp, 0x0017B1FCu); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017B1FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017B202u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017B202: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0x457F84);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFA04);
    ecx = ebp;
    esi = eax;
    PUSH32(esp, 0x0017B221u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017B221: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017B227u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017B227: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017B235; /* je: equal / zero */

loc_0017B22E: ;
    ecx = eax;
    PUSH32(esp, 0x0017B235u); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_0017B235: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017B439; /* je: equal / zero */

loc_0017B23D: ;
    ecx = esi;
    PUSH32(esp, 0x0017B244u); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_0017B244: ;
    PUSH32(esp, 0x0017B249u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B249: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0017B250u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B250: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0017B259u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B259: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017B260u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B260: ;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0017B26Au); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B26A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0017B274u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B274: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017B439; /* jle: less or equal (signed <=) */

loc_0017B27C: ;
    MEM32(esp + 0x1C) = 0;

loc_0017B284: ;
    PUSH32(esp, 0x0017B289u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B289: ;
    { int stash = xml1_stash_menu_stock(MEM32(esp+0x10), eax, MEM8(esp+0x18)); if (stash >= 0) { ebp = MEM32(esp+0x18); if (stash) goto loc_0017B31C; goto loc_0017B40D; } }
    ebp = MEM32(esp + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0017B295u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B295: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0017B40D; /* jbe: below or equal (unsigned <=) */

loc_0017B29D: ;
    PUSH32(esp, 0x0017B2A2u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B2A2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0017B2AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B2AA: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM16(esp + 0x14)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x14), LO16(eax) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017B40D; /* jl: less (signed <) */

loc_0017B2B8: ;
    PUSH32(esp, 0x0017B2BDu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B2BD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0017B2C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B2C5: ;
    ecx = MEM32(esp + 0x10);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0017B2D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B2D0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017B40D; /* jne: not equal / not zero */

loc_0017B2D8: ;
    PUSH32(esp, 0x0017B2DDu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B2DD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0017B2E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B2E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B40D; /* jne: not equal / not zero */

loc_0017B2F0: ;
    PUSH32(esp, 0x0017B2F5u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B2F5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0017B300u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B300: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017B31C; /* je: equal / zero */

loc_0017B304: ;
    PUSH32(esp, 0x0017B309u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B309: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0017B314u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B314: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B40D; /* jne: not equal / not zero */

loc_0017B31C: ;
    PUSH32(esp, 0x0017B321u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B321: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017B329u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B329: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x458BE8); PUSH32(esp, 0x0017B333u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B333: ;
    esp = esp + 4;
    ebx = eax;
    PUSH32(esp, 0x0017B33Du); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B33D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017B34Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B34A: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B357; /* jne: not equal / not zero */

loc_0017B350: ;
    ecx = 0x3C806C;
    goto loc_0017B36D;

loc_0017B357: ;
    PUSH32(esp, 0x0017B35Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017B35C: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    ecx = edx + eax + 0x8008;

loc_0017B36D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017B37B; /* je: equal / zero */

loc_0017B371: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    eax = 0x3CB044;
    if (CMP_NE(_fa, _fb)) goto loc_0017B380; /* jne: not equal / not zero */

loc_0017B37B: ;
    eax = 0x3C806C;

loc_0017B380: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esp + 0x30;
    PUSH32(esp, 0x3CE048);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017B392u); RECOMP_ABI_CALL(0x00199B80u, sub_00199B80); /* call 0x00199B80 */

loc_0017B392: ;
    edx = MEM32(esi);
    esp = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017B3A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B3A3: ;
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0x0017B3AFu); RECOMP_ABI_CALL(0x0017AA40u, sub_0017AA40); /* call 0x0017AA40 */

loc_0017B3AF: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0017B3BBu); RECOMP_ABI_CALL(0x001784D0u, sub_001784D0); /* call 0x001784D0 */

loc_0017B3BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0017B3C4u); RECOMP_ABI_CALL(0x00177D50u, sub_00177D50); /* call 0x00177D50 */

loc_0017B3C4: ;
    PUSH32(esp, 0x0017B3C9u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B3C9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0017B3D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B3D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017B3E1; /* je: equal / zero */

loc_0017B3D8: ;
    PUSH32(esp, 0x0017B3DDu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017B3DD: ;
    PUSH32(esp, 0xC);
    goto loc_0017B3FA;

loc_0017B3E1: ;
    PUSH32(esp, 0x0017B3E6u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B3E6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0017B3EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B3EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017B40D; /* jne: not equal / not zero */

loc_0017B3F3: ;
    PUSH32(esp, 0x0017B3F8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017B3F8: ;
    PUSH32(esp, 0xB);

loc_0017B3FA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0017B404u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B404: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017B40Du); RECOMP_ABI_CALL(0x001783A0u, sub_001783A0); /* call 0x001783A0 */

loc_0017B40D: ;
    SET_LO8(ebx, MEM8(esp + 0x18));
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0017B41Cu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B41C: ;
    edx = MEM32(eax);
    edi = ZX8(LO8(ebx));
    ecx = eax;
    MEM32(esp + 0x1C) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0017B42Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B42D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017B284; /* jl: less (signed <) */

loc_0017B435: ;
    ebp = MEM32(esp + 0x10);

loc_0017B439: ;
    if (raven_stash_menu_enabled(ebp)) goto loc_0017B54D;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0017B441u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B441: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B490; /* jne: not equal / not zero */

loc_0017B445: ;
    PUSH32(esp, 0x0017B44Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017B44A: ;
    edx = MEM32(eax);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x411);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017B45Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B45A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x60); PUSH32(esp, 0x0017B460u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B460: ;
    edi = eax;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0017B46Cu); RECOMP_ABI_CALL(0x001784D0u, sub_001784D0); /* call 0x001784D0 */

loc_0017B46C: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0017B476u); RECOMP_ABI_CALL(0x00177D50u, sub_00177D50); /* call 0x00177D50 */

loc_0017B476: ;
    PUSH32(esp, 0x0017B47Bu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017B47B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0017B487u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B487: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0017B490u); RECOMP_ABI_CALL(0x001783A0u, sub_001783A0); /* call 0x001783A0 */

loc_0017B490: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0017B498u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B498: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B54D; /* jne: not equal / not zero */

loc_0017B4A0: ;
    PUSH32(esp, 0x0017B4A5u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017B4A5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0017B4ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B4AC: ;
    SET_LO8(ebx, 0); /* xor self */
    MEM32(esp + 0x14) = eax;
    MEM8(esp + 0x10) = LO8(ebx);
    PUSH32(esp, 0x0017B4BBu); RECOMP_ABI_CALL(0x000BF960u, sub_000BF960); /* call 0x000BF960 */

loc_0017B4BB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0017B54D; /* jbe: below or equal (unsigned <=) */

loc_0017B4C3: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017B4CDu); RECOMP_ABI_CALL(0x000C0470u, sub_000C0470); /* call 0x000C0470 */

loc_0017B4CD: ;
    SET_LO8(ecx, MEM8(eax + 0x2F));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B53A; /* jne: not equal / not zero */

loc_0017B4D8: ;
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B53A; /* jne: not equal / not zero */

loc_0017B4DF: ;
    eax = ZX8(MEM8(eax + 0x32));
    ecx = MEM32(esp + 0x14);
    ecx = ecx + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017B53A; /* jge: greater or equal (signed >=) */

loc_0017B4EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017B4F4u); RECOMP_ABI_CALL(0x000C0470u, sub_000C0470); /* call 0x000C0470 */

loc_0017B4F4: ;
    edx = MEM32(esi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017B501u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B501: ;
    edi = eax;
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0017B50Du); RECOMP_ABI_CALL(0x001784D0u, sub_001784D0); /* call 0x001784D0 */

loc_0017B50D: ;
    eax = ZX8(LO8(ebx));
    ecx = 0xFFFFFFFDu;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0017B520u); RECOMP_ABI_CALL(0x00177D50u, sub_00177D50); /* call 0x00177D50 */

loc_0017B520: ;
    PUSH32(esp, 0x0017B525u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017B525: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0017B531u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B531: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0017B53Au); RECOMP_ABI_CALL(0x001783A0u, sub_001783A0); /* call 0x001783A0 */

loc_0017B53A: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x10) = LO8(ebx);
    PUSH32(esp, 0x0017B545u); RECOMP_ABI_CALL(0x000BF960u, sub_000BF960); /* call 0x000BF960 */

loc_0017B545: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0017B4C3; /* jb: below (unsigned <) */

loc_0017B54D: ;
    ecx = ebp;
    PUSH32(esp, 0x0017B554u); RECOMP_ABI_CALL(0x0017ADA0u, sub_0017ADA0); /* call 0x0017ADA0 */

loc_0017B554: ;
    ecx = MEM32(esp + 0x124);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0017B564u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017B564: ;
    esp = esp + 0x118;
    esp += 4; return; /* ret */

}

/**
 * sub_0017B570
 * Original: 0x0017B570 - 0x0017B5B8 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017B570: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x820);
    eax = esi + edi * 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017B583u); RECOMP_ABI_CALL(0x0017AD80u, sub_0017AD80); /* call 0x0017AD80 */

loc_0017B583: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x800;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x820);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x820) = eax;
    eax = esi + eax * 8 + -8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017B5C0
 * Original: 0x0017B5C0 - 0x0017B83D (637 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B5C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017B5C0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0017B5D2u); RECOMP_ABI_CALL(0x0017AFD0u, sub_0017AFD0); /* call 0x0017AFD0 */

loc_0017B5D2: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi + 0x820) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0017B65B; /* je: equal / zero */

loc_0017B5E4: ;
    PUSH32(esp, 0x0017B5E9u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0017B5E9: ;
    ecx = eax;
    PUSH32(esp, 0x0017B5F0u); RECOMP_ABI_CALL(0x00047690u, sub_00047690); /* call 0x00047690 */

loc_0017B5F0: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017B65B; /* jle: less or equal (signed <=) */

loc_0017B5F6: ;
    edi = MEM32(esi + 0x820);
    eax = esi + edi * 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017B605u); RECOMP_ABI_CALL(0x0017AD80u, sub_0017AD80); /* call 0x0017AD80 */

loc_0017B605: ;
    ebx = MEM32(esp + 0x2C);
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x800;
    ecx = edi;
    edi = MEM32(eax);
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    esp = esp + 4;
    ecx = ebx;
    edi = edi | edx;
    MEM32(eax) = edi;
    edx = MEM32(esi + 0x820);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    MEM32(esi + 0x820) = edx;
    edi = edx;
    PUSH32(esp, 0x0017B642u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0017B642: ;
    ecx = eax;
    PUSH32(esp, 0x0017B649u); RECOMP_ABI_CALL(0x00047820u, sub_00047820); /* call 0x00047820 */

loc_0017B649: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM8(esi + edi * 8 + -8) = LO8(eax);
    eax = MEM32(esi + 0x820);
    MEM32(esi + eax * 8 + -4) = ebx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0017B5F6; /* jg: greater (signed >) */

loc_0017B65B: ;
    SET_LO8(ebx, 0); /* xor self */
    MEM8(esp + 0x14) = LO8(ebx);
    PUSH32(esp, 0x0017B666u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B666: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0017B670u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B670: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017B833; /* jle: less or equal (signed <=) */

loc_0017B678: ;
    MEM32(esp + 0x18) = 0;

loc_0017B680: ;
    PUSH32(esp, 0x0017B685u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B685: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0017B691u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B691: ;
    SET_LO8(ecx, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0017B6A7; /* jne: not equal / not zero */

loc_0017B69D: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017B80F; /* jne: not equal / not zero */

loc_0017B6A7: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B789; /* jne: not equal / not zero */

loc_0017B6B3: ;
    MEM8(esp + 0x24) = 1;
    PUSH32(esp, 0x0017B6BDu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017B6BD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0017B6C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B6C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017B789; /* je: equal / zero */

loc_0017B6D1: ;
    edi = MEM32(esp + 0x24);

loc_0017B6D5: ;
    PUSH32(esp, 0x0017B6DAu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017B6DA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0017B6E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B6E2: ;
    ebp = eax;
    ecx = ebp;
    PUSH32(esp, 0x0017B6EBu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0017B6EB: ;
    ecx = eax;
    PUSH32(esp, 0x0017B6F2u); RECOMP_ABI_CALL(0x00047690u, sub_00047690); /* call 0x00047690 */

loc_0017B6F2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017B769; /* je: equal / zero */

loc_0017B6F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017B769; /* jle: less or equal (signed <=) */

loc_0017B6FA: ;
    edi = eax + -1;
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x0017B709u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0017B709: ;
    ecx = eax;
    PUSH32(esp, 0x0017B710u); RECOMP_ABI_CALL(0x00047820u, sub_00047820); /* call 0x00047820 */

loc_0017B710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017B765; /* jne: not equal / not zero */

loc_0017B716: ;
    edi = MEM32(esi + 0x820);
    eax = esi + edi * 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017B725u); RECOMP_ABI_CALL(0x0017AD80u, sub_0017AD80); /* call 0x0017AD80 */

loc_0017B725: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x800;
    ecx = edi;
    edi = MEM32(esp + 0x20);
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x820);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x820) = eax;
    MEM8(esi + eax * 8 + -8) = LO8(ebx);
    eax = MEM32(esi + 0x820);
    MEM32(esi + eax * 8 + -4) = ebp;

loc_0017B765: ;
    eax = edi;
    goto loc_0017B6F6;

loc_0017B769: ;
    MEM8(esp + 0x24) = MEM8(esp + 0x24) + 1;
    _fa = (uint32_t)(MEM8(esp + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0017B772u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017B772: ;
    edi = MEM32(esp + 0x24);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0017B781u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B781: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B6D5; /* jne: not equal / not zero */

loc_0017B789: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    ebp = ZX8(MEM8(eax + 0x1C));
    if (CMP_NE(_fa, _fb)) goto loc_0017B7EB; /* jne: not equal / not zero */

loc_0017B797: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017B7EB; /* jle: less or equal (signed <=) */

loc_0017B79B: ;
    edi = MEM32(esi + 0x820);
    eax = esi + edi * 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017B7AAu); RECOMP_ABI_CALL(0x0017AD80u, sub_0017AD80); /* call 0x0017AD80 */

loc_0017B7AA: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x800;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    edi = MEM32(esi + 0x820);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    MEM32(esi + 0x820) = edi;
    MEM8(esi + eax * 8 + -8) = LO8(ebx);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0xC);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017B797; /* je: equal / zero */

loc_0017B7EB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xF (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0017B80F; /* jbe: below or equal (unsigned <=) */

loc_0017B7F0: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017B80F; /* je: equal / zero */

loc_0017B7FA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017B80F; /* jle: less or equal (signed <=) */

loc_0017B7FE: ;
    ecx = esi;
    PUSH32(esp, 0x0017B805u); RECOMP_ABI_CALL(0x0017B570u, sub_0017B570); /* call 0x0017B570 */

loc_0017B805: ;
    edx = MEM32(esi + 0x820);
    MEM8(esi + edx * 8 + -8) = LO8(ebx);

loc_0017B80F: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x14) = LO8(ebx);
    PUSH32(esp, 0x0017B81Au); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B81A: ;
    edx = MEM32(eax);
    edi = ZX8(LO8(ebx));
    ecx = eax;
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0017B82Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B82B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017B680; /* jl: less (signed <) */

loc_0017B833: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0017B840
 * Original: 0x0017B840 - 0x0017B868 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B840(void)
{

loc_0017B840: ;
    eax = ecx;
    ecx = 0; /* xor self */
    edx = eax + 0x800;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(eax + 0x820) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0017B870
 * Original: 0x0017B870 - 0x0017B875 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017B870: ;
    g_seh_ebp = ebp; sub_0017AFD0(); return; /* tail jmp 0x0017AFD0 */

}

/**
 * sub_0017B880
 * Original: 0x0017B880 - 0x0017BB15 (661 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B880(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017B880: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3547AB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x138;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x144) = eax;
    MEM8(esp + 0x44) = 0;
    PUSH32(esp, 0x0017B8B5u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B8B5: ;
    edi = MEM32(esp + 0x160);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017B8C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B8C4: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x458BE8); PUSH32(esp, 0x0017B8CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B8CE: ;
    esp = esp + 4;
    ebp = eax;
    PUSH32(esp, 0x0017B8D8u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B8D8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017B8E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B8E5: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B8F2; /* jne: not equal / not zero */

loc_0017B8EB: ;
    eax = 0x3C806C;
    goto loc_0017B908;

loc_0017B8F2: ;
    PUSH32(esp, 0x0017B8F7u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017B8F7: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x8008;

loc_0017B908: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017B917; /* je: equal / zero */

loc_0017B90C: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    ecx = 0x3CB044;
    if (CMP_NE(_fa, _fb)) goto loc_0017B91C; /* jne: not equal / not zero */

loc_0017B917: ;
    ecx = 0x3C806C;

loc_0017B91C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    eax = esp + 0x50;
    PUSH32(esp, 0x3CE048);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017B92Eu); RECOMP_ABI_CALL(0x00199B80u, sub_00199B80); /* call 0x00199B80 */

loc_0017B92E: ;
    esp = esp + 0x14;
    PUSH32(esp, 0x0017B936u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B936: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0017B93Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B93E: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017B9C0; /* je: equal / zero */

loc_0017B944: ;
    PUSH32(esp, 0x0017B949u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B949: ;
    ebx = eax;
    PUSH32(esp, 0x0017B950u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017B950: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017B95Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B95D: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017B96D; /* jne: not equal / not zero */

loc_0017B963: ;
    MEM32(esp + 0x10) = 0x3C806C;
    goto loc_0017B987;

loc_0017B96D: ;
    PUSH32(esp, 0x0017B972u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017B972: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x8008;
    MEM32(esp + 0x10) = eax;

loc_0017B987: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017B996; /* je: equal / zero */

loc_0017B98B: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    esi = 0x3CB044;
    if (CMP_NE(_fa, _fb)) goto loc_0017B99B; /* jne: not equal / not zero */

loc_0017B996: ;
    esi = 0x3C806C;

loc_0017B99B: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0017B9A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B9A3: ;
    ecx = MEM32(esp + 0x10);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    edx = esp + 0x54;
    PUSH32(esp, 0x3DFA48);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0017B9BDu); RECOMP_ABI_CALL(0x00199B80u, sub_00199B80); /* call 0x00199B80 */

loc_0017B9BD: ;
    esp = esp + 0x18;

loc_0017B9C0: ;
    esi = MEM32(esp + 0x158);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0017B9D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017B9D5: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0017BAF0; /* jle: less or equal (signed <=) */

loc_0017B9E0: ;
    eax = MEM32(esp + 0x164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017BA18; /* je: equal / zero */

loc_0017B9EB: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x1C) = 0x3F19999A;
    MEM32(esp + 0x20) = 0x3F19999A;
    MEM32(esp + 0x24) = 0x3F59999A;
    MEM32(esp + 0x28) = 0x3F59999A;
    PUSH32(esp, 0x0017BA18u); RECOMP_ABI_CALL(0x00178450u, sub_00178450); /* call 0x00178450 */

loc_0017BA18: ;
    PUSH32(esp, 0x0017BA1Du); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017BA1D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0017BA28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BA28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017BA35; /* je: equal / zero */

loc_0017BA2C: ;
    PUSH32(esp, 0x0017BA31u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017BA31: ;
    PUSH32(esp, 0xC);
    goto loc_0017BA4E;

loc_0017BA35: ;
    PUSH32(esp, 0x0017BA3Au); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017BA3A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0017BA42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BA42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017BA61; /* jne: not equal / not zero */

loc_0017BA47: ;
    PUSH32(esp, 0x0017BA4Cu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017BA4C: ;
    PUSH32(esp, 0xB);

loc_0017BA4E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0017BA58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BA58: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0017BA61u); RECOMP_ABI_CALL(0x001783A0u, sub_001783A0); /* call 0x001783A0 */

loc_0017BA61: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017BA67u); RECOMP_ABI_CALL(0x0017AA40u, sub_0017AA40); /* call 0x0017AA40 */

loc_0017BA67: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0017BA73u); RECOMP_ABI_CALL(0x001784D0u, sub_001784D0); /* call 0x001784D0 */

loc_0017BA73: ;
    eax = MEM32(esp + 0x15C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0017BA83u); RECOMP_ABI_CALL(0x00177D50u, sub_00177D50); /* call 0x00177D50 */

loc_0017BA83: ;
    ebx = MEM32(esp + 0x168);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017BAF0; /* je: equal / zero */

loc_0017BA90: ;
    MEM32(esp + 0x28) = 0x3C9748;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x150) = eax;
    PUSH32(esp, 0x0017BAA8u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017BAA8: ;
    edx = MEM32(eax);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017BAB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BAB8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, 0x0017BAC6u); RECOMP_ABI_CALL(0x000A34A0u, sub_000A34A0); /* call 0x000A34A0 */

loc_0017BAC6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017BAD4; /* jne: not equal / not zero */

loc_0017BACA: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0017BAD4u); RECOMP_ABI_CALL(0x001782F0u, sub_001782F0); /* call 0x001782F0 */

loc_0017BAD4: ;
    ecx = esp + 0x28;
    MEM32(esp + 0x150) = 0xFFFFFFFFu;
    MEM32(esp + 0x28) = 0x3C9748;
    PUSH32(esp, 0x0017BAF0u); RECOMP_ABI_CALL(0x000A4120u, sub_000A4120); /* call 0x000A4120 */

loc_0017BAF0: ;
    ecx = MEM32(esp + 0x148);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x138);
    POP32(esp, ebx);
    PUSH32(esp, 0x0017BB0Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017BB0E: ;
    esp = esp + 0x144;
    esp += 4; return; /* ret */

}

/**
 * sub_0017BB20
 * Original: 0x0017BB20 - 0x0017BC6F (335 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017BB20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017BB20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, 0x0017BB30u); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_0017BB30: ;
    eax = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x24);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017BBFD; /* je: equal / zero */

loc_0017BB42: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017BBFD; /* jne: not equal / not zero */

loc_0017BB4B: ;
    ebp = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = esi;

loc_0017BB53: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017BB61u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0017BB61: ;
    ecx = eax;
    PUSH32(esp, 0x0017BB68u); RECOMP_ABI_CALL(0x00047860u, sub_00047860); /* call 0x00047860 */

loc_0017BB68: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017BBAF; /* je: equal / zero */

loc_0017BB72: ;
    eax = MEM32(ebp + 0x820);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017BBE3; /* jle: less or equal (signed <=) */

loc_0017BB7E: ;
    edi = edi;

loc_0017BB80: ;
    ecx = ZX8(MEM8(ebp + esi * 8));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017BBA2; /* jne: not equal / not zero */

loc_0017BB89: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(ebp + esi * 8 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + esi * 8 + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017BBA2; /* jne: not equal / not zero */

loc_0017BB93: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017BB9Fu); RECOMP_ABI_CALL(0x0017B880u, sub_0017B880); /* call 0x0017B880 */

loc_0017BB9F: ;
    esp = esp + 0x14;

loc_0017BBA2: ;
    eax = MEM32(ebp + 0x820);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017BB80; /* jl: less (signed <) */

loc_0017BBAD: ;
    goto loc_0017BBE3;

loc_0017BBAF: ;
    PUSH32(esp, 0x0017BBB4u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017BBB4: ;
    edx = MEM32(eax);
    esi = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017BBC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BBC4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(esi + 0x60); PUSH32(esp, 0x0017BBCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BBCA: ;
    esi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0017BBD9u); RECOMP_ABI_CALL(0x001784D0u, sub_001784D0); /* call 0x001784D0 */

loc_0017BBD9: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0017BBE3u); RECOMP_ABI_CALL(0x00177D50u, sub_00177D50); /* call 0x00177D50 */

loc_0017BBE3: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0017BB53; /* jl: less (signed <) */

loc_0017BBF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0017BBFD: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(ebx + 0x820)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x820), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0017BC67; /* jle: less or equal (signed <=) */

loc_0017BC09: ;
    /* nop */

loc_0017BC10: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0017BC41; /* jle: less or equal (signed <=) */

loc_0017BC15: ;
    PUSH32(esp, 0x0017BC1Au); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017BC1A: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + esi * 8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0017BC2Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BC2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017BC3E; /* jne: not equal / not zero */

loc_0017BC2E: ;
    eax = MEM32(ebx + esi * 8 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017BC3E; /* jne: not equal / not zero */

loc_0017BC36: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_0017BC4D;

loc_0017BC3E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */

loc_0017BC41: ;
    if (CMP_NE(_fa, _fb)) goto loc_0017BC5C; /* jne: not equal / not zero */

loc_0017BC43: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ebx + esi * 8 + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_0017BC4D: ;
    eax = ZX8(MEM8(ebx + esi * 8));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017BC59u); RECOMP_ABI_CALL(0x0017B880u, sub_0017B880); /* call 0x0017B880 */

loc_0017BC59: ;
    esp = esp + 0x14;

loc_0017BC5C: ;
    eax = MEM32(ebx + 0x820);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017BC10; /* jl: less (signed <) */

loc_0017BC67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017BC70
 * Original: 0x0017BC70 - 0x0017BD68 (248 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017BC70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017BC70: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = eax;
    esi = ecx;
    PUSH32(esp, 0x0017BC83u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017BC83: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0017BC8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BC8F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x457F84);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFA04);
    ecx = esi;
    PUSH32(esp, 0x0017BCA9u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017BCA9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017BCAFu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017BCAF: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0x457F84);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DF9F8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0017BCCEu); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017BCCE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017BCD4u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017BCD4: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017BCE2; /* je: equal / zero */

loc_0017BCDB: ;
    ecx = eax;
    PUSH32(esp, 0x0017BCE2u); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_0017BCE2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017BD5A; /* je: equal / zero */

loc_0017BCE6: ;
    ecx = edi;
    PUSH32(esp, 0x0017BCEDu); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_0017BCED: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x575DA0);
    PUSH32(esp, 0x0017BCFBu); RECOMP_ABI_CALL(0x0017B5C0u, sub_0017B5C0); /* call 0x0017B5C0 */

loc_0017BCFB: ;
    esp = esp + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0017BD05u); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_0017BD05: ;
    eax = MEM32(0x5765C0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017BD37; /* jle: less or equal (signed <=) */

loc_0017BD10: ;
    eax = MEM32(esi * 8 + 0x575DA4);
    ecx = ZX8(MEM8(esi * 8 + 0x575DA0));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017BD2Au); RECOMP_ABI_CALL(0x0017B880u, sub_0017B880); /* call 0x0017B880 */

loc_0017BD2A: ;
    eax = MEM32(0x5765C0);
    esp = esp + 0x14;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017BD10; /* jl: less (signed <) */

loc_0017BD37: ;
    ecx = edi;
    PUSH32(esp, 0x0017BD3Eu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017BD3E: ;
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x0017BD47u); RECOMP_ABI_CALL(0x001778F0u, sub_001778F0); /* call 0x001778F0 */

loc_0017BD47: ;
    edx = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0017BD5A; /* jle: less or equal (signed <=) */

loc_0017BD4E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017BD5A; /* jle: less or equal (signed <=) */

loc_0017BD52: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0017BD5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BD5A: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00340F54(); return; /* tail jmp 0x00340F54 */

}

/**
 * sub_0017BD70
 * Original: 0x0017BD70 - 0x0017C247 (1239 bytes, 365 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017BD70(void)
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

loc_0017BD70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3547CB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x298;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x2A0) = eax;
    edi = ecx;
    PUSH32(esp, 0x0017BDA1u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017BDA1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0017BDADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BDAD: ;
    eax = MEM32(esp + 0x2B4);
    ebp = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x458028);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0017BDCAu); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017BDCA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017BDD0u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017BDD0: ;
    esi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017C221; /* je: equal / zero */

loc_0017BDDD: ;
    ecx = esi;
    PUSH32(esp, 0x0017BDE4u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017BDE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017C221; /* jle: less or equal (signed <=) */

loc_0017BDEC: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0017BDF4u); RECOMP_ABI_CALL(0x001778F0u, sub_001778F0); /* call 0x001778F0 */

loc_0017BDF4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017BDFCu); RECOMP_ABI_CALL(0x00177D90u, sub_00177D90); /* call 0x00177D90 */

loc_0017BDFC: ;
    ebx = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x24) = 0x3C9748;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x64);
    ecx = esp + 0x44;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2BC) = eax;
    MEM8(esp + 0xB0) = LO8(eax);
    MEM32(esp + 0x24) = 1;
    PUSH32(esp, 0x0017BE3Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0017BE3B: ;
    SET_LO8(eax, MEM8(esp + 0x2C8));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0xA3) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0017BF0D; /* je: equal / zero */

loc_0017BE55: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0017BE60; /* jl: less (signed <) */

loc_0017BE59: ;
    SET_LO8(eax, LO8(ebx));
    goto loc_0017BF14;

loc_0017BE60: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017BEAF; /* jne: not equal / not zero */

loc_0017BE65: ;
    ecx = edi;
    PUSH32(esp, 0x0017BE6Cu); RECOMP_ABI_CALL(0x0017ACE0u, sub_0017ACE0); /* call 0x0017ACE0 */

loc_0017BE6C: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0017BE75u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017BE75: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x412);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017BE81u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BE81: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DDE64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017BE8Du); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017BE8D: ;
    esp = esp + 0xC;
    ecx = esi;
    PUSH32(esp, 0x0017BE97u); RECOMP_ABI_CALL(0x001779D0u, sub_001779D0); /* call 0x001779D0 */

loc_0017BE97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3DFAC0);
    PUSH32(esp, 0x3DFAB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017BEAAu); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017BEAA: ;
    goto loc_0017C16C;

loc_0017BEAF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFDu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0017C16F; /* jg: greater (signed >) */

loc_0017BEB8: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0017BEC0u); RECOMP_ABI_CALL(0x0017AD50u, sub_0017AD50); /* call 0x0017AD50 */

loc_0017BEC0: ;
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, 0xFD);
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017BED0u); RECOMP_ABI_CALL(0x000C0470u, sub_000C0470); /* call 0x000C0470 */

loc_0017BED0: ;
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, 0x0017BEDAu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017BEDA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x424);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017BEE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BEE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DDE64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017BEF2u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017BEF2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x3DFAC0);
    PUSH32(esp, 0x3DFAB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017BF05u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017BF05: ;
    esp = esp + 0x20;
    goto loc_0017C16F;

loc_0017BF0D: ;
    SET_LO8(eax, MEM8(ebx * 8 + 0x575DA0));

loc_0017BF14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0017C16F; /* je: equal / zero */

loc_0017BF20: ;
    PUSH32(esp, 0x0017BF25u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017BF25: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(eax);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017BF39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BF39: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    edx = esp + 0xAC;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    MEM8(esp + 0x1B0) = 0;
    PUSH32(esp, 0x0017BF59u); RECOMP_ABI_CALL(0x000A36C0u, sub_000A36C0); /* call 0x000A36C0 */

loc_0017BF59: ;
    PUSH32(esp, 0x0017BF5Eu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017BF5E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0017BF66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BF66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0017BF7C; /* jge: greater or equal (signed >=) */

loc_0017BF76: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0017BF7C: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(0x3DF9DC); /* fmul dword ptr [0x3df9dc] */
    PUSH32(esp, 0x0017BF8Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0017BF8B: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0017BF94u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017BF94: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0017BF9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BF9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017BFB6; /* je: equal / zero */

loc_0017BFA3: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3DF9E0); /* fmul dword ptr [0x3df9e0] */
    PUSH32(esp, 0x0017BFB2u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0017BFB2: ;
    MEM32(esp + 0x1C) = eax;

loc_0017BFB6: ;
    eax = esp + 0xA4;
    edx = eax + 1;

loc_0017BFC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017BFC0; /* jne: not equal / not zero */

loc_0017BFC7: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017C001; /* jle: less or equal (signed <=) */

loc_0017BFCD: ;
    PUSH32(esp, 0x0017BFD2u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017BFD2: ;
    edx = MEM32(eax);
    ecx = esp + 0xA4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017BFE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017BFE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DFAA4);
    eax = esp + 0x1B0;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017BFFEu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0017BFFE: ;
    esp = esp + 0x14;

loc_0017C001: ;
    PUSH32(esp, 0x0017C006u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C006: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0017C011u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C011: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017C029; /* je: equal / zero */

loc_0017C015: ;
    MEM32(esp + 0x18) = 0xC;
    PUSH32(esp, 0x0017C022u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017C022: ;
    PUSH32(esp, 0x41A);
    goto loc_0017C04D;

loc_0017C029: ;
    PUSH32(esp, 0x0017C02Eu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C02E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0017C036u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C036: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017C069; /* jne: not equal / not zero */

loc_0017C03B: ;
    MEM32(esp + 0x18) = 0xB;
    PUSH32(esp, 0x0017C048u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017C048: ;
    PUSH32(esp, 0x419);

loc_0017C04D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017C054u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C054: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DFA9C);
    eax = esp + 0x48;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017C066u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0017C066: ;
    esp = esp + 0x10;

loc_0017C069: ;
    PUSH32(esp, 0x0017C06Eu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C06E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017C076u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C076: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x458BE8); PUSH32(esp, 0x0017C080u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C080: ;
    ebp = eax;
    SET_LO8(eax, MEM8(esp + 0x2C0));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C0F2; /* jne: not equal / not zero */

loc_0017C090: ;
    eax = MEM32(ebx * 8 + 0x575DA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017C0F2; /* je: equal / zero */

loc_0017C09B: ;
    PUSH32(esp, 0x0017C0A0u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C0A0: ;
    ecx = MEM32(esp + 0x20);
    ecx = MEM32(ecx * 8 + 0x575DA4);
    ebx = eax;
    PUSH32(esp, 0x0017C0B2u); RECOMP_ABI_CALL(0x0002E6C0u, xml1_guest_actor_character_name); /* call 0x0002E6C0 */

loc_0017C0B2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0017C0C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C0C5: ;
    ecx = eax;
    PUSH32(esp, 0x0017C0CCu); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0017C0CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0017C0D3u); RECOMP_ABI_CALL(0x0017AA20u, sub_0017AA20); /* call 0x0017AA20 */

loc_0017C0D3: ;
    edx = MEM32(esp + 0x28);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DFA84);
    PUSH32(esp, 0x3DFAB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017C0EDu); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017C0ED: ;
    esp = esp + 0x24;
    goto loc_0017C13F;

loc_0017C0F2: ;
    PUSH32(esp, 0x0017C0F7u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C0F7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017C106; /* je: equal / zero */

loc_0017C0FB: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    ebx = 0x3CB044;
    if (CMP_NE(_fa, _fb)) goto loc_0017C10B; /* jne: not equal / not zero */

loc_0017C106: ;
    ebx = 0x3C806C;

loc_0017C10B: ;
    edx = MEM32(eax);
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017C11Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C11D: ;
    ecx = eax;
    PUSH32(esp, 0x0017C124u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0017C124: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DFA74);
    PUSH32(esp, 0x3DFAB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017C13Cu); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017C13C: ;
    esp = esp + 0x20;

loc_0017C13F: ;
    PUSH32(esp, 0x0017C144u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C144: ;
    edx = MEM32(eax);
    ecx = esp + 0x1A4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0017C157u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C157: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C48);
    PUSH32(esp, 0x3DDE64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017C168u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017C168: ;
    ebp = MEM32(esp + 0x30);

loc_0017C16C: ;
    esp = esp + 0x14;

loc_0017C16F: ;
    SET_LO8(eax, MEM8(esp + 0x2BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C1B2; /* jne: not equal / not zero */

loc_0017C17A: ;
    PUSH32(esp, 0x0017C17Fu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017C17F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x408);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017C18Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C18B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, 0x3DFA64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017C19Cu); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017C19C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, 0x3DFA54);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017C1ADu); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017C1AD: ;
    esp = esp + 0x20;
    goto loc_0017C204;

loc_0017C1B2: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0x0017C1B9u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C1B9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017C1C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C1C0: ;
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0017C1CD; /* jbe: below or equal (unsigned <=) */

loc_0017C1C8: ;
    esi = 6;

loc_0017C1CD: ;
    PUSH32(esp, 0x0017C1D2u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0017C1D2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x407);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017C1DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C1DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, 0x3DFA64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017C1EFu); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017C1EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DE008);
    PUSH32(esp, 0x3DFA54);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017C201u); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017C201: ;
    esp = esp + 0x24;

loc_0017C204: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x2B0) = 0xFFFFFFFFu;
    MEM32(esp + 0x24) = 0x3C9748;
    PUSH32(esp, 0x0017C220u); RECOMP_ABI_CALL(0x000A4120u, sub_000A4120); /* call 0x000A4120 */

loc_0017C220: ;
    POP32(esp, ebx);

loc_0017C221: ;
    (void)xml1_stash_menu_labels(edi, MEM32(esp+0x2B4), MEM8(esp+0x2B8));
    ecx = MEM32(esp + 0x2A4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x298);
    POP32(esp, ebp);
    PUSH32(esp, 0x0017C23Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017C23E: ;
    esp = esp + 0x2A4;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0017C250
 * Original: 0x0017C250 - 0x0017C32B (219 bytes, 80 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C250(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017C250: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x290);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x458028);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x0017C270u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017C270: ;
    esi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017C2D3; /* je: equal / zero */

loc_0017C279: ;
    PUSH32(esp, edi);
    ecx = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0x0017C283u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017C283: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017C2D2; /* jle: less or equal (signed <=) */

loc_0017C287: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    /* nop */

loc_0017C290: ;
    PUSH32(esp, edi);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    PUSH32(esp, 0x0017C29Bu); RECOMP_ABI_CALL(0x00177D90u, sub_00177D90); /* call 0x00177D90 */

loc_0017C29B: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017C2AB; /* je: equal / zero */

loc_0017C2A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0017C2BD; /* jl: less (signed <) */

loc_0017C2A7: ;
    SET_LO8(ebx, LO8(eax));
    goto loc_0017C2BD;

loc_0017C2AB: ;
    ecx = MEM32(eax * 8 + 0x575DA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C2BD; /* jne: not equal / not zero */

loc_0017C2B6: ;
    SET_LO8(ebx, MEM8(eax * 8 + 0x575DA0));

loc_0017C2BD: ;
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0017C2D8; /* je: equal / zero */

loc_0017C2C6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0017C2CCu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017C2CC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017C290; /* jl: less (signed <) */

loc_0017C2D0: ;
    POP32(esp, ebx);
    POP32(esp, ebp);

loc_0017C2D2: ;
    POP32(esp, edi);

loc_0017C2D3: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0017C2D8: ;
    edx = MEM32(esi);
    MEM16(esi + 0x7C) = LO16(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017C2E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C2E1: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C301; /* jne: not equal / not zero */

loc_0017C2E8: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x3C806C;
    POP32(esp, esi);
    esp = esp + 4;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0017BD70(); return; /* tail jmp 0x0017BD70 */

loc_0017C301: ;
    PUSH32(esp, 0x0017C306u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017C306: ;
    POP32(esp, ebx);
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = ecx + eax + 0x1008;
    ecx = MEM32(esp + 4);
    POP32(esp, esi);
    esp = esp + 4;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0017BD70(); return; /* tail jmp 0x0017BD70 */

}

/**
 * sub_0017C330
 * Original: 0x0017C330 - 0x0017C3A3 (115 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C330(void)
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

loc_0017C330: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xECC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017C37E; /* je: equal / zero */

loc_0017C345: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017C34Cu); RECOMP_ABI_CALL(0x0017AAD0u, sub_0017AAD0); /* call 0x0017AAD0 */

loc_0017C34C: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0xECC) = edi;
    PUSH32(esp, 0x0017C35Cu); RECOMP_ABI_CALL(0x0017AAD0u, sub_0017AAD0); /* call 0x0017AAD0 */

loc_0017C35C: ;
    fp_push((double)SMEM32(esi + 0xECC)); /* fild */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    ecx = esi;
    ebx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0017C377u); RECOMP_ABI_CALL(0x001611D0u, sub_001611D0); /* call 0x001611D0 */

loc_0017C377: ;
    ecx = esi;
    PUSH32(esp, 0x0017C37Eu); RECOMP_ABI_CALL(0x00160900u, sub_00160900); /* call 0x00160900 */

loc_0017C37E: ;
    _fa = (uint32_t)(MEM32(esi + 0xECC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xECC), 2 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0017C396; /* jne: not equal / not zero */

loc_0017C389: ;
    PUSH32(esp, 0x0017C38Eu); RECOMP_ABI_CALL(0x0017BC70u, sub_0017BC70); /* call 0x0017BC70 */

loc_0017C38E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0017C396: ;
    PUSH32(esp, 0x0017C39Bu); RECOMP_ABI_CALL(0x0017B1B0u, sub_0017B1B0); /* call 0x0017B1B0 */

loc_0017C39B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0017C3B0
 * Original: 0x0017C3B0 - 0x0017C473 (195 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017C3B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0017C3C4u); RECOMP_ABI_CALL(0x00160BE0u, sub_00160BE0); /* call 0x00160BE0 */

loc_0017C3C4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0017C404; /* je: equal / zero */

loc_0017C3CA: ;
    eax = MEM32(esi + 0xECC);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017C3DE; /* jge: greater or equal (signed >=) */

loc_0017C3D7: ;
    eax = 2;
    goto loc_0017C3E8;

loc_0017C3DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017C3E8; /* jl: less (signed <) */

loc_0017C3E3: ;
    eax = 1;

loc_0017C3E8: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017C3F0u); RECOMP_ABI_CALL(0x0017C330u, sub_0017C330); /* call 0x0017C330 */

loc_0017C3F0: ;
    PUSH32(esp, 0x0017C3F5u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017C3F5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017C3FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C3FE: ;
    edi = MEM32(esi + 0x290);

loc_0017C404: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017C46B; /* je: equal / zero */

loc_0017C408: ;
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C416; /* jne: not equal / not zero */

loc_0017C40F: ;
    ebx = 0x3C806C;
    goto loc_0017C42C;

loc_0017C416: ;
    PUSH32(esp, 0x0017C41Bu); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017C41B: ;
    ebx = ebx & 0xFFFFFF;
    ecx = MEM32(eax + ebx * 4 + 4);
    ebx = ecx + eax + 0x1008;

loc_0017C42C: ;
    PUSH32(esp, 0x3DF9F8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0017C437u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017C437: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C450; /* jne: not equal / not zero */

loc_0017C43E: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0017C448u); RECOMP_ABI_CALL(0x0017BD70u, sub_0017BD70); /* call 0x0017BD70 */

loc_0017C448: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0017C450: ;
    PUSH32(esp, 0x3DFA04);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0017C45Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017C45B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C46B; /* jne: not equal / not zero */

loc_0017C462: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0017C46Bu); RECOMP_ABI_CALL(0x0017BD70u, sub_0017BD70); /* call 0x0017BD70 */

loc_0017C46B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0017C480
 * Original: 0x0017C480 - 0x0017C7AE (814 bytes, 255 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C480(void)
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

loc_0017C480: ;
    esp = esp - 0x11C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x128) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM8(esp + 0x1B) = 0;
    PUSH32(esp, 0x0017C4A4u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C4A4: ;
    esi = eax;
    PUSH32(esp, 0x0017C4ABu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C4AB: ;
    edi = eax;
    PUSH32(esp, 0x0017C4B2u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C4B2: ;
    ebx = eax;
    PUSH32(esp, 0x0017C4B9u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C4B9: ;
    edx = MEM32(ebx);
    ebp = eax;
    eax = MEM32(edi);
    ecx = ebx;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0017C4C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C4C8: ;
    ebx = SX16(LO16(eax));
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0017C4D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C4D3: ;
    edx = MEM32(esi);
    ecx = SX16(LO16(eax));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    ecx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x7D0);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017C4E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C4E6: ;
    eax = eax - ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0017C4F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C4F2: ;
    SET_LO8(eax, MEM8(esp + 0x130));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0017C523; /* jne: not equal / not zero */

loc_0017C502: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0017C50Eu); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_0017C50E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3DF9E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3df9e0] */
    esp = esp + 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0017C523; /* jp: parity */

loc_0017C51E: ;
    MEM8(esp + 0x13) = 1;

loc_0017C523: ;
    PUSH32(esp, 0x0017C528u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C528: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0017C52Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C52F: ;
    SET_LO8(ebx, 0); /* xor self */
    MEM32(esp + 0x14) = 0x3F800000;
    ebp = 1;
    MEM8(esp + 0x1C) = 0xFF;
    MEM8(esp + 0x20) = LO8(ebx);
    edi = eax;
    PUSH32(esp, 0x0017C54Eu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C54E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0017C558u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C558: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017C61E; /* jle: less or equal (signed <=) */

loc_0017C560: ;
    PUSH32(esp, 0x0017C565u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C565: ;
    esi = MEM32(esp + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0017C571u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C571: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017C5FE; /* jne: not equal / not zero */

loc_0017C57A: ;
    PUSH32(esp, 0x0017C57Fu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C57F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0017C58Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C58A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esp + 0x13) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017C5FE; /* jne: not equal / not zero */

loc_0017C590: ;
    PUSH32(esp, 0x0017C595u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C595: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0017C5A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C5A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017C5B8; /* je: equal / zero */

loc_0017C5A4: ;
    PUSH32(esp, 0x0017C5A9u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C5A9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0017C5B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C5B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C5FE; /* jne: not equal / not zero */

loc_0017C5B8: ;
    PUSH32(esp, 0x0017C5BDu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C5BD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0017C5C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C5C5: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017C5FE; /* jne: not equal / not zero */

loc_0017C5CD: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0017C5D9u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_0017C5D9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    esp = esp + 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0017C5EB; /* jp: parity */

loc_0017C5E7: ;
    MEM8(esp + 0x1C) = LO8(ebx);

loc_0017C5EB: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ebp;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0017C5FE: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x20) = LO8(ebx);
    PUSH32(esp, 0x0017C609u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C609: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0017C613u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C613: ;
    ecx = ZX8(LO8(ebx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017C560; /* jl: less (signed <) */

loc_0017C61E: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0017C62Au); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_0017C62A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    SET_LO8(ebx, MEM8(esp + 0x24));
    esp = esp + 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0017C64F; /* jnp: not parity */

loc_0017C63E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017C6AF; /* jne: not equal / not zero */

loc_0017C643: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017C779; /* je: equal / zero */

loc_0017C64F: ;
    PUSH32(esp, 0x0017C654u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017C654: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0017C65Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C65B: ;
    esi = eax;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x0017C667u); RECOMP_ABI_CALL(0x000BF960u, sub_000BF960); /* call 0x000BF960 */

loc_0017C667: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0017C6A6; /* jbe: below or equal (unsigned <=) */

loc_0017C66B: ;
    goto loc_0017C670;

    /* nop */

loc_0017C670: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017C67Au); RECOMP_ABI_CALL(0x000C0470u, sub_000C0470); /* call 0x000C0470 */

loc_0017C67A: ;
    SET_LO8(ecx, MEM8(eax + 0x2F));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C697; /* jne: not equal / not zero */

loc_0017C685: ;
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017C697; /* je: equal / zero */

loc_0017C68C: ;
    ecx = ZX8(MEM8(eax + 0x32));
    edx = esi + -5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017C710; /* jl: less (signed <) */

loc_0017C697: ;
    MEM8(esp + 0x14) = MEM8(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0017C6A0u); RECOMP_ABI_CALL(0x000BF960u, sub_000BF960); /* call 0x000BF960 */

loc_0017C6A0: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x14), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0017C670; /* jb: below (unsigned <) */

loc_0017C6A6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017C779; /* je: equal / zero */

loc_0017C6AF: ;
    PUSH32(esp, 0x0017C6B4u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C6B4: ;
    edi = MEM32(esp + 0x1C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0017C6C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C6C0: ;
    esi = ZX8(LO8(eax));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0017C6C9u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C6C9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0017C6D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C6D2: ;
    PUSH32(esp, 0x0017C6D7u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C6D7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0017C6E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C6E4: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0017C6F1u); RECOMP_ABI_CALL(0x0017C330u, sub_0017C330); /* call 0x0017C330 */

loc_0017C6F1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0017C6FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C6FC: ;
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0017C709u); RECOMP_ABI_CALL(0x0017C250u, sub_0017C250); /* call 0x0017C250 */

loc_0017C709: ;
    SET_LO8(eax, 1);
    goto loc_0017C795;

loc_0017C710: ;
    esi = MEM32(eax + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(esp + 0x28) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0017C723; /* jne: not equal / not zero */

loc_0017C71C: ;
    eax = 0x3C806C;
    goto loc_0017C739;

loc_0017C723: ;
    PUSH32(esp, 0x0017C728u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0017C728: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0017C739: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DFAC8);
    edx = esp + 0x30;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0017C74Eu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0017C74E: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x0017C756u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0017C756: ;
    edx = MEM32(eax);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017C762u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C762: ;
    PUSH32(esp, 0x0017C767u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0017C767: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0017C775u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C775: ;
    SET_LO8(eax, 1);
    goto loc_0017C795;

loc_0017C779: ;
    SET_LO8(eax, MEM8(esp + 0x130));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C791; /* jne: not equal / not zero */

loc_0017C784: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0017C78Fu); RECOMP_ABI_CALL(0x0017C480u, sub_0017C480); /* call 0x0017C480 */

loc_0017C78F: ;
    goto loc_0017C795;

loc_0017C791: ;
    SET_LO8(eax, MEM8(esp + 0x1B));

loc_0017C795: ;
    ecx = MEM32(esp + 0x128);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0017C7A5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017C7A5: ;
    esp = esp + 0x11C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0017C7B0
 * Original: 0x0017C7B0 - 0x0017C835 (133 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017C7B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0017C7C4u); RECOMP_ABI_CALL(0x00163520u, sub_00163520); /* call 0x00163520 */

loc_0017C7C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C7CC; /* jne: not equal / not zero */

loc_0017C7C8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0017C7CC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0017C7D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C7D4: ;
    edi = 0; /* xor self */

loc_0017C7D6: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0017C7E0u); RECOMP_ABI_CALL(0x0017AAD0u, sub_0017AAD0); /* call 0x0017AAD0 */

loc_0017C7E0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017C7D6; /* jl: less (signed <) */

loc_0017C7E6: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0017C7EFu); RECOMP_ABI_CALL(0x0017C330u, sub_0017C330); /* call 0x0017C330 */

loc_0017C7EF: ;
    PUSH32(esp, 0x0017C7F4u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C7F4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0017C800u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C800: ;
    PUSH32(esp, 0x0017C805u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C805: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017C80Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C80C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, 0x3DE170);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017C81Du); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017C81D: ;
    esp = esp + 0x10;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DF9F8);
    ecx = esi;
    PUSH32(esp, 0x0017C82Eu); RECOMP_ABI_CALL(0x00162990u, sub_00162990); /* call 0x00162990 */

loc_0017C82E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0017C840
 * Original: 0x0017C840 - 0x0017C8BC (124 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017C840: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0017C84Bu); RECOMP_ABI_CALL(0x00163930u, sub_00163930); /* call 0x00163930 */

loc_0017C84B: ;
    MEM32(esi + 0xED0) = 0;
    PUSH32(esp, 0x0017C85Au); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017C85A: ;
    edi = eax;
    PUSH32(esp, 0x0017C861u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C861: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0017C86Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C86C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x2C); PUSH32(esp, 0x0017C872u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C872: ;
    PUSH32(esp, 0x0017C877u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017C877: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017C87Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C87E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, 0x3DE170);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017C88Fu); RECOMP_ABI_CALL(0x001627B0u, sub_001627B0); /* call 0x001627B0 */

loc_0017C88F: ;
    esp = esp + 0x10;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DF9F8);
    ecx = esi;
    PUSH32(esp, 0x0017C8A0u); RECOMP_ABI_CALL(0x0017BD70u, sub_0017BD70); /* call 0x0017BD70 */

loc_0017C8A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DF9F8);
    ecx = esi;
    PUSH32(esp, 0x0017C8AEu); RECOMP_ABI_CALL(0x00162990u, sub_00162990); /* call 0x00162990 */

loc_0017C8AE: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0017C8B7u); RECOMP_ABI_CALL(0x0017C330u, sub_0017C330); /* call 0x0017C330 */

loc_0017C8B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017C8C0
 * Original: 0x0017C8C0 - 0x0017CD79 (1209 bytes, 378 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C8C0(void)
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

loc_0017C8C0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x11C));
    esp = esp - 0x11C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x458004);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    ebp = ecx;
    PUSH32(esp, 0x3DFA24);
    MEM32(esp + 0x134) = eax;
    MEM32(esp + 0x2C) = ebp;
    PUSH32(esp, 0x0017C8F2u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017C8F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017C8F8u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017C8F8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    ecx = ebp;
    edi = eax;
    PUSH32(esp, 0x0017C904u); RECOMP_ABI_CALL(0x00160A40u, sub_00160A40); /* call 0x00160A40 */

loc_0017C904: ;
    PUSH32(esp, 0x0017C909u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017C909: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0017C910u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C910: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017CD64; /* jne: not equal / not zero */

loc_0017C918: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0017C91Eu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017C91E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0017C928u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C928: ;
    esi = eax;
    PUSH32(esp, 0x0017C92Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017C92F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x0017C939u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C939: ;
    ecx = ebp;
    PUSH32(esp, 0x0017C940u); RECOMP_ABI_CALL(0x0017AC10u, sub_0017AC10); /* call 0x0017AC10 */

loc_0017C940: ;
    PUSH32(esp, 0x0017C945u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017C945: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10C); PUSH32(esp, 0x0017C964u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C964: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017C9B1; /* je: equal / zero */

loc_0017C96C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x457FC8);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DDE64);
    ecx = ebp;
    PUSH32(esp, 0x0017C986u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_0017C986: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017C98Cu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017C98C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017C9B1; /* je: equal / zero */

loc_0017C993: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0017C99Fu); RECOMP_ABI_CALL(0x0017DDF0u, sub_0017DDF0); /* call 0x0017DDF0 */

loc_0017C99F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017C9B1; /* je: equal / zero */

loc_0017C9A3: ;
    PUSH32(esp, 0x0017C9A8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017C9A8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017C9B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017C9B1: ;
    eax = esi;
    if (4) _cf = (int)(((eax) >> ((4) - 1)) & 1);
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017CD63; /* je: equal / zero */

loc_0017C9BE: ;
    _fa = (uint32_t)(MEM32(ebp + 0xED0)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xED0), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0017C9E4; /* jne: not equal / not zero */

loc_0017C9C7: ;
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DFA3C);
    ecx = edi;
    MEM32(ebp + 0xED0) = 3;
    PUSH32(esp, 0x0017C9E4u); RECOMP_ABI_CALL(0x001742F0u, sub_001742F0); /* call 0x001742F0 */

loc_0017C9E4: ;
    eax = MEM32(ebp + 0x290);
    esi = MEM32(eax + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017C9FB; /* jne: not equal / not zero */

loc_0017C9F4: ;
    esi = 0x3C806C;
    goto loc_0017CA11;

loc_0017C9FB: ;
    PUSH32(esp, 0x0017CA00u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017CA00: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x1008;

loc_0017CA11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DF9F8);
    PUSH32(esp, 0x0017CA1Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017CA1C: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DF9F8);
    MEM8(esp + 0x1F) = LO8(eax);
    PUSH32(esp, 0x0017CA31u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017CA31: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017CA4E; /* je: equal / zero */

loc_0017CA38: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DFA04);
    PUSH32(esp, 0x0017CA43u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017CA43: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017CD63; /* jne: not equal / not zero */

loc_0017CA4E: ;
    eax = MEM32(ebp + 0x290);
    PUSH32(esp, 0);
    PUSH32(esp, 0x458028);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017CA68u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017CA68: ;
    esi = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017CD63; /* je: equal / zero */

loc_0017CA75: ;
    ecx = esi;
    PUSH32(esp, 0x0017CA7Cu); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0017CA7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0017CD63; /* jle: less or equal (signed <=) */

loc_0017CA84: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0017CA8Au); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CA8A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017CA91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CA91: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0017CA9Au); RECOMP_ABI_CALL(0x001778F0u, sub_001778F0); /* call 0x001778F0 */

loc_0017CA9A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017CAA2u); RECOMP_ABI_CALL(0x00177D90u, sub_00177D90); /* call 0x00177D90 */

loc_0017CAA2: ;
    { int stash = xml1_stash_menu_action(ebp, (int32_t)eax, MEM8(esp+0x13)); if (stash >= 0) { if (stash) goto loc_0017CD1F; goto loc_0017CD33; } }
    ebx = eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017CBC0; /* je: equal / zero */

loc_0017CAB0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0017CAC8; /* jl: less (signed <) */

loc_0017CAB4: ;
    ecx = esi;
    PUSH32(esp, 0x0017CABBu); RECOMP_ABI_CALL(0x001778F0u, sub_001778F0); /* call 0x001778F0 */

loc_0017CABB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017CAC3u); RECOMP_ABI_CALL(0x00177D90u, sub_00177D90); /* call 0x00177D90 */

loc_0017CAC3: ;
    goto loc_0017CBC7;

loc_0017CAC8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0017CB00; /* jne: not equal / not zero */

loc_0017CACD: ;
    ecx = esi;
    PUSH32(esp, 0x0017CAD4u); RECOMP_ABI_CALL(0x001778F0u, sub_001778F0); /* call 0x001778F0 */

loc_0017CAD4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017CADCu); RECOMP_ABI_CALL(0x001782C0u, sub_001782C0); /* call 0x001782C0 */

loc_0017CADC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017CD33; /* je: equal / zero */

loc_0017CAE4: ;
    PUSH32(esp, 0x0017CAE9u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017CAE9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017CAF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CAF2: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x0017CAFBu); RECOMP_ABI_CALL(0x0017C480u, sub_0017C480); /* call 0x0017C480 */

loc_0017CAFB: ;
    goto loc_0017CD41;

loc_0017CB00: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFDu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0017CD41; /* jg: greater (signed >) */

loc_0017CB09: ;
    ecx = esi;
    PUSH32(esp, 0x0017CB10u); RECOMP_ABI_CALL(0x001778F0u, sub_001778F0); /* call 0x001778F0 */

loc_0017CB10: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017CB18u); RECOMP_ABI_CALL(0x001782C0u, sub_001782C0); /* call 0x001782C0 */

loc_0017CB18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017CD33; /* je: equal / zero */

loc_0017CB20: ;
    PUSH32(esp, 0x0017CB25u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017CB25: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017CB2Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CB2E: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0017CB36u); RECOMP_ABI_CALL(0x0017AD50u, sub_0017AD50); /* call 0x0017AD50 */

loc_0017CB36: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0017CB3Fu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CB3F: ;
    esi = eax;
    PUSH32(esp, 0x0017CB46u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CB46: ;
    edx = MEM32(esi);
    edi = eax;
    eax = MEM32(edi);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017CB55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CB55: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x14)));
    eax = eax - MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0017CB63u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CB63: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    SET_LO8(eax, 0xFD);
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(LO8(ebx)));
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017CB6Fu); RECOMP_ABI_CALL(0x000C0470u, sub_000C0470); /* call 0x000C0470 */

loc_0017CB6F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    ecx = eax + 0x20;
    MEM8(esp + 0x28) = 0;
    PUSH32(esp, 0x0017CB7Fu); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0017CB7F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DFAC8);
    ecx = esp + 0x30;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0017CB94u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0017CB94: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x0017CB9Cu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0017CB9C: ;
    edx = MEM32(eax);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017CBA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CBA8: ;
    PUSH32(esp, 0x0017CBADu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0017CBAD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0017CBBBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CBBB: ;
    goto loc_0017CD41;

loc_0017CBC0: ;
    SET_LO8(eax, MEM8(ebx * 8 + 0x575DA0));

loc_0017CBC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x18) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0017CD41; /* je: equal / zero */

loc_0017CBD3: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0017CCAE; /* jne: not equal / not zero */

loc_0017CBDF: ;
    PUSH32(esp, 0x0017CBE4u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CBE4: ;
    esi = MEM32(esp + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0017CBF0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CBF0: ;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(0x3DF9DC); /* fmul dword ptr [0x3df9dc] */
    PUSH32(esp, 0x0017CC07u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0017CC07: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0017CC10u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CC10: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0017CC1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CC1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017CC32; /* je: equal / zero */

loc_0017CC1F: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3DF9E0); /* fmul dword ptr [0x3df9e0] */
    PUSH32(esp, 0x0017CC2Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0017CC2E: ;
    MEM32(esp + 0x14) = eax;

loc_0017CC32: ;
    PUSH32(esp, 0x0017CC37u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CC37: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0017CC45u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CC45: ;
    ecx = MEM32(ebx * 8 + 0x575DA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017CC71; /* je: equal / zero */

loc_0017CC50: ;
    edx = ZX8(MEM8(ebx * 8 + 0x575DA0));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0017CC5Eu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0017CC5E: ;
    ecx = eax;
    PUSH32(esp, 0x0017CC65u); RECOMP_ABI_CALL(0x00047E10u, sub_00047E10); /* call 0x00047E10 */

loc_0017CC65: ;
    PUSH32(esp, 0x0017CC6Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017CC6A: ;
    PUSH32(esp, 4);
    goto loc_0017CD3A;

loc_0017CC71: ;
    PUSH32(esp, 0x0017CC76u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CC76: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0017CC7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CC7E: ;
    edi = ZX8(LO8(eax));
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0017CC87u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CC87: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0017CC90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CC90: ;
    PUSH32(esp, 0x0017CC95u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CC95: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0017CCA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CCA2: ;
    PUSH32(esp, 0x0017CCA7u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017CCA7: ;
    PUSH32(esp, 4);
    goto loc_0017CD3A;

loc_0017CCAE: ;
    ecx = esi;
    PUSH32(esp, 0x0017CCB5u); RECOMP_ABI_CALL(0x001778F0u, sub_001778F0); /* call 0x001778F0 */

loc_0017CCB5: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017CCBDu); RECOMP_ABI_CALL(0x001782C0u, sub_001782C0); /* call 0x001782C0 */

loc_0017CCBD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0017CD33; /* je: equal / zero */

loc_0017CCC1: ;
    PUSH32(esp, 0x0017CCC6u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CCC6: ;
    ebx = eax;
    PUSH32(esp, 0x0017CCCDu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CCCD: ;
    esi = MEM32(esp + 0x18);
    edx = MEM32(ebx);
    ebp = eax;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0017CCE2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CCE2: ;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0017CCEEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CCEE: ;
    PUSH32(esp, 0x0017CCF3u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CCF3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0017CCFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CCFB: ;
    edi = ZX8(LO8(eax));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0017CD04u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CD04: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0017CD0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CD0D: ;
    PUSH32(esp, 0x0017CD12u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0017CD12: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0017CD1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CD1F: ;
    PUSH32(esp, 0x0017CD24u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017CD24: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017CD2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CD2D: ;
    ebp = MEM32(esp + 0x20);
    goto loc_0017CD41;

loc_0017CD33: ;
    PUSH32(esp, 0x0017CD38u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017CD38: ;
    PUSH32(esp, 5);

loc_0017CD3A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0017CD41u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CD41: ;
    ecx = ebp;
    PUSH32(esp, 0x0017CD48u); RECOMP_ABI_CALL(0x0017AB70u, sub_0017AB70); /* call 0x0017AB70 */

loc_0017CD48: ;
    eax = MEM32(ebp + 0xECC);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0017CD56u); RECOMP_ABI_CALL(0x0017C330u, sub_0017C330); /* call 0x0017C330 */

loc_0017CD56: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0017CD62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CD62: ;
    POP32(esp, ebx);

loc_0017CD63: ;
    POP32(esp, esi);

loc_0017CD64: ;
    ecx = MEM32(esp + 0x120);
    POP32(esp, edi);
    POP32(esp, ebp);
    PUSH32(esp, 0x0017CD72u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0017CD72: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x11C)) >> 32) & 1);
    esp = esp + 0x11C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0017CD80
 * Original: 0x0017CD80 - 0x0017CDDE (94 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017CD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017CD80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017CD88u); RECOMP_ABI_CALL(0x0017D4F0u, sub_0017D4F0); /* call 0x0017D4F0 */

loc_0017CD88: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CDDC; /* je: equal / zero */

loc_0017CD92: ;
    PUSH32(esp, 0x0017CD97u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017CD97: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x0017CDA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CDA1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017CDC1; /* jne: not equal / not zero */

loc_0017CDA5: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CDDC; /* je: equal / zero */

loc_0017CDAE: ;
    PUSH32(esp, 0x0017CDB3u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017CDB3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x0017CDBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CDBD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CDDC; /* je: equal / zero */

loc_0017CDC1: ;
    ecx = MEM32(esi + 0x84);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0017CDCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CDCC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017CDD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CDD3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017CDDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CDDC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017CDE0
 * Original: 0x0017CDE0 - 0x0017CE31 (81 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017CDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017CDE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017CDE8u); RECOMP_ABI_CALL(0x0017D750u, xml1_guest_menu_text_item_update); /* call 0x0017D750 */

loc_0017CDE8: ;
    {
        float pc_volume;
        unsigned pc_callback=MEM32(esi+0x30);
        if((pc_callback==0x0008CA20u || pc_callback==0x0008CB70u) && xml1_pc_native_slider_value(esi,&pc_volume)) {
            /* Same native settings setters and refresh used by the original
               arrow callbacks, with an absolute normalized mouse value. */
            PUSH32(esp,0x0017CDE8u); RECOMP_ABI_CALL(0x0008C980u,xml1_guest_progress_manager_get);
            unsigned pc_settings=eax,pc_saved_esp=esp;
            unsigned pc_target=MEM32(MEM32(pc_settings)+(pc_callback==0x0008CA20u?0x4C:0x54));
            unsigned pc_bits;memcpy(&pc_bits,&pc_volume,4);
            ecx=pc_settings;PUSH32(esp,pc_bits);PUSH32(esp,0x0017CDE8u);
            RECOMP_ICALL_SAFE(pc_target,pc_saved_esp);
            pc_saved_esp=esp;pc_target=MEM32(MEM32(pc_settings)+4);
            ecx=pc_settings;PUSH32(esp,0x0017CDE8u);RECOMP_ICALL_SAFE(pc_target,pc_saved_esp);
            MEMF(0x571860)=pc_volume;MEM8(0x571864)|=8;
            if(getenv("XML1_PC_NATIVE_BOUNDS")) fprintf(stderr,"[PC SLIDER SET] item=%08X value=%.4f\n",esi,pc_volume);
        }
    }
    _fa = (uint32_t)(MEM8(0x571864)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x571864), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CDFC; /* je: equal / zero */

loc_0017CDF1: ;
    eax = MEM32(0x571860);
    MEM32(esi + 0x80) = eax;

loc_0017CDFC: ;
    ecx = MEM32(esi + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CE2F; /* je: equal / zero */

loc_0017CE06: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017CE0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CE0B: ;
    { static unsigned pc_seen[8], pc_count;
      unsigned pc_known=0;
      for(unsigned pc_i=0;pc_i<pc_count;++pc_i) if(pc_seen[pc_i]==eax) pc_known=1;
      if(eax && !pc_known && pc_count<8 && getenv("XML1_PC_NATIVE_BOUNDS")) {
        pc_seen[pc_count++]=eax;
        fprintf(stderr,"[PC SLIDER COMPONENT] item=%08X component=%08X fields",esi,eax);
        for(unsigned pc_i=0;pc_i<8;++pc_i) fprintf(stderr," %08X",MEM32(eax+pc_i*4));
        fprintf(stderr,"\n");
      }
    }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CE2F; /* je: equal / zero */

loc_0017CE0F: ;
    ecx = MEM32(esi + 0x84);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0017CE1Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CE1A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0017CE21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CE21: ;
    { static unsigned pc_seen[8], pc_count;
      unsigned pc_known=0;
      for(unsigned pc_i=0;pc_i<pc_count;++pc_i) if(pc_seen[pc_i]==eax) pc_known=1;
      if(eax && !pc_known && pc_count<8 && getenv("XML1_PC_NATIVE_BOUNDS")) {
        pc_seen[pc_count++]=eax;
        fprintf(stderr,"[PC SLIDER ANIMATION] item=%08X animation=%08X fields",esi,eax);
        for(unsigned pc_i=0;pc_i<8;++pc_i) fprintf(stderr," %08X",MEM32(eax+pc_i*4));
        fprintf(stderr,"\n");
      }
    }
    ecx = MEM32(esi + 0x80);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0017CE2Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CE2F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017CE40
 * Original: 0x0017CE40 - 0x0017CEA1 (97 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017CE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017CE40: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_0017CE59; /* jne: not equal / not zero */

loc_0017CE54: ;
    _fa = (uint32_t)(MEM8(esi + 0x7C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x7C), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CE62; /* je: equal / zero */

loc_0017CE59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017CE94; /* jne: not equal / not zero */

loc_0017CE5D: ;
    _fa = (uint32_t)(MEM8(esi + 0x7C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x7C), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CE94; /* je: equal / zero */

loc_0017CE62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0017CE6A; /* jl: less (signed <) */

loc_0017CE66: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0017CE6F; /* jge: greater or equal (signed >=) */

loc_0017CE6A: ;
    ecx = 2;

loc_0017CE6F: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CE8E; /* je: equal / zero */

loc_0017CE76: ;
    SET_LO8(eax, MEM8(0x571864));
    SET_LO8(eax, LO8(eax) & 0xF0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x571758);
    PUSH32(esp, ecx);
    MEM8(0x571864) = LO8(eax);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x0017CE8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CE8B: ;
    esp = esp + 8;

loc_0017CE8E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0017CE94: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017CE9Du); RECOMP_ABI_CALL(0x00200190u, sub_00200190); /* call 0x00200190 */

loc_0017CE9D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0017CEB0
 * Original: 0x0017CEB0 - 0x0017CFA5 (245 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017CEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017CEB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3547F0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0017CED7u); RECOMP_ABI_CALL(0x0017D080u, sub_0017D080); /* call 0x0017D080 */

loc_0017CED7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DFAF8);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0017CEE7u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017CEE7: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x0017CEFBu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017CEFB: ;
    ecx = esp + 0xC;
    edi = eax;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017CF0Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017CF0E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CF39; /* je: equal / zero */

loc_0017CF12: ;
    ecx = edi;
    PUSH32(esp, 0x0017CF19u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017CF19: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, 0x0017CF24u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017CF24: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x7C));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x7C) = LO8(eax);

loc_0017CF39: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DFAEC);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0017CF49u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017CF49: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0017CF5Du); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017CF5D: ;
    ecx = esp + 0xC;
    edi = eax;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017CF70u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017CF70: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CF91; /* je: equal / zero */

loc_0017CF74: ;
    ecx = edi;
    PUSH32(esp, 0x0017CF7Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017CF7B: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017CF89u); RECOMP_ABI_CALL(0x001612B0u, sub_001612B0); /* call 0x001612B0 */

loc_0017CF89: ;
    if (getenv("XML1_PC_NATIVE_BOUNDS")) {
        unsigned pc_model = MEM32(eax);
        fprintf(stderr, "[PC SLIDER MODEL] item=%08X node=%08X vtable=%08X fields", esi, pc_model, pc_model?MEM32(pc_model):0);
        if (pc_model) for(unsigned pc_i=0;pc_i<24;++pc_i) fprintf(stderr," %08X",MEM32(pc_model+pc_i*4));
        fprintf(stderr,"\n");
    }
    ecx = MEM32(eax);
    MEM32(esi + 0x84) = ecx;

loc_0017CF91: ;
    if(MEM32(esi+0x84) && getenv("XML1_PC_NATIVE_BOUNDS")) {
        for(unsigned pc_slot=8;pc_slot<=16;pc_slot+=4) {
            unsigned pc_component=MEM32(MEM32(esi+0x84)+pc_slot);
            if(!pc_component) continue;
            unsigned pc_node=MEM32(pc_component+4);
            fprintf(stderr,"[PC SLIDER SCENE] item=%08X slot=%X component=%08X vt=%08X node=%08X",esi,pc_slot,pc_component,MEM32(pc_component),pc_node);
            if(pc_node) for(unsigned pc_i=0;pc_i<24;++pc_i) fprintf(stderr," %08X",MEM32(pc_node+pc_i*4));
            fprintf(stderr,"\n");
            if(pc_slot==8 && pc_node) {
                unsigned pc_queue[32]={pc_node},pc_count=1;
                for(unsigned pc_index=0;pc_index<pc_count;++pc_index) {
                    unsigned pc_child=pc_queue[pc_index],pc_vt=MEM32(pc_child);
                    fprintf(stderr,"[PC SLIDER TREE] item=%08X node=%08X fields",esi,pc_child);
                    for(unsigned pc_i=0;pc_i<24;++pc_i) fprintf(stderr," %08X",MEM32(pc_child+pc_i*4));
                    fprintf(stderr,"\n");
                    /* Group layout: 00259DE0 traverses children at +1C.
                       0025AAC0 identifies its separate parent-list layout. */
                    if(MEM32(pc_vt+0x54)!=0x0025AAC0u) continue;
                    unsigned pc_list=MEM32(pc_child+0x1C);
                    if(!pc_list) continue;
                    unsigned pc_size=MEM32(pc_list+8),pc_data=MEM32(pc_list+0x10);
                    if(pc_size>32 || !pc_data) continue;
                    for(unsigned pc_i=0;pc_i<pc_size && pc_count<32;++pc_i) {
                        unsigned pc_next=MEM32(pc_data+pc_i*4),pc_seen=0;
                        for(unsigned pc_j=0;pc_j<pc_count;++pc_j) if(pc_queue[pc_j]==pc_next)pc_seen=1;
                        if(pc_next && !pc_seen) pc_queue[pc_count++]=pc_next;
                    }
                }
            }
        }
    }
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017CFB0
 * Original: 0x0017CFB0 - 0x0017CFCF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017CFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017CFB0: ;
    eax = MEM32(0x5765C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017CFCE; /* je: equal / zero */

loc_0017CFB9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017CFC1u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0017CFC1: ;
    esp = esp + 8;
    MEM32(0x5765C4) = 0;

loc_0017CFCE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017CFD0
 * Original: 0x0017CFD0 - 0x0017CFE9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017CFD0(void)
{

loc_0017CFD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017CFD8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017CFD8: ;
    ecx = ZX8(MEM8(esi + 4));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0017CFE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017CFE7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017CFF0
 * Original: 0x0017CFF0 - 0x0017D025 (53 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017CFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017CFF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0x458D20;
    goto loc_0017D000;

    /* nop */

loc_0017D000: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017D009u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0017D009: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D020; /* je: equal / zero */

loc_0017D010: ;
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x458DC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x458DC8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017D000; /* jl: less (signed <) */

loc_0017D01B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017D020: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017D030
 * Original: 0x0017D030 - 0x0017D047 (23 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D030(void)
{

loc_0017D030: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0017D03Du); RECOMP_ABI_CALL(0x0017CFF0u, sub_0017CFF0); /* call 0x0017CFF0 */

loc_0017D03D: ;
    esp = esp + 4;
    MEM32(esi + 0x70) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017D050
 * Original: 0x0017D050 - 0x0017D075 (37 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D050(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017D050: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D073; /* je: equal / zero */

loc_0017D05A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0017D05Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D05F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D073; /* je: equal / zero */

loc_0017D063: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017D06Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D06B: ;
    edx = MEM32(eax);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

loc_0017D073: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017D080
 * Original: 0x0017D080 - 0x0017D243 (451 bytes, 138 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D080(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017D080: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354820);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0017D0A8u); RECOMP_ABI_CALL(0x00173890u, sub_00173890); /* call 0x00173890 */

loc_0017D0A8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CC13C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0017D0B8u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017D0B8: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x40) = 0;
    PUSH32(esp, 0x0017D0CCu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017D0CC: ;
    ebx = ebx | 0xFFFFFFFFu;
    ecx = esp + 0x14;
    ebp = eax;
    MEM32(esp + 0x3C) = ebx;
    PUSH32(esp, 0x0017D0DEu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017D0DE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D0F9; /* je: equal / zero */

loc_0017D0E2: ;
    eax = MEM32(esi);
    ecx = ebp;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0017D0EFu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017D0EF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0017D0F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D0F9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DFBBC);
    ecx = esp + 0x1C;
    MEM32(esi + 0x70) = 0x458D20;
    PUSH32(esp, 0x0017D110u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017D110: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x40) = 1;
    PUSH32(esp, 0x0017D124u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017D124: ;
    ecx = esp + 0x14;
    ebp = eax;
    MEM32(esp + 0x3C) = ebx;
    PUSH32(esp, 0x0017D133u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017D133: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D14A; /* je: equal / zero */

loc_0017D137: ;
    ecx = ebp;
    PUSH32(esp, 0x0017D13Eu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017D13E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017D144u); RECOMP_ABI_CALL(0x0017CFF0u, sub_0017CFF0); /* call 0x0017CFF0 */

loc_0017D144: ;
    esp = esp + 4;
    MEM32(esi + 0x70) = eax;

loc_0017D14A: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D15B; /* je: equal / zero */

loc_0017D151: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 7), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017D15B; /* jne: not equal / not zero */

loc_0017D157: ;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 0x10;

loc_0017D15B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DFBB0);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0017D16Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017D16B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x40) = 2;
    PUSH32(esp, 0x0017D17Fu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017D17F: ;
    ecx = esp + 0x14;
    ebp = eax;
    MEM32(esp + 0x3C) = ebx;
    PUSH32(esp, 0x0017D18Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017D18E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D1BA; /* je: equal / zero */

loc_0017D192: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0017D19Eu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017D19E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x458C90);
    PUSH32(esp, 0x0017D1A9u); RECOMP_ABI_CALL(0x00123100u, sub_00123100); /* call 0x00123100 */

loc_0017D1A9: ;
    eax = ZX8(LO8(eax));
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D1BA; /* je: equal / zero */

loc_0017D1B3: ;
    SET_LO8(ecx, MEM8(esp + 0x44));
    MEM8(esi + 0x6C) = LO8(ecx);

loc_0017D1BA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DFBA4);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0017D1CAu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0017D1CA: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x40) = 3;
    PUSH32(esp, 0x0017D1DEu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0017D1DE: ;
    ecx = esp + 0x24;
    edi = eax;
    MEM32(esp + 0x3C) = ebx;
    PUSH32(esp, 0x0017D1EDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0017D1ED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D216; /* je: equal / zero */

loc_0017D1F1: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0017D1FDu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0017D1FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x458C90);
    PUSH32(esp, 0x0017D208u); RECOMP_ABI_CALL(0x00123100u, sub_00123100); /* call 0x00123100 */

loc_0017D208: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D216; /* je: equal / zero */

loc_0017D20F: ;
    SET_LO8(ecx, MEM8(esp + 0x44));
    MEM8(esi + 0x6D) = LO8(ecx);

loc_0017D216: ;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D22E; /* je: equal / zero */

loc_0017D21D: ;
    esi = MEM32(esi + 0x70);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D22E; /* je: equal / zero */

loc_0017D224: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0017D22Eu); RECOMP_ABI_CALL(0x0018A600u, sub_0018A600); /* call 0x0018A600 */

loc_0017D22E: ;
    ecx = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0017D250
 * Original: 0x0017D250 - 0x0017D4EC (668 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D250(void)
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

loc_0017D250: ;
    esp = esp - 0x30;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D4E7; /* je: equal / zero */

loc_0017D260: ;
    fp_push(MEMF(0x3C8380)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    fp_push(MEMF(0x3C6E40)); /* fld float */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 0x3F4CCCCD;
    MEM32(esp + 0xC) = 0x3F4CCCCD;
    MEM32(esp + 0x10) = 0x3F4CCCCD;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F4CCCCD;
    MEM32(esp + 0x1C) = 0x3F4CCCCD;
    MEM32(esp + 0x20) = 0x3F4CCCCD;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x2C) = 0x3ECCCCCD;
    MEM32(esp + 0x30) = 0x3ECCCCCD;
    if (TEST_Z(_fa, _fb)) goto loc_0017D352; /* je: equal / zero */

loc_0017D2C9: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0017D2D2u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017D2D2: ;
    ecx = ZX8(MEM8(esi + 4));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0017D2E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D2E1: ;
    edx = MEM32(eax);
    MEM32(esp + 8) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x10) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0017D301u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017D301: ;
    ecx = ZX8(MEM8(esi + 5));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0017D310u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D310: ;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0017D330u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0017D330: ;
    ecx = ZX8(MEM8(esi + 6));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0017D33Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D33F: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(eax + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = ecx;

loc_0017D352: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0017D3EF; /* je: equal / zero */

loc_0017D35F: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA844); /* fmul dword ptr [0x3ca844] */
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x10) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0017D397; /* jp: parity */

loc_0017D391: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0017D3A1;

loc_0017D397: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x14) = 0x3F800000;

loc_0017D3A1: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA844); /* fmul dword ptr [0x3ca844] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0017D3BE; /* jp: parity */

loc_0017D3B8: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0017D3C8;

loc_0017D3BE: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x18) = 0x3F800000;

loc_0017D3C8: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA844); /* fmul dword ptr [0x3ca844] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0017D3E5; /* jp: parity */

loc_0017D3DF: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0017D3EF;

loc_0017D3E5: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x1C) = 0x3F800000;

loc_0017D3EF: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017D486; /* jne: not equal / not zero */

loc_0017D3FB: ;
    ecx = MEM32(esp + 0x28);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    edx = MEM32(esp + 0x2C);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xC) = edx;
    fp_top() = fp_top() * MEMF(0x3CA844); /* fmul dword ptr [0x3ca844] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0017D42E; /* jp: parity */

loc_0017D428: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0017D438;

loc_0017D42E: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x14) = 0x3F800000;

loc_0017D438: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA844); /* fmul dword ptr [0x3ca844] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0017D455; /* jp: parity */

loc_0017D44F: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0017D45F;

loc_0017D455: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x18) = 0x3F800000;

loc_0017D45F: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA844); /* fmul dword ptr [0x3ca844] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0017D47C; /* jp: parity */

loc_0017D476: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0017D48A;

loc_0017D47C: ;
    MEM32(esp + 0x1C) = 0x3F800000;
    goto loc_0017D488;

loc_0017D486: ;
    fp_pop(); /* fstp st(0) */

loc_0017D488: ;
    fp_pop(); /* fstp st(0) */

loc_0017D48A: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D4CC; /* je: equal / zero */

loc_0017D492: ;
    PUSH32(esp, 0x0017D497u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0017D497: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017D49Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D49E: ;
    fp_top() = fp_top() * MEMF(0x3DFBC4); /* fmul dword ptr [0x3dfbc4] */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    fp_top() = sin(fp_top()); /* fsin */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = edi;
    fp_top() = fp_top() * MEMF(0x3C8828); /* fmul dword ptr [0x3c8828] */
    fp_top() = fp_top() + MEMF(0x3CA9D8); /* fadd dword ptr [0x3ca9d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0017D4C7u); RECOMP_ABI_CALL(0x002438E0u, sub_002438E0); /* call 0x002438E0 */

loc_0017D4C7: ;
    POP32(esp, edi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_0017D4CC: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(edi) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = edx;

loc_0017D4E7: ;
    POP32(esp, edi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0017D4F0
 * Original: 0x0017D4F0 - 0x0017D589 (153 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017D4F0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0017D4FBu); RECOMP_ABI_CALL(0x00173020u, sub_00173020); /* call 0x00173020 */

loc_0017D4FB: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) >> 2);
    PUSH32(esp, 0);
    edx = esp + 8;
    eax = eax & 0xFFFFFF01u;
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017D522u); RECOMP_ABI_CALL(0x0017D250u, sub_0017D250); /* call 0x0017D250 */

loc_0017D522: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017D584; /* jne: not equal / not zero */

loc_0017D52C: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D584; /* je: equal / zero */

loc_0017D533: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0017D538u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D538: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D584; /* je: equal / zero */

loc_0017D53C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x62);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0017D54Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D54A: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0017D555u); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_0017D555: ;
    xml1_graphics_menu_begin(esi);
    edx = ZX8(MEM8(esi + 0x6D));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x6C));
    edx = edx | eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x64);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x66);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x78);
    edx = edx - edi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017D583u); RECOMP_ABI_CALL(0x0018AB00u, sub_0018AB00); /* call 0x0018AB00 */

loc_0017D583: ;
    xml1_graphics_menu_projection(esi);
    xml1_graphics_menu_end();
    POP32(esp, edi);

loc_0017D584: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0017D590
 * Original: 0x0017D590 - 0x0017D5B7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017D590: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x74);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017D59F; /* jne: not equal / not zero */

loc_0017D598: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017D59F: ;
    PUSH32(esp, 0x0017D5A4u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_0017D5A4: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x1008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017D5C0
 * Original: 0x0017D5C0 - 0x0017D670 (176 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D5C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017D5C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D66D; /* je: equal / zero */

loc_0017D5CF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0017D5D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D5D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D66D; /* je: equal / zero */

loc_0017D5DC: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017D5E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D5E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D66D; /* je: equal / zero */

loc_0017D5EC: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0017D5FC; /* je: equal / zero */

loc_0017D5F8: ;
    ebp = (uint32_t)(int32_t)SMEM16(eax + 8);

loc_0017D5FC: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    ebx = MEM32(esi + 0x78);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0017D607u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D607: ;
    edi = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017D610u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D610: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0017D618u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D618: ;
    PUSH32(esp, 0x0017D61Du); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0017D61D: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017D627u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D627: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    ebx = eax;
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0017D636u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D636: ;
    eax = MEM32(eax);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0017D640u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D640: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0017D648u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D648: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0017D651u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D651: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D66A; /* je: equal / zero */

loc_0017D658: ;
    edi = MEM32(eax);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0017D663u); RECOMP_ABI_CALL(0x00161080u, sub_00161080); /* call 0x00161080 */

loc_0017D663: ;
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x64); PUSH32(esp, 0x0017D66Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D66A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0017D66D: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017D670
 * Original: 0x0017D670 - 0x0017D6D2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017D670: ;
    edx = ecx;
    eax = MEM32(edx + 0x10C18);
    eax = MEM32(edx + eax * 4 + 0x10A10);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x10C20;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x10C18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    MEM32(edx + 0x10C18) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0017D6BC; /* jl: less (signed <) */

loc_0017D6B2: ;
    MEM32(edx + 0x10C18) = 0;

loc_0017D6BC: ;
    MEM32(edx + 0x10C1C) = MEM32(edx + 0x10C1C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x10C1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x10C30);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x10C30) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017D6E0
 * Original: 0x0017D6E0 - 0x0017D742 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017D6E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x10C14) = esi;
    MEM32(ecx + 0x10C18) = esi;
    MEM32(ecx + 0x10C1C) = esi;
    edx = 0; /* xor self */
    goto loc_0017D700;

    /* nop */

loc_0017D700: ;
    eax = MEM32(ecx + 0x10C14);
    edi = MEM32(ecx + 0x10C1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(ecx + 0x10C14) = eax;
    MEM32(ecx + 0x10C1C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0017D72E; /* jl: less (signed <) */

loc_0017D721: ;
    MEM32(ecx + 0x10C14) = esi;
    eax = 0x7F;
    goto loc_0017D72F;

loc_0017D72E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0017D72F: ;
    MEM32(ecx + eax * 4 + 0x10A10) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0017D700; /* jl: less (signed <) */

loc_0017D73F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}


