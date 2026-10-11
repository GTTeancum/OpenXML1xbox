#include "engine/progression/talent_slot_layout.h"
#include "engine/saves/raven_saved_stats_guest.h"
#include "engine/world/raven_extraction_guest.h"
#include "engine/world/raven_extraction_owner.h"
#include "ui/pc_prompts.h"
#include "ui/pc_menu.h"
/**
 * X-Men Legends - Recompiled code chunk 34
 * Functions: 250 (0x00186D70 - 0x00192520)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/progression/character_talent_guest.h"
#include "game/xml1/newgame_plus.h"
#include "diagnostics/newgame_trace.h"
#include "game/xml1/character_limits.h"
#include <math.h>

/**
 * sub_00186D70
 * Original: 0x00186D70 - 0x00186E20 (176 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00186D70: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    if (TEST_S(_fas, _fbs)) goto loc_00186D8C; /* jl: less (signed <) */

loc_00186D7B: ;
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
 * sub_00186E20
 * Original: 0x00186E20 - 0x00186E53 (51 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00186E20: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00186E46; /* jl: less (signed <) */

loc_00186E2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00186E46; /* jge: greater or equal (signed >=) */

loc_00186E2F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x1358) = LO8(ecx);
    esp += 8; return; /* ret 4 */

loc_00186E46: ;
    SET_LO8(edx, MEM8(esp + 4));
    MEM8(ecx + 0x135C) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00186E60
 * Original: 0x00186E60 - 0x001872D4 (1140 bytes, 321 insns)
 * Category: game_ui
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186E60(void)
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

loc_00186E60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354B01);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x16C));
    esp = esp - 0x16C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x34;
    MEM32(esp + 0x178) = eax;
    PUSH32(esp, 0x00186E96u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_00186E96: ;
    eax = MEM32(esi + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x184) = 0;
    if (TEST_S(_fas, _fbs)) goto loc_00186EC0; /* jl: less (signed <) */

loc_00186EAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00186EC0; /* jge: greater or equal (signed >=) */

loc_00186EB0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + esi + 4;
    MEM32(esp + 0x30) = eax;
    goto loc_00186EC7;

loc_00186EC0: ;
    ecx = esi + 4;
    MEM32(esp + 0x30) = ecx;

loc_00186EC7: ;
    edi = MEM32(esp + 0x190);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, 2);
    if (CMP_NE(_fa, _fb)) goto loc_00186EF9; /* jne: not equal / not zero */

loc_00186ED5: ;
    edx = MEM32(esp + 0x190);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00186EE6u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00186EE6: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    eax = esp + 0x28;
    MEM8(esp + 0x18C) = 1;
    PUSH32(esp, eax);
    goto loc_00186F1A;

loc_00186EF9: ;
    ecx = MEM32(esp + 0x190);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00186F0Au); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00186F0A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edx = esp + 0x28;
    MEM8(esp + 0x18C) = 2;
    PUSH32(esp, edx);

loc_00186F1A: ;
    ecx = esp + 0x40;
    PUSH32(esp, 0x00186F23u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_00186F23: ;
    ecx = esp + 0x20;
    MEM8(esp + 0x184) = 0;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00186F36u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00186F36: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00187239; /* je: equal / zero */

loc_00186F3E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00186F47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186F47: ;
    PUSH32(esp, 0x3E0424);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00186F5Au); RECOMP_ABI_CALL(0x00126650u, sub_00126650); /* call 0x00126650 */

loc_00186F5A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00186F63u); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_00186F63: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00187223; /* je: equal / zero */

loc_00186F6B: ;
    ebx = MEM32(esp + 0x198);

loc_00186F72: ;
    PUSH32(esp, 0x00186F77u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00186F77: ;
    PUSH32(esp, 0x3C806C);
    edi = eax;
    ebp = MEM32(edi);
    PUSH32(esp, 0x3D3E84);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00186F8Eu); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_00186F8E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x00186F94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186F94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00187207; /* je: equal / zero */

loc_00186F9C: ;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3DAEC4);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00186FAFu); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_00186FAF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00186FD7; /* je: equal / zero */

loc_00186FB3: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00186FD7; /* je: equal / zero */

loc_00186FB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00186FD7; /* je: equal / zero */

loc_00186FBC: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00186FD7; /* je: equal / zero */

loc_00186FC1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00186FC8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00186FC8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00187207; /* je: equal / zero */

loc_00186FD7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E0420);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00186FE7u); RECOMP_ABI_CALL(0x001267D0u, sub_001267D0); /* call 0x001267D0 */

loc_00186FE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00187274; /* jne: not equal / not zero */

loc_00186FEF: ;
    edi = MEM32(esi);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3CC13C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00187004u); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_00187004: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x0018700Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018700A: ;
    edi = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E0414);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0018701Cu); RECOMP_ABI_CALL(0x001267D0u, sub_001267D0); /* call 0x001267D0 */

loc_0018701C: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x34); PUSH32(esp, 0x00187022u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187022: ;
    edi = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E0408);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00187034u); RECOMP_ABI_CALL(0x001267D0u, sub_001267D0); /* call 0x001267D0 */

loc_00187034: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x20); PUSH32(esp, 0x0018703Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018703A: ;
    edi = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DD72C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0018704Cu); RECOMP_ABI_CALL(0x001267D0u, sub_001267D0); /* call 0x001267D0 */

loc_0018704C: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x00187052u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187052: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x3E03FC);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00187065u); RECOMP_ABI_CALL(0x001268E0u, sub_001268E0); /* call 0x001268E0 */

loc_00187065: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 0x3C806C);
    MEMF(edx + 0x1350) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esi);
    PUSH32(esp, 0x3E03F0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00187084u); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_00187084: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x44); PUSH32(esp, 0x0018708Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018708A: ;
    edi = MEM32(esi);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3E03E0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0018709Fu); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_0018709F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x40); PUSH32(esp, 0x001870A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001870A5: ;
    edi = MEM32(esi);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3E03D4);
    ecx = esp + 0x18;
    PUSH32(esp, 0x001870BAu); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_001870BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x48); PUSH32(esp, 0x001870C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001870C0: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */

loc_001870C2: ;
    ebp = edi + 1;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3E03CC);
    eax = esp + 0x80;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    MEM8(esp + 0x88) = 0;
    PUSH32(esp, 0x001870E5u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_001870E5: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x001870FBu); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_001870FB: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018710Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018710E: ;
    SET_LO8(eax, MEM8(esp + 0x84));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esp + 0x177) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00187131; /* je: equal / zero */

loc_00187124: ;
    eax = MEM32(esi);
    ecx = esp + 0x78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00187131u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187131: ;
    edi = ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001870C2; /* jl: less (signed <) */

loc_00187138: ;
    PUSH32(esp, 0x3E03C4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0018714Bu); RECOMP_ABI_CALL(0x00126D00u, sub_00126D00); /* call 0x00126D00 */

loc_0018714B: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00187154u); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_00187154: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00187207; /* je: equal / zero */

loc_0018715C: ;
    /* nop */

loc_00187160: ;
    PUSH32(esp, 0x00187165u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00187165: ;
    PUSH32(esp, 0x3C806C);
    edi = eax;
    ebp = MEM32(edi);
    PUSH32(esp, 0x3D3E84);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0018717Cu); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_0018717C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x00187182u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187182: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001871EB; /* je: equal / zero */

loc_00187186: ;
    edi = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DD72C);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00187198u); RECOMP_ABI_CALL(0x001267D0u, sub_001267D0); /* call 0x001267D0 */

loc_00187198: ;
    ecx = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E0408);
    PUSH32(esp, 0x001871A9u); RECOMP_ABI_CALL(0x001267D0u, sub_001267D0); /* call 0x001267D0 */

loc_001871A9: ;
    ecx = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3E03B8);
    PUSH32(esp, 0x001871BDu); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_001871BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3CC6C8);
    ecx = esp + 0x34;
    PUSH32(esp, 0x001871D1u); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_001871D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3CC13C);
    ecx = esp + 0x38;
    PUSH32(esp, 0x001871E5u); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_001871E5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x18); PUSH32(esp, 0x001871EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001871EB: ;
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, 0x001871F6u); RECOMP_ABI_CALL(0x00126DB0u, sub_00126DB0); /* call 0x00126DB0 */

loc_001871F6: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x001871FFu); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_001871FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00187160; /* jne: not equal / not zero */

loc_00187207: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00187212u); RECOMP_ABI_CALL(0x00126DB0u, sub_00126DB0); /* call 0x00126DB0 */

loc_00187212: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0018721Bu); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_0018721B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00186F72; /* jne: not equal / not zero */

loc_00187223: ;
    eax = MEM32(esp + 0x194);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00187232u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187232: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00187239u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187239: ;
    ecx = esp + 0x34;
    MEM32(esp + 0x184) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0018724Du); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_0018724D: ;
    ecx = MEM32(esp + 0x17C);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x178);
    PUSH32(esp, 0x00187267u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00187267: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x178)) >> 32) & 1);
    esp = esp + 0x178;
    esp += 20; return; /* ret 16 */

loc_00187274: ;
    PUSH32(esp, 0x00187279u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00187279: ;
    esi = eax;
    PUSH32(esp, 0x00187280u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00187280: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x00187290u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187290: ;
    edx = MEM32(eax);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x44) = esp;
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x41200000);
    MEM32(ecx + 0xC) = eax;
    esi = MEM32(edi);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3CC13C);
    ecx = esp + 0x30;
    PUSH32(esp, 0x001872C9u); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_001872C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(esi + 0x20); PUSH32(esp, 0x001872CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001872CF: ;
    goto loc_00187239;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}



/**
 * sub_001873D0
 * Original: 0x001873D0 - 0x00187451 (129 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001873D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001873D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_S(_fas, _fbs)) goto loc_001873F0; /* jl: less (signed <) */

loc_001873DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001873F0; /* jge: greater or equal (signed >=) */

loc_001873E4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    edi = eax + esi + 4;
    goto loc_001873F3;

loc_001873F0: ;
    edi = esi + 4;

loc_001873F3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001873FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001873FC: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00187408u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187408: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00187411u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187411: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0018741Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018741F: ;
    PUSH32(esp, 0x00187424u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00187424: ;
    edx = MEM32(eax);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00187432u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187432: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x3C); PUSH32(esp, 0x0018743Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018743A: ;
    eax = MEM32(esp + 0x14);
    MEM32(edi + 0x1350) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0018744Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018744B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00187460
 * Original: 0x00187460 - 0x0018785F (1023 bytes, 303 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187460(void)
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

loc_00187460: ;
    esp = esp - 0x204;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x20C) = eax;
    edi = ecx;
    esi = 2;
    /* nop */

loc_00187480: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00187488u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187488: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187493; /* jne: not equal / not zero */

loc_0018748E: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00187480; /* jns: not sign (positive) */

loc_00187491: ;
    goto loc_001874A2;

loc_00187493: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001874A2; /* jl: less (signed <) */

loc_00187497: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001874A2; /* jge: greater or equal (signed >=) */

loc_0018749C: ;
    MEM32(edi + 0x3A1C) = esi;

loc_001874A2: ;
    eax = MEM32(edi + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001874BD; /* jl: less (signed <) */

loc_001874AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001874BD; /* jge: greater or equal (signed >=) */

loc_001874B1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    esi = eax + edi + 4;
    goto loc_001874C0;

loc_001874BD: ;
    esi = edi + 4;

loc_001874C0: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x10;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001874D4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001874D4: ;
    eax = MEM32(edi + 0x3A30);
    MEM8(esp + 0x117) = LO8(ebx);
    esp = esp + 0xC;
    ecx = eax + 0x43C;
    MEM32(eax + 0x400) = ebx;
    MEM32(eax + 0x404) = ebx;
    PUSH32(esp, 0x001874FBu); RECOMP_ABI_CALL(0x0018AE50u, sub_0018AE50); /* call 0x0018AE50 */

loc_001874FB: ;
    _fa = (uint32_t)(MEM8(esi + 0x1359)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1359), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187523; /* jne: not equal / not zero */

loc_00187504: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0018750Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018750B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x200);
    PUSH32(esp, 0x0018751Au); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018751A: ;
    esp = esp + 0x204;
    esp += 8; return; /* ret 4 */

loc_00187523: ;
    _fa = (uint32_t)(MEM8(edi + 0x3A36)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x3A36), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018754C; /* je: equal / zero */

loc_0018752C: ;
    PUSH32(esp, 0x00187531u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00187531: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00187538u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187538: ;
    PUSH32(esp, 0x0018753Du); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0018753D: ;
    ecx = MEM32(esp + 0x214);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018754Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018754C: ;
    ecx = edi;
    PUSH32(esp, 0x00187553u); RECOMP_ABI_CALL(0x00186140u, sub_00186140); /* call 0x00186140 */

loc_00187553: ;
    fp_push(MEMF(esi + 0x1350)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    ecx = 0; /* xor self */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001875BE; /* jp: parity */

loc_00187568: ;
    SET_LO8(eax, MEM8(esi + 0x1358));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00187593; /* jl: less (signed <) */

loc_00187572: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00187593; /* jge: greater or equal (signed >=) */

loc_00187576: ;
    PUSH32(esp, 0x0018757Bu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018757B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1358);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018758Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018758A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00187591u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187591: ;
    goto loc_001875BC;

loc_00187593: ;
    _fa = (uint32_t)(MEM8(edi + 0x3A36)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x3A36), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001875AD; /* je: equal / zero */

loc_0018759C: ;
    PUSH32(esp, 0x001875A1u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001875A1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x001875ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001875AB: ;
    goto loc_001875BC;

loc_001875AD: ;
    PUSH32(esp, 0x001875B2u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001875B2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001875BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001875BC: ;
    ecx = eax;

loc_001875BE: ;
    eax = ecx;
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187705; /* jne: not equal / not zero */

loc_001875CB: ;
    edx = ecx;
    edx = edx >> 0x14;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187705; /* jne: not equal / not zero */

loc_001875D9: ;
    eax = ecx;
    eax = eax >> 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00187670; /* je: equal / zero */

loc_001875E6: ;
    SET_LO8(eax, MEM8(esi + 0x1357));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00187612; /* jl: less (signed <) */

loc_001875F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x1354)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x1354) (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00187612; /* jge: greater or equal (signed >=) */

loc_001875F8: ;
    ecx = SX8(LO8(eax));
    ecx = ecx << 7;
    PUSH32(esp, 0x100);
    edx = ecx + esi + 0xC02;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    goto loc_0018762D;

loc_00187612: ;
    SET_LO8(ecx, MEM8(esi + 0x12CD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    eax = esi + 0x12CD;
    if (CMP_EQ(_fa, _fb)) goto loc_0018763C; /* je: equal / zero */

loc_00187622: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);

loc_0018762D: ;
    PUSH32(esp, 0x00187632u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00187632: ;
    esp = esp + 0xC;
    MEM8(esp + 0x10B) = LO8(ebx);

loc_0018763C: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187815; /* je: equal / zero */

loc_00187646: ;
    PUSH32(esp, 0x0018764Bu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018764B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00187654u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187654: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0018765Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018765B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001877B0; /* je: equal / zero */

loc_00187663: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1357);
    PUSH32(esp, ecx);
    goto loc_00187799;

loc_00187670: ;
    _fa = (uint32_t)(MEM8(esi + 0x1359)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1359), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001877D5; /* je: equal / zero */

loc_0018767D: ;
    ecx = ecx >> 0x15;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001877D5; /* je: equal / zero */

loc_00187689: ;
    PUSH32(esp, 0x100);
    eax = esi + 0x11CD;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018769Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018769F: ;
    edx = MEM32(edi);
    esp = esp + 0xC;
    ecx = edi;
    MEM8(esp + 0x10B) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001876B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001876B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001876D3; /* je: equal / zero */

loc_001876B4: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1357);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001876C3u); RECOMP_ABI_CALL(0x00185BC0u, sub_00185BC0); /* call 0x00185BC0 */

loc_001876C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001876D3; /* je: equal / zero */

loc_001876C7: ;
    PUSH32(esp, 0x001876CCu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_001876CC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001876D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001876D3: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001876DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001876DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001876F2; /* je: equal / zero */

loc_001876DE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x001876E7u); RECOMP_ABI_CALL(0x00185B50u, sub_00185B50); /* call 0x00185B50 */

loc_001876E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001876F2; /* je: equal / zero */

loc_001876EB: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001876F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001876F2: ;
    PUSH32(esp, 0x001876F7u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001876F7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00187700u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187700: ;
    goto loc_001877D5;

loc_00187705: ;
    _fa = (uint32_t)(MEM8(esi + 0x1354)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1354), LO8(ebx) (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00187722; /* jg: greater (signed >) */

loc_0018770D: ;
    _fa = (uint32_t)(MEM8(esi + 0x1359)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1359), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00187722; /* je: equal / zero */

loc_00187716: ;
    _fa = (uint32_t)(MEM8(esi + 0x124D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x124D), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001877D5; /* je: equal / zero */

loc_00187722: ;
    PUSH32(esp, 0x00187727u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00187727: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00187730u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187730: ;
    SET_LO8(eax, MEM8(esi + 0x1357));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018775C; /* jl: less (signed <) */

loc_0018773A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x1354)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x1354) (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018775C; /* jge: greater or equal (signed >=) */

loc_00187742: ;
    eax = SX8(LO8(eax));
    eax = eax << 7;
    PUSH32(esp, 0x100);
    ecx = eax + esi + 0x701;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    goto loc_00187777;

loc_0018775C: ;
    SET_LO8(ecx, MEM8(esi + 0x124D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    eax = esi + 0x124D;
    if (CMP_EQ(_fa, _fb)) goto loc_00187786; /* je: equal / zero */

loc_0018776C: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);

loc_00187777: ;
    PUSH32(esp, 0x0018777Cu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018777C: ;
    esp = esp + 0xC;
    MEM8(esp + 0x10B) = LO8(ebx);

loc_00187786: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0018778Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018778D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001877B0; /* je: equal / zero */

loc_00187791: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1357);
    PUSH32(esp, eax);

loc_00187799: ;
    ecx = edi;
    PUSH32(esp, 0x001877A0u); RECOMP_ABI_CALL(0x00185BC0u, sub_00185BC0); /* call 0x00185BC0 */

loc_001877A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001877B0; /* je: equal / zero */

loc_001877A4: ;
    PUSH32(esp, 0x001877A9u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_001877A9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001877B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001877B0: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001877B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001877B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001877D5; /* je: equal / zero */

loc_001877BB: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1357);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001877CAu); RECOMP_ABI_CALL(0x00185B50u, sub_00185B50); /* call 0x00185B50 */

loc_001877CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001877D5; /* je: equal / zero */

loc_001877CE: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001877D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001877D5: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187815; /* je: equal / zero */

loc_001877DB: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DE1C8);
    ecx = esp + 0x114;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    MEM8(esp + 0x11C) = LO8(ebx);
    PUSH32(esp, 0x001877FEu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_001877FE: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x00187806u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00187806: ;
    edx = MEM32(eax);
    ecx = esp + 0x10C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00187815u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187815: ;
    ecx = edi;
    PUSH32(esp, 0x0018781Cu); RECOMP_ABI_CALL(0x001865A0u, sub_001865A0); /* call 0x001865A0 */

loc_0018781C: ;
    fp_push(MEMF(esi + 0x1350)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187847; /* jne: not equal / not zero */

loc_0018782F: ;
    PUSH32(esp, 0x00187834u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00187834: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018783Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018783B: ;
    fp_top() = MEMF(esi + 0x1350) - fp_top(); /* fsubr dword ptr [esi + 0x1350] */
    MEMF(esi + 0x1350) = (float)fp_top(); fp_pop(); /* fstp */

loc_00187847: ;
    ecx = MEM32(esp + 0x20C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x00187856u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00187856: ;
    esp = esp + 0x204;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00187860
 * Original: 0x00187860 - 0x0018786C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187860(void)
{

loc_00187860: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00187868u); RECOMP_ABI_CALL(0x00185940u, sub_00185940); /* call 0x00185940 */

loc_00187868: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00187870
 * Original: 0x00187870 - 0x00187880 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187870(void)
{

loc_00187870: ;
    eax = ecx;
    SET_LO8(ecx, 0); /* xor self */
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 0x40) = LO8(ecx);
    MEM8(eax + 0x80) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00187880
 * Original: 0x00187880 - 0x00187912 (146 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187880(void)
{

loc_00187880: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    ecx = esi + 0x200;
    MEM8(esi) = LO8(ebx);
    PUSH32(esp, 0x00187893u); RECOMP_ABI_CALL(0x00187860u, sub_00187860); /* call 0x00187860 */

loc_00187893: ;
    ecx = esi + 0x701;
    PUSH32(esp, 0x0018789Eu); RECOMP_ABI_CALL(0x00187860u, sub_00187860); /* call 0x00187860 */

loc_0018789E: ;
    ecx = esi + 0xC02;
    PUSH32(esp, 0x001878A9u); RECOMP_ABI_CALL(0x00187860u, sub_00187860); /* call 0x00187860 */

loc_001878A9: ;
    MEM32(esi + 0x1104) = ebx;
    ecx = esi + 0x110C;
    MEM32(esi + 0x1108) = ebx;
    PUSH32(esp, 0x001878C0u); RECOMP_ABI_CALL(0x00187870u, sub_00187870); /* call 0x00187870 */

loc_001878C0: ;
    MEM8(esi + 0x11CD) = LO8(ebx);
    MEM8(esi + 0x124D) = LO8(ebx);
    MEM8(esi + 0x12CD) = LO8(ebx);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esi + 0x1357) = LO8(eax);
    MEM8(esi + 0x1358) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x1359));
    SET_LO8(eax, LO8(eax) & 0xE6);
    SET_LO8(eax, LO8(eax) | 6);
    MEM8(esi + 0x1359) = LO8(eax);
    MEM8(esi + 0x1354) = LO8(ebx);
    MEM8(esi + 0x1356) = LO8(ebx);
    MEM32(esi + 0x1350) = 0xBF800000u;
    MEM8(esi + 0x1355) = 6;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00187920
 * Original: 0x00187920 - 0x0018797D (93 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187920(void)
{

loc_00187920: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x187880);
    esi = ecx;
    PUSH32(esp, 3);
    PUSH32(esp, 0x135C);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM32(esi) = 0x3E0434;
    PUSH32(esp, 0x00187943u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_00187943: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x3A1C) = eax;
    MEM32(esi + 0x3A20) = eax;
    MEM32(esi + 0x3A24) = eax;
    MEM32(esi + 0x3A28) = eax;
    MEM32(esi + 0x3A2C) = eax;
    MEM32(esi + 0x3A30) = eax;
    MEM8(esi + 0x3A36) = MEM8(esi + 0x3A36) & 0xFC;
    MEM16(esi + 0x3A34) = 0x12C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00187980
 * Original: 0x00187980 - 0x001879BB (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187980: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0018799B; /* jl: less (signed <) */

loc_0018798A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018799B; /* jge: greater or equal (signed >=) */

loc_0018798F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    goto loc_0018799E;

loc_0018799B: ;
    eax = ecx + 4;

loc_0018799E: ;
    SET_LO8(ecx, MEM8(esp + 4));
    SET_LO8(edx, MEM8(eax + 0x1359));
    SET_LO8(ecx, LO8(ecx) << 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x1359) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001879C0
 * Original: 0x001879C0 - 0x001879FB (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001879C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001879C0: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001879DB; /* jl: less (signed <) */

loc_001879CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001879DB; /* jge: greater or equal (signed >=) */

loc_001879CF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    goto loc_001879DE;

loc_001879DB: ;
    eax = ecx + 4;

loc_001879DE: ;
    SET_LO8(ecx, MEM8(esp + 4));
    SET_LO8(edx, MEM8(eax + 0x1359));
    SET_LO8(ecx, LO8(ecx) << 3);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x1359) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00187A00
 * Original: 0x00187A00 - 0x00187A3B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187A00: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00187A1B; /* jl: less (signed <) */

loc_00187A0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00187A1B; /* jge: greater or equal (signed >=) */

loc_00187A0F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    goto loc_00187A1E;

loc_00187A1B: ;
    eax = ecx + 4;

loc_00187A1E: ;
    SET_LO8(ecx, MEM8(esp + 4));
    SET_LO8(edx, MEM8(eax + 0x1359));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x1359) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00187A40
 * Original: 0x00187A40 - 0x00187A74 (52 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187A40: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00187A65; /* jl: less (signed <) */

loc_00187A4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00187A65; /* jge: greater or equal (signed >=) */

loc_00187A4F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    SET_LO8(eax, MEM8(eax + 0x1359));
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

loc_00187A65: ;
    eax = ecx + 4;
    SET_LO8(eax, MEM8(eax + 0x1359));
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00187A80
 * Original: 0x00187A80 - 0x00187AED (109 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187A80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354B21);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x3A38);
    PUSH32(esp, 0x00187AA6u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00187AA6: ;
    esp = esp + 0xC;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00187AD7; /* je: equal / zero */

loc_00187ABC: ;
    ecx = eax;
    PUSH32(esp, 0x00187AC3u); RECOMP_ABI_CALL(0x00187920u, sub_00187920); /* call 0x00187920 */

loc_00187AC3: ;
    MEM32(0x577670) = eax;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00187AD7: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    MEM32(0x577670) = eax;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}



/**
 * sub_00187B10
 * Original: 0x00187B10 - 0x00187C89 (377 bytes, 126 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187B10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_S(_fas, _fbs)) goto loc_00187B32; /* jl: less (signed <) */

loc_00187B1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00187B32; /* jge: greater or equal (signed >=) */

loc_00187B24: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x135C);
    edi = ecx + esi + 4;
    goto loc_00187B35;

loc_00187B32: ;
    edi = esi + 4;

loc_00187B35: ;
    SET_LO8(ecx, MEM8(edi + 0x1359));
    ebx = 1;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00187C85; /* je: equal / zero */

loc_00187B48: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00187B50u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187B50: ;
    PUSH32(esp, 0x00187B55u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00187B55: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00187B5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187B5E: ;
    MEM8(edi + 0x1359) = MEM8(edi + 0x1359) & 0xFE;

loc_00187B65: ;
    eax = MEM32(esi + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00187B82; /* jl: less (signed <) */

loc_00187B6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00187B82; /* jge: greater or equal (signed >=) */

loc_00187B74: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x135C);
    ecx = ecx + esi + 4;
    goto loc_00187B85;

loc_00187B82: ;
    ecx = esi + 4;

loc_00187B85: ;
    _fa = (uint32_t)(MEM8(ecx + 0x1359)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1359), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187BAF; /* jne: not equal / not zero */

loc_00187B8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00187BAF; /* jle: less or equal (signed <=) */

loc_00187B91: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00187B9E; /* jns: not sign (positive) */

loc_00187B94: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x3A1C) = eax;
    goto loc_00187B65;

loc_00187B9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00187B65; /* jl: less (signed <) */

loc_00187BA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00187B65; /* jge: greater or equal (signed >=) */

loc_00187BA7: ;
    MEM32(esi + 0x3A1C) = eax;
    goto loc_00187B65;

loc_00187BAF: ;
    eax = MEM32(esi + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00187BCA; /* jl: less (signed <) */

loc_00187BB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00187BCA; /* jge: greater or equal (signed >=) */

loc_00187BBE: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + esi + 4;
    goto loc_00187BCD;

loc_00187BCA: ;
    eax = esi + 4;

loc_00187BCD: ;
    _fa = (uint32_t)(MEM8(eax + 0x1359)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1359), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187C1D; /* jne: not equal / not zero */

loc_00187BD5: ;
    _fa = (uint32_t)(MEM8(esi + 0x3A36)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3A36), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187C01; /* jne: not equal / not zero */

loc_00187BDE: ;
    PUSH32(esp, 0x00187BE3u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00187BE3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x00187BEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187BED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187C0A; /* jne: not equal / not zero */

loc_00187BF1: ;
    PUSH32(esp, 0x00187BF6u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00187BF6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00187BFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187BFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00187C0A; /* je: equal / zero */

loc_00187C01: ;
    ecx = esi;
    PUSH32(esp, 0x00187C08u); RECOMP_ABI_CALL(0x00185780u, sub_00185780); /* call 0x00185780 */

loc_00187C08: ;
    goto loc_00187C1D;

loc_00187C0A: ;
    ecx = esi;
    PUSH32(esp, 0x00187C11u); RECOMP_ABI_CALL(0x00185850u, sub_00185850); /* call 0x00185850 */

loc_00187C11: ;
    PUSH32(esp, 0x00187C16u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00187C16: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00187C1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187C1D: ;
    ecx = MEM32(0x577670);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187C32; /* jne: not equal / not zero */

loc_00187C27: ;
    PUSH32(esp, 0x00187C2Cu); RECOMP_ABI_CALL(0x00187A80u, sub_00187A80); /* call 0x00187A80 */

loc_00187C2C: ;
    ecx = MEM32(0x577670);

loc_00187C32: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00187C37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187C37: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187C85; /* jne: not equal / not zero */

loc_00187C3B: ;
    PUSH32(esp, 0x00187C40u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00187C40: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00187C47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187C47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00187C85; /* je: equal / zero */

loc_00187C4B: ;
    PUSH32(esp, 0x00187C50u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00187C50: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00187C5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187C5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187C77; /* jne: not equal / not zero */

loc_00187C5E: ;
    PUSH32(esp, 0x00187C63u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_00187C63: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00187C6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187C6B: ;
    PUSH32(esp, 0x00187C70u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_00187C70: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00187C77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187C77: ;
    PUSH32(esp, 0x00187C7Cu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00187C7C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00187C85u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187C85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00187C90
 * Original: 0x00187C90 - 0x00187D5F (207 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187C90(void)
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

loc_00187C90: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 4), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187D58; /* je: equal / zero */

loc_00187CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00187CA7u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_00187CA7: ;
    edi = eax;
    PUSH32(esp, 0x00187CAEu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_00187CAE: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00187CB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187CB7: ;
    fp_top() = fp_top() + MEMF(0x3CDAEC); /* fadd dword ptr [0x3cdaec] */
    edx = MEM32(ebx);
    ecx = ebx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00187CC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187CC8: ;
    fp_top() = fp_top() - MEMF(0x3CDAEC); /* fsub dword ptr [0x3cdaec] */
    ecx = esi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00187CD9u); RECOMP_ABI_CALL(0x0018A060u, sub_0018A060); /* call 0x0018A060 */

loc_00187CD9: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ecx;
    MEM16(eax + 0xC) = 0xFFFF;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x00187CF2u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_00187CF2: ;
    edi = eax;
    PUSH32(esp, 0x00187CF9u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_00187CF9: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00187D02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187D02: ;
    fp_top() = fp_top() + MEMF(0x3C8244); /* fadd dword ptr [0x3c8244] */
    edx = MEM32(ebx);
    ecx = ebx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00187D13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187D13: ;
    fp_top() = fp_top() + MEMF(0x3C8244); /* fadd dword ptr [0x3c8244] */
    ecx = esi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00187D24u); RECOMP_ABI_CALL(0x0018A060u, sub_0018A060); /* call 0x0018A060 */

loc_00187D24: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edi = eax;
    PUSH32(esp, 0x00187D2Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00187D2F: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM16(edi + 0xE) = LO16(eax);
    PUSH32(esp, 0x00187D3Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00187D3C: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    MEM16(edi + 0x10) = LO16(eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00187D56u); RECOMP_ABI_CALL(0x0018A0E0u, sub_0018A0E0); /* call 0x0018A0E0 */

loc_00187D56: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00187D58: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00187D60
 * Original: 0x00187D60 - 0x00187D84 (36 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187D60(void)
{

loc_00187D60: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00187D79u); RECOMP_ABI_CALL(0x0018A4F0u, sub_0018A4F0); /* call 0x0018A4F0 */

loc_00187D79: ;
    ecx = esi;
    PUSH32(esp, 0x00187D80u); RECOMP_ABI_CALL(0x0018A4B0u, sub_0018A4B0); /* call 0x0018A4B0 */

loc_00187D80: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00187D90
 * Original: 0x00187D90 - 0x00188A07 (3191 bytes, 331 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187D90: ;
    SET_LO8(ecx, MEM8(0x577B68));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001889D9; /* jne: not equal / not zero */

loc_00187DA3: ;
    MEM32(0x577B68) = MEM32(0x577B68) | eax;
    MEM32(0x577688) = 0;
    MEM32(0x57768C) = 0;
    MEM32(0x577690) = 0;
    MEM32(0x577694) = 0x3E800000;
    MEM32(0x577698) = 0x3F000000;
    MEM32(0x57769C) = 0;
    MEM32(0x5776A0) = 0x3F000000;
    MEM32(0x5776A4) = 0x3E800000;
    MEM32(0x5776A8) = 0;
    MEM32(0x5776AC) = 0;
    MEM32(0x5776B0) = 0;
    MEM32(0x5776B4) = 0x3F800000;
    MEM32(0x5776B8) = 0x3F800000;
    MEM32(0x5776BC) = 0;
    MEM32(0x5776C0) = 0x3F800000;
    MEM32(0x5776C4) = 0x3F800000;
    MEM32(0x5776C8) = 0;
    MEM32(0x5776CC) = 0;
    MEM32(0x5776D0) = 0;
    MEM32(0x5776D4) = 0x3F800000;
    MEM32(0x5776D8) = 0x3F800000;
    MEM32(0x5776DC) = 0;
    MEM32(0x5776E0) = 0x3F800000;
    MEM32(0x5776E4) = 0x3F800000;
    MEM32(0x5776E8) = 0;
    MEM32(0x5776EC) = 0;
    MEM32(0x5776F0) = 0;
    MEM32(0x5776F4) = 0x3F800000;
    MEM32(0x5776F8) = 0x3F800000;
    MEM32(0x5776FC) = 0;
    MEM32(0x577700) = 0x3F800000;
    MEM32(0x577704) = 0x3F800000;
    MEM32(0x577708) = 0x3E200000;
    MEM32(0x57770C) = 0;
    MEM32(0x577710) = 0x3E080000;
    MEM32(0x577714) = 0;
    MEM32(0x577718) = 0x3E200000;
    MEM32(0x57771C) = 0x3E800000;
    MEM32(0x577720) = 0x3E080000;
    MEM32(0x577724) = 0x3E800000;
    MEM32(0x577728) = 0x3E480000;
    MEM32(0x57772C) = 0;
    MEM32(0x577730) = 0x3E300000;
    MEM32(0x577734) = 0;
    MEM32(0x577738) = 0x3E480000;
    MEM32(0x57773C) = 0x3E800000;
    MEM32(0x577740) = 0x3E300000;
    MEM32(0x577744) = 0x3E800000;
    MEM32(0x577748) = 0x3E180000;
    MEM32(0x57774C) = 0;
    MEM32(0x577750) = 0x3E180000;
    MEM32(0x577754) = 0;
    MEM32(0x577758) = 0x3E180000;
    MEM32(0x57775C) = 0;
    MEM32(0x577760) = 0x3E180000;
    MEM32(0x577764) = 0;
    MEM32(0x577768) = 0x3E480000;
    MEM32(0x57776C) = 0;
    MEM32(0x577770) = 0x3E300000;
    MEM32(0x577774) = 0;
    MEM32(0x577778) = 0x3E480000;
    MEM32(0x57777C) = 0x3CC00000;
    MEM32(0x577780) = 0x3E300000;
    MEM32(0x577784) = 0x3CC00000;
    MEM32(0x577788) = 0x3E700000;
    MEM32(0x57778C) = 0;
    MEM32(0x577790) = 0x3E580000;
    MEM32(0x577794) = 0;
    MEM32(0x577798) = 0x3E700000;
    MEM32(0x57779C) = 0x3E800000;
    MEM32(0x5777A0) = 0x3E580000;
    MEM32(0x5777A4) = 0x3E800000;
    MEM32(0x5777A8) = 0x3F000000;
    MEM32(0x5777AC) = 0x3F800000;
    MEM32(0x5777B0) = 0x3F000000;
    MEM32(0x5777B4) = 0x3F600000;
    MEM32(0x5777B8) = 0x3F400000;
    MEM32(0x5777BC) = 0x3F800000;
    MEM32(0x5777C0) = 0x3F400000;
    MEM32(0x5777C4) = 0x3F600000;
    MEM32(0x5777C8) = 0x3C000000;
    MEM32(0x5777CC) = 0x3F3F0000;
    MEM32(0x5777D0) = 0x3C000000;
    MEM32(0x5777D4) = 0x3F010000;
    MEM32(0x5777D8) = 0x3EFC0000;
    MEM32(0x5777DC) = 0x3F3F0000;
    MEM32(0x5777E0) = 0x3EFC0000;
    MEM32(0x5777E4) = 0x3F010000;
    MEM32(0x5777E8) = 0x3F000000;
    MEM32(0x5777EC) = 0x3E000000;
    MEM32(0x5777F0) = 0x3F000000;
    MEM32(0x5777F4) = 0;
    MEM32(0x5777F8) = 0x3F400000;
    MEM32(0x5777FC) = 0x3E000000;
    MEM32(0x577800) = 0x3F400000;
    MEM32(0x577804) = 0;
    MEM32(0x577808) = 0x3F400000;
    MEM32(0x57780C) = 0x3E000000;
    MEM32(0x577810) = 0x3F400000;
    MEM32(0x577814) = 0x3B800000;
    MEM32(0x577818) = 0x3F7E0000;
    MEM32(0x57781C) = 0x3E000000;
    MEM32(0x577820) = 0x3F7E0000;
    MEM32(0x577824) = 0x3B800000;
    MEM32(0x577828) = 0x3F000000;
    MEM32(0x57782C) = 0x3E800000;
    MEM32(0x577830) = 0x3F000000;
    MEM32(0x577834) = 0x3E000000;
    MEM32(0x577838) = 0x3F400000;
    MEM32(0x57783C) = 0x3E800000;
    MEM32(0x577840) = 0x3F400000;
    MEM32(0x577844) = 0x3E000000;
    MEM32(0x577848) = 0x3F400000;
    MEM32(0x57784C) = 0x3E800000;
    MEM32(0x577850) = 0x3F400000;
    MEM32(0x577854) = 0x3E000000;
    MEM32(0x577858) = 0x3F7E0000;
    MEM32(0x57785C) = 0x3E800000;
    MEM32(0x577860) = 0x3F7E0000;
    MEM32(0x577864) = 0x3E000000;
    MEM32(0x577868) = 0x3EDC0000;
    MEM32(0x57786C) = 0x3EDE0000;
    MEM32(0x577870) = 0x3EDC0000;
    MEM32(0x577874) = 0x3EDE0000;
    MEM32(0x577878) = 0x3EDC0000;
    MEM32(0x57787C) = 0x3EDE0000;
    MEM32(0x577880) = 0x3EDC0000;
    MEM32(0x577884) = 0x3EDE0000;
    MEM32(0x577888) = 0x3C000000;
    MEM32(0x57788C) = 0x3F7F0000;
    MEM32(0x577890) = 0x3C000000;
    MEM32(0x577894) = 0x3F410000;
    MEM32(0x577898) = 0x3EFC0000;
    MEM32(0x57789C) = 0x3F7F0000;
    MEM32(0x5778A0) = 0x3EFC0000;
    MEM32(0x5778A4) = 0x3F410000;
    MEM32(0x5778A8) = 0x3F000000;
    MEM32(0x5778AC) = 0x3F600000;
    MEM32(0x5778B0) = 0x3F000000;
    MEM32(0x5778B4) = 0x3F400000;
    MEM32(0x5778B8) = 0x3F400000;
    MEM32(0x5778BC) = 0x3F600000;
    MEM32(0x5778C0) = 0x3F400000;
    MEM32(0x5778C4) = 0x3F400000;
    MEM32(0x5778C8) = 0x3F420000;
    MEM32(0x5778CC) = 0x3F5F0000;
    MEM32(0x5778D0) = 0x3F420000;
    MEM32(0x5778D4) = 0x3F410000;
    MEM32(0x5778D8) = 0x3F7E0000;
    MEM32(0x5778DC) = 0x3F5F0000;
    MEM32(0x5778E0) = 0x3F7E0000;
    MEM32(0x5778E4) = 0x3F410000;
    MEM32(0x5778E8) = 0x3F000000;
    MEM32(0x5778EC) = 0x3F800000;
    MEM32(0x5778F0) = 0x3F000000;
    MEM32(0x5778F4) = 0x3F600000;
    MEM32(0x5778F8) = 0x3F400000;
    MEM32(0x5778FC) = 0x3F800000;
    MEM32(0x577900) = 0x3F400000;
    MEM32(0x577904) = 0x3F600000;
    MEM32(0x577908) = 0x3F000000;
    MEM32(0x57790C) = 0x3F600000;
    MEM32(0x577910) = 0x3F000000;
    MEM32(0x577914) = 0x3F400000;
    MEM32(0x577918) = 0x3F400000;
    MEM32(0x57791C) = 0x3F600000;
    MEM32(0x577920) = 0x3F400000;
    MEM32(0x577924) = 0x3F400000;
    MEM32(0x577928) = 0;
    MEM32(0x57792C) = 0;
    MEM32(0x577930) = 0;
    MEM32(0x577934) = 0x3F800000;
    MEM32(0x577938) = 0x3F800000;
    MEM32(0x57793C) = 0;
    MEM32(0x577940) = 0x3F800000;
    MEM32(0x577944) = 0x3F800000;
    MEM32(0x577948) = 0x3F000000;
    MEM32(0x57794C) = 0x3F600000;
    MEM32(0x577950) = 0x3F000000;
    MEM32(0x577954) = 0x3F400000;
    MEM32(0x577958) = 0x3F400000;
    MEM32(0x57795C) = 0x3F600000;
    MEM32(0x577960) = 0x3F400000;
    MEM32(0x577964) = 0x3F400000;
    MEM32(0x577968) = 0x3E840000;
    MEM32(0x57796C) = 0x3DF80000;
    MEM32(0x577970) = 0x3E840000;
    MEM32(0x577974) = 0x3B800000;
    MEM32(0x577978) = 0x3EFC0000;
    MEM32(0x57797C) = 0x3DF80000;
    MEM32(0x577980) = 0x3EFC0000;
    MEM32(0x577984) = 0x3B800000;
    MEM32(0x577988) = 0x3F000000;
    MEM32(0x57798C) = 0x3F400000;
    MEM32(0x577990) = 0x3F000000;
    MEM32(0x577994) = 0x3F000000;
    MEM32(0x577998) = 0x3F800000;
    MEM32(0x57799C) = 0x3F400000;
    MEM32(0x5779A0) = 0x3F800000;
    MEM32(0x5779A4) = 0x3F000000;
    MEM32(0x5779A8) = 0x3E800000;
    MEM32(0x5779AC) = 0x3EFE0000;
    MEM32(0x5779B0) = 0x3E800000;
    MEM32(0x5779B4) = 0x3EC20000;
    MEM32(0x5779B8) = 0x3EF80000;
    MEM32(0x5779BC) = 0x3EFE0000;
    MEM32(0x5779C0) = 0x3EF80000;
    MEM32(0x5779C4) = 0x3EC20000;
    MEM32(0x5779C8) = 0x3C000000;
    MEM32(0x5779CC) = 0x3EBE0000;
    MEM32(0x5779D0) = 0x3C000000;
    MEM32(0x5779D4) = 0x3E840000;
    MEM32(0x5779D8) = 0x3E700000;
    MEM32(0x5779DC) = 0x3EBE0000;
    MEM32(0x5779E0) = 0x3E700000;
    MEM32(0x5779E4) = 0x3E840000;
    MEM32(0x5779E8) = 0x3E840000;
    MEM32(0x5779EC) = 0x3EBE0000;
    MEM32(0x5779F0) = 0x3E840000;
    MEM32(0x5779F4) = 0x3E840000;
    MEM32(0x5779F8) = 0x3EFC0000;
    MEM32(0x5779FC) = 0x3EBE0000;
    MEM32(0x577A00) = 0x3EFC0000;
    MEM32(0x577A04) = 0x3E840000;
    MEM32(0x577A08) = 0x3E840000;
    MEM32(0x577A0C) = 0x3E7C0000;
    MEM32(0x577A10) = 0x3E840000;
    MEM32(0x577A14) = 0x3E080000;
    MEM32(0x577A18) = 0x3EFC0000;
    MEM32(0x577A1C) = 0x3E7C0000;
    MEM32(0x577A20) = 0x3EFC0000;
    MEM32(0x577A24) = 0x3E080000;
    MEM32(0x577A28) = 0x3C000000;
    MEM32(0x577A2C) = 0x3F000000;
    MEM32(0x577A30) = 0x3C000000;
    MEM32(0x577A34) = 0x3EE20000;
    MEM32(0x577A38) = 0x3DF00000;
    MEM32(0x577A3C) = 0x3F000000;
    MEM32(0x577A40) = 0x3DF00000;
    MEM32(0x577A44) = 0x3EE20000;
    MEM32(0x577A48) = 0x3C000000;
    MEM32(0x577A4C) = 0x3EE00000;
    MEM32(0x577A50) = 0x3C000000;
    MEM32(0x577A54) = 0x3EC00000;
    MEM32(0x577A58) = 0x3DF00000;
    MEM32(0x577A5C) = 0x3EE00000;
    MEM32(0x577A60) = 0x3DF00000;
    MEM32(0x577A64) = 0x3EC00000;
    MEM32(0x577A68) = 0x3E080000;
    MEM32(0x577A6C) = 0x3F000000;
    MEM32(0x577A70) = 0x3E080000;
    MEM32(0x577A74) = 0x3EE20000;
    MEM32(0x577A78) = 0x3E780000;
    MEM32(0x577A7C) = 0x3F000000;
    MEM32(0x577A80) = 0x3E780000;
    MEM32(0x577A84) = 0x3EE20000;
    MEM32(0x577A88) = 0x3E080000;
    MEM32(0x577A8C) = 0x3EE00000;
    MEM32(0x577A90) = 0x3E080000;
    MEM32(0x577A94) = 0x3EC00000;
    MEM32(0x577A98) = 0x3E780000;
    MEM32(0x577A9C) = 0x3EE00000;
    MEM32(0x577AA0) = 0x3E780000;
    MEM32(0x577AA4) = 0x3EC00000;
    MEM32(0x577AA8) = 0x3F220000;
    MEM32(0x577AAC) = 0x3EDE0000;
    MEM32(0x577AB0) = 0x3F220000;
    MEM32(0x577AB4) = 0x3EA20000;
    MEM32(0x577AB8) = 0x3F5E0000;
    MEM32(0x577ABC) = 0x3EDE0000;
    MEM32(0x577AC0) = 0x3F5E0000;
    MEM32(0x577AC4) = 0x3EA20000;
    MEM32(0x577AC8) = 0x3ED40000;
    MEM32(0x577ACC) = 0x3EE60000;
    MEM32(0x577AD0) = 0x3ED40000;
    MEM32(0x577AD4) = 0x3EE60000;
    MEM32(0x577AD8) = 0x3ED40000;
    MEM32(0x577ADC) = 0x3EE60000;
    MEM32(0x577AE0) = 0x3ED40000;
    MEM32(0x577AE4) = 0x3EE60000;
    MEM32(0x577AE8) = 0x3F600000;
    MEM32(0x577AEC) = 0x3F800000;
    MEM32(0x577AF0) = 0x3F600000;
    MEM32(0x577AF4) = 0x3F710000;
    MEM32(0x577AF8) = 0x3F800000;
    MEM32(0x577AFC) = 0x3F800000;
    MEM32(0x577B00) = 0x3F800000;
    MEM32(0x577B04) = 0x3F710000;
    MEM32(0x577B08) = 0x3F600000;
    MEM32(0x577B0C) = 0x3F800000;
    MEM32(0x577B10) = 0x3F600000;
    MEM32(0x577B14) = 0x3F710000;
    MEM32(0x577B18) = 0x3F620000;
    MEM32(0x577B1C) = 0x3F800000;
    MEM32(0x577B20) = 0x3F620000;
    MEM32(0x577B24) = 0x3F710000;
    MEM32(0x577B28) = 0x3F600000;
    MEM32(0x577B2C) = 0x3F720000;
    MEM32(0x577B30) = 0x3F600000;
    MEM32(0x577B34) = 0x3F710000;
    MEM32(0x577B38) = 0x3F800000;
    MEM32(0x577B3C) = 0x3F720000;
    MEM32(0x577B40) = 0x3F800000;
    MEM32(0x577B44) = 0x3F710000;
    MEM32(0x577B48) = 0x3F600000;
    MEM32(0x577B4C) = 0x3F710000;
    MEM32(0x577B50) = 0x3F600000;
    MEM32(0x577B54) = 0x3F710000;
    MEM32(0x577B58) = 0x3F600000;
    MEM32(0x577B5C) = 0x3F710000;
    MEM32(0x577B60) = 0x3F600000;
    MEM32(0x577B64) = 0x3F710000;

loc_001889D9: ;
    eax = MEM32(esp + 4);
    eax = ZX16(MEM16(eax + 0x12));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001889F2; /* jge: greater or equal (signed >=) */

loc_001889E5: ;
    eax = 0; /* xor self */
    eax = eax << 5;
    eax = eax + 0x577688;
    esp += 8; return; /* ret 4 */

loc_001889F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001889FC; /* jle: less or equal (signed <=) */

loc_001889F7: ;
    eax = 0x26;

loc_001889FC: ;
    eax = eax << 5;
    eax = eax + 0x577688;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188A10
 * Original: 0x00188A10 - 0x00188CDD (717 bytes, 234 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188A10(void)
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

loc_00188A10: ;
    eax = MEM32(esp + 0x18);
    esp = esp - 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00188CD6; /* jl: less (signed <) */

loc_00188A23: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebp));
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x4096CBE4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00188A5Fu); RECOMP_ABI_CALL(0x0018A2C0u, sub_0018A2C0); /* call 0x0018A2C0 */

loc_00188A5F: ;
    edx = MEM32(esi + 4);
    edi = MEM32(esp + 0x44);
    fp_push(MEMF(edi)); /* fld float */
    eax = MEM32(esi + 8);
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp));
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x48);
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    MEM32(esp + 0x38) = eax;
    eax = esp + 0x10;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00188AA1u); RECOMP_ABI_CALL(0x0018A2C0u, sub_0018A2C0); /* call 0x0018A2C0 */

loc_00188AA1: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    edx = MEM32(esi);
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp));
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00188AE3u); RECOMP_ABI_CALL(0x0018A2C0u, sub_0018A2C0); /* call 0x0018A2C0 */

loc_00188AE3: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    edx = MEM32(esi + 4);
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    ecx = MEM32(esp + 0x48);
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebp));
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00188B2Du); RECOMP_ABI_CALL(0x0018A2C0u, sub_0018A2C0); /* call 0x0018A2C0 */

loc_00188B2D: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    ecx = MEM32(esp + 0x4C);
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x54); /* fsub dword ptr [esp + 0x54] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x54); /* fsub dword ptr [esp + 0x54] */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00188B67; /* jne: not equal / not zero */

loc_00188B5F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_00188B67: ;
    edx = MEM32(esp + 0x4C);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 4);
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    ecx = MEM32(esi + 8);
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    MEM32(esp + 0x20) = edx;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebp + 2));
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00188BAFu); RECOMP_ABI_CALL(0x0018A2C0u, sub_0018A2C0); /* call 0x0018A2C0 */

loc_00188BAF: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    eax = MEM32(esi + 4);
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    edx = MEM32(esp + 0x48);
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp + 2));
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x18;
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    PUSH32(esp, ecx);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00188BF5u); RECOMP_ABI_CALL(0x0018A2C0u, sub_0018A2C0); /* call 0x0018A2C0 */

loc_00188BF5: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    edx = MEM32(esi);
    fp_top() = -fp_top(); /* fchs */
    eax = MEM32(esi + 4);
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp + 4));
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x48);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = eax;
    eax = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00188C3Au); RECOMP_ABI_CALL(0x0018A2C0u, sub_0018A2C0); /* call 0x0018A2C0 */

loc_00188C3A: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    edx = MEM32(esi + 4);
    fp_push(MEMF(esp + 0x50)); /* fld float */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebp + 4));
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00188C7Eu); RECOMP_ABI_CALL(0x0018A2C0u, sub_0018A2C0); /* call 0x0018A2C0 */

loc_00188C7E: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x54); /* fsub dword ptr [esp + 0x54] */
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 0x48);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebp + 6));
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    MEM32(esp + 0x34) = ecx;
    fp_top() = fp_top() - MEMF(esp + 0x54); /* fsub dword ptr [esp + 0x54] */
    ecx = esp + 0x28;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00188CD3u); RECOMP_ABI_CALL(0x0018A2C0u, sub_0018A2C0); /* call 0x0018A2C0 */

loc_00188CD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00188CD6: ;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00188CE0
 * Original: 0x00188CE0 - 0x00188D37 (87 bytes, 23 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188CE0(void)
{

loc_00188CE0: ;
    esp = esp - 0xC;
    eax = MEM32(0x47A050);
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM16(esp + 0x18) = 0x23;
    MEM16(esp + 0x1A) = 0x24;
    MEM16(esp + 0x1C) = 0x25;
    MEM16(esp + 0x1E) = 0x26;
    PUSH32(esp, 0x00188D28u); RECOMP_ABI_CALL(0x00188A10u, sub_00188A10); /* call 0x00188A10 */

loc_00188D28: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x00188D31u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00188D31: ;
    esp = esp + 0xC;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00188D40
 * Original: 0x00188D40 - 0x00188D9D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188D40: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x508) = esi;
    MEM32(ecx + 0x50C) = esi;
    MEM32(ecx + 0x510) = esi;
    edx = 0; /* xor self */
    goto loc_00188D60;

    /* nop */

loc_00188D60: ;
    eax = MEM32(ecx + 0x508);
    edi = MEM32(ecx + 0x510);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    MEM32(ecx + 0x508) = eax;
    MEM32(ecx + 0x510) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00188D8C; /* jl: less (signed <) */

loc_00188D7F: ;
    MEM32(ecx + 0x508) = esi;
    eax = 0x3F;
    goto loc_00188D8D;

loc_00188D8C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00188D8D: ;
    MEM32(ecx + eax * 4 + 0x404) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00188D60; /* jl: less (signed <) */

loc_00188D9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00188DA0
 * Original: 0x00188DA0 - 0x00188E9B (251 bytes, 69 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188DA0(void)
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

loc_00188DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x57808C);
    eax = 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188E97; /* je: equal / zero */

loc_00188DB6: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188E97; /* je: equal / zero */

loc_00188DBF: ;
    PUSH32(esp, edi);
    ecx = 0x577B70;
    PUSH32(esp, 0x00188DCAu); RECOMP_ABI_CALL(0x0011C3A0u, sub_0011C3A0); /* call 0x0011C3A0 */

loc_00188DCA: ;
    edx = MEM32(esi + 0x48);
    ecx = esi + 4;
    edx = edx + ecx;
    MEM8(edx) = LO8(eax);
    MEM32(ecx + 0x44) = MEM32(ecx + 0x44) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x48);
    esi = ZX8(MEM8(eax + esi + 3));
    ecx = MEM32(esp + 0x10);
    esi = esi << 4;
    PUSH32(esp, ecx);
    esi = esi + 0x577B70;
    PUSH32(esp, 0x00188DF2u); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_00188DF2: ;
    edi = MEM32(esp + 0x10);
    MEM32(esi + 8) = eax;
    fp_push(MEMF(edi)); /* fld float */
    esp = esp + 4;
    PUSH32(esp, 0x00188E03u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00188E03: ;
    MEM16(esi) = LO16(eax);
    fp_push(MEMF(edi + 4)); /* fld float */
    PUSH32(esp, 0x00188E0Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00188E0E: ;
    MEM16(esi + 2) = LO16(eax);
    fp_push(MEMF(edi + 8)); /* fld float */
    PUSH32(esp, 0x00188E1Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00188E1A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM16(esi + 4) = LO16(eax);
    PUSH32(esp, 0x00188E27u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00188E27: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    SET_LO8(edx, MEM8(esp + 0x18));
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8328)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8328] */
    MEM8(esi + 0xC) = LO8(eax);
    MEM8(esi + 0xE) = LO8(edx);
    POP32(esp, edi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00188E63; /* jne: not equal / not zero */

loc_00188E47: ;
    goto loc_00188E50;

    /* nop */

loc_00188E50: ;
    fp_top() = fp_top() - MEMF(0x3C8328); /* fsub dword ptr [0x3c8328] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8328)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8328] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00188E50; /* je: equal / zero */

loc_00188E63: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00188E83; /* jp: parity */

loc_00188E70: ;
    fp_top() = fp_top() + MEMF(0x3C8328); /* fadd dword ptr [0x3c8328] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00188E70; /* jnp: not parity */

loc_00188E83: ;
    fp_top() = fp_top() * MEMF(0x3E04A4); /* fmul dword ptr [0x3e04a4] */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    PUSH32(esp, 0x00188E94u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00188E94: ;
    MEM8(esi + 0xD) = LO8(eax);

loc_00188E97: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00188EA0
 * Original: 0x00188EA0 - 0x00188ECC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188EA0(void)
{

loc_00188EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x404;
    PUSH32(esp, 0x00188EAEu); RECOMP_ABI_CALL(0x00014800u, sub_00014800); /* call 0x00014800 */

loc_00188EAE: ;
    eax = 0; /* xor self */
    ecx = esi + 0x514;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    ecx = esi;
    MEM32(esi + 0x51C) = eax;
    PUSH32(esp, 0x00188EC8u); RECOMP_ABI_CALL(0x00188D40u, sub_00188D40); /* call 0x00188D40 */

loc_00188EC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00188ED0
 * Original: 0x00188ED0 - 0x00188EDC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188ED0(void)
{

loc_00188ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00188ED8u); RECOMP_ABI_CALL(0x00188EA0u, sub_00188EA0); /* call 0x00188EA0 */

loc_00188ED8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00188EE0
 * Original: 0x00188EE0 - 0x00188F15 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = 0x3D8BD0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00188F0B; /* jle: less or equal (signed <=) */

loc_00188EF3: ;
    eax = ZX8(MEM8(esi + edi + 4));
    PUSH32(esp, eax);
    ecx = 0x577B70;
    PUSH32(esp, 0x00188F03u); RECOMP_ABI_CALL(0x0011C860u, sub_0011C860); /* call 0x0011C860 */

loc_00188F03: ;
    eax = MEM32(esi + 0x48);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00188EF3; /* jl: less (signed <) */

loc_00188F0B: ;
    POP32(esp, edi);
    MEM32(esi + 0x48) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00188F20
 * Original: 0x00188F20 - 0x001892C8 (936 bytes, 249 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00188F20(void)
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

loc_00188F20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xF4;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ZX8(MEM8(ebx + 0x4C));
    ecx = eax;
    ecx = ecx >> 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = ecx;
    eax = eax & 0xF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, esi);
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    PUSH32(esp, edi);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_001892BF; /* je: equal / zero */

loc_00188F6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001892BF; /* je: equal / zero */

loc_00188F73: ;
    eax = MEM32(ebx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x28) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00189295; /* jle: less or equal (signed <=) */

loc_00188F86: ;
    edi = MEM32(ebp + 8);
    /* nop */

loc_00188F90: ;
    eax = MEM32(esp + 0x28);
    esi = ZX8(MEM8(ebx + eax + 4));
    esi = esi << 4;
    esi = esi + 0x577B70;
    ecx = ZX8(MEM8(esi + 0xC));
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188FB9u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00188FB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00188FC1; /* jae: above or equal (unsigned >=) */

loc_00188FBD: ;
    SET_LO8(eax, 1);
    goto loc_00188FCA;

loc_00188FC1: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00188FCA; /* jbe: below or equal (unsigned <=) */

loc_00188FC8: ;
    SET_LO8(eax, LO8(ecx));

loc_00188FCA: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    edx = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(esi);
    MEM32(esp + 0xC) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x44) = 0;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x50) = 0;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x5C) = 0;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x58) = (float)fp_top(); /* fst */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_001890D5; /* je: equal / zero */

loc_00189059: ;
    eax = esp + 0xC0;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018906Bu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0018906B: ;
    edx = ZX8(MEM8(esi + 0xD));
    MEM32(esp + 0x14) = edx;
    esp = esp + 8;
    ecx = esp + 0x9C;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp + 0xC8;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    MEM32(esp + 0xA4) = 0;
    MEM32(esp + 0xA8) = 0x3F800000;
    fp_top() = fp_top() * MEMF(0x3C8328); /* fmul dword ptr [0x3c8328] */
    MEM32(esp + 0xAC) = 0;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001890BFu); RECOMP_ABI_CALL(0x0023E690u, sub_0023E690); /* call 0x0023E690 */

loc_001890BF: ;
    PUSH32(esp, 4);
    eax = esp + 0x38;
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xCC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001890D5u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_001890D5: ;
    eax = ZX8(MEM8(esi + 0xE));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x30)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x30))); }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edx = MEM32(edi);
    MEM32(esp + 0x28) = eax;
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018910Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018910D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    edx = MEM32(edi);
    MEM32(esp + 0x74) = eax;
    eax = MEM32(esi + 8);
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x78;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018916Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018916A: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    ecx = MEM32(esp + 0x10);
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0xC);
    eax = MEM32(edi);
    MEM32(esp + 0x6C) = ecx;
    ecx = MEM32(esi + 8);
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEM32(esp + 0x74) = edx;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x8C;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    ecx = edi;
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001891BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001891BF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(esp + 0x24);
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    ecx = MEM32(esi + 8);
    eax = MEM32(edi);
    MEM32(esp + 0x68) = edx;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x68;
    PUSH32(esp, edx);
    ecx = esp + 0xBC;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018921Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018921C: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x80) = eax;
    eax = MEM32(esi + 8);
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    eax = esp + 0x98;
    MEMF(esp + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x84) = edx;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    edx = MEM32(edi);
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018927Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018927A: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00189281u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189281: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(ebx + 0x48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00188F90; /* jl: less (signed <) */

loc_00189295: ;
    eax = MEM32(ebx + 0x48);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001892B8; /* jle: less or equal (signed <=) */

loc_0018929E: ;
    edi = edi;

loc_001892A0: ;
    eax = ZX8(MEM8(ebx + esi + 4));
    PUSH32(esp, eax);
    ecx = 0x577B70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001892B0u); RECOMP_ABI_CALL(0x0011C860u, sub_0011C860); /* call 0x0011C860 */

loc_001892B0: ;
    eax = MEM32(ebx + 0x48);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001892A0; /* jl: less (signed <) */

loc_001892B8: ;
    MEM32(ebx + 0x48) = 0;

loc_001892BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001892D0
 * Original: 0x001892D0 - 0x001892DC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001892D0(void)
{

loc_001892D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001892D8u); RECOMP_ABI_CALL(0x00188ED0u, sub_00188ED0); /* call 0x00188ED0 */

loc_001892D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001892E0
 * Original: 0x001892E0 - 0x00189307 (39 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001892E0(void)
{

loc_001892E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x20) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00189310
 * Original: 0x00189310 - 0x00189331 (33 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189310(void)
{

loc_00189310: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x30) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00189340
 * Original: 0x00189340 - 0x00189408 (200 bytes, 71 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00189340(void)
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

loc_00189340: ;
    fp_push(MEMF(0x5BC9B0)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x5BC9B4);
    MEM32(edi + 4) = eax;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018936D; /* jp: parity */

loc_00189369: ;
    fp_push(MEMF(esi)); /* fld float */
    goto loc_001893A4;

loc_0018936D: ;
    PUSH32(esp, 0x00189372u); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_00189372: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018937Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018937F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001893A8; /* jne: not equal / not zero */

loc_0018938C: ;
    PUSH32(esp, 0x00189391u); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_00189391: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018939Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018939E: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */

loc_001893A4: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */

loc_001893A8: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001893C5; /* jp: parity */

loc_001893B8: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001893C5: ;
    PUSH32(esp, 0x001893CAu); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_001893CA: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001893D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001893D7: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189403; /* jne: not equal / not zero */

loc_001893E5: ;
    PUSH32(esp, 0x001893EAu); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_001893EA: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001893F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001893F7: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00189403: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00189410
 * Original: 0x00189410 - 0x00189492 (130 bytes, 41 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00189410(void)
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

loc_00189410: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    esp = esp - 8;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    fp_top() = MEMF(ecx + 0x28) - fp_top(); /* fsubr dword ptr [ecx + 0x28] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(ecx + 0x28); /* fadd dword ptr [ecx + 0x28] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(ecx + 0x2C); /* fadd dword ptr [ecx + 0x2c] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = MEMF(ecx + 0x2C) - fp_top(); /* fsubr dword ptr [ecx + 0x2c] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(ecx + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018948B; /* je: equal / zero */

loc_0018945A: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00189465u); RECOMP_ABI_CALL(0x00189340u, sub_00189340); /* call 0x00189340 */

loc_00189465: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 4); /* fadd dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0xC); /* fadd dword ptr [esi + 0xc] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0018948B: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001894A0
 * Original: 0x001894A0 - 0x001894BF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001894A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001894A0: ;
    eax = MEM32(0x578090);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001894BE; /* je: equal / zero */

loc_001894A9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001894B1u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_001894B1: ;
    esp = esp + 8;
    MEM32(0x578090) = 0;

loc_001894BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001894C0
 * Original: 0x001894C0 - 0x00189603 (323 bytes, 106 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001894C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001894C0: ;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x2C);
    fp_push(MEMF(edi + 0x28)); /* fld float */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(eax + 0xC);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEM32(esp + 0x18) = ecx;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = 0; /* xor self */
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    MEM32(esi + 8) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, 0x46D0A0);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 8);
    fp_push(MEMF(eax)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEM32(esi + 0x14) = ecx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0xC);
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEM32(esi + 0x20) = ecx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    fp_st1() = fp_top() - fp_st1(); fp_pop(); /* fsubrp st(1) */
    MEM32(esp + 0x1C) = eax;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esi + 0x2C) = ecx;
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    ecx = esp + 0x24;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, ecx);
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00189563u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00189563: ;
    eax = MEM32(edi + 0x38);
    esp = esp + 8;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x00189590u); RECOMP_ABI_CALL(0x0023E690u, sub_0023E690); /* call 0x0023E690 */

loc_00189590: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0018959Du); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_0018959D: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x28); /* fadd dword ptr [edi + 0x28] */
    eax = MEM32(esp + 0x70);
    fp_top() = fp_top() / MEMF(eax); /* fdiv dword ptr [eax] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x2C); /* fadd dword ptr [edi + 0x2c] */
    fp_top() = fp_top() / MEMF(eax + 4); /* fdiv dword ptr [eax + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x28); /* fadd dword ptr [edi + 0x28] */
    fp_top() = fp_top() / MEMF(eax); /* fdiv dword ptr [eax] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x10); /* fadd dword ptr [esi + 0x10] */
    fp_top() = fp_top() / MEMF(eax + 4); /* fdiv dword ptr [eax + 4] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x28); /* fadd dword ptr [edi + 0x28] */
    fp_top() = fp_top() / MEMF(eax); /* fdiv dword ptr [eax] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x2C); /* fadd dword ptr [edi + 0x2c] */
    fp_top() = fp_top() / MEMF(eax + 4); /* fdiv dword ptr [eax + 4] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x28); /* fadd dword ptr [edi + 0x28] */
    fp_top() = fp_top() / MEMF(eax); /* fdiv dword ptr [eax] */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    POP32(esp, edi);
    fp_top() = fp_top() / MEMF(eax + 4); /* fdiv dword ptr [eax + 4] */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x58;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00189610
 * Original: 0x00189610 - 0x00189B3E (1326 bytes, 386 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00189610(void)
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

loc_00189610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xB4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189626u); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_00189626: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018962Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018962C: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x34) = ecx;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    MEM32(esp + 0x38) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00189B35; /* jnp: not parity */

loc_0018964E: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00189B35; /* jnp: not parity */

loc_00189663: ;
    eax = MEM32(0x578090);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018968C; /* jne: not equal / not zero */

loc_0018966C: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x6618);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018967Au); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0018967A: ;
    PUSH32(esp, 0x1894A0);
    MEM32(0x578090) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189689u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_00189689: ;
    esp = esp + 0x10;

loc_0018968C: ;
    esi = MEM32(0x578090);
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001896A1u); RECOMP_ABI_CALL(0x00189410u, sub_00189410); /* call 0x00189410 */

loc_001896A1: ;
    PUSH32(esp, 0x2E6B0);
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001896B7u); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_001896B7: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001896D5u); RECOMP_ABI_CALL(0x001894C0u, sub_001894C0); /* call 0x001894C0 */

loc_001896D5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001896DAu); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_001896DA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001896E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001896E1: ;
    fp_top() = fp_top() * MEMF(ebx + 0x30); /* fmul dword ptr [ebx + 0x30] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8364)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8364] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001896F9; /* jne: not equal / not zero */

loc_001896F1: ;
    fp_push(MEMF(0x3C8364)); /* fld float */
    goto loc_00189708;

loc_001896F9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001896FEu); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_001896FE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00189705u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189705: ;
    fp_top() = fp_top() * MEMF(ebx + 0x30); /* fmul dword ptr [ebx + 0x30] */

loc_00189708: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018970Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018970D: ;
    edi = eax;
    MEM32(esp + 0x20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189718u); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_00189718: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018971Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018971F: ;
    fp_top() = fp_top() * MEMF(ebx + 0x34); /* fmul dword ptr [ebx + 0x34] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8364)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8364] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189737; /* jne: not equal / not zero */

loc_0018972F: ;
    fp_push(MEMF(0x3C8364)); /* fld float */
    goto loc_00189746;

loc_00189737: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018973Cu); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_0018973C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00189743u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189743: ;
    fp_top() = fp_top() * MEMF(ebx + 0x34); /* fmul dword ptr [ebx + 0x34] */

loc_00189746: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018974Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018974B: ;
    MEM32(esp + 0xC) = eax;
    eax = ebx + 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189758u); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_00189758: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x10);
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ebx + 0x20); /* fmul dword ptr [ebx + 0x20] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ebx + 0x24); /* fmul dword ptr [ebx + 0x24] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018990A; /* jle: less or equal (signed <=) */

loc_00189791: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018990A; /* jle: less or equal (signed <=) */

loc_00189799: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = 0;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_S(_fas, _fbs)) goto loc_0018990E; /* jl: less (signed <) */

loc_001897B1: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edx = MEM32(esp + 0x84);
    ecx = MEM32(esp + 0x80);
    eax = MEM32(esp + 0x74);
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    MEM32(esp + 0x64) = ecx;
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    ecx = MEM32(esp + 0x78);
    MEM32(esp + 0x68) = edx;
    edx = esp + 0x64;
    MEM32(esp + 0x6C) = eax;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    MEM32(esp + 0x74) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001897FFu); RECOMP_ABI_CALL(0x0023FB20u, sub_0023FB20); /* call 0x0023FB20 */

loc_001897FF: ;
    eax = MEM32(esp + 0x9C);
    edx = MEM32(esp + 0x98);
    ecx = MEM32(esp + 0x8C);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esp + 0x90);
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x44) = ecx;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189843u); RECOMP_ABI_CALL(0x0023FB20u, sub_0023FB20); /* call 0x0023FB20 */

loc_00189843: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (TEST_S(_fas, _fbs)) goto loc_001898F3; /* jl: less (signed <) */

loc_00189853: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = edi + 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi + eax * 8 + 0x330C;
    edx = eax + eax * 2;
    eax = esi + edx * 4 + 8;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = eax;
    goto loc_00189883;

loc_0018987F: ;
    eax = MEM32(esp + 0x18);

loc_00189883: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    edx = esp + 0x54;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(ebx + 0x14); /* fadd dword ptr [ebx + 0x14] */
    fp_push(MEMF(ebx + 0x18)); /* fld float */
    fp_push(MEMF(ebx + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx + 0x24); /* fsub dword ptr [ebx + 0x24] */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    MEMF(esp + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xB0);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax) = ecx;
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x60;
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001898D0u); RECOMP_ABI_CALL(0x0023FB20u, sub_0023FB20); /* call 0x0023FB20 */

loc_001898D0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0xC;
    edx = edx + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0018987F; /* jle: less or equal (signed <=) */

loc_001898F3: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001897B1; /* jle: less or equal (signed <=) */

loc_00189908: ;
    goto loc_0018990E;

loc_0018990A: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_0018990E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189913u); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_00189913: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = edi + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi + 0x330C;
    PUSH32(esp, ecx);
    ecx = esi + 0x5514;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00189939u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189939: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00189B35; /* jle: less or equal (signed <=) */

loc_00189945: ;
    edx = ebx * 8;
    MEM32(esp + 0x34) = edx;
    eax = edi + 1;
    eax = eax << 2;
    MEM32(esp + 0x64) = eax;
    edx = esi + 0x3314;
    ecx = esi + 0x5518;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = ecx;
    eax = edi + edi * 2 + 3;
    ecx = esi + eax * 4;
    edx = edi + edi * 2;
    eax = esi + edx * 8 + 0xC;
    MEM32(esp + 0x2C) = eax;
    ebx = ebx + ebx * 2;
    MEM32(esp + 0x44) = ecx;
    ecx = esi + edi * 4 + 0x5518;
    ebx = ebx << 2;
    edx = esi + edi * 8 + 0x3314;
    eax = edi;
    eax = eax << 4;
    MEM32(esp + 0x28) = ecx;
    ecx = eax + esi + 0x3314;
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x24) = edx;
    edx = esi + edi * 8 + 0x5518;
    MEM32(esp + 0x18) = esi;
    esi = MEM32(ebp + 8);
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x20) = eax;
    edi = edi;

loc_001899D0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001899D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001899D9: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + -4);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    ecx = ecx + 0xFFFFFFF8u;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001899F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001899F5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00189AAB; /* jle: less or equal (signed <=) */

loc_001899FD: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x28);
    eax = eax + 0xC;
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x3C) = edi;

loc_00189A30: ;
    eax = MEM32(ebx);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00189A44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189A44: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x40);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00189A5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189A5C: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x40);
    eax = eax + 4;
    MEM32(esp + 0x1C) = eax;
    eax = 8;
    edx = edx + eax;
    ecx = ecx + eax;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x54);
    eax = 0xC;
    edx = edx + eax;
    ecx = ecx + eax;
    eax = MEM32(esp + 0x3C);
    ebx = ebx + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x3C) = eax;
    if ((_fa != 0)) goto loc_00189A30; /* jne: not equal / not zero */

loc_00189AA7: ;
    ebx = MEM32(esp + 0x6C);

loc_00189AAB: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x30);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00189AC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189AC3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00189ACAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189ACA: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x64);
    edx = MEM32(esp + 0x10);
    eax = eax + ebx;
    edx = edx + ecx;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x18);
    eax = eax + ecx;
    edx = edx + ebx;
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x14);
    eax = eax + ebx;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x34);
    edx = edx + eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + eax;
    edx = MEM32(esp + 0x24);
    edx = edx + eax;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x28);
    edx = edx + ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_001899D0; /* jne: not equal / not zero */

loc_00189B35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00189B40
 * Original: 0x00189B40 - 0x00189BD9 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189B40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00189B57; /* jl: less (signed <) */

loc_00189B4E: ;
    eax = 0xFA;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00189B57: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00189B6A; /* jne: not equal / not zero */

loc_00189B68: ;
    edx = ~edx;

loc_00189B6A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189B94; /* jne: not equal / not zero */

loc_00189B75: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00189BCF; /* jge: greater or equal (signed >=) */

loc_00189B82: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00189B90; /* jne: not equal / not zero */

loc_00189B8E: ;
    edx = ~edx;

loc_00189B90: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00189B75; /* je: equal / zero */

loc_00189B94: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189BA2; /* jne: not equal / not zero */

loc_00189B9C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00189BA2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189BAC; /* jne: not equal / not zero */

loc_00189BA6: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_00189BAC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189BB7; /* jne: not equal / not zero */

loc_00189BB1: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_00189BB7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189BC8; /* jne: not equal / not zero */

loc_00189BBC: ;
    /* nop */

loc_00189BC0: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00189BC0; /* je: equal / zero */

loc_00189BC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00189BD4; /* jl: less (signed <) */

loc_00189BCF: ;
    eax = 0xFA;

loc_00189BD4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00189BE0
 * Original: 0x00189BE0 - 0x00189C0E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189BE0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189C0D; /* je: equal / zero */

loc_00189BEA: ;
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = LO16(ecx);
    MEM16(eax + 0xE) = LO16(ecx);
    MEM16(eax + 0x10) = LO16(ecx);
    MEM16(eax + 0x12) = LO16(ecx);
    MEM8(eax + 0x14) = 0xFF;
    MEM8(eax + 0x15) = LO8(ecx);

loc_00189C0D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189C10
 * Original: 0x00189C10 - 0x00189C7D (109 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189C10: ;
    SET_LO8(ecx, MEM8(0x5780B4));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189C75; /* jne: not equal / not zero */

loc_00189C1F: ;
    MEM32(0x5780B4) = MEM32(0x5780B4) | eax;
    MEM32(0x578094) = 0;
    MEM32(0x578098) = 0x3F800000;
    MEM32(0x57809C) = 0;
    MEM32(0x5780A0) = 0;
    MEM32(0x5780A4) = 0x3F800000;
    MEM32(0x5780A8) = 0x3F800000;
    MEM32(0x5780AC) = 0x3F800000;
    MEM32(0x5780B0) = 0;

loc_00189C75: ;
    eax = 0x578094;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189C80
 * Original: 0x00189C80 - 0x00189D10 (144 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189C80: ;
    eax = MEM32(ecx + 0x1770);
    PUSH32(esp, esi);
    esi = ecx + 0x1770;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189CAD; /* jne: not equal / not zero */

loc_00189C93: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00189CF5; /* jge: greater or equal (signed >=) */

loc_00189CA1: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00189C93; /* je: equal / zero */

loc_00189CAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189CBA; /* jne: not equal / not zero */

loc_00189CB4: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00189CBA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189CC4; /* jne: not equal / not zero */

loc_00189CBE: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00189CC4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189CCE; /* jne: not equal / not zero */

loc_00189CC8: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00189CCE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00189CD9; /* jne: not equal / not zero */

loc_00189CD2: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00189CD2; /* je: equal / zero */

loc_00189CD9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00189CF5; /* jge: greater or equal (signed >=) */

loc_00189CE1: ;
    eax = edx;

loc_00189CE3: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00189CEEu); RECOMP_ABI_CALL(0x00189B40u, sub_00189B40); /* call 0x00189B40 */

loc_00189CEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00189CE3; /* jl: less (signed <) */

loc_00189CF5: ;
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
 * sub_00189D10
 * Original: 0x00189D10 - 0x00189FEA (730 bytes, 213 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D10(void)
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

loc_00189D10: ;
    esp = esp - 0xBC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC8);
    eax = ZX16(MEM16(esi + 0xE));
    edx = ZX16(MEM16(esi + 0x10));
    MEM32(esp + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = edx;
    edx = MEM32(esi + 8);
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    eax = MEM32(ecx);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x80) = edx;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x88)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00189D90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189D90: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    ebx = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x4C) = eax;
    SET_LO8(eax, MEM8(esi + 0x15));
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = edx;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00189E7C; /* je: equal / zero */

loc_00189DF9: ;
    edx = ZX8(LO8(eax));
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00189E7C; /* jnp: not parity */

loc_00189E23: ;
    eax = esp + 0x88;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189E35u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00189E35: ;
    edx = MEM32(esp + 0x14);
    esp = esp + 8;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x90;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00189E66u); RECOMP_ABI_CALL(0x0023E690u, sub_0023E690); /* call 0x0023E690 */

loc_00189E66: ;
    PUSH32(esp, 4);
    eax = esp + 0x30;
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x94;
    PUSH32(esp, 0x00189E7Cu); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_00189E7C: ;
    edx = ZX8(MEM8(esi + 0x14));
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00189EEE; /* jnp: not parity */

loc_00189EA5: ;
    eax = MEM32(ebx);
    MEM32(esp + 0x5C) = eax;
    ecx = MEM32(ebx + 4);
    MEM32(esp + 0x60) = ecx;
    edx = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    edi = ebx + 8;
    ecx = ebx + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x6C) = edx;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esp + 0x7C;
    MEM32(esp + 0x78) = eax;
    PUSH32(esp, 0x00189ED7u); RECOMP_ABI_CALL(0x0023FB20u, sub_0023FB20); /* call 0x0023FB20 */

loc_00189ED7: ;
    ebx = ebx + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esp + 0x84;
    PUSH32(esp, 0x00189EE9u); RECOMP_ABI_CALL(0x0023FB20u, sub_0023FB20); /* call 0x0023FB20 */

loc_00189EE9: ;
    ebx = esp + 0x60;
    POP32(esp, ebp);

loc_00189EEE: ;
    edi = MEM32(esp + 0xD0);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00189EFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189EFE: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    ecx = MEM32(esi);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    edx = esp + 0x18;
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00189F32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189F32: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    ecx = MEM32(esi);
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = ebx + 8;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00189F69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189F69: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    eax = MEM32(esi);
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx + 0x10;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x50)); /* fld float */
    eax = esp + 0x18;
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00189FA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189FA0: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    eax = MEM32(esi);
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ebx = ebx + 0x18;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00189FD7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189FD7: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00189FDEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00189FDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xBC;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00189FF0
 * Original: 0x00189FF0 - 0x0018A052 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189FF0: ;
    edx = ecx;
    eax = MEM32(edx + 0x1B80);
    eax = MEM32(edx + eax * 4 + 0x1790);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1B88;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x1B80);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFA (32-bit) */
    MEM32(edx + 0x1B80) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0018A03C; /* jl: less (signed <) */

loc_0018A032: ;
    MEM32(edx + 0x1B80) = 0;

loc_0018A03C: ;
    MEM32(edx + 0x1B84) = MEM32(edx + 0x1B84) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1B84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1BA8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1BA8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A060
 * Original: 0x0018A060 - 0x0018A0DC (124 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A060: ;
    SET_LO8(edx, MEM8(0x5780D0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018A0C1; /* jne: not equal / not zero */

loc_0018A06F: ;
    edx = MEM32(0x5780D0);
    edx = edx | eax;
    eax = 0; /* xor self */
    MEM32(0x5780D0) = edx;
    MEM32(0x5780B8) = 0xFFFFFFFFu;
    MEM32(0x5780BC) = 0;
    MEM32(0x5780C0) = 0;
    MEM16(0x5780C4) = LO16(eax);
    MEM16(0x5780C6) = LO16(eax);
    MEM16(0x5780C8) = LO16(eax);
    MEM16(0x5780CA) = LO16(eax);
    MEM8(0x5780CC) = 0xFF;
    MEM8(0x5780CD) = LO8(eax);

loc_0018A0C1: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A0D6; /* je: equal / zero */

loc_0018A0C8: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 2;
    eax = eax * 8 + 0x5780D8;
    esp += 4; return; /* ret */

loc_0018A0D6: ;
    eax = 0x5780B8;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A0E0
 * Original: 0x0018A0E0 - 0x0018A0FD (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A0E0(void)
{

loc_0018A0E0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A0F4u); RECOMP_ABI_CALL(0x0018A060u, sub_0018A060); /* call 0x0018A060 */

loc_0018A0F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A0FAu); RECOMP_ABI_CALL(0x00189D10u, sub_00189D10); /* call 0x00189D10 */

loc_0018A0FA: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0018A100
 * Original: 0x0018A100 - 0x0018A13D (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A100(void)
{

loc_0018A100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0018A109u); RECOMP_ABI_CALL(0x00189FF0u, sub_00189FF0); /* call 0x00189FF0 */

loc_0018A109: ;
    esi = eax;
    eax = esi + esi * 2;
    ecx = edi + eax * 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018A117u); RECOMP_ABI_CALL(0x00189BE0u, sub_00189BE0); /* call 0x00189BE0 */

loc_0018A117: ;
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edi + edx * 4 + 0x1770;
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
 * sub_0018A140
 * Original: 0x0018A140 - 0x0018A1A2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A140: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1B7C) = esi;
    MEM32(ecx + 0x1B80) = esi;
    MEM32(ecx + 0x1B84) = esi;
    edx = 0; /* xor self */
    goto loc_0018A160;

    /* nop */

loc_0018A160: ;
    eax = MEM32(ecx + 0x1B7C);
    edi = MEM32(ecx + 0x1B84);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    MEM32(ecx + 0x1B7C) = eax;
    MEM32(ecx + 0x1B84) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0018A18E; /* jl: less (signed <) */

loc_0018A181: ;
    MEM32(ecx + 0x1B7C) = esi;
    eax = 0xF9;
    goto loc_0018A18F;

loc_0018A18E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0018A18F: ;
    MEM32(ecx + eax * 4 + 0x1790) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018A160; /* jl: less (signed <) */

loc_0018A19F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A1B0
 * Original: 0x0018A1B0 - 0x0018A20F (95 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3E04B8;
    MEM8(esi + 4) = 0xFF;
    _fa = (uint32_t)(MEM32(0x579C80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x579C80), 0xFA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A20B; /* je: equal / zero */

loc_0018A1C9: ;
    PUSH32(esp, ebx);
    ecx = 0x5780D8;
    PUSH32(esp, 0x0018A1D4u); RECOMP_ABI_CALL(0x00189FF0u, sub_00189FF0); /* call 0x00189FF0 */

loc_0018A1D4: ;
    ebx = eax;
    eax = ebx + ebx * 2;
    ecx = eax * 8 + 0x5780D8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018A1E6u); RECOMP_ABI_CALL(0x00189BE0u, sub_00189BE0); /* call 0x00189BE0 */

loc_0018A1E6: ;
    edx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx * 4 + 0x579848;
    ecx = ebx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    MEM8(esi + 4) = LO8(ebx);
    POP32(esp, ebx);

loc_0018A20B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A210
 * Original: 0x0018A210 - 0x0018A239 (41 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A210(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0018A210: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018A217u); RECOMP_ABI_CALL(0x0018A060u, sub_0018A060); /* call 0x0018A060 */

loc_0018A217: ;
    edi = MEM32(esp + 0xC);
    esi = eax;
    eax = MEM32(edi);
    MEM32(esi + 4) = eax;
    fp_push(MEMF(edi + 4)); /* fld float */
    PUSH32(esp, 0x0018A22Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018A22A: ;
    MEM16(esi + 0xC) = LO16(eax);
    ecx = MEM32(edi + 8);
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A240
 * Original: 0x0018A240 - 0x0018A269 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A240(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0018A240: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018A247u); RECOMP_ABI_CALL(0x0018A060u, sub_0018A060); /* call 0x0018A060 */

loc_0018A247: ;
    edi = MEM32(esp + 0xC);
    fp_push(MEMF(edi)); /* fld float */
    esi = eax;
    PUSH32(esp, 0x0018A254u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018A254: ;
    MEM16(esi + 0xE) = LO16(eax);
    fp_push(MEMF(edi + 4)); /* fld float */
    PUSH32(esp, 0x0018A260u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018A260: ;
    POP32(esp, edi);
    MEM16(esi + 0x10) = LO16(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A270
 * Original: 0x0018A270 - 0x0018A291 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A270(void)
{

loc_0018A270: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0018A27Eu); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_0018A27E: ;
    esp = esp + 4;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0018A28Au); RECOMP_ABI_CALL(0x0018A060u, sub_0018A060); /* call 0x0018A060 */

loc_0018A28A: ;
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A2A0
 * Original: 0x0018A2A0 - 0x0018A2BC (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A2A0(void)
{

loc_0018A2A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018A2A6u); RECOMP_ABI_CALL(0x0018A060u, sub_0018A060); /* call 0x0018A060 */

loc_0018A2A6: ;
    eax = MEM32(eax);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018A2B3u); RECOMP_ABI_CALL(0x000758D0u, sub_000758D0); /* call 0x000758D0 */

loc_0018A2B3: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A2C0
 * Original: 0x0018A2C0 - 0x0018A387 (199 bytes, 57 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A2C0(void)
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

loc_0018A2C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x579C80);
    eax = 0xFA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A2DA; /* je: equal / zero */

loc_0018A2D2: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x100), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A2E0; /* jne: not equal / not zero */

loc_0018A2DA: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_0018A2E0: ;
    PUSH32(esp, edi);
    ecx = 0x5780D8;
    PUSH32(esp, 0x0018A2EBu); RECOMP_ABI_CALL(0x0018A100u, sub_0018A100); /* call 0x0018A100 */

loc_0018A2EB: ;
    edx = MEM32(esi + 0x100);
    ecx = esi + 4;
    edx = edx + ecx;
    MEM8(edx) = LO8(eax);
    MEM32(ecx + 0xFC) = MEM32(ecx + 0xFC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x100);
    eax = ZX8(MEM8(eax + esi + 3));
    ecx = MEM32(esp + 0x14);
    esi = eax + eax * 2;
    PUSH32(esp, ecx);
    esi = esi * 8 + 0x5780D8;
    PUSH32(esp, 0x0018A31Du); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_0018A31D: ;
    edi = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    edx = MEM32(edi);
    MEM32(esi + 4) = edx;
    fp_push(MEMF(edi + 4)); /* fld float */
    PUSH32(esp, 0x0018A330u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018A330: ;
    MEM16(esi + 0xC) = LO16(eax);
    eax = MEM32(edi + 8);
    edi = MEM32(esp + 0x14);
    MEM32(esi + 8) = eax;
    fp_push(MEMF(edi)); /* fld float */
    PUSH32(esp, 0x0018A345u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018A345: ;
    MEM16(esi + 0xE) = LO16(eax);
    fp_push(MEMF(edi + 4)); /* fld float */
    PUSH32(esp, 0x0018A351u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018A351: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    MEM16(esi + 0x10) = LO16(eax);
    PUSH32(esp, 0x0018A35Fu); RECOMP_ABI_CALL(0x0006C1E0u, sub_0006C1E0); /* call 0x0006C1E0 */

loc_0018A35F: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    esp = esp + 8;
    MEM8(esi + 0x15) = LO8(eax);
    PUSH32(esp, 0x0018A374u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018A374: ;
    SET_LO16(edx, MEM16(esp + 0x20));
    MEM8(esi + 0x14) = LO8(eax);
    POP32(esp, edi);
    MEM16(esi + 0x12) = LO16(edx);
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A390
 * Original: 0x0018A390 - 0x0018A412 (130 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A390: ;
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
    edi = MEM32(ecx + eax + 0x1770);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0x1770) = edi;
    MEM32(ecx + eax + 0x1B88) = MEM32(ecx + eax + 0x1B88) & edx;
    ecx = MEM32(eax + 0x1B7C);
    edx = MEM32(eax + 0x1B84);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFA (32-bit) */
    MEM32(eax + 0x1B7C) = ecx;
    MEM32(eax + 0x1B84) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0018A3F8; /* jl: less (signed <) */

loc_0018A3E7: ;
    MEM32(eax + 0x1B7C) = 0;
    ecx = 0xF9;
    goto loc_0018A3F9;

loc_0018A3F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0018A3F9: ;
    MEM32(eax + ecx * 4 + 0x1790) = esi;
    ecx = MEM32(eax + 0x1BA8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x1BA8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A420
 * Original: 0x0018A420 - 0x0018A484 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A420(void)
{

loc_0018A420: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x1770;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(esi + 0x1B7C) = eax;
    MEM32(esi + 0x1B80) = eax;
    MEM32(esi + 0x1B84) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0x1B88;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = edx;
    ecx = esi;
    MEM32(esi + 0x1BA8) = eax;
    PUSH32(esp, 0x0018A480u); RECOMP_ABI_CALL(0x0018A140u, sub_0018A140); /* call 0x0018A140 */

loc_0018A480: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A490
 * Original: 0x0018A490 - 0x0018A4AD (29 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A490: ;
    MEM32(ecx) = 0x3E04B8;
    SET_LO8(ecx, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A4AC; /* je: equal / zero */

loc_0018A49E: ;
    eax = ZX8(LO8(ecx));
    PUSH32(esp, eax);
    ecx = 0x5780D8;
    PUSH32(esp, 0x0018A4ACu); RECOMP_ABI_CALL(0x0018A390u, sub_0018A390); /* call 0x0018A390 */

loc_0018A4AC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A4B0
 * Original: 0x0018A4B0 - 0x0018A4E8 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A4B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x100);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018A4DB; /* jle: less or equal (signed <=) */

loc_0018A4C0: ;
    eax = ZX8(MEM8(esi + edi + 4));
    PUSH32(esp, eax);
    ecx = 0x5780D8;
    PUSH32(esp, 0x0018A4D0u); RECOMP_ABI_CALL(0x0018A390u, sub_0018A390); /* call 0x0018A390 */

loc_0018A4D0: ;
    eax = MEM32(esi + 0x100);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018A4C0; /* jl: less (signed <) */

loc_0018A4DB: ;
    POP32(esp, edi);
    MEM32(esi + 0x100) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A4F0
 * Original: 0x0018A4F0 - 0x0018A585 (149 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A4F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A4F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x100);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018A53B; /* jle: less or equal (signed <=) */

loc_0018A500: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_0018A510: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + edi + 4));
    ecx = eax + eax * 2;
    edx = ecx * 8 + 0x5780D8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0018A52Eu); RECOMP_ABI_CALL(0x00189D10u, sub_00189D10); /* call 0x00189D10 */

loc_0018A52E: ;
    eax = MEM32(esi + 0x100);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018A510; /* jl: less (signed <) */

loc_0018A539: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0018A53B: ;
    eax = MEM32(esi + 0x100);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018A57A; /* jle: less or equal (signed <=) */

loc_0018A547: ;
    goto loc_0018A550;

    /* nop */

loc_0018A550: ;
    eax = ZX8(MEM8(esi + edi + 4));
    PUSH32(esp, eax);
    ecx = 0x5780D8;
    PUSH32(esp, 0x0018A560u); RECOMP_ABI_CALL(0x0018A390u, sub_0018A390); /* call 0x0018A390 */

loc_0018A560: ;
    eax = MEM32(esi + 0x100);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018A550; /* jl: less (signed <) */

loc_0018A56B: ;
    POP32(esp, edi);
    MEM32(esi + 0x100) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0018A57A: ;
    MEM32(esi + 0x100) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0018A590
 * Original: 0x0018A590 - 0x0018A595 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A590: ;
    g_seh_ebp = ebp; sub_00189C80(); return; /* tail jmp 0x00189C80 */

}

/**
 * sub_0018A5A0
 * Original: 0x0018A5A0 - 0x0018A5D4 (52 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A5A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM32(esi) = 0x3E04B8;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A5BE; /* je: equal / zero */

loc_0018A5B0: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = 0x5780D8;
    PUSH32(esp, 0x0018A5BEu); RECOMP_ABI_CALL(0x0018A390u, sub_0018A390); /* call 0x0018A390 */

loc_0018A5BE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018A5CE; /* je: equal / zero */

loc_0018A5C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018A5CBu); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0018A5CB: ;
    esp = esp + 4;

loc_0018A5CE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A5E0
 * Original: 0x0018A5E0 - 0x0018A5EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A5E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A5E0: ;
    MEM32(ecx) = 0x3DD750;
    g_seh_ebp = ebp; sub_0018A4B0(); return; /* tail jmp 0x0018A4B0 */

}

/**
 * sub_0018A5F0
 * Original: 0x0018A5F0 - 0x0018A5FC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A5F0(void)
{

loc_0018A5F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018A5F8u); RECOMP_ABI_CALL(0x0018A420u, sub_0018A420); /* call 0x0018A420 */

loc_0018A5F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A600
 * Original: 0x0018A600 - 0x0018A60A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A600(void)
{

loc_0018A600: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A610
 * Original: 0x0018A610 - 0x0018A666 (86 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0018A63B; /* je: equal / zero */

loc_0018A61C: ;
    eax = esi;
    edx = eax + 1;

loc_0018A621: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018A621; /* jne: not equal / not zero */

loc_0018A628: ;
    eax = eax - edx;
    edx = MEM32(ebx + 0x2004);
    eax = edx + eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2004) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2004 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018A642; /* jbe: below or equal (unsigned <=) */

loc_0018A63B: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A642: ;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx - edx;
    edi = edx + ebx;
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
    POP32(esp, edi);
    MEM32(ebx + 0x2004) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A670
 * Original: 0x0018A670 - 0x0018A71C (172 bytes, 58 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0018A670(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0018A670: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    PUSH32(esp, 0x0018A67Eu); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018A67E: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0018A68Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A68D: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018A694u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A694: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018A6A4u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018A6A4: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0018A6B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A6B3: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018A6BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A6BA: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEMF(esi + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 4); /* fdiv dword ptr [esi + 4] */
    MEMF(esi + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / g_fp_stack[(g_fp_top + 2) & 7]; /* fdiv st(2) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018A6FDu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0018A6FD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0018A704u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A704: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018A70Cu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0018A70C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0018A713u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A713: ;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A720
 * Original: 0x0018A720 - 0x0018A75B (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A720: ;
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    edx = eax + 8;
    edi = 0x100;
    esi = 0; /* xor self */
    edi = edi;

loc_0018A730: ;
    MEM16(edx + -8) = LO16(esi);
    MEM16(edx + -6) = LO16(esi);
    MEM32(edx) = 0x3F800000;
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xC) = esi;
    MEM16(edx + 0x10) = LO16(esi);
    MEM32(edx + 0x14) = 0xFFFFFFFFu;
    edx = edx + 0x20;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018A730; /* jne: not equal / not zero */

loc_0018A758: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A760
 * Original: 0x0018A760 - 0x0018A798 (56 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A760: ;
    SET_LO8(ecx, MEM8(0x57BC90));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018A792; /* jne: not equal / not zero */

loc_0018A76F: ;
    ecx = MEM32(0x57BC90);
    ecx = ecx | eax;
    PUSH32(esp, edi);
    MEM32(0x57BC90) = ecx;
    eax = 0; /* xor self */
    ecx = 0x801;
    edi = 0x579C88;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x57BC8C) = eax;
    POP32(esp, edi);

loc_0018A792: ;
    eax = 0x579C88;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A7A0
 * Original: 0x0018A7A0 - 0x0018A91E (382 bytes, 115 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A7A0(void)
{

loc_0018A7A0: ;
    xml1_graphics_menu_quad(MEMF(esp+4),MEMF(esp+8),MEMF(esp+12),MEMF(esp+16));
    esp = esp - 0x14;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x18);
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 8;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018A7E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A7E2: ;
    xml1_graphics_menu_writer(MEM32(esi),MEM32(MEM32(MEM32(esi))+8),(const unsigned *)((uintptr_t)g_xbox_mem_offset+MEM32(esi)));
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x24);
    eax = esp + 8;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018A81Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A81F: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = esp + 8;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018A85Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A85C: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x24);
    eax = esp + 8;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018A899u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A899: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x24);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 8;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018A8D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A8D6: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = esp + 8;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018A913u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018A913: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 6;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0018A920
 * Original: 0x0018A920 - 0x0018A982 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A920: ;
    edx = ecx;
    eax = MEM32(edx + 0x240C);
    eax = MEM32(edx + eax * 4 + 0x2004);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x2414;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x240C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    MEM32(edx + 0x240C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0018A96C; /* jl: less (signed <) */

loc_0018A962: ;
    MEM32(edx + 0x240C) = 0;

loc_0018A96C: ;
    MEM32(edx + 0x2410) = MEM32(edx + 0x2410) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x2410)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x2434);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x2434) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A990
 * Original: 0x0018A990 - 0x0018AA05 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A990: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x2414;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x2408);
    edi = MEM32(eax + 0x2410);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    MEM32(eax + 0x2408) = ecx;
    MEM32(eax + 0x2410) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0018A9EB; /* jl: less (signed <) */

loc_0018A9DA: ;
    MEM32(eax + 0x2408) = 0;
    ecx = 0xFF;
    goto loc_0018A9EC;

loc_0018A9EB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0018A9EC: ;
    MEM32(eax + ecx * 4 + 0x2004) = esi;
    ecx = MEM32(eax + 0x2434);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x2434) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018AA10
 * Original: 0x0018AA10 - 0x0018AA72 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AA10: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x2408) = esi;
    MEM32(ecx + 0x240C) = esi;
    MEM32(ecx + 0x2410) = esi;
    edx = 0; /* xor self */
    goto loc_0018AA30;

    /* nop */

loc_0018AA30: ;
    eax = MEM32(ecx + 0x2408);
    edi = MEM32(ecx + 0x2410);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    MEM32(ecx + 0x2408) = eax;
    MEM32(ecx + 0x2410) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0018AA5E; /* jl: less (signed <) */

loc_0018AA51: ;
    MEM32(ecx + 0x2408) = esi;
    eax = 0xFF;
    goto loc_0018AA5F;

loc_0018AA5E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0018AA5F: ;
    MEM32(ecx + eax * 4 + 0x2004) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018AA30; /* jl: less (signed <) */

loc_0018AA6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AA80
 * Original: 0x0018AA80 - 0x0018AAA4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA80(void)
{

loc_0018AA80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x3E04D0;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0018AA98u); RECOMP_ABI_CALL(0x0008E230u, sub_0008E230); /* call 0x0008E230 */

loc_0018AA98: ;
    PUSH32(esp, 0x0018AA9Du); RECOMP_ABI_CALL(0x0018A760u, sub_0018A760); /* call 0x0018A760 */

loc_0018AA9D: ;
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AAB0
 * Original: 0x0018AAB0 - 0x0018AAF3 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AAB0(void)
{

loc_0018AAB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018AAB8u); RECOMP_ABI_CALL(0x0018A720u, sub_0018A720); /* call 0x0018A720 */

loc_0018AAB8: ;
    ecx = esi + 0x2004;
    PUSH32(esp, 0x0018AAC3u); RECOMP_ABI_CALL(0x000A3490u, sub_000A3490); /* call 0x000A3490 */

loc_0018AAC3: ;
    eax = 0; /* xor self */
    ecx = esi + 0x2414;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    ecx = esi;
    MEM32(esi + 0x2434) = eax;
    PUSH32(esp, 0x0018AAEFu); RECOMP_ABI_CALL(0x0018AA10u, sub_0018AA10); /* call 0x0018AA10 */

loc_0018AAEF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AB00
 * Original: 0x0018AB00 - 0x0018ADD3 (723 bytes, 194 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB00(void)
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

loc_0018AB00: ;
    esp = esp - 0x414;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x440);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x418) = eax;
    esi = ecx;
    MEM8(esp + 0x18) = 0;
    if (TEST_S(_fas, _fbs)) goto loc_0018AB4D; /* jl: less (signed <) */

loc_0018AB26: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018AB33; /* jle: less or equal (signed <=) */

loc_0018AB2E: ;
    edi = 0x3FC;

loc_0018AB33: ;
    eax = MEM32(esp + 0x43C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018AB46u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018AB46: ;
    MEM8(esp + edi + 0x24) = 0;
    goto loc_0018AB6C;

loc_0018AB4D: ;
    edx = MEM32(esp + 0x43C);
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018AB64u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018AB64: ;
    MEM8(esp + 0x423) = 0;

loc_0018AB6C: ;
    eax = MEM32(esi + 4);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0018AB8E; /* jl: less (signed <) */

loc_0018AB76: ;
    _fa = (uint32_t)(MEM32(0x57F0CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x57F0CC), 0x100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AB8E; /* je: equal / zero */

loc_0018AB82: ;
    _fa = (uint32_t)(MEM32(esi + 0x210)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x210), 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018ABA7; /* jne: not equal / not zero */

loc_0018AB8E: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x410);
    PUSH32(esp, 0x0018AB9Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018AB9E: ;
    esp = esp + 0x414;
    esp += 40; return; /* ret 36 */

loc_0018ABA7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018ABAEu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0018ABAE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0018ABB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018ABB5: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018ABBEu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0018ABBE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0018ABC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018ABC5: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x10); /* fdiv dword ptr [esp + 0x10] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x14); /* fdiv dword ptr [esp + 0x14] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018ABEAu); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018ABEA: ;
    xml1_pc_prompt_begin_measure();
    ecx = MEM32(esi + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x43C);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0018AC02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018AC02: ;
    if(getenv("XML1_TRACE_PROMPTS") && xml1_pc_prompt_was_expanded()) {
        static unsigned callers[32],parents[32],count;
        unsigned caller=MEM32(esp+0x424),parent=caller==0x0018AF51u?MEM32(esp+0x450):0,i;
        for(i=0;i<count && (callers[i]!=caller || parents[i]!=parent);++i) {}
        if(i==count && count<32) {
            callers[count]=caller;parents[count++]=parent;
            fprintf(stderr,"[PC PROMPT LAYOUT] caller=%08X parent=%08X\n",caller,parent);
        }
    }
    if((MEM32(esp+0x424)==0x0017D583u || MEM32(esp+0x424)==0x00186B80u ||
        (MEM32(esp+0x424)==0x0018AF51u && MEM32(esp+0x450)==0x00065D1Au)) && xml1_pc_prompt_was_expanded()) {
        double pc_keyboard_width=fp_top(); fp_pop();
        uint32_t pc_saved_eax=eax,pc_saved_ecx=ecx,pc_saved_edx=edx;
        xml1_pc_prompt_native_measure(1);
        PUSH32(esp,0x0018AC02u); RECOMP_ABI_CALL(0x00153570u,sub_00153570);
        uint32_t pc_font_manager=eax,pc_width_target=MEM32(MEM32(eax)+0x2C);
        uint32_t pc_width_esp=esp,pc_text=esp+0x20,pc_scale=MEM32(esp+0x438);
        PUSH32(esp,MEM32(esi+4)); PUSH32(esp,pc_scale); PUSH32(esp,pc_text);
        ecx=pc_font_manager;
        PUSH32(esp,0x0018AC02u); RECOMP_ICALL_SAFE(pc_width_target,pc_width_esp);
        xml1_pc_prompt_native_measure(0);
        double pc_native_width=fp_top();
        if(MEM32(esp+0x424)==0x0018AF51u) {
            /* Conversation continuation draws its glyph and localized caption
             * separately. Preserve the original glyph's right edge so the key
             * name grows leftward without covering the caption. This applies
             * to every conversation, using live font metrics and binding text. */
            if(pc_native_width>0 && pc_keyboard_width>pc_native_width) {
                int pc_right=SMEM32(esp+0x428)+(int)((SMEM32(esp+0x430)+pc_native_width)*0.5);
                MEM32(esp+0x428)=pc_right-(int)(pc_keyboard_width+0.5);
                MEM32(esp+0x43C)&=~3u;
            }
            fp_top()=pc_keyboard_width;
        } else if(pc_native_width>0 && pc_keyboard_width>pc_native_width) {
            MEMF(esp+0x438)=(float)(MEMF(esp+0x438)*pc_native_width/pc_keyboard_width);
        } else fp_top()=pc_keyboard_width;
        eax=pc_saved_eax;ecx=pc_saved_ecx;edx=pc_saved_edx;
    }
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    PUSH32(esp, 0x0018AC0Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018AC0D: ;
    ebx = MEM32(esp + 0x43C);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0018AC3B; /* je: equal / zero */

loc_0018AC1B: ;
    eax = MEM32(esp + 0x430);
    ecx = MEM32(esp + 0x428);
    eax = eax - ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ecx = ecx + eax;
    MEM32(esp + 0x428) = ecx;
    goto loc_0018AC59;

loc_0018AC3B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018AC59; /* je: equal / zero */

loc_0018AC40: ;
    edx = MEM32(esp + 0x430);
    eax = MEM32(esp + 0x428);
    edx = edx - ebp;
    eax = eax + edx;
    MEM32(esp + 0x428) = eax;

loc_0018AC59: ;
    PUSH32(esp, 0x0018AC5Eu); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018AC5E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    ecx = MEM32(esi + 4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0018ACA6; /* je: equal / zero */

loc_0018AC6B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018AC6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018AC6E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(esp + 0x438); /* fmul dword ptr [esp + 0x438] */
    PUSH32(esp, 0x0018AC8Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018AC8B: ;
    edx = MEM32(esp + 0x434);
    ecx = MEM32(esp + 0x42C);
    edx = edx - eax;
    eax = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ecx = ecx + eax;
    goto loc_0018ACFC;

loc_0018ACA6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018ACD8; /* je: equal / zero */

loc_0018ACAB: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018ACAEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018ACAE: ;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(esp + 0x438); /* fmul dword ptr [esp + 0x438] */
    PUSH32(esp, 0x0018ACC6u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018ACC6: ;
    edx = MEM32(esp + 0x434);
    edx = edx - eax;
    MEM32(esp + 0x42C) = MEM32(esp + 0x42C) + edx;
    goto loc_0018AD03;

loc_0018ACD8: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018ACDBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018ACDB: ;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(esp + 0x438); /* fmul dword ptr [esp + 0x438] */
    PUSH32(esp, 0x0018ACF3u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018ACF3: ;
    ecx = MEM32(esp + 0x42C);
    ecx = ecx - eax;

loc_0018ACFC: ;
    MEM32(esp + 0x42C) = ecx;

loc_0018AD03: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + 0x2004);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edi = edi + ecx;
    PUSH32(esp, 0x0018AD18u); RECOMP_ABI_CALL(0x0018A610u, sub_0018A610); /* call 0x0018A610 */

loc_0018AD18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018ADBA; /* je: equal / zero */

loc_0018AD20: ;
    ecx = 0x57CC98;
    PUSH32(esp, 0x0018AD2Au); RECOMP_ABI_CALL(0x0018A920u, sub_0018A920); /* call 0x0018A920 */

loc_0018AD2A: ;
    fp_push((double)SMEM32(esp + 0x428)); /* fild */
    ecx = MEM32(esi + 0x210);
    eax = MEM32(eax * 4 + 0x57F0D0);
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    MEM32(esi + ecx * 4 + 0xC) = eax;
    MEM32(esi + 0x210) = MEM32(esi + 0x210) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x210)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(0x57F4D0);
    esi = esi & eax;
    esi = esi << 5;
    esi = esi + 0x57CC98;
    PUSH32(esp, 0x0018AD62u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018AD62: ;
    fp_push((double)SMEM32(esp + 0x42C)); /* fild */
    MEM16(esi) = LO16(eax);
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x0018AD75u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018AD75: ;
    edx = MEM32(esp + 0x438);
    MEM16(esi + 2) = LO16(eax);
    MEM16(esi + 4) = LO16(ebp);
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x0018AD8Fu); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0018AD8F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0018AD96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018AD96: ;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = edi;
    MEM32(esi + 0x14) = edi;
    ecx = eax + 1;

loc_0018ADA1: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018ADA1; /* jne: not equal / not zero */

loc_0018ADA8: ;
    xml1_graphics_menu_command(esi);
    eax = eax - ecx;
    MEM16(esi + 0x18) = LO16(eax);
    eax = MEM32(esp + 0x440);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(eax, 1);

loc_0018ADBA: ;
    ecx = MEM32(esp + 0x420);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x0018ADCAu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018ADCA: ;
    esp = esp + 0x414;
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018ADE0
 * Original: 0x0018ADE0 - 0x0018AE44 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ADE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018ADE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0018ADE9u); RECOMP_ABI_CALL(0x0018AAB0u, sub_0018AAB0); /* call 0x0018AAB0 */

loc_0018ADE9: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x2838) = eax;
    MEM32(esi + 0x283C) = eax;
    edx = 0xFF;
    edi = 0; /* xor self */

loc_0018AE00: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AE00; /* jne: not equal / not zero */

loc_0018AE0C: ;
    MEM32(esi + 0x2838) = ecx;
    MEM32(esi + 0x283C) = edi;
    edx = esi + 0x2438;
    edi = edi;

loc_0018AE20: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x283C);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018AE20; /* jl: less (signed <) */

loc_0018AE3F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AE50
 * Original: 0x0018AE50 - 0x0018AEE9 (153 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AE50: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x210);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018AEBD; /* jle: less or equal (signed <=) */

loc_0018AE60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0xC;

loc_0018AE65: ;
    ecx = MEM32(0x57F4D0);
    esi = MEM32(edi);
    esi = esi & ecx;
    PUSH32(esp, esi);
    ecx = 0x57CC98;
    PUSH32(esp, 0x0018AE7Au); RECOMP_ABI_CALL(0x0018A990u, sub_0018A990); /* call 0x0018A990 */

loc_0018AE7A: ;
    ecx = MEM32(0x57F4D4);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(esi * 4 + 0x57F0D0) = MEM32(esi * 4 + 0x57F0D0) + eax;
    if (((int32_t)MEM32(esi * 4 + 0x57F0D0) >= 0)) goto loc_0018AEAD; /* jns: not sign (positive) */

loc_0018AE90: ;
    MEM32(esi * 4 + 0x57F0D0) = esi;
    ecx = MEM32(0x57F4D4);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(esi * 4 + 0x57F0D0) = edx;

loc_0018AEAD: ;
    eax = MEM32(ebx + 0x210);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018AE65; /* jl: less (signed <) */

loc_0018AEBB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0018AEBD: ;
    edx = 0; /* xor self */
    MEM32(ebx + 0x210) = edx;
    ebx = MEM32(ebx + 8);
    PUSH32(esp, 0x0018AECDu); RECOMP_ABI_CALL(0x0018A760u, sub_0018A760); /* call 0x0018A760 */

loc_0018AECD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AEE2; /* jne: not equal / not zero */

loc_0018AED1: ;
    _fa = (uint32_t)(MEM32(0x57F0CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x57F0CC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AEE2; /* jne: not equal / not zero */

loc_0018AED9: ;
    POP32(esp, ebp);
    MEM32(ebx + 0x2004) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0018AEE2: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0018A760(); return; /* tail jmp 0x0018A760 */

}

/**
 * sub_0018AEF0
 * Original: 0x0018AEF0 - 0x0018AF53 (99 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AEF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0018AF04; /* jl: less (signed <) */

loc_0018AEFC: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018AF08; /* jne: not equal / not zero */

loc_0018AF04: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018AF08: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x57BC98);
    PUSH32(esp, 0x0018AF1Du); RECOMP_ABI_CALL(0x00123020u, sub_00123020); /* call 0x00123020 */

loc_0018AF1D: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    esp = esp + 0x10;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x57BC98);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0018AF51u); RECOMP_ABI_CALL(0x0018AB00u, sub_0018AB00); /* call 0x0018AB00 */

loc_0018AF51: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AF60
 * Original: 0x0018AF60 - 0x0018B44A (1258 bytes, 380 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AF60(void)
{
    /* XML1 LONG TALENT STRIP */
    float talent_strip_scale=1.0f, talent_glyph_scale=1.0f;
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

loc_0018AF60: ;
    esp = esp - 0x90;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x50) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0018B43F; /* jl: less (signed <) */

loc_0018AF7B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018AF81u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0018AF81: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0018AF88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018AF88: ;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018AF91u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018AF91: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0018AF9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018AF9C: ;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018AFADu); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018AFAD: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0018AFB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018AFB8: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0018AFBFu); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018AFBF: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018AFCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018AFCA: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0018AFD1u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018AFD1: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018AFDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018AFDC: ;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edx);
    ecx = esp + 0x7C;
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, 0x0018AFEDu); RECOMP_ABI_CALL(0x0018A670u, sub_0018A670); /* call 0x0018A670 */

loc_0018AFED: ;
    PUSH32(esp, 0x0018AFF2u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0018AFF2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0018AFF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018AFF9: ;
    esi = MEM32(esp + 0xA8);
    fp_top() = MEMF(esi + 0x30) / fp_top(); /* fdivr dword ptr [esi + 0x30] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018B00Cu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0018B00C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0018B013u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B013: ;
    fp_top() = MEMF(esi + 0x34) / fp_top(); /* fdivr dword ptr [esi + 0x34] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018B01Fu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0018B01F: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    esi = eax;
    PUSH32(esp, 0x0018B030u); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0018B030: ;
    eax = MEM32(esi);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 8;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0018B03Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B03E: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018B051u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0018B051: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    esi = eax;
    PUSH32(esp, 0x0018B062u); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0018B062: ;
    edx = MEM32(esi);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 8;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0018B070u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B070: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    ecx = MEM32(esp + 0xA0);
    eax = MEM32(ecx);
    esi = ecx;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x34) = edi;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018B09Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B09E: ;
    _fa = (uint32_t)(MEM32(ebx + 0x210)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x210), edi (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0018B430; /* jle: less or equal (signed <=) */

loc_0018B0AE: ;
    ecx = ebx + 0xC;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, ebp);
    goto loc_0018B0C0;

    /* nop */
    /* nop */

loc_0018B0C0: ;
    edx = MEM32(esp + 0x1C);
    ebp = MEM32(edx);
    ebp = ebp & MEM32(0x57F4D0);
    ebp = ebp << 5;
    ebp = ebp + 0x57CC98;
    if ((ebp == 0)) goto loc_0018B409; /* je: equal / zero */

loc_0018B0DB: ;
    xml1_graphics_menu_replay(ebp);
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 0x10); /* fsub dword ptr [ebp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E04D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e04d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018B409; /* je: equal / zero */

loc_0018B0F3: ;
    talent_strip_scale=xml1_talent_slot_scale((const unsigned char*)((uintptr_t)g_xbox_mem_offset+MEM32(ebp+0x14)),4096);
    edx = (uint32_t)(int32_t)SMEM16(ebp);
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 8);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x38) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 2);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = eax;
    fp_top() = fp_top() + MEMF(esp + 0x44); /* fadd dword ptr [esp + 0x44] */
    MEM32(esp + 0x24) = ecx;
    edx = 0; /* xor self */
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x40);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x2C) = ecx;
    eax = 0; /* xor self */
    fp_top() = fp_top() + MEMF(esp + 0x4C); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_0018B139: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0018B14D; /* jl: less (signed <) */

loc_0018B145: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018B402; /* je: equal / zero */

loc_0018B14D: ;
    esi = 0; /* xor self */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B16B; /* je: equal / zero */

loc_0018B155: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018B177; /* je: equal / zero */

loc_0018B15B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    SET_LO8(ebx, LO8(ecx));
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0018B187; /* jne: not equal / not zero */

loc_0018B16B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018B17D; /* jge: greater or equal (signed >=) */

loc_0018B16F: ;
    edx = MEM32(ebp + 0x14);
    SET_LO8(ebx, MEM8(eax + edx));
    goto loc_0018B187;

loc_0018B177: ;
    MEM32(esp + 0x28) = esi;
    goto loc_0018B16B;

loc_0018B17D: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B3F4; /* je: equal / zero */

loc_0018B187: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B1AF; /* jne: not equal / not zero */

loc_0018B18C: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = MEM32(esp + 0x40);
    fp_top() = fp_top() * MEMF(esp + 0x68); /* fmul dword ptr [esp + 0x68] */
    ebx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x2C) = ecx;
    fp_top() = MEMF(esp + 0x20) - fp_top(); /* fsubr dword ptr [esp + 0x20] */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0018B139;

loc_0018B1AF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x7E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x7E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B23C; /* jne: not equal / not zero */

loc_0018B1B8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0018B2A0; /* jge: greater or equal (signed >=) */

loc_0018B1C5: ;
    edx = MEM32(ebp + 0x14);
    SET_LO8(ecx, MEM8(edx + eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B2A0; /* je: equal / zero */

loc_0018B1D3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018B1E6; /* jl: less (signed <) */

loc_0018B1D8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018B1E6; /* jg: greater (signed >) */

loc_0018B1DD: ;
    esi = SX8(LO8(ecx));
    esi = esi - 0x30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0018B1E7;

loc_0018B1E6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0018B1E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0018B208; /* jge: greater or equal (signed >=) */

loc_0018B1EF: ;
    SET_LO8(ecx, MEM8(edx + eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018B208; /* jl: less (signed <) */

loc_0018B1F7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018B208; /* jg: greater (signed >) */

loc_0018B1FC: ;
    eax = SX8(LO8(ecx));
    edx = esi + esi * 4;
    esi = eax + edx * 2 + -48;
    goto loc_0018B20D;

loc_0018B208: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_0018B20D: ;
    PUSH32(esp, 0x0018B212u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018B212: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0018B21Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B21D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B223u); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_0018B223: ;
    ebx = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x18);
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0018B139;

loc_0018B23C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B295; /* jne: not equal / not zero */

loc_0018B241: ;
    MEM32(esp + 0x3C) = esi;
    PUSH32(esp, 0x0018B24Au); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018B24A: ;
    edx = MEM32(eax);
    ecx = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0018B264u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B264: ;
    if(MEM32(esp+0x3C)==2)goto loc_0018B28A;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0018B274; /* jne: not equal / not zero */

loc_0018B270: ;
    SET_LO8(ebx, LO8(eax));
    goto loc_0018B291;

loc_0018B274: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B29C; /* jne: not equal / not zero */

loc_0018B279: ;
    PUSH32(esp, 0x0018B27Eu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0018B27E: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018B28Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B28A: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;

loc_0018B291: ;
    eax = MEM32(esp + 0x14);

loc_0018B295: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x60) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x60 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B2A8; /* je: equal / zero */

loc_0018B29A: ;
    goto loc_0018B2A0;

loc_0018B29C: ;
    eax = MEM32(esp + 0x14);

loc_0018B2A0: ;
    edx = ZX8(LO8(ebx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF92u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFF92u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B2AA; /* jne: not equal / not zero */

loc_0018B2A8: ;
    SET_LO8(ebx, 0x27);

loc_0018B2AA: ;
    edx = MEM32(esp + 0x54);
    esi = ZX8(LO8(ebx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    fp_push((double)SMEM32(esi + edx + 8)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM16(esi + edx + 2);
    esi = esi + edx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x20 (8-bit) */
    edx = (uint32_t)(int32_t)SMEM16(esi);
    MEM32(esp + 0x10) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = ecx;
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if(xml1_talent_slot_glyph(LO8(ebx))) {
        /* Horizontal bitmap extent, bearing and advance; preserve vertical
         * dimensions, UVs, colour/fill selection and every guest flag. */
        MEMF(esp+0x48)*=talent_strip_scale;
        MEMF(esp+0x10)*=talent_strip_scale;
        MEMF(esp+0x50)*=talent_strip_scale;
    }
    if (CMP_EQ(_fa, _fb)) goto loc_0018B3E8; /* je: equal / zero */

loc_0018B31B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA0 (8-bit) */
    edi = MEM32(esp + 0x38);
    if (CMP_B(_fa, _fb)) goto loc_0018B360; /* jb: below (unsigned <) */

loc_0018B324: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xB2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xB2 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0018B360; /* ja: above (unsigned >) */

loc_0018B329: ;
    eax = esp + 0x6C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B334u); RECOMP_ABI_CALL(0x000758D0u, sub_000758D0); /* call 0x000758D0 */

loc_0018B334: ;
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    MEM32(esp + 0x80) = 0x3F800000;
    MEM32(esp + 0x7C) = 0x3F800000;
    MEM32(esp + 0x78) = 0x3F800000;
    PUSH32(esp, 0x0018B359u); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_0018B359: ;
    esp = esp + 0xC;
    MEM32(esp + 0x38) = eax;

loc_0018B360: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    edx = MEM32(esi + 0x14);
    fp_top() = fp_top() - MEMF(esp + 0x8C); /* fsub dword ptr [esp + 0x8c] */
    eax = MEM32(esi + 0xC);
    fp_push(MEMF(esp + 0x64)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() - MEMF(esi + 0x18); /* fsub dword ptr [esi + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, ecx);
    fp_top() = fp_top() - MEMF(esi + 0x10); /* fsub dword ptr [esi + 0x10] */
    ecx = esp + 0x3C;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    esp = esp - 0x10;
    fp_top() = fp_st1() - fp_top(); /* fsubr st(1) */
    fp_top() = fp_top() * MEMF(esp + 0xBC); /* fmul dword ptr [esp + 0xbc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x68); /* fadd dword ptr [esp + 0x68] */
    fp_top() = fp_top() + MEMF(esp + 0x4C); /* fadd dword ptr [esp + 0x4c] */
    fp_top() = fp_top() * MEMF(esp + 0xB8); /* fmul dword ptr [esp + 0xb8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0xBC); /* fmul dword ptr [esp + 0xbc] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x4C); /* fadd dword ptr [esp + 0x4c] */
    fp_top() = fp_top() * MEMF(esp + 0xB8); /* fmul dword ptr [esp + 0xb8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018B3E0u); RECOMP_ABI_CALL(0x0018A7A0u, sub_0018A7A0); /* call 0x0018A7A0 */

loc_0018B3E0: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x38) = edi;

loc_0018B3E8: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0018B3F4: ;
    ebx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0018B139;

loc_0018B402: ;
    MEM32(ebp + 0x14) = 0;

loc_0018B409: ;
    xml1_graphics_menu_end();
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 0x210);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0018B0C0; /* jl: less (signed <) */

loc_0018B42B: ;
    esi = MEM32(esp + 0x30);
    POP32(esp, ebp);

loc_0018B430: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018B437u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B437: ;
    ecx = ebx;
    PUSH32(esp, 0x0018B43Eu); RECOMP_ABI_CALL(0x0018AE50u, sub_0018AE50); /* call 0x0018AE50 */

loc_0018B43E: ;
    POP32(esp, esi);

loc_0018B43F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x90;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018B450
 * Original: 0x0018B450 - 0x0018B45C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B450(void)
{

loc_0018B450: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018B458u); RECOMP_ABI_CALL(0x0018ADE0u, sub_0018ADE0); /* call 0x0018ADE0 */

loc_0018B458: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B460
 * Original: 0x0018B460 - 0x0018B46B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B460: ;
    MEM32(ecx) = 0x3E04D0;
    g_seh_ebp = ebp; sub_0018AE50(); return; /* tail jmp 0x0018AE50 */

}

/**
 * sub_0018B470
 * Original: 0x0018B470 - 0x0018B475 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B470(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B470: ;
    g_seh_ebp = ebp; sub_0018A490(); return; /* tail jmp 0x0018A490 */

}

/**
 * sub_0018B480
 * Original: 0x0018B480 - 0x0018B49E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B480: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018B488u); RECOMP_ABI_CALL(0x0018B470u, sub_0018B470); /* call 0x0018B470 */

loc_0018B488: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018B498; /* je: equal / zero */

loc_0018B48F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018B495u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0018B495: ;
    esp = esp + 4;

loc_0018B498: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B4A0
 * Original: 0x0018B4A0 - 0x0018B4A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B4A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B4A0: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_0018A490(); return; /* tail jmp 0x0018A490 */

}

/**
 * sub_0018B4B0
 * Original: 0x0018B4B0 - 0x0018B4E2 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B4B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x20), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018B4E0; /* je: equal / zero */

loc_0018B4B9: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_0018B4DB; /* je: equal / zero */

loc_0018B4C4: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018B4DB; /* je: equal / zero */

loc_0018B4CA: ;
    edx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0018B4D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B4D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018B4D8u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_0018B4D8: ;
    esp = esp + 4;

loc_0018B4DB: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) & 0xFE;
    POP32(esp, edi);

loc_0018B4E0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B4F0
 * Original: 0x0018B4F0 - 0x0018B506 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B4F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0018B4F0: ;
    esp = esp - 0x10;
    eax = esp;
    PUSH32(esp, eax);
    ecx = ecx + 4;
    PUSH32(esp, 0x0018B4FFu); RECOMP_ABI_CALL(0x0018A2A0u, sub_0018A2A0); /* call 0x0018A2A0 */

loc_0018B4FF: ;
    fp_push(MEMF(eax + 0xC)); /* fld float */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018B510
 * Original: 0x0018B510 - 0x0018B542 (50 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B510(void)
{

loc_0018B510: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ebx = 0; /* xor self */
    ecx = edi;
    MEM32(esi) = ebx;
    PUSH32(esp, 0x0018B523u); RECOMP_ABI_CALL(0x0018A1B0u, sub_0018A1B0); /* call 0x0018A1B0 */

loc_0018B523: ;
    MEM32(edi) = 0x3E04E4;
    MEM32(esi + 0xC) = ebx;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) & 0xFE;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B550
 * Original: 0x0018B550 - 0x0018B59C (76 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B550: ;
    ecx = MEM32(ecx + 0xC);
    esp = esp - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018B596; /* je: equal / zero */

loc_0018B55A: ;
    eax = MEM32(esp + 0x1C);
    edx = eax;
    MEM32(esp + 0x10) = edx;
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x10;
    MEM32(esp + 4) = 0x461C4000;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x461C4000;
    MEM32(esp + 0x10) = 0xC61C4000u;
    MEM32(esp + 0x18) = 0xC61C4000u;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018B596u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B596: ;
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B5A0
 * Original: 0x0018B5A0 - 0x0018B69A (250 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B5A0(void)
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

loc_0018B5A0: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    edi = esi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018B5B6u); RECOMP_ABI_CALL(0x0018A2A0u, sub_0018A2A0); /* call 0x0018A2A0 */

loc_0018B5B6: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018B692; /* jnp: not parity */

loc_0018B5CB: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018B692; /* je: equal / zero */

loc_0018B5D5: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018B634; /* je: equal / zero */

loc_0018B5DC: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018B609; /* jne: not equal / not zero */

loc_0018B5ED: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018B609; /* jp: parity */

loc_0018B5FE: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018B607u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B607: ;
    goto loc_0018B634;

loc_0018B609: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018B634; /* jp: parity */

loc_0018B61A: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018B634; /* jne: not equal / not zero */

loc_0018B62B: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0018B634u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B634: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018B64D; /* jne: not equal / not zero */

loc_0018B645: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    goto loc_0018B66A;

loc_0018B64D: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018B66A; /* jp: parity */

loc_0018B662: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6E40)); /* fld float */

loc_0018B66A: ;
    ecx = esp + 8;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0018B692u); RECOMP_ABI_CALL(0x0018A270u, sub_0018A270); /* call 0x0018A270 */

loc_0018B692: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018B6A0
 * Original: 0x0018B6A0 - 0x0018B6E2 (66 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B6A0(void)
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

loc_0018B6A0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018B6D0; /* jp: parity */

loc_0018B6B5: ;
    eax = edx;
    MEM32(ecx + 0x14) = eax;
    eax = 0; /* xor self */
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x18) = eax;
    eax = edx;
    PUSH32(esp, eax);
    MEM32(ecx + 0x10) = edx;
    PUSH32(esp, 0x0018B6CDu); RECOMP_ABI_CALL(0x0018B5A0u, sub_0018B5A0); /* call 0x0018B5A0 */

loc_0018B6CD: ;
    esp += 12; return; /* ret 8 */

loc_0018B6D0: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x14) = edx;
    edx = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = edx;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018B6F0
 * Original: 0x0018B6F0 - 0x0018B782 (146 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B6F0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x20), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018B77B; /* jne: not equal / not zero */

loc_0018B6FC: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    edx = esp + 8;
    MEM32(esi) = ecx;
    edi = esi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0018B734u); RECOMP_ABI_CALL(0x0018A270u, sub_0018A270); /* call 0x0018A270 */

loc_0018B734: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018B755; /* jne: not equal / not zero */

loc_0018B73B: ;
    PUSH32(esp, 0x0018B740u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018B740: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0018B750u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B750: ;
    edx = MEM32(eax);
    MEM32(esi + 0xC) = edx;

loc_0018B755: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0018B761u); RECOMP_ABI_CALL(0x0018B550u, sub_0018B550); /* call 0x0018B550 */

loc_0018B761: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0018B777; /* je: equal / zero */

loc_0018B769: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018B76Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B76E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018B777u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B777: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) | 1;

loc_0018B77B: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018B790
 * Original: 0x0018B790 - 0x0018B7FC (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B790(void)
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

loc_0018B790: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    eax = MEM32(ecx + 0x10);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    MEM32(esp) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018B7D2; /* jne: not equal / not zero */

loc_0018B7A7: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018B7D2; /* jne: not equal / not zero */

loc_0018B7B7: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    MEMF(ecx + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fp_top() / MEMF(ecx + 0x1C); /* fdiv dword ptr [ecx + 0x1c] */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x14); /* fsub dword ptr [ecx + 0x14] */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() + MEMF(ecx + 0x14); /* fadd dword ptr [ecx + 0x14] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */

loc_0018B7D2: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018B7ED; /* jp: parity */

loc_0018B7E2: ;
    edx = MEM32(ecx + 0x14);
    eax = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(esp) = eax;

loc_0018B7ED: ;
    edx = MEM32(esp);
    esp = esp + 4;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0018B5A0(); return; /* tail jmp 0x0018B5A0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018B800
 * Original: 0x0018B800 - 0x0018B85C (92 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B800: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0018B809u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_0018B809: ;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0018B814u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B814: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    esi = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = edx << 8;
    esi = esi + edx;
    esi = esi << 8;
    esi = esi + eax;
    PUSH32(esp, 0x0018B82Eu); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_0018B82E: ;
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x24);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0018B83Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B83D: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    eax = eax << 8;
    edx = edx + eax;
    edx = edx << 8;
    edx = edx + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B860
 * Original: 0x0018B860 - 0x0018B8A5 (69 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B860: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018B872; /* je: equal / zero */

loc_0018B86B: ;
    MEM32(edi + 0x3C) = 0;

loc_0018B872: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018B89E; /* je: equal / zero */

loc_0018B87A: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B89E; /* je: equal / zero */

loc_0018B87F: ;
    PUSH32(esp, 0x0018B884u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018B884: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x0018B899u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018B899: ;
    edx = MEM32(eax);
    MEM32(edi + 0x3C) = edx;

loc_0018B89E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018B8B0
 * Original: 0x0018B8B0 - 0x0018B90A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B8B0(void)
{

loc_0018B8B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x20);
    MEM32(esi) = 0x3DDE88;
    edi = esi + 4;
    ebx = 0; /* xor self */
    PUSH32(esp, 0x3C806C);
    MEM8(edi) = LO8(ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x3C) = ebx;
    PUSH32(esp, 0x0018B8D2u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018B8D2: ;
    MEM8(edi + 0x1F) = LO8(ebx);
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM32(esi + 0x24) = ebx;
    MEM16(esi + 0x28) = LO16(ebx);
    MEM16(esi + 0x2A) = LO16(ebx);
    MEM16(esi + 0x2C) = LO16(ebx);
    MEM16(esi + 0x2E) = LO16(ebx);
    MEM16(esi + 0x30) = LO16(ebx);
    MEM16(esi + 0x32) = LO16(ebx);
    MEM16(esi + 0x34) = LO16(ebx);
    MEM16(esi + 0x38) = LO16(ebx);
    MEM32(esi + 0x3C) = ebx;
    MEM16(esi + 0x36) = 0xFFFF;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B910
 * Original: 0x0018B910 - 0x0018B926 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B910: ;
    edx = MEM32(ecx + 0x3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ecx) = 0x3DDE88;
    MEM32(ecx + 0x3C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0018B925; /* je: equal / zero */

loc_0018B922: ;
    MEM32(ecx + 0x3C) = eax;

loc_0018B925: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018B930
 * Original: 0x0018B930 - 0x0018B9D5 (165 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B930(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    /* XML1 SIX BIT TALENT RECORD */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B930: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0018B942u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0018B942: ;
    ecx = eax;
    PUSH32(esp, 0x0018B949u); RECOMP_ABI_CALL(0x000481F0u, sub_000481F0); /* call 0x000481F0 */

loc_0018B949: ;
    ecx = esp + 7;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0xB) = LO8(eax);
    PUSH32(esp, 0x0018B959u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0018B959: ;
    ecx = eax;
    PUSH32(esp, 0x0018B960u); RECOMP_ABI_CALL(0x000482B0u, xml1_guest_talent_bonus_rank_get); /* call 0x000482B0 */

loc_0018B960: ;
    SET_LO16(edx, ZX8(LO8(eax)));
    eax = MEM32(esp + 0x18);
    ecx = esp + 7;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM16(eax) = LO16(edx);
    PUSH32(esp, 0x0018B977u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0018B977: ;
    ecx = eax;
    PUSH32(esp, 0x0018B97Eu); RECOMP_ABI_CALL(0x00048270u, xml1_guest_talent_pending_rank_get); /* call 0x00048270 */

loc_0018B97E: ;
    SET_LO16(edx, ZX8(LO8(eax)));
    eax = MEM32(esp + 0x1C);
    ecx = esi;
    MEM16(eax) = LO16(edx);
    PUSH32(esp, 0x0018B990u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0018B990: ;
    ecx = MEM32(xml1_character_talent_map_resolve(eax+0x30u)+4);
    esi = xml1_character_talent_map_resolve(eax+0x30u);
    PUSH32(esp, ecx);
    edx = esp + 0xB;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0018B9A3u); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_0018B9A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B9AE; /* jne: not equal / not zero */

loc_0018B9AA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B9C5; /* je: equal / zero */

loc_0018B9AE: ;
    SET_LO8(eax, xml1_talent_record_get(MEM32(esi + eax*4 + (xml1_character_talent_map_contains(esi)?0x141cu:0x168u)), XML1_TALENT_CURRENT));
    ecx = MEM32(esp + 0x14);
    SET_LO16(eax, ZX8(LO8(eax)));
    MEM16(ecx) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018B9C5: ;
    SET_LO8(eax, 0); /* xor self */
    SET_LO16(edx, ZX8(LO8(eax)));
    eax = MEM32(esp + 0x14);
    MEM16(eax) = LO16(edx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B9E0
 * Original: 0x0018B9E0 - 0x0018BB0C (300 bytes, 124 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B9E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B9E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(esp + 0x14);
    esi = edi + 0x32;
    PUSH32(esp, esi);
    ebx = edi + 0x30;
    PUSH32(esp, ebx);
    ebp = edi + 0x2E;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018BA00u); RECOMP_ABI_CALL(0x0018B930u, sub_0018B930); /* call 0x0018B930 */

loc_0018BA00: ;
    SET_LO16(eax, MEM16(ebp));
    SET_LO16(eax, LO16(eax) + MEM16(ebx));
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    SET_LO16(eax, LO16(eax) + MEM16(esi));
    esp = esp + 0x14;
    ecx = SX16(LO16(eax));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM16(edi + 0x34) = LO16(eax);
    if (CMP_L(_fas, _fbs)) goto loc_0018BA2A; /* jl: less (signed <) */

loc_0018BA1D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x2A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(edi + 0x2A) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018BA2A; /* jge: greater or equal (signed >=) */

loc_0018BA23: ;
    eax = 1;
    goto loc_0018BA2C;

loc_0018BA2A: ;
    eax = 0; /* xor self */

loc_0018BA2C: ;
    edx = MEM32(esp + 0x24);
    MEM8(edx) = LO8(eax);
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018BA4F; /* jle: less or equal (signed <=) */

loc_0018BA38: ;
    SET_LO16(eax, MEM16(edi + 0x34));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x28)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(edi + 0x28) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018BA4F; /* jl: less (signed <) */

loc_0018BA42: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x2A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(edi + 0x2A) (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018BA4F; /* jg: greater (signed >) */

loc_0018BA48: ;
    eax = 1;
    goto loc_0018BA51;

loc_0018BA4F: ;
    eax = 0; /* xor self */

loc_0018BA51: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x18);
    MEM8(ecx) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp);
    ebp = MEM32(esp + 0x20);
    MEM32(edx) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    MEM32(ebp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(ebx);
    ebx = MEM32(esp + 0x1C);
    MEM32(ebx) = eax;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018BAA4; /* jle: less or equal (signed <=) */

loc_0018BA7D: ;
    /* nop */

loc_0018BA80: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018BA8B; /* jle: less or equal (signed <=) */

loc_0018BA86: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    goto loc_0018BAA1;

loc_0018BA8B: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018BA96; /* jle: less or equal (signed <=) */

loc_0018BA91: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx) = ecx;
    goto loc_0018BAA1;

loc_0018BA96: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018BAA1; /* jle: less or equal (signed <=) */

loc_0018BA9D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;

loc_0018BAA1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018BA80; /* jne: not equal / not zero */

loc_0018BAA4: ;
    esi = MEM32(edx);
    edx = MEM32(ebx);
    ecx = MEM32(ebp);
    eax = ecx + edx;
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018BB03; /* jle: less or equal (signed <=) */

loc_0018BAB4: ;
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x2A);
    ebp = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    ebx = ebx - ebp;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018BB03; /* jle: less or equal (signed <=) */

loc_0018BAC3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018BAD0; /* jle: less or equal (signed <=) */

loc_0018BAC7: ;
    edx = MEM32(esp + 0x20);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    goto loc_0018BAE8;

loc_0018BAD0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018BADD; /* jle: less or equal (signed <=) */

loc_0018BAD4: ;
    eax = MEM32(esp + 0x1C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    goto loc_0018BAE8;

loc_0018BADD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018BAE8; /* jle: less or equal (signed <=) */

loc_0018BAE1: ;
    ecx = MEM32(esp + 0x18);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = esi;

loc_0018BAE8: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    esi = MEM32(edx);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(eax);
    ecx = MEM32(ecx);
    eax = ecx + edx;
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0018BAB4; /* jg: greater (signed >) */

loc_0018BB03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0018BB10
 * Original: 0x0018BB10 - 0x0018BB26 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018BB10: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BB25; /* je: equal / zero */

loc_0018BB1A: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;

loc_0018BB25: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018BB30
 * Original: 0x0018BB30 - 0x0018BC04 (212 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018BB30: ;
    eax = MEM32(ecx + 0x200);
    PUSH32(esp, esi);
    esi = ecx + 0x200;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BB5E; /* jne: not equal / not zero */

loc_0018BB43: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018BBFC; /* jge: greater or equal (signed >=) */

loc_0018BB52: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018BB43; /* je: equal / zero */

loc_0018BB5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BB6B; /* jne: not equal / not zero */

loc_0018BB65: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0018BB6B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BB75; /* jne: not equal / not zero */

loc_0018BB6F: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0018BB75: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BB7F; /* jne: not equal / not zero */

loc_0018BB79: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0018BB7F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BB8A; /* jne: not equal / not zero */

loc_0018BB83: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018BB83; /* je: equal / zero */

loc_0018BB8A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018BBFC; /* jge: greater or equal (signed >=) */

loc_0018BB8F: ;
    /* nop */

loc_0018BB90: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018BBFC; /* jge: greater or equal (signed >=) */

loc_0018BB96: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BBC7; /* jne: not equal / not zero */

loc_0018BBA9: ;
    /* nop */

loc_0018BBB0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018BBFC; /* jge: greater or equal (signed >=) */

loc_0018BBBB: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018BBB0; /* je: equal / zero */

loc_0018BBC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BBD4; /* jne: not equal / not zero */

loc_0018BBCE: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0018BBD4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BBDE; /* jne: not equal / not zero */

loc_0018BBD8: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0018BBDE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BBE8; /* jne: not equal / not zero */

loc_0018BBE2: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0018BBE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BBF7; /* jne: not equal / not zero */

loc_0018BBEC: ;
    /* nop */

loc_0018BBF0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018BBF0; /* je: equal / zero */

loc_0018BBF7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018BB90; /* jl: less (signed <) */

loc_0018BBFC: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018BC10
 * Original: 0x0018BC10 - 0x0018BD40 (304 bytes, 100 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BC10(void)
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

loc_0018BC10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018BC18u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0018BC18: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0018BC1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018BC1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018BD3C; /* je: equal / zero */

loc_0018BC27: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018BD3C; /* je: equal / zero */

loc_0018BC33: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esi + 0x204);
    fp_top() = fp_top() - MEMF(esi + 0x208); /* fsub dword ptr [esi + 0x208] */
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018BD3B; /* jle: less or equal (signed <=) */

loc_0018BC54: ;
    ecx = esi + 0xC;

loc_0018BC57: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + -4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx - 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BC8C; /* jne: not equal / not zero */

loc_0018BC65: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BC8C; /* jne: not equal / not zero */

loc_0018BC74: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    MEMF(ecx) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BC8C; /* jne: not equal / not zero */

loc_0018BC89: ;
    ebp = ecx + -12;

loc_0018BC8C: ;
    eax = MEM32(esi + 0x204);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018BC57; /* jl: less (signed <) */

loc_0018BC9A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018BD3B; /* je: equal / zero */

loc_0018BCA2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018BCA9u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018BCA9: ;
    ecx = MEM32(ebp);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0018BCC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018BCC2: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018BCCBu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018BCCB: ;
    esi = eax;
    PUSH32(esp, 0x0018BCD2u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0018BCD2: ;
    edi = eax;
    PUSH32(esp, 0x0018BCD9u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0018BCD9: ;
    ebp = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x0018BCEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018BCEB: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0018BCFCu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018BCFC: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0018BD09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018BD09: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8C34); /* fmul dword ptr [0x3c8c34] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0x0018BD1Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018BD1A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0018BD22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018BD22: ;
    fp_top() = fp_top() - MEMF(0x3CA9AC); /* fsub dword ptr [0x3ca9ac] */
    PUSH32(esp, 0x0018BD2Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018BD2D: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0018BD39u); RECOMP_ABI_CALL(0x0018C350u, sub_0018C350); /* call 0x0018C350 */

loc_0018BD39: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0018BD3B: ;
    POP32(esp, ebp);

loc_0018BD3C: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018BD40
 * Original: 0x0018BD40 - 0x0018BD91 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BD40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018BD40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x204);
    eax = edi;
    eax = eax << 4;
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018BD57u); RECOMP_ABI_CALL(0x0018BB10u, sub_0018BB10); /* call 0x0018BB10 */

loc_0018BD57: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x200;
    ecx = edi;
    edi = MEM32(eax);
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    esp = esp + 4;
    edi = edi | edx;
    MEM32(eax) = edi;
    edx = MEM32(esi + 0x204);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    eax = eax << 4;
    POP32(esp, edi);
    MEM32(esi + 0x204) = edx;
    eax = eax + esi + -16;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018BDA0
 * Original: 0x0018BDA0 - 0x0018BDE9 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018BDA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x204);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = 0;
    if ((_fas < 0)) goto loc_0018BDD3; /* js: sign (negative) */

loc_0018BDB2: ;
    eax = ecx;
    eax = eax << 4;
    eax = eax + esi + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_0018BDC0: ;
    edx = MEM32(eax);
    MEM32(0x45A0AC) = MEM32(0x45A0AC) - edx;
    MEM32(eax + -4) = edi;
    MEM32(eax) = edi;
    eax = eax - 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018BDC0; /* jne: not equal / not zero */

loc_0018BDD3: ;
    ecx = esi;
    PUSH32(esp, 0x0018BDDAu); RECOMP_ABI_CALL(0x0018BB30u, sub_0018BB30); /* call 0x0018BB30 */

loc_0018BDDA: ;
    MEM32(esi + 0x204) = edi;
    MEM32(esi + 0x208) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018BDF0
 * Original: 0x0018BDF0 - 0x0018C0DC (748 bytes, 194 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BDF0(void)
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

loc_0018BDF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354B70);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x48;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x0018BE1Bu); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_0018BE1B: ;
    edi = MEM32(esp + 0xA0);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x94) = ebp;
    MEM32(esp + 0x10) = ebp;
    ecx = esp + 0x18;
    PUSH32(esp, 2);
    if (CMP_LE(_fas, _fbs)) goto loc_0018BE59; /* jle: less or equal (signed <=) */

loc_0018BE3A: ;
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018BE47u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018BE47: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esp + 0x20;
    MEM8(esp + 0x9C) = 1;
    PUSH32(esp, ecx);
    goto loc_0018BE76;

loc_0018BE59: ;
    edx = MEM32(esp + 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018BE66u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018BE66: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    eax = esp + 0x20;
    MEM8(esp + 0x9C) = 2;
    PUSH32(esp, eax);

loc_0018BE76: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0x0018BE7Fu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_0018BE7F: ;
    ecx = esp + 0x18;
    MEM8(esp + 0x94) = 0;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0018BE92u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0018BE92: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C0AD; /* je: equal / zero */

loc_0018BE9A: ;
    ecx = esi;
    PUSH32(esp, 0x0018BEA1u); RECOMP_ABI_CALL(0x0018BB30u, sub_0018BB30); /* call 0x0018BB30 */

loc_0018BEA1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E0504);
    ecx = esp + 0x20;
    MEM32(esi + 0x204) = ebp;
    PUSH32(esp, 0x0018BEB7u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018BEB7: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x4C;
    MEM8(esp + 0x98) = 3;
    PUSH32(esp, 0x0018BECDu); RECOMP_ABI_CALL(0x00125FE0u, sub_00125FE0); /* call 0x00125FE0 */

loc_0018BECD: ;
    ecx = esp + 0x18;
    edi = eax;
    MEM8(esp + 0x94) = 0;
    PUSH32(esp, 0x0018BEE0u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0018BEE0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C0AD; /* je: equal / zero */

loc_0018BEE8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE144);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0018BEF8u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018BEF8: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    MEM8(esp + 0x98) = 4;
    PUSH32(esp, 0x0018BF0Cu); RECOMP_ABI_CALL(0x00125FE0u, sub_00125FE0); /* call 0x00125FE0 */

loc_0018BF0C: ;
    ecx = esp + 0x18;
    ebx = eax;
    MEM8(esp + 0x94) = 0;
    PUSH32(esp, 0x0018BF1Fu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0018BF1F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C0AD; /* je: equal / zero */

loc_0018BF27: ;
    goto loc_0018BF30;

    /* nop */

loc_0018BF30: ;
    _fa = (uint32_t)(MEM32(esi + 0x204)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x204), 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C0AD; /* je: equal / zero */

loc_0018BF3D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CC13C);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0018BF4Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018BF4D: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM8(esp + 0x98) = 5;
    PUSH32(esp, 0x0018BF61u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0018BF61: ;
    ecx = esp + 0x18;
    ebp = eax;
    MEM8(esp + 0x94) = 0;
    PUSH32(esp, 0x0018BF74u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0018BF74: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C09C; /* je: equal / zero */

loc_0018BF7C: ;
    ecx = ebp;
    PUSH32(esp, 0x0018BF83u); RECOMP_ABI_CALL(0x001179C0u, sub_001179C0); /* call 0x001179C0 */

loc_0018BF83: ;
    edi = eax;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0018C0AD; /* jg: greater (signed >) */

loc_0018BF9B: ;
    ecx = esi;
    PUSH32(esp, 0x0018BFA2u); RECOMP_ABI_CALL(0x0018BD40u, sub_0018BD40); /* call 0x0018BD40 */

loc_0018BFA2: ;
    eax = MEM32(esi + 0x204);
    eax = eax << 4;
    esi = eax + esi + -16;
    eax = MEM32(0x45A0AC);
    ecx = eax + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x800 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018BFCC; /* jl: less (signed <) */

loc_0018BFBF: ;
    eax = MEM32(0x45A0B0);
    edi = MEM32(0x45A0B4);
    goto loc_0018BFDB;

loc_0018BFCC: ;
    eax = eax + 0x4598A8;
    MEM32(0x45A0AC) = ecx;
    MEM8(eax) = 0;

loc_0018BFDB: ;
    ecx = ebp;
    MEM32(esi) = eax;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x0018BFE7u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0018BFE7: ;
    edi = MEM32(esi + 4);
    ebp = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018BFF4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018BFF4: ;
    esp = esp + 0xC;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D03E8);
    ecx = esp + 0x30;
    MEM8(edi + ebp + -1) = 0;
    PUSH32(esp, 0x0018C00Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018C00C: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM8(esp + 0x98) = 6;
    PUSH32(esp, 0x0018C020u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0018C020: ;
    ecx = esp + 0x28;
    edi = eax;
    MEM8(esp + 0x94) = 0;
    PUSH32(esp, 0x0018C033u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0018C033: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C04A; /* je: equal / zero */

loc_0018C037: ;
    ecx = edi;
    PUSH32(esp, 0x0018C03Eu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0018C03E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018C044u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_0018C044: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_0018C04A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8660);
    ecx = esp + 0x40;
    PUSH32(esp, 0x0018C05Au); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0018C05A: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM8(esp + 0x98) = 7;
    PUSH32(esp, 0x0018C06Eu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0018C06E: ;
    ecx = esp + 0x38;
    edi = eax;
    MEM8(esp + 0x94) = 0;
    PUSH32(esp, 0x0018C081u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0018C081: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C098; /* je: equal / zero */

loc_0018C085: ;
    ecx = edi;
    PUSH32(esp, 0x0018C08Cu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0018C08C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018C092u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_0018C092: ;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_0018C098: ;
    esi = MEM32(esp + 0x14);

loc_0018C09C: ;
    ecx = ebx;
    PUSH32(esp, 0x0018C0A3u); RECOMP_ABI_CALL(0x00126040u, sub_00126040); /* call 0x00126040 */

loc_0018C0A3: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018BF30; /* jne: not equal / not zero */

loc_0018C0AD: ;
    ecx = esp + 0x48;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0018C0C1u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_0018C0C1: ;
    ecx = MEM32(esp + 0x8C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x88;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018C0E0
 * Original: 0x0018C0E0 - 0x0018C0F0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C0E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018C0E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018C0E8u); RECOMP_ABI_CALL(0x0018BDA0u, sub_0018BDA0); /* call 0x0018BDA0 */

loc_0018C0E8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0018BB30(); return; /* tail jmp 0x0018BB30 */

}

/**
 * sub_0018C0F0
 * Original: 0x0018C0F0 - 0x0018C124 (52 bytes, 18 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0018C0F0(void)
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

loc_0018C0F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018C0F8u); RECOMP_ABI_CALL(0x0018BDA0u, sub_0018BDA0); /* call 0x0018BDA0 */

loc_0018C0F8: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C112; /* je: equal / zero */

loc_0018C100: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C112; /* je: equal / zero */

loc_0018C105: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0018C112u); RECOMP_ABI_CALL(0x0018BDF0u, sub_0018BDF0); /* call 0x0018BDF0 */

loc_0018C112: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(esi + 0x208) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018C130
 * Original: 0x0018C130 - 0x0018C147 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C130(void)
{

loc_0018C130: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x200) = ecx;
    MEM32(eax + 0x204) = ecx;
    MEM32(eax + 0x208) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C150
 * Original: 0x0018C150 - 0x0018C173 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C150: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 4;
    /* nop */

loc_0018C160: ;
    ecx = esi;
    PUSH32(esp, 0x0018C167u); RECOMP_ABI_CALL(0x0018AE50u, sub_0018AE50); /* call 0x0018AE50 */

loc_0018C167: ;
    esi = esi + 0x214;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018C160; /* jne: not equal / not zero */

loc_0018C170: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C180
 * Original: 0x0018C180 - 0x0018C1BB (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C180: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C1B7; /* je: equal / zero */

loc_0018C18A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x854;
    edi = 4;

loc_0018C197: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C1AF; /* je: equal / zero */

loc_0018C19C: ;
    ecx = MEM32(ebx);
    edx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0018C1A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C1A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018C1ACu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_0018C1AC: ;
    esp = esp + 4;

loc_0018C1AF: ;
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018C197; /* jne: not equal / not zero */

loc_0018C1B5: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0018C1B7: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C1C0
 * Original: 0x0018C1C0 - 0x0018C27C (188 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C1C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018C1C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ebx = ecx;
    eax = MEM32(ebx + edi * 4 + 0x854);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018C275; /* jne: not equal / not zero */

loc_0018C1D7: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x214);
    PUSH32(esp, ebp);
    ebp = eax + ebx;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0018C1EBu); RECOMP_ABI_CALL(0x0018A600u, sub_0018A600); /* call 0x0018A600 */

loc_0018C1EB: ;
    PUSH32(esp, 0x0018C1F0u); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_0018C1F0: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018C1FBu); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_0018C1FB: ;
    ecx = MEM32(eax);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(ebx + edi * 4 + 0x854) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0018C26D; /* je: equal / zero */

loc_0018C20B: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0018C211u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C211: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018C21Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C21A: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018C222u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C222: ;
    PUSH32(esp, 0x0018C227u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018C227: ;
    ecx = MEM32(ebx + edi * 4 + 0x854);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0018C235u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C235: ;
    edx = MEM32(esi);
    ebp = eax;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0018C244u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C244: ;
    eax = MEM32(eax);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0018C24Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C24F: ;
    ecx = MEM32(ebx + edi * 4 + 0x854);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018C25Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C25B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018C264u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C264: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018C26D: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018C275: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C280
 * Original: 0x0018C280 - 0x0018C2E1 (97 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C280: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x854;
    edi = 4;

loc_0018C290: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C2D3; /* je: equal / zero */

loc_0018C296: ;
    eax = MEM32(esp + 0x24);
    edx = eax;
    MEM32(esp + 0x18) = edx;
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x18;
    MEM32(esp + 0xC) = 0x461C4000;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0x461C4000;
    MEM32(esp + 0x18) = 0xC61C4000u;
    MEM32(esp + 0x20) = 0xC61C4000u;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018C2D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C2D3: ;
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018C290; /* jne: not equal / not zero */

loc_0018C2D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C2F0
 * Original: 0x0018C2F0 - 0x0018C350 (96 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C2F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0018C302u); RECOMP_ABI_CALL(0x0018C1C0u, sub_0018C1C0); /* call 0x0018C1C0 */

loc_0018C302: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C34D; /* je: equal / zero */

loc_0018C306: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018C31Au); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_0018C31A: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x214);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = esi + edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018C34Au); RECOMP_ABI_CALL(0x0018AEF0u, sub_0018AEF0); /* call 0x0018AEF0 */

loc_0018C34A: ;
    esp = esp + 0x28;

loc_0018C34D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C350
 * Original: 0x0018C350 - 0x0018C3A9 (89 bytes, 35 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C350: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0018C35Eu); RECOMP_ABI_CALL(0x0018C1C0u, sub_0018C1C0); /* call 0x0018C1C0 */

loc_0018C35E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C3A4; /* je: equal / zero */

loc_0018C362: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018C371u); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_0018C371: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x214);
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x24);
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = esi + edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018C3A1u); RECOMP_ABI_CALL(0x0018AEF0u, sub_0018AEF0); /* call 0x0018AEF0 */

loc_0018C3A1: ;
    esp = esp + 0x24;

loc_0018C3A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0018C3B0
 * Original: 0x0018C3B0 - 0x0018C3FF (79 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C3B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0018C3FA; /* je: equal / zero */

loc_0018C3BD: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_0018C3C0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0018C3C8u); RECOMP_ABI_CALL(0x0018C1C0u, sub_0018C1C0); /* call 0x0018C1C0 */

loc_0018C3C8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018C3C0; /* jl: less (signed <) */

loc_0018C3CE: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018C3DAu); RECOMP_ABI_CALL(0x0018C280u, sub_0018C280); /* call 0x0018C280 */

loc_0018C3DA: ;
    esi = edi + 0x854;
    edi = 4;

loc_0018C3E5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C3F3; /* je: equal / zero */

loc_0018C3EB: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018C3F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C3F3: ;
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018C3E5; /* jne: not equal / not zero */

loc_0018C3F9: ;
    POP32(esp, esi);

loc_0018C3FA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018C400
 * Original: 0x0018C400 - 0x0018C407 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C400(void)
{

loc_0018C400: ;
    MEM32(ecx) = 0x3E051C;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C410
 * Original: 0x0018C410 - 0x0018C44E (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C410(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018C410: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x3F90);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x3F64) = MEM32(eax + edx * 4 + 0x3F64) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x3F64) >= 0)) goto loc_0018C44A; /* jns: not sign (positive) */

loc_0018C42D: ;
    MEM32(eax + edx * 4 + 0x3F64) = edx;
    ecx = MEM32(eax + 0x3F90);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x3F64) = esi;

loc_0018C44A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C450
 * Original: 0x0018C450 - 0x0018C46F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C450: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3E051C;
    if (TEST_Z(_fa, _fb)) goto loc_0018C469; /* je: equal / zero */

loc_0018C460: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018C466u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0018C466: ;
    esp = esp + 4;

loc_0018C469: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C470
 * Original: 0x0018C470 - 0x0018C4EA (122 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C470: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354B8E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x438);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = esi + 0x438;
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0018C4AE; /* je: equal / zero */

loc_0018C4A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018C4ABu); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_0018C4AB: ;
    esp = esp + 4;

loc_0018C4AE: ;
    ecx = MEM32(esi + 0x434);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = esi + 0x434;
    if (TEST_Z(_fa, _fb)) goto loc_0018C4C7; /* je: equal / zero */

loc_0018C4BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018C4C4u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_0018C4C4: ;
    esp = esp + 4;

loc_0018C4C7: ;
    ecx = esi + 0x43C;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0018C4DAu); RECOMP_ABI_CALL(0x0018B460u, sub_0018B460); /* call 0x0018B460 */

loc_0018C4DA: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C4F0
 * Original: 0x0018C4F0 - 0x0018C674 (388 bytes, 107 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C4F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018C4F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354BAE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = esi;
    eax = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x3C);
    MEM32(esi + 0x408) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(esi + 0x414) = eax;
    MEM32(esi + 0x40C) = ecx;
    MEM32(esi + 0x410) = edx;
    ebx = 0; /* xor self */
    MEM8(esi) = LO8(ebx);
    eax = 0x3F800000;
    MEM32(esi + 0x418) = eax;
    MEM32(esi + 0x41C) = eax;
    MEM32(esi + 0x420) = eax;
    MEM32(esi + 0x424) = eax;
    eax = 1;
    MEM32(esi + 0x428) = eax;
    MEM32(esi + 0x42C) = ebx;
    MEM32(esi + 0x430) = eax;
    ebp = esi + 0x43C;
    MEM32(esi + 0x434) = ebx;
    ecx = ebp;
    MEM32(esi + 0x438) = ebx;
    PUSH32(esp, 0x0018C58Au); RECOMP_ABI_CALL(0x0018AA80u, sub_0018AA80); /* call 0x0018AA80 */

loc_0018C58A: ;
    _fa = (uint32_t)(MEM32(esi + 0x438)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x438), ebx (32-bit) */
    MEM32(esp + 0x30) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0018C5B1; /* jne: not equal / not zero */

loc_0018C596: ;
    PUSH32(esp, 0x0018C59Bu); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_0018C59B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018C5A6u); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_0018C5A6: ;
    edx = MEM32(eax);
    esp = esp + 8;
    MEM32(esi + 0x438) = edx;

loc_0018C5B1: ;
    ecx = MEM32(esi + 0x438);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0018C5BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C5BD: ;
    edi = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018C5C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C5C6: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018C5CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C5CE: ;
    ecx = MEM32(esi + 0x438);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018C5D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C5D9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018C5E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C5E1: ;
    ecx = MEM32(esi + 0x438);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x24;
    MEM32(esp + 0x18) = 0x461C4000;
    MEM32(esp + 0x1C) = 0xC3400000u;
    MEM32(esp + 0x20) = 0x461C4000;
    MEM32(esp + 0x24) = 0xC61C4000u;
    MEM32(esp + 0x28) = 0xC3400000u;
    MEM32(esp + 0x2C) = 0xC61C4000u;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018C626u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C626: ;
    PUSH32(esp, 0x0018C62Bu); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_0018C62B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0018C638u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C638: ;
    _fa = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x3C), ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0018C65E; /* je: equal / zero */

loc_0018C63F: ;
    ecx = MEM32(esi + 0x438);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018C64Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C64A: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0018C656u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018C656: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0018C65Eu); RECOMP_ABI_CALL(0x0018A600u, sub_0018A600); /* call 0x0018A600 */

loc_0018C65E: ;
    ecx = MEM32(esp + 0x28);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0018C680
 * Original: 0x0018C680 - 0x0018C77E (254 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C680: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x3F20);
    PUSH32(esp, edi);
    edi = ebx + 0x3F20;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018C6B1; /* jne: not equal / not zero */

loc_0018C696: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018C775; /* jge: greater or equal (signed >=) */

loc_0018C6A5: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C696; /* je: equal / zero */

loc_0018C6B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018C6BE; /* jne: not equal / not zero */

loc_0018C6B8: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_0018C6BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018C6C8; /* jne: not equal / not zero */

loc_0018C6C2: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_0018C6C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018C6D2; /* jne: not equal / not zero */

loc_0018C6CC: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_0018C6D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018C6DD; /* jne: not equal / not zero */

loc_0018C6D6: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C6D6; /* je: equal / zero */

loc_0018C6DD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018C775; /* jge: greater or equal (signed >=) */

loc_0018C6E6: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_0018C6F0: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x650);
    ecx = ecx + ebx;
    PUSH32(esp, 0x0018C6FFu); RECOMP_ABI_CALL(0x0018C470u, sub_0018C470); /* call 0x0018C470 */

loc_0018C6FF: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018C774; /* jge: greater or equal (signed >=) */

loc_0018C707: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018C737; /* jne: not equal / not zero */

loc_0018C71A: ;
    /* nop */

loc_0018C720: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018C774; /* jge: greater or equal (signed >=) */

loc_0018C72B: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C720; /* je: equal / zero */

loc_0018C737: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018C745; /* jne: not equal / not zero */

loc_0018C73F: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0018C745: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018C74F; /* jne: not equal / not zero */

loc_0018C749: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0018C74F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018C75A; /* jne: not equal / not zero */

loc_0018C754: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0018C75A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018C768; /* jne: not equal / not zero */

loc_0018C75F: ;
    /* nop */

loc_0018C760: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018C760; /* je: equal / zero */

loc_0018C768: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018C774; /* jge: greater or equal (signed >=) */

loc_0018C76D: ;
    esi = eax;
    goto loc_0018C6F0;

loc_0018C774: ;
    POP32(esp, esi);

loc_0018C775: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C780
 * Original: 0x0018C780 - 0x0018C7DF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C780: ;
    edx = ecx;
    eax = MEM32(edx + 0x3F54);
    eax = MEM32(edx + eax * 4 + 0x3F24);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x3F5C;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x3F54);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM32(edx + 0x3F54) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0018C7C9; /* jl: less (signed <) */

loc_0018C7BF: ;
    MEM32(edx + 0x3F54) = 0;

loc_0018C7C9: ;
    MEM32(edx + 0x3F58) = MEM32(edx + 0x3F58) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x3F58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x3F60);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x3F60) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C7E0
 * Original: 0x0018C7E0 - 0x0018C83D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C7E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x3F50) = esi;
    MEM32(ecx + 0x3F54) = esi;
    MEM32(ecx + 0x3F58) = esi;
    edx = 0; /* xor self */
    goto loc_0018C800;

    /* nop */

loc_0018C800: ;
    eax = MEM32(ecx + 0x3F50);
    edi = MEM32(ecx + 0x3F58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(ecx + 0x3F50) = eax;
    MEM32(ecx + 0x3F58) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0018C82C; /* jl: less (signed <) */

loc_0018C81F: ;
    MEM32(ecx + 0x3F50) = esi;
    eax = 9;
    goto loc_0018C82D;

loc_0018C82C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0018C82D: ;
    MEM32(ecx + eax * 4 + 0x3F24) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018C800; /* jl: less (signed <) */

loc_0018C83A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C840
 * Original: 0x0018C840 - 0x0018C8CE (142 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C840: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x650);
    ecx = ecx + esi;
    PUSH32(esp, 0x0018C857u); RECOMP_ABI_CALL(0x0018C470u, sub_0018C470); /* call 0x0018C470 */

loc_0018C857: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x3F20);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x3F20) = ecx;
    MEM32(eax + esi + 0x3F5C) = MEM32(eax + esi + 0x3F5C) & edx;
    eax = MEM32(esi + 0x3F50);
    edx = MEM32(esi + 0x3F58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esi + 0x3F50) = eax;
    MEM32(esi + 0x3F58) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0018C8B4; /* jl: less (signed <) */

loc_0018C8A3: ;
    MEM32(esi + 0x3F50) = 0;
    eax = 9;
    goto loc_0018C8B5;

loc_0018C8B4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0018C8B5: ;
    MEM32(esi + eax * 4 + 0x3F24) = edi;
    eax = MEM32(esi + 0x3F60);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x3F60) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C8D0
 * Original: 0x0018C8D0 - 0x0018C962 (146 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C8D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x3F20) = edi;
    MEM32(esi + 0x3F50) = edi;
    MEM32(esi + 0x3F54) = edi;
    MEM32(esi + 0x3F58) = edi;
    MEM32(esi + 0x3F5C) = edi;
    MEM32(esi + 0x3F60) = edi;
    PUSH32(esp, 0x0018C8FFu); RECOMP_ABI_CALL(0x0018C7E0u, sub_0018C7E0); /* call 0x0018C7E0 */

loc_0018C8FF: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x3F8C) = edi;
    MEM32(esi + 0x3F90) = edi;
    ecx = 9;
    edx = 0; /* xor self */

loc_0018C914: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C914; /* jne: not equal / not zero */

loc_0018C920: ;
    MEM32(esi + 0x3F8C) = eax;
    MEM32(esi + 0x3F90) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x3F64;
    goto loc_0018C940;

    /* nop */
    /* nop */

loc_0018C940: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x3F90);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018C940; /* jl: less (signed <) */

loc_0018C95D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C970
 * Original: 0x0018C970 - 0x0018C9CB (91 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C970(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018C970: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0xC);
    ecx = ecx - edi;
    eax = 0x288DF0CB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    esi = edx;
    esi = esi >> 0x1F;
    esi = esi + edx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0018C993u); RECOMP_ABI_CALL(0x0018C840u, sub_0018C840); /* call 0x0018C840 */

loc_0018C993: ;
    ecx = MEM32(edi + 0x3F90);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0x3F64) = MEM32(edi + esi * 4 + 0x3F64) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0x3F64) >= 0)) goto loc_0018C9C6; /* jns: not sign (positive) */

loc_0018C9A9: ;
    MEM32(edi + esi * 4 + 0x3F64) = esi;
    ecx = MEM32(edi + 0x3F90);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0x3F64) = edx;

loc_0018C9C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C9D0
 * Original: 0x0018C9D0 - 0x0018C9D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C9D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018C9D0: ;
    g_seh_ebp = ebp; sub_0018C680(); return; /* tail jmp 0x0018C680 */

}

/**
 * sub_0018C9E0
 * Original: 0x0018C9E0 - 0x0018CA34 (84 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C9E0(void)
{

loc_0018C9E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354BD3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3E0538;
    MEM32(esp + 0x10) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3E0548); PUSH32(esp, 0x0018CA11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CA11: ;
    ecx = esi + 4;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0018CA1Eu); RECOMP_ABI_CALL(0x0018C680u, sub_0018C680); /* call 0x0018C680 */

loc_0018CA1E: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3E051C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CA40
 * Original: 0x0018CA40 - 0x0018CA47 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CA40(void)
{

loc_0018CA40: ;
    eax = MEM32(ecx + 0x3F64);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CA50
 * Original: 0x0018CA50 - 0x0018CA5F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CA50: ;
    edx = MEM32(ecx + 0x3F64);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0018CA60
 * Original: 0x0018CA60 - 0x0018CA68 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CA60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018CA60: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_0018CA70(); return; /* tail jmp 0x0018CA70 */

}

/**
 * sub_0018CA70
 * Original: 0x0018CA70 - 0x0018CAC2 (82 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0018CA70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0018CABB; /* je: equal / zero */

loc_0018CA7C: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    ecx = eax;
    eax = 0x288DF0CB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((8) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    esi = edx;
    if (0x1F) _cf = (int)(((esi) >> ((0x1F) - 1)) & 1);
    esi = esi >> 0x1F;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    if (((int32_t)esi < 0)) goto loc_0018CABB; /* js: sign (negative) */

loc_0018CA93: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0018CABB; /* jge: greater or equal (signed >=) */

loc_0018CA98: ;
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((5) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    ecx = MEM32(edi + esi * 4 + 0x3F5C);
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018CABB: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018CAD0
 * Original: 0x0018CAD0 - 0x0018CAF1 (33 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CAD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 4;
    ecx = edi;
    PUSH32(esp, 0x0018CADCu); RECOMP_ABI_CALL(0x0018CB00u, sub_0018CB00); /* call 0x0018CB00 */

loc_0018CADC: ;
    esi = 0; /* xor self */
    edi = edi;

loc_0018CAE0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0018CAE8u); RECOMP_ABI_CALL(0x0018C410u, sub_0018C410); /* call 0x0018C410 */

loc_0018CAE8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018CAE0; /* jl: less (signed <) */

loc_0018CAEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CB00
 * Original: 0x0018CB00 - 0x0018CB1E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CB00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018CB00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    MEM32(esi + 0x3F60) = eax;
    MEM32(esi + 0x3F5C) = eax;
    PUSH32(esp, 0x0018CB16u); RECOMP_ABI_CALL(0x0018C680u, sub_0018C680); /* call 0x0018C680 */

loc_0018CB16: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0018C7E0(); return; /* tail jmp 0x0018C7E0 */

}

/**
 * sub_0018CB20
 * Original: 0x0018CB20 - 0x0018CB3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018CB28u); RECOMP_ABI_CALL(0x0018C9E0u, sub_0018C9E0); /* call 0x0018C9E0 */

loc_0018CB28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018CB38; /* je: equal / zero */

loc_0018CB2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018CB35u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0018CB35: ;
    esp = esp + 4;

loc_0018CB38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018CB40
 * Original: 0x0018CB40 - 0x0018CB84 (68 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CB40: ;
    SET_LO8(ecx, MEM8(0x583478));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018CB7E; /* jne: not equal / not zero */

loc_0018CB4F: ;
    edx = MEM32(0x583478);
    edx = edx | eax;
    ecx = 0x57F4E4;
    MEM32(0x583478) = edx;
    MEM32(0x57F4E0) = 0x3E0538;
    PUSH32(esp, 0x0018CB71u); RECOMP_ABI_CALL(0x0018C8D0u, sub_0018C8D0); /* call 0x0018C8D0 */

loc_0018CB71: ;
    PUSH32(esp, 0x35A680);
    PUSH32(esp, 0x0018CB7Bu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0018CB7B: ;
    esp = esp + 4;

loc_0018CB7E: ;
    eax = 0x57F4E0;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CB90
 * Original: 0x0018CB90 - 0x0018CC94 (260 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CB90: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354BF1);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(0x583478));
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = 1;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_0018CBE7; /* jne: not equal / not zero */

loc_0018CBB8: ;
    edx = MEM32(0x583478);
    edx = edx | ebx;
    ecx = 0x57F4E4;
    MEM32(0x583478) = edx;
    MEM32(0x57F4E0) = 0x3E0538;
    PUSH32(esp, 0x0018CBDAu); RECOMP_ABI_CALL(0x0018C8D0u, sub_0018C8D0); /* call 0x0018C8D0 */

loc_0018CBDA: ;
    PUSH32(esp, 0x35A680);
    PUSH32(esp, 0x0018CBE4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0018CBE4: ;
    esp = esp + 4;

loc_0018CBE7: ;
    ecx = 0x57F4E4;
    PUSH32(esp, 0x0018CBF1u); RECOMP_ABI_CALL(0x0018C780u, sub_0018C780); /* call 0x0018C780 */

loc_0018CBF1: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = ecx * 4 + 0x583404;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x650);
    ecx = ecx & 0x1F;
    esi = ebx;
    esi = esi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | esi;
    eax = eax + 0x57F4E4;
    esi = eax;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x18) = 0;
    if ((eax == 0)) goto loc_0018CC46; /* je: equal / zero */

loc_0018CC2B: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0018CC46u); RECOMP_ABI_CALL(0x0018C4F0u, sub_0018C4F0); /* call 0x0018C4F0 */

loc_0018CC46: ;
    _fa = (uint32_t)(MEM8(0x583478)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x583478), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018CC7D; /* jne: not equal / not zero */

loc_0018CC4E: ;
    edx = MEM32(0x583478);
    edx = edx | ebx;
    ecx = 0x57F4E4;
    MEM32(0x583478) = edx;
    MEM32(0x57F4E0) = 0x3E0538;
    PUSH32(esp, 0x0018CC70u); RECOMP_ABI_CALL(0x0018C8D0u, sub_0018C8D0); /* call 0x0018C8D0 */

loc_0018CC70: ;
    PUSH32(esp, 0x35A680);
    PUSH32(esp, 0x0018CC7Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0018CC7A: ;
    esp = esp + 4;

loc_0018CC7D: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CCA0
 * Original: 0x0018CCA0 - 0x0018CCC1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CCA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018CCA6u); RECOMP_ABI_CALL(0x0018CB40u, sub_0018CB40); /* call 0x0018CB40 */

loc_0018CCA6: ;
    esi = MEM32(esp + 8);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018CCB9; /* je: equal / zero */

loc_0018CCB0: ;
    PUSH32(esp, ecx);
    ecx = eax + 4;
    PUSH32(esp, 0x0018CCB9u); RECOMP_ABI_CALL(0x0018C970u, sub_0018C970); /* call 0x0018C970 */

loc_0018CCB9: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CCD0
 * Original: 0x0018CCD0 - 0x0018CCDC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CCD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018CCD0: ;
    PUSH32(esp, 0x0018CCD5u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018CCD5: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x4C)); return; /* indirect tail jmp */

}

/**
 * sub_0018CCE0
 * Original: 0x0018CCE0 - 0x0018CD06 (38 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CCE0(void)
{

loc_0018CCE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018CCE7u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018CCE7: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018CCF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CCF3: ;
    edi = eax;
    PUSH32(esp, 0x0018CCFAu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018CCFA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0018CD03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CD03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CD10
 * Original: 0x0018CD10 - 0x0018CD1C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CD10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018CD10: ;
    PUSH32(esp, 0x0018CD15u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018CD15: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x50)); return; /* indirect tail jmp */

}

/**
 * sub_0018CD20
 * Original: 0x0018CD20 - 0x0018CD8D (109 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CD20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018CD27u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018CD27: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018CD33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CD33: ;
    esi = eax;
    PUSH32(esp, 0x3E056C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018CD40u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0018CD40: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018CD6E; /* je: equal / zero */

loc_0018CD47: ;
    PUSH32(esp, 0x0018CD4Cu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018CD4C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DFDD0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0018CD58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CD58: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018CD5Eu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0018CD5E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018CD6E; /* jne: not equal / not zero */

loc_0018CD65: ;
    PUSH32(esp, 0x0018CD6Au); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0018CD6A: ;
    PUSH32(esp, 1);
    goto loc_0018CD75;

loc_0018CD6E: ;
    PUSH32(esp, 0x0018CD73u); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0018CD73: ;
    PUSH32(esp, 0);

loc_0018CD75: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018CD7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CD7C: ;
    PUSH32(esp, 0x0018CD81u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018CD81: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018CD8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CD8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CD90
 * Original: 0x0018CD90 - 0x0018CDA2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CD90(void)
{

loc_0018CD90: ;
    PUSH32(esp, 0x0018CD95u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018CD95: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018CDA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CDA1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CDB0
 * Original: 0x0018CDB0 - 0x0018CDC4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CDB0(void)
{

loc_0018CDB0: ;
    PUSH32(esp, 0x0018CDB5u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018CDB5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E0574);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018CDC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CDC3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CDD0
 * Original: 0x0018CDD0 - 0x0018CDDC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CDD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018CDD0: ;
    PUSH32(esp, 0x0018CDD5u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018CDD5: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x40)); return; /* indirect tail jmp */

}

/**
 * sub_0018CDE0
 * Original: 0x0018CDE0 - 0x0018CEF1 (273 bytes, 99 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CDE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018CDE0: ;
    PUSH32(esp, 0x0018CDE5u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0018CDE5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018CDECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CDEC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018CEBF; /* je: equal / zero */

loc_0018CDF4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018CDFCu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0018CDFC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0018CE03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CE03: ;
    PUSH32(esp, 0x0018CE08u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0018CE08: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018CE11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CE11: ;
    PUSH32(esp, 0x0018CE16u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_0018CE16: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2F);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0018CE23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CE23: ;
    esi = eax;
    PUSH32(esp, 0x0018CE2Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0018CE2A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018CE32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CE32: ;
    PUSH32(esp, 0x0018CE37u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0018CE37: ;
    esi = eax;
    PUSH32(esp, 0x0018CE3Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0018CE3E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    PUSH32(esp, 0x3DE820);
    PUSH32(esp, 0x7EA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018CE59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CE59: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x0018CE5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CE5F: ;
    PUSH32(esp, 0x0018CE64u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0018CE64: ;
    esi = eax;
    PUSH32(esp, 0x0018CE6Bu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0018CE6B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edi = eax;
    ebx = MEM32(edi);
    PUSH32(esp, 0x7EB);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018CE86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CE86: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x0018CE8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CE8C: ;
    PUSH32(esp, 0x0018CE91u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0018CE91: ;
    esi = eax;
    PUSH32(esp, 0x0018CE98u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0018CE98: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x428);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018CEA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CEA8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x3C); PUSH32(esp, 0x0018CEB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CEB0: ;
    PUSH32(esp, 0x0018CEB5u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0018CEB5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0018CEBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CEBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0018CEBF: ;
    PUSH32(esp, 0x0018CEC4u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018CEC4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x458474);
    PUSH32(esp, 0x45819C);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x0018CEDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CEDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018CEE2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0018CEE2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018CEF0; /* je: equal / zero */

loc_0018CEE9: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0017F370(); return; /* tail jmp 0x0017F370 */

loc_0018CEF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CF00
 * Original: 0x0018CF00 - 0x0018CF25 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CF00: ;
    SET_LO8(ecx, MEM8(0x583884));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018CF1F; /* jne: not equal / not zero */

loc_0018CF0F: ;
    MEM32(0x583884) = MEM32(0x583884) | eax;
    MEM32(0x583880) = 0x3E0590;

loc_0018CF1F: ;
    eax = 0x583880;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CF30
 * Original: 0x0018CF30 - 0x0018CF8D (93 bytes, 23 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CF30(void)
{

loc_0018CF30: ;
    esp = esp - 0x84;
    eax = MEM32(0x47A050);
    ecx = MEM32(esp + 0x88);
    MEM32(esp + 0x80) = eax;
    eax = ZX8(MEM8(esp + 0x8C));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x3E0594);
    PUSH32(esp, edx);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0018CF67u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0018CF67: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x0018CF6Fu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018CF6F: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018CF7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CF7A: ;
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x0018CF86u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018CF86: ;
    esp = esp + 0x84;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CF90
 * Original: 0x0018CF90 - 0x0018D0A4 (276 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018CF90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_0018CF90: ;
    xml1_newgame_trace("0018CF90");
    raven_extraction_reset();
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018CF98u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0018CF98: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018CF9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CF9F: ;
    PUSH32(esp, 0x0018CFA4u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018CFA4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E05A4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018CFB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CFB0: ;
    PUSH32(esp, 0x0018CFB5u); RECOMP_ABI_CALL(0x000C0700u, sub_000C0700); /* call 0x000C0700 */

loc_0018CFB5: ;
    PUSH32(esp, 0x0018CFBAu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018CFBA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0018CFC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CFC1: ;
    PUSH32(esp, 0x0018CFC6u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018CFC6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018CFCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CFCC: ;
    PUSH32(esp, 0x0018CFD1u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0018CFD1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0018CFD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CFD8: ;
    PUSH32(esp, 0x0018CFDDu); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_0018CFDD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018CFE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CFE4: ;
    PUSH32(esp, 0x0018CFE9u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018CFE9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018CFF0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CFF0: ;
    xml1_newgame_trace("0018CFF0");
    PUSH32(esp, 0x0018CFF5u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018CFF5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0018CFFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018CFFC: ;
    xml1_newgame_trace("0018CFFC");
    PUSH32(esp, 0x0018D001u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018D001: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0018D008u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D008: ;
    xml1_newgame_trace("0018D008");
    PUSH32(esp, 0x0018D00Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018D00D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0018D017u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D017: ;
    PUSH32(esp, 0x0018D01Cu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018D01C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x0018D028u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D028: ;
    PUSH32(esp, 0x0018D02Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018D02D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x0018D039u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D039: ;
    ecx = 0x571448;
    PUSH32(esp, 0x0018D043u); RECOMP_ABI_CALL(0x001681A0u, sub_001681A0); /* call 0x001681A0 */

loc_0018D043: ;
    SET_LO8(ecx, MEM8(0x571720));
    PUSH32(esp, 0x80);
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x5716A0);
    MEM8(0x571720) = LO8(ecx);
    PUSH32(esp, 0x0018D066u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018D066: ;
    esp = esp + 0xC;
    MEM8(0x57171F) = 0;
    PUSH32(esp, 0x0018D075u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018D075: ;
    esi = eax;
    PUSH32(esp, 0x0018D07Cu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018D07C: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C96C0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0018D08Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D08C: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x2C); PUSH32(esp, 0x0018D092u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D092: ;
    xml1_newgame_trace("0018D092");
    MEM8(0x48584E) = 0;
    MEM8(0x48584F) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D0B0
 * Original: 0x0018D0B0 - 0x0018D135 (133 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D0B0: ;
    xml1_newgame_trace("0018D0B0");
    PUSH32(esp, 0x0018D0B5u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D0B5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D0C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D0C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D0CA; /* je: equal / zero */

loc_0018D0C5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018D0D8; /* jne: not equal / not zero */

loc_0018D0CA: ;
    PUSH32(esp, 0x0018D0CFu); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0018D0CF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D0D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D0D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018D0E0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018D0E0: ;
    esi = eax;
    PUSH32(esp, 0x0018D0E7u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0018D0E7: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x174); PUSH32(esp, 0x0018D0F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D0F5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x34); PUSH32(esp, 0x0018D0FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D0FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0018D102u); RECOMP_ABI_CALL(0x0018CF90u, sub_0018CF90); /* call 0x0018CF90 */

loc_0018D102: ;
    xml1_newgame_trace("0018D102");
    xml1_saved_stats_after_reset();
    eax = MEM32(0x498DB0);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0018D123; /* jne: not equal / not zero */

loc_0018D111: ;
    PUSH32(esp, 0x0018D116u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D116: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E05D0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018D122u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D122: ;
    xml1_newgame_plus_finish();
    esp += 4; return; /* ret */

loc_0018D123: ;
    PUSH32(esp, 0x0018D128u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D128: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E05B8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018D134u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D134: ;
    xml1_newgame_plus_finish();
    esp += 4; return; /* ret */

}

/**
 * sub_0018D140
 * Original: 0x0018D140 - 0x0018D1B7 (119 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D140(void)
{

loc_0018D140: ;
    esp = esp - 0x204;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x200) = eax;
    PUSH32(esp, 0x0018D157u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D157: ;
    ecx = MEM32(esp + 0x208);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D166u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D166: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018D176u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018D176: ;
    esp = esp + 0xC;
    MEM8(esp + 0x1FF) = 0;
    PUSH32(esp, 0x0018D186u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0018D186: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018D191u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D191: ;
    PUSH32(esp, 0x0018D196u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0018D196: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0018D1A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D1A4: ;
    ecx = MEM32(esp + 0x200);
    PUSH32(esp, 0x0018D1B0u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018D1B0: ;
    esp = esp + 0x204;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D1C0
 * Original: 0x0018D1C0 - 0x0018D489 (713 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D1C0: ;
    esp = esp - 0x148;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x14C) = eax;
    PUSH32(esp, 0x0018D1D9u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D1D9: ;
    esi = MEM32(esp + 0x154);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D1E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D1E8: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D1F8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018D1F8: ;
    esp = esp + 0xC;
    MEM8(esp + 0xCB) = 0;
    PUSH32(esp, 0x0018D208u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D208: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D210u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D210: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = esp + 0x114;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D220u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018D220: ;
    esp = esp + 0xC;
    MEM8(esp + 0x14B) = 0;
    PUSH32(esp, 0x0018D230u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D230: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D238u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D238: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = esp + 0xD4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D248u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018D248: ;
    esp = esp + 0xC;
    MEM8(esp + 0x10B) = 0;
    PUSH32(esp, 0x0018D258u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D258: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D260u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D260: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D26Du); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018D26D: ;
    esp = esp + 0xC;
    MEM8(esp + 0x4B) = 0;
    PUSH32(esp, 0x0018D27Au); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D27A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D282u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D282: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D28Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018D28F: ;
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    MEM8(esp + 0x9B) = 0;
    MEM8(esp + 0x1B) = 0;
    MEM8(esp + 0x1A) = 0;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0x0018D2B0u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0018D2B0: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018D317; /* jne: not equal / not zero */

loc_0018D2B7: ;
    edx = esp + 0x8C;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018D2C9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D2C9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D317; /* je: equal / zero */

loc_0018D2D0: ;
    eax = esp + 0x8C;
    PUSH32(esp, 0x3DD46C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D2E2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D2E2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D317; /* je: equal / zero */

loc_0018D2E9: ;
    ecx = esp + 0x8C;
    PUSH32(esp, 0x3E05E8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018D2FBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D2FB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D317; /* je: equal / zero */

loc_0018D302: ;
    edx = esp + 0x8C;
    PUSH32(esp, 0x3E05E4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018D314u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D314: ;
    esp = esp + 8;

loc_0018D317: ;
    eax = esp + 0xCC;
    PUSH32(esp, 0x3CC6C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D329u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D329: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D349; /* je: equal / zero */

loc_0018D330: ;
    ecx = esp + 0xCC;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018D342u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D342: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018D34E; /* jne: not equal / not zero */

loc_0018D349: ;
    MEM8(esp + 0xB) = 1;

loc_0018D34E: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018D358u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0018D358: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018D3B7; /* jne: not equal / not zero */

loc_0018D35F: ;
    eax = esp + 0xC;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D36Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D36E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D3B7; /* je: equal / zero */

loc_0018D375: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x3DD46C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018D384u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D384: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D3B7; /* je: equal / zero */

loc_0018D38B: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x3E05E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018D39Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D39A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D3B7; /* je: equal / zero */

loc_0018D3A1: ;
    eax = esp + 0xC;
    PUSH32(esp, 0x3E05E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D3B0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D3B0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018D3BC; /* jne: not equal / not zero */

loc_0018D3B7: ;
    MEM8(esp + 0xA) = 1;

loc_0018D3BC: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018D3C6u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0018D3C6: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018D425; /* jne: not equal / not zero */

loc_0018D3CD: ;
    edx = esp + 0x4C;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018D3DCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D3DC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D425; /* je: equal / zero */

loc_0018D3E3: ;
    eax = esp + 0x4C;
    PUSH32(esp, 0x3DD46C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D3F2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D3F2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D425; /* je: equal / zero */

loc_0018D3F9: ;
    ecx = esp + 0x4C;
    PUSH32(esp, 0x3E05E8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018D408u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D408: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D425; /* je: equal / zero */

loc_0018D40F: ;
    edx = esp + 0x4C;
    PUSH32(esp, 0x3E05E4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018D41Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018D41E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018D427; /* jne: not equal / not zero */

loc_0018D425: ;
    SET_LO8(ebx, 1);

loc_0018D427: ;
    PUSH32(esp, 0x80);
    eax = esp + 0x110;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5716A0);
    PUSH32(esp, 0x0018D43Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018D43E: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    SET_LO8(ecx, MEM8(0x571720));
    SET_LO8(ebx, LO8(ebx) & 1);
    SET_LO8(ebx, LO8(ebx) << 1);
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    SET_LO8(eax, MEM8(esp + 0x17));
    SET_LO8(ebx, LO8(ebx) << 2);
    SET_LO8(ecx, LO8(ecx) & 0xF2);
    SET_LO8(ebx, LO8(ebx) | LO8(ecx));
    ecx = MEM32(esp + 0x158);
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    esp = esp + 0xC;
    SET_LO8(ebx, LO8(ebx) | 2);
    POP32(esp, esi);
    MEM8(0x571720) = LO8(ebx);
    MEM8(0x57171F) = 0;
    POP32(esp, ebx);
    PUSH32(esp, 0x0018D482u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018D482: ;
    esp = esp + 0x148;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D490
 * Original: 0x0018D490 - 0x0018D4E2 (82 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D490(void)
{

loc_0018D490: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x0018D4A1u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D4A1: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D4ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D4AD: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018D4BAu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018D4BA: ;
    esp = esp + 0xC;
    MEM8(esp + 0x3F) = 0;
    PUSH32(esp, 0x0018D4C7u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018D4C7: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x0018D4D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D4D5: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x0018D4DEu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018D4DE: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D4F0
 * Original: 0x0018D4F0 - 0x0018D556 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D4F0(void)
{

loc_0018D4F0: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x0018D501u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D501: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D50Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D50D: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018D51Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018D51A: ;
    esp = esp + 0xC;
    MEM8(esp + 0x3F) = 0;
    PUSH32(esp, 0x0018D527u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018D527: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x134); PUSH32(esp, 0x0018D535u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D535: ;
    PUSH32(esp, 0x0018D53Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018D53A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x0018D549u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D549: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x0018D552u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018D552: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D560
 * Original: 0x0018D560 - 0x0018D695 (309 bytes, 107 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D560: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x0018D571u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D571: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D57Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D57D: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018D58Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018D58A: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x3F) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0018D5BA; /* je: equal / zero */

loc_0018D59A: ;
    PUSH32(esp, 0x0018D59Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018D59F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C6EAC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018D5ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D5AD: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x0018D5B6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018D5B6: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_0018D5BA: ;
    PUSH32(esp, 0x0018D5BFu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018D5BF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0018D5C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D5C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D677; /* je: equal / zero */

loc_0018D5CE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018D5D6u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0018D5D6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018D5DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D5DF: ;
    PUSH32(esp, 0x0018D5E4u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0018D5E4: ;
    esi = eax;
    PUSH32(esp, 0x0018D5EBu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0018D5EB: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40A);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018D5FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D5FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x0018D601u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D601: ;
    PUSH32(esp, 0x0018D606u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0018D606: ;
    esi = eax;
    PUSH32(esp, 0x0018D60Du); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0018D60D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edi = eax;
    ebx = MEM32(edi);
    PUSH32(esp, 0x7EB);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018D628u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D628: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x0018D62Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D62E: ;
    PUSH32(esp, 0x0018D633u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0018D633: ;
    esi = eax;
    PUSH32(esp, 0x0018D63Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0018D63A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    PUSH32(esp, 0x3E05EC);
    PUSH32(esp, 0x7EA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018D655u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D655: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x0018D65Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D65B: ;
    PUSH32(esp, 0x0018D660u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0018D660: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0018D667u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D667: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x0018D673u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018D673: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_0018D677: ;
    PUSH32(esp, 0x0018D67Cu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018D67C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3D26EC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018D688u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D688: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x0018D691u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018D691: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D6A0
 * Original: 0x0018D6A0 - 0x0018D6C9 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D6A0: ;
    PUSH32(esp, 0x0018D6A5u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018D6A5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018D6ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D6AC: ;
    ecx = MEM32(eax + 0x30C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018D6C8; /* jle: less or equal (signed <=) */

loc_0018D6B6: ;
    PUSH32(esp, 0x0018D6BBu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018D6BB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018D6C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D6C2: ;
    MEM32(eax + 0x30C) = MEM32(eax + 0x30C) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x30C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0018D6C8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D6D0
 * Original: 0x0018D6D0 - 0x0018D9A7 (727 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D6D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D6D0: ;
    esp = esp - 0x80;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x0018D6F1u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018D6F1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0018D6F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D6F8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0018D890; /* je: equal / zero */

loc_0018D706: ;
    SET_LO8(ecx, MEM8(esp + 0x94));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D872; /* je: equal / zero */

loc_0018D715: ;
    ebp = eax + 0x130;
    edi = ebp;
    /* nop */

loc_0018D720: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x84) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018D72C; /* jne: not equal / not zero */

loc_0018D728: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D77A; /* je: equal / zero */

loc_0018D72C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D754; /* je: equal / zero */

loc_0018D731: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D754; /* je: equal / zero */

loc_0018D736: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018D73Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0018D73C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018D747u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0018D747: ;
    ecx = eax;
    PUSH32(esp, 0x0018D74Eu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0018D74E: ;
    MEM32(esp + 0x10) = eax;
    goto loc_0018D75C;

loc_0018D754: ;
    MEM32(esp + 0x10) = 0;

loc_0018D75C: ;
    PUSH32(esp, 0x0018D761u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018D761: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0018D771u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D771: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018D720; /* jl: less (signed <) */

loc_0018D77A: ;
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(esp + 0x18);
    ebx = ebx + 0x1B8;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018D7F4; /* jge: greater or equal (signed >=) */

loc_0018D78F: ;
    edi = ebx;

loc_0018D791: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x84) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018D79D; /* jne: not equal / not zero */

loc_0018D799: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D7F4; /* je: equal / zero */

loc_0018D79D: ;
    ecx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0018D7CD; /* je: equal / zero */

loc_0018D7AA: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D7CD; /* je: equal / zero */

loc_0018D7AF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018D7B5u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0018D7B5: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018D7C0u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0018D7C0: ;
    ecx = eax;
    PUSH32(esp, 0x0018D7C7u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0018D7C7: ;
    MEM32(esp + 0x14) = eax;
    goto loc_0018D7D5;

loc_0018D7CD: ;
    MEM32(esp + 0x14) = 0;

loc_0018D7D5: ;
    PUSH32(esp, 0x0018D7DAu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018D7DA: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0018D7EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D7EA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018D791; /* jl: less (signed <) */

loc_0018D7F4: ;
    edi = 0; /* xor self */

loc_0018D7F6: ;
    PUSH32(esp, 0x0018D7FBu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018D7FB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x0018D806u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D806: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D838; /* je: equal / zero */

loc_0018D80A: ;
    PUSH32(esp, 0x0018D80Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018D80F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x0018D81Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D81A: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D838; /* je: equal / zero */

loc_0018D820: ;
    PUSH32(esp, 0x0018D825u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0018D825: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    goto loc_0018D83D;

loc_0018D838: ;
    eax = 0x3C806C;

loc_0018D83D: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D847u); RECOMP_ABI_CALL(0x00085230u, sub_00085230); /* call 0x00085230 */

loc_0018D847: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D868; /* je: equal / zero */

loc_0018D84B: ;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0018D858u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018D858: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0018D868u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D868: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018D7F6; /* jl: less (signed <) */

loc_0018D86E: ;
    ebx = MEM32(esp + 0x10);

loc_0018D872: ;
    edx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(edx + 0x12E));
    SET_LO8(eax, LO8(eax) & 3);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ebp = ZX8(LO8(eax));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018D88B; /* jge: greater or equal (signed >=) */

loc_0018D887: ;
    ebp = 0; /* xor self */
    goto loc_0018D895;

loc_0018D88B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018D895; /* jle: less or equal (signed <=) */

loc_0018D890: ;
    ebp = 4;

loc_0018D895: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM8(esp + 0x4C) = 0;
    MEM32(esp + 0x1C) = 0x3CF014;
    MEM32(esp + 0x20) = 0x3CF00C;
    MEM32(esp + 0x24) = 0x3CEFE0;
    MEM32(esp + 0x28) = 0x3C96C0;
    esi = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_0018D968; /* jge: greater or equal (signed >=) */

loc_0018D8C4: ;
    MEM32(esp + 0x10) = ebp;
    goto loc_0018D8D0;

    /* nop */

loc_0018D8D0: ;
    edi = esi + 1;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E05FC);
    ecx = esp + 0x34;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    MEM8(esp + 0x3C) = 0;
    PUSH32(esp, 0x0018D8EAu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0018D8EA: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x0018D8F2u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0018D8F2: ;
    ecx = MEM32(esp + esi * 4 + 0x1C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D5438);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0018D90Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D90F: ;
    SET_LO8(eax, MEM8(esp + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D93D; /* je: equal / zero */

loc_0018D917: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018D921u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0018D921: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D930u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0018D930: ;
    ecx = eax;
    PUSH32(esp, 0x0018D937u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0018D937: ;
    MEM32(esp + 0x14) = eax;
    goto loc_0018D945;

loc_0018D93D: ;
    MEM32(esp + 0x14) = 0;

loc_0018D945: ;
    PUSH32(esp, 0x0018D94Au); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018D94A: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0018D95Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D95A: ;
    esi = edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018D8D0; /* jl: less (signed <) */

loc_0018D964: ;
    ebx = MEM32(esp + 0x10);

loc_0018D968: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    esi = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_0018D990; /* jge: greater or equal (signed >=) */

loc_0018D96F: ;
    edi = 0; /* xor self */

loc_0018D971: ;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x0018D97Au); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018D97A: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0018D98Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D98A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018D971; /* jl: less (signed <) */

loc_0018D990: ;
    ecx = MEM32(esp + 0x8C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0018D9A0u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018D9A0: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D9B0
 * Original: 0x0018D9B0 - 0x0018DA84 (212 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D9B0: ;
    esp = esp - 0x18C;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x188) = eax;
    eax = MEM32(esp + 0x190);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D9D3u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0018D9D3: ;
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, 0x0018D9DDu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018D9DD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018D9E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018D9E4: ;
    _fa = (uint32_t)(MEM32(eax + 0x30C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30C), 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018DA54; /* jge: greater or equal (signed >=) */

loc_0018D9ED: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0018D9F6u); RECOMP_ABI_CALL(0x00083400u, sub_00083400); /* call 0x00083400 */

loc_0018D9F6: ;
    PUSH32(esp, 0x0018D9FBu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0018D9FB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018DA02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DA02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DA54; /* je: equal / zero */

loc_0018DA06: ;
    PUSH32(esp, 0x0018DA0Bu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0018DA0B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018DA12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DA12: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DA54; /* je: equal / zero */

loc_0018DA17: ;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = esp;
    MEM32(eax) = esi;
    PUSH32(esp, 0x0018DA29u); RECOMP_ABI_CALL(0x00086260u, sub_00086260); /* call 0x00086260 */

loc_0018DA29: ;
    PUSH32(esp, 0x0018DA2Eu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018DA2E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018DA35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DA35: ;
    edi = MEM32(eax + 0x30C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x184);
    edi = edi + eax;
    ecx = 0x61;
    esi = esp + 0xC;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(eax + 0x30C) = MEM32(eax + 0x30C) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x30C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0018DA54: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0018DA5Du); RECOMP_ABI_CALL(0x00033270u, sub_00033270); /* call 0x00033270 */

loc_0018DA5D: ;
    esp = esp + 8;
    PUSH32(esp, 0x0018DA65u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018DA65: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18C); PUSH32(esp, 0x0018DA6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DA6F: ;
    ecx = MEM32(esp + 0x190);
    PUSH32(esp, 0x0018DA7Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018DA7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18C;
    esp += 4; return; /* ret */

}

/**
 * sub_0018DA90
 * Original: 0x0018DA90 - 0x0018DCB2 (546 bytes, 171 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DA90: ;
    xml1_newgame_trace("0018DA90");
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x104) = eax;
    PUSH32(esp, 0x0018DAA8u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018DAA8: ;
    ecx = MEM32(esp + 0x10C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018DAB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DAB7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DC9E; /* je: equal / zero */

loc_0018DAC1: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DC9E; /* je: equal / zero */

loc_0018DACA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018DAD0u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0018DAD0: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018DC9E; /* jne: not equal / not zero */

loc_0018DADB: ;
    PUSH32(esp, 0x3E0634);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018DAE6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0018DAE6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018DAF9; /* jne: not equal / not zero */

loc_0018DAED: ;
    /* Alison normally restores snapshot zero (the level-one baseline), then
     * captures it again. In NG+, invalidate only that restore so the native
     * capture establishes the carried progression as the new baseline. */
    if(xml1_newgame_plus_starting)MEM8(MEM32(0x48D59C)+XML1_MANAGER_OFFSET(0xDAC4))=0;

    PUSH32(esp, 0x0018DAF2u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018DAF2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018DAF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DAF9: ;
    xml1_newgame_trace("0018DAF9");
    PUSH32(esp, 0x0018DAFEu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018DAFE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018DB06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DB06: ;
    PUSH32(esp, 0x0018DB0Bu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018DB0B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0018DB12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DB12: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DC9E; /* je: equal / zero */

loc_0018DB1C: ;
    _fa = (uint32_t)(MEM8(esi + 0x12F)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12F), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DB33; /* je: equal / zero */

loc_0018DB25: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0018DB2Eu); RECOMP_ABI_CALL(0x00033270u, sub_00033270); /* call 0x00033270 */

loc_0018DB2E: ;
    esp = esp + 8;
    goto loc_0018DB4D;

loc_0018DB33: ;
    PUSH32(esp, 0x0018DB38u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018DB38: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018DB3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DB3F: ;
    PUSH32(esp, 0x0018DB44u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018DB44: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0018DB4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DB4D: ;
    PUSH32(esp, 0x0018DB52u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0018DB52: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018DB5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DB5B: ;
    _fa = (uint32_t)(MEM8(esi + 0x12F)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12F), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DB96; /* je: equal / zero */

loc_0018DB64: ;
    PUSH32(esp, 0x0018DB69u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018DB69: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x0018DB75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DB75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DB96; /* je: equal / zero */

loc_0018DB79: ;
    PUSH32(esp, 0x0018DB7Eu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018DB7E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x0018DB8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DB8A: ;
    ecx = eax;
    PUSH32(esp, 0x0018DB91u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0018DB91: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018DBA0; /* jne: not equal / not zero */

loc_0018DB96: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0018DB9Du); RECOMP_ABI_CALL(0x0018D6D0u, sub_0018D6D0); /* call 0x0018D6D0 */

loc_0018DB9D: ;
    esp = esp + 4;

loc_0018DBA0: ;
    PUSH32(esp, 0x0018DBA5u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018DBA5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0018DBACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DBAC: ;
    _fa = (uint32_t)(MEM8(esi + 0x12F)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12F), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018DBDA; /* jne: not equal / not zero */

loc_0018DBB5: ;
    PUSH32(esp, 0x0018DBBAu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018DBBA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018DBC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DBC1: ;
    ecx = MEM32(eax + 0x30C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018DBDA; /* jne: not equal / not zero */

loc_0018DBCB: ;
    PUSH32(esp, 0x0018DBD0u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018DBD0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x19C); PUSH32(esp, 0x0018DBDAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DBDA: ;
    PUSH32(esp, edi);
    edi = esi + 0x61;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DC18; /* je: equal / zero */

loc_0018DBE2: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DC18; /* je: equal / zero */

loc_0018DBE7: ;
    PUSH32(esp, 0x0018DBECu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0018DBEC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018DBF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DBF4: ;
    PUSH32(esp, 0x0018DBF9u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0018DBF9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0018DC03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DC03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x0018DC11u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018DC11: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_0018DC18: ;
    edi = esi + 0xC1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DC9D; /* je: equal / zero */

loc_0018DC22: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DC9D; /* je: equal / zero */

loc_0018DC27: ;
    PUSH32(esp, 0x0018DC2Cu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018DC2C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CB8FC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018DC3Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DC3A: ;
    _fa = (uint32_t)(MEM8(esi + 0x12F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12F), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DC92; /* je: equal / zero */

loc_0018DC43: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E0604);
    eax = esp + 0x10;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0018DC5Du); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0018DC5D: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x0018DC65u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018DC65: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018DC71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DC71: ;
    PUSH32(esp, 0x0018DC76u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018DC76: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0018DC7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DC7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x0018DC8Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018DC8B: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_0018DC92: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018DC9Au); RECOMP_ABI_CALL(0x0018CF30u, sub_0018CF30); /* call 0x0018CF30 */

loc_0018DC9A: ;
    esp = esp + 8;

loc_0018DC9D: ;
    POP32(esp, edi);

loc_0018DC9E: ;
    xml1_newgame_trace("0018DC9E");
    ecx = MEM32(esp + 0x104);
    POP32(esp, esi);
    PUSH32(esp, 0x0018DCABu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018DCAB: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_0018DCC0
 * Original: 0x0018DCC0 - 0x0018DCF5 (53 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DCC0: ;
    eax = ecx;
    edx = 0x10;
    goto loc_0018DCD0;

    /* nop */

loc_0018DCD0: ;
    MEM16(ecx) = MEM16(ecx) & 0xF000;
    MEM8(ecx + 2) = MEM8(ecx + 2) & 0xF0;
    ecx = ecx + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018DCD0; /* jne: not equal / not zero */

loc_0018DCDF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DD00
 * Original: 0x0018DD00 - 0x0018DD16 (22 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DD00(void)
{

loc_0018DD00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    ecx = 0x19;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DD20
 * Original: 0x0018DD20 - 0x0018DD4B (43 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DD20(void)
{

loc_0018DD20: ;
    eax = ecx;
    MEM8(eax) = 0;
    MEM8(eax + 0x20) = 0;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = eax + 0x20;
    ecx = ecx + 0x20;
    PUSH32(esp, edi);
    MEM8(ecx) = 0;
    MEM8(ecx + 0x20) = 0;
    ecx = 0x20;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DD50
 * Original: 0x0018DD50 - 0x0018DD63 (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DD50(void)
{

loc_0018DD50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0018DD5Du); RECOMP_ABI_CALL(0x0018DCC0u, sub_0018DCC0); /* call 0x0018DCC0 */

loc_0018DD5D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DD70
 * Original: 0x0018DD70 - 0x0018DD86 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DD70(void)
{

loc_0018DD70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018DD7Bu); RECOMP_ABI_CALL(0x0018D9B0u, sub_0018D9B0); /* call 0x0018D9B0 */

loc_0018DD7B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018DD81u); RECOMP_ABI_CALL(0x0018DA90u, sub_0018DA90); /* call 0x0018DA90 */

loc_0018DD81: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018DD90
 * Original: 0x0018DD90 - 0x0018DE33 (163 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DD90(void)
{

loc_0018DD90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x40);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018DDA1u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018DDA1: ;
    esp = esp + 0xC;
    eax = edi + 0x40;
    ecx = esi + 0x40;
    PUSH32(esp, eax);
    MEM8(ecx + -1) = 0;
    PUSH32(esp, 0x0018DDB4u); RECOMP_ABI_CALL(0x0018DD00u, sub_0018DD00); /* call 0x0018DD00 */

loc_0018DDB4: ;
    ecx = edi + 0xA4;
    PUSH32(esp, ecx);
    ecx = esi + 0xA4;
    PUSH32(esp, 0x0018DDC6u); RECOMP_ABI_CALL(0x0018DD20u, sub_0018DD20); /* call 0x0018DD20 */

loc_0018DDC6: ;
    edx = edi + 0x126;
    PUSH32(esp, edx);
    ecx = esi + 0x126;
    PUSH32(esp, 0x0018DDD8u); RECOMP_ABI_CALL(0x0018DD50u, sub_0018DD50); /* call 0x0018DD50 */

loc_0018DDD8: ;
    eax = MEM32(edi + 0x168);
    MEM32(esi + 0x168) = eax;
    ecx = MEM32(edi + 0x16C);
    MEM32(esi + 0x16C) = ecx;
    edx = MEM32(edi + 0x170);
    MEM32(esi + 0x170) = edx;
    eax = MEM32(edi + 0x174);
    MEM32(esi + 0x174) = eax;
    ecx = MEM32(edi + 0x178);
    MEM32(esi + 0x178) = ecx;
    edx = MEM32(edi + 0x17C);
    MEM32(esi + 0x17C) = edx;
    SET_LO8(eax, MEM8(edi + 0x180));
    MEM8(esi + 0x180) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DE40
 * Original: 0x0018DE40 - 0x0018DF1A (218 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DE40: ;
    esp = esp - 0x18C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x194) = eax;
    PUSH32(esp, 0x0018DE5Au); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018DE5A: ;
    esi = eax;
    PUSH32(esp, 0x0018DE61u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018DE61: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0018DE6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DE6A: ;
    edx = MEM32(edi);
    esi = MEM32(eax + 0x30C);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018DE77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DE77: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x184);
    eax = esi + eax + -388;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0018DE8Eu); RECOMP_ABI_CALL(0x0018DD90u, sub_0018DD90); /* call 0x0018DD90 */

loc_0018DE8E: ;
    PUSH32(esp, 0x0018DE93u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018DE93: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018DE9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DE9A: ;
    MEM32(eax + 0x30C) = MEM32(eax + 0x30C) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x30C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esp + 0x10;
    PUSH32(esp, 0x0018DEA9u); RECOMP_ABI_CALL(0x00085290u, sub_00085290); /* call 0x00085290 */

loc_0018DEA9: ;
    ebx = 0x48585C;
    esi = 0; /* xor self */

loc_0018DEB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFCu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018DEBC; /* jle: less or equal (signed <=) */

loc_0018DEB5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    eax = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0018DEC1; /* jl: less (signed <) */

loc_0018DEBC: ;
    eax = 0x498D90;

loc_0018DEC1: ;
    eax = MEM32(eax);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0018DED0u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0018DED0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018DEF7; /* jne: not equal / not zero */

loc_0018DED6: ;
    esi = esi + 4;
    ebx = ebx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018DEB0; /* jl: less (signed <) */

loc_0018DEE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x188);
    PUSH32(esp, 0x0018DEF0u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018DEF0: ;
    esp = esp + 0x18C;
    esp += 4; return; /* ret */

loc_0018DEF7: ;
    PUSH32(esp, 0x0018DEFCu); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0018DEFC: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0018DF04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DF04: ;
    ecx = MEM32(esp + 0x194);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x0018DF13u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018DF13: ;
    esp = esp + 0x18C;
    esp += 4; return; /* ret */

}

/**
 * sub_0018DF20
 * Original: 0x0018DF20 - 0x0018E08D (365 bytes, 113 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DF20: ;
    esp = esp - 0x20C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x20C) = eax;
    PUSH32(esp, 0x0018DF38u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018DF38: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018DF3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DF3F: ;
    ecx = MEM32(eax + 0x30C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018E068; /* jle: less or equal (signed <=) */

loc_0018DF4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018DF56u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018DF56: ;
    esi = eax;
    PUSH32(esp, 0x0018DF5Du); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018DF5D: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0018DF66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DF66: ;
    edx = MEM32(edi);
    esi = MEM32(eax + 0x30C);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018DF73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DF73: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x184);
    eax = esi + eax + -388;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, 0x0018DF8Du); RECOMP_ABI_CALL(0x0018DD90u, sub_0018DD90); /* call 0x0018DD90 */

loc_0018DF8D: ;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0x0018DF96u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018DF96: ;
    ecx = MEM32(esp + 0x21C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018DFA5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DFA5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018DFABu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0018DFAB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018E008; /* jne: not equal / not zero */

loc_0018DFB2: ;
    esi = 0; /* xor self */
    edi = esp + 0x134;
    goto loc_0018DFC0;

    /* nop */

loc_0018DFC0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DFE6; /* je: equal / zero */

loc_0018DFC4: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DFE6; /* je: equal / zero */

loc_0018DFC8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018DFCEu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0018DFCE: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018DFD9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0018DFD9: ;
    ecx = eax;
    PUSH32(esp, 0x0018DFE0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0018DFE0: ;
    MEM32(esp + 0xC) = eax;
    goto loc_0018DFEA;

loc_0018DFE6: ;
    MEM32(esp + 0xC) = ebx;

loc_0018DFEA: ;
    PUSH32(esp, 0x0018DFEFu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018DFEF: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0018DFFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018DFFF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018DFC0; /* jl: less (signed <) */

loc_0018E008: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0018E00Fu); RECOMP_ABI_CALL(0x00033270u, sub_00033270); /* call 0x00033270 */

loc_0018E00F: ;
    esp = esp + 8;
    PUSH32(esp, 0x0018E017u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018E017: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x190); PUSH32(esp, 0x0018E021u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E021: ;
    PUSH32(esp, 1);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x3E0594);
    PUSH32(esp, ecx);
    MEM8(esp + 0x20) = LO8(ebx);
    PUSH32(esp, 0x0018E03Eu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0018E03E: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x0018E046u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E046: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018E052u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E052: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x208);
    PUSH32(esp, 0x0018E061u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018E061: ;
    esp = esp + 0x20C;
    esp += 4; return; /* ret */

loc_0018E068: ;
    PUSH32(esp, 0x0018E06Du); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E06D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DFD14);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018E079u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E079: ;
    ecx = MEM32(esp + 0x20C);
    POP32(esp, ebx);
    PUSH32(esp, 0x0018E086u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018E086: ;
    esp = esp + 0x20C;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E090
 * Original: 0x0018E090 - 0x0018E103 (115 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E090(void)
{

loc_0018E090: ;
    esp = esp - 0x188;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x188) = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018E0A9u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018E0A9: ;
    esi = eax;
    PUSH32(esp, 0x0018E0B0u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018E0B0: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0018E0B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E0B9: ;
    edx = MEM32(edi);
    esi = MEM32(eax + 0x30C);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018E0C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E0C6: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x184);
    eax = esi + eax + -388;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0018E0DDu); RECOMP_ABI_CALL(0x0018DD90u, sub_0018DD90); /* call 0x0018DD90 */

loc_0018E0DD: ;
    PUSH32(esp, 0x0018E0E2u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018E0E2: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0018E0EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E0EE: ;
    ecx = MEM32(esp + 0x18C);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x0018E0FCu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018E0FC: ;
    esp = esp + 0x188;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E110
 * Original: 0x0018E110 - 0x0018E202 (242 bytes, 82 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E110: ;
    esp = esp - 0x48;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x0018E123u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E123: ;
    esi = MEM32(esp + 0x54);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018E12Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E12F: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E13Cu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018E13C: ;
    esp = esp + 0xC;
    MEM8(esp + 0x4B) = 0;
    PUSH32(esp, 0x0018E149u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E149: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018E151u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E151: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E157u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0018E157: ;
    esp = esp + 4;
    edi = eax;
    PUSH32(esp, 0x0018E161u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E161: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018E169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E169: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E16Fu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0018E16F: ;
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, 0x0018E179u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_0018E179: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018E180u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E180: ;
    edx = MEM32(eax + 0x30C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x0018E194u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0018E194: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E063C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0018E1A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E1A7: ;
    PUSH32(esp, 0x0018E1ACu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018E1AC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0018E1B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E1B6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E1BF; /* je: equal / zero */

loc_0018E1BA: ;
    PUSH32(esp, 0x0018E1BFu); RECOMP_ABI_CALL(0x0018E090u, sub_0018E090); /* call 0x0018E090 */

loc_0018E1BF: ;
    PUSH32(esp, 0x0018E1C4u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018E1C4: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xF8); PUSH32(esp, 0x0018E1DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E1DE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0018E1E9; /* je: equal / zero */

loc_0018E1E4: ;
    PUSH32(esp, 0x0018E1E9u); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_0018E1E9: ;
    PUSH32(esp, 0x0018E1EEu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018E1EE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0018E1F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E1F5: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x0018E1FEu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018E1FE: ;
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E210
 * Original: 0x0018E210 - 0x0018E3DF (463 bytes, 127 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E210(void)
{

loc_0018E210: ;
    PUSH32(esp, 0x0018E215u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E215: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18D0B0);
    PUSH32(esp, 0x3E0734);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E226u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E226: ;
    PUSH32(esp, 0x0018E22Bu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E22B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18E110);
    PUSH32(esp, 0x3E072C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E23Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E23C: ;
    PUSH32(esp, 0x0018E241u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E241: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18DD70);
    PUSH32(esp, 0x3E0718);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E252u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E252: ;
    PUSH32(esp, 0x0018E257u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E257: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18D9B0);
    PUSH32(esp, 0x3DE8BC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E268u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E268: ;
    PUSH32(esp, 0x0018E26Du); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E26D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18DF20);
    PUSH32(esp, 0x3DE958);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E27Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E27E: ;
    PUSH32(esp, 0x0018E283u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E283: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18D6A0);
    PUSH32(esp, 0x3E0704);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E294u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E294: ;
    PUSH32(esp, 0x0018E299u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E299: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18CCD0);
    PUSH32(esp, 0x3E05A4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E2AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E2AA: ;
    PUSH32(esp, 0x0018E2AFu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E2AF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18DA90);
    PUSH32(esp, 0x3E06F4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E2C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E2C0: ;
    PUSH32(esp, 0x0018E2C5u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E2C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18CCE0);
    PUSH32(esp, 0x3DFD08);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E2D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E2D6: ;
    PUSH32(esp, 0x0018E2DBu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E2DB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18CD10);
    PUSH32(esp, 0x3E06E4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E2ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E2EC: ;
    PUSH32(esp, 0x0018E2F1u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E2F1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18CD20);
    PUSH32(esp, 0x3D17E8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E302u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E302: ;
    PUSH32(esp, 0x0018E307u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E307: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18CD90);
    PUSH32(esp, 0x3E06D0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E318u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E318: ;
    PUSH32(esp, 0x0018E31Du); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E31D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18D1C0);
    PUSH32(esp, 0x3E06BC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E32Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E32E: ;
    PUSH32(esp, 0x0018E333u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E333: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18D490);
    PUSH32(esp, 0x3E06AC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E344u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E344: ;
    PUSH32(esp, 0x0018E349u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E349: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18D4F0);
    PUSH32(esp, 0x3E069C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E35Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E35A: ;
    PUSH32(esp, 0x0018E35Fu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E35F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18D140);
    PUSH32(esp, 0x3E0690);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E370u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E370: ;
    PUSH32(esp, 0x0018E375u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E375: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18CF90);
    PUSH32(esp, 0x3C6EB4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E386u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E386: ;
    PUSH32(esp, 0x0018E38Bu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E38B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18D560);
    PUSH32(esp, 0x3E0680);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E39Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E39C: ;
    PUSH32(esp, 0x0018E3A1u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E3A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18CDB0);
    PUSH32(esp, 0x3E066C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E3B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E3B2: ;
    PUSH32(esp, 0x0018E3B7u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E3B7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18CDE0);
    PUSH32(esp, 0x3E0660);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E3C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E3C8: ;
    PUSH32(esp, 0x0018E3CDu); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_0018E3CD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18CDD0);
    PUSH32(esp, 0x3E064C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E3DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E3DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E3E0
 * Original: 0x0018E3E0 - 0x0018E576 (406 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E3E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E3E0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x104));
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x110);
    MEM32(esp + 0x108) = eax;
    eax = MEM32(edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0018E55F; /* je: equal / zero */

loc_0018E407: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x118);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x120);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM8(esp + 0x1C) = LO8(ebx);
    PUSH32(esp, 0x0018E427u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0018E427: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018E431u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E431: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0018E4B7; /* je: equal / zero */

loc_0018E439: ;
    esi = MEM32(0x458674);
    eax = ebp;

loc_0018E441: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018E469; /* jne: not equal / not zero */

loc_0018E44B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0018E465; /* je: equal / zero */

loc_0018E44F: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018E469; /* jne: not equal / not zero */

loc_0018E45B: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0018E441; /* jne: not equal / not zero */

loc_0018E465: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0018E46E;

loc_0018E469: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0018E46E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0018E49E; /* je: equal / zero */

loc_0018E472: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018E479u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E479: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E487u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E487: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x0018E497u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018E497: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_0018E49E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x0018E4B0u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018E4B0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_0018E4B7: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018E4BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E4BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0018E546; /* je: equal / zero */

loc_0018E4C6: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018E4D2u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0018E4D2: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018E4DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E4DC: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E4E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E4E8: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0018E546; /* je: equal / zero */

loc_0018E4EE: ;
    eax = MEM32(esp + 0x124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0018E546; /* je: equal / zero */

loc_0018E4F9: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018E505u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0018E505: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018E50Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E50F: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0018E51Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E51D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3C9498);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0018E52Eu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0018E52E: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018E538u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E538: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0018E546u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E546: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x0018E558u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018E558: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_0018E55F: ;
    ecx = MEM32(esp + 0x108);
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x0018E56Fu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018E56F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E580
 * Original: 0x0018E580 - 0x0018E679 (249 bytes, 71 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E580: ;
    esp = esp - 0x208;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x208) = eax;
    SET_LO8(eax, MEM8(esp + 0x218));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x218);
    MEM8(esp + 0xC) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0018E5D1; /* je: equal / zero */

loc_0018E5AC: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x3E074C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018E5B9u); RECOMP_ABI_CALL(0x00122FB0u, sub_00122FB0); /* call 0x00122FB0 */

loc_0018E5B9: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E603; /* je: equal / zero */

loc_0018E5C0: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x3E074C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    goto loc_0018E5F4;

loc_0018E5D1: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x3E0748);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018E5DEu); RECOMP_ABI_CALL(0x00122FB0u, sub_00122FB0); /* call 0x00122FB0 */

loc_0018E5DE: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E603; /* je: equal / zero */

loc_0018E5E5: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x3E0748);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);

loc_0018E5F4: ;
    PUSH32(esp, 0x0018E5F9u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018E5F9: ;
    esp = esp + 0xC;
    MEM8(esp + 0x10B) = LO8(ebx);

loc_0018E603: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0018E60Du); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0018E60D: ;
    SET_LO8(eax, MEM8(esp + 0x220));
    POP32(esp, esi);
    MEM8(esp + 0x108) = LO8(ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0018E632; /* je: equal / zero */

loc_0018E621: ;
    edx = esp + 0x104;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    goto loc_0018E641;

loc_0018E632: ;
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0xD);

loc_0018E641: ;
    PUSH32(esp, 0x0018E646u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0018E646: ;
    esp = esp + 0xC;
    eax = esp + 0x104;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018E65Bu); RECOMP_ABI_CALL(0x00149180u, sub_00149180); /* call 0x00149180 */

loc_0018E65B: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x214);
    ecx = MEM32(esp + 0x20C);
    MEM32(eax) = edx;
    PUSH32(esp, 0x0018E672u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018E672: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E680
 * Original: 0x0018E680 - 0x0018E8A4 (548 bytes, 163 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E680(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E680: ;
    esp = esp - 0x210;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x20C) = eax;
    eax = MEM32(esp + 0x214);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0018E857; /* je: equal / zero */

loc_0018E6A5: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x11C;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ecx);
    ebp = 0; /* xor self */
    PUSH32(esp, 0x0018E6BEu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018E6BE: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x28;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edx);
    MEM8(esp + 0x22F) = 0;
    PUSH32(esp, 0x0018E6DAu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0018E6DA: ;
    SET_LO8(eax, MEM8(esp + 0x240));
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x117) = 0;
    MEM32(esp + 0xC) = 0xD;
    if (TEST_Z(_fa, _fb)) goto loc_0018E713; /* je: equal / zero */

loc_0018E6F8: ;
    PUSH32(esp, 0x0018E6FDu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0018E6FD: ;
    ecx = MEM32(esp + 0x224);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0018E70Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E70F: ;
    MEM32(esp + 0xC) = eax;

loc_0018E713: ;
    MEM32(esp + 0x10) = 0;
    goto loc_0018E720;

    /* nop */

loc_0018E720: ;
    edx = MEM32(esp + 0x220);
    ecx = MEM32(edx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018E72Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E72E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E857; /* je: equal / zero */

loc_0018E736: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0x0018E73Du); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018E73D: ;
    ecx = MEM32(esp + 0x224);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0018E74Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E74C: ;
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x0018E755u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018E755: ;
    edi = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0018E761u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E761: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E78D; /* je: equal / zero */

loc_0018E765: ;
    PUSH32(esp, 0x0018E76Au); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018E76A: ;
    ecx = MEM32(esp + 0x224);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0018E779u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E779: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E7BD; /* je: equal / zero */

loc_0018E77F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x0018E789u); RECOMP_ABI_CALL(0x000B0EA0u, xml1_guest_character_format_skin); /* call 0x000B0EA0 */

loc_0018E789: ;
    esi = eax;
    goto loc_0018E7BD;

loc_0018E78D: ;
    PUSH32(esp, 0x0018E792u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0018E792: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0018E79Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E79A: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018E7A7; /* jne: not equal / not zero */

loc_0018E7A0: ;
    esi = 0x3C806C;
    goto loc_0018E7BD;

loc_0018E7A7: ;
    PUSH32(esp, 0x0018E7ACu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0018E7AC: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x8008;

loc_0018E7BD: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0018E7D6; /* jle: less or equal (signed <=) */

loc_0018E7C5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E7D6; /* je: equal / zero */

loc_0018E7C9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x0018E7D4u); RECOMP_ABI_CALL(0x000B0EA0u, xml1_guest_character_format_skin); /* call 0x000B0EA0 */

loc_0018E7D4: ;
    esi = eax;

loc_0018E7D6: ;
    SET_LO8(eax, MEM8(esp + 0x22C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0018E805; /* je: equal / zero */

loc_0018E7E2: ;
    SET_LO8(eax, MEM8(esp + 0x22C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E7F9; /* je: equal / zero */

loc_0018E7ED: ;
    PUSH32(esp, 0x3E077C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    goto loc_0018E80F;

loc_0018E7F9: ;
    PUSH32(esp, 0x3E0764);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    goto loc_0018E80F;

loc_0018E805: ;
    PUSH32(esp, 0x3E0754);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);

loc_0018E80F: ;
    PUSH32(esp, 0x0018E814u); RECOMP_ABI_CALL(0x00199B80u, sub_00199B80); /* call 0x00199B80 */

loc_0018E814: ;
    ecx = MEM32(esp + 0x18);
    esp = esp + 0xC;
    edx = esp + 0x118;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018E82Eu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0018E82E: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x0018E836u); RECOMP_ABI_CALL(0x001326E0u, sub_001326E0); /* call 0x001326E0 */

loc_0018E836: ;
    edx = MEM32(eax);
    ecx = esp + 0x118;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E845u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E845: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018E86F; /* jne: not equal / not zero */

loc_0018E849: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0018E720; /* jl: less (signed <) */

loc_0018E857: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x20C);
    PUSH32(esp, 0x0018E868u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018E868: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

loc_0018E86F: ;
    edx = MEM32(esp + 0x220);
    ecx = MEM32(edx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018E87Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E87D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x11C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018E88Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018E88E: ;
    ecx = MEM32(esp + 0x218);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x0018E89Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0018E89D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E8B0
 * Original: 0x0018E8B0 - 0x0018E8E1 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E8B0(void)
{

loc_0018E8B0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x800;
    edi = 0x584EA0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x500;
    edi = 0x583A98;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x583A90) = eax;
    MEM32(0x586EA0) = eax;
    MEM32(0x586EA4) = eax;
    MEM32(0x584E98) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018E8F0
 * Original: 0x0018E8F0 - 0x0018EA2E (318 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E8F0: ;
    eax = MEM32(0x586EA8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x586EA8) = eax;
    eax = MEM32(0x586EA0);
    edx = eax;
    PUSH32(esp, ebx);
    edx = edx << 6;
    ecx = 0x8000;
    _fa = (uint32_t)(MEM16(edx + 0x584EA0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(edx + 0x584EA0), LO16(ecx) (16-bit) */
    PUSH32(esp, esi);
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0018E938; /* je: equal / zero */

loc_0018E917: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E922; /* jne: not equal / not zero */

loc_0018E920: ;
    ebx = 0; /* xor self */

loc_0018E922: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EA1C; /* je: equal / zero */

loc_0018E92A: ;
    edx = ebx;
    edx = edx << 6;
    _fa = (uint32_t)(MEM16(edx + 0x584EA0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(edx + 0x584EA0), LO16(ecx) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018E917; /* jne: not equal / not zero */

loc_0018E938: ;
    eax = ebx;
    eax = eax << 6;
    esi = eax + 0x584EA0;
    eax = ebx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM16(esi) = LO16(ecx);
    MEM32(0x586EA0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0018E95F; /* jne: not equal / not zero */

loc_0018E955: ;
    MEM32(0x586EA0) = 0;

loc_0018E95F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018EA1C; /* je: equal / zero */

loc_0018E967: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx & 0xFFFC;
    MEM16(esi) = MEM16(esi) | LO16(ecx);
    MEM8(esi + 2) = 0;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 8);
    eax = eax + 4;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    SET_LO8(eax, 0x7F);
    MEM8(esi + 3) = LO8(eax);
    MEM32(esi + 0x30) = 0;
    SET_LO8(edx, MEM8(edi));
    MEM8(esi + 4) = LO8(edx);
    MEM8(esi + 5) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 1));
    MEM8(esi + 6) = LO8(eax);
    MEM8(esi + 7) = 0;
    MEM32(esi + 8) = edi;
    SET_LO8(eax, MEM8(edi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E9C9; /* je: equal / zero */

loc_0018E9B1: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x3C));
    ecx = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018E9C1u); RECOMP_ABI_CALL(0x00191580u, sub_00191580); /* call 0x00191580 */

loc_0018E9C1: ;
    esp = esp + 8;
    MEM32(esi + 0x1C) = eax;
    goto loc_0018E9D0;

loc_0018E9C9: ;
    MEM32(esi + 0x1C) = 0;

loc_0018E9D0: ;
    SET_LO8(eax, MEM8(edi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E9EF; /* je: equal / zero */

loc_0018E9D7: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x3C));
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018E9E7u); RECOMP_ABI_CALL(0x001915C0u, sub_001915C0); /* call 0x001915C0 */

loc_0018E9E7: ;
    esp = esp + 8;
    MEM32(esi + 0x20) = eax;
    goto loc_0018E9F6;

loc_0018E9EF: ;
    MEM32(esi + 0x20) = 0;

loc_0018E9F6: ;
    SET_LO16(edx, MEM16(edi + 0xE));
    eax = MEM32(0x586EA8);
    MEM16(esi + 0x3C) = LO16(edx);
    edx = MEM32(0x583A90);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x586EA8) = eax;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    MEM32(0x583A90) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0018EA1C: ;
    ecx = MEM32(0x586EA8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x586EA8) = ecx;
    SET_LO8(eax, LO8(eax) | 0xFF);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018EA30
 * Original: 0x0018EA30 - 0x0018EB45 (277 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EA30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018EA30: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 8));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_A(_fa, _fb)) goto loc_0018EB40; /* ja: above (unsigned >) */

loc_0018EA45: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x18EB48); /* switch: 6 entries, 5 targets */
    if (_jt == 0x0018EA4Cu) goto loc_0018EA4C;
    if (_jt == 0x0018EA9Eu) goto loc_0018EA9E;
    if (_jt == 0x0018EAD8u) goto loc_0018EAD8;
    if (_jt == 0x0018EB0Cu) goto loc_0018EB0C;
    if (_jt == 0x0018EB38u) goto loc_0018EB38;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018EA4C: ;
    esi = MEM32(edi + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    SET_LO8(eax, MEM8(eax + 9));
    MEM8(edi + 5) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0018EB38; /* je: equal / zero */

loc_0018EA5D: ;
    /* nop */

loc_0018EA60: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018EA8F; /* jne: not equal / not zero */

loc_0018EA65: ;
    edx = ZX8(MEM8(edi + 4));
    ecx = ZX8(MEM8(esi + 1));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = ecx >> 7;
    eax = ZX8(LO8(ecx));
    ecx = ZX8(MEM8(edi + 5));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 8));
    eax = eax >> 7;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018EA8Cu); RECOMP_ABI_CALL(0x00190550u, sub_00190550); /* call 0x00190550 */

loc_0018EA8C: ;
    esp = esp + 8;

loc_0018EA8F: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018EA60; /* jne: not equal / not zero */

loc_0018EA96: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018EA9E: ;
    esi = MEM32(edi + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    SET_LO8(eax, MEM8(eax + 9));
    MEM8(edi + 6) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0018EB38; /* je: equal / zero */

loc_0018EAAF: ;
    /* nop */

loc_0018EAB0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018EAC9; /* jne: not equal / not zero */

loc_0018EAB5: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 6));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018EAC6u); RECOMP_ABI_CALL(0x00190660u, sub_00190660); /* call 0x00190660 */

loc_0018EAC6: ;
    esp = esp + 8;

loc_0018EAC9: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018EAB0; /* jne: not equal / not zero */

loc_0018EAD0: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018EAD8: ;
    SET_LO8(eax, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EAFD; /* je: equal / zero */

loc_0018EADF: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x3C));
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018EAEFu); RECOMP_ABI_CALL(0x00191580u, sub_00191580); /* call 0x00191580 */

loc_0018EAEF: ;
    esp = esp + 8;
    MEM32(edi + 0x1C) = eax;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018EAFD: ;
    MEM32(edi + 0x1C) = 0;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018EB0C: ;
    SET_LO8(eax, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EB31; /* je: equal / zero */

loc_0018EB13: ;
    edx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x3C));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018EB23u); RECOMP_ABI_CALL(0x001915C0u, sub_001915C0); /* call 0x001915C0 */

loc_0018EB23: ;
    esp = esp + 8;
    MEM32(edi + 0x20) = eax;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018EB31: ;
    MEM32(edi + 0x20) = 0;

loc_0018EB38: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018EB40: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018EB60
 * Original: 0x0018EB60 - 0x0018EBA9 (73 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018EB60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EB60: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x30);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018EB96; /* je: equal / zero */

loc_0018EB71: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0xC);

loc_0018EB75: ;
    ecx = MEM32(eax + 0xC);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0018EB89; /* ja: above (unsigned >) */

loc_0018EB7E: ;
    esi = eax;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0018EB75; /* jne: not equal / not zero */

loc_0018EB89: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0018EB96; /* je: equal / zero */

loc_0018EB8E: ;
    MEM32(esi + 0x10) = edi;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) - edx;
    goto loc_0018EB99;

loc_0018EB96: ;
    MEM32(ebp + 0x30) = edi;

loc_0018EB99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    MEM32(edi + 0x10) = eax;
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0018EBA8; /* je: equal / zero */

loc_0018EBA2: ;
    edx = MEM32(edi + 0xC);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) - edx;

loc_0018EBA8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018EBB0
 * Original: 0x0018EBB0 - 0x0018EC0A (90 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EBB0: ;
    MEM32(ebx) = 0;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_0018EC06; /* jb: below (unsigned <) */

loc_0018EBBD: ;
    ecx = ZX8(LO8(eax));
    eax = ZX8(LO8(edx));
    edx = ZX8(MEM8(esi + 1));
    edx = edx + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018EC06; /* jge: greater or equal (signed >=) */

loc_0018EBCD: ;
    eax = eax - ecx;
    edi = eax;
    eax = ZX8(MEM8(esi + edi * 2 + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EC06; /* je: equal / zero */

loc_0018EBDD: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 2));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018EBEAu); RECOMP_ABI_CALL(0x00191580u, sub_00191580); /* call 0x00191580 */

loc_0018EBEA: ;
    edx = MEM32(esp + 0x10);
    MEM32(ebx) = eax;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + edi * 2 + 5));
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    MEM16(edx) = LO16(ecx);
    esp += 4; return; /* ret */

loc_0018EC06: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018EC10
 * Original: 0x0018EC10 - 0x0018EC88 (120 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EC10: ;
    eax = MEM32(0x586EA8);
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(esp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    edi = edi << 6;
    edi = edi + 0x584EA0;
    esi = MEM32(edi + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(0x586EA8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0018EC5F; /* je: equal / zero */

loc_0018EC35: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018EC55; /* jne: not equal / not zero */

loc_0018EC3A: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 8));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018EC47u); RECOMP_ABI_CALL(0x00190C70u, sub_00190C70); /* call 0x00190C70 */

loc_0018EC47: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 8));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018EC52u); RECOMP_ABI_CALL(0x00190DC0u, sub_00190DC0); /* call 0x00190DC0 */

loc_0018EC52: ;
    esp = esp + 0xC;

loc_0018EC55: ;
    MEM8(esi) = 0;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018EC35; /* jne: not equal / not zero */

loc_0018EC5F: ;
    edx = MEM32(0x583A90);
    eax = MEM32(0x586EA8);
    MEM16(edi) = 0;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x586EA0) = ebx;
    MEM32(0x586EA8) = eax;
    MEM32(0x583A90) = edx;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018EC90
 * Original: 0x0018EC90 - 0x0018ED12 (130 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EC90: ;
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(ecx, MEM8(esp + 0xC));
    SET_LO8(edx, MEM8(esp + 0x10));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 8));
    esi = esi << 6;
    esi = esi + 0x584EA0;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esi + 4) = LO8(eax);
    MEM8(esi + 6) = LO8(ecx);
    MEM8(esi + 7) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_0018ED0D; /* je: equal / zero */

loc_0018ECBC: ;
    /* nop */

loc_0018ECC0: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018ED06; /* jne: not equal / not zero */

loc_0018ECC5: ;
    ecx = ZX8(MEM8(esi + 4));
    eax = ZX8(MEM8(edi + 1));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax >> 7;
    edx = ZX8(LO8(eax));
    eax = ZX8(MEM8(esi + 5));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 8));
    edx = edx >> 7;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018ECECu); RECOMP_ABI_CALL(0x00190550u, sub_00190550); /* call 0x00190550 */

loc_0018ECEC: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 7));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 6));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 8));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018ED03u); RECOMP_ABI_CALL(0x001905C0u, sub_001905C0); /* call 0x001905C0 */

loc_0018ED03: ;
    esp = esp + 0x14;

loc_0018ED06: ;
    edi = MEM32(edi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018ECC0; /* jne: not equal / not zero */

loc_0018ED0D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018ED20
 * Original: 0x0018ED20 - 0x0018EF1D (509 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ED20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ED20: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(edi);
    SET_LO8(eax, MEM8(edi + 9));
    MEM8(ebp + 3) = LO8(eax);
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0018ED51; /* je: equal / zero */

loc_0018ED42: ;
    edx = eax;
    SET_LO16(eax, ZX8(MEM8(edi + 8)));
    eax = eax - 0x3C;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    goto loc_0018ED78;

loc_0018ED51: ;
    esi = MEM32(ebp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018EF13; /* je: equal / zero */

loc_0018ED5C: ;
    SET_LO8(edx, MEM8(edi + 8));
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ebx = esp + 0x14;
    PUSH32(esp, 0x0018ED6Du); RECOMP_ABI_CALL(0x0018EBB0u, sub_0018EBB0); /* call 0x0018EBB0 */

loc_0018ED6D: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    esp = esp + 4;

loc_0018ED78: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018EF13; /* je: equal / zero */

loc_0018ED80: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018EEDC; /* je: equal / zero */

loc_0018ED8B: ;
    ecx = MEM32(0x586EA4);
    edi = ecx + ecx * 4;
    ebx = 1;
    _fa = (uint32_t)(MEM8(edi * 4 + 0x583A98)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi * 4 + 0x583A98), LO8(ebx) (8-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0018EDC3; /* je: equal / zero */

loc_0018EDA4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018EDAF; /* jne: not equal / not zero */

loc_0018EDAD: ;
    esi = 0; /* xor self */

loc_0018EDAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EF13; /* je: equal / zero */

loc_0018EDB7: ;
    edi = esi + esi * 4;
    _fa = (uint32_t)(MEM8(edi * 4 + 0x583A98)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi * 4 + 0x583A98), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018EDA4; /* jne: not equal / not zero */

loc_0018EDC3: ;
    edi = esi + esi * 4;
    edi = edi * 4 + 0x583A98;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    MEM8(edi) = LO8(ebx);
    MEM32(edi + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0018EDE1; /* jne: not equal / not zero */

loc_0018EDDF: ;
    esi = 0; /* xor self */

loc_0018EDE1: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 4) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(edi + 1) = LO8(ecx);
    MEM16(edi + 2) = LO16(eax);
    SET_LO16(eax, MEM16(ebp));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    MEM32(0x586EA4) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0018EEC2; /* jne: not equal / not zero */

loc_0018EE05: ;
    ecx = MEM32(0x584E98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018EE18; /* je: equal / zero */

loc_0018EE0F: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018EEC2; /* jne: not equal / not zero */

loc_0018EE18: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018EE23u); RECOMP_ABI_CALL(0x00190770u, sub_00190770); /* call 0x00190770 */

loc_0018EE23: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(edi + 8) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0018EE96; /* je: equal / zero */

loc_0018EE2D: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 2));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018EE3Au); RECOMP_ABI_CALL(0x00190680u, sub_00190680); /* call 0x00190680 */

loc_0018EE3A: ;
    ecx = ZX8(MEM8(edi + 1));
    eax = ZX8(MEM8(ebp + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax >> 7;
    edx = ZX8(LO8(eax));
    eax = ZX8(MEM8(ebp + 5));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 8));
    edx = edx >> 7;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018EE61u); RECOMP_ABI_CALL(0x00190550u, sub_00190550); /* call 0x00190550 */

loc_0018EE61: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 7));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 6));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 8));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018EE78u); RECOMP_ABI_CALL(0x001905C0u, sub_001905C0); /* call 0x001905C0 */

loc_0018EE78: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 8));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018EE83u); RECOMP_ABI_CALL(0x00190480u, sub_00190480); /* call 0x00190480 */

loc_0018EE83: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018EE89u); RECOMP_ABI_CALL(0x0018EB60u, sub_0018EB60); /* call 0x0018EB60 */

loc_0018EE89: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0018EE96: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(edi) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0018EEAE; /* je: equal / zero */

loc_0018EE9D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x586EA4) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0018EEAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x586EA4) = 0xFF;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0018EEC2: ;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(edx, LO8(edx) | 2);
    PUSH32(esp, ebp);
    MEM8(edi) = LO8(edx);
    PUSH32(esp, 0x0018EECFu); RECOMP_ABI_CALL(0x0018EB60u, sub_0018EB60); /* call 0x0018EB60 */

loc_0018EECF: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0018EEDC: ;
    esi = ZX8(MEM8(edi + 9));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 7));
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 6));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(ebp + 4));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    esi = ZX8(MEM8(ebp + 5));
    ecx = ecx >> 7;
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    ecx = ecx >> 7;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018EF10u); RECOMP_ABI_CALL(0x00190BA0u, sub_00190BA0); /* call 0x00190BA0 */

loc_0018EF10: ;
    esp = esp + 0x18;

loc_0018EF13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0018EF20
 * Original: 0x0018EF20 - 0x0018EFA7 (135 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EF20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = ZX8(MEM8(esi + 8));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    if ((_fa != 0)) goto loc_0018EF86; /* jne: not equal / not zero */

loc_0018EF2E: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018EF3A; /* jne: not equal / not zero */

loc_0018EF34: ;
    MEM8(eax + 2) = 0;
    goto loc_0018EF86;

loc_0018EF3A: ;
    edx = MEM32(eax + 0x24);
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x30) = 0;
    SET_LO8(ecx, MEM8(edx));
    SET_LO8(ecx, LO8(ecx) & 7);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018EF56; /* jae: above or equal (unsigned >=) */

loc_0018EF52: ;
    ecx = 0; /* xor self */
    goto loc_0018EF80;

loc_0018EF56: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018EF60; /* jae: above or equal (unsigned >=) */

loc_0018EF5B: ;
    ecx = ZX8(MEM8(edx));
    goto loc_0018EF80;

loc_0018EF60: ;
    ecx = ZX8(MEM8(edx + 3));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(edx + 2));
    ecx = ecx << 8;
    ecx = ecx + edi;
    edi = ZX8(MEM8(edx + 1));
    edx = ZX8(MEM8(edx));
    ecx = ecx << 8;
    ecx = ecx + edi;
    ecx = ecx << 8;
    ecx = ecx + edx;
    POP32(esp, edi);

loc_0018EF80: ;
    ecx = ecx << 0xC;
    MEM32(eax + 0x2C) = ecx;

loc_0018EF86: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018EFA0; /* je: equal / zero */

loc_0018EF8D: ;
    edx = ZX8(MEM8(esi + 9));
    eax = MEM32(eax + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 8));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0018EF9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018EF9D: ;
    esp = esp + 0xC;

loc_0018EFA0: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018EFB0
 * Original: 0x0018EFB0 - 0x0018F017 (103 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EFB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    eax = MEM32(eax + 8);
    ecx = MEM32(edx + 0x24);
    ecx = ecx + eax;
    MEM32(edx + 0x28) = ecx;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(eax, LO8(eax) & 7);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018EFD8; /* jae: above or equal (unsigned >=) */

loc_0018EFCA: ;
    eax = 0; /* xor self */
    eax = eax << 0xC;
    MEM32(edx + 0x2C) = eax;
    eax = 1;
    esp += 4; return; /* ret */

loc_0018EFD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018EFEB; /* jae: above or equal (unsigned >=) */

loc_0018EFDC: ;
    eax = ZX8(MEM8(ecx));
    eax = eax << 0xC;
    MEM32(edx + 0x2C) = eax;
    eax = 1;
    esp += 4; return; /* ret */

loc_0018EFEB: ;
    eax = ZX8(MEM8(ecx + 3));
    eax = eax << 8;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 2));
    eax = eax + esi;
    esi = ZX8(MEM8(ecx + 1));
    ecx = ZX8(MEM8(ecx));
    eax = eax << 8;
    eax = eax + esi;
    eax = eax << 8;
    eax = eax + ecx;
    eax = eax << 0xC;
    MEM32(edx + 0x2C) = eax;
    POP32(esp, esi);
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0018F020
 * Original: 0x0018F020 - 0x0018F057 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F020: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, esi);
    MEM8(esp + 8) = LO8(ebx);
    esi = 0x584EA0;
    edi = edi;

loc_0018F030: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018F043; /* je: equal / zero */

loc_0018F036: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018F040u); RECOMP_ABI_CALL(0x0018EC10u, sub_0018EC10); /* call 0x0018EC10 */

loc_0018F040: ;
    esp = esp + 4;

loc_0018F043: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0x40;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x80 (8-bit) */
    MEM8(esp + 8) = LO8(ebx);
    if (CMP_B(_fa, _fb)) goto loc_0018F030; /* jb: below (unsigned <) */

loc_0018F051: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F060
 * Original: 0x0018F060 - 0x0018F17E (286 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F060: ;
    eax = MEM32(0x586EA8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esp + 0xC));
    edi = edi << 6;
    edi = edi + 0x584EA0;
    esi = MEM32(edi + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x586EA8) = eax;
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 2), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F145; /* je: equal / zero */

loc_0018F088: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018F0BA; /* je: equal / zero */

loc_0018F08C: ;
    /* nop */

loc_0018F090: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018F0B0; /* jne: not equal / not zero */

loc_0018F095: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 8));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018F0A2u); RECOMP_ABI_CALL(0x00190C70u, sub_00190C70); /* call 0x00190C70 */

loc_0018F0A2: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 8));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018F0ADu); RECOMP_ABI_CALL(0x00190DC0u, sub_00190DC0); /* call 0x00190DC0 */

loc_0018F0AD: ;
    esp = esp + 0xC;

loc_0018F0B0: ;
    MEM8(esi) = 0;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018F090; /* jne: not equal / not zero */

loc_0018F0BA: ;
    ecx = MEM32(edi + 0x24);
    MEM32(edi + 0x28) = ecx;
    MEM32(edi + 0x30) = 0;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(eax, LO8(eax) & 7);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018F0EC; /* jae: above or equal (unsigned >=) */

loc_0018F0D0: ;
    eax = 0; /* xor self */
    eax = eax << 0xC;
    MEM32(edi + 0x2C) = eax;
    eax = MEM32(0x586EA8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edi + 2) = 1;
    POP32(esp, edi);
    MEM32(0x586EA8) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018F0EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018F10D; /* jae: above or equal (unsigned >=) */

loc_0018F0F0: ;
    eax = ZX8(MEM8(ecx));
    eax = eax << 0xC;
    MEM32(edi + 0x2C) = eax;
    eax = MEM32(0x586EA8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edi + 2) = 1;
    POP32(esp, edi);
    MEM32(0x586EA8) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018F10D: ;
    eax = ZX8(MEM8(ecx + 3));
    edx = ZX8(MEM8(ecx + 2));
    eax = eax << 8;
    eax = eax + edx;
    edx = ZX8(MEM8(ecx + 1));
    ecx = ZX8(MEM8(ecx));
    eax = eax << 8;
    eax = eax + edx;
    eax = eax << 8;
    eax = eax + ecx;
    eax = eax << 0xC;
    MEM32(edi + 0x2C) = eax;
    eax = MEM32(0x586EA8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edi + 2) = 1;
    POP32(esp, edi);
    MEM32(0x586EA8) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018F145: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018F16A; /* je: equal / zero */

loc_0018F149: ;
    /* nop */

loc_0018F150: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018F163; /* jne: not equal / not zero */

loc_0018F155: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 8));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018F160u); RECOMP_ABI_CALL(0x00190480u, sub_00190480); /* call 0x00190480 */

loc_0018F160: ;
    esp = esp + 4;

loc_0018F163: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018F150; /* jne: not equal / not zero */

loc_0018F16A: ;
    eax = MEM32(0x586EA8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edi + 2) = 1;
    POP32(esp, edi);
    MEM32(0x586EA8) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F180
 * Original: 0x0018F180 - 0x0018F1DA (90 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F180: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018F18Eu); RECOMP_ABI_CALL(0x0018E8F0u, sub_0018E8F0); /* call 0x0018E8F0 */

loc_0018F18E: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(esp + 4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0018F1D2; /* je: equal / zero */

loc_0018F199: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018F1B2u); RECOMP_ABI_CALL(0x0018EC90u, sub_0018EC90); /* call 0x0018EC90 */

loc_0018F1B2: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018F1C9; /* jne: not equal / not zero */

loc_0018F1B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018F1BFu); RECOMP_ABI_CALL(0x0018F060u, sub_0018F060); /* call 0x0018F060 */

loc_0018F1BF: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018F1C9; /* jne: not equal / not zero */

loc_0018F1C6: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018F1C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018F1CFu); RECOMP_ABI_CALL(0x0018EC10u, sub_0018EC10); /* call 0x0018EC10 */

loc_0018F1CF: ;
    esp = esp + 4;

loc_0018F1D2: ;
    eax = 0xFF;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F1E0
 * Original: 0x0018F1E0 - 0x0018F3F9 (537 bytes, 173 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F1E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F1E0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    MEM32(esi + 0xC) = ebp;
    MEM32(esi) = edi;
    ecx = MEM32(edi + 0x28);
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, LO8(eax) & 7);
    eax = ZX8(LO8(eax));
    SET_LO8(ebx, LO8(ebx) & 0xF8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM8(esp + 0xA) = 0;
    if (CMP_A(_fa, _fb)) goto loc_0018F2AB; /* ja: above (unsigned >) */

loc_0018F20A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x18F3FC); /* switch: 19 entries, 19 targets */
    if (_jt == 0x0018F211u) goto loc_0018F211;
    if (_jt == 0x0018F219u) goto loc_0018F219;
    if (_jt == 0x0018F222u) goto loc_0018F222;
    if (_jt == 0x0018F248u) goto loc_0018F248;
    if (_jt == 0x0018F24Eu) goto loc_0018F24E;
    if (_jt == 0x0018F25Au) goto loc_0018F25A;
    if (_jt == 0x0018F27Eu) goto loc_0018F27E;
    if (_jt == 0x0018F286u) goto loc_0018F286;
    if (_jt == 0x0018F2F2u) goto loc_0018F2F2;
    if (_jt == 0x0018F2F7u) goto loc_0018F2F7;
    if (_jt == 0x0018F2FCu) goto loc_0018F2FC;
    if (_jt == 0x0018F301u) goto loc_0018F301;
    if (_jt == 0x0018F351u) goto loc_0018F351;
    if (_jt == 0x0018F35Au) goto loc_0018F35A;
    if (_jt == 0x0018F375u) goto loc_0018F375;
    if (_jt == 0x0018F396u) goto loc_0018F396;
    if (_jt == 0x0018F3B2u) goto loc_0018F3B2;
    if (_jt == 0x0018F3E1u) goto loc_0018F3E1;
    if (_jt == 0x0018F3E3u) goto loc_0018F3E3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018F211: ;
    MEM32(esi + 4) = ebp;
    goto loc_0018F2AB;

loc_0018F219: ;
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0018F2A8;

loc_0018F222: ;
    edx = ZX8(MEM8(ecx + 3));
    eax = ZX8(MEM8(ecx + 2));
    edx = edx << 8;
    edx = edx + eax;
    eax = ZX8(MEM8(ecx + 1));
    edx = edx << 8;
    edx = edx + eax;
    eax = ZX8(MEM8(ecx));
    edx = edx << 8;
    edx = edx + eax;
    MEM32(esi + 4) = edx;
    ecx = ecx + 4;
    goto loc_0018F2AB;

loc_0018F248: ;
    MEM32(esi + 4) = ebp;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0018F2AB;

loc_0018F24E: ;
    edx = ZX8(MEM8(ecx + 1));
    MEM32(esi + 4) = edx;
    ecx = ecx + 2;
    goto loc_0018F2AB;

loc_0018F25A: ;
    eax = ZX8(MEM8(ecx + 4));
    edx = ZX8(MEM8(ecx + 3));
    eax = eax << 8;
    eax = eax + edx;
    edx = ZX8(MEM8(ecx + 2));
    eax = eax << 8;
    eax = eax + edx;
    edx = ZX8(MEM8(ecx + 1));
    eax = eax << 8;
    eax = eax + edx;
    ecx = ecx + 5;
    goto loc_0018F2A8;

loc_0018F27E: ;
    MEM32(esi + 4) = ebp;
    ecx = ecx + 4;
    goto loc_0018F2AB;

loc_0018F286: ;
    eax = ZX8(MEM8(ecx + 7));
    edx = ZX8(MEM8(ecx + 6));
    eax = eax << 8;
    eax = eax + edx;
    edx = ZX8(MEM8(ecx + 5));
    eax = eax << 8;
    eax = eax + edx;
    edx = ZX8(MEM8(ecx + 4));
    eax = eax << 8;
    eax = eax + edx;
    ecx = ecx + 8;

loc_0018F2A8: ;
    MEM32(esi + 4) = eax;

loc_0018F2AB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xF8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xF8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F326; /* jne: not equal / not zero */

loc_0018F2B0: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0xB) = LO8(eax);
    MEM32(esp + 0x10) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esp + 0xC;
    ebp = 4;
    /* nop */

loc_0018F2D0: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esp + 0xB));
    edx = edx & 2;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0018F30E; /* je: equal / zero */

loc_0018F2DC: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0018F306; /* je: equal / zero */

loc_0018F2DF: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018F313; /* jne: not equal / not zero */

loc_0018F2E2: ;
    edx = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0018F313; /* ja: above (unsigned >) */

loc_0018F2EB: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x18F41C); /* switch: 11 entries, 11 targets */
    if (_jt == 0x0018F2F2u) goto loc_0018F2F2;
    if (_jt == 0x0018F2F7u) goto loc_0018F2F7;
    if (_jt == 0x0018F2FCu) goto loc_0018F2FC;
    if (_jt == 0x0018F301u) goto loc_0018F301;
    if (_jt == 0x0018F351u) goto loc_0018F351;
    if (_jt == 0x0018F35Au) goto loc_0018F35A;
    if (_jt == 0x0018F375u) goto loc_0018F375;
    if (_jt == 0x0018F396u) goto loc_0018F396;
    if (_jt == 0x0018F3B2u) goto loc_0018F3B2;
    if (_jt == 0x0018F3E1u) goto loc_0018F3E1;
    if (_jt == 0x0018F3E3u) goto loc_0018F3E3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018F2F2: ;
    SET_LO8(edx, MEM8(edi + 0xC));
    goto loc_0018F311;

loc_0018F2F7: ;
    SET_LO8(edx, MEM8(edi + 0x10));
    goto loc_0018F311;

loc_0018F2FC: ;
    SET_LO8(edx, MEM8(edi + 0x14));
    goto loc_0018F311;

loc_0018F301: ;
    SET_LO8(edx, MEM8(edi + 0x18));
    goto loc_0018F311;

loc_0018F306: ;
    SET_LO8(edx, MEM8(ecx + 3));
    ecx = ecx + 3;
    goto loc_0018F311;

loc_0018F30E: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0018F311: ;
    MEM8(eax) = LO8(edx);

loc_0018F313: ;
    SET_LO8(edx, MEM8(esp + 0xB));
    SET_LO8(edx, LO8(edx) >> 2);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + 0xB) = LO8(edx);
    if ((_fa != 0)) goto loc_0018F2D0; /* jne: not equal / not zero */

loc_0018F322: ;
    ebp = 0; /* xor self */
    goto loc_0018F332;

loc_0018F326: ;
    SET_LO16(eax, MEM16(ecx));
    MEM32(esp + 0x10) = ebp;
    MEM16(esp + 0xC) = LO16(eax);

loc_0018F332: ;
    edx = ZX8(LO8(ebx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    eax = 1;
    if (CMP_A(_fa, _fb)) goto loc_0018F3E1; /* ja: above (unsigned >) */

loc_0018F343: ;
    edx = ZX8(MEM8(edx + 0x18F448));
    { uint32_t _jt = MEM32(edx * 4 + 0x18F42C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0018F351u) goto loc_0018F351;
    if (_jt == 0x0018F35Au) goto loc_0018F35A;
    if (_jt == 0x0018F375u) goto loc_0018F375;
    if (_jt == 0x0018F396u) goto loc_0018F396;
    if (_jt == 0x0018F3B2u) goto loc_0018F3B2;
    if (_jt == 0x0018F3E1u) goto loc_0018F3E1;
    if (_jt == 0x0018F3E3u) goto loc_0018F3E3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018F351: ;
    MEM32(esi + 0xC) = 0x18ED20;
    goto loc_0018F37C;

loc_0018F35A: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM32(esi + 0xC) = 0x18ED20;
    MEM8(esi + 8) = LO8(edx);
    SET_LO8(edx, MEM8(edi + 3));
    MEM8(esi + 9) = LO8(edx);
    MEM8(esp + 0xA) = 1;
    goto loc_0018F3E3;

loc_0018F375: ;
    MEM32(esi + 0xC) = 0x18EA30;

loc_0018F37C: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(esi + 8) = LO8(edx);
    SET_LO16(edx, MEM16(esp + 0xC));
    SET_LO16(edx, LO16(edx) >> 8);
    MEM8(esi + 9) = LO8(edx);
    MEM8(esp + 0xA) = 2;
    goto loc_0018F3E3;

loc_0018F396: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(esi + 8) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xD));
    MEM32(esi + 0xC) = 0x18EF20;
    MEM8(esi + 9) = LO8(edx);
    MEM8(esp + 0xA) = 2;
    goto loc_0018F3E3;

loc_0018F3B2: ;
    MEM32(esi + 0xC) = 0x18EFB0;
    edx = ZX8(MEM8(ecx + 3));
    ebx = ZX8(MEM8(ecx + 2));
    edx = edx << 8;
    edx = edx + ebx;
    ebx = ZX8(MEM8(ecx + 1));
    edx = edx << 8;
    edx = edx + ebx;
    ebx = ZX8(MEM8(ecx));
    edx = edx << 8;
    edx = edx + ebx;
    MEM32(esi + 8) = edx;
    MEM8(esp + 0xA) = 4;
    goto loc_0018F3E3;

loc_0018F3E1: ;
    eax = 0; /* xor self */

loc_0018F3E3: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebp (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0018F3F2; /* jne: not equal / not zero */

loc_0018F3EB: ;
    edx = ZX8(MEM8(esp + 2));
    ecx = ecx + edx;

loc_0018F3F2: ;
    MEM32(edi + 0x28) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0018F490
 * Original: 0x0018F490 - 0x0018F5FF (367 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F490(void)
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

loc_0018F490: ;
    eax = MEM32(0x586EA8);
    esp = esp - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018F5F9; /* jne: not equal / not zero */

loc_0018F4A0: ;
    eax = MEM32(0x583A90);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = eax;
    MEM8(esp + 8) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0018F5F8; /* je: equal / zero */

loc_0018F4B8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0018F4C0;

    /* nop */

loc_0018F4C0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x80 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018F5F5; /* jae: above or equal (unsigned >=) */

loc_0018F4C9: ;
    edi = ZX8(LO8(ebx));
    edi = edi << 6;
    _fa = (uint32_t)(MEM8(edi + 0x584EA1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x584EA1), 0x80 (8-bit) */
    edi = edi + 0x584EA0;
    if (TEST_Z(_fa, _fb)) goto loc_0018F5E3; /* je: equal / zero */

loc_0018F4E2: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018F4EC; /* je: equal / zero */

loc_0018F4E9: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) - 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0018F4EC: ;
    esi = MEM32(edi + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018F524; /* je: equal / zero */

loc_0018F4F3: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018F524; /* jne: not equal / not zero */

loc_0018F4FA: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018F51A; /* jne: not equal / not zero */

loc_0018F4FF: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 8));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018F50Cu); RECOMP_ABI_CALL(0x00190C70u, sub_00190C70); /* call 0x00190C70 */

loc_0018F50C: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018F517u); RECOMP_ABI_CALL(0x00190DC0u, sub_00190DC0); /* call 0x00190DC0 */

loc_0018F517: ;
    esp = esp + 0xC;

loc_0018F51A: ;
    MEM8(esi) = 0;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018F4F3; /* jne: not equal / not zero */

loc_0018F524: ;
    eax = ZX8(MEM8(edi + 2));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x30) = esi;
    if ((_fa == 0)) goto loc_0018F538; /* je: equal / zero */

loc_0018F52E: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 1), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018F5DF; /* je: equal / zero */

loc_0018F538: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CEA68); /* fmul dword ptr [0x3cea68] */
    PUSH32(esp, 0x0018F547u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018F547: ;
    ebp = eax;
    eax = MEM32(edi + 0x2C);
    ebp = ebp << 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018F5DA; /* jb: below (unsigned <) */

loc_0018F557: ;
    edx = MEM32(edi + 0x2C);
    esi = esp + 0x18;
    ebp = ebp - edx;
    PUSH32(esp, 0x0018F565u); RECOMP_ABI_CALL(0x0018F1E0u, sub_0018F1E0); /* call 0x0018F1E0 */

loc_0018F565: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018F575; /* je: equal / zero */

loc_0018F56D: ;
    edx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0018F572u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018F572: ;
    esp = esp + 4;

loc_0018F575: ;
    eax = ZX8(MEM8(edi + 2));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0018F582; /* je: equal / zero */

loc_0018F57C: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 1), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018F5C5; /* je: equal / zero */

loc_0018F582: ;
    ecx = MEM32(edi + 0x28);
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(eax, LO8(eax) & 7);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018F592; /* jae: above or equal (unsigned >=) */

loc_0018F58E: ;
    eax = 0; /* xor self */
    goto loc_0018F5B9;

loc_0018F592: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018F59B; /* jae: above or equal (unsigned >=) */

loc_0018F596: ;
    eax = ZX8(MEM8(ecx));
    goto loc_0018F5B9;

loc_0018F59B: ;
    eax = ZX8(MEM8(ecx + 3));
    edx = ZX8(MEM8(ecx + 2));
    eax = eax << 8;
    eax = eax + edx;
    edx = ZX8(MEM8(ecx + 1));
    ecx = ZX8(MEM8(ecx));
    eax = eax << 8;
    eax = eax + edx;
    eax = eax << 8;
    eax = eax + ecx;

loc_0018F5B9: ;
    eax = eax << 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(edi + 0x2C) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0018F557; /* jae: above or equal (unsigned >=) */

loc_0018F5C3: ;
    goto loc_0018F5D7;

loc_0018F5C5: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018F5D7; /* je: equal / zero */

loc_0018F5CA: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018F5D4u); RECOMP_ABI_CALL(0x0018EC10u, sub_0018EC10); /* call 0x0018EC10 */

loc_0018F5D4: ;
    esp = esp + 4;

loc_0018F5D7: ;
    eax = MEM32(edi + 0x2C);

loc_0018F5DA: ;
    eax = eax - ebp;
    MEM32(edi + 0x2C) = eax;

loc_0018F5DF: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0018F5E3: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x14) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0018F4C0; /* jne: not equal / not zero */

loc_0018F5F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0018F5F8: ;
    POP32(esp, ebx);

loc_0018F5F9: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018F600
 * Original: 0x0018F600 - 0x0018F68A (138 bytes, 33 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0018F600(void)
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

loc_0018F600: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    goto loc_0018F610;

    /* nop */
    /* nop */

loc_0018F610: ;
    MEM16(eax + 0x586EC0) = LO16(ecx);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018F610; /* jb: below (unsigned <) */

loc_0018F621: ;
    eax = MEM32(esp + 8);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018F633; /* jge: greater or equal (signed >=) */

loc_0018F62D: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018F633: ;
    eax = MEM32(esp + 4);
    fp_top() = fp_top() * MEMF(0x3C832C); /* fmul dword ptr [0x3c832c] */
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEMF(0x589EC8) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = eax;
    MEM32(0x589EC0) = eax;
    MEM32(0x589ED0) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018F665; /* jge: greater or equal (signed >=) */

loc_0018F65F: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018F665: ;
    fp_top() = MEMF(0x3C94A4) / fp_top(); /* fdivr dword ptr [0x3c94a4] */
    MEM32(0x589ED4) = ecx;
    MEM32(0x589ECC) = ecx;
    MEM32(0x589EC4) = 1;
    eax = 0; /* xor self */
    MEMF(0x589EEC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018F690
 * Original: 0x0018F690 - 0x0018F6CA (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F690: ;
    eax = ZX16(MEM16(esp + 4));
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    esi = esi << 4;
    esi = esi + 0x586EC0;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F6B8; /* je: equal / zero */

loc_0018F6AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018F6B1u); RECOMP_ABI_CALL(0x00190DC0u, sub_00190DC0); /* call 0x00190DC0 */

loc_0018F6B1: ;
    esp = esp + 4;
    MEM8(esi + 2) = 0xFF;

loc_0018F6B8: ;
    eax = MEM32(0x589EF0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi) = 0;
    MEM32(0x589EF0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F6D0
 * Original: 0x0018F6D0 - 0x0018F6E8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0018F6D0(void)
{

loc_0018F6D0: ;
    eax = ZX16(MEM16(esp + 4));
    SET_LO8(ecx, MEM8(esp + 8));
    eax = eax + eax * 2;
    eax = eax << 4;
    MEM8(eax + 0x586EE9) = LO8(ecx);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0018F6F0
 * Original: 0x0018F6F0 - 0x0018FA88 (920 bytes, 285 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018F6F0(void)
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

loc_0018F6F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    eax = MEM32(0x589EC4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0018F710; /* jne: not equal / not zero */

loc_0018F707: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018F710: ;
    eax = MEM32(0x589EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0018FA77; /* je: equal / zero */

loc_0018F725: ;
    esi = 0x586EC4;
    MEM32(esp + 0x18) = ebx;
    edi = edi;

loc_0018F730: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0x3000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018FA77; /* jae: above or equal (unsigned >=) */

loc_0018F73E: ;
    _fa = (uint32_t)(MEM8(esi + -3)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -3), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018FA5B; /* je: equal / zero */

loc_0018F748: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + -2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F772; /* je: equal / zero */

loc_0018F751: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F757u); RECOMP_ABI_CALL(0x00190710u, sub_00190710); /* call 0x00190710 */

loc_0018F757: ;
    ecx = MEM32(esi);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F772; /* je: equal / zero */

loc_0018F760: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + -2));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F76Bu); RECOMP_ABI_CALL(0x00190DC0u, sub_00190DC0); /* call 0x00190DC0 */

loc_0018F76B: ;
    esp = esp + 4;
    MEM8(esi + -2) = 0xFF;

loc_0018F772: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F82A; /* je: equal / zero */

loc_0018F77C: ;
    SET_LO8(eax, MEM8(edi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F7A8; /* je: equal / zero */

loc_0018F783: ;
    _fa = (uint32_t)(MEM8(esi + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018F7A8; /* je: equal / zero */

loc_0018F789: ;
    ecx = ZX8(LO8(eax));
    fp_push(MEMF(ecx * 4 + 0x3E0798)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3E09A0); /* fmul dword ptr [0x3e09a0] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F79Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018F79E: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    goto loc_0018F82F;

loc_0018F7A8: ;
    _fa = (uint32_t)(MEM8(esi + -2)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -2), 0xFF (8-bit) */
    MEM8(esi + 0x24) = 0x7F;
    MEM8(esi + 0x26) = 0;
    MEM8(esi + 0x27) = 0;
    MEM16(esi + 0x20) = LO16(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0018F7E6; /* jne: not equal / not zero */

loc_0018F7BE: ;
    PUSH32(esp, 0xFE);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F7C9u); RECOMP_ABI_CALL(0x00190770u, sub_00190770); /* call 0x00190770 */

loc_0018F7C9: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(esi + -2) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0018F7DE; /* je: equal / zero */

loc_0018F7D3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F7D9u); RECOMP_ABI_CALL(0x00190480u, sub_00190480); /* call 0x00190480 */

loc_0018F7D9: ;
    esp = esp + 4;
    goto loc_0018F7E6;

loc_0018F7DE: ;
    MEM32(esp + 0x20) = 2;

loc_0018F7E6: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + -2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018FA5B; /* je: equal / zero */

loc_0018F7F3: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x25));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F7FFu); RECOMP_ABI_CALL(0x00190550u, sub_00190550); /* call 0x00190550 */

loc_0018F7FF: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x26));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + -2));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F810u); RECOMP_ABI_CALL(0x00190660u, sub_00190660); /* call 0x00190660 */

loc_0018F810: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x22));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + -2));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F822u); RECOMP_ABI_CALL(0x00190680u, sub_00190680); /* call 0x00190680 */

loc_0018F822: ;
    esp = esp + 0x18;
    goto loc_0018FA5B;

loc_0018F82A: ;
    ebx = 0xB4FC9;

loc_0018F82F: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(0x5DCF80); /* fsub dword ptr [0x5dcf80] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(0x5DCF84); /* fsub dword ptr [0x5dcf84] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(0x5DCF88); /* fsub dword ptr [0x5dcf88] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F87Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018F87B: ;
    fp_pop(); /* fstp st(0) */
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x589ED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x589ED0) (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0018FA1F; /* jae: above or equal (unsigned >=) */

loc_0018F88F: ;
    _fa = (uint32_t)(MEM8(esi + -2)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -2), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F8B7; /* jne: not equal / not zero */

loc_0018F895: ;
    PUSH32(esp, 0xFE);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F8A0u); RECOMP_ABI_CALL(0x00190770u, sub_00190770); /* call 0x00190770 */

loc_0018F8A0: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(esi + -2) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0018F8C1; /* je: equal / zero */

loc_0018F8AA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F8B0u); RECOMP_ABI_CALL(0x00190480u, sub_00190480); /* call 0x00190480 */

loc_0018F8B0: ;
    ecx = MEM32(esp + 0x18);
    esp = esp + 4;

loc_0018F8B7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018F8CE; /* jae: above or equal (unsigned >=) */

loc_0018F8BB: ;
    MEM8(esi + 0x24) = 0x7F;
    goto loc_0018F908;

loc_0018F8C1: ;
    MEM32(esp + 0x20) = 2;
    goto loc_0018FA5B;

loc_0018F8CE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x2C) = ebx;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018F8E0; /* jge: greater or equal (signed >=) */

loc_0018F8DA: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018F8E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018F8F2; /* jge: greater or equal (signed >=) */

loc_0018F8EC: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018F8F2: ;
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = fp_top() * MEMD(0x3E0998); /* fmul qword ptr [0x3e0998] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F901u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018F901: ;
    ecx = MEM32(esp + 0x14);
    MEM8(esi + 0x24) = LO8(eax);

loc_0018F908: ;
    SET_LO8(ebx, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018F92A; /* jne: not equal / not zero */

loc_0018F90F: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + -2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F92A; /* je: equal / zero */

loc_0018F918: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F91Eu); RECOMP_ABI_CALL(0x00190DC0u, sub_00190DC0); /* call 0x00190DC0 */

loc_0018F91E: ;
    esp = esp + 4;
    MEM8(esi + -2) = 0xFF;
    goto loc_0018FA5B;

loc_0018F92A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018F93C; /* jge: greater or equal (signed >=) */

loc_0018F936: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018F93C: ;
    fp_top() = fp_top() * MEMF(0x3DD250); /* fmul dword ptr [0x3dd250] */
    ecx = MEM32(0x589ED0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    fp_push((double)SMEM32(0x589ED0)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018F958; /* jge: greater or equal (signed >=) */

loc_0018F952: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018F958: ;
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F95Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018F95F: ;
    SET_LO8(ecx, 0x7F);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018F96A; /* jbe: below or equal (unsigned <=) */

loc_0018F967: ;
    MEM8(esi + 0x24) = LO8(ecx);

loc_0018F96A: ;
    edx = ZX8(MEM8(esi + 0x25));
    eax = ZX8(MEM8(esi + 0x24));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + -2));
    edx = edx >> 7;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F984u); RECOMP_ABI_CALL(0x00190550u, sub_00190550); /* call 0x00190550 */

loc_0018F984: ;
    fp_push(MEMF(0x5DCF94)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    esp = esp + 8;
    fp_push(MEMF(0x5DCF90)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() * MEMD(0x3E0998); /* fmul qword ptr [0x3e0998] */
    fp_top() = fp_top() / MEMF(esp + 0x28); /* fdiv dword ptr [esp + 0x28] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F9BEu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018F9BE: ;
    fp_push(MEMF(0x5DCFA4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    SET_LO8(ebx, LO8(eax));
    fp_push(MEMF(0x5DCFA0)); /* fld float */
    MEM8(esi + 0x26) = LO8(ebx);
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() * MEMD(0x3E0998); /* fmul qword ptr [0x3e0998] */
    fp_top() = fp_top() / MEMF(esp + 0x28); /* fdiv dword ptr [esp + 0x28] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F9EEu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018F9EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0x27) = LO8(eax);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FA08; /* jge: greater or equal (signed >=) */

loc_0018F9F5: ;
    eax = SX8(LO8(eax));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF81u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF81u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018FA05; /* jg: greater (signed >) */

loc_0018FA00: ;
    eax = 0xFFFFFF81u;

loc_0018FA05: ;
    MEM8(esi + 0x27) = LO8(eax);

loc_0018FA08: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x27));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + -2));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FA1Au); RECOMP_ABI_CALL(0x001905C0u, sub_001905C0); /* call 0x001905C0 */

loc_0018FA1A: ;
    esp = esp + 0xC;
    goto loc_0018FA39;

loc_0018FA1F: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + -2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(esi + 0x24) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0018FA3D; /* je: equal / zero */

loc_0018FA2C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FA32u); RECOMP_ABI_CALL(0x00190DC0u, sub_00190DC0); /* call 0x00190DC0 */

loc_0018FA32: ;
    esp = esp + 4;
    MEM8(esi + -2) = 0xFF;

loc_0018FA39: ;
    ecx = MEM32(esp + 0x14);

loc_0018FA3D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FA4F; /* jge: greater or equal (signed >=) */

loc_0018FA49: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018FA4F: ;
    eax = MEM32(esp + 0x1C);
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;

loc_0018FA5B: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    edx = edx + 0x30;
    ebx = 0; /* xor self */
    esi = esi + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0018F730; /* jne: not equal / not zero */

loc_0018FA77: ;
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x589ECC) = ebx;
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
 * sub_0018F963
 * Original: 0x0018F963 - 0x0018FA88 (293 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F963(void)
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

loc_0018F963: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018F96A; /* jbe: below or equal (unsigned <=) */

loc_0018F967: ;
    MEM8(esi + 0x24) = LO8(ecx);

loc_0018F96A: ;
    edx = ZX8(MEM8(esi + 0x25));
    eax = ZX8(MEM8(esi + 0x24));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + -2));
    edx = edx >> 7;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018F984u); RECOMP_ABI_CALL(0x00190550u, sub_00190550); /* call 0x00190550 */

loc_0018F984: ;
    fp_push(MEMF(0x5DCF94)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    esp = esp + 8;
    fp_push(MEMF(0x5DCF90)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() * MEMD(0x3E0998); /* fmul qword ptr [0x3e0998] */
    fp_top() = fp_top() / MEMF(esp + 0x28); /* fdiv dword ptr [esp + 0x28] */
    PUSH32(esp, 0x0018F9BEu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018F9BE: ;
    fp_push(MEMF(0x5DCFA4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    SET_LO8(ebx, LO8(eax));
    fp_push(MEMF(0x5DCFA0)); /* fld float */
    MEM8(esi + 0x26) = LO8(ebx);
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() * MEMD(0x3E0998); /* fmul qword ptr [0x3e0998] */
    fp_top() = fp_top() / MEMF(esp + 0x28); /* fdiv dword ptr [esp + 0x28] */
    PUSH32(esp, 0x0018F9EEu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018F9EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0x27) = LO8(eax);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FA08; /* jge: greater or equal (signed >=) */

loc_0018F9F5: ;
    eax = SX8(LO8(eax));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF81u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF81u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018FA05; /* jg: greater (signed >) */

loc_0018FA00: ;
    eax = 0xFFFFFF81u;

loc_0018FA05: ;
    MEM8(esi + 0x27) = LO8(eax);

loc_0018FA08: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x27));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + -2));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018FA1Au); RECOMP_ABI_CALL(0x001905C0u, sub_001905C0); /* call 0x001905C0 */

loc_0018FA1A: ;
    esp = esp + 0xC;
    goto loc_0018FA39;

    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + -2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(esi + 0x24) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0018FA3D; /* je: equal / zero */

loc_0018FA2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018FA32u); RECOMP_ABI_CALL(0x00190DC0u, sub_00190DC0); /* call 0x00190DC0 */

loc_0018FA32: ;
    esp = esp + 4;
    MEM8(esi + -2) = 0xFF;

loc_0018FA39: ;
    ecx = MEM32(esp + 0x14);

loc_0018FA3D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FA4F; /* jge: greater or equal (signed >=) */

loc_0018FA49: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018FA4F: ;
    eax = MEM32(esp + 0x1C);
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    edx = edx + 0x30;
    ebx = 0; /* xor self */
    esi = esi + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0018F730(); return; } /* jne: not equal / not zero */

loc_0018FA77: ;
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x589ECC) = ebx;
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
 * sub_0018FA90
 * Original: 0x0018FA90 - 0x0018FB04 (116 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018FA90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FA90: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebp = 0; /* xor self */

loc_0018FA97: ;
    _fa = (uint32_t)(MEM8(ebp + 0x586EC1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x586EC1), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018FAE3; /* je: equal / zero */

loc_0018FAA0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E09A4);
    PUSH32(esp, 0x0018FAABu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0018FAAB: ;
    eax = ZX16(LO16(edi));
    esi = eax + eax * 2;
    esi = esi << 4;
    esi = esi + 0x586EC0;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 2));
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018FAD3; /* je: equal / zero */

loc_0018FAC6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018FACCu); RECOMP_ABI_CALL(0x00190DC0u, sub_00190DC0); /* call 0x00190DC0 */

loc_0018FACC: ;
    esp = esp + 4;
    MEM8(esi + 2) = 0xFF;

loc_0018FAD3: ;
    eax = MEM32(0x589EF0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi) = 0;
    MEM32(0x589EF0) = eax;

loc_0018FAE3: ;
    ebp = ebp + 0x30;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018FA97; /* jb: below (unsigned <) */

loc_0018FAEF: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    MEM32(0x589EE8) = eax;
    MEM32(0x589EF0) = eax;
    MEM32(0x589ED4) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018FB10
 * Original: 0x0018FB10 - 0x0018FC73 (355 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FB10(void)
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

loc_0018FB10: ;
    eax = MEM32(0x589EE8);
    edx = eax + eax * 2;
    esp = esp - 8;
    edx = edx << 4;
    ecx = 0x8000;
    _fa = (uint32_t)(MEM16(edx + 0x586EC0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(edx + 0x586EC0), LO16(ecx) (16-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0018FB52; /* je: equal / zero */

loc_0018FB2F: ;
    /* nop */

loc_0018FB30: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018FB3B; /* jne: not equal / not zero */

loc_0018FB39: ;
    edi = 0; /* xor self */

loc_0018FB3B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018FC6A; /* je: equal / zero */

loc_0018FB43: ;
    edx = edi + edi * 2;
    edx = edx << 4;
    _fa = (uint32_t)(MEM16(edx + 0x586EC0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(edx + 0x586EC0), LO16(ecx) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0018FB30; /* jne: not equal / not zero */

loc_0018FB52: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + edi * 2;
    esi = esi << 4;
    eax = edi + 1;
    esi = esi + 0x586EC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    MEM16(esi) = LO16(ecx);
    MEM32(0x589EE8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0018FB7C; /* jne: not equal / not zero */

loc_0018FB72: ;
    MEM32(0x589EE8) = 0;

loc_0018FB7C: ;
    ecx = MEM32(0x589EF0);
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(0x589EF0) = ecx;
    MEM8(esi + 2) = 0xFF;
    MEM32(esi + 4) = eax;
    MEM8(esi + 0x29) = 0x7F;
    MEM16(esi + 0x26) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0018FC1C; /* je: equal / zero */

loc_0018FBA6: ;
    fp_push(MEMF(ebx)); /* fld float */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018FBAEu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018FBAE: ;
    fp_push(MEMF(ebx + 4)); /* fld float */
    ebp = eax;
    PUSH32(esp, 0x0018FBB8u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018FBB8: ;
    fp_push(MEMF(ebx + 8)); /* fld float */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0018FBC4u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018FBC4: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FBDB; /* jge: greater or equal (signed >=) */

loc_0018FBD5: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018FBDB: ;
    eax = MEM32(esp + 0x10);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FBF6; /* jge: greater or equal (signed >=) */

loc_0018FBF0: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018FBF6: ;
    eax = ebp;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FC0F; /* jge: greater or equal (signed >=) */

loc_0018FC09: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018FC0F: ;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    ecx = 0xBF800000u;
    POP32(esp, ebp);
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0018FC24;

loc_0018FC1C: ;
    ecx = 0xBF800000u;
    MEM32(esi + 0x20) = ecx;

loc_0018FC24: ;
    eax = ZX16(LO16(edi));
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = eax + 0x586EC0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018FC54; /* je: equal / zero */

loc_0018FC36: ;
    ecx = MEM32(ebx);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ebx + 8);
    MEM8(eax) = MEM8(eax) | 1;
    POP32(esp, esi);
    MEM32(eax + 0x18) = ecx;
    POP32(esp, ebx);
    SET_LO16(eax, LO16(edi));
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0018FC54: ;
    MEM8(eax) = MEM8(eax) & 0xFE;
    POP32(esp, esi);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    POP32(esp, ebx);
    SET_LO16(eax, LO16(edi));
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0018FC6A: ;
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018FC80
 * Original: 0x0018FC80 - 0x0018FE3F (447 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018FC80(void)
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

loc_0018FC80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x14;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0018FCD1; /* je: equal / zero */

loc_0018FC93: ;
    SET_LO8(eax, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018FCB6; /* je: equal / zero */

loc_0018FC9A: ;
    eax = ZX8(LO8(eax));
    fp_push(MEMF(eax * 4 + 0x3E0798)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3E09A0); /* fmul dword ptr [0x3e09a0] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FCAFu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018FCAF: ;
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    goto loc_0018FCD6;

loc_0018FCB6: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    MEM8(ecx) = 0x7F;
    MEM8(edx) = 0;
    MEM8(eax) = 0;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018FCD1: ;
    edi = 0xB4FC9;

loc_0018FCD6: ;
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(0x5DCF80); /* fsub dword ptr [0x5dcf80] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(0x5DCF84); /* fsub dword ptr [0x5dcf84] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(0x5DCF88); /* fsub dword ptr [0x5dcf88] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FD14u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018FD14: ;
    fp_pop(); /* fstp st(0) */
    ebx = MEM32(0x589ED0);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018FE2C; /* jae: above or equal (unsigned >=) */

loc_0018FD26: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018FD32; /* jae: above or equal (unsigned >=) */

loc_0018FD2A: ;
    edi = MEM32(ebp + 0x10);
    MEM8(edi) = 0x7F;
    goto loc_0018FD6A;

loc_0018FD32: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x1C) = edi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FD44; /* jge: greater or equal (signed >=) */

loc_0018FD3E: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018FD44: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FD56; /* jge: greater or equal (signed >=) */

loc_0018FD50: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018FD56: ;
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = fp_top() * MEMD(0x3E0998); /* fmul qword ptr [0x3e0998] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FD65u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018FD65: ;
    edi = MEM32(ebp + 0x10);
    MEM8(edi) = LO8(eax);

loc_0018FD6A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FD7C; /* jge: greater or equal (signed >=) */

loc_0018FD76: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018FD7C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    fp_top() = fp_top() * MEMF(0x3DD250); /* fmul dword ptr [0x3dd250] */
    MEM32(esp + 0x1C) = ebx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FD94; /* jge: greater or equal (signed >=) */

loc_0018FD8E: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0018FD94: ;
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FD9Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018FD9B: ;
    SET_LO8(ecx, 0x7F);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018FDA5; /* jbe: below or equal (unsigned <=) */

loc_0018FDA3: ;
    MEM8(edi) = LO8(ecx);

loc_0018FDA5: ;
    fp_push(MEMF(0x5DCF94)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(0x5DCF90)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() * MEMD(0x3E0998); /* fmul qword ptr [0x3e0998] */
    fp_top() = fp_top() / MEMF(esp + 0x18); /* fdiv dword ptr [esp + 0x18] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FDD8u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018FDD8: ;
    ecx = MEM32(ebp + 0x14);
    MEM8(ecx) = LO8(eax);
    fp_push(MEMF(0x5DCFA4)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(0x5DCFA0)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() * MEMD(0x3E0998); /* fmul qword ptr [0x3e0998] */
    fp_top() = fp_top() / MEMF(esp + 0x18); /* fdiv dword ptr [esp + 0x18] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FE08u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0018FE08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(ebp + 0x18);
    MEM8(ecx) = LO8(eax);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0018FE36; /* jge: greater or equal (signed >=) */

loc_0018FE11: ;
    eax = SX8(LO8(eax));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF81u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF81u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018FE21; /* jg: greater (signed >) */

loc_0018FE1C: ;
    eax = 0xFFFFFF81u;

loc_0018FE21: ;
    MEM8(ecx) = LO8(eax);
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018FE2C: ;
    edx = MEM32(ebp + 0x10);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEM8(edx) = 0;

loc_0018FE36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
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
 * sub_0018FE40
 * Original: 0x0018FE40 - 0x0018FE50 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FE40(void)
{

loc_0018FE40: ;
    PUSH32(esp, 0x0018FE45u); RECOMP_ABI_CALL(0x0018FA90u, sub_0018FA90); /* call 0x0018FA90 */

loc_0018FE45: ;
    MEM32(0x589EC4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0018FE50
 * Original: 0x0018FE50 - 0x0018FEA2 (82 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FE50: ;
    esp = esp - 0x48;
    edx = MEM32(esp + 0x50);
    ecx = esp + 8;
    eax = 0; /* xor self */
    MEM32(esp + 4) = ecx;
    MEM32(esp) = eax;
    ecx = 0; /* xor self */
    PUSH32(esp, edi);

loc_0018FE67: ;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018FE84; /* je: equal / zero */

loc_0018FE72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018FE8A; /* jae: above or equal (unsigned >=) */

loc_0018FE77: ;
    MEM32(esp + eax * 8 + 0xC) = ecx;
    MEM32(esp + eax * 8 + 0x10) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0018FE84: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018FE67; /* jb: below (unsigned <) */

loc_0018FE8A: ;
    edx = esp + 4;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018FE9Du); RECOMP_ICALL_SAFE(0x00370D28u, _icall_esp); /* manual call 0x00370D28 */
    }

loc_0018FE9D: ;
    POP32(esp, edi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_0018FEB0
 * Original: 0x0018FEB0 - 0x0019005A (426 bytes, 117 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FEB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018FEB0: ;
    eax = MEM32(0x58A504);
    ecx = ZX8(MEM8(esp + 4));
    esp = esp - 0x48;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x58A504) = eax;
    SET_LO8(eax, MEM8(ecx * 2 + 0x589EF9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190049; /* je: equal / zero */

loc_0018FED2: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    PUSH32(esp, ebx);
    eax = eax * 4 + 0x58A000;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x50) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00190048; /* je: equal / zero */

loc_0018FEEE: ;
    SET_LO8(eax, MEM8(esp + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, ebp);
    if (CMP_GE(_fas, _fbs)) goto loc_0018FEFF; /* jge: greater or equal (signed >=) */

loc_0018FEF7: ;
    ebp = SX8(LO8(eax));
    ebp = ebp + 0x7F;
    goto loc_0018FF04;

loc_0018FEFF: ;
    ebp = 0x7F;

loc_0018FF04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x7F;
    if (CMP_LE(_fas, _fbs)) goto loc_0018FF14; /* jle: less or equal (signed <=) */

loc_0018FF0F: ;
    edx = SX8(LO8(eax));
    esi = esi - edx;

loc_0018FF14: ;
    SET_LO8(eax, MEM8(esp + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018FF24; /* jge: greater or equal (signed >=) */

loc_0018FF1C: ;
    ecx = SX8(LO8(eax));
    ecx = ecx + 0x7F;
    goto loc_0018FF29;

loc_0018FF24: ;
    ecx = 0x7F;

loc_0018FF29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018FF39; /* jle: less or equal (signed <=) */

loc_0018FF2D: ;
    edx = SX8(LO8(eax));
    eax = 0x7F;
    eax = eax - edx;
    goto loc_0018FF3E;

loc_0018FF39: ;
    eax = 0x7F;

loc_0018FF3E: ;
    edx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    edx = edx >> 7;
    edi = ZX8(LO8(edx));
    edx = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    eax = eax >> 7;
    edx = edx >> 7;
    ecx = ecx >> 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80 (32-bit) */
    ebp = ZX8(LO8(eax));
    eax = ZX8(MEM8(esp + 0x68));
    edx = ZX8(LO8(edx));
    ecx = ZX8(LO8(ecx));
    MEM32(esp + 0x18) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_0018FF85; /* jge: greater or equal (signed >=) */

loc_0018FF77: ;
    esi = (uint32_t)(int32_t)SMEM16(edi * 2 + 0x460758);
    MEM32(esp + 0x1C) = esi;
    goto loc_0018FF89;

loc_0018FF85: ;
    MEM32(esp + 0x1C) = ebx;

loc_0018FF89: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    POP32(esp, edi);
    MEM32(esp + 0x1C) = 1;
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0018FFA9; /* jge: greater or equal (signed >=) */

loc_0018FF9B: ;
    edx = (uint32_t)(int32_t)SMEM16(edx * 2 + 0x460758);
    MEM32(esp + 0x1C) = edx;
    goto loc_0018FFAD;

loc_0018FFA9: ;
    MEM32(esp + 0x1C) = ebx;

loc_0018FFAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(esp + 0x20) = 2;
    if (CMP_GE(_fas, _fbs)) goto loc_0018FFCA; /* jge: greater or equal (signed >=) */

loc_0018FFBC: ;
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x460758);
    MEM32(esp + 0x24) = eax;
    goto loc_0018FFCE;

loc_0018FFCA: ;
    MEM32(esp + 0x24) = ebx;

loc_0018FFCE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x80 (32-bit) */
    edx = (uint32_t)(int32_t)SMEM16(0x4607D8);
    MEM32(esp + 0x28) = 3;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = 4;
    if (CMP_GE(_fas, _fbs)) goto loc_0018FFFF; /* jge: greater or equal (signed >=) */

loc_0018FFF1: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp * 2 + 0x460758);
    MEM32(esp + 0x34) = eax;
    goto loc_00190003;

loc_0018FFFF: ;
    MEM32(esp + 0x34) = ebx;

loc_00190003: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    MEM32(esp + 0x38) = 5;
    POP32(esp, ebp);
    if (CMP_GE(_fas, _fbs)) goto loc_00190022; /* jge: greater or equal (signed >=) */

loc_00190014: ;
    ecx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x460758);
    MEM32(esp + 0x38) = ecx;
    goto loc_00190026;

loc_00190022: ;
    MEM32(esp + 0x38) = ebx;

loc_00190026: ;
    ecx = MEM32(esp + 0x50);
    edx = esp + 0xC;
    eax = esp + 4;
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 6;
    PUSH32(esp, 0x00190048u); RECOMP_ICALL_SAFE(0x003706FDu, _icall_esp); /* manual call 0x003706FD */
    }

loc_00190048: ;
    POP32(esp, ebx);

loc_00190049: ;
    eax = MEM32(0x58A504);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x58A504) = eax;
    eax = 0; /* xor self */
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_00190060
 * Original: 0x00190060 - 0x00190100 (160 bytes, 41 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190060: ;
    esp = esp - 0xC;
    PUSH32(esp, 0x00190068u); RECOMP_ABI_CALL(0x0019ED75u, sub_0019ED75); /* call 0x0019ED75 */

loc_00190068: ;
    MEM32(0x589FF8) = eax;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    SET_LO8(edx, 0xFF);
    goto loc_00190080;

    /* nop */
    /* nop */

loc_00190080: ;
    MEM8(eax + 0x589EF8) = LO8(ecx);
    MEM8(eax + 0x589EF9) = LO8(edx);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00190080; /* jb: below (unsigned <) */

loc_00190096: ;
    eax = 0; /* xor self */
    goto loc_001900A0;

    /* nop */

loc_001900A0: ;
    MEM8(eax + 0x58A000) = LO8(ecx);
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x500) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x500 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001900A0; /* jb: below (unsigned <) */

loc_001900B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x58A514);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001900BCu); RECOMP_ICALL_SAFE(0x00371AF8u, _icall_esp); /* manual call 0x00371AF8 */
    }

loc_001900BC: ;
    edx = MEM32(0x58A514);
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6480);
    PUSH32(esp, 0x45A170);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 3;
    MEM32(esp + 0x1C) = 4;
    PUSH32(esp, 0x001900EBu); RECOMP_ICALL_SAFE(0x00370666u, _icall_esp); /* manual call 0x00370666 */
    }

loc_001900EB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x001900F0u); RECOMP_ICALL_SAFE(0x0036F5F2u, _icall_esp); /* manual call 0x0036F5F2 */
    }

loc_001900F0: ;
    MEM32(0x58A500) = 1;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00190100
 * Original: 0x00190100 - 0x00190182 (130 bytes, 48 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190100: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x58A504);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019017A; /* jne: not equal / not zero */

loc_0019010D: ;
    eax = MEM32(0x58A510);
    PUSH32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x58A510) = eax;
    esi = 0x58A00C;
    edi = 0x40;

loc_00190124: ;
    eax = ZX8(MEM8(esi + -12));
    eax = eax - 2;
    if ((eax != 0)) goto loc_00190172; /* jne: not equal / not zero */

loc_0019012D: ;
    edx = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0019013Au); RECOMP_ICALL_SAFE(0x00370799u, _icall_esp); /* manual call 0x00370799 */
    }

loc_0019013A: ;
    eax = MEM32(esp + 0xC);
    eax = eax & 0xFFFFFFFBu;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00190172; /* je: equal / zero */

loc_00190144: ;
    _fa = (uint32_t)(MEM8(esi + -11)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -11), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019016E; /* je: equal / zero */

loc_0019014A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + -12) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00190159; /* je: equal / zero */

loc_00190153: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00190159u); RECOMP_ICALL_SAFE(0x0036F5DCu, _icall_esp); /* manual call 0x0036F5DC */
    }

loc_00190159: ;
    eax = ZX8(MEM8(esi + -9));
    eax = eax << 1;
    MEM8(eax + 0x589EF9) = 0xFF;
    MEM8(eax + 0x589EF8) = LO8(ebx);
    goto loc_00190172;

loc_0019016E: ;
    MEM8(esi + -12) = 1;

loc_00190172: ;
    esi = esi + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00190124; /* jne: not equal / not zero */

loc_00190178: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0019017A: ;
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00190190
 * Original: 0x00190190 - 0x00190478 (744 bytes, 214 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190190(void)
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

loc_00190190: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x7C));
    esp = esp - 0x7C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x8C);
    MEM32(esp + 0x24) = eax;
    MEM16(esp + 0x28) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 2));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edx = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0019024A; /* je: equal / zero */

loc_001901C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(esi + 4);
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x20) = eax;
    if (6) _cf = (int)(((eax) >> ((6) - 1)) & 1);
    eax = eax >> 6;
    MEM16(esp + 0x2C) = 2;
    MEM16(esp + 0x1C) = 0x69;
    MEM16(esp + 0x2A) = 4;
    MEM16(esp + 0x2E) = 0x40;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + 0x1E) = LO16(edx);
    ecx = MEM32(esp + 0x1E);
    edx = ZX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ecx = ecx + ecx * 8;
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    MEM16(esp + 0x28) = LO16(ecx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    eax = eax + eax * 8;
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x24) = eax;
    eax = ecx;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x40000;
    MEM32(esp + 0x40) = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    edx = esp + 0x1C;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x3C) = edx;
    goto loc_001902CF;

loc_0019024A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    edi = MEM32(esi + 4);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 4;
    MEM32(esp + 0x20) = edi;
    MEM16(esp + 0x2C) = 0;
    MEM16(esp + 0x1C) = 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + 0x1E) = LO16(edx);
    edx = ZX16(LO16(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 4);
    MEM16(esp + 0x28) = LO16(ecx);
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    MEM32(esp + 0x24) = ecx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF8u;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    MEM32(esp + 0x30) = edx;
    MEM16(esp + 0x2A) = LO16(eax);
    eax = edx;
    MEM32(esp + 0x38) = edx;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x40000;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x40) = edx;
    eax = esp + 0x1C;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x38) = 4;
    MEM32(esp + 0x3C) = eax;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */

loc_001902CF: ;
    ebp = MEM32(esp + 0x98);
    edx = MEM32(0x58A514);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x40) = 0x18;
    PUSH32(esp, 0x001902F1u); RECOMP_ICALL_SAFE(0x0037192Eu, _icall_esp); /* manual call 0x0037192E */
    }

loc_001902F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0019046C; /* jl: less (signed <) */

loc_001902F9: ;
    ecx = ZX16(MEM16(esp + 0x28));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x98);
    eax = MEM32(ebx + 8);
    eax = eax + ecx + -1;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = MEM32(ebp);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebx + 4))) >> 32) & 1);
    ecx = ecx + MEM32(ebx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00190325u); RECOMP_ICALL_SAFE(0x00371384u, _icall_esp); /* manual call 0x00371384 */
    }

loc_00190325: ;
    ebx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001903EF; /* je: equal / zero */

loc_00190330: ;
    eax = MEM32(esp + 0x28);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = MEM32(esi + 0xC);
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00190349; /* jge: greater or equal (signed >=) */

loc_00190343: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00190349: ;
    ecx = MEM32(esp + 0x24);
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019035B; /* jge: greater or equal (signed >=) */

loc_00190355: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0019035B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0019036D; /* jge: greater or equal (signed >=) */

loc_00190367: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0019036D: ;
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    PUSH32(esp, 0x00190376u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00190376: ;
    esi = ZX16(MEM16(esp + 0x2C));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    ebp = esi;
    edi = esi;
    if (1) _cf = (int)(((ebp) >> ((1) - 1)) & 1);
    ebp = ebp >> 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019038E; /* jl: less (signed <) */

loc_0019038C: ;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(esi)) >> 32) & 1);
    edi = edi + esi;

loc_0019038E: ;
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(esp + 0x10)));
    ebx = ebx - MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001903A4; /* jge: greater or equal (signed >=) */

loc_0019039E: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001903A4: ;
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    PUSH32(esp, 0x001903ADu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001903AD: ;
    fp_pop(); /* fstp st(0) */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    fp_pop(); /* fstp st(0) */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001903C0; /* jl: less (signed <) */

loc_001903BE: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;

loc_001903C0: ;
    edx = MEM32(esp + 0x98);
    eax = MEM32(edx + 8);
    edx = ecx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001903D5; /* jbe: below or equal (unsigned <=) */

loc_001903D1: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    ecx = eax;

loc_001903D5: ;
    eax = MEM32(esp + 0x9C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001903E6u); RECOMP_ICALL_SAFE(0x00370779u, _icall_esp); /* manual call 0x00370779 */
    }

loc_001903E6: ;
    ebp = MEM32(esp + 0x9C);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */

loc_001903EF: ;
    ecx = MEM32(ebp);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = esp + 0x50;
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x5C) = 1;
    MEM32(esp + 0x64) = 2;
    MEM32(esp + 0x6C) = 3;
    MEM32(esp + 0x74) = 4;
    MEM32(esp + 0x7C) = 5;
    MEM32(esp + 0x20) = 6;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x60) = edi;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x70) = edi;
    MEM32(esp + 0x78) = edi;
    MEM32(esp + 0x80) = edi;
    MEM32(esp + 0x88) = edi;
    MEM32(esp + 0x90) = edi;
    PUSH32(esp, 0x00190462u); RECOMP_ICALL_SAFE(0x00370D28u, _icall_esp); /* manual call 0x00370D28 */
    }

loc_00190462: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x7C)) >> 32) & 1);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

loc_0019046C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x7C)) >> 32) & 1);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00190480
 * Original: 0x00190480 - 0x00190544 (196 bytes, 66 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00190480: ;
    eax = MEM32(0x58A504);
    ecx = ZX8(MEM8(esp + 4));
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x58A504) = eax;
    SET_LO8(eax, MEM8(ecx * 2 + 0x589EF9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00190533; /* je: equal / zero */

loc_001904A2: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    esi = esi * 4 + 0x58A000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00190532; /* je: equal / zero */

loc_001904B4: ;
    eax = MEM32(esi + 8);
    edx = ZX16(MEM16(eax));
    eax = ZX16(MEM16(eax + 0x16));
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001904C6u); RECOMP_ABI_CALL(0x001915A0u, sub_001915A0); /* call 0x001915A0 */

loc_001904C6: ;
    ecx = MEM32(esi + 0xC);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0x001904D6u); RECOMP_ICALL_SAFE(0x003707D5u, _icall_esp); /* manual call 0x003707D5 */
    }

loc_001904D6: ;
    eax = MEM32(esi + 0xC);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 2));
    _cf = 0; /* logical op clears CF */
    edx = edx & 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001904ECu); RECOMP_ICALL_SAFE(0x00370719u, _icall_esp); /* manual call 0x00370719 */
    }

loc_001904EC: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0019052F; /* je: equal / zero */

loc_001904F3: ;
    edx = MEM32(0x58A514);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00190504u); RECOMP_ICALL_SAFE(0x0037068Du, _icall_esp); /* manual call 0x0037068D */
    }

loc_00190504: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2710);
    edx = MEM32(esi + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x0019052Fu); RECOMP_ICALL_SAFE(0x00370755u, _icall_esp); /* manual call 0x00370755 */
    }

loc_0019052F: ;
    MEM8(esi) = 2;

loc_00190532: ;
    POP32(esp, esi);

loc_00190533: ;
    eax = MEM32(0x58A504);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x58A504) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00190550
 * Original: 0x00190550 - 0x001905BF (111 bytes, 32 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00190550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190550: ;
    eax = MEM32(0x58A504);
    ecx = ZX8(MEM8(esp + 4));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x58A504) = eax;
    SET_LO8(eax, MEM8(ecx * 2 + 0x589EF9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001905AF; /* je: equal / zero */

loc_0019056B: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax * 4 + 0x58A000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001905AF; /* je: equal / zero */

loc_0019057C: ;
    edx = MEM32(eax + 8);
    ecx = ZX8(MEM8(edx + 4));
    edx = ZX8(MEM8(esp + 8));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = ecx >> 7;
    ecx = ZX8(LO8(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001905A3; /* jge: greater or equal (signed >=) */

loc_00190599: ;
    ecx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x460758);
    goto loc_001905A5;

loc_001905A3: ;
    ecx = 0; /* xor self */

loc_001905A5: ;
    eax = MEM32(eax + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001905AFu); RECOMP_ICALL_SAFE(0x003706A9u, _icall_esp); /* manual call 0x003706A9 */
    }

loc_001905AF: ;
    ecx = MEM32(0x58A504);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x58A504) = ecx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001905C0
 * Original: 0x001905C0 - 0x0019065D (157 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001905C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001905C0: ;
    eax = MEM32(0x58A504);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX8(LO8(ebx));
    MEM32(0x58A504) = eax;
    SET_LO8(eax, MEM8(ecx * 2 + 0x589EF9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019064C; /* je: equal / zero */

loc_001905DE: ;
    eax = ZX8(LO8(eax));
    ecx = eax + eax * 4;
    ecx = ecx * 4 + 0x58A000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019064C; /* je: equal / zero */

loc_001905EF: ;
    edx = MEM32(ecx + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 5);
    edx = (uint32_t)(int32_t)SMEM8(esp + 0xC);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF81u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF81u (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0019060D; /* jl: less (signed <) */

loc_00190603: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00190618; /* jge: greater or equal (signed >=) */

loc_00190608: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF81u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF81u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00190614; /* jge: greater or equal (signed >=) */

loc_0019060D: ;
    esi = 0xFFFFFF81u;
    goto loc_0019061D;

loc_00190614: ;
    esi = eax;
    goto loc_0019061D;

loc_00190618: ;
    esi = 0x7F;

loc_0019061D: ;
    eax = MEM32(ecx + 8);
    ecx = ZX16(MEM16(eax));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 0x16));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00190630u); RECOMP_ABI_CALL(0x001915A0u, sub_001915A0); /* call 0x001915A0 */

loc_00190630: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x17));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + 0x16));
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00190648u); RECOMP_ABI_CALL(0x0018FEB0u, sub_0018FEB0); /* call 0x0018FEB0 */

loc_00190648: ;
    esp = esp + 0x1C;
    POP32(esp, esi);

loc_0019064C: ;
    ecx = MEM32(0x58A504);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x58A504) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00190660
 * Original: 0x00190660 - 0x00190675 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190660(void)
{

loc_00190660: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00190671u); RECOMP_ABI_CALL(0x001905C0u, sub_001905C0); /* call 0x001905C0 */

loc_00190671: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00190680
 * Original: 0x00190680 - 0x00190703 (131 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00190680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190680: ;
    eax = MEM32(0x58A504);
    ecx = ZX8(MEM8(esp + 4));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x58A504) = eax;
    SET_LO8(eax, MEM8(ecx * 2 + 0x589EF9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001906F3; /* je: equal / zero */

loc_0019069B: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax * 4 + 0x58A000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001906F3; /* je: equal / zero */

loc_001906AC: ;
    eax = MEM32(eax + 8);
    edx = ZX16(MEM16(eax));
    eax = ZX16(MEM16(eax + 0x16));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001906BDu); RECOMP_ABI_CALL(0x001915A0u, sub_001915A0); /* call 0x001915A0 */

loc_001906BD: ;
    SET_LO16(eax, MEM16(esp + 0x10));
    esp = esp + 8;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001906F3; /* je: equal / zero */

loc_001906CA: ;
    eax = SX16(LO16(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    ecx = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001906F3; /* jge: greater or equal (signed >=) */

loc_001906DB: ;
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    esi = esi - edx;
    eax = 0x51EB851F;
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 5;
    eax = eax | 0xFFFFFFFFu;
    eax = eax - edx;
    ecx = ecx + eax;
    POP32(esp, esi);

loc_001906F3: ;
    ecx = MEM32(0x58A504);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x58A504) = ecx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00190710
 * Original: 0x00190710 - 0x00190738 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00190710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190710: ;
    eax = ZX8(MEM8(esp + 4));
    SET_LO8(eax, MEM8(eax * 2 + 0x589EF9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190735; /* je: equal / zero */

loc_00190720: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax * 4 + 0x58A000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190735; /* je: equal / zero */

loc_00190731: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

loc_00190735: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00190740
 * Original: 0x00190740 - 0x0019076F (47 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190740: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00190750; /* je: equal / zero */

loc_0019074A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00190750u); RECOMP_ICALL_SAFE(0x0036F5DCu, _icall_esp); /* manual call 0x0036F5DC */
    }

loc_00190750: ;
    eax = ZX8(MEM8(esi + 3));
    MEM8(eax * 2 + 0x589EF9) = 0xFF;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019076E; /* je: equal / zero */

loc_00190762: ;
    ecx = ZX8(MEM8(esi + 3));
    MEM8(ecx * 2 + 0x589EF8) = 0;

loc_0019076E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00190770
 * Original: 0x00190770 - 0x00190B96 (1062 bytes, 293 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190770(void)
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

loc_00190770: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001907C7; /* je: equal / zero */

loc_00190783: ;
    SET_LO16(eax, MEM16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019094C; /* je: equal / zero */

loc_00190790: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x16));
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001907A0u); RECOMP_ABI_CALL(0x001915A0u, sub_001915A0); /* call 0x001915A0 */

loc_001907A0: ;
    SET_LO16(eax, MEM16(eax));
    esp = esp + 8;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019094C; /* je: equal / zero */

loc_001907B0: ;
    edx = ZX16(LO16(eax));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x16));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001907C0u); RECOMP_ABI_CALL(0x00191020u, sub_00191020); /* call 0x00191020 */

loc_001907C0: ;
    esp = esp + 8;
    MEM32(esp + 0xC) = eax;

loc_001907C7: ;
    ecx = MEM32(0x58A504);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x58A504) = ecx;
    eax = MEM32(0x58A50C);
    SET_LO8(ecx, MEM8(eax * 2 + 0x589EF8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001907F9; /* je: equal / zero */

loc_001907E4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001907EE; /* jne: not equal / not zero */

loc_001907EC: ;
    eax = 0; /* xor self */

loc_001907EE: ;
    SET_LO8(ecx, MEM8(eax * 2 + 0x589EF8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001907E4; /* jne: not equal / not zero */

loc_001907F9: ;
    MEM8(esp + 8) = LO8(eax);
    MEM8(eax * 2 + 0x589EF8) = 1;
    MEM8(eax * 2 + 0x589EF9) = 0xFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x58A50C) = eax;
    _fa = (uint32_t)(MEM32(0x58A50C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x58A50C), 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190825; /* jne: not equal / not zero */

loc_0019081F: ;
    MEM32(0x58A50C) = esi;

loc_00190825: ;
    eax = MEM32(0x58A508);
    ecx = eax + eax * 4;
    PUSH32(esp, ebx);
    ecx = ecx << 2;
    SET_LO8(ebx, MEM8(ecx + 0x58A000));
    SET_LO8(edx, LO8(edx) | 0xFF);
    PUSH32(esp, ebp);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    SET_LO8(ebx, MEM8(esp + 0x4C));
    ebp = 0x40;
    if (TEST_Z(_fa, _fb)) goto loc_0019087E; /* je: equal / zero */

loc_00190848: ;
    goto loc_00190850;

    /* nop */

loc_00190850: ;
    SET_LO8(ecx, MEM8(ecx + 0x58A002));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00190860; /* ja: above (unsigned >) */

loc_0019085A: ;
    SET_LO8(edx, LO8(ecx));
    MEM32(esp + 0x48) = eax;

loc_00190860: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190867; /* jne: not equal / not zero */

loc_00190865: ;
    eax = 0; /* xor self */

loc_00190867: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x58A508)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x58A508) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001908A8; /* je: equal / zero */

loc_0019086F: ;
    ecx = eax + eax * 4;
    ecx = ecx << 2;
    _fa = (uint32_t)(MEM8(ecx + 0x58A000)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x58A000), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190850; /* jne: not equal / not zero */

loc_0019087E: ;
    esi = eax + eax * 4;
    MEM32(esp + 0x48) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x58A508) = eax;
    _fa = (uint32_t)(MEM32(0x58A508)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x58A508), ebp (32-bit) */
    esi = esi * 4 + 0x58A000;
    if (CMP_NE(_fa, _fb)) goto loc_001908A4; /* jne: not equal / not zero */

loc_0019089A: ;
    MEM32(0x58A508) = 0;

loc_001908A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001908E8; /* jne: not equal / not zero */

loc_001908A8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00190B70; /* jb: below (unsigned <) */

loc_001908B0: ;
    eax = MEM32(esp + 0x48);
    esi = eax + eax * 4;
    esi = esi * 4 + 0x58A000;
    PUSH32(esp, 0x001908C3u); RECOMP_ABI_CALL(0x00190740u, sub_00190740); /* call 0x00190740 */

loc_001908C3: ;
    edx = MEM32(esp + 0x48);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x58A508) = edx;
    _fa = (uint32_t)(MEM32(0x58A508)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x58A508), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001908E0; /* jne: not equal / not zero */

loc_001908D6: ;
    MEM32(0x58A508) = 0;

loc_001908E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190B70; /* je: equal / zero */

loc_001908E8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esi + 2) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    MEM8(esi) = 1;
    MEM8(esi + 1) = 0;
    MEM8(esi + 3) = LO8(ebx);
    MEM32(esi + 8) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00190B4D; /* je: equal / zero */

loc_00190904: ;
    eax = ZX16(MEM16(edi));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x16));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00190914u); RECOMP_ABI_CALL(0x001915A0u, sub_001915A0); /* call 0x001915A0 */

loc_00190914: ;
    edx = MEM32(esp + 0x1C);
    ebp = esi + 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(0x58A514);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019092Du); RECOMP_ABI_CALL(0x00190190u, sub_00190190); /* call 0x00190190 */

loc_0019092D: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00190B74; /* jne: not equal / not zero */

loc_00190938: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00190954; /* jae: above or equal (unsigned >=) */

loc_0019093F: ;
    ecx = ZX8(LO8(eax));
    ebx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x460758);
    goto loc_00190956;

loc_0019094C: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) | 0xFF);
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_00190954: ;
    ebx = 0; /* xor self */

loc_00190956: ;
    eax = ZX16(MEM16(edi + 2));
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edx + 4));
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00190A98; /* jl: less (signed <) */

loc_00190970: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EDEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2EDEF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019097C; /* jl: less (signed <) */

loc_00190977: ;
    eax = 0x2EDEF;

loc_0019097C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00190986u); RECOMP_ICALL_SAFE(0x00370D0Cu, _icall_esp); /* manual call 0x00370D0C */
    }

loc_00190986: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00190990u); RECOMP_ICALL_SAFE(0x003706A9u, _icall_esp); /* manual call 0x003706A9 */
    }

loc_00190990: ;
    eax = ZX8(MEM8(edi + 7));
    ebx = ZX16(MEM16(eax * 2 + 0x460858));
    edx = 0; /* xor self */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = edx;
    fp_top() = fp_top() * MEMF(0x3C832C); /* fmul dword ptr [0x3c832c] */
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x20) = 2;
    fp_top() = fp_top() * MEMF(0x3E09D4); /* fmul dword ptr [0x3e09d4] */
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x001909F3u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001909F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFF (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00190A06; /* jb: below (unsigned <) */

loc_001909FE: ;
    MEM32(esp + 0x28) = 0xFFF;

loc_00190A06: ;
    ecx = ZX8(MEM8(edi + 0xA));
    edx = ZX16(MEM16(ecx * 2 + 0x460858));
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C832C); /* fmul dword ptr [0x3c832c] */
    fp_top() = fp_top() * MEMF(0x3E09D4); /* fmul dword ptr [0x3e09d4] */
    PUSH32(esp, 0x00190A2Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00190A2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFF (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00190A3E; /* jb: below (unsigned <) */

loc_00190A36: ;
    MEM32(esp + 0x34) = 0xFFF;

loc_00190A3E: ;
    SET_LO8(eax, MEM8(edi + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190AA2; /* jne: not equal / not zero */

loc_00190A45: ;
    eax = ZX8(MEM8(edi + 8));
    ecx = ZX16(MEM16(eax * 2 + 0x460858));
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x2C) = 0;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C832C); /* fmul dword ptr [0x3c832c] */
    fp_top() = fp_top() * MEMF(0x3E09D4); /* fmul dword ptr [0x3e09d4] */
    PUSH32(esp, 0x00190A72u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00190A72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFF (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00190A85; /* jb: below (unsigned <) */

loc_00190A7D: ;
    MEM32(esp + 0x30) = 0xFFF;

loc_00190A85: ;
    edx = ZX8(MEM8(edi + 0xB));
    edx = edx << 1;
    MEM32(esp + 0x38) = edx;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    goto loc_00190AF4;

loc_00190A98: ;
    eax = 0xBC;
    goto loc_0019097C;

loc_00190AA2: ;
    ecx = ZX8(MEM8(edi + 8));
    edx = ZX8(LO8(eax));
    ecx = ecx + edx;
    eax = ZX16(MEM16(ecx * 2 + 0x460858));
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C832C); /* fmul dword ptr [0x3c832c] */
    fp_top() = fp_top() * MEMF(0x3E09D4); /* fmul dword ptr [0x3e09d4] */
    PUSH32(esp, 0x00190ACCu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00190ACC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFF (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00190ADF; /* jb: below (unsigned <) */

loc_00190AD7: ;
    MEM32(esp + 0x34) = 0xFFF;

loc_00190ADF: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x38) = 0xFF;
    MEM32(esi + 0x10) = ebx;

loc_00190AF4: ;
    edx = MEM32(ebp);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00190B02u); RECOMP_ICALL_SAFE(0x003706C5u, _icall_esp); /* manual call 0x003706C5 */
    }

loc_00190B02: ;
    SET_LO8(ebx, MEM8(esp + 0x10));
    SET_LO8(ecx, MEM8(esp + 0x48));
    eax = ZX8(LO8(ebx));
    MEM8(eax * 2 + 0x589EF9) = LO8(ecx);
    eax = MEM32(esp + 0x18);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + 0x17));
    eax = ZX8(MEM8(eax + 0x16));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 5));
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00190B35u); RECOMP_ABI_CALL(0x0018FEB0u, sub_0018FEB0); /* call 0x0018FEB0 */

loc_00190B35: ;
    eax = MEM32(0x58A504);
    esp = esp + 0x14;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x58A504) = eax;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_00190B4D: ;
    eax = MEM32(0x58A504);
    SET_LO8(edx, MEM8(esp + 0x48));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    ecx = ZX8(LO8(ebx));
    MEM32(0x58A504) = eax;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM8(ecx * 2 + 0x589EF9) = LO8(edx);
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_00190B70: ;
    SET_LO8(ebx, MEM8(esp + 0x10));

loc_00190B74: ;
    edx = MEM32(0x58A504);
    POP32(esp, ebp);
    ecx = ZX8(LO8(ebx));
    POP32(esp, ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM8(ecx * 2 + 0x589EF8) = 0;
    MEM32(0x58A504) = edx;
    SET_LO8(eax, LO8(eax) | 0xFF);
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00190BA0
 * Original: 0x00190BA0 - 0x00190C38 (152 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00190BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190BA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190C35; /* je: equal / zero */

loc_00190BAC: ;
    ecx = MEM32(0x58A504);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(0x58A504) = ecx;
    PUSH32(esp, 0x00190BC5u); RECOMP_ABI_CALL(0x00190770u, sub_00190770); /* call 0x00190770 */

loc_00190BC5: ;
    SET_LO8(ebx, LO8(eax));
    esp = esp + 8;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFF (8-bit) */
    MEM8(esp + 8) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00190C27; /* je: equal / zero */

loc_00190BD3: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190BE3u); RECOMP_ABI_CALL(0x00190550u, sub_00190550); /* call 0x00190550 */

loc_00190BE3: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190BF3u); RECOMP_ABI_CALL(0x001905C0u, sub_001905C0); /* call 0x001905C0 */

loc_00190BF3: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190BFEu); RECOMP_ABI_CALL(0x00190680u, sub_00190680); /* call 0x00190680 */

loc_00190BFE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190C04u); RECOMP_ABI_CALL(0x00190480u, sub_00190480); /* call 0x00190480 */

loc_00190C04: ;
    ecx = ZX8(LO8(ebx));
    eax = ZX8(MEM8(ecx * 2 + 0x589EF9));
    eax = eax + eax * 4;
    SET_LO8(ecx, MEM8(eax * 4 + 0x58A001));
    esp = esp + 0x20;
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM8(eax * 4 + 0x58A001) = LO8(ecx);
    POP32(esp, esi);

loc_00190C27: ;
    edx = MEM32(0x58A504);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x58A504) = edx;
    POP32(esp, ebx);

loc_00190C35: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00190C40
 * Original: 0x00190C40 - 0x00190C64 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190C40(void)
{

loc_00190C40: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00190C60u); RECOMP_ABI_CALL(0x00190BA0u, sub_00190BA0); /* call 0x00190BA0 */

loc_00190C60: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00190C70
 * Original: 0x00190C70 - 0x00190D54 (228 bytes, 72 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190C70: ;
    eax = MEM32(0x58A504);
    ecx = ZX8(MEM8(esp + 4));
    esp = esp - 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 1;
    MEM32(0x58A504) = eax;
    SET_LO8(eax, MEM8(ecx + 0x589EF9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00190D32; /* je: equal / zero */

loc_00190C94: ;
    eax = ZX8(LO8(eax));
    esi = eax + eax * 4;
    esi = esi * 4 + 0x58A000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190D32; /* je: equal / zero */

loc_00190CA9: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190CC1; /* je: equal / zero */

loc_00190CB3: ;
    ecx = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00190CBCu); RECOMP_ICALL_SAFE(0x0037073Du, _icall_esp); /* manual call 0x0037073D */
    }

loc_00190CBC: ;
    MEM8(esi) = 1;
    goto loc_00190CE6;

loc_00190CC1: ;
    eax = MEM32(0x58A514);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00190CD1u); RECOMP_ICALL_SAFE(0x0037068Du, _icall_esp); /* manual call 0x0037068D */
    }

loc_00190CD1: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00190CE6u); RECOMP_ICALL_SAFE(0x00370755u, _icall_esp); /* manual call 0x00370755 */
    }

loc_00190CE6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00190D40; /* je: equal / zero */

loc_00190CEC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190D16; /* jne: not equal / not zero */

loc_00190CF1: ;
    PUSH32(esp, 0x00190CF6u); RECOMP_ABI_CALL(0x00190740u, sub_00190740); /* call 0x00190740 */

loc_00190CF6: ;
    ecx = ZX8(MEM8(esi + 3));
    edx = MEM32(0x58A504);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx * 2 + 0x589EF8) = 0;
    MEM32(0x58A504) = edx;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00190D16: ;
    SET_LO8(eax, MEM8(esi + 1));
    edx = MEM32(0x58A504);
    SET_LO8(eax, LO8(eax) | 1);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 1) = LO8(eax);
    MEM32(0x58A504) = edx;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00190D32: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190D40; /* je: equal / zero */

loc_00190D39: ;
    MEM8(ecx + 0x589EF8) = 0;

loc_00190D40: ;
    edx = MEM32(0x58A504);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x58A504) = edx;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00190D60
 * Original: 0x00190D60 - 0x00190DB3 (83 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190D60: ;
    eax = MEM32(0x58A504);
    PUSH32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(0x58A504) = eax;
    esi = 0; /* xor self */

loc_00190D73: ;
    SET_LO8(eax, MEM8(esi + 0x58A000));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190D98; /* je: equal / zero */

loc_00190D7D: ;
    _fa = (uint32_t)(MEM32(esi + 0x58A008)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58A008), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190D98; /* jne: not equal / not zero */

loc_00190D85: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x58A003));
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00190D95u); RECOMP_ABI_CALL(0x00190C70u, sub_00190C70); /* call 0x00190C70 */

loc_00190D95: ;
    esp = esp + 8;

loc_00190D98: ;
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x500) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x500 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00190D73; /* jb: below (unsigned <) */

loc_00190DA3: ;
    edx = MEM32(0x58A504);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x58A504) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00190DC0
 * Original: 0x00190DC0 - 0x00190DD2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00190DC0(void)
{

loc_00190DC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00190DCCu); RECOMP_ABI_CALL(0x00190C70u, sub_00190C70); /* call 0x00190C70 */

loc_00190DCC: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00190DE0
 * Original: 0x00190DE0 - 0x00190EB8 (216 bytes, 71 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190DE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190DE0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x589EF8;
    ebp = 0x80;
    ebx = 0; /* xor self */

loc_00190DF3: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190E8E; /* je: equal / zero */

loc_00190DFB: ;
    eax = MEM32(0x58A504);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x58A504) = eax;
    SET_LO8(eax, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190E81; /* je: equal / zero */

loc_00190E0D: ;
    eax = ZX8(LO8(eax));
    esi = eax + eax * 4;
    esi = esi * 4 + 0x58A000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190E81; /* je: equal / zero */

loc_00190E1E: ;
    edx = MEM32(0x58A514);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00190E2Fu); RECOMP_ICALL_SAFE(0x0037068Du, _icall_esp); /* manual call 0x0037068D */
    }

loc_00190E2F: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00190E44u); RECOMP_ICALL_SAFE(0x00370755u, _icall_esp); /* manual call 0x00370755 */
    }

loc_00190E44: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190E7B; /* jne: not equal / not zero */

loc_00190E49: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00190E58; /* je: equal / zero */

loc_00190E52: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00190E58u); RECOMP_ICALL_SAFE(0x0036F5DCu, _icall_esp); /* manual call 0x0036F5DC */
    }

loc_00190E58: ;
    eax = ZX8(MEM8(esi + 3));
    SET_LO8(ecx, MEM8(esi + 1));
    eax = eax << 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM8(eax + 0x589EF9) = 0xFF;
    if (TEST_Z(_fa, _fb)) goto loc_00190E73; /* je: equal / zero */

loc_00190E6D: ;
    MEM8(eax + 0x589EF8) = LO8(ebx);

loc_00190E73: ;
    MEM8(eax + 0x589EF8) = LO8(ebx);
    goto loc_00190E83;

loc_00190E7B: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 1;
    goto loc_00190E83;

loc_00190E81: ;
    MEM8(edi) = LO8(ebx);

loc_00190E83: ;
    eax = MEM32(0x58A504);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x58A504) = eax;

loc_00190E8E: ;
    edi = edi + 2;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00190DF3; /* jne: not equal / not zero */

loc_00190E98: ;
    ecx = MEM32(0x58A514);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00190EA4u); RECOMP_ICALL_SAFE(0x0036F5C1u, _icall_esp); /* manual call 0x0036F5C1 */
    }

loc_00190EA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x58A514) = ebx;
    MEM32(0x58A500) = ebx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00190EC0
 * Original: 0x00190EC0 - 0x00190F86 (198 bytes, 67 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190EC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190EC0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x589EF8;
    ebp = 0x80;
    ebx = 0; /* xor self */

loc_00190ED3: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190F6E; /* je: equal / zero */

loc_00190EDB: ;
    eax = MEM32(0x58A504);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x58A504) = eax;
    SET_LO8(eax, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190F61; /* je: equal / zero */

loc_00190EED: ;
    eax = ZX8(LO8(eax));
    esi = eax + eax * 4;
    esi = esi * 4 + 0x58A000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190F61; /* je: equal / zero */

loc_00190EFE: ;
    edx = MEM32(0x58A514);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00190F0Fu); RECOMP_ICALL_SAFE(0x0037068Du, _icall_esp); /* manual call 0x0037068D */
    }

loc_00190F0F: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00190F24u); RECOMP_ICALL_SAFE(0x00370755u, _icall_esp); /* manual call 0x00370755 */
    }

loc_00190F24: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190F5B; /* jne: not equal / not zero */

loc_00190F29: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00190F38; /* je: equal / zero */

loc_00190F32: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00190F38u); RECOMP_ICALL_SAFE(0x0036F5DCu, _icall_esp); /* manual call 0x0036F5DC */
    }

loc_00190F38: ;
    eax = ZX8(MEM8(esi + 3));
    SET_LO8(ecx, MEM8(esi + 1));
    eax = eax << 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM8(eax + 0x589EF9) = 0xFF;
    if (TEST_Z(_fa, _fb)) goto loc_00190F53; /* je: equal / zero */

loc_00190F4D: ;
    MEM8(eax + 0x589EF8) = LO8(ebx);

loc_00190F53: ;
    MEM8(eax + 0x589EF8) = LO8(ebx);
    goto loc_00190F63;

loc_00190F5B: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 1;
    goto loc_00190F63;

loc_00190F61: ;
    MEM8(edi) = LO8(ebx);

loc_00190F63: ;
    eax = MEM32(0x58A504);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x58A504) = eax;

loc_00190F6E: ;
    edi = edi + 2;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00190ED3; /* jne: not equal / not zero */

loc_00190F78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x58A508) = ebx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00190F90
 * Original: 0x00190F90 - 0x00190FB4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00190F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190F90: ;
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00190FB1; /* jae: above or equal (unsigned >=) */

loc_00190F9B: ;
    eax = ZX16(LO16(eax));
    eax = eax + eax * 8;
    _fa = (uint32_t)(MEM8(eax * 8 + 0x58A518)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax * 8 + 0x58A518), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190FB1; /* je: equal / zero */

loc_00190FAB: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00190FB1: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00190FC0
 * Original: 0x00190FC0 - 0x0019101B (91 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190FC0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00190FCB; /* jne: not equal / not zero */

loc_00190FC8: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00190FCB: ;
    eax = edx;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_00190FD1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00190FD1; /* jne: not equal / not zero */

loc_00190FD8: ;
    eax = eax - esi;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00190FE8; /* jl: less (signed <) */

loc_00190FE4: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00190FE8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00190FFE; /* jl: less (signed <) */

loc_00190FEC: ;
    /* nop */

loc_00190FF0: ;
    SET_LO8(eax, MEM8(esi + edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190FFE; /* je: equal / zero */

loc_00190FF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190FFE; /* je: equal / zero */

loc_00190FFB: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00190FF0; /* jns: not sign (positive) */

loc_00190FFE: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = esi + 1;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019100Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0019100E: ;
    esp = esp + 0xC;
    MEM8(esi + edi + 1) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00191020
 * Original: 0x00191020 - 0x0019112F (271 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191020(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00191020: ;
    eax = ZX16(MEM16(esp + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x54);
    eax = eax + eax * 8;
    ecx = MEM32(eax * 8 + 0x58A51C);
    eax = eax * 8 + 0x58A518;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x30);
    edx = MEM32(ebp + esi + 4);
    ebp = ebp + esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001910FB; /* jne: not equal / not zero */

loc_00191053: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00191095; /* je: equal / zero */

loc_0019105B: ;
    MEM32(0x58EDB8) = ebx;
    MEM32(0x58EDBC) = ebx;
    MEM32(0x58EDC0) = 1;
    MEM32(0x58EDC4) = ebx;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00191081u); RECOMP_ABI_CALL(0x0019EDB6u, sub_0019EDB6); /* call 0x0019EDB6 */

loc_00191081: ;
    POP32(esp, esi);
    MEM32(0x58EDCC) = ebp;
    POP32(esp, ebp);
    MEM32(0x58EDC8) = eax;
    eax = 0x58EDB8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00191095: ;
    eax = eax + 8;
    PUSH32(esp, 0x58ED38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001910A3u); RECOMP_ABI_CALL(0x00190FC0u, sub_00190FC0); /* call 0x00190FC0 */

loc_001910A3: ;
    eax = ebp + 0x14;
    esp = esp + 8;
    ecx = eax;
    goto loc_001910B0;

    /* nop */

loc_001910B0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001910B0; /* jne: not equal / not zero */

loc_001910B7: ;
    PUSH32(esp, edi);
    edi = 0x58ED38;
    eax = eax - ecx;
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001910C2: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001910C2; /* jne: not equal / not zero */

loc_001910CA: ;
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
    MEM32(0x58EDB8) = 0x58ED38;
    MEM32(0x58EDBC) = ebx;
    MEM32(0x58EDC0) = 1;
    MEM32(0x58EDC4) = ebx;
    POP32(esp, edi);
    goto loc_0019111A;

loc_001910FB: ;
    eax = eax + 8;
    MEM32(0x58EDB8) = eax;
    edx = MEM32(ebp);
    MEM32(0x58EDBC) = edx;
    eax = MEM32(ebp + 4);
    MEM32(0x58EDC0) = eax;
    MEM32(0x58EDC4) = ecx;

loc_0019111A: ;
    POP32(esp, esi);
    MEM32(0x58EDCC) = ebp;
    POP32(esp, ebp);
    MEM32(0x58EDC8) = ebx;
    eax = 0x58EDB8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00191130
 * Original: 0x00191130 - 0x00191573 (1091 bytes, 352 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191130(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00191130: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */

loc_00191137: ;
    _fa = (uint32_t)(MEM8(ecx + 0x58A518)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x58A518), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00191155; /* je: equal / zero */

loc_00191140: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x48)) >> 32) & 1);
    ecx = ecx + 0x48;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4800 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00191137; /* jb: below (unsigned <) */

loc_0019114C: ;
    eax = 3;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_00191155: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x4C);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    ebx = eax + eax * 8;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    ebx = ebx * 8 + 0x58A518;
    PUSH32(esp, 4);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 1;
    MEM32(ebx) = ecx;
    MEM8(ebx + 8) = 0;
    PUSH32(esp, 0x3E09D8);
    MEM16(ebp) = LO16(eax);
    PUSH32(esp, esi);
    MEM32(ebx + 4) = esi;
    PUSH32(esp, 0x00191192u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_00191192: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00191564; /* jne: not equal / not zero */

loc_0019119D: ;
    PUSH32(esp, 4);
    edx = esi + 4;
    PUSH32(esp, 0x3D3E64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001911ADu); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001911AD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00191564; /* jne: not equal / not zero */

loc_001911B8: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x30);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x48);
    MEM32(esi + 0x18) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 0x60);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(esi)) >> 32) & 1);
    edi = edi + esi;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    MEM32(esi + 0x48) = edi;
    edi = MEM32(esi + 0x14);
    MEM32(esi + 0x30) = edx;
    edx = MEM32(esi + 0x20);
    MEM32(esi + 0x3C) = ecx;
    ecx = MEM32(esi + 0x44);
    MEM32(esi + 0x60) = eax;
    eax = MEM32(esi + 0x2C);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(esi)) >> 32) & 1);
    edi = edi + esi;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    MEM32(esi + 0x14) = edi;
    edi = MEM32(esi + 0x38);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(esi + 0x5C);
    MEM32(esi + 0x44) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(esi + 0x2C) = eax;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(esi)) >> 32) & 1);
    edi = edi + esi;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x5C) = edx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0019123B; /* jbe: below or equal (unsigned <=) */

loc_00191222: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */

loc_00191224: ;
    edx = MEM32(esi + 0x18);
    SET_LO16(edi, MEM16(ebp));
    MEM16(ecx + edx + 0x16) = LO16(edi);
    edx = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x18)) >> 32) & 1);
    ecx = ecx + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00191224; /* jb: below (unsigned <) */

loc_0019123B: ;
    eax = MEM32(esi + 0x10);
    _cf = (int)((((uint64_t)(MEM32(0x58ED18)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(0x58ED18) = MEM32(0x58ED18) + eax;
    ecx = MEM32(esi + 0x1C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00191267; /* jbe: below or equal (unsigned <=) */

loc_0019124D: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    /* nop */

loc_00191250: ;
    edx = MEM32(esi + 0x24);
    SET_LO16(edi, MEM16(ebp));
    MEM16(edx + ecx + 0x1A) = LO16(edi);
    edx = MEM32(esi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1C)) >> 32) & 1);
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00191250; /* jb: below (unsigned <) */

loc_00191267: ;
    eax = MEM32(esi + 0x1C);
    _cf = (int)((((uint64_t)(MEM32(0x58ED1C)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(0x58ED1C) = MEM32(0x58ED1C) + eax;
    eax = MEM32(esi + 0x34);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001912BF; /* jbe: below or equal (unsigned <=) */

loc_00191279: ;
    /* nop */

loc_00191280: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ebx + 4);
    eax = ecx + edi * 4;
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + edx;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001912B7; /* je: equal / zero */

loc_00191296: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001912B7; /* jbe: below or equal (unsigned <=) */

loc_0019129F: ;
    eax = ecx + 0x10;

loc_001912A2: ;
    ebp = MEM32(ebx + 4);
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ebp)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ebp;
    ebp = ZX8(MEM8(ecx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001912A2; /* jb: below (unsigned <) */

loc_001912B3: ;
    ebp = MEM32(esp + 0x54);

loc_001912B7: ;
    eax = MEM32(esi + 0x34);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00191280; /* jb: below (unsigned <) */

loc_001912BF: ;
    ecx = MEM32(esi + 0x34);
    _cf = (int)((((uint64_t)(MEM32(0x58ED28)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(0x58ED28) = MEM32(0x58ED28) + ecx;
    eax = MEM32(esi + 0x40);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001912F8; /* jbe: below or equal (unsigned <=) */

loc_001912D1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_001912D3: ;
    ecx = MEM32(esi + 0x48);
    edi = MEM32(ebx + 4);
    _cf = (int)((((uint64_t)(MEM32(ecx + eax + 8)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(ecx + eax + 8) = MEM32(ecx + eax + 8) + edi;
    SET_LO16(edi, MEM16(ebp));
    ecx = ecx + eax + 8;
    ecx = MEM32(esi + 0x48);
    MEM16(ecx + eax + 0xE) = LO16(edi);
    ecx = MEM32(esi + 0x40);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001912D3; /* jb: below (unsigned <) */

loc_001912F8: ;
    edx = MEM32(esi + 0x40);
    _cf = (int)((((uint64_t)(MEM32(0x58ED2C)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(0x58ED2C) = MEM32(0x58ED2C) + edx;
    ecx = MEM32(esi + 0x58);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00191336; /* jbe: below or equal (unsigned <=) */

loc_0019130A: ;
    /* nop */

loc_00191310: ;
    ecx = MEM32(esi + 0x60);
    edi = MEM32(ecx + eax * 4);
    edx = MEM32(ebx + 4);
    ecx = ecx + eax * 4;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x60);
    edx = MEM32(ecx + eax * 4);
    SET_LO16(ecx, MEM16(ebp));
    MEM16(edx + 2) = LO16(ecx);
    ecx = MEM32(esi + 0x58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00191310; /* jb: below (unsigned <) */

loc_00191336: ;
    edx = MEM32(esi + 0x58);
    edi = MEM32(0x58ED30);
    ecx = MEM32(esp + 0x50);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x58ED30) = edi;
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019154B; /* je: equal / zero */

loc_00191359: ;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;

loc_00191361: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00191532; /* jae: above or equal (unsigned >=) */

loc_0019136E: ;
    eax = MEM32(esi + 0x24);
    edi = MEM32(esp + 0x14);
    SET_LO16(ecx, MEM16(eax + edi));
    SET_LO16(edx, MEM16(ebp));
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFF (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(eax + 0x1A) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00191512; /* je: equal / zero */

loc_0019138E: ;
    edi = MEM32(esi + 0x30);
    ebp = ZX16(LO16(ecx));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x54);
    edx = MEM32(ebp + edi + 8);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(edi)) >> 32) & 1);
    ebp = ebp + edi;
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001913AA; /* jne: not equal / not zero */

loc_001913A6: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 3) = MEM8(eax + 3) | 2;

loc_001913AA: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = edx;
    MEM16(esp + 0x2C) = LO16(edx);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00191422; /* jne: not equal / not zero */

loc_001913C6: ;
    MEM16(esp + 0x2C) = 2;
    MEM16(esp + 0x1C) = 0x69;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 2), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = 0;
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + 0x1E) = LO16(edx);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x1E);
    ecx = ecx + ecx * 8;
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    MEM16(esp + 0x28) = LO16(ecx);
    ecx = MEM32(eax + 4);
    if (6) _cf = (int)(((ecx) >> ((6) - 1)) & 1);
    ecx = ecx >> 6;
    edx = ZX16(LO16(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = ecx + ecx * 8;
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    MEM32(esp + 0x24) = ecx;
    MEM16(esp + 0x2A) = 4;
    MEM16(esp + 0x2E) = 0x40;
    goto loc_00191483;

loc_00191422: ;
    MEM16(esp + 0x1C) = LO16(ecx);
    MEM16(esp + 0x2C) = 0;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 2), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = 0;
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + 0x1E) = LO16(ecx);
    edi = MEM32(eax + 4);
    MEM32(esp + 0x20) = edi;
    SET_LO8(edx, MEM8(eax + 2));
    ecx = ZX16(LO16(ecx));
    _cf = 0; /* logical op clears CF */
    edx = edx & 4;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    SET_LO16(ecx, LO16(edx));
    edx = ZX16(LO16(ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    MEM16(esp + 0x28) = LO16(ecx);
    MEM32(esp + 0x24) = edx;
    SET_LO8(ecx, MEM8(eax + 2));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 4);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFF8u;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    MEM16(esp + 0x2A) = LO16(ecx);

loc_00191483: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, edx);
    edi = eax + 8;
    eax = MEM32(0x58A514);
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, edi);
    edx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = 0x18;
    MEM32(esp + 0x44) = 0x400A0;
    MEM32(esp + 0x4C) = ecx;
    PUSH32(esp, 0x001914CEu); RECOMP_ICALL_SAFE(0x0037192Eu, _icall_esp); /* manual call 0x0037192E */
    }

loc_001914CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00191506; /* jl: less (signed <) */

loc_001914D2: ;
    ecx = ZX16(MEM16(esp + 0x28));
    edx = MEM32(ebp + 4);
    eax = edx + ecx + -1;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = MEM32(ebx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001914F7u); RECOMP_ICALL_SAFE(0x00371384u, _icall_esp); /* manual call 0x00371384 */
    }

loc_001914F7: ;
    edx = MEM32(edi);
    PUSH32(esp, 7);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00191501u); RECOMP_ABI_CALL(0x0018FE50u, sub_0018FE50); /* call 0x0018FE50 */

loc_00191501: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    goto loc_0019150E;

loc_00191506: ;
    MEM32(esp + 0x18) = 5;

loc_0019150E: ;
    ebp = MEM32(esp + 0x54);

loc_00191512: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x1C)) >> 32) & 1);
    edx = edx + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00191361; /* je: equal / zero */

loc_00191532: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(0x58ED20);
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    POP32(esp, ebp);
    MEM32(0x58ED20) = edx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_0019154B: ;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(0x58ED24);
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    POP32(esp, ebp);
    MEM32(0x58ED24) = ecx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_00191564: ;
    PUSH32(esp, 0x00191569u); RECOMP_ABI_CALL(0x00123E20u, sub_00123E20); /* call 0x00123E20 */

loc_00191569: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00191580
 * Original: 0x00191580 - 0x0019159D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191580(void)
{

loc_00191580: ;
    eax = ZX16(MEM16(esp + 4));
    eax = eax + eax * 8;
    ecx = MEM32(eax * 8 + 0x58A51C);
    eax = MEM32(esp + 8);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x18);
    eax = eax + edx * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001915A0
 * Original: 0x001915A0 - 0x001915BC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001915A0(void)
{

loc_001915A0: ;
    eax = ZX16(MEM16(esp + 4));
    eax = eax + eax * 8;
    ecx = MEM32(eax * 8 + 0x58A51C);
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001915C0
 * Original: 0x001915C0 - 0x001915DA (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001915C0(void)
{

loc_001915C0: ;
    eax = ZX16(MEM16(esp + 4));
    eax = eax + eax * 8;
    ecx = MEM32(eax * 8 + 0x58A51C);
    edx = MEM32(ecx + 0x60);
    eax = MEM32(esp + 8);
    eax = MEM32(edx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001915E0
 * Original: 0x001915E0 - 0x00191638 (88 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001915E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001915E0: ;
    ecx = ZX16(MEM16(esp + 4));
    ecx = ecx + ecx * 8;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx * 8 + 0x58A51C);
    ecx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_00191635; /* je: equal / zero */

loc_001915FD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);

loc_00191603: ;
    edx = ecx;
    edx = edx >> 1;
    esi = MEM32(edi + edx * 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    edx = edi + edx * 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00191622; /* je: equal / zero */

loc_00191611: ;
    if (CMP_BE(_fa, _fb)) goto loc_00191617; /* jbe: below or equal (unsigned <=) */

loc_00191613: ;
    edi = edx + 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00191617: ;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00191603; /* jne: not equal / not zero */

loc_0019161D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00191622: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191633; /* je: equal / zero */

loc_0019162A: ;
    ecx = MEM32(ebp + 0x18);
    eax = edx + edx * 2;
    eax = ecx + eax * 8;

loc_00191633: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00191635: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00191640
 * Original: 0x00191640 - 0x00191699 (89 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00191640: ;
    ecx = ZX16(MEM16(esp + 4));
    ecx = ecx + ecx * 8;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx * 8 + 0x58A51C);
    ecx = MEM32(ebp + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x44);
    if (TEST_Z(_fa, _fb)) goto loc_00191696; /* je: equal / zero */

loc_0019165D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);

loc_00191663: ;
    edx = ecx;
    edx = edx >> 1;
    esi = MEM32(edi + edx * 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    edx = edi + edx * 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00191682; /* je: equal / zero */

loc_00191671: ;
    if (CMP_BE(_fa, _fb)) goto loc_00191677; /* jbe: below or equal (unsigned <=) */

loc_00191673: ;
    edi = edx + 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00191677: ;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00191663; /* jne: not equal / not zero */

loc_0019167D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00191682: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191694; /* je: equal / zero */

loc_0019168A: ;
    eax = MEM32(ebp + 0x48);
    edx = edx << 4;
    edx = edx + eax;
    eax = edx;

loc_00191694: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00191696: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001916A0
 * Original: 0x001916A0 - 0x0019178F (239 bytes, 76 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001916A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001916A0: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax + eax * 8;
    PUSH32(esp, esi);
    esi = MEM32(ebp * 8 + 0x58A51C);
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp * 8 + 0x58A518;
    PUSH32(esp, edi);
    if ((_fas < 0)) goto loc_001916DB; /* js: sign (negative) */

loc_001916BE: ;
    edi = eax + eax * 2;
    edi = edi << 3;
    ebx = eax + 1;

loc_001916C7: ;
    eax = MEM32(esi + 0x18);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001916D2u); RECOMP_ABI_CALL(0x00190D60u, sub_00190D60); /* call 0x00190D60 */

loc_001916D2: ;
    esp = esp + 4;
    edi = edi - 0x18;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001916C7; /* jne: not equal / not zero */

loc_001916DB: ;
    ecx = MEM32(esi + 0x10);
    MEM32(0x58ED18) = MEM32(0x58ED18) - ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x001916E9u); RECOMP_ICALL_SAFE(0x0037084Du, _icall_esp); /* manual call 0x0037084D */
    }

loc_001916E9: ;
    eax = MEM32(esi + 0x1C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0019170E; /* js: sign (negative) */

loc_001916EF: ;
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    ebx = eax + 1;

loc_001916F7: ;
    edx = MEM32(esi + 0x24);
    eax = MEM32(edi + edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00191708; /* je: equal / zero */

loc_00191702: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00191708u); RECOMP_ICALL_SAFE(0x0036F5DCu, _icall_esp); /* manual call 0x0036F5DC */
    }

loc_00191708: ;
    edi = edi - 0x1C;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001916F7; /* jne: not equal / not zero */

loc_0019170E: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(0x58ED1C);
    ecx = ecx - eax;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 2 (8-bit) */
    MEM32(0x58ED1C) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00191730; /* je: equal / zero */

loc_00191725: ;
    ecx = MEM32(esi + 0x28);
    MEM32(0x58ED20) = MEM32(0x58ED20) - ecx;
    goto loc_00191739;

loc_00191730: ;
    edx = MEM32(esi + 0x28);
    MEM32(0x58ED24) = MEM32(0x58ED24) - edx;

loc_00191739: ;
    eax = MEM32(esi + 0x34);
    edi = MEM32(0x58ED28);
    edx = MEM32(0x58ED2C);
    edi = edi - eax;
    MEM32(0x58ED28) = edi;
    ecx = MEM32(esi + 0x40);
    edx = edx - ecx;
    ecx = MEM32(0x58ED30);
    MEM32(0x58ED2C) = edx;
    edx = MEM32(esi + 0x58);
    ecx = ecx - edx;
    MEM32(0x58ED30) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x00191771u); RECOMP_ICALL_SAFE(0x0037084Du, _icall_esp); /* manual call 0x0037084D */
    }

loc_00191771: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00191783; /* je: equal / zero */

loc_00191777: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00191780u); RECOMP_ABI_CALL(0x00123CD0u, sub_00123CD0); /* call 0x00123CD0 */

loc_00191780: ;
    esp = esp + 4;

loc_00191783: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00191790
 * Original: 0x00191790 - 0x001918F9 (361 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191790(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00191790: ;
    esp = esp - 0x68;
    eax = MEM32(0x47A050);
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esp + 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM16(eax) = 0xFFFF;
    PUSH32(esp, 0x001917B6u); RECOMP_ABI_CALL(0x00124420u, sub_00124420); /* call 0x00124420 */

loc_001917B6: ;
    ebx = eax;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001918E1; /* je: equal / zero */

loc_001917C4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001918E1; /* je: equal / zero */

loc_001917CC: ;
    ebp = MEM32(esp + 0x80);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001917E4; /* je: equal / zero */

loc_001917D7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001917DDu); RECOMP_ABI_CALL(0x00123DD0u, sub_00123DD0); /* call 0x00123DD0 */

loc_001917DD: ;
    esp = esp + 4;
    edi = eax;
    goto loc_001917FA;

loc_001917E4: ;
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001917F3u); RECOMP_ABI_CALL(0x00123D20u, sub_00123D20); /* call 0x00123D20 */

loc_001917F3: ;
    edi = MEM32(esp + 0x2C);
    esp = esp + 0x10;

loc_001917FA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00191804u); RECOMP_ABI_CALL(0x00123D70u, sub_00123D70); /* call 0x00123D70 */

loc_00191804: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019180Au); RECOMP_ABI_CALL(0x00123CB0u, sub_00123CB0); /* call 0x00123CB0 */

loc_0019180A: ;
    esi = eax;
    esp = esp + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001918C0; /* je: equal / zero */

loc_00191817: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00191821u); RECOMP_ABI_CALL(0x00123D20u, sub_00123D20); /* call 0x00123D20 */

loc_00191821: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00191896; /* jne: not equal / not zero */

loc_00191828: ;
    eax = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191837u); RECOMP_ABI_CALL(0x00191130u, sub_00191130); /* call 0x00191130 */

loc_00191837: ;
    edi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019189B; /* jne: not equal / not zero */

loc_00191840: ;
    ecx = MEM32(esp + 0x84);
    eax = ZX16(MEM16(ecx));
    ecx = eax + eax * 8;
    edx = MEM32(ecx * 8 + 0x58A518);
    ecx = ecx * 8 + 0x58A518;
    edx = edx | 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(ecx) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019187A; /* jne: not equal / not zero */

loc_00191864: ;
    eax = MEM32(esp + 0x7C);
    edx = ecx + 8;
    edx = edx - eax;
    /* nop */

loc_00191870: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00191870; /* jne: not equal / not zero */

loc_0019187A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00191880u); RECOMP_ABI_CALL(0x00123CE0u, sub_00123CE0); /* call 0x00123CE0 */

loc_00191880: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 0x00191892u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00191892: ;
    esp = esp + 0x68;
    esp += 4; return; /* ret */

loc_00191896: ;
    edi = 2;

loc_0019189B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001918A1u); RECOMP_ABI_CALL(0x00123CD0u, sub_00123CD0); /* call 0x00123CD0 */

loc_001918A1: ;
    esp = esp + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001918AAu); RECOMP_ABI_CALL(0x00123CE0u, sub_00123CE0); /* call 0x00123CE0 */

loc_001918AA: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 0x001918BCu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001918BC: ;
    esp = esp + 0x68;
    esp += 4; return; /* ret */

loc_001918C0: ;
    PUSH32(esp, ebx);
    edi = 3;
    PUSH32(esp, 0x001918CBu); RECOMP_ABI_CALL(0x00123CE0u, sub_00123CE0); /* call 0x00123CE0 */

loc_001918CB: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 0x001918DDu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001918DD: ;
    esp = esp + 0x68;
    esp += 4; return; /* ret */

loc_001918E1: ;
    ecx = MEM32(esp + 0x74);
    edi = 1;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x001918F5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001918F5: ;
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_00191900
 * Original: 0x00191900 - 0x00191934 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00191900: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFE) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFE (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019190F; /* je: equal / zero */

loc_0019190A: ;
    g_seh_ebp = ebp; sub_001916A0(); return; /* tail jmp 0x001916A0 */

loc_0019190F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */

loc_00191915: ;
    _fa = (uint32_t)(MEM8(esi + 0x58A518)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58A518), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00191925; /* je: equal / zero */

loc_0019191E: ;
    eax = edi;
    PUSH32(esp, 0x00191925u); RECOMP_ABI_CALL(0x001916A0u, sub_001916A0); /* call 0x001916A0 */

loc_00191925: ;
    esi = esi + 0x48;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x4800 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00191915; /* jb: below (unsigned <) */

loc_00191931: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00191940
 * Original: 0x00191940 - 0x00191980 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191940: ;
    SET_LO8(eax, MEM8(0x58F1B8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019197A; /* jne: not equal / not zero */

loc_00191949: ;
    eax = 0; /* xor self */
    goto loc_00191950;

    /* nop */

loc_00191950: ;
    SET_LO8(ecx, MEM8(eax + 0x506438));
    MEM8(eax + 0x58F1B8) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00191950; /* jne: not equal / not zero */

loc_00191961: ;
    PUSH32(esp, edi);
    edi = 0x58F1B8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00191968: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00191968; /* jne: not equal / not zero */

loc_00191970: ;
    SET_LO16(eax, MEM16(0x3DB140));
    MEM16(edi) = LO16(eax);
    POP32(esp, edi);

loc_0019197A: ;
    eax = 0x58F1B8;
    esp += 4; return; /* ret */

}

/**
 * sub_00191980
 * Original: 0x00191980 - 0x001919C1 (65 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191980(void)
{

loc_00191980: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x3C;
    edi = 0x58EDD0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = 0; /* xor self */
    ecx = 0x80;
    edi = 0x58EEC8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x58F0D8;
    MEM32(0x58F0C8) = edx;
    MEM32(0x58EEC0) = edx;
    PUSH32(esp, 0x001919B3u); RECOMP_ABI_CALL(0x00192B10u, sub_00192B10); /* call 0x00192B10 */

loc_001919B3: ;
    MEM32(0x58F0CC) = 1;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001919D0
 * Original: 0x001919D0 - 0x00191C20 (592 bytes, 204 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001919D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001919D0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x110));
    esp = esp - 0x110;
    ecx = MEM32(0x58F0C8);
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    esi = 0x8000;
    _fa = (uint32_t)(MEM16(edi + 0x58EDD0)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(edi + 0x58EDD0), LO16(esi) (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x118) = eax;
    MEM32(esp + 0xC) = edx;
    eax = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00191A24; /* je: equal / zero */

loc_00191A06: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00191A0E; /* jne: not equal / not zero */

loc_00191A0C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_00191A0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00191B0F; /* je: equal / zero */

loc_00191A16: ;
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    _fa = (uint32_t)(MEM16(edi + 0x58EDD0)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(edi + 0x58EDD0), LO16(esi) (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00191A06; /* jne: not equal / not zero */

loc_00191A24: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    ebx = ecx + 0x58EDD0;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x138);
    ecx = ebp;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(ebx) = LO16(ecx);
    MEM32(esp + 0x18) = ebx;
    MEM8(ebx + 2) = 1;
    MEM32(0x58F0C8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00191A57; /* jne: not equal / not zero */

loc_00191A51: ;
    MEM32(0x58F0C8) = edx;

loc_00191A57: ;
    edi = MEM32(esp + 0x128);
    ecx = edi;
    esi = MEM32(ecx);
    eax = ebx + 8;
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(eax + 8) = esi;
    esi = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = esi;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = ecx;
    MEM32(ebx + 4) = 1;
    MEM32(ebx + 0x20) = edx;
    MEM32(ebx + 0x24) = edx;
    MEM8(ebx + 0x34) = 0x7F;
    MEM8(ebx + 0x35) = 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(edi + 0x14);
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00191AFC; /* je: equal / zero */

loc_00191AA5: ;
    PUSH32(esp, 0x00191AAAu); RECOMP_ABI_CALL(0x00191940u, sub_00191940); /* call 0x00191940 */

loc_00191AAA: ;
    edx = esp + 0x1C;
    edi = edi;

loc_00191AB0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00191AB0; /* jne: not equal / not zero */

loc_00191ABA: ;
    edx = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00191AC4u); RECOMP_ABI_CALL(0x00123C70u, sub_00123C70); /* call 0x00123C70 */

loc_00191AC4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    edx = eax;
    /* nop */

loc_00191AD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00191AD0; /* jne: not equal / not zero */

loc_00191AD7: ;
    edi = esp + 0x1C;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00191AE0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00191AE0; /* jne: not equal / not zero */

loc_00191AE8: ;
    ecx = eax;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    esi = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    esi = MEM32(esp + 0x14);

loc_00191AFC: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00191BBE; /* ja: above (unsigned >) */

loc_00191B08: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x191C0C); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00191B3Cu) goto loc_00191B3C;
    if (_jt == 0x00191B5Au) goto loc_00191B5A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00191B0F: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    MEM32(esp + 0xC) = 0x202;

loc_00191B19: ;
    ecx = MEM32(esp + 0x120);
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = ebx;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x10C);
    PUSH32(esp, 0x00191B35u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00191B35: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x110)) >> 32) & 1);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

loc_00191B3C: ;
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = 0x58F0D8;
    PUSH32(esp, 0x00191B58u); RECOMP_ABI_CALL(0x001937F0u, sub_001937F0); /* call 0x001937F0 */

loc_00191B58: ;
    goto loc_00191BBB;

loc_00191B5A: ;
    eax = MEM32(esp + 0x12C);
    edi = MEM32(eax + 4);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 2));
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = 0;
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = ebp;
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 1;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0x400;
    PUSH32(esp, ecx);
    _cf = (int)((ebp) != 0);
    ebp = (uint32_t)(-(int32_t)ebp);
    ebp = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFFFFFFF8u;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x10)) >> 32) & 1);
    ebp = ebp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(esi + 4);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = 0x58F0D8;
    PUSH32(esp, 0x00191BBBu); RECOMP_ABI_CALL(0x00193870u, sub_00193870); /* call 0x00193870 */

loc_00191BBB: ;
    MEM32(ebx + 0x38) = eax;

loc_00191BBE: ;
    ecx = MEM32(ebx + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_00191BF5; /* jne: not equal / not zero */

loc_00191BC6: ;
    eax = MEM32(esp + 0x14);
    MEM16(eax) = LO16(ecx);
    ecx = MEM32(esp + 0x120);
    POP32(esp, edi);
    MEM32(ecx) = 0;
    ecx = MEM32(esp + 0x114);
    POP32(esp, esi);
    eax = 0x202;
    POP32(esp, ebx);
    PUSH32(esp, 0x00191BEEu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00191BEE: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x110)) >> 32) & 1);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

loc_00191BF5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00191BFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00191BFC: ;
    ecx = MEM32(ebx + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00191C06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00191C06: ;
    goto loc_00191B19;

    /* nop */
    POP32(esp, edx);
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(MEM32(ecx)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x1B)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx + 0x1B) = MEM8(edx + 0x1B) + LO8(ebx);
    { uint64_t _t = (uint64_t)(MEM32(eax)) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1B (8-bit) */
    _cf = (int)(_fa < _fb);
    { uint64_t _t = (uint64_t)(MEM32(eax)) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* sbb */
    POP32(esp, edx);
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(MEM32(ecx)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00191C20
 * Original: 0x00191C20 - 0x00191C3B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00191C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191C20: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00191C38; /* je: equal / zero */

loc_00191C28: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ecx + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00191C38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00191C38: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00191C40
 * Original: 0x00191C40 - 0x00191C51 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00191C40(void)
{

loc_00191C40: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 2));
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00191C60
 * Original: 0x00191C60 - 0x00191CAC (76 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191C60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00191C60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX8(MEM8(esi + 2));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00191CA8; /* ja: above (unsigned >) */

loc_00191C6F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x191CAC); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00191C76u) goto loc_00191C76;
    if (_jt == 0x00191C8Cu) goto loc_00191C8C;
    if (_jt == 0x00191C9Au) goto loc_00191C9A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00191C76: ;
    ecx = MEM32(esi + 0x38);
    MEM8(esi + 3) = 0;
    MEM8(esi + 2) = 2;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00191C88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00191C88: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00191C8C: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00191C96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00191C96: ;
    MEM8(esi + 2) = 1;

loc_00191C9A: ;
    ecx = MEM32(esi + 0x38);
    MEM8(esi + 2) = 2;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00191CA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00191CA8: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00191CC0
 * Original: 0x00191CC0 - 0x00191CE8 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191CC0(void)
{

loc_00191CC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x38);
    eax = eax & 0xFFFFFFFEu;
    MEM8(esi + 2) = 1;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00191CDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00191CDC: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00191CE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00191CE4: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00191CF0
 * Original: 0x00191CF0 - 0x00191E77 (391 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191CF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00191CF0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(eax + 0x24) = ebx;
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_00191D19; /* jae: above or equal (unsigned >=) */

loc_00191D08: ;
    ecx = ZX8(LO8(eax));
    edx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x460758);
    MEM32(esp + 0x10) = edx;
    goto loc_00191D1D;

loc_00191D19: ;
    MEM32(esp + 0x10) = ebx;

loc_00191D1D: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00191D2D; /* jge: greater or equal (signed >=) */

loc_00191D25: ;
    esi = SX8(LO8(eax));
    esi = esi + 0x7F;
    goto loc_00191D32;

loc_00191D2D: ;
    esi = 0x7F;

loc_00191D32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    ebp = 0x7F;
    if (CMP_LE(_fas, _fbs)) goto loc_00191D40; /* jle: less or equal (signed <=) */

loc_00191D3B: ;
    eax = SX8(LO8(eax));
    ebp = ebp - eax;

loc_00191D40: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00191D50; /* jge: greater or equal (signed >=) */

loc_00191D48: ;
    ecx = SX8(LO8(eax));
    ecx = ecx + 0x7F;
    goto loc_00191D55;

loc_00191D50: ;
    ecx = 0x7F;

loc_00191D55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00191D65; /* jle: less or equal (signed <=) */

loc_00191D59: ;
    edx = SX8(LO8(eax));
    eax = 0x7F;
    eax = eax - edx;
    goto loc_00191D6A;

loc_00191D65: ;
    eax = 0x7F;

loc_00191D6A: ;
    edx = MEM32(esp + 0x40);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ebx) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00191D80; /* jge: greater or equal (signed >=) */

loc_00191D73: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    ebp = 0; /* xor self */
    edx = 0x7F;
    esi = 0; /* xor self */

loc_00191D80: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ebx = ebx >> 7;
    edi = ZX8(LO8(ebx));
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    ebx = ebx >> 7;
    esi = ZX8(LO8(ebx));
    MEM32(esp + 0x3C) = esi;
    esi = ebp + 1;
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax >> 7;
    ebx = ebx >> 7;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80 (32-bit) */
    ecx = ZX8(LO8(eax));
    ebp = ZX8(LO8(ebx));
    eax = SX16(LO16(edx));
    if (CMP_GE(_fas, _fbs)) goto loc_00191DCF; /* jge: greater or equal (signed >=) */

loc_00191DC1: ;
    edx = (uint32_t)(int32_t)SMEM16(edi * 2 + 0x460758);
    MEM32(esp + 0x14) = edx;
    goto loc_00191DD3;

loc_00191DCF: ;
    MEM32(esp + 0x14) = esi;

loc_00191DD3: ;
    edx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00191DED; /* jge: greater or equal (signed >=) */

loc_00191DDF: ;
    edx = (uint32_t)(int32_t)SMEM16(edx * 2 + 0x460758);
    MEM32(esp + 0x18) = edx;
    goto loc_00191DF1;

loc_00191DED: ;
    MEM32(esp + 0x18) = esi;

loc_00191DF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00191E06; /* jge: greater or equal (signed >=) */

loc_00191DF8: ;
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x460758);
    MEM32(esp + 0x1C) = eax;
    goto loc_00191E0A;

loc_00191E06: ;
    MEM32(esp + 0x1C) = esi;

loc_00191E0A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00191E20; /* jge: greater or equal (signed >=) */

loc_00191E12: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp * 2 + 0x460758);
    MEM32(esp + 0x20) = edx;
    goto loc_00191E24;

loc_00191E20: ;
    MEM32(esp + 0x20) = esi;

loc_00191E24: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00191E3A; /* jge: greater or equal (signed >=) */

loc_00191E2C: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x460758);
    MEM32(esp + 0x24) = eax;
    goto loc_00191E3E;

loc_00191E3A: ;
    MEM32(esp + 0x24) = esi;

loc_00191E3E: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x4607D8);
    esi = MEM32(esp + 0x30);
    eax = esp + 0x14;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00191E5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00191E5F: ;
    SET_LO8(ecx, MEM8(esp + 0x34));
    SET_LO8(edx, MEM8(esp + 0x38));
    POP32(esp, edi);
    MEM8(esi + 0x34) = LO8(ecx);
    MEM8(esi + 0x35) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00191E80
 * Original: 0x00191E80 - 0x00191EBE (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191E80(void)
{

loc_00191E80: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(eax));
    edx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x460758);
    eax = ZX8(MEM8(eax + 2));
    ecx = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x460758);
    MEM32(esp) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(edx + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00191EB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00191EB8: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00191EC0
 * Original: 0x00191EC0 - 0x00191F1C (92 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191EC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00191EDEu); RECOMP_ABI_CALL(0x001919D0u, sub_001919D0); /* call 0x001919D0 */

loc_00191EDE: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00191F1A; /* jne: not equal / not zero */

loc_00191EE5: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x7F;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191F09u); RECOMP_ABI_CALL(0x00191CF0u, sub_00191CF0); /* call 0x00191CF0 */

loc_00191F09: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00191F19; /* jne: not equal / not zero */

loc_00191F10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191F16u); RECOMP_ABI_CALL(0x00191C60u, sub_00191C60); /* call 0x00191C60 */

loc_00191F16: ;
    esp = esp + 4;

loc_00191F19: ;
    POP32(esp, esi);

loc_00191F1A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00191F20
 * Original: 0x00191F20 - 0x00191F4D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191F20: ;
    ecx = 0; /* xor self */
    eax = 0x58EEC8;

loc_00191F27: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191F37; /* je: equal / zero */

loc_00191F2B: ;
    eax = eax + 0x20;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58F0C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58F0C8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00191F27; /* jb: below (unsigned <) */

loc_00191F36: ;
    esp += 4; return; /* ret */

loc_00191F37: ;
    eax = ecx;
    eax = eax << 5;
    MEM32(eax + 0x58EEC8) = 0;
    MEM32(0x58EEC0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00191F50
 * Original: 0x00191F50 - 0x00191FCF (127 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191F50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx = MEM32(ebx + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00191F5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00191F5D: ;
    edx = ebx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00191F9D; /* je: equal / zero */

loc_00191F64: ;
    PUSH32(esp, esi);

loc_00191F65: ;
    esi = MEM32(edx + 0x1C);
    ecx = 0; /* xor self */
    eax = 0x58EEC8;
    /* nop */

loc_00191F70: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191F81; /* je: equal / zero */

loc_00191F74: ;
    eax = eax + 0x20;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58F0C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58F0C8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00191F70; /* jb: below (unsigned <) */

loc_00191F7F: ;
    goto loc_00191F96;

loc_00191F81: ;
    edx = ecx;
    edx = edx << 5;
    MEM32(edx + 0x58EEC8) = 0;
    MEM32(0x58EEC0) = ecx;

loc_00191F96: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edx = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00191F65; /* jne: not equal / not zero */

loc_00191F9C: ;
    POP32(esp, esi);

loc_00191F9D: ;
    ecx = 0; /* xor self */
    eax = 0x58EDD0;

loc_00191FA4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191FB7; /* je: equal / zero */

loc_00191FA8: ;
    eax = eax + 0x3C;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58EEC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58EEC0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00191FA4; /* jb: below (unsigned <) */

loc_00191FB3: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00191FB7: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    MEM16(eax + 0x58EDD0) = 0;
    MEM32(0x58F0C8) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00191FD0
 * Original: 0x00191FD0 - 0x00192020 (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191FD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x58EDD0;
    edi = 4;
    /* nop */

loc_00191FE0: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00191FEF; /* je: equal / zero */

loc_00191FE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191FECu); RECOMP_ABI_CALL(0x00191F50u, sub_00191F50); /* call 0x00191F50 */

loc_00191FEC: ;
    esp = esp + 4;

loc_00191FEF: ;
    esi = esi + 0x3C;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00191FE0; /* jne: not equal / not zero */

loc_00191FF5: ;
    eax = 0; /* xor self */
    ecx = 0x3C;
    edi = 0x58EDD0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x80;
    edi = 0x58EEC8;
    edx = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(0x58F0C8) = edx;
    MEM32(0x58EEC0) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00192020
 * Original: 0x00192020 - 0x0019205E (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192020: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x58EDD0;
    edi = 4;
    /* nop */

loc_00192030: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019203F; /* je: equal / zero */

loc_00192036: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019203Cu); RECOMP_ABI_CALL(0x00191F50u, sub_00191F50); /* call 0x00191F50 */

loc_0019203C: ;
    esp = esp + 4;

loc_0019203F: ;
    esi = esi + 0x3C;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00192030; /* jne: not equal / not zero */

loc_00192045: ;
    ecx = 0x58F0D8;
    PUSH32(esp, 0x0019204Fu); RECOMP_ABI_CALL(0x001922E0u, sub_001922E0); /* call 0x001922E0 */

loc_0019204F: ;
    POP32(esp, edi);
    MEM32(0x58F0CC) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00192060
 * Original: 0x00192060 - 0x0019227C (540 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192060: ;
    esp = esp - 0x114;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x110) = eax;
    eax = MEM32(0x58F0CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192267; /* je: equal / zero */

loc_0019207F: ;
    eax = MEM32(0x58F0D0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = 0x58EDD2;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = 0;
    edi = edi;

loc_001920A0: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -1), 0x80 (8-bit) */
    edi = MEM32(ebp + 0x36);
    ebx = ebp + -2;
    MEM32(esp + 0x1C) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00192225; /* je: equal / zero */

loc_001920B4: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001920CA; /* jne: not equal / not zero */

loc_001920BA: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001920C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001920C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001920CA; /* jne: not equal / not zero */

loc_001920C6: ;
    MEM8(ebp) = 4;

loc_001920CA: ;
    _fa = (uint32_t)(MEM8(ebx + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 1), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192225; /* je: equal / zero */

loc_001920D4: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192225; /* jne: not equal / not zero */

loc_001920DE: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001920E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001920E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001921AB; /* je: equal / zero */

loc_001920ED: ;
    edx = MEM32(ebp + 0x1E);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192196; /* je: equal / zero */

loc_001920F8: ;
    edi = ebp + 2;
    ecx = 8;
    esi = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, 0x00192109u); RECOMP_ABI_CALL(0x00191F20u, sub_00191F20); /* call 0x00191F20 */

loc_00192109: ;
    ecx = MEM32(ebp + 0x36);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00192111u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192111: ;
    ebp = MEM32(ebp + 0x1A);
    PUSH32(esp, 0x00192119u); RECOMP_ABI_CALL(0x00191940u, sub_00191940); /* call 0x00191940 */

loc_00192119: ;
    edx = esp + 0x20;
    /* nop */

loc_00192120: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192120; /* jne: not equal / not zero */

loc_0019212A: ;
    eax = MEM32(ebx + 8);
    edx = eax;
    /* nop */

loc_00192130: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192130; /* jne: not equal / not zero */

loc_00192137: ;
    edi = esp + 0x20;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00192140: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192140; /* jne: not equal / not zero */

loc_00192148: ;
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
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
    eax = MEM32(ebp + 8);
    eax = eax - 2;
    if ((eax != 0)) goto loc_00192180; /* jne: not equal / not zero */

loc_00192160: ;
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(ebp + 4);
    edx = MEM32(ebp);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = 0x58F0D8;
    PUSH32(esp, 0x0019217Du); RECOMP_ABI_CALL(0x001937F0u, sub_001937F0); /* call 0x001937F0 */

loc_0019217D: ;
    MEM32(ebx + 0x38) = eax;

loc_00192180: ;
    ecx = MEM32(ebx + 0x38);
    eax = MEM32(ebx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0019218Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019218C: ;
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x18);
    goto loc_001921AB;

loc_00192196: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 0x40 (8-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001921A3; /* je: equal / zero */

loc_0019219C: ;
    PUSH32(esp, 0x001921A1u); RECOMP_ABI_CALL(0x00191F50u, sub_00191F50); /* call 0x00191F50 */

loc_001921A1: ;
    goto loc_001921A8;

loc_001921A3: ;
    PUSH32(esp, 0x001921A8u); RECOMP_ABI_CALL(0x00191CC0u, sub_00191CC0); /* call 0x00191CC0 */

loc_001921A8: ;
    esp = esp + 4;

loc_001921AB: ;
    edx = MEM32(ebx + 0x24);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192225; /* je: equal / zero */

loc_001921B3: ;
    esi = MEM32(esp + 0x10);
    esi = esi - MEM32(0x58F0D0);
    if ((esi == 0)) goto loc_001921F3; /* je: equal / zero */

loc_001921BF: ;
    ecx = MEM32(ebx + 0x30);

loc_001921C2: ;
    eax = MEM32(ebx + 0x28);
    eax = eax + ecx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(ebx + 0x28) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001921DC; /* jle: less or equal (signed <=) */

loc_001921CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x2C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001921E1; /* jl: less (signed <) */

loc_001921D4: ;
    ecx = MEM32(ebx + 0x2C);
    MEM32(ebx + 0x28) = ecx;
    goto loc_001921ED;

loc_001921DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x2C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001921E7; /* jle: less or equal (signed <=) */

loc_001921E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001921C2; /* jne: not equal / not zero */

loc_001921E5: ;
    goto loc_001921F3;

loc_001921E7: ;
    eax = MEM32(ebx + 0x2C);
    MEM32(ebx + 0x28) = eax;

loc_001921ED: ;
    edx = edx & 0xFFFFFFFEu;
    MEM32(ebx + 0x24) = edx;

loc_001921F3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00192208; /* jge: greater or equal (signed >=) */

loc_001921FE: ;
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x460758);
    goto loc_0019220A;

loc_00192208: ;
    eax = 0; /* xor self */

loc_0019220A: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00192214u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192214: ;
    SET_LO8(eax, MEM8(ebx + 0x2A));
    MEM8(ebx + 0x34) = LO8(eax);
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192225; /* jne: not equal / not zero */

loc_00192221: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192244; /* jne: not equal / not zero */

loc_00192225: ;
    eax = MEM32(esp + 0x14);
    eax = eax + 0x3C;
    ebp = ebp + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_001920A0; /* jb: below (unsigned <) */

loc_00192242: ;
    goto loc_00192259;

loc_00192244: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 0x40 (8-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00192251; /* je: equal / zero */

loc_0019224A: ;
    PUSH32(esp, 0x0019224Fu); RECOMP_ABI_CALL(0x00191F50u, sub_00191F50); /* call 0x00191F50 */

loc_0019224F: ;
    goto loc_00192256;

loc_00192251: ;
    PUSH32(esp, 0x00192256u); RECOMP_ABI_CALL(0x00191CC0u, sub_00191CC0); /* call 0x00191CC0 */

loc_00192256: ;
    esp = esp + 4;

loc_00192259: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x58F0D0) = ecx;
    POP32(esp, ebx);

loc_00192267: ;
    ecx = MEM32(esp + 0x110);
    eax = 0; /* xor self */
    PUSH32(esp, 0x00192275u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00192275: ;
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_00192280
 * Original: 0x00192280 - 0x001922D7 (87 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192280: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x204);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x7E000);
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001922A3u); RECOMP_ABI_CALL(0x0019EE46u, sub_0019EE46); /* call 0x0019EE46 */

loc_001922A3: ;
    MEM32(esi + 0x6C) = eax;
    eax = esi + 0xA8;
    ecx = 0xE;
    goto loc_001922C0;

    /* nop */
    /* nop */

loc_001922C0: ;
    MEM32(eax + -56) = 0;
    MEM32(eax) = 0;
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001922C0; /* jne: not equal / not zero */

loc_001922D3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001922E0
 * Original: 0x001922E0 - 0x0019235E (126 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001922E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001922E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001922F3; /* je: equal / zero */

loc_001922ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001922F3u); RECOMP_ABI_CALL(0x0019F30Au, sub_0019F30A); /* call 0x0019F30A */

loc_001922F3: ;
    edi = 0x103;
    MEM32(esp + 8) = edi;
    /* nop */

loc_00192300: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00192307u); RECOMP_ABI_CALL(0x0019F583u, sub_0019F583); /* call 0x0019F583 */

loc_00192307: ;
    ecx = MEM32(esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00192314u); RECOMP_ABI_CALL(0x0019F0B3u, sub_0019F0B3); /* call 0x0019F0B3 */

loc_00192314: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192300; /* je: equal / zero */

loc_0019231A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192328; /* je: equal / zero */

loc_00192322: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00192328u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00192328: ;
    esi = esi + 0x10;
    edi = 8;

loc_00192330: ;
    SET_LO8(eax, MEM8(esi + -4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192344; /* je: equal / zero */

loc_00192337: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192344; /* je: equal / zero */

loc_0019233E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00192344u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192344: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x0019234Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019234C: ;
    eax = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00192354u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192354: ;
    esi = esi + 0xC;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00192330; /* jne: not equal / not zero */

loc_0019235A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00192360
 * Original: 0x00192360 - 0x001923F9 (153 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192360(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192360: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = eax + 0x8FFF;
    eax = 0x38E38E39;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 0xD;
    ebx = 0xE;
    esi = 0; /* xor self */
    ebx = ebx - edx;
    MEM32(esp + 0x10) = edi;
    if (((int32_t)ebx < 0)) goto loc_001923BD; /* js: sign (negative) */

loc_0019238A: ;
    ebp = edi + 0x70;
    /* nop */

loc_00192390: ;
    ecx = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    eax = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001923B1; /* jge: greater or equal (signed >=) */

loc_00192399: ;
    edi = ebp;
    goto loc_001923A0;

    /* nop */

loc_001923A0: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001923AD; /* jne: not equal / not zero */

loc_001923A5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001923A0; /* jl: less (signed <) */

loc_001923AD: ;
    edi = MEM32(esp + 0x10);

loc_001923B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001923C7; /* je: equal / zero */

loc_001923B5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00192390; /* jle: less or equal (signed <=) */

loc_001923BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001923C7: ;
    ecx = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001923DF; /* jge: greater or equal (signed >=) */

loc_001923CE: ;
    edi = edi + esi * 4 + 0x70;
    ecx = ecx - esi;
    eax = 1;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x10);

loc_001923DF: ;
    MEM32(edi + esi * 4 + 0xA8) = edx;
    ecx = MEM32(edi + 0x6C);
    POP32(esp, edi);
    eax = esi + esi * 8;
    POP32(esp, esi);
    eax = eax << 0xC;
    POP32(esp, ebp);
    eax = eax + ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00192400
 * Original: 0x00192400 - 0x00192408 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192400(void)
{

loc_00192400: ;
    eax = MEM32(ecx + 0x10);
    MEM8(eax + 3) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00192410
 * Original: 0x00192410 - 0x00192418 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192410(void)
{

loc_00192410: ;
    MEM32(ecx + 0x68) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00192420
 * Original: 0x00192420 - 0x001924B6 (150 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192420: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esp + 0xC);
    ecx = ecx << 0xD;
    ecx = ecx + edx;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0x2000;
    MEM32(eax + 8) = edx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0019246Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019246D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001924B1; /* jl: less (signed <) */

loc_00192471: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x2000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001924AF; /* jae: above or equal (unsigned >=) */

loc_0019247B: ;
    edx = MEM32(esi + 0x60);
    ecx = MEM32(esi + 0x5C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x60) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0019249B; /* jge: greater or equal (signed >=) */

loc_0019248B: ;
    esi = MEM32(esi + 8);
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00192494u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192494: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0019249B: ;
    MEM32(esi + 0x88) = 0;
    MEM32(esi + 0x8C) = 1;

loc_001924AF: ;
    eax = 0; /* xor self */

loc_001924B1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001924C0
 * Original: 0x001924C0 - 0x001924DC (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001924C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001924C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x60) (32-bit) */
    MEM32(ecx + 0x5C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001924D9; /* jl: less (signed <) */

loc_001924CC: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

loc_001924D9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001924E0
 * Original: 0x001924E0 - 0x0019251B (59 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001924E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001924E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x6C) = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192518; /* je: equal / zero */

loc_001924EF: ;
    edx = MEM32(eax);
    MEM32(ecx + 0x70) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x74) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x78) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x7C) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x80) = edx;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x84) = eax;

loc_00192518: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00192520
 * Original: 0x00192520 - 0x0019252A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192520(void)
{

loc_00192520: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x64) = eax;
    esp += 8; return; /* ret 4 */

}
