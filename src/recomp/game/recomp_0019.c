#include "engine/progression/talent_registry_guest.h"
#include "audio/raven_effect_sound_guest.h"
#include "audio/raven_loop_sound_runtime.h"
#include "engine/powers/raven_power_bindings_guest.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/combat/raven_filter_guest.h"
/**
 * X-Men Legends - Recompiled code chunk 19
 * Functions: 250 (0x000E2050 - 0x000EACC0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/**
 * sub_000E2050
 * Original: 0x000E2050 - 0x000E2067 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2050(void)
{

loc_000E2050: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x144) = ecx;
    MEM32(eax + 0x148) = ecx;
    MEM32(eax + 0x14C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2070
 * Original: 0x000E2070 - 0x000E20AE (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2070: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E20AC; /* je: equal / zero */

loc_000E207D: ;
    PUSH32(esp, edi);
    edi = edi;

loc_000E2080: ;
    edi = MEM32(esi + eax * 4 + 0xB8);
    MEM32(esi + 0x104) = MEM32(esi + 0x104) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000E2092u); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000E2092: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000E209Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E209A: ;
    ecx = eax;
    PUSH32(esp, 0x000E20A1u); RECOMP_ABI_CALL(0x000E6CC0u, xml1_guest_combat_event_release); /* call 0x000E6CC0 */

loc_000E20A1: ;
    eax = MEM32(esi + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2080; /* jne: not equal / not zero */

loc_000E20AB: ;
    POP32(esp, edi);

loc_000E20AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E2080
 * Original: 0x000E2080 - 0x000E20AE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2080: ;
    edi = MEM32(esi + eax * 4 + 0xB8);
    MEM32(esi + 0x104) = MEM32(esi + 0x104) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000E2092u); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000E2092: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000E209Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E209A: ;
    ecx = eax;
    PUSH32(esp, 0x000E20A1u); RECOMP_ABI_CALL(0x000E6CC0u, xml1_guest_combat_event_release); /* call 0x000E6CC0 */

loc_000E20A1: ;
    eax = MEM32(esi + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2080; /* jne: not equal / not zero */

loc_000E20AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E20B0
 * Original: 0x000E20B0 - 0x000E20D5 (37 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E20B0(void)
{

loc_000E20B0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000E20C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E20C9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E20D1u); RECOMP_ABI_CALL(0x000E1D90u, sub_000E1D90); /* call 0x000E1D90 */

loc_000E20D1: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E20E0
 * Original: 0x000E20E0 - 0x000E2105 (37 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E20E0(void)
{

loc_000E20E0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E20F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E20F9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E2101u); RECOMP_ABI_CALL(0x000E1D90u, sub_000E1D90); /* call 0x000E1D90 */

loc_000E2101: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E2110
 * Original: 0x000E2110 - 0x000E2151 (65 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_000E214C; /* jl: less (signed <) */

loc_000E211E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x104) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E214C; /* jge: greater or equal (signed >=) */

loc_000E2126: ;
    ecx = MEM32(esi + edi * 4 + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E214C; /* je: equal / zero */

loc_000E2131: ;
    PUSH32(esp, 0x000E2136u); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000E2136: ;
    ecx = MEM32(esi + edi * 4 + 0xBC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000E2145u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E2145: ;
    ecx = eax;
    PUSH32(esp, 0x000E214Cu); RECOMP_ABI_CALL(0x000E4DA0u, xml1_guest_combat_event_resolve); /* call 0x000E4DA0 */

loc_000E214C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2160
 * Original: 0x000E2160 - 0x000E21AD (77 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2160: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x104);
    eax = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000E21A8; /* jle: less or equal (signed <=) */

loc_000E2172: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = edi + 0xBC;
    edi = edi;

loc_000E2180: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2198; /* jne: not equal / not zero */

loc_000E2184: ;
    PUSH32(esp, 0x000E2189u); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000E2189: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000E2191u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E2191: ;
    ecx = eax;
    PUSH32(esp, 0x000E2198u); RECOMP_ABI_CALL(0x000E4DA0u, xml1_guest_combat_event_resolve); /* call 0x000E4DA0 */

loc_000E2198: ;
    ecx = MEM32(edi + 0x104);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E2180; /* jl: less (signed <) */

loc_000E21A6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000E21A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E21B0
 * Original: 0x000E21B0 - 0x000E21BC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E21B0(void)
{

loc_000E21B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E21B8u); RECOMP_ABI_CALL(0x000E2050u, sub_000E2050); /* call 0x000E2050 */

loc_000E21B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E21C0
 * Original: 0x000E21C0 - 0x000E221D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E21C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E21C0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xF08) = esi;
    MEM32(ecx + 0xF0C) = esi;
    MEM32(ecx + 0xF10) = esi;
    edx = 0; /* xor self */
    goto loc_000E21E0;

    /* nop */

loc_000E21E0: ;
    eax = MEM32(ecx + 0xF08);
    edi = MEM32(ecx + 0xF10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    MEM32(ecx + 0xF08) = eax;
    MEM32(ecx + 0xF10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000E220C; /* jl: less (signed <) */

loc_000E21FF: ;
    MEM32(ecx + 0xF08) = esi;
    eax = 0x4F;
    goto loc_000E220D;

loc_000E220C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E220D: ;
    MEM32(ecx + eax * 4 + 0xDC4) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x50 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E21E0; /* jl: less (signed <) */

loc_000E221A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E2220
 * Original: 0x000E2220 - 0x000E2390 (368 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2220(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2220: ;
    raven_native_held_retire(ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x84) = ebx;
    edx = edx | 0xFFFFFFFFu;
    MEM16(esi + 0x124) = LO16(edx);
    ecx = 0x3F800000;
    MEM32(esi + 0x94) = ecx;
    MEM32(esi + 0xA4) = ecx;
    MEM32(esi + 0xAC) = edx;
    edx = MEM32(0x450F80);
    MEM32(esi + 0x98) = 0x3E4CCCCD;
    eax = 0xBF800000u;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM8(esi + 0x126) = LO8(ebx);
    MEM32(esi + 0x128) = 0x40A00000;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    eax = MEM32(0x4F32D0);
    MEM32(esi + 0x88) = eax;
    SET_LO8(ecx, MEM8(esi + 0x12E));
    SET_LO8(ecx, LO8(ecx) & 0xF8);
    SET_LO8(ecx, LO8(ecx) | 8);
    PUSH32(esp, edx);
    MEM8(esi + 0x12C) = 0x21;
    MEM8(esi + 0x12D) = LO8(ebx);
    MEM8(esi + 0x12E) = LO8(ecx);
    PUSH32(esp, 0x000E22D5u); RECOMP_ABI_CALL(0x000E7A90u, sub_000E7A90); /* call 0x000E7A90 */

loc_000E22D5: ;
    MEM32(esi + 0xB8) = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x80) = eax;
    eax = MEM32(esi + 0x104);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2383; /* je: equal / zero */

loc_000E2344: ;
    PUSH32(esp, edi);
    goto loc_000E2350;

    /* nop */
    edi = edi;

loc_000E2350: ;
    ecx = MEM32(esi + 0x104);
    edi = MEM32(esi + ecx * 4 + 0xB8);
    edx = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x104) = edx;
    PUSH32(esp, 0x000E236Bu); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000E236B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000E2373u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E2373: ;
    ecx = eax;
    PUSH32(esp, 0x000E237Au); RECOMP_ABI_CALL(0x000E6CC0u, xml1_guest_combat_event_release); /* call 0x000E6CC0 */

loc_000E237A: ;
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x104), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2350; /* jne: not equal / not zero */

loc_000E2382: ;
    POP32(esp, edi);

loc_000E2383: ;
    ecx = esi + 0x108;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000A4120(); return; /* tail jmp 0x000A4120 */

}

/**
 * sub_000E2390
 * Original: 0x000E2390 - 0x000E25A6 (534 bytes, 154 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2390: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350991);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x70));
    esp = esp - 0x70;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    MEM32(esp + 0x80) = eax;
    eax = esp + 0x3C;
    PUSH32(esp, 0x3C806C);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x000E23D3u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000E23D3: ;
    PUSH32(esp, 0x20);
    ecx = esp + 0x68;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ecx);
    MEM8(esp + 0x6F) = LO8(ebx);
    PUSH32(esp, 0x000E23E8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000E23E8: ;
    eax = MEM32(esp + 0xB0);
    ecx = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0x77) = LO8(ebx);
    MEM32(esp + 0x78) = esi;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    ebp = edx;
    if ((edx == 0)) goto loc_000E2442; /* je: equal / zero */

loc_000E240C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D03F0);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000E241Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E241C: ;
    MEM32(esp + 0x88) = ebx;
    eax = esp + 0x18;
    ebx = 1;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x000E2438u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000E2438: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esp + 0x13) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000E2447; /* jne: not equal / not zero */

loc_000E2442: ;
    MEM8(esp + 0x13) = 0;

loc_000E2447: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x88) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_000E2460; /* je: equal / zero */

loc_000E2457: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000E2460u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E2460: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000E24EF; /* je: equal / zero */

loc_000E246C: ;
    ecx = esi;
    PUSH32(esp, 0x000E2473u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000E2473: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2479u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000E2479: ;
    edx = MEM32(edi);
    MEM8(esp + 0x18) = LO8(eax);
    eax = MEM32(esp + 0x18);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000E248Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E248C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000E24A4; /* je: equal / zero */

loc_000E2490: ;
    ecx = MEM32(esp + 0x98);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000E249Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E249F: ;
    goto loc_000E2585;

loc_000E24A4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x30;
    PUSH32(esp, 0x000E24B4u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E24B4: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x8C) = 1;
    PUSH32(esp, 0x000E24CBu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000E24CB: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    ecx = esp + 0x28;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x88) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E24E7u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E24E7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2585; /* jne: not equal / not zero */

loc_000E24EF: ;
    PUSH32(esp, 0x000E24F4u); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000E24F4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000E24FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E24FB: ;
    ecx = MEM32(esp + 0x98);
    edx = MEM32(esp + 0x94);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x98);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E251Eu); RECOMP_ABI_CALL(0x000ECFE0u, sub_000ECFE0); /* call 0x000ECFE0 */

loc_000E251E: ;
    eax = MEM32(esp + 0x8C);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000E2585; /* je: equal / zero */

loc_000E252C: ;
    _fa = (uint32_t)(MEM32(edi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x104), 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E254F; /* jne: not equal / not zero */

loc_000E2535: ;
    PUSH32(esp, 0x000E253Au); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000E253A: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000E2546u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E2546: ;
    ecx = eax;
    PUSH32(esp, 0x000E254Du); RECOMP_ABI_CALL(0x000E6CC0u, xml1_guest_combat_event_release); /* call 0x000E6CC0 */

loc_000E254D: ;
    goto loc_000E2585;

loc_000E254F: ;
    PUSH32(esp, 0x000E2554u); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000E2554: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000E2560u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E2560: ;
    ecx = eax;
    PUSH32(esp, 0x000E2567u); RECOMP_ABI_CALL(0x000E4DA0u, xml1_guest_combat_event_resolve); /* call 0x000E4DA0 */

loc_000E2567: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000E2585; /* je: equal / zero */

loc_000E256B: ;
    ecx = MEM32(edi + 0x104);
    edx = MEM32(esp + 0x78);
    MEM32(edi + ecx * 4 + 0xBC) = edx;
    MEM32(edi + 0x104) = MEM32(edi + 0x104) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edi;

loc_000E2585: ;
    ecx = MEM32(esp + 0x80);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x70);
    POP32(esp, ebx);
    PUSH32(esp, 0x000E25A0u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000E25A0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x7C)) >> 32) & 1);
    esp = esp + 0x7C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E25B0
 * Original: 0x000E25B0 - 0x000E260A (90 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E25B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E25B0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(edx, MEM8(0x4F33CC));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3509AE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_000E25E4; /* jne: not equal / not zero */

loc_000E25D4: ;
    MEM32(0x4F33CC) = MEM32(0x4F33CC) | eax;
    MEM32(0x4F33C8) = 0;

loc_000E25E4: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000E25F5; /* jl: less (signed <) */

loc_000E25EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    eax = ecx + eax * 4 + 0x10;
    if (CMP_L(_fas, _fbs)) goto loc_000E25FA; /* jl: less (signed <) */

loc_000E25F5: ;
    eax = 0x4F33C8;

loc_000E25FA: ;
    ecx = MEM32(esp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2610
 * Original: 0x000E2610 - 0x000E2F18 (2312 bytes, 816 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2610(void)
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

loc_000E2610: ;
    if(xml1_raven_held_parse(ecx, MEM32(esp + 4), MEM32(esp + 8))) {
        SET_LO8(eax, 1); esp += 12; return; /* native attribute parser ret8 */
    }
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x3D697C);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E2624u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2624: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E266A; /* jne: not equal / not zero */

loc_000E262B: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000E265B; /* je: equal / zero */

loc_000E2633: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E265B; /* je: equal / zero */

loc_000E2638: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E263Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E263E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2649u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E2649: ;
    ecx = eax;
    PUSH32(esp, 0x000E2650u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E2650: ;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E265B: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E266A: ;
    PUSH32(esp, 0x3D6974);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2675u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2675: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2697; /* jne: not equal / not zero */

loc_000E267C: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2686u); RECOMP_ABI_CALL(0x000E7A90u, sub_000E7A90); /* call 0x000E7A90 */

loc_000E2686: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2697: ;
    PUSH32(esp, 0x3D6968);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E26A2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E26A2: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E26C1; /* jne: not equal / not zero */

loc_000E26A9: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esi + 0x84;
    PUSH32(esp, 0x000E26B9u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000E26B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E26C1: ;
    PUSH32(esp, 0x3D695C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E26CCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E26CC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E26E8; /* jne: not equal / not zero */

loc_000E26D3: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    PUSH32(esp, 0x000E26E0u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000E26E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E26E8: ;
    PUSH32(esp, 0x3D6948);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E26F3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E26F3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2712; /* jne: not equal / not zero */

loc_000E26FA: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi + 0x8C;
    PUSH32(esp, 0x000E270Au); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000E270A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2712: ;
    PUSH32(esp, 0x3D6934);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E271Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E271D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E273C; /* jne: not equal / not zero */

loc_000E2724: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esi + 0x90;
    PUSH32(esp, 0x000E2734u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000E2734: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E273C: ;
    PUSH32(esp, 0x3D411C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2747u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2747: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E276A; /* jne: not equal / not zero */

loc_000E274E: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E2758u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000E2758: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    MEM16(esi + 0x124) = LO16(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E276A: ;
    PUSH32(esp, 0x3D6924);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2775u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2775: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2797; /* jne: not equal / not zero */

loc_000E277C: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2786u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000E2786: ;
    MEMF(esi + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2797: ;
    PUSH32(esp, 0x3D6914);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E27A2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E27A2: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E27C4; /* jne: not equal / not zero */

loc_000E27A9: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E27B3u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000E27B3: ;
    MEMF(esi + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E27C4: ;
    PUSH32(esp, 0x3D6904);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E27CFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E27CF: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E27F1; /* jne: not equal / not zero */

loc_000E27D6: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E27E0u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000E27E0: ;
    MEMF(esi + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E27F1: ;
    PUSH32(esp, 0x3D68F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E27FCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E27FC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E281E; /* jne: not equal / not zero */

loc_000E2803: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E280Du); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000E280D: ;
    MEMF(esi + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E281E: ;
    PUSH32(esp, 0x3D68EC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2829u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2829: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E284B; /* jne: not equal / not zero */

loc_000E2830: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E283Au); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000E283A: ;
    MEMF(esi + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E284B: ;
    PUSH32(esp, 0x3D31A4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2856u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2856: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2878; /* jne: not equal / not zero */

loc_000E285D: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E2867u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000E2867: ;
    MEMF(esi + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2878: ;
    PUSH32(esp, 0x3D68E0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2883u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2883: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E28A2; /* jne: not equal / not zero */

loc_000E288A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi + 0x88;
    PUSH32(esp, 0x000E289Au); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000E289A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E28A2: ;
    PUSH32(esp, 0x3D68D0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E28ADu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E28AD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E28E8; /* jne: not equal / not zero */

loc_000E28B4: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E28C3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E28C3: ;
    SET_LO8(ebx, MEM8(esi + 0x12C));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x12C) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E28E8: ;
    PUSH32(esp, 0x3D68C4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E28F3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E28F3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2930; /* jne: not equal / not zero */

loc_000E28FA: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2909u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2909: ;
    SET_LO8(ebx, MEM8(esi + 0x12C));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (1) _cf = (int)(((LO8(ecx)) >> (8 - (1))) & 1);
    SET_LO8(ecx, LO8(ecx) << 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 2);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x12C) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2930: ;
    PUSH32(esp, 0x3D68B8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E293Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E293B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2978; /* jne: not equal / not zero */

loc_000E2942: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E2951u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2951: ;
    SET_LO8(ebx, MEM8(esi + 0x12C));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (2) _cf = (int)(((LO8(eax)) >> (8 - (2))) & 1);
    SET_LO8(eax, LO8(eax) << 2);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(ecx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x12C) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2978: ;
    PUSH32(esp, 0x3D68A0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2983u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2983: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E29C1; /* jne: not equal / not zero */

loc_000E298A: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2999u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2999: ;
    SET_LO8(ebx, MEM8(esi + 0x12C));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (3) _cf = (int)(((LO8(edx)) >> (8 - (3))) & 1);
    SET_LO8(edx, LO8(edx) << 3);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 8);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x12C) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E29C1: ;
    PUSH32(esp, 0x3D6894);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E29CCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E29CC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2A0A; /* jne: not equal / not zero */

loc_000E29D3: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E29E2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E29E2: ;
    SET_LO8(ebx, MEM8(esi + 0x12C));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (4) _cf = (int)(((LO8(ecx)) >> (8 - (4))) & 1);
    SET_LO8(ecx, LO8(ecx) << 4);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x10);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x12C) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2A0A: ;
    PUSH32(esp, 0x3D6880);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2A15u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2A15: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2A52; /* jne: not equal / not zero */

loc_000E2A1C: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CC6B4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E2A2Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2A2B: ;
    SET_LO8(ebx, MEM8(esi + 0x12C));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    if (5) _cf = (int)(((LO8(eax)) >> (8 - (5))) & 1);
    SET_LO8(eax, LO8(eax) << 5);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(ecx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x12C) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2A52: ;
    PUSH32(esp, 0x3D6868);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2A5Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2A5D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2A9B; /* jne: not equal / not zero */

loc_000E2A64: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2A73u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2A73: ;
    SET_LO8(ebx, MEM8(esi + 0x12C));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (6) _cf = (int)(((LO8(edx)) >> (8 - (6))) & 1);
    SET_LO8(edx, LO8(edx) << 6);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0x40);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x12C) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2A9B: ;
    PUSH32(esp, 0x3D685C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2AA6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2AA6: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2AE0; /* jne: not equal / not zero */

loc_000E2AAD: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2ABCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2ABC: ;
    SET_LO8(edx, MEM8(esi + 0x12C));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (7) _cf = (int)(((LO8(ecx)) >> (8 - (7))) & 1);
    SET_LO8(ecx, LO8(ecx) << 7);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0x7F);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x12C) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2AE0: ;
    PUSH32(esp, 0x3D6850);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2AEBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2AEB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2B26; /* jne: not equal / not zero */

loc_000E2AF2: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2B01u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2B01: ;
    SET_LO8(ebx, MEM8(esi + 0x12D));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x12D) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2B26: ;
    PUSH32(esp, 0x3D6844);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2B31u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2B31: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2B6D; /* jne: not equal / not zero */

loc_000E2B38: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E2B47u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2B47: ;
    SET_LO8(ebx, MEM8(esi + 0x12D));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (1) _cf = (int)(((LO8(eax)) >> (8 - (1))) & 1);
    SET_LO8(eax, LO8(eax) << 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(ecx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x12D) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2B6D: ;
    PUSH32(esp, 0x3D6838);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2B78u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2B78: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2BB6; /* jne: not equal / not zero */

loc_000E2B7F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2B8Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2B8E: ;
    SET_LO8(ebx, MEM8(esi + 0x12D));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (2) _cf = (int)(((LO8(edx)) >> (8 - (2))) & 1);
    SET_LO8(edx, LO8(edx) << 2);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 4);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x12D) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2BB6: ;
    PUSH32(esp, 0x3D682C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2BC1u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2BC1: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2BFF; /* jne: not equal / not zero */

loc_000E2BC8: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2BD7u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2BD7: ;
    SET_LO8(ebx, MEM8(esi + 0x12D));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (4) _cf = (int)(((LO8(ecx)) >> (8 - (4))) & 1);
    SET_LO8(ecx, LO8(ecx) << 4);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x10);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x12D) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2BFF: ;
    PUSH32(esp, 0x3D681C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2C0Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2C0A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2C47; /* jne: not equal / not zero */

loc_000E2C11: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E2C20u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2C20: ;
    SET_LO8(ebx, MEM8(esi + 0x12D));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (5) _cf = (int)(((LO8(eax)) >> (8 - (5))) & 1);
    SET_LO8(eax, LO8(eax) << 5);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(ecx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x12D) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2C47: ;
    PUSH32(esp, 0x3D680C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2C52u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2C52: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2C8B; /* jne: not equal / not zero */

loc_000E2C59: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2C68u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2C68: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, MEM8(esi + 0x12D));
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x7F);
    if (7) _cf = (int)(((LO8(edx)) >> (8 - (7))) & 1);
    SET_LO8(edx, LO8(edx) << 7);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x12D) = LO8(edx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2C8B: ;
    PUSH32(esp, 0x3D67FC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2C96u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2C96: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2CD4; /* jne: not equal / not zero */

loc_000E2C9D: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2CACu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2CAC: ;
    SET_LO8(ebx, MEM8(esi + 0x12D));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (6) _cf = (int)(((LO8(edx)) >> (8 - (6))) & 1);
    SET_LO8(edx, LO8(edx) << 6);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0x40);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x12D) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2CD4: ;
    PUSH32(esp, 0x3CA9CC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2CDFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2CDF: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2D1A; /* jne: not equal / not zero */

loc_000E2CE6: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2CF5u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2CF5: ;
    SET_LO8(ebx, MEM8(esi + 0x12E));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x12E) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2D1A: ;
    PUSH32(esp, 0x3D67F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2D25u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2D25: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2D62; /* jne: not equal / not zero */

loc_000E2D2C: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E2D3Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2D3B: ;
    SET_LO8(ebx, MEM8(esi + 0x12E));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (2) _cf = (int)(((LO8(eax)) >> (8 - (2))) & 1);
    SET_LO8(eax, LO8(eax) << 2);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(ecx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x12E) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2D62: ;
    PUSH32(esp, 0x3D67E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2D6Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2D6D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2DAB; /* jne: not equal / not zero */

loc_000E2D74: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2D83u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2D83: ;
    SET_LO8(ebx, MEM8(esi + 0x12E));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (3) _cf = (int)(((LO8(edx)) >> (8 - (3))) & 1);
    SET_LO8(edx, LO8(edx) << 3);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 8);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x12E) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2DAB: ;
    PUSH32(esp, 0x3D67DC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2DB6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2DB6: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2DE9; /* jne: not equal / not zero */

loc_000E2DBD: ;
    ecx = MEM32(esp + 0x14);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E2DD4u); RECOMP_ABI_CALL(0x000369D0u, sub_000369D0); /* call 0x000369D0 */

loc_000E2DD4: ;
    edx = MEM32(esp + 0x18);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, edi);
    MEM32(esi + 0xAC) = edx;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2DE9: ;
    PUSH32(esp, 0x3D67D0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2DF4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2DF4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2E16; /* jne: not equal / not zero */

loc_000E2DFB: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2E05u); RECOMP_ABI_CALL(0x000E1680u, sub_000E1680); /* call 0x000E1680 */

loc_000E2E05: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    MEM32(esi + 0xB0) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2E16: ;
    PUSH32(esp, 0x3D67BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2E21u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2E21: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2E43; /* jne: not equal / not zero */

loc_000E2E28: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2E32u); RECOMP_ABI_CALL(0x000E1680u, sub_000E1680); /* call 0x000E1680 */

loc_000E2E32: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    MEM32(esi + 0xB4) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2E43: ;
    PUSH32(esp, 0x3D3B0C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2E4Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2E4E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000E2F08; /* je: equal / zero */

loc_000E2E59: ;
    PUSH32(esp, 0x3D67B0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2E64u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2E64: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2E86; /* jne: not equal / not zero */

loc_000E2E6B: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E2E75u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000E2E75: ;
    MEMF(esi + 0x128) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2E86: ;
    PUSH32(esp, 0x3D67A8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2E91u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E2E91: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2F10; /* jne: not equal / not zero */

loc_000E2E98: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = edx;
    ebp = 0x451118;

loc_000E2EA4: ;
    eax = MEM32(esp + 0x18);
    edi = ebp;
    /* nop */

loc_000E2EB0: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E2ED4; /* jne: not equal / not zero */

loc_000E2EB8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000E2ED0; /* je: equal / zero */

loc_000E2EBC: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E2ED4; /* jne: not equal / not zero */

loc_000E2EC6: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2EB0; /* jne: not equal / not zero */

loc_000E2ED0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_000E2ED9;

loc_000E2ED4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_000E2ED9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000E2EFD; /* je: equal / zero */

loc_000E2EDD: ;
    ebx = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x14)) >> 32) & 1);
    edx = edx + 0x14;
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x14)) >> 32) & 1);
    ebp = ebp + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x168) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x168 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_000E2EA4; /* jb: below (unsigned <) */

loc_000E2EF4: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2EFD: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM8(esi + 0x126) = LO8(eax);
    POP32(esp, ebp);

loc_000E2F08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E2F10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2F20
 * Original: 0x000E2F20 - 0x000E3017 (247 bytes, 94 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2F20: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2F8E; /* je: equal / zero */

loc_000E2F4A: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000E2F5Cu); RECOMP_ABI_CALL(0x0002E9F0u, sub_0002E9F0); /* call 0x0002E9F0 */

loc_000E2F5C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E2F62u); RECOMP_ABI_CALL(0x001389E0u, sub_001389E0); /* call 0x001389E0 */

loc_000E2F62: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E2F8C; /* je: equal / zero */

loc_000E2F6B: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2F8C; /* je: equal / zero */

loc_000E2F70: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2F76u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E2F76: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2F81u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E2F81: ;
    ecx = eax;
    PUSH32(esp, 0x000E2F88u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E2F88: ;
    edi = eax;
    goto loc_000E2F8E;

loc_000E2F8C: ;
    edi = 0; /* xor self */

loc_000E2F8E: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E2FAA; /* je: equal / zero */

loc_000E2F96: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;

loc_000E2FAA: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2FC8; /* jne: not equal / not zero */

loc_000E2FB2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2FDC; /* jne: not equal / not zero */

loc_000E2FB7: ;
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E2FC5u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000E2FC5: ;
    esp = esp + 8;

loc_000E2FC8: ;
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = eax;

loc_000E2FDC: ;
    PUSH32(esp, 0x000E2FE1u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000E2FE1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000E2FE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E2FE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    ecx = MEM32(esp + 0x50);
    esi = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000E300Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E300E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000E3020
 * Original: 0x000E3020 - 0x000E3082 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3020: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1691C) = esi;
    MEM32(ecx + 0x16920) = esi;
    MEM32(ecx + 0x16924) = esi;
    edx = 0; /* xor self */
    goto loc_000E3040;

    /* nop */

loc_000E3040: ;
    eax = MEM32(ecx + 0x1691C);
    edi = MEM32(ecx + 0x16924);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    MEM32(ecx + 0x1691C) = eax;
    MEM32(ecx + 0x16924) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000E306E; /* jl: less (signed <) */

loc_000E3061: ;
    MEM32(ecx + 0x1691C) = esi;
    eax = 0x12B;
    goto loc_000E306F;

loc_000E306E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E306F: ;
    MEM32(ecx + eax * 4 + 0x16468) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3040; /* jl: less (signed <) */

loc_000E307F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E3090
 * Original: 0x000E3090 - 0x000E30F2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3090: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xC368) = esi;
    MEM32(ecx + 0xC36C) = esi;
    MEM32(ecx + 0xC370) = esi;
    edx = 0; /* xor self */
    goto loc_000E30B0;

    /* nop */

loc_000E30B0: ;
    eax = MEM32(ecx + 0xC368);
    edi = MEM32(ecx + 0xC370);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30C (32-bit) */
    MEM32(ecx + 0xC368) = eax;
    MEM32(ecx + 0xC370) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000E30DE; /* jl: less (signed <) */

loc_000E30D1: ;
    MEM32(ecx + 0xC368) = esi;
    eax = 0x30B;
    goto loc_000E30DF;

loc_000E30DE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E30DF: ;
    MEM32(ecx + eax * 4 + 0xB734) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E30B0; /* jl: less (signed <) */

loc_000E30EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E3100
 * Original: 0x000E3100 - 0x000E3145 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3100: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x50;
    goto loc_000E3110;

    /* nop */

loc_000E3110: ;
    MEM8(eax) = 0;
    eax = eax + 0x2C;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E3110; /* jne: not equal / not zero */

loc_000E3119: ;
    ecx = esi + 0xDC4;
    PUSH32(esp, 0x000E3124u); RECOMP_ABI_CALL(0x000E21B0u, sub_000E21B0); /* call 0x000E21B0 */

loc_000E3124: ;
    eax = 0; /* xor self */
    ecx = esi + 0xF14;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    ecx = esi;
    MEM32(esi + 0xF20) = eax;
    PUSH32(esp, 0x000E3141u); RECOMP_ABI_CALL(0x000E21C0u, sub_000E21C0); /* call 0x000E21C0 */

loc_000E3141: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E3150
 * Original: 0x000E3150 - 0x000E337D (557 bytes, 157 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3150(void)
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

loc_000E3150: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x4C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000E3225; /* je: equal / zero */

loc_000E3163: ;
    PUSH32(esp, 0x000E3168u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000E3168: ;
    fp_push(MEMF(0x485854)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CAA50); /* fadd dword ptr [0x3caa50] */
    edx = MEM32(eax);
    ecx = eax;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000E3182u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E3182: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E3225; /* jnp: not parity */

loc_000E3191: ;
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000E319Au); RECOMP_ABI_CALL(0x000322B0u, sub_000322B0); /* call 0x000322B0 */

loc_000E319A: ;
    PUSH32(esp, 0x000E319Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000E319F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xE0); PUSH32(esp, 0x000E31B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E31B2: ;
    eax = MEM32(esp + 0x50);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000E3225; /* jle: less or equal (signed <=) */

loc_000E31BC: ;
    /* nop */

loc_000E31C0: ;
    edx = MEM32(esp + edi * 4 + 0x3C);
    ecx = esp + 0x58;
    MEM32(esp + 0x58) = edx;
    PUSH32(esp, 0x000E31D1u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000E31D1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E321C; /* je: equal / zero */

loc_000E31D7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E31DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E31DD: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E321C; /* je: equal / zero */

loc_000E31FB: ;
    eax = MEM32(esi + 0x2D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E321C; /* je: equal / zero */

loc_000E3205: ;
    eax = eax + 0x20C;
    PUSH32(esp, 0x3CEFD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3215u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E3215: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3231; /* je: equal / zero */

loc_000E321C: ;
    eax = MEM32(esp + 0x50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E31C0; /* jl: less (signed <) */

loc_000E3225: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 8; return; /* ret 4 */

loc_000E3231: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3225; /* je: equal / zero */

loc_000E3235: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E3225; /* jne: not equal / not zero */

loc_000E3248: ;
    _fa = (uint32_t)(MEM8(esi + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x334), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3225; /* je: equal / zero */

loc_000E3251: ;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0x4D72F8);
    PUSH32(esp, 0x000E3261u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000E3261: ;
    ecx = eax;
    PUSH32(esp, 0x000E3268u); RECOMP_ABI_CALL(0x00040DB0u, xml1_guest_talent_rank_get); /* call 0x00040DB0 */

loc_000E3268: ;
    edi = ZX8(LO8(eax));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x28) = 0x41200000;
    MEM32(esp + 0x2C) = 0x41700000;
    MEM32(esp + 0x30) = 0x41F00000;
    MEM32(esp + 0x34) = 0x42340000;
    MEM32(esp + 0x38) = 0x42700000;
    MEM32(esp + 0x14) = 0x41C80000;
    MEM32(esp + 0x18) = 0x42480000;
    MEM32(esp + 0x1C) = 0x42960000;
    MEM32(esp + 0x20) = 0x42A00000;
    MEM32(esp + 0x24) = 0x42C80000;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000E3225; /* jle: less or equal (signed <=) */

loc_000E32C3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E32CD; /* jle: less or equal (signed <=) */

loc_000E32C8: ;
    edi = 5;

loc_000E32CD: ;
    PUSH32(esp, 0x000E32D2u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000E32D2: ;
    fp_push(MEMF(esp + edi * 4 + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C93C0); /* fmul dword ptr [0x3c93c0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E3225; /* jnp: not parity */

loc_000E32E9: ;
    ecx = ebx + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi + 0x20;
    PUSH32(esp, 0x000E32FAu); RECOMP_ABI_CALL(0x00013C60u, sub_00013C60); /* call 0x00013C60 */

loc_000E32FA: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x000E330Bu); RECOMP_ABI_CALL(0x00199BA0u, sub_00199BA0); /* call 0x00199BA0 */

loc_000E330B: ;
    fp_push(MEMF(esp + edi * 4 + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB260); /* fmul dword ptr [0x3cb260] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E3225; /* jnp: not parity */

loc_000E3322: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4F330C);
    ecx = esi;
    PUSH32(esp, 0x000E3332u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000E3332: ;
    ecx = eax;
    PUSH32(esp, 0x000E3339u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000E3339: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E3341u); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000E3341: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x14) = esp;
    PUSH32(esp, 0x000E3354u); RECOMP_ABI_CALL(0x0003CDF0u, sub_0003CDF0); /* call 0x0003CDF0 */

loc_000E3354: ;
    PUSH32(esp, 0x000E3359u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000E3359: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000E3363u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E3363: ;
    MEMF(0x485854) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x485858) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E3380
 * Original: 0x000E3380 - 0x000E33F0 (112 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3380(void)
{

loc_000E3380: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x16440;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(esi + 0x1691C) = eax;
    MEM32(esi + 0x16920) = eax;
    MEM32(esi + 0x16924) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0x16928;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = edx;
    ecx = esi;
    MEM32(esi + 0x16950) = eax;
    PUSH32(esp, 0x000E33ECu); RECOMP_ABI_CALL(0x000E3020u, sub_000E3020); /* call 0x000E3020 */

loc_000E33EC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}



/**
 * sub_000E34A0
 * Original: 0x000E34A0 - 0x000E34AE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E34A0(void)
{

loc_000E34A0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + ecx + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E34B0
 * Original: 0x000E34B0 - 0x000E34D7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E34B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E34B0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = eax + ecx + 0x18;
    ecx = edx + ecx + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E34CCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E34CC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E34E0
 * Original: 0x000E34E0 - 0x000E34E8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E34E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E34E0: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000E34F0(); return; /* tail jmp 0x000E34F0 */

}

/**
 * sub_000E34F0
 * Original: 0x000E34F0 - 0x000E3562 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E34F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E34F0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0xF14;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0xF08);
    edi = MEM32(eax + 0xF10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x50 (32-bit) */
    MEM32(eax + 0xF08) = ecx;
    MEM32(eax + 0xF10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000E3548; /* jl: less (signed <) */

loc_000E3537: ;
    MEM32(eax + 0xF08) = 0;
    ecx = 0x4F;
    goto loc_000E3549;

loc_000E3548: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E3549: ;
    MEM32(eax + ecx * 4 + 0xDC4) = esi;
    ecx = MEM32(eax + 0xF20);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0xF20) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3570
 * Original: 0x000E3570 - 0x000E357B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E3570: ;
    ecx = ecx + 0xF30;
    g_seh_ebp = ebp; sub_000E1F70(); return; /* tail jmp 0x000E1F70 */

}

/**
 * sub_000E3580
 * Original: 0x000E3580 - 0x000E35BC (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3580: ;
    eax = MEM32(0x4F3288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E35BB; /* jne: not equal / not zero */

loc_000E3589: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x16954);
    PUSH32(esp, 0x000E3598u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_000E3598: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E35B1; /* je: equal / zero */

loc_000E35A1: ;
    ecx = esi;
    PUSH32(esp, 0x000E35A8u); RECOMP_ABI_CALL(0x000E3380u, sub_000E3380); /* call 0x000E3380 */

loc_000E35A8: ;
    eax = esi;
    MEM32(0x4F3288) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E35B1: ;
    esi = 0; /* xor self */
    eax = esi;
    MEM32(0x4F3288) = eax;
    POP32(esp, esi);

loc_000E35BB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E35C0
 * Original: 0x000E35C0 - 0x000E3946 (902 bytes, 230 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E35C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E35C0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E35CDu); RECOMP_ABI_CALL(0x000E2220u, sub_000E2220); /* call 0x000E2220 */

loc_000E35CD: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(edi + 0x94);
    MEM32(esi + 0x94) = eax;
    ecx = MEM32(edi + 0x98);
    MEM32(esi + 0x98) = ecx;
    edx = MEM32(edi + 0x9C);
    MEM32(esi + 0x9C) = edx;
    eax = MEM32(edi + 0xA0);
    MEM32(esi + 0xA0) = eax;
    ecx = MEM32(edi + 0xA4);
    MEM32(esi + 0xA4) = ecx;
    edx = MEM32(edi + 0xA8);
    MEM32(esi + 0xA8) = edx;
    eax = MEM32(edi + 0xAC);
    MEM32(esi + 0xAC) = eax;
    ecx = MEM32(edi + 0xB0);
    SET_LO8(eax, MEM8(esi + 0x12C));
    MEM32(esi + 0xB0) = ecx;
    edx = MEM32(edi + 0xB4);
    SET_LO8(ecx, MEM8(esi + 0x12C));
    MEM32(esi + 0xB4) = edx;
    SET_LO8(eax, LO8(eax) ^ MEM8(edi + 0x12C));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x12C) = LO8(ecx);
    SET_LO8(eax, MEM8(edi + 0x12C));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(edx, MEM8(esi + 0x12D));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x12C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x12C));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(eax, MEM8(edi + 0x12C));
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x12D));
    MEM8(esi + 0x12C) = LO8(ecx);
    SET_LO8(edx, LO8(edx) ^ MEM8(edi + 0x12D));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x12D) = LO8(eax);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(eax, MEM8(edi + 0x12D));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x12D) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x12D));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x12D) = LO8(ecx);
    SET_LO8(eax, MEM8(edi + 0x12D));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x12D) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x12D));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x12D) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x12D));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0x20);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x12D) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x12D));
    SET_LO8(ecx, MEM8(edi + 0x12D));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(edx, MEM8(esi + 0x12C));
    SET_LO8(eax, LO8(eax) & 0x7F);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x12D) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x12D));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0x40);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x12C));
    MEM8(esi + 0x12D) = LO8(ecx);
    SET_LO8(edx, LO8(edx) ^ MEM8(edi + 0x12C));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x12C) = LO8(eax);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(eax, MEM8(edi + 0x12C));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x12C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x12C));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x12C) = LO8(ecx);
    edx = MEM32(edi + 0x88);
    MEM32(esi + 0x88) = edx;
    SET_LO8(eax, MEM8(edi + 0x126));
    SET_LO8(edx, MEM8(esi + 0x12E));
    SET_LO8(ebx, MEM8(esi + 0x12E));
    MEM8(esi + 0x126) = LO8(eax);
    ecx = MEM32(edi + 0x128);
    MEM32(esi + 0x128) = ecx;
    SET_LO8(edx, LO8(edx) ^ MEM8(edi + 0x12E));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(esi + 0x12E) = LO8(ebx);
    SET_LO8(eax, MEM8(edi + 0x12E));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x12E) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x12E));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x12E) = LO8(ecx);
    edx = MEM32(edi + 0x8C);
    MEM32(esi + 0x8C) = edx;
    eax = MEM32(edi + 0x90);
    MEM32(esi + 0x90) = eax;
    eax = edi;
    ecx = esi + 0x10;
    eax = eax - esi;
    edx = 0x1D;
    /* nop */

loc_000E3810: ;
    ebx = MEM32(eax + ecx);
    MEM32(ecx) = ebx;
    ecx = ecx + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E3810; /* jne: not equal / not zero */

loc_000E381B: ;
    ecx = MEM32(edi + 0xB8);
    MEM32(esi + 0xB8) = ecx;
    edx = MEM32(edi + 0x84);
    eax = edi + 0x108;
    PUSH32(esp, eax);
    ecx = esi + 0x108;
    MEM32(esi + 0x84) = edx;
    PUSH32(esp, 0x000E3845u); RECOMP_ABI_CALL(0x000B2B00u, sub_000B2B00); /* call 0x000B2B00 */

loc_000E3845: ;
    eax = MEM32(edi + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000E392D; /* jle: less or equal (signed <=) */

loc_000E385B: ;
    ecx = edi + 0xBC;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, ebp);

loc_000E3866: ;
    PUSH32(esp, 0x000E386Bu); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000E386B: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000E3879u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E3879: ;
    ecx = eax;
    PUSH32(esp, 0x000E3880u); RECOMP_ABI_CALL(0x000E4DA0u, xml1_guest_combat_event_resolve); /* call 0x000E4DA0 */

loc_000E3880: ;
    ebx = eax;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x000E388Bu); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000E388B: ;
    ebx = MEM32(ebx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ebp = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000E389B; /* jne: not equal / not zero */

loc_000E3894: ;
    eax = 0x3C806C;
    goto loc_000E38B1;

loc_000E389B: ;
    PUSH32(esp, 0x000E38A0u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E38A0: ;
    ebx = ebx & 0xFFFFFF;
    ecx = MEM32(eax + ebx * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000E38B1: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000E38BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E38BA: ;
    ecx = eax;
    PUSH32(esp, 0x000E38C1u); RECOMP_ABI_CALL(0x000E6040u, xml1_guest_combat_event_create); /* call 0x000E6040 */

loc_000E38C1: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E390A; /* je: equal / zero */

loc_000E38C7: ;
    PUSH32(esp, 0x000E38CCu); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000E38CC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000E38D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E38D4: ;
    ecx = eax;
    PUSH32(esp, 0x000E38DBu); RECOMP_ABI_CALL(0x000E4DA0u, xml1_guest_combat_event_resolve); /* call 0x000E4DA0 */

loc_000E38DB: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E390A; /* je: equal / zero */

loc_000E38E1: ;
    eax = MEM32(esi + 0x104);
    MEM32(esi + eax * 4 + 0xBC) = ebp;
    edx = MEM32(esi + 0x104);
    eax = MEM32(esp + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x104) = edx;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E3907u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E3907: ;
    MEM32(ebx + 4) = esi;

loc_000E390A: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edi + 0x104);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000E3866; /* jl: less (signed <) */

loc_000E392C: ;
    POP32(esp, ebp);

loc_000E392D: ;
    SET_LO16(ecx, MEM16(edi + 0x124));
    POP32(esp, edi);
    MEM16(esi + 0x124) = LO16(ecx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3950
 * Original: 0x000E3950 - 0x000E3994 (68 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3950(void)
{

loc_000E3950: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3D6988;
    PUSH32(esp, 0x000E396Fu); RECOMP_ABI_CALL(0x000E3100u, sub_000E3100); /* call 0x000E3100 */

loc_000E396F: ;
    eax = 0; /* xor self */
    ecx = esi + 0x2470;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    ecx = esi + 0x247C;
    MEM32(esi) = 0x3D69A0;
    PUSH32(esp, 0x000E3990u); RECOMP_ABI_CALL(0x000E33F0u, xml1_guest_combat_event_pool_construct); /* call 0x000E33F0 */

loc_000E3990: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E39A0
 * Original: 0x000E39A0 - 0x000E3EE3 (1347 bytes, 369 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E39A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E39A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350A46);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x7C;
    eax = MEM32(esp + 0x8C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebp = ecx;
    MEM32(esp + 0x18) = ebp;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & eax;
    MEM32(esp + 0x20) = ebx;
    if ((ebx != 0)) goto loc_000E39E8; /* jne: not equal / not zero */

loc_000E39E1: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_000E3EC8;

loc_000E39E8: ;
    PUSH32(esp, 0x41);
    PUSH32(esp, 0xF490);
    PUSH32(esp, 0x000E39F4u); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_000E39F4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3A0A; /* je: equal / zero */

loc_000E39FB: ;
    ecx = eax;
    PUSH32(esp, 0x000E3A02u); RECOMP_ABI_CALL(0x000E3950u, sub_000E3950); /* call 0x000E3950 */

loc_000E3A02: ;
    edi = eax;
    MEM32(esp + 0x1C) = edi;
    goto loc_000E3A10;

loc_000E3A0A: ;
    MEM32(esp + 0x1C) = esi;
    edi = esi;

loc_000E3A10: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3B0C);
    ecx = esp + 0x34;
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x000E3A24u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E3A24: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x98) = esi;
    PUSH32(esp, 0x000E3A37u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000E3A37: ;
    ecx = esp + 0x2C;
    esi = eax;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E3A4Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E3A4D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3A7F; /* je: equal / zero */

loc_000E3A51: ;
    ecx = esi;
    PUSH32(esp, 0x000E3A58u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000E3A58: ;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000E3A62u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000E3A62: ;
    ecx = MEM32(esp + 0xA4);
    edx = MEM32(ecx);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000E3A73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E3A73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3A7F; /* je: equal / zero */

loc_000E3A77: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000E3A7Fu); RECOMP_ABI_CALL(0x000E35C0u, sub_000E35C0); /* call 0x000E35C0 */

loc_000E3A7F: ;
    esi = MEM32(ebx + 0x54);
    eax = ebx + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3ABC; /* je: equal / zero */

loc_000E3A89: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3ABC; /* je: equal / zero */

loc_000E3A8D: ;
    /* nop */

loc_000E3A90: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000E3A98u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000E3A98: ;
    ecx = esi + 0x14;
    edi = eax;
    PUSH32(esp, 0x000E3AA2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000E3AA2: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000E3AABu); RECOMP_ABI_CALL(0x000E2610u, sub_000E2610); /* call 0x000E2610 */

loc_000E3AAB: ;
    ecx = esi;
    PUSH32(esp, 0x000E3AB2u); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_000E3AB2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E3A90; /* jne: not equal / not zero */

loc_000E3AB8: ;
    edi = MEM32(esp + 0x1C);

loc_000E3ABC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D69C4);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000E3ACCu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E3ACC: ;
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x9C) = 1;
    PUSH32(esp, 0x000E3AE5u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000E3AE5: ;
    ecx = esp + 0x2C;
    esi = eax;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E3AFBu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E3AFB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3B54; /* je: equal / zero */

loc_000E3AFF: ;
    /* nop */

loc_000E3B00: ;
    edx = MEM32(esp + 0xA0);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E3B0Fu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000E3B0F: ;
    esp = esp + 0xC;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D69C4);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000E3B22u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E3B22: ;
    PUSH32(esp, esi);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x9C) = 2;
    PUSH32(esp, 0x000E3B3Au); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000E3B3A: ;
    ecx = esp + 0x2C;
    esi = eax;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E3B50u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E3B50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E3B00; /* jne: not equal / not zero */

loc_000E3B54: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D69BC);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000E3B64u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E3B64: ;
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x9C) = 3;
    PUSH32(esp, 0x000E3B7Du); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000E3B7D: ;
    ecx = esp + 0x2C;
    edi = eax;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E3B93u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E3B93: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3D1C; /* je: equal / zero */

loc_000E3B9B: ;
    goto loc_000E3BA0;

    /* nop */

loc_000E3BA0: ;
    esi = MEM32(edi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & edi;
    esi = edx;
    if ((edx == 0)) goto loc_000E3CD6; /* je: equal / zero */

loc_000E3BB6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2CD4);
    ecx = esp + 0x44;
    PUSH32(esp, 0x000E3BC6u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E3BC6: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x98) = 4;
    PUSH32(esp, 0x000E3BDDu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000E3BDD: ;
    ecx = esp + 0x3C;
    ebp = eax;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E3BF3u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E3BF3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3C00; /* je: equal / zero */

loc_000E3BF7: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x000E3C00u); RECOMP_ABI_CALL(0x000E2070u, sub_000E2070); /* call 0x000E2070 */

loc_000E3C00: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x64;
    PUSH32(esp, 0x000E3C10u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E3C10: ;
    ebx = MEM32(esp + 0x14);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ebp = 5;
    ebx = ebx | 1;
    ecx = esi;
    MEM32(esp + 0x98) = ebp;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x000E3C33u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000E3C33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E3C6E; /* jne: not equal / not zero */

loc_000E3C37: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D03F0);
    ecx = esp + 0x54;
    PUSH32(esp, 0x000E3C47u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E3C47: ;
    edx = esp + 0x4C;
    ebx = ebx | 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x98) = 6;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x000E3C65u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000E3C65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000E3C73; /* je: equal / zero */

loc_000E3C6E: ;
    MEM8(esp + 0x13) = 1;

loc_000E3C73: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    MEM32(esp + 0x94) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_000E3C8F; /* je: equal / zero */

loc_000E3C7F: ;
    ebx = ebx & 0xFFFFFFFDu;
    ecx = esp + 0x4C;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x000E3C8Fu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E3C8F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_000E3CAF; /* je: equal / zero */

loc_000E3C9F: ;
    ebx = ebx & 0xFFFFFFFEu;
    ecx = esp + 0x5C;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x000E3CAFu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E3CAF: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3CCE; /* je: equal / zero */

loc_000E3CB7: ;
    eax = MEM32(esp + 0xA0);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x000E3CCEu); RECOMP_ABI_CALL(0x000E2390u, sub_000E2390); /* call 0x000E2390 */

loc_000E3CCE: ;
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x20);

loc_000E3CD6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D69BC);
    ecx = esp + 0x74;
    PUSH32(esp, 0x000E3CE6u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E3CE6: ;
    PUSH32(esp, edi);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x9C) = 7;
    PUSH32(esp, 0x000E3CFEu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000E3CFE: ;
    ecx = esp + 0x6C;
    edi = eax;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E3D14u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E3D14: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E3BA0; /* jne: not equal / not zero */

loc_000E3D1C: ;
    eax = MEM32(ebp + 0x104);
    SET_LO8(ebx, 0); /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000E3D51; /* jle: less or equal (signed <=) */

loc_000E3D2A: ;
    /* nop */

loc_000E3D30: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000E3D39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E3D39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3D46; /* je: equal / zero */

loc_000E3D3D: ;
    SET_LO8(eax, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E3D46; /* ja: above (unsigned >) */

loc_000E3D44: ;
    SET_LO8(ebx, LO8(eax));

loc_000E3D46: ;
    eax = MEM32(ebp + 0x104);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3D30; /* jl: less (signed <) */

loc_000E3D51: ;
    eax = MEM32(ebp + 0x104);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000E3D89; /* jle: less or equal (signed <=) */

loc_000E3D5D: ;
    /* nop */

loc_000E3D60: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E3D69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E3D69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3D7E; /* je: equal / zero */

loc_000E3D6D: ;
    SET_LO8(ecx, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E3D7E; /* jne: not equal / not zero */

loc_000E3D74: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    SET_LO8(ecx, LO8(ecx) - LO8(ebx));
    MEM8(eax + 0xD) = LO8(ecx);

loc_000E3D7E: ;
    eax = MEM32(ebp + 0x104);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3D60; /* jl: less (signed <) */

loc_000E3D89: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D69B4);
    ecx = esp + 0x74;
    PUSH32(esp, 0x000E3D99u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E3D99: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    edx = esp + 0x70;
    ebx = 8;
    PUSH32(esp, edx);
    MEM32(esp + 0x9C) = ebx;
    PUSH32(esp, 0x000E3DB5u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000E3DB5: ;
    ecx = esp + 0x6C;
    esi = eax;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E3DCBu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E3DCB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3E2B; /* je: equal / zero */

loc_000E3DCF: ;
    edi = ebp + 0x10;
    ebp = 9;

loc_000E3DD7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E3DDEu); RECOMP_ABI_CALL(0x000ECDF0u, sub_000ECDF0); /* call 0x000ECDF0 */

loc_000E3DDE: ;
    esp = esp + 8;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D69B4);
    ecx = esp + 0x84;
    PUSH32(esp, 0x000E3DF4u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000E3DF4: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    MEM32(esp + 0x9C) = ebp;
    PUSH32(esp, 0x000E3E0Du); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000E3E0D: ;
    ecx = esp + 0x7C;
    esi = eax;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E3E23u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000E3E23: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E3DD7; /* jne: not equal / not zero */

loc_000E3E27: ;
    ebp = MEM32(esp + 0x18);

loc_000E3E2B: ;
    esi = MEM32(ebp + 0x78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3E4C; /* je: equal / zero */

loc_000E3E32: ;
    PUSH32(esp, 0x000E3E37u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E3E37: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3E7A; /* je: equal / zero */

loc_000E3E4C: ;
    esi = MEM32(ebp + 0x78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3E7A; /* je: equal / zero */

loc_000E3E53: ;
    PUSH32(esp, 0x000E3E58u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E3E58: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    SET_LO8(ecx, MEM8(edx + eax + 0x4008));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    eax = edx + eax + 0x4008;
    if (TEST_Z(_fa, _fb)) goto loc_000E3E7A; /* je: equal / zero */

loc_000E3E74: ;
    MEM8(ebp + 0x12D) = MEM8(ebp + 0x12D) | LO8(ebx);

loc_000E3E7A: ;
    eax = MEM32(esp + 0x9C);
    PUSH32(esp, eax);
    ecx = ebp + 0x108;
    PUSH32(esp, 0x000E3E8Du); RECOMP_ABI_CALL(0x000A41F0u, sub_000A41F0); /* call 0x000A41F0 */

loc_000E3E8D: ;
    esi = MEM32(esp + 0x1C);
    ecx = esi + 0x247C;
    MEM32(esp + 0x94) = 0xA;
    PUSH32(esp, 0x000E3EA7u); RECOMP_ABI_CALL(0x000E1ED0u, sub_000E1ED0); /* call 0x000E1ED0 */

loc_000E3EA7: ;
    ecx = esi + 0xF30;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E3EBDu); RECOMP_ABI_CALL(0x000E1F70u, sub_000E1F70); /* call 0x000E1F70 */

loc_000E3EBD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E3EC3u); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_000E3EC3: ;
    esp = esp + 4;
    SET_LO8(eax, 1);

loc_000E3EC8: ;
    ecx = MEM32(esp + 0x8C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x88;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E3EF0
 * Original: 0x000E3EF0 - 0x000E3F53 (99 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3EF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E3EF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000E3F01; /* jne: not equal / not zero */

loc_000E3EFB: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E3F01: ;
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    eax = ecx;
    if ((ecx == 0)) goto loc_000E3F4C; /* je: equal / zero */

loc_000E3F12: ;
    eax = eax + 0x2C;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3F4B; /* je: equal / zero */

loc_000E3F1D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E3F4B; /* je: equal / zero */

loc_000E3F21: ;
    PUSH32(esp, ebp);

loc_000E3F22: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000E3F2Au); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000E3F2A: ;
    ebp = MEM32(ebx);
    ecx = esi + 0x14;
    edi = eax;
    PUSH32(esp, 0x000E3F36u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000E3F36: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x000E3F3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E3F3D: ;
    ecx = esi;
    PUSH32(esp, 0x000E3F44u); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_000E3F44: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E3F22; /* jne: not equal / not zero */

loc_000E3F4A: ;
    POP32(esp, ebp);

loc_000E3F4B: ;
    POP32(esp, esi);

loc_000E3F4C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3F60
 * Original: 0x000E3F60 - 0x000E3FAD (77 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3F60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000E3FA6; /* je: equal / zero */

loc_000E3F6C: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E3F73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E3F73: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000E3FA6; /* je: equal / zero */

loc_000E3F92: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000E3F9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E3F9F: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000E3FA6: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E3FB0
 * Original: 0x000E3FB0 - 0x000E4166 (438 bytes, 157 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3FB0(void)
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

loc_000E3FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3D03E8);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E3FC3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E3FC3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E401D; /* jne: not equal / not zero */

loc_000E3FCA: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3FD4u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000E3FD4: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esp = esp + 4;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E4012; /* jnp: not parity */

loc_000E3FE8: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4012; /* je: equal / zero */

loc_000E3FF9: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D69F4); /* fmul dword ptr [0x3d69f4] */
    PUSH32(esp, 0x000E4008u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000E4008: ;
    MEM8(esi + 0xC) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000E4012: ;
    POP32(esp, edi);
    MEM8(esi + 0xC) = 0xFF;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000E401D: ;
    PUSH32(esp, 0x3CC9F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4028u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E4028: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E4043; /* jne: not equal / not zero */

loc_000E402F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi + 8;
    PUSH32(esp, 0x000E403Cu); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000E403C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000E4043: ;
    PUSH32(esp, 0x3D69E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E404Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E404E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E407F; /* jne: not equal / not zero */

loc_000E4055: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E4064u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E4064: ;
    SET_LO8(ecx, MEM8(esi + 0xE));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0xE) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000E407F: ;
    PUSH32(esp, 0x3D69DC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E408Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E408A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E40BE; /* jne: not equal / not zero */

loc_000E4091: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E40A0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E40A0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0xE));
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0xE) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000E40BE: ;
    PUSH32(esp, 0x3D2C94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E40C9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E40C9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E40FE; /* jne: not equal / not zero */

loc_000E40D0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E40DFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E40DF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0xE));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0xE) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000E40FE: ;
    PUSH32(esp, 0x3D2C88);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4109u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E4109: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E413D; /* jne: not equal / not zero */

loc_000E4110: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E411Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E411F: ;
    SET_LO8(ecx, MEM8(esi + 0xE));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0xE) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000E413D: ;
    PUSH32(esp, 0x3D03F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4148u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E4148: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E415F; /* jne: not equal / not zero */

loc_000E414F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E4159u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000E4159: ;
    esp = esp + 4;
    MEM8(esi + 0xD) = LO8(eax);

loc_000E415F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E4170
 * Original: 0x000E4170 - 0x000E4182 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4170(void)
{

loc_000E4170: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4178u); RECOMP_ABI_CALL(0x000D3FD0u, sub_000D3FD0); /* call 0x000D3FD0 */

loc_000E4178: ;
    MEM32(esi) = 0x3D6A10;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4190
 * Original: 0x000E4190 - 0x000E41C2 (50 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4190(void)
{

loc_000E4190: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4198u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4198: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi) = 0x3D6A40;
    MEM32(esi + 0x18) = 4;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x30) = eax;
    MEM8(esi + 0x34) = MEM8(esi + 0x34) & 0xF0;
    MEM8(esi + 0x2C) = 0xC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E41D0
 * Original: 0x000E41D0 - 0x000E42C9 (249 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E41D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E41D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E41DEu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E41DE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BE0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E41F2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E41F2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4211; /* je: equal / zero */

loc_000E41F9: ;
    raven_native_energy_copy(esi, eax);
    SET_LO16(ecx, MEM16(eax + 0x10));
    MEM16(esi + 0x10) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x12) = LO8(eax);

loc_000E4211: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BF8);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4225u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4225: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E423C; /* je: equal / zero */

loc_000E422C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E423C; /* je: equal / zero */

loc_000E4233: ;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E423Cu); RECOMP_ABI_CALL(0x000CFD00u, xml1_guest_attack_definition_copy); /* call 0x000CFD00 */

loc_000E423C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451434);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4250u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4250: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E42C4; /* je: equal / zero */

loc_000E4257: ;
    SET_LO8(edx, MEM8(eax + 0x34));
    SET_LO8(ecx, MEM8(esi + 0x34));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(edx, MEM8(esi + 0x34));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x34) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x2C));
    MEM8(esi + 0x2C) = LO8(edx);
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esi + 0x28) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x34));
    SET_LO8(edx, MEM8(esi + 0x34));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x34));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x34) = LO8(ecx);
    ecx = MEM32(eax + 0x30);
    SET_LO8(edx, MEM8(esi + 0x34));
    MEM32(esi + 0x30) = ecx;
    SET_LO8(edx, LO8(edx) ^ MEM8(eax + 0x34));
    SET_LO8(ecx, MEM8(esi + 0x34));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x34) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 0x34));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x34) = LO8(eax);

loc_000E42C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E42D0
 * Original: 0x000E42D0 - 0x000E42EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E42D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E42D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E42D8u); RECOMP_ABI_CALL(0x000E42F0u, sub_000E42F0); /* call 0x000E42F0 */

loc_000E42D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E42E8; /* je: equal / zero */

loc_000E42DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E42E5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E42E5: ;
    esp = esp + 4;

loc_000E42E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E42F0
 * Original: 0x000E42F0 - 0x000E42FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E42F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E42F0: ;
    MEM32(ecx) = 0x3D6A40;
    g_seh_ebp = ebp; sub_000CFE50(); return; /* tail jmp 0x000CFE50 */

}

/**
 * sub_000E4300
 * Original: 0x000E4300 - 0x000E4323 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4300(void)
{

loc_000E4300: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4308u); RECOMP_ABI_CALL(0x000D3FD0u, sub_000D3FD0); /* call 0x000D3FD0 */

loc_000E4308: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    SET_LO8(eax, LO8(eax) & 0xFE);
    SET_LO8(eax, LO8(eax) | 6);
    MEM8(esi + 0x38) = LO8(eax);
    MEM32(esi) = 0x3D6A70;
    MEM32(esi + 0x34) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4330
 * Original: 0x000E4330 - 0x000E4386 (86 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4330: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E433Eu); RECOMP_ABI_CALL(0x000D3E20u, sub_000D3E20); /* call 0x000D3E20 */

loc_000E433E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451450);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4352u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4352: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4381; /* je: equal / zero */

loc_000E4359: ;
    SET_LO8(edx, MEM8(eax + 0x38));
    SET_LO8(ecx, MEM8(esi + 0x38));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(edx, MEM8(esi + 0x38));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x38) = LO8(edx);
    SET_LO8(ecx, LO8(edx));
    SET_LO8(edx, MEM8(eax + 0x38));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x38) = LO8(edx);
    eax = MEM32(eax + 0x34);
    MEM32(esi + 0x34) = eax;

loc_000E4381: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4390
 * Original: 0x000E4390 - 0x000E43AE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4398u); RECOMP_ABI_CALL(0x000E43B0u, sub_000E43B0); /* call 0x000E43B0 */

loc_000E4398: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E43A8; /* je: equal / zero */

loc_000E439F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E43A5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E43A5: ;
    esp = esp + 4;

loc_000E43A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E43B0
 * Original: 0x000E43B0 - 0x000E43BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E43B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E43B0: ;
    MEM32(ecx) = 0x3D6A70;
    g_seh_ebp = ebp; sub_000D3DE0(); return; /* tail jmp 0x000D3DE0 */

}

/**
 * sub_000E43C0
 * Original: 0x000E43C0 - 0x000E43D2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E43C0(void)
{

loc_000E43C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E43C8u); RECOMP_ABI_CALL(0x000D3FD0u, sub_000D3FD0); /* call 0x000D3FD0 */

loc_000E43C8: ;
    MEM32(esi) = 0x3D6AA4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E43E0
 * Original: 0x000E43E0 - 0x000E43FE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E43E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E43E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E43E8u); RECOMP_ABI_CALL(0x000E4400u, sub_000E4400); /* call 0x000E4400 */

loc_000E43E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E43F8; /* je: equal / zero */

loc_000E43EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E43F5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E43F5: ;
    esp = esp + 4;

loc_000E43F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4400
 * Original: 0x000E4400 - 0x000E440B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E4400: ;
    MEM32(ecx) = 0x3D6AA4;
    g_seh_ebp = ebp; sub_000D3DE0(); return; /* tail jmp 0x000D3DE0 */

}

/**
 * sub_000E4410
 * Original: 0x000E4410 - 0x000E4422 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4410(void)
{

loc_000E4410: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4418u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4418: ;
    MEM32(esi) = 0x3D6AD4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4430
 * Original: 0x000E4430 - 0x000E444E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4430: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4438u); RECOMP_ABI_CALL(0x000E4450u, sub_000E4450); /* call 0x000E4450 */

loc_000E4438: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4448; /* je: equal / zero */

loc_000E443F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4445u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E4445: ;
    esp = esp + 4;

loc_000E4448: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4450
 * Original: 0x000E4450 - 0x000E445B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4450(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E4450: ;
    MEM32(ecx) = 0x3D6AD4;
    g_seh_ebp = ebp; sub_000CFE50(); return; /* tail jmp 0x000CFE50 */

}

/**
 * sub_000E4460
 * Original: 0x000E4460 - 0x000E4476 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4460(void)
{

loc_000E4460: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4468u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4468: ;
    MEM32(esi) = 0x3D6B04;
    MEM8(esi + 0x18) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4480
 * Original: 0x000E4480 - 0x000E4512 (146 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4480: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E448Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E448E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BE0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E44A2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E44A2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E44C1; /* je: equal / zero */

loc_000E44A9: ;
    SET_LO16(ecx, MEM16(eax + 0x10));
    MEM16(esi + 0x10) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x12) = LO8(eax);

loc_000E44C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BF8);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E44D5u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E44D5: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E44EC; /* je: equal / zero */

loc_000E44DC: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E44EC; /* je: equal / zero */

loc_000E44E3: ;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E44ECu); RECOMP_ABI_CALL(0x000CFD00u, xml1_guest_attack_definition_copy); /* call 0x000CFD00 */

loc_000E44EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4514D0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4500u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4500: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E450D; /* je: equal / zero */

loc_000E4507: ;
    SET_LO8(ecx, MEM8(eax + 0x18));
    MEM8(esi + 0x18) = LO8(ecx);

loc_000E450D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4520
 * Original: 0x000E4520 - 0x000E453F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4520(void)
{

loc_000E4520: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4528u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4528: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(eax);
    MEM32(esi) = 0x3D6B34;
    MEM8(esi + 0x1C) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4540
 * Original: 0x000E4540 - 0x000E4580 (64 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4540: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E454Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E454E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4514F0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4562u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4562: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E457B; /* je: equal / zero */

loc_000E4569: ;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;
    SET_LO8(edx, MEM8(eax + 0x1C));
    MEM8(esi + 0x1C) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0x1D));
    MEM8(esi + 0x1D) = LO8(eax);

loc_000E457B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4580
 * Original: 0x000E4580 - 0x000E45AA (42 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4580(void)
{

loc_000E4580: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4588u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4588: ;
    MEM8(esi + 0x22) = MEM8(esi + 0x22) & 0xFC;
    MEM32(esi) = 0x3D6B68;
    MEM32(esi + 0x18) = 0x41400000;
    MEM32(esi + 0x1C) = 0x3F800000;
    MEM16(esi + 0x20) = 0xFFFF;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E45B0
 * Original: 0x000E45B0 - 0x000E466D (189 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E45B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E45B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E45BEu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E45BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BE0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E45D2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E45D2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E45F1; /* je: equal / zero */

loc_000E45D9: ;
    SET_LO16(ecx, MEM16(eax + 0x10));
    MEM16(esi + 0x10) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x12) = LO8(eax);

loc_000E45F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BF8);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4605u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4605: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E461C; /* je: equal / zero */

loc_000E460C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E461C; /* je: equal / zero */

loc_000E4613: ;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E461Cu); RECOMP_ABI_CALL(0x000CFD00u, xml1_guest_attack_definition_copy); /* call 0x000CFD00 */

loc_000E461C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x45150C);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4630u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4630: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4668; /* je: equal / zero */

loc_000E4637: ;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = edx;
    SET_LO16(ecx, MEM16(eax + 0x20));
    SET_LO8(edx, MEM8(esi + 0x22));
    MEM16(esi + 0x20) = LO16(ecx);
    SET_LO8(edx, LO8(edx) ^ MEM8(eax + 0x22));
    SET_LO8(ecx, MEM8(esi + 0x22));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x22) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 0x22));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x22) = LO8(eax);

loc_000E4668: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4670
 * Original: 0x000E4670 - 0x000E468E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4670: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4678u); RECOMP_ABI_CALL(0x000E4690u, sub_000E4690); /* call 0x000E4690 */

loc_000E4678: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4688; /* je: equal / zero */

loc_000E467F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4685u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E4685: ;
    esp = esp + 4;

loc_000E4688: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4690
 * Original: 0x000E4690 - 0x000E469B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4690(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E4690: ;
    MEM32(ecx) = 0x3D6B68;
    g_seh_ebp = ebp; sub_000CFE50(); return; /* tail jmp 0x000CFE50 */

}

/**
 * sub_000E46A0
 * Original: 0x000E46A0 - 0x000E46C4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E46A0(void)
{

loc_000E46A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E46A8u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E46A8: ;
    SET_LO8(eax, 1);
    MEM8(esi + 0x1B) = LO8(eax);
    MEM8(esi + 0x1C) = LO8(eax);
    MEM32(esi) = 0x3D6B98;
    MEM16(esi + 0x18) = 5;
    MEM8(esi + 0x1A) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E46D0
 * Original: 0x000E46D0 - 0x000E4776 (166 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E46D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E46D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E46DEu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E46DE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BE0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E46F2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E46F2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4711; /* je: equal / zero */

loc_000E46F9: ;
    SET_LO16(ecx, MEM16(eax + 0x10));
    MEM16(esi + 0x10) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x12) = LO8(eax);

loc_000E4711: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BF8);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4725u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4725: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E473C; /* je: equal / zero */

loc_000E472C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E473C; /* je: equal / zero */

loc_000E4733: ;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E473Cu); RECOMP_ABI_CALL(0x000CFD00u, xml1_guest_attack_definition_copy); /* call 0x000CFD00 */

loc_000E473C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451528);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4750u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4750: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4771; /* je: equal / zero */

loc_000E4757: ;
    SET_LO16(ecx, MEM16(eax + 0x18));
    MEM16(esi + 0x18) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x1A));
    MEM8(esi + 0x1A) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x1B));
    MEM8(esi + 0x1B) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x1C));
    MEM8(esi + 0x1C) = LO8(edx);

loc_000E4771: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4780
 * Original: 0x000E4780 - 0x000E479E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4780: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4788u); RECOMP_ABI_CALL(0x000E47A0u, sub_000E47A0); /* call 0x000E47A0 */

loc_000E4788: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4798; /* je: equal / zero */

loc_000E478F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4795u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E4795: ;
    esp = esp + 4;

loc_000E4798: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E47A0
 * Original: 0x000E47A0 - 0x000E47AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E47A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E47A0: ;
    MEM32(ecx) = 0x3D6B98;
    g_seh_ebp = ebp; sub_000CFE50(); return; /* tail jmp 0x000CFE50 */

}

/**
 * sub_000E47B0
 * Original: 0x000E47B0 - 0x000E47CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E47B0(void)
{

loc_000E47B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E47B8u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E47B8: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) & 0xFE;
    MEM32(esi) = 0x3D6BC8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E47D0
 * Original: 0x000E47D0 - 0x000E47F6 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E47D0(void)
{

loc_000E47D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E47D8u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E47D8: ;
    SET_LO8(ecx, MEM8(esi + 0x20));
    eax = 0; /* xor self */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    MEM32(esi + 0x24) = eax;
    MEM8(esi + 0x20) = LO8(ecx);
    MEM32(esi) = 0x3D6BF8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4800
 * Original: 0x000E4800 - 0x000E4834 (52 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4800: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E480Eu); RECOMP_ABI_CALL(0x000D44A0u, sub_000D44A0); /* call 0x000D44A0 */

loc_000E480E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451544);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4822u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4822: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E482F; /* je: equal / zero */

loc_000E4829: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

loc_000E482F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4840
 * Original: 0x000E4840 - 0x000E487A (58 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4840(void)
{

loc_000E4840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4848u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4848: ;
    SET_LO8(ecx, MEM8(esi + 0x20));
    eax = 0; /* xor self */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x24) = eax;
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    MEM8(esi + 0x20) = LO8(ecx);
    MEM32(esi) = 0x3D6C28;
    MEM32(esi + 0x28) = eax;
    SET_LO8(eax, MEM8(esi + 0x2C));
    SET_LO8(eax, LO8(eax) & 0xFE);
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(esi + 0x2C) = LO8(eax);
    MEM32(esi + 0x30) = 0xBF800000u;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4880
 * Original: 0x000E4880 - 0x000E48E2 (98 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4880: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E488Eu); RECOMP_ABI_CALL(0x000D44A0u, sub_000D44A0); /* call 0x000D44A0 */

loc_000E488E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x45156C);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E48A2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E48A2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E48DD; /* je: equal / zero */

loc_000E48A9: ;
    ecx = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(esi + 0x28) = edx;
    SET_LO8(edx, MEM8(eax + 0x2C));
    SET_LO8(ecx, MEM8(esi + 0x2C));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(edx, MEM8(esi + 0x2C));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x2C) = LO8(edx);
    SET_LO8(ecx, LO8(edx));
    SET_LO8(edx, MEM8(eax + 0x2C));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x2C) = LO8(edx);
    eax = MEM32(eax + 0x30);
    MEM32(esi + 0x30) = eax;

loc_000E48DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E48F0
 * Original: 0x000E48F0 - 0x000E4909 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E48F0(void)
{

loc_000E48F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E48F8u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E48F8: ;
    MEM32(esi) = 0x3D6C58;
    MEM32(esi + 0x18) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4910
 * Original: 0x000E4910 - 0x000E49A2 (146 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4910: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E491Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E491E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BE0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4932u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4932: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4951; /* je: equal / zero */

loc_000E4939: ;
    SET_LO16(ecx, MEM16(eax + 0x10));
    MEM16(esi + 0x10) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x12) = LO8(eax);

loc_000E4951: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BF8);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4965u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4965: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E497C; /* je: equal / zero */

loc_000E496C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E497C; /* je: equal / zero */

loc_000E4973: ;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E497Cu); RECOMP_ABI_CALL(0x000CFD00u, xml1_guest_attack_definition_copy); /* call 0x000CFD00 */

loc_000E497C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451590);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4990u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4990: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E499D; /* je: equal / zero */

loc_000E4997: ;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;

loc_000E499D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E49B0
 * Original: 0x000E49B0 - 0x000E49CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E49B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E49B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E49B8u); RECOMP_ABI_CALL(0x000E49D0u, sub_000E49D0); /* call 0x000E49D0 */

loc_000E49B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E49C8; /* je: equal / zero */

loc_000E49BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E49C5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E49C5: ;
    esp = esp + 4;

loc_000E49C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E49D0
 * Original: 0x000E49D0 - 0x000E49DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E49D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E49D0: ;
    MEM32(ecx) = 0x3D6C58;
    g_seh_ebp = ebp; sub_000CFE50(); return; /* tail jmp 0x000CFE50 */

}

/**
 * sub_000E49E0
 * Original: 0x000E49E0 - 0x000E49F6 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E49E0(void)
{

loc_000E49E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E49E8u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E49E8: ;
    MEM8(esi + 0x18) = MEM8(esi + 0x18) & 0xFE;
    MEM32(esi) = 0x3D6C88;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4A00
 * Original: 0x000E4A00 - 0x000E4A9C (156 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E4A0Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E4A0E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BE0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4A22u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4A22: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4A41; /* je: equal / zero */

loc_000E4A29: ;
    SET_LO16(ecx, MEM16(eax + 0x10));
    MEM16(esi + 0x10) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x12) = LO8(eax);

loc_000E4A41: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BF8);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4A55u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4A55: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4A6C; /* je: equal / zero */

loc_000E4A5C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4A6C; /* je: equal / zero */

loc_000E4A63: ;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E4A6Cu); RECOMP_ABI_CALL(0x000CFD00u, xml1_guest_attack_definition_copy); /* call 0x000CFD00 */

loc_000E4A6C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4515AC);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4A80u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4A80: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4A97; /* je: equal / zero */

loc_000E4A87: ;
    SET_LO8(ecx, MEM8(eax + 0x18));
    SET_LO8(eax, MEM8(esi + 0x18));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x18) = LO8(eax);

loc_000E4A97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4AA0
 * Original: 0x000E4AA0 - 0x000E4ABE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4AA8u); RECOMP_ABI_CALL(0x000E4AC0u, sub_000E4AC0); /* call 0x000E4AC0 */

loc_000E4AA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4AB8; /* je: equal / zero */

loc_000E4AAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4AB5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E4AB5: ;
    esp = esp + 4;

loc_000E4AB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4AC0
 * Original: 0x000E4AC0 - 0x000E4ACB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4AC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E4AC0: ;
    MEM32(ecx) = 0x3D6C88;
    g_seh_ebp = ebp; sub_000CFE50(); return; /* tail jmp 0x000CFE50 */

}

/**
 * sub_000E4AD0
 * Original: 0x000E4AD0 - 0x000E4AE2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4AD0(void)
{

loc_000E4AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4AD8u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4AD8: ;
    MEM32(esi) = 0x3D6CB8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4AF0
 * Original: 0x000E4AF0 - 0x000E4B02 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4AF0(void)
{

loc_000E4AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4AF8u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4AF8: ;
    MEM32(esi) = 0x3D6CE8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4B10
 * Original: 0x000E4B10 - 0x000E4B22 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4B10(void)
{

loc_000E4B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4B18u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4B18: ;
    MEM32(esi) = 0x3D6D18;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4B30
 * Original: 0x000E4B30 - 0x000E4B42 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4B30(void)
{

loc_000E4B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4B38u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4B38: ;
    MEM32(esi) = 0x3D6D48;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4B50
 * Original: 0x000E4B50 - 0x000E4B62 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4B50(void)
{

loc_000E4B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4B58u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4B58: ;
    MEM32(esi) = 0x3D6D78;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4B70
 * Original: 0x000E4B70 - 0x000E4B82 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4B70(void)
{

loc_000E4B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4B78u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4B78: ;
    MEM32(esi) = 0x3D6DA8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4B90
 * Original: 0x000E4B90 - 0x000E4BAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4B90(void)
{

loc_000E4B90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4B98u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4B98: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) & 0xFE;
    MEM32(esi) = 0x3D6DD8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4BB0
 * Original: 0x000E4BB0 - 0x000E4BCE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4BB0(void)
{

loc_000E4BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4BB8u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4BB8: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) & 0xFE;
    MEM32(esi) = 0x3D6E08;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4BD0
 * Original: 0x000E4BD0 - 0x000E4BEE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4BD0(void)
{

loc_000E4BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4BD8u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4BD8: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) & 0xFE;
    MEM32(esi) = 0x3D6E38;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4BF0
 * Original: 0x000E4BF0 - 0x000E4C0E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4BF0(void)
{

loc_000E4BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4BF8u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4BF8: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) & 0xFE;
    MEM32(esi) = 0x3D6E68;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4C10
 * Original: 0x000E4C10 - 0x000E4C2E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4C10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4C18u); RECOMP_ABI_CALL(0x000E4C30u, sub_000E4C30); /* call 0x000E4C30 */

loc_000E4C18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4C28; /* je: equal / zero */

loc_000E4C1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4C25u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E4C25: ;
    esp = esp + 4;

loc_000E4C28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4C30
 * Original: 0x000E4C30 - 0x000E4C35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4C30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E4C30: ;
    g_seh_ebp = ebp; sub_000D3DE0(); return; /* tail jmp 0x000D3DE0 */

}

/**
 * sub_000E4C40
 * Original: 0x000E4C40 - 0x000E4C59 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4C40(void)
{

loc_000E4C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4C48u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E4C48: ;
    MEM32(esi) = 0x3D6E98;
    MEM32(esi + 0x18) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4C60
 * Original: 0x000E4C60 - 0x000E4CF2 (146 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E4C6Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E4C6E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BE0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4C82u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4C82: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4CA1; /* je: equal / zero */

loc_000E4C89: ;
    SET_LO16(ecx, MEM16(eax + 0x10));
    MEM16(esi + 0x10) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x12) = LO8(eax);

loc_000E4CA1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BF8);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4CB5u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4CB5: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4CCC; /* je: equal / zero */

loc_000E4CBC: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4CCC; /* je: equal / zero */

loc_000E4CC3: ;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E4CCCu); RECOMP_ABI_CALL(0x000CFD00u, xml1_guest_attack_definition_copy); /* call 0x000CFD00 */

loc_000E4CCC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451714);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4CE0u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4CE0: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4CED; /* je: equal / zero */

loc_000E4CE7: ;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;

loc_000E4CED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4D00
 * Original: 0x000E4D00 - 0x000E4D1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E4D08u); RECOMP_ABI_CALL(0x000E4D20u, sub_000E4D20); /* call 0x000E4D20 */

loc_000E4D08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4D18; /* je: equal / zero */

loc_000E4D0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4D15u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E4D15: ;
    esp = esp + 4;

loc_000E4D18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4D20
 * Original: 0x000E4D20 - 0x000E4D25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4D20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E4D20: ;
    g_seh_ebp = ebp; sub_000CFE50(); return; /* tail jmp 0x000CFE50 */

}

/**
 * sub_000E4D30
 * Original: 0x000E4D30 - 0x000E4D92 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4D30: ;
    edx = ecx;
    eax = MEM32(edx + 0xC36C);
    eax = MEM32(edx + eax * 4 + 0xB734);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xC374;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0xC36C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30C (32-bit) */
    MEM32(edx + 0xC36C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000E4D7C; /* jl: less (signed <) */

loc_000E4D72: ;
    MEM32(edx + 0xC36C) = 0;

loc_000E4D7C: ;
    MEM32(edx + 0xC370) = MEM32(edx + 0xC370) - 1;
    _fa = (uint32_t)(MEM32(edx + 0xC370)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xC3D8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xC3D8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}



/**
 * sub_000E4DF0
 * Original: 0x000E4DF0 - 0x000E4E2E (62 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4DF0(void)
{

loc_000E4DF0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x24));
    MEM8(eax + 0xE) = LO8(edx);
    edx = MEM32(0x4F33E0);
    SET_LO8(ecx, LO8(ecx) & 0xF8);
    MEM32(eax) = 0x3D6EC8;
    MEM32(eax + 0x18) = edx;
    MEM8(eax + 0x24) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4E30
 * Original: 0x000E4E30 - 0x000E4EAD (125 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E4E3Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E4E3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451730);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4E52u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4E52: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4EA8; /* je: equal / zero */

loc_000E4E59: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    SET_LO8(edx, MEM8(esi + 0x24));
    MEM32(esi + 0x18) = ecx;
    SET_LO8(edx, LO8(edx) ^ MEM8(eax + 0x24));
    SET_LO8(ecx, MEM8(esi + 0x24));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x24) = LO8(ecx);
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 0x20);
    SET_LO8(ecx, MEM8(esi + 0x24));
    MEM32(esi + 0x20) = edx;
    SET_LO8(ecx, LO8(ecx) ^ MEM8(eax + 0x24));
    SET_LO8(edx, MEM8(esi + 0x24));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x24) = LO8(edx);
    SET_LO8(ecx, LO8(edx));
    SET_LO8(edx, MEM8(eax + 0x24));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x24) = LO8(edx);

loc_000E4EA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4EB0
 * Original: 0x000E4EB0 - 0x000E4F0C (92 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4EB0(void)
{

loc_000E4EB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350A78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D6EF4;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x20));
    SET_LO8(ecx, LO8(ecx) & 0xE0);
    SET_LO8(ecx, LO8(ecx) | 0x20);
    MEM8(eax + 0x20) = LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000E4F10
 * Original: 0x000E4F10 - 0x000E4F9B (139 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4F10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E4F1Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E4F1E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451748);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4F32u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4F32: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4F96; /* je: equal / zero */

loc_000E4F39: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    SET_LO8(ecx, MEM8(esi + 0x20));
    MEM32(esi + 0x1C) = edx;
    SET_LO8(ecx, LO8(ecx) ^ MEM8(eax + 0x20));
    SET_LO8(edx, MEM8(esi + 0x20));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x20) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x20));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x20) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x20));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x20) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x20));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x20) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x20));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0x20);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x20) = LO8(edx);

loc_000E4F96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4FA0
 * Original: 0x000E4FA0 - 0x000E4FC3 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4FA0(void)
{

loc_000E4FA0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D6F20;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E4FD0
 * Original: 0x000E4FD0 - 0x000E5004 (52 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4FD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E4FDEu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E4FDE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451760);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4FF2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E4FF2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4FFF; /* je: equal / zero */

loc_000E4FF9: ;
    eax = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = eax;

loc_000E4FFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5010
 * Original: 0x000E5010 - 0x000E506F (95 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5010(void)
{

loc_000E5010: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350A78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM8(eax + 0x10) = LO8(ecx);
    MEM8(eax + 0x11) = LO8(ecx);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax) = 0x3D6F4C;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5070
 * Original: 0x000E5070 - 0x000E50D4 (100 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5070: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E507Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E507E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451780);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5092u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5092: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E50CF; /* je: equal / zero */

loc_000E5099: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    MEM8(esi + 0x10) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x11));
    MEM8(esi + 0x11) = LO8(edx);
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esi + 0x28) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(eax + 0x2C);
    MEM32(esi + 0x2C) = eax;

loc_000E50CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E50E0
 * Original: 0x000E50E0 - 0x000E5166 (134 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E50E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E50E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350A78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    SET_LO8(ecx, MEM8(esi + 0xE));
    SET_LO8(ecx, LO8(ecx) & 0xF0);
    MEM32(esp + 8) = esi;
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(ebx);
    MEM8(esi + 0xE) = LO8(ecx);
    MEM32(esi) = 0x3D6F78;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x3C974C);
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0x000E512Fu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E512F: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C974C);
    PUSH32(esp, 0x000E513Eu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E513E: ;
    ecx = eax;
    PUSH32(esp, 0x000E5145u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E5145: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x21) = MEM8(esi + 0x21) & 0xF8;
    MEM8(esi + 0x20) = 0x14;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5170
 * Original: 0x000E5170 - 0x000E51E2 (114 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5170: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E517Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E517E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4517A0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5192u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5192: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E51DD; /* je: equal / zero */

loc_000E5199: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x21));
    SET_LO8(edx, MEM8(esi + 0x21));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x21));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x20));
    MEM8(esi + 0x20) = LO8(ecx);
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = edx;
    SET_LO8(edx, MEM8(eax + 0x21));
    SET_LO8(ecx, MEM8(esi + 0x21));
    SET_LO8(eax, MEM8(esi + 0x21));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x21) = LO8(eax);

loc_000E51DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E51F0
 * Original: 0x000E51F0 - 0x000E5227 (55 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E51F0(void)
{

loc_000E51F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 0x18) = LO8(ecx);
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax + 0x14) = 0xFFFFFFFFu;
    MEM32(eax) = 0x3D6FA4;
    MEM32(eax + 0x20) = ecx;
    MEM8(eax + 0x24) = MEM8(eax + 0x24) & 0xFE;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5230
 * Original: 0x000E5230 - 0x000E52A6 (118 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5230: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E523Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E523E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4510B0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5252u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5252: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E526B; /* je: equal / zero */

loc_000E5259: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    SET_LO8(eax, MEM8(eax + 0x18));
    MEM8(esi + 0x18) = LO8(eax);

loc_000E526B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450E28);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E527Fu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E527F: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E52A1; /* je: equal / zero */

loc_000E5286: ;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = edx;
    SET_LO8(eax, MEM8(eax + 0x24));
    SET_LO8(ecx, MEM8(esi + 0x24));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x24) = LO8(ecx);

loc_000E52A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E52B0
 * Original: 0x000E52B0 - 0x000E5305 (85 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E52B0(void)
{

loc_000E52B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 0x18) = LO8(ecx);
    MEM32(eax) = 0x3D6FD0;
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax + 0x1C) = 0x3EC28F5C;
    MEM32(eax + 0x20) = 0x3EBD70A4;
    MEM32(eax + 0x24) = 0x3EB33333;
    MEM32(eax + 0x28) = 0x3F800000;
    MEM16(eax + 0x2C) = 0xA;
    MEM8(eax + 0x2E) = LO8(ecx);
    MEM8(eax + 0x2F) = LO8(ecx);
    MEM32(eax + 0x14) = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5310
 * Original: 0x000E5310 - 0x000E5397 (135 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E531Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E531E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4510B0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5332u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5332: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E534B; /* je: equal / zero */

loc_000E5339: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    SET_LO8(eax, MEM8(eax + 0x18));
    MEM8(esi + 0x18) = LO8(eax);

loc_000E534B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4510CC);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E535Fu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E535F: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5392; /* je: equal / zero */

loc_000E5366: ;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(esi + 0x28) = edx;
    SET_LO16(ecx, MEM16(eax + 0x2C));
    MEM16(esi + 0x2C) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x2E));
    MEM8(esi + 0x2E) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0x2F));
    MEM8(esi + 0x2F) = LO8(eax);

loc_000E5392: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E53A0
 * Original: 0x000E53A0 - 0x000E53DC (60 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E53A0(void)
{

loc_000E53A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM32(eax) = 0x3D6FFC;
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x28));
    SET_LO8(ecx, LO8(ecx) & 0xF8);
    MEM32(eax + 0x20) = 0xFFFFFFFFu;
    MEM8(eax + 0x28) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E53E0
 * Original: 0x000E53E0 - 0x000E545D (125 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E53E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E53E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E53EEu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E53EE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4517BC);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5402u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5402: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5458; /* je: equal / zero */

loc_000E5409: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 0x24);
    SET_LO8(ecx, MEM8(esi + 0x28));
    MEM32(esi + 0x24) = edx;
    SET_LO8(ecx, LO8(ecx) ^ MEM8(eax + 0x28));
    SET_LO8(edx, MEM8(esi + 0x28));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x28) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x28));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x28) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x28));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x28) = LO8(edx);

loc_000E5458: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5460
 * Original: 0x000E5460 - 0x000E54B0 (80 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5460(void)
{

loc_000E5460: ;
    raven_loop_sound_retire(ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350A78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D7028;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(0x3DD050);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000E54B0
 * Original: 0x000E54B0 - 0x000E54ED (61 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E54B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E54B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E54BEu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E54BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450DD0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E54D2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E54D2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E54E8; /* je: equal / zero */

loc_000E54D9: ;
    raven_loop_sound_copy(esi,eax);
    eax = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x3DD050);
    MEM32(esi + 0x14) = ecx;

loc_000E54E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E54F0
 * Original: 0x000E54F0 - 0x000E5553 (99 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E54F0(void)
{

loc_000E54F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350A60);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D7028;
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x3DD050);
    MEM32(eax + 0x14) = edx;
    MEM32(eax) = 0x3D7054;
    MEM32(eax + 0x18) = ecx;
    MEM8(eax + 0x1D) = LO8(ecx);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 4);
    MEM8(eax + 0x1C) = 0xFE;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5560
 * Original: 0x000E5560 - 0x000E55D0 (112 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E556Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E556E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450DD0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5582u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5582: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5598; /* je: equal / zero */

loc_000E5589: ;
    eax = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x3DD050);
    MEM32(esi + 0x14) = ecx;

loc_000E5598: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4517D4);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E55ACu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E55AC: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E55CB; /* je: equal / zero */

loc_000E55B3: ;
    SET_LO8(edx, MEM8(eax + 0x1C));
    MEM8(esi + 0x1C) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    MEM8(esi + 0x1D) = LO8(ecx);
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = eax;

loc_000E55CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E55D0
 * Original: 0x000E55D0 - 0x000E5604 (52 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E55D0(void)
{

loc_000E55D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    MEM32(eax) = 0x3D7080;
    MEM16(eax + 0x10) = 0x1F4;
    MEM16(eax + 0x12) = 5;
    MEM32(eax + 0x14) = 0xBF800000u;
    MEM16(eax + 0x18) = 0xFFFF;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5610
 * Original: 0x000E5610 - 0x000E565C (76 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5610: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E561Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E561E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4517F0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5632u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5632: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5657; /* je: equal / zero */

loc_000E5639: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    MEM16(esi + 0x12) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 0x10));
    MEM16(esi + 0x10) = LO16(edx);
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = ecx;
    SET_LO16(edx, MEM16(eax + 0x18));
    MEM16(esi + 0x18) = LO16(edx);

loc_000E5657: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5660
 * Original: 0x000E5660 - 0x000E568A (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5660(void)
{

loc_000E5660: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    SET_LO8(edx, MEM8(eax + 0x10));
    SET_LO8(edx, LO8(edx) & 0xFE);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM32(eax) = 0x3D70AC;
    MEM8(eax + 0x10) = LO8(edx);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5690
 * Original: 0x000E5690 - 0x000E56DA (74 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5690: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E569Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E569E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451810);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E56B2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E56B2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E56D5; /* je: equal / zero */

loc_000E56B9: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    SET_LO8(edx, MEM8(esi + 0x10));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x10) = LO8(edx);
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = eax;

loc_000E56D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E56E0
 * Original: 0x000E56E0 - 0x000E5715 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E56E0(void)
{

loc_000E56E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    SET_LO8(ecx, MEM8(eax + 0x18));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    SET_LO8(ecx, LO8(ecx) | 2);
    MEM32(eax) = 0x3D70D8;
    MEM32(eax + 0x10) = 0x40800000;
    MEM32(eax + 0x14) = 0x3DCCCCCD;
    MEM8(eax + 0x18) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5720
 * Original: 0x000E5720 - 0x000E575A (58 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5720: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E572Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E572E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451838);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5742u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5742: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5755; /* je: equal / zero */

loc_000E5749: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;

loc_000E5755: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5760
 * Original: 0x000E5760 - 0x000E5786 (38 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5760(void)
{

loc_000E5760: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D7104;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5790
 * Original: 0x000E5790 - 0x000E57CA (58 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5790: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E579Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E579E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451868);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E57B2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E57B2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E57C5; /* je: equal / zero */

loc_000E57B9: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;

loc_000E57C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E57D0
 * Original: 0x000E57D0 - 0x000E5826 (86 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E57D0(void)
{

loc_000E57D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350A78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D7028;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(0x3DD050);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x3D7130;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5830
 * Original: 0x000E5830 - 0x000E584B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5830(void)
{

loc_000E5830: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    MEM32(eax) = 0x3D715C;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5850
 * Original: 0x000E5850 - 0x000E585C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5850(void)
{

loc_000E5850: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x000E5859u); RECOMP_ABI_CALL(0x0003CE60u, sub_0003CE60); /* call 0x0003CE60 */

loc_000E5859: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E5860
 * Original: 0x000E5860 - 0x000E587B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5860(void)
{

loc_000E5860: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    MEM32(eax) = 0x3D7188;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5880
 * Original: 0x000E5880 - 0x000E588F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5880(void)
{

loc_000E5880: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x000E588Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E588C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E5890
 * Original: 0x000E5890 - 0x000E58B4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5890(void)
{

loc_000E5890: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    SET_LO8(ecx, MEM8(eax + 0x10));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEM32(eax) = 0x3D71B4;
    MEM8(eax + 0x10) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E58C0
 * Original: 0x000E58C0 - 0x000E58EB (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E58C0(void)
{

loc_000E58C0: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    edx = MEM32(esp + 4);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) >> 1);
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    SET_LO8(ecx, MEM8(edx + 0x54C));
    SET_LO8(eax, LO8(eax) << 6);
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    MEM8(edx + 0x54C) = LO8(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E58F0
 * Original: 0x000E58F0 - 0x000E5940 (80 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E58F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E58F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E58FEu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E58FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4518D4);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5912u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5912: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E593B; /* je: equal / zero */

loc_000E5919: ;
    SET_LO8(edx, MEM8(eax + 0x10));
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(edx, MEM8(esi + 0x10));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x10) = LO8(edx);
    SET_LO8(ecx, LO8(edx));
    SET_LO8(edx, MEM8(eax + 0x10));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x10) = LO8(edx);

loc_000E593B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5940
 * Original: 0x000E5940 - 0x000E595E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5940: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E5948u); RECOMP_ABI_CALL(0x000CEDD0u, sub_000CEDD0); /* call 0x000CEDD0 */

loc_000E5948: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5958; /* je: equal / zero */

loc_000E594F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5955u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E5955: ;
    esp = esp + 4;

loc_000E5958: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5960
 * Original: 0x000E5960 - 0x000E5989 (41 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5960(void)
{

loc_000E5960: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    MEM32(eax) = 0x3D71E0;
    MEM32(eax + 0x10) = 0x42C80000;
    MEM32(eax + 0x14) = 0x40000000;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5990
 * Original: 0x000E5990 - 0x000E59CA (58 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5990: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E599Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E599E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4518F8);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E59B2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E59B2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E59C5; /* je: equal / zero */

loc_000E59B9: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;

loc_000E59C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E59D0
 * Original: 0x000E59D0 - 0x000E59F2 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E59D0(void)
{

loc_000E59D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    MEM32(eax) = 0x3D720C;
    MEM32(eax + 0x10) = 0x3F800000;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5A00
 * Original: 0x000E5A00 - 0x000E5A34 (52 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E5A0Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E5A0E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451914);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5A22u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5A22: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5A2F; /* je: equal / zero */

loc_000E5A29: ;
    eax = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = eax;

loc_000E5A2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5A40
 * Original: 0x000E5A40 - 0x000E5A64 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5A40(void)
{

loc_000E5A40: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    SET_LO8(ecx, MEM8(eax + 0x20));
    SET_LO8(ecx, LO8(ecx) & 0xE0);
    MEM32(eax) = 0x3D7238;
    MEM8(eax + 0x20) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5A70
 * Original: 0x000E5A70 - 0x000E5AFD (141 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5A70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E5A7Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E5A7E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451934);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5A92u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5A92: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5AF8; /* je: equal / zero */

loc_000E5A99: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = edx;
    SET_LO8(edx, MEM8(eax + 0x20));
    SET_LO8(ecx, MEM8(esi + 0x20));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(edx, MEM8(esi + 0x20));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x20) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x20));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x20) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x20));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x20) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x20));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x20) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x20));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x20) = LO8(edx);

loc_000E5AF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5B00
 * Original: 0x000E5B00 - 0x000E5B32 (50 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5B00(void)
{

loc_000E5B00: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x1C));
    SET_LO8(edx, LO8(edx) & 0xF0);
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D7264;
    MEM8(eax + 0x1C) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5B40
 * Original: 0x000E5B40 - 0x000E5B9D (93 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5B40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E5B4Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E5B4E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451950);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5B62u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5B62: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5B98; /* je: equal / zero */

loc_000E5B69: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    SET_LO8(edx, MEM8(esi + 0x1C));
    MEM32(esi + 0x18) = ecx;
    SET_LO8(edx, LO8(edx) ^ MEM8(eax + 0x1C));
    SET_LO8(ecx, MEM8(esi + 0x1C));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x1C) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 0x1C));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x1C) = LO8(eax);

loc_000E5B98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5BA0
 * Original: 0x000E5BA0 - 0x000E5BCE (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5BA0(void)
{

loc_000E5BA0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    SET_LO8(edx, MEM8(eax + 0x10));
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM32(eax) = 0x3D7290;
    MEM8(eax + 0x10) = LO8(edx);
    MEM8(eax + 0x11) = LO8(ecx);
    MEM32(eax + 0x34) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5BD0
 * Original: 0x000E5BD0 - 0x000E5C23 (83 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5BD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x000E5BDEu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E5BDE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451970);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5BF2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5BF2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5C1E; /* je: equal / zero */

loc_000E5BF9: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    SET_LO8(edx, MEM8(ebx + 0x10));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    PUSH32(esp, edi);
    MEM8(ebx + 0x10) = LO8(edx);
    esi = eax + 0x11;
    edi = ebx + 0x11;
    ecx = 8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edx = MEM32(eax + 0x34);
    MEM32(ebx + 0x34) = edx;
    POP32(esp, edi);

loc_000E5C1E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5C30
 * Original: 0x000E5C30 - 0x000E5C53 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5C30(void)
{

loc_000E5C30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D72BC;
    MEM8(eax + 0x11) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5C60
 * Original: 0x000E5C60 - 0x000E5CA9 (73 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E5C6Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E5C6E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451990);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5C82u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5C82: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5CA4; /* je: equal / zero */

loc_000E5C89: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    MEM8(esi + 0x10) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x11));
    SET_LO8(ecx, MEM8(esi + 0x12));
    MEM8(esi + 0x11) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0x12));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x12) = LO8(ecx);

loc_000E5CA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5CB0
 * Original: 0x000E5CB0 - 0x000E5CD6 (38 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5CB0(void)
{

loc_000E5CB0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D72E8;
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 0x14) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5CE0
 * Original: 0x000E5CE0 - 0x000E5D1A (58 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5CE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E5CEEu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E5CEE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4519AC);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5D02u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5D02: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5D15; /* je: equal / zero */

loc_000E5D09: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    SET_LO8(edx, MEM8(eax + 0x14));
    MEM8(esi + 0x14) = LO8(edx);

loc_000E5D15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5D20
 * Original: 0x000E5D20 - 0x000E5D49 (41 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5D20(void)
{

loc_000E5D20: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D7314;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 0x18) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5D50
 * Original: 0x000E5D50 - 0x000E5D90 (64 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5D50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E5D5Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E5D5E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4519C8);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5D72u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5D72: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5D8B; /* je: equal / zero */

loc_000E5D79: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    SET_LO8(eax, MEM8(eax + 0x18));
    MEM8(esi + 0x18) = LO8(eax);

loc_000E5D8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5D90
 * Original: 0x000E5D90 - 0x000E5DB7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5D90(void)
{

loc_000E5D90: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D7340;
    MEM8(eax + 0x10) = 1;
    MEM8(eax + 0x11) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5DC0
 * Original: 0x000E5DC0 - 0x000E5DFA (58 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5DC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E5DCEu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E5DCE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4519E0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5DE2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5DE2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5DF5; /* je: equal / zero */

loc_000E5DE9: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    MEM8(esi + 0x10) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x11));
    MEM8(esi + 0x11) = LO8(edx);

loc_000E5DF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5E00
 * Original: 0x000E5E00 - 0x000E5E1B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5E00(void)
{

loc_000E5E00: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    MEM32(eax) = 0x3D736C;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5E20
 * Original: 0x000E5E20 - 0x000E5E76 (86 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5E20(void)
{

loc_000E5E20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350A78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D7028;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(0x3DD050);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x3D7398;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5E80
 * Original: 0x000E5E80 - 0x000E5F10 (144 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E5E97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E5E97: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0xB6D0);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0xB6D0) = ecx;
    MEM32(eax + esi + 0xC374) = MEM32(eax + esi + 0xC374) & edx;
    eax = MEM32(esi + 0xC368);
    edx = MEM32(esi + 0xC370);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30C (32-bit) */
    MEM32(esi + 0xC368) = eax;
    MEM32(esi + 0xC370) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000E5EF6; /* jl: less (signed <) */

loc_000E5EE5: ;
    MEM32(esi + 0xC368) = 0;
    eax = 0x30B;
    goto loc_000E5EF7;

loc_000E5EF6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E5EF7: ;
    MEM32(esi + eax * 4 + 0xB734) = edi;
    eax = MEM32(esi + 0xC3D8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC3D8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5F10
 * Original: 0x000E5F10 - 0x000E5F42 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5F10(void)
{

loc_000E5F10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = MEM8(eax + 0xE) & 0xF0;
    SET_LO8(ecx, MEM8(eax + 0x18));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    MEM32(eax) = 0x3D73C4;
    MEM32(eax + 0x10) = 0x3FE66666;
    MEM32(eax + 0x14) = 0x40800000;
    MEM8(eax + 0x18) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5F50
 * Original: 0x000E5F50 - 0x000E5F99 (73 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5F50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E5F5Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000E5F5E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x451A38);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5F72u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000E5F72: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E5F94; /* je: equal / zero */

loc_000E5F79: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    SET_LO8(ecx, MEM8(esi + 0x18));
    MEM32(esi + 0x14) = edx;
    SET_LO8(eax, MEM8(eax + 0x18));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x18) = LO8(ecx);

loc_000E5F94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5FA0
 * Original: 0x000E5FA0 - 0x000E5FE6 (70 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5FA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E5FA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E5FAEu); RECOMP_ABI_CALL(0x000E5E80u, sub_000E5E80); /* call 0x000E5E80 */

loc_000E5FAE: ;
    ecx = MEM32(esi + 0xD010);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(esi + edi * 4 + 0xC3DC) = MEM32(esi + edi * 4 + 0xC3DC) + eax;
    if (((int32_t)MEM32(esi + edi * 4 + 0xC3DC) >= 0)) goto loc_000E5FE1; /* jns: not sign (positive) */

loc_000E5FC4: ;
    MEM32(esi + edi * 4 + 0xC3DC) = edi;
    ecx = MEM32(esi + 0xD010);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | edi;
    MEM32(esi + edi * 4 + 0xC3DC) = edx;

loc_000E5FE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5FF0
 * Original: 0x000E5FF0 - 0x000E603E (78 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E5FF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xD00C);
    esi = esi & MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000E6006u); RECOMP_ABI_CALL(0x000E5E80u, sub_000E5E80); /* call 0x000E5E80 */

loc_000E6006: ;
    ecx = MEM32(edi + 0xD010);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0xC3DC) = MEM32(edi + esi * 4 + 0xC3DC) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0xC3DC) >= 0)) goto loc_000E6039; /* jns: not sign (positive) */

loc_000E601C: ;
    MEM32(edi + esi * 4 + 0xC3DC) = esi;
    ecx = MEM32(edi + 0xD010);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0xC3DC) = edx;

loc_000E6039: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}





/**
 * sub_000E6D10
 * Original: 0x000E6D10 - 0x000E6D74 (100 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6D10(void)
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

loc_000E6D10: ;
    PUSH32(esp, 0x000E6D15u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000E6D15: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000E6D1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E6D1F: ;
    fp_top() = fp_top() - MEMF(0x4F33E8); /* fsub dword ptr [0x4f33e8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9788)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9788] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6D73; /* jne: not equal / not zero */

loc_000E6D32: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6D3Au); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000E6D3A: ;
    esi = eax;
    PUSH32(esp, 0x000E6D41u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000E6D41: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D77B8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000E6D55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E6D55: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x58); PUSH32(esp, 0x000E6D5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E6D5B: ;
    PUSH32(esp, 0x000E6D60u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000E6D60: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000E6D6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E6D6A: ;
    MEMF(0x4F33E8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000E6D73: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E6D80
 * Original: 0x000E6D80 - 0x000E6D92 (18 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000E6D80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E6D80: ;
    PUSH32(esp, 0x000E6D85u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000E6D85: ;
    eax = MEM32(esp + 4);
    MEMF(eax + 0x3F0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E6DA0
 * Original: 0x000E6DA0 - 0x000E6F1F (383 bytes, 129 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6DA0(void)
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

loc_000E6DA0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000E6DB1u); RECOMP_ABI_CALL(0x000360A0u, sub_000360A0); /* call 0x000360A0 */

loc_000E6DB1: ;
    eax = MEM32(esp + 0x18);
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000E6DD2; /* jp: parity */

loc_000E6DC9: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_000E6DD2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x10) = 0xA;
    MEM32(esp + 0x14) = 0xB;
    MEM32(esp + 0x18) = 0xC;
    edi = 0; /* xor self */

loc_000E6DF5: ;
    ecx = MEM32(esp + edi * 4 + 0x10);
    ebp = MEM32(esi + 0x2F4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000E6E07u); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E6E07: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6E15; /* je: equal / zero */

loc_000E6E0C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E6DF5; /* jb: below (unsigned <) */

loc_000E6E11: ;
    edi = MEM32(esp + 0x24);

loc_000E6E15: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x000E6E1Eu); RECOMP_ABI_CALL(0x000360A0u, sub_000360A0); /* call 0x000360A0 */

loc_000E6E1E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    ecx = esi;
    PUSH32(esp, 9);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6E55; /* jne: not equal / not zero */

loc_000E6E2D: ;
    PUSH32(esp, 0x000E6E32u); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E6E32: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E6F13; /* je: equal / zero */

loc_000E6E3C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000E6EEC; /* jle: less or equal (signed <=) */

loc_000E6E44: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x000E6E4Du); RECOMP_ABI_CALL(0x000360A0u, sub_000360A0); /* call 0x000360A0 */

loc_000E6E4D: ;
    fp_top() = fp_top() * MEMF(0x3D77CC); /* fmul dword ptr [0x3d77cc] */
    goto loc_000E6EC7;

loc_000E6E55: ;
    PUSH32(esp, 0x000E6E5Au); RECOMP_ABI_CALL(0x000360A0u, sub_000360A0); /* call 0x000360A0 */

loc_000E6E5A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    ecx = esi;
    PUSH32(esp, 0xA);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6E8E; /* jne: not equal / not zero */

loc_000E6E69: ;
    PUSH32(esp, 0x000E6E6Eu); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E6E6E: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E6F13; /* je: equal / zero */

loc_000E6E78: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E6EEC; /* jle: less or equal (signed <=) */

loc_000E6E7D: ;
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, 0x000E6E86u); RECOMP_ABI_CALL(0x000360A0u, sub_000360A0); /* call 0x000360A0 */

loc_000E6E86: ;
    fp_top() = fp_top() * MEMF(0x3D77CC); /* fmul dword ptr [0x3d77cc] */
    goto loc_000E6EC7;

loc_000E6E8E: ;
    PUSH32(esp, 0x000E6E93u); RECOMP_ABI_CALL(0x000360A0u, sub_000360A0); /* call 0x000360A0 */

loc_000E6E93: ;
    fp_top() = fp_top() * MEMF(0x3D77CC); /* fmul dword ptr [0x3d77cc] */
    ecx = esi;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6F00; /* jne: not equal / not zero */

loc_000E6EA6: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x000E6EADu); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E6EAD: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E6F13; /* je: equal / zero */

loc_000E6EB3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E6EEC; /* jle: less or equal (signed <=) */

loc_000E6EB8: ;
    PUSH32(esp, 0xA);
    ecx = esi;
    PUSH32(esp, 0x000E6EC1u); RECOMP_ABI_CALL(0x000360A0u, sub_000360A0); /* call 0x000360A0 */

loc_000E6EC1: ;
    fp_top() = fp_top() * MEMF(0x3C8C34); /* fmul dword ptr [0x3c8c34] */

loc_000E6EC7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000E6EEC; /* jp: parity */

loc_000E6ED2: ;
    eax = MEM32(esi + 0x2F4);
    POP32(esp, edi);
    SET_LO8(ebx, 1);
    MEM32(esi + 0x324) = eax;
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_000E6EEC: ;
    POP32(esp, edi);
    MEM32(esi + 0x324) = ebp;
    SET_LO8(ebx, 1);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_000E6F00: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000E6F07u); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E6F07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E6F13; /* je: equal / zero */

loc_000E6F0B: ;
    MEM32(esi + 0x324) = eax;
    SET_LO8(ebx, 1);

loc_000E6F13: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E6F20
 * Original: 0x000E6F20 - 0x000E6F38 (24 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6F20: ;
    ecx = MEM32(esp + 0xC);
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 4), eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E6F40
 * Original: 0x000E6F40 - 0x000E6F57 (23 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6F40: ;
    ecx = MEM32(esp + 0xC);
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E6F60
 * Original: 0x000E6F60 - 0x000E703E (222 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6F60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x334), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E7038; /* jne: not equal / not zero */

loc_000E6F72: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    ecx = ecx >> 7;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E7038; /* jne: not equal / not zero */

loc_000E6F84: ;
    edx = MEM32(eax + 4);
    edx = edx >> 5;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7038; /* je: equal / zero */

loc_000E6F93: ;
    ecx = MEM32(0x5BC9D0);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(0x5BC9D4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x5BC9D8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x5BC9D0);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(0x5BC9D4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x5BC9D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(eax + 8) = edx;
    eax = MEM32(0x4F33F8);
    PUSH32(esp, 0x42700000);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E6FE7u); RECOMP_ABI_CALL(0x0003E7B0u, sub_0003E7B0); /* call 0x0003E7B0 */

loc_000E6FE7: ;
    eax = MEM32(esi + 0x33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000E7038; /* je: equal / zero */

loc_000E6FF5: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000E6FFEu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000E6FFE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7038; /* je: equal / zero */

loc_000E7002: ;
    ecx = MEM32(esi + 0x33C);
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    PUSH32(esp, 0x000E7015u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000E7015: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E701Bu); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_000E701B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7038; /* je: equal / zero */

loc_000E7022: ;
    _fa = (uint32_t)(MEM8(eax + 0x54C)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x54C), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7038; /* je: equal / zero */

loc_000E702B: ;
    PUSH32(esp, 0x16);
    ecx = esi;
    PUSH32(esp, 0x000E7034u); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E7034: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E703A; /* jne: not equal / not zero */

loc_000E7038: ;
    eax = 0; /* xor self */

loc_000E703A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E7040
 * Original: 0x000E7040 - 0x000E7385 (837 bytes, 286 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E7040: ;
    esp = esp - 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x18) = 7;
    if (CMP_NE(_fa, _fb)) goto loc_000E7061; /* jne: not equal / not zero */

loc_000E7057: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 28; return; /* ret 24 */

loc_000E7061: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7075; /* jne: not equal / not zero */

loc_000E706A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 28; return; /* ret 24 */

loc_000E7075: ;
    eax = 0; /* xor self */
    ecx = 0x1E;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E708D; /* je: equal / zero */

loc_000E7086: ;
    ecx = 0x1E;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000E708D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E70A1; /* je: equal / zero */

loc_000E7096: ;
    ecx = 0x1F;
    eax = 0; /* xor self */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000E70A1: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x24) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_000E70C1; /* je: equal / zero */

loc_000E70AD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2E);
    ecx = esi;
    PUSH32(esp, 0x000E70BDu); RECOMP_ABI_CALL(0x0002A5E0u, sub_0002A5E0); /* call 0x0002A5E0 */

loc_000E70BD: ;
    SET_LO8(eax, MEM8(esp + 0x38));

loc_000E70C1: ;
    SET_LO8(ecx, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E70D4; /* jne: not equal / not zero */

loc_000E70C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E70E0; /* je: equal / zero */

loc_000E70CD: ;
    ebp = 4;
    goto loc_000E70E0;

loc_000E70D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E70E0; /* jne: not equal / not zero */

loc_000E70D8: ;
    MEM32(esp + 0x20) = 3;

loc_000E70E0: ;
    ecx = esi;
    PUSH32(esp, 0x000E70E7u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000E70E7: ;
    ecx = MEM32(esi + 0x2F4);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x18) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000E7107; /* jne: not equal / not zero */

loc_000E70FB: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 28; return; /* ret 24 */

loc_000E7107: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E70FB; /* je: equal / zero */

loc_000E710B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x20) (32-bit) */
    eax = ebp;
    MEM32(esp + 0x1C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_000E7379; /* jg: greater (signed >) */

loc_000E711B: ;
    goto loc_000E7130;

loc_000E711D: ;
    esi = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x28);
    /* nop */

loc_000E7130: ;
    ebp = MEM32(eax * 4 + 0x451A6C);
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = ebp;
    MEM8(esp + 0x38) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000E7157; /* je: equal / zero */

loc_000E7148: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E7157; /* jl: less (signed <) */

loc_000E714D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 8 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E7157; /* jg: greater (signed >) */

loc_000E7152: ;
    MEM8(esp + 0x38) = 1;

loc_000E7157: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x000E7161u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E7161: ;
    /* Action enumeration also performs move lookup without ED700. */
    xml1_raven_power_lookup(edi, eax, ebp, MEM32(esp));
    esp += 4; /* consume the pending requirement-actor argument */

loc_000E7169: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E724F; /* je: equal / zero */

loc_000E7173: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000E7181u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E7181: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x13) = LO8(eax);
    SET_LO8(ebx, 1);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000E7191u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E7191: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x40) = eax;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x000E71A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E71A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000E71B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E71B0: ;
    MEM8(esp + 0x3C) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x000E71BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E71BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E71DA; /* je: equal / zero */

loc_000E71C2: ;
    PUSH32(esp, 0x000E71C7u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000E71C7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x000E71D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E71D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E71DA; /* je: equal / zero */

loc_000E71D5: ;
    MEM8(esp + 0x3C) = 0;

loc_000E71DA: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(MEM8(eax + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x334), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E71F1; /* jne: not equal / not zero */

loc_000E71E7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000E71EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E71EF: ;
    SET_LO8(ebx, LO8(eax));

loc_000E71F1: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E721E; /* je: equal / zero */

loc_000E71F9: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E721E; /* je: equal / zero */

loc_000E7201: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E7215; /* jne: not equal / not zero */

loc_000E7209: ;
    SET_LO8(ecx, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7215; /* je: equal / zero */

loc_000E7211: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E722C; /* jne: not equal / not zero */

loc_000E7215: ;
    ebp = MEM32(esp + 0x14);
    MEM32(eax + ebp * 4) = esi;
    goto loc_000E7222;

loc_000E721E: ;
    ebp = MEM32(esp + 0x14);

loc_000E7222: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E724B; /* jne: not equal / not zero */

loc_000E722A: ;
    goto loc_000E7230;

loc_000E722C: ;
    ebp = MEM32(esp + 0x14);

loc_000E7230: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E724B; /* je: equal / zero */

loc_000E7238: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E724B; /* je: equal / zero */

loc_000E723C: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E724B; /* je: equal / zero */

loc_000E7244: ;
    eax = MEM32(esp + 0x40);
    MEM32(eax + ebp * 4) = esi;

loc_000E724B: ;
    ebx = MEM32(esp + 0x48);

loc_000E724F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7364; /* je: equal / zero */

loc_000E7257: ;
    esi = MEM32(esp + 0x28);
    ecx = esi;
    PUSH32(esp, 0x000E7262u); RECOMP_ABI_CALL(0x000ED350u, sub_000ED350); /* call 0x000ED350 */

loc_000E7262: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7364; /* je: equal / zero */

loc_000E726A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(eax * 4 + 0x451A6C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = 0;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x000E728Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E728A: ;
    ecx = MEM32(eax);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = esp + 0x34;
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E72A3u); RECOMP_ABI_CALL(0x000ED500u, sub_000ED500); /* call 0x000ED500 */

loc_000E72A3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7364; /* je: equal / zero */

loc_000E72AD: ;
    goto loc_000E72B3;

loc_000E72AF: ;
    ebx = MEM32(esp + 0x48);

loc_000E72B3: ;
    _fa = (uint32_t)(MEM32(ebx + ebp * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ebp * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7364; /* jne: not equal / not zero */

loc_000E72BD: ;
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x14;
    MEM32(ebx + 0x78) = eax;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000E72D1u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000E72D1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7364; /* je: equal / zero */

loc_000E72DB: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E72E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E72E1: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7360; /* je: equal / zero */

loc_000E72FF: ;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000E7309u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E7309: ;
    ecx = MEM32(esp + 0x34);
    SET_LO8(edx, MEM8(ecx + 0x334));
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E7323; /* jne: not equal / not zero */

loc_000E731B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000E7323u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E7323: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E733C; /* jne: not equal / not zero */

loc_000E732B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E733C; /* je: equal / zero */

loc_000E732F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E733C; /* je: equal / zero */

loc_000E7333: ;
    eax = MEM32(esp + 0x48);
    MEM32(eax + ebp * 4) = esi;
    goto loc_000E7358;

loc_000E733C: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x000E7347u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E7347: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000E734Fu); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000E734F: ;
    ecx = eax;
    PUSH32(esp, 0x000E7356u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000E7356: ;
    esi = eax;

loc_000E7358: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E72AF; /* jne: not equal / not zero */

loc_000E7360: ;
    ebx = MEM32(esp + 0x48);

loc_000E7364: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000E711D; /* jle: less or equal (signed <=) */

loc_000E7379: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000E7390
 * Original: 0x000E7390 - 0x000E7448 (184 bytes, 66 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7390(void)
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

loc_000E7390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000E7442; /* je: equal / zero */

loc_000E739F: ;
    ecx = MEM32(esi + 0x2F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7442; /* je: equal / zero */

loc_000E73AD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x000E73B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E73B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7442; /* je: equal / zero */

loc_000E73BA: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E73E4; /* je: equal / zero */

loc_000E73C2: ;
    PUSH32(esp, 0x000E73C7u); RECOMP_ABI_CALL(0x000A07F0u, sub_000A07F0); /* call 0x000A07F0 */

loc_000E73C7: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C83B0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c83b0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7440; /* je: equal / zero */

loc_000E73D7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CA814)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3ca814] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E7442; /* jnp: not parity */

loc_000E73E4: ;
    PUSH32(esp, 0x1A);
    ecx = esi;
    PUSH32(esp, 0x000E73EDu); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E73ED: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7442; /* je: equal / zero */

loc_000E73F3: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E73FDu); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_000E73FD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7430; /* je: equal / zero */

loc_000E7404: ;
    ecx = eax;
    PUSH32(esp, 0x000E740Bu); RECOMP_ABI_CALL(0x00029080u, sub_00029080); /* call 0x00029080 */

loc_000E740B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7430; /* je: equal / zero */

loc_000E740F: ;
    ecx = MEM32(esi + 0x554);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x498D90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x498D90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7430; /* jne: not equal / not zero */

loc_000E741D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7430; /* je: equal / zero */

loc_000E7421: ;
    edx = MEM32(edi + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esi;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000E7430u); RECOMP_ABI_CALL(0x0003CDF0u, sub_0003CDF0); /* call 0x0003CDF0 */

loc_000E7430: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000E743Au); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000E743A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000E7440: ;
    fp_pop(); /* fstp st(0) */

loc_000E7442: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E7450
 * Original: 0x000E7450 - 0x000E745A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7450(void)
{

loc_000E7450: ;
    eax = ecx;
    MEM32(eax + 0x78) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7460
 * Original: 0x000E7460 - 0x000E77F2 (914 bytes, 285 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7460(void)
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

loc_000E7460: ;
    esp = esp - 0x17C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x188);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x188);
    _fa = (uint32_t)(MEM8(esi + 0x334)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x334), 8 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM8(esp + 0xA) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_000E74AD; /* jne: not equal / not zero */

loc_000E7488: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E748Fu); RECOMP_ABI_CALL(0x000E6F60u, sub_000E6F60); /* call 0x000E6F60 */

loc_000E748F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E74AD; /* je: equal / zero */

loc_000E7493: ;
    MEM32(esi + 0x324) = eax;
    MEM8(esp + 0xA) = 1;
    SET_LO8(eax, MEM8(esp + 0xA));
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x17C;
    esp += 12; return; /* ret 8 */

loc_000E74AD: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000E74B7u); RECOMP_ABI_CALL(0x000E7450u, sub_000E7450); /* call 0x000E7450 */

loc_000E74B7: ;
    eax = MEM32(ebp);
    eax = eax >> 7;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, 0); /* xor self */
    SET_LO8(edx, 0); /* xor self */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0x14) = LO8(ebx);
    MEM8(esp + 0x10) = LO8(edx);
    eax = 0x451AA8;
    PUSH32(esp, edi);

loc_000E74D5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E751E; /* jne: not equal / not zero */

loc_000E74D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x451A8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x451A8C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E750C; /* jl: less (signed <) */

loc_000E74E0: ;
    ecx = MEM32(eax);
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 4), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E74F7; /* je: equal / zero */

loc_000E74EE: ;
    SET_LO8(ebx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */

loc_000E74F7: ;
    eax = eax - 4;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E74D5; /* je: equal / zero */

loc_000E74FE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(edx);
    if (TEST_NZ(_fa, _fb)) goto loc_000E7526; /* jne: not equal / not zero */

loc_000E750A: ;
    goto loc_000E7514;

loc_000E750C: ;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(edx);

loc_000E7514: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E76F1; /* je: equal / zero */

loc_000E751C: ;
    goto loc_000E7526;

loc_000E751E: ;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(edx);

loc_000E7526: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    edx = esp + 0x11C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000E754Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E754F: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x18) = eax;

loc_000E7555: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFE4u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E76E5; /* jl: less (signed <) */

loc_000E755E: ;
    ecx = MEM32(eax + 0x451AA8);
    edi = MEM32(eax + 0x451A88);
    eax = MEM32(ebp + 4);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7607; /* je: equal / zero */

loc_000E757C: ;
    eax = MEM32(esp + edi * 4 + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E759A; /* jne: not equal / not zero */

loc_000E7587: ;
    ecx = MEM32(esp + edi * 4 + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E759A; /* jne: not equal / not zero */

loc_000E7592: ;
    ecx = MEM32(esp + edi * 4 + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7607; /* je: equal / zero */

loc_000E759A: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7636; /* je: equal / zero */

loc_000E75A8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E7607; /* jl: less (signed <) */

loc_000E75AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E762D; /* jne: not equal / not zero */

loc_000E75B1: ;
    ecx = MEM32(esp + edi * 4 + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E762D; /* jne: not equal / not zero */

loc_000E75B9: ;
    PUSH32(esp, 0x000E75BEu); RECOMP_ABI_CALL(0x000E6D10u, sub_000E6D10); /* call 0x000E6D10 */

loc_000E75BE: ;
    ecx = MEM32(esp + edi * 4 + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7607; /* je: equal / zero */

loc_000E75C9: ;
    eax = MEM32(ecx);
    ebp = MEM32(esi + 0x2F4);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x000E75D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E75D7: ;
    edx = MEM32(ebp);
    ebx = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x000E75EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E75EB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000E75F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E75F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7600; /* je: equal / zero */

loc_000E75F9: ;
    ecx = esi;
    PUSH32(esp, 0x000E7600u); RECOMP_ABI_CALL(0x00031980u, sub_00031980); /* call 0x00031980 */

loc_000E7600: ;
    ebp = MEM32(esp + 0x194);

loc_000E7607: ;
    eax = MEM32(esp + 0x18);
    SET_LO8(ecx, MEM8(esp + 0x12));
    eax = eax - 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000E7555; /* je: equal / zero */

loc_000E761E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebp);
    esp = esp + 0x17C;
    esp += 12; return; /* ret 8 */

loc_000E762D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E763F; /* jne: not equal / not zero */

loc_000E7632: ;
    SET_LO8(ebx, 1);
    goto loc_000E763F;

loc_000E7636: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E7607; /* jge: greater or equal (signed >=) */

loc_000E763B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7607; /* je: equal / zero */

loc_000E763F: ;
    edi = MEM32(esp + edi * 4 + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x324) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_000E7669; /* jne: not equal / not zero */

loc_000E764D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(esi + 0x324) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000E76DB; /* je: equal / zero */

loc_000E765B: ;
    ecx = esi;
    PUSH32(esp, 0x000E7662u); RECOMP_ABI_CALL(0x00032ED0u, sub_00032ED0); /* call 0x00032ED0 */

loc_000E7662: ;
    MEM8(esp + 0x12) = 1;
    goto loc_000E7607;

loc_000E7669: ;
    eax = MEM32(esp + 0x98);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000E767Du); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000E767D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E76DB; /* je: equal / zero */

loc_000E7683: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E7689u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E7689: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E76D4; /* je: equal / zero */

loc_000E76A7: ;
    eax = MEM32(edi + 0x2D8);
    eax = eax + 0x20C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E76BAu); RECOMP_ABI_CALL(0x00030AC0u, sub_00030AC0); /* call 0x00030AC0 */

loc_000E76BA: ;
    SET_LO8(ecx, MEM8(esi + 0x336));
    SET_LO8(ecx, LO8(ecx) | 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM8(esi + 0x336) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_000E76D4; /* je: equal / zero */

loc_000E76CD: ;
    ecx = edi;
    PUSH32(esp, 0x000E76D4u); RECOMP_ABI_CALL(0x00032ED0u, sub_00032ED0); /* call 0x00032ED0 */

loc_000E76D4: ;
    ebp = MEM32(esp + 0x194);

loc_000E76DB: ;
    MEM8(esp + 0x12) = 1;
    goto loc_000E7607;

loc_000E76E5: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E77E1; /* jne: not equal / not zero */

loc_000E76F1: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E7717; /* jne: not equal / not zero */

loc_000E7701: ;
    PUSH32(esp, 0xE);
    ecx = esi;
    PUSH32(esp, 0x000E770Au); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E770A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E77C9; /* je: equal / zero */

loc_000E7712: ;
    goto loc_000E77D6;

loc_000E7717: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000E773D; /* jp: parity */

loc_000E7727: ;
    PUSH32(esp, 0xD);
    ecx = esi;
    PUSH32(esp, 0x000E7730u); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E7730: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E77C9; /* je: equal / zero */

loc_000E7738: ;
    goto loc_000E77D6;

loc_000E773D: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E775C; /* jne: not equal / not zero */

loc_000E774D: ;
    PUSH32(esp, 0x11);
    ecx = esi;
    PUSH32(esp, 0x000E7756u); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E7756: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E77C9; /* je: equal / zero */

loc_000E775A: ;
    goto loc_000E77D6;

loc_000E775C: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000E777B; /* jp: parity */

loc_000E776C: ;
    PUSH32(esp, 0x12);
    ecx = esi;
    PUSH32(esp, 0x000E7775u); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E7775: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E77C9; /* je: equal / zero */

loc_000E7779: ;
    goto loc_000E77D6;

loc_000E777B: ;
    eax = MEM32(ebp + 4);
    ecx = eax;
    ecx = ecx >> 0x1B;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7797; /* je: equal / zero */

loc_000E7788: ;
    PUSH32(esp, 0x1B);
    ecx = esi;
    PUSH32(esp, 0x000E7791u); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E7791: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E77C9; /* je: equal / zero */

loc_000E7795: ;
    goto loc_000E77D6;

loc_000E7797: ;
    eax = eax >> 0x1C;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E77AD; /* je: equal / zero */

loc_000E779E: ;
    PUSH32(esp, 0x1C);
    ecx = esi;
    PUSH32(esp, 0x000E77A7u); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E77A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E77C9; /* je: equal / zero */

loc_000E77AB: ;
    goto loc_000E77D6;

loc_000E77AD: ;
    _fa = (uint32_t)(MEM8(esi + 0x334)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x334), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E77C9; /* jne: not equal / not zero */

loc_000E77B6: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E77C1u); RECOMP_ABI_CALL(0x000E6DA0u, sub_000E6DA0); /* call 0x000E6DA0 */

loc_000E77C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x12) = LO8(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_000E77E1; /* jne: not equal / not zero */

loc_000E77C9: ;
    /* Preserve XML1's pending-move/transition path; replace its idle
       fallback only while the declared current power is still held. */
    { uint32_t held = xml1_raven_held_destination(esi, ebp);
      if(held) { eax=held; goto loc_000E77D2; } }
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000E77D2u); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000E77D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E77E1; /* je: equal / zero */

loc_000E77D6: ;
    MEM32(esi + 0x324) = eax;
    MEM8(esp + 0x12) = 1;

loc_000E77E1: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x17C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E7800
 * Original: 0x000E7800 - 0x000E781F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7800: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D77E4;
    if (TEST_Z(_fa, _fb)) goto loc_000E7819; /* je: equal / zero */

loc_000E7810: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E7816u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E7816: ;
    esp = esp + 4;

loc_000E7819: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E7820
 * Original: 0x000E7820 - 0x000E7827 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7820(void)
{

loc_000E7820: ;
    MEM32(ecx) = 0x3D77E4;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7830
 * Original: 0x000E7830 - 0x000E784E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7830: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E7838u); RECOMP_ABI_CALL(0x000E7820u, sub_000E7820); /* call 0x000E7820 */

loc_000E7838: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7848; /* je: equal / zero */

loc_000E783F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E7845u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E7845: ;
    esp = esp + 4;

loc_000E7848: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E7850
 * Original: 0x000E7850 - 0x000E7943 (243 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7850: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x180);
    PUSH32(esp, edi);
    edi = ebx + 0x180;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E7881; /* jne: not equal / not zero */

loc_000E7866: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x60 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E7936; /* jge: greater or equal (signed >=) */

loc_000E7875: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7866; /* je: equal / zero */

loc_000E7881: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E788E; /* jne: not equal / not zero */

loc_000E7888: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_000E788E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E7898; /* jne: not equal / not zero */

loc_000E7892: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_000E7898: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E78A2; /* jne: not equal / not zero */

loc_000E789C: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_000E78A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E78AD; /* jne: not equal / not zero */

loc_000E78A6: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E78A6; /* je: equal / zero */

loc_000E78AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x60 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E7936; /* jge: greater or equal (signed >=) */

loc_000E78B6: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_000E78C0: ;
    edx = MEM32(ebx + esi * 4);
    ecx = ebx + esi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E78CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E78CA: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E7935; /* jge: greater or equal (signed >=) */

loc_000E78D2: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E78FC; /* jne: not equal / not zero */

loc_000E78E5: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E7935; /* jge: greater or equal (signed >=) */

loc_000E78F0: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E78E5; /* je: equal / zero */

loc_000E78FC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E790A; /* jne: not equal / not zero */

loc_000E7904: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_000E790A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E7914; /* jne: not equal / not zero */

loc_000E790E: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_000E7914: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E791F; /* jne: not equal / not zero */

loc_000E7919: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_000E791F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E792C; /* jne: not equal / not zero */

loc_000E7924: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7924; /* je: equal / zero */

loc_000E792C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E7935; /* jge: greater or equal (signed >=) */

loc_000E7931: ;
    esi = eax;
    goto loc_000E78C0;

loc_000E7935: ;
    POP32(esp, esi);

loc_000E7936: ;
    edx = 0; /* xor self */
    MEM32(edi) = edx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E7950
 * Original: 0x000E7950 - 0x000E7967 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7950(void)
{

loc_000E7950: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x184) = ecx;
    MEM32(eax + 0x188) = ecx;
    MEM32(eax + 0x18C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7970
 * Original: 0x000E7970 - 0x000E79CF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7970: ;
    edx = ecx;
    eax = MEM32(edx + 0x78C);
    eax = MEM32(edx + eax * 4 + 0x604);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x794;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x78C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x60 (32-bit) */
    MEM32(edx + 0x78C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000E79B9; /* jl: less (signed <) */

loc_000E79AF: ;
    MEM32(edx + 0x78C) = 0;

loc_000E79B9: ;
    MEM32(edx + 0x790) = MEM32(edx + 0x790) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x790)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x7A0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x7A0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E79D0
 * Original: 0x000E79D0 - 0x000E79DC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E79D0(void)
{

loc_000E79D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E79D8u); RECOMP_ABI_CALL(0x000E7950u, sub_000E7950); /* call 0x000E7950 */

loc_000E79D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E79E0
 * Original: 0x000E79E0 - 0x000E7A3D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E79E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E79E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x788) = esi;
    MEM32(ecx + 0x78C) = esi;
    MEM32(ecx + 0x790) = esi;
    edx = 0; /* xor self */
    goto loc_000E7A00;

    /* nop */

loc_000E7A00: ;
    eax = MEM32(ecx + 0x788);
    edi = MEM32(ecx + 0x790);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60 (32-bit) */
    MEM32(ecx + 0x788) = eax;
    MEM32(ecx + 0x790) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000E7A2C; /* jl: less (signed <) */

loc_000E7A1F: ;
    MEM32(ecx + 0x788) = esi;
    eax = 0x5F;
    goto loc_000E7A2D;

loc_000E7A2C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E7A2D: ;
    MEM32(ecx + eax * 4 + 0x604) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x60 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E7A00; /* jl: less (signed <) */

loc_000E7A3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E7A40
 * Original: 0x000E7A40 - 0x000E7A88 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x60;
    goto loc_000E7A50;

    /* nop */

loc_000E7A50: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E7A50; /* jne: not equal / not zero */

loc_000E7A5C: ;
    ecx = esi + 0x604;
    PUSH32(esp, 0x000E7A67u); RECOMP_ABI_CALL(0x000E79D0u, sub_000E79D0); /* call 0x000E79D0 */

loc_000E7A67: ;
    eax = 0; /* xor self */
    ecx = esi + 0x794;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    ecx = esi;
    MEM32(esi + 0x7A0) = eax;
    PUSH32(esp, 0x000E7A84u); RECOMP_ABI_CALL(0x000E79E0u, sub_000E79E0); /* call 0x000E79E0 */

loc_000E7A84: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E7A90
 * Original: 0x000E7A90 - 0x000E7AEC (92 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E7A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7A90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7ABC; /* je: equal / zero */

loc_000E7A99: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7ABC; /* je: equal / zero */

loc_000E7A9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E7AA4u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7AA4: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E7AAFu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7AAF: ;
    ecx = eax;
    PUSH32(esp, 0x000E7AB6u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7AB6: ;
    MEM32(esp + 8) = eax;
    goto loc_000E7AC4;

loc_000E7ABC: ;
    MEM32(esp + 8) = 0;

loc_000E7AC4: ;
    eax = MEM32(0x4F3414);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E7AD9u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000E7AD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E7AE9; /* je: equal / zero */

loc_000E7AE1: ;
    eax = eax * 4 + 0x4F3BC0;
    esp += 4; return; /* ret */

loc_000E7AE9: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7AF0
 * Original: 0x000E7AF0 - 0x000E7B90 (160 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7AF0(void)
{

loc_000E7AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000E7AFEu); RECOMP_ABI_CALL(0x000E7970u, sub_000E7970); /* call 0x000E7970 */

loc_000E7AFE: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    MEM32(ecx + esi + 0x10) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x14) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000E7B33u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000E7B33: ;
    eax = MEM32(edi);
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    MEM32(eax) = edx;
    eax = MEM32(esi + 8);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x930;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 4 + 0x7B0;
    ecx = ecx | edi;
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E7B90
 * Original: 0x000E7B90 - 0x000E7BA0 (16 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7B90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E7B90: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000E7BA0(); return; /* tail jmp 0x000E7BA0 */

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
 * sub_000E7BA0
 * Original: 0x000E7BA0 - 0x000E7C12 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7BA0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x794;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x788);
    edi = MEM32(eax + 0x790);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x60 (32-bit) */
    MEM32(eax + 0x788) = ecx;
    MEM32(eax + 0x790) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000E7BF8; /* jl: less (signed <) */

loc_000E7BE7: ;
    MEM32(eax + 0x788) = 0;
    ecx = 0x5F;
    goto loc_000E7BF9;

loc_000E7BF8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E7BF9: ;
    MEM32(eax + ecx * 4 + 0x604) = esi;
    ecx = MEM32(eax + 0x7A0);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x7A0) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E7C20
 * Original: 0x000E7C20 - 0x000E8B57 (3895 bytes, 1080 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7C20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3D85B4);
    esi = ecx;
    PUSH32(esp, 0x000E7C2Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7C2E: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D85B4);
    PUSH32(esp, 0x000E7C3Du); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7C3D: ;
    ecx = eax;
    PUSH32(esp, 0x000E7C44u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7C44: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E7C57u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7C57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7C61; /* je: equal / zero */

loc_000E7C5B: ;
    MEM32(eax) = 0x3D782C;

loc_000E7C61: ;
    PUSH32(esp, 0x3D85A4);
    PUSH32(esp, 0x000E7C6Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7C6B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D85A4);
    PUSH32(esp, 0x000E7C7Au); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7C7A: ;
    ecx = eax;
    PUSH32(esp, 0x000E7C81u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7C81: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E7C94u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7C94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7C9E; /* je: equal / zero */

loc_000E7C98: ;
    MEM32(eax) = 0x3D7850;

loc_000E7C9E: ;
    PUSH32(esp, 0x3D8590);
    PUSH32(esp, 0x000E7CA8u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7CA8: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8590);
    PUSH32(esp, 0x000E7CB7u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7CB7: ;
    ecx = eax;
    PUSH32(esp, 0x000E7CBEu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7CBE: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E7CD1u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7CD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7CDB; /* je: equal / zero */

loc_000E7CD5: ;
    MEM32(eax) = 0x3D7874;

loc_000E7CDB: ;
    PUSH32(esp, 0x3D8584);
    PUSH32(esp, 0x000E7CE5u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7CE5: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8584);
    PUSH32(esp, 0x000E7CF4u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7CF4: ;
    ecx = eax;
    PUSH32(esp, 0x000E7CFBu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7CFB: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E7D0Eu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7D0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7D18; /* je: equal / zero */

loc_000E7D12: ;
    MEM32(eax) = 0x3D7808;

loc_000E7D18: ;
    PUSH32(esp, 0x3D8574);
    PUSH32(esp, 0x000E7D22u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7D22: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8574);
    PUSH32(esp, 0x000E7D31u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7D31: ;
    ecx = eax;
    PUSH32(esp, 0x000E7D38u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7D38: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E7D4Bu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7D4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7D55; /* je: equal / zero */

loc_000E7D4F: ;
    MEM32(eax) = 0x3D7898;

loc_000E7D55: ;
    PUSH32(esp, 0x3D856C);
    PUSH32(esp, 0x000E7D5Fu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7D5F: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D856C);
    PUSH32(esp, 0x000E7D6Eu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7D6E: ;
    ecx = eax;
    PUSH32(esp, 0x000E7D75u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7D75: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E7D88u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7D88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7D92; /* je: equal / zero */

loc_000E7D8C: ;
    MEM32(eax) = 0x3D78BC;

loc_000E7D92: ;
    PUSH32(esp, 0x3D8564);
    PUSH32(esp, 0x000E7D9Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7D9C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8564);
    PUSH32(esp, 0x000E7DABu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7DAB: ;
    ecx = eax;
    PUSH32(esp, 0x000E7DB2u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7DB2: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E7DC5u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7DC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7DCF; /* je: equal / zero */

loc_000E7DC9: ;
    MEM32(eax) = 0x3D78E0;

loc_000E7DCF: ;
    PUSH32(esp, 0x3D8554);
    PUSH32(esp, 0x000E7DD9u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7DD9: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8554);
    PUSH32(esp, 0x000E7DE8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7DE8: ;
    ecx = eax;
    PUSH32(esp, 0x000E7DEFu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7DEF: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E7E02u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7E02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7E0C; /* je: equal / zero */

loc_000E7E06: ;
    MEM32(eax) = 0x3D7FEC;

loc_000E7E0C: ;
    PUSH32(esp, 0x3D8544);
    PUSH32(esp, 0x000E7E16u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7E16: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8544);
    PUSH32(esp, 0x000E7E25u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7E25: ;
    ecx = eax;
    PUSH32(esp, 0x000E7E2Cu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7E2C: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E7E3Fu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7E3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7E49; /* je: equal / zero */

loc_000E7E43: ;
    MEM32(eax) = 0x3D7904;

loc_000E7E49: ;
    PUSH32(esp, 0x3D8534);
    PUSH32(esp, 0x000E7E53u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7E53: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8534);
    PUSH32(esp, 0x000E7E62u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7E62: ;
    ecx = eax;
    PUSH32(esp, 0x000E7E69u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7E69: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E7E7Cu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7E7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7E86; /* je: equal / zero */

loc_000E7E80: ;
    MEM32(eax) = 0x3D7928;

loc_000E7E86: ;
    PUSH32(esp, 0x3D8520);
    PUSH32(esp, 0x000E7E90u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7E90: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8520);
    PUSH32(esp, 0x000E7E9Fu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7E9F: ;
    ecx = eax;
    PUSH32(esp, 0x000E7EA6u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7EA6: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E7EB9u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7EB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7EC3; /* je: equal / zero */

loc_000E7EBD: ;
    MEM32(eax) = 0x3D794C;

loc_000E7EC3: ;
    PUSH32(esp, 0x3D850C);
    PUSH32(esp, 0x000E7ECDu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7ECD: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D850C);
    PUSH32(esp, 0x000E7EDCu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7EDC: ;
    ecx = eax;
    PUSH32(esp, 0x000E7EE3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7EE3: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E7EF6u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7EF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7F00; /* je: equal / zero */

loc_000E7EFA: ;
    MEM32(eax) = 0x3D7970;

loc_000E7F00: ;
    PUSH32(esp, 0x3D84FC);
    PUSH32(esp, 0x000E7F0Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7F0A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D84FC);
    PUSH32(esp, 0x000E7F19u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7F19: ;
    ecx = eax;
    PUSH32(esp, 0x000E7F20u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7F20: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E7F33u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7F33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7F3D; /* je: equal / zero */

loc_000E7F37: ;
    MEM32(eax) = 0x3D7994;

loc_000E7F3D: ;
    PUSH32(esp, 0x3D84E8);
    PUSH32(esp, 0x000E7F47u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7F47: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D84E8);
    PUSH32(esp, 0x000E7F56u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7F56: ;
    ecx = eax;
    PUSH32(esp, 0x000E7F5Du); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7F5D: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E7F70u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7F70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7F7A; /* je: equal / zero */

loc_000E7F74: ;
    MEM32(eax) = 0x3D79B8;

loc_000E7F7A: ;
    PUSH32(esp, 0x3D84D0);
    PUSH32(esp, 0x000E7F84u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7F84: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D84D0);
    PUSH32(esp, 0x000E7F93u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7F93: ;
    ecx = eax;
    PUSH32(esp, 0x000E7F9Au); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7F9A: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E7FADu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7FAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7FB7; /* je: equal / zero */

loc_000E7FB1: ;
    MEM32(eax) = 0x3D79DC;

loc_000E7FB7: ;
    PUSH32(esp, 0x3D84B8);
    PUSH32(esp, 0x000E7FC1u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7FC1: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D84B8);
    PUSH32(esp, 0x000E7FD0u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E7FD0: ;
    ecx = eax;
    PUSH32(esp, 0x000E7FD7u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E7FD7: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E7FEAu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E7FEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E7FF4; /* je: equal / zero */

loc_000E7FEE: ;
    MEM32(eax) = 0x3D7A00;

loc_000E7FF4: ;
    PUSH32(esp, 0x3D84A4);
    PUSH32(esp, 0x000E7FFEu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E7FFE: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D84A4);
    PUSH32(esp, 0x000E800Du); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E800D: ;
    ecx = eax;
    PUSH32(esp, 0x000E8014u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8014: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8027u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8027: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8031; /* je: equal / zero */

loc_000E802B: ;
    MEM32(eax) = 0x3D7A24;

loc_000E8031: ;
    PUSH32(esp, 0x3D8490);
    PUSH32(esp, 0x000E803Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E803B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8490);
    PUSH32(esp, 0x000E804Au); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E804A: ;
    ecx = eax;
    PUSH32(esp, 0x000E8051u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8051: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8064u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8064: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E806E; /* je: equal / zero */

loc_000E8068: ;
    MEM32(eax) = 0x3D8010;

loc_000E806E: ;
    PUSH32(esp, 0x3D8484);
    PUSH32(esp, 0x000E8078u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8078: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8484);
    PUSH32(esp, 0x000E8087u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8087: ;
    ecx = eax;
    PUSH32(esp, 0x000E808Eu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E808E: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E80A1u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E80A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E80AB; /* je: equal / zero */

loc_000E80A5: ;
    MEM32(eax) = 0x3D7A48;

loc_000E80AB: ;
    PUSH32(esp, 0x3D847C);
    PUSH32(esp, 0x000E80B5u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E80B5: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D847C);
    PUSH32(esp, 0x000E80C4u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E80C4: ;
    ecx = eax;
    PUSH32(esp, 0x000E80CBu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E80CB: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E80DEu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E80DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E80E8; /* je: equal / zero */

loc_000E80E2: ;
    MEM32(eax) = 0x3D7A6C;

loc_000E80E8: ;
    PUSH32(esp, 0x3D8470);
    PUSH32(esp, 0x000E80F2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E80F2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8470);
    PUSH32(esp, 0x000E8101u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8101: ;
    ecx = eax;
    PUSH32(esp, 0x000E8108u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8108: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E811Bu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E811B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8125; /* je: equal / zero */

loc_000E811F: ;
    MEM32(eax) = 0x3D7A90;

loc_000E8125: ;
    PUSH32(esp, 0x3D845C);
    PUSH32(esp, 0x000E812Fu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E812F: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D845C);
    PUSH32(esp, 0x000E813Eu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E813E: ;
    ecx = eax;
    PUSH32(esp, 0x000E8145u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8145: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8158u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8158: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8162; /* je: equal / zero */

loc_000E815C: ;
    MEM32(eax) = 0x3D7AB4;

loc_000E8162: ;
    PUSH32(esp, 0x3D8450);
    PUSH32(esp, 0x000E816Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E816C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8450);
    PUSH32(esp, 0x000E817Bu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E817B: ;
    ecx = eax;
    PUSH32(esp, 0x000E8182u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8182: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8195u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8195: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E819F; /* je: equal / zero */

loc_000E8199: ;
    MEM32(eax) = 0x3D7AD8;

loc_000E819F: ;
    PUSH32(esp, 0x3D8440);
    PUSH32(esp, 0x000E81A9u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E81A9: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8440);
    PUSH32(esp, 0x000E81B8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E81B8: ;
    ecx = eax;
    PUSH32(esp, 0x000E81BFu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E81BF: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E81D2u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E81D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E81DC; /* je: equal / zero */

loc_000E81D6: ;
    MEM32(eax) = 0x3D7B00;

loc_000E81DC: ;
    PUSH32(esp, 0x3D8430);
    PUSH32(esp, 0x000E81E6u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E81E6: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8430);
    PUSH32(esp, 0x000E81F5u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E81F5: ;
    ecx = eax;
    PUSH32(esp, 0x000E81FCu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E81FC: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E820Fu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E820F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8219; /* je: equal / zero */

loc_000E8213: ;
    MEM32(eax) = 0x3D7B24;

loc_000E8219: ;
    PUSH32(esp, 0x3D8420);
    PUSH32(esp, 0x000E8223u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8223: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8420);
    PUSH32(esp, 0x000E8232u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8232: ;
    ecx = eax;
    PUSH32(esp, 0x000E8239u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8239: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E824Cu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E824C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8256; /* je: equal / zero */

loc_000E8250: ;
    MEM32(eax) = 0x3D7B48;

loc_000E8256: ;
    PUSH32(esp, 0x3D8410);
    PUSH32(esp, 0x000E8260u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8260: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8410);
    PUSH32(esp, 0x000E826Fu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E826F: ;
    ecx = eax;
    PUSH32(esp, 0x000E8276u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8276: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8289u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8289: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8293; /* je: equal / zero */

loc_000E828D: ;
    MEM32(eax) = 0x3D7B6C;

loc_000E8293: ;
    PUSH32(esp, 0x3D8404);
    PUSH32(esp, 0x000E829Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E829D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8404);
    PUSH32(esp, 0x000E82ACu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E82AC: ;
    ecx = eax;
    PUSH32(esp, 0x000E82B3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E82B3: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E82C6u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E82C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E82D0; /* je: equal / zero */

loc_000E82CA: ;
    MEM32(eax) = 0x3D7B90;

loc_000E82D0: ;
    PUSH32(esp, 0x3D83F0);
    PUSH32(esp, 0x000E82DAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E82DA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D83F0);
    PUSH32(esp, 0x000E82E9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E82E9: ;
    ecx = eax;
    PUSH32(esp, 0x000E82F0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E82F0: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8303u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8303: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E830D; /* je: equal / zero */

loc_000E8307: ;
    MEM32(eax) = 0x3D7BB4;

loc_000E830D: ;
    PUSH32(esp, 0x3D83E0);
    PUSH32(esp, 0x000E8317u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8317: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D83E0);
    PUSH32(esp, 0x000E8326u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8326: ;
    ecx = eax;
    PUSH32(esp, 0x000E832Du); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E832D: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8340u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8340: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E834A; /* je: equal / zero */

loc_000E8344: ;
    MEM32(eax) = 0x3D7BD8;

loc_000E834A: ;
    PUSH32(esp, 0x3D83D0);
    PUSH32(esp, 0x000E8354u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8354: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D83D0);
    PUSH32(esp, 0x000E8363u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8363: ;
    ecx = eax;
    PUSH32(esp, 0x000E836Au); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E836A: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E837Du); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E837D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8387; /* je: equal / zero */

loc_000E8381: ;
    MEM32(eax) = 0x3D7BFC;

loc_000E8387: ;
    PUSH32(esp, 0x3D83BC);
    PUSH32(esp, 0x000E8391u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8391: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D83BC);
    PUSH32(esp, 0x000E83A0u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E83A0: ;
    ecx = eax;
    PUSH32(esp, 0x000E83A7u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E83A7: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E83BAu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E83BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E83C4; /* je: equal / zero */

loc_000E83BE: ;
    MEM32(eax) = 0x3D7C20;

loc_000E83C4: ;
    PUSH32(esp, 0x3D83A8);
    PUSH32(esp, 0x000E83CEu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E83CE: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D83A8);
    PUSH32(esp, 0x000E83DDu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E83DD: ;
    ecx = eax;
    PUSH32(esp, 0x000E83E4u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E83E4: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E83F7u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E83F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8401; /* je: equal / zero */

loc_000E83FB: ;
    MEM32(eax) = 0x3D8034;

loc_000E8401: ;
    PUSH32(esp, 0x3D8390);
    PUSH32(esp, 0x000E840Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E840B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8390);
    PUSH32(esp, 0x000E841Au); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E841A: ;
    ecx = eax;
    PUSH32(esp, 0x000E8421u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8421: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8434u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8434: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E843E; /* je: equal / zero */

loc_000E8438: ;
    MEM32(eax) = 0x3D8058;

loc_000E843E: ;
    PUSH32(esp, 0x3D8374);
    PUSH32(esp, 0x000E8448u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8448: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8374);
    PUSH32(esp, 0x000E8457u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8457: ;
    ecx = eax;
    PUSH32(esp, 0x000E845Eu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E845E: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8471u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8471: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E847B; /* je: equal / zero */

loc_000E8475: ;
    MEM32(eax) = 0x3D7C44;

loc_000E847B: ;
    PUSH32(esp, 0x3D8364);
    PUSH32(esp, 0x000E8485u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8485: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8364);
    PUSH32(esp, 0x000E8494u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8494: ;
    ecx = eax;
    PUSH32(esp, 0x000E849Bu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E849B: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E84AEu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E84AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E84B8; /* je: equal / zero */

loc_000E84B2: ;
    MEM32(eax) = 0x3D7C68;

loc_000E84B8: ;
    PUSH32(esp, 0x3D8350);
    PUSH32(esp, 0x000E84C2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E84C2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8350);
    PUSH32(esp, 0x000E84D1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E84D1: ;
    ecx = eax;
    PUSH32(esp, 0x000E84D8u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E84D8: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E84EBu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E84EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E84F5; /* je: equal / zero */

loc_000E84EF: ;
    MEM32(eax) = 0x3D807C;

loc_000E84F5: ;
    PUSH32(esp, 0x3D8344);
    PUSH32(esp, 0x000E84FFu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E84FF: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8344);
    PUSH32(esp, 0x000E850Eu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E850E: ;
    ecx = eax;
    PUSH32(esp, 0x000E8515u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8515: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8528u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8528: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8532; /* je: equal / zero */

loc_000E852C: ;
    MEM32(eax) = 0x3D7C8C;

loc_000E8532: ;
    PUSH32(esp, 0x3D8338);
    PUSH32(esp, 0x000E853Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E853C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8338);
    PUSH32(esp, 0x000E854Bu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E854B: ;
    ecx = eax;
    PUSH32(esp, 0x000E8552u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8552: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8565u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8565: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E856F; /* je: equal / zero */

loc_000E8569: ;
    MEM32(eax) = 0x3D7CB0;

loc_000E856F: ;
    PUSH32(esp, 0x3D8328);
    PUSH32(esp, 0x000E8579u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8579: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8328);
    PUSH32(esp, 0x000E8588u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8588: ;
    ecx = eax;
    PUSH32(esp, 0x000E858Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E858F: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E85A2u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E85A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E85AC; /* je: equal / zero */

loc_000E85A6: ;
    MEM32(eax) = 0x3D7CD4;

loc_000E85AC: ;
    PUSH32(esp, 0x3D8318);
    PUSH32(esp, 0x000E85B6u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E85B6: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8318);
    PUSH32(esp, 0x000E85C5u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E85C5: ;
    ecx = eax;
    PUSH32(esp, 0x000E85CCu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E85CC: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E85DFu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E85DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E85E9; /* je: equal / zero */

loc_000E85E3: ;
    MEM32(eax) = 0x3D7CF8;

loc_000E85E9: ;
    PUSH32(esp, 0x3D8304);
    PUSH32(esp, 0x000E85F3u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E85F3: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8304);
    PUSH32(esp, 0x000E8602u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8602: ;
    ecx = eax;
    PUSH32(esp, 0x000E8609u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8609: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E861Cu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E861C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8626; /* je: equal / zero */

loc_000E8620: ;
    MEM32(eax) = 0x3D7D1C;

loc_000E8626: ;
    PUSH32(esp, 0x3D82F8);
    PUSH32(esp, 0x000E8630u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8630: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D82F8);
    PUSH32(esp, 0x000E863Fu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E863F: ;
    ecx = eax;
    PUSH32(esp, 0x000E8646u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8646: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8659u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8659: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8663; /* je: equal / zero */

loc_000E865D: ;
    MEM32(eax) = 0x3D7D40;

loc_000E8663: ;
    PUSH32(esp, 0x3D82E8);
    PUSH32(esp, 0x000E866Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E866D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D82E8);
    PUSH32(esp, 0x000E867Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E867C: ;
    ecx = eax;
    PUSH32(esp, 0x000E8683u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8683: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8696u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8696: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E86A0; /* je: equal / zero */

loc_000E869A: ;
    MEM32(eax) = 0x3D80A0;

loc_000E86A0: ;
    PUSH32(esp, 0x3D82D8);
    PUSH32(esp, 0x000E86AAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E86AA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D82D8);
    PUSH32(esp, 0x000E86B9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E86B9: ;
    ecx = eax;
    PUSH32(esp, 0x000E86C0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E86C0: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E86D3u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E86D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E86DD; /* je: equal / zero */

loc_000E86D7: ;
    MEM32(eax) = 0x3D7D64;

loc_000E86DD: ;
    PUSH32(esp, 0x3D82CC);
    PUSH32(esp, 0x000E86E7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E86E7: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D82CC);
    PUSH32(esp, 0x000E86F6u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E86F6: ;
    ecx = eax;
    PUSH32(esp, 0x000E86FDu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E86FD: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8710u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E871A; /* je: equal / zero */

loc_000E8714: ;
    MEM32(eax) = 0x3D7D88;

loc_000E871A: ;
    PUSH32(esp, 0x3D82BC);
    PUSH32(esp, 0x000E8724u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8724: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D82BC);
    PUSH32(esp, 0x000E8733u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8733: ;
    ecx = eax;
    PUSH32(esp, 0x000E873Au); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E873A: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E874Du); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E874D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8757; /* je: equal / zero */

loc_000E8751: ;
    MEM32(eax) = 0x3D80C4;

loc_000E8757: ;
    PUSH32(esp, 0x3D82AC);
    PUSH32(esp, 0x000E8761u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8761: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D82AC);
    PUSH32(esp, 0x000E8770u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8770: ;
    ecx = eax;
    PUSH32(esp, 0x000E8777u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8777: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E878Au); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E878A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8794; /* je: equal / zero */

loc_000E878E: ;
    MEM32(eax) = 0x3D80E8;

loc_000E8794: ;
    PUSH32(esp, 0x3D82A0);
    PUSH32(esp, 0x000E879Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E879E: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D82A0);
    PUSH32(esp, 0x000E87ADu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E87AD: ;
    ecx = eax;
    PUSH32(esp, 0x000E87B4u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E87B4: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E87C7u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E87C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E87D1; /* je: equal / zero */

loc_000E87CB: ;
    MEM32(eax) = 0x3D7DAC;

loc_000E87D1: ;
    PUSH32(esp, 0x3D8290);
    PUSH32(esp, 0x000E87DBu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E87DB: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8290);
    PUSH32(esp, 0x000E87EAu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E87EA: ;
    ecx = eax;
    PUSH32(esp, 0x000E87F1u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E87F1: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8804u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8804: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E880E; /* je: equal / zero */

loc_000E8808: ;
    MEM32(eax) = 0x3D7DD0;

loc_000E880E: ;
    PUSH32(esp, 0x3D8284);
    PUSH32(esp, 0x000E8818u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8818: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8284);
    PUSH32(esp, 0x000E8827u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8827: ;
    ecx = eax;
    PUSH32(esp, 0x000E882Eu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E882E: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8841u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8841: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E884B; /* je: equal / zero */

loc_000E8845: ;
    MEM32(eax) = 0x3D810C;

loc_000E884B: ;
    PUSH32(esp, 0x3D8274);
    PUSH32(esp, 0x000E8855u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8855: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8274);
    PUSH32(esp, 0x000E8864u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8864: ;
    ecx = eax;
    PUSH32(esp, 0x000E886Bu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E886B: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E887Eu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E887E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8888; /* je: equal / zero */

loc_000E8882: ;
    MEM32(eax) = 0x3D7DF4;

loc_000E8888: ;
    PUSH32(esp, 0x3D826C);
    PUSH32(esp, 0x000E8892u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8892: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D826C);
    PUSH32(esp, 0x000E88A1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E88A1: ;
    ecx = eax;
    PUSH32(esp, 0x000E88A8u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E88A8: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E88BBu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E88BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E88C5; /* je: equal / zero */

loc_000E88BF: ;
    MEM32(eax) = 0x3D7E18;

loc_000E88C5: ;
    PUSH32(esp, 0x3D8264);
    PUSH32(esp, 0x000E88CFu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E88CF: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8264);
    PUSH32(esp, 0x000E88DEu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E88DE: ;
    ecx = eax;
    PUSH32(esp, 0x000E88E5u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E88E5: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E88F8u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E88F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8902; /* je: equal / zero */

loc_000E88FC: ;
    MEM32(eax) = 0x3D7E3C;

loc_000E8902: ;
    PUSH32(esp, 0x3D825C);
    PUSH32(esp, 0x000E890Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E890C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D825C);
    PUSH32(esp, 0x000E891Bu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E891B: ;
    ecx = eax;
    PUSH32(esp, 0x000E8922u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E8922: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8935u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8935: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E893F; /* je: equal / zero */

loc_000E8939: ;
    MEM32(eax) = 0x3D7E60;

loc_000E893F: ;
    PUSH32(esp, 0x3D824C);
    PUSH32(esp, 0x000E8949u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8949: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D824C);
    PUSH32(esp, 0x000E8958u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000E8958: ;
    ecx = eax;
    PUSH32(esp, 0x000E895Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000E895F: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E8972u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8972: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E897C; /* je: equal / zero */

loc_000E8976: ;
    MEM32(eax) = 0x3D8130;

loc_000E897C: ;
    PUSH32(esp, 0x3D8238);
    ecx = esp + 8;
    PUSH32(esp, 0x000E898Au); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E898A: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8999u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8999: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E89A3; /* je: equal / zero */

loc_000E899D: ;
    MEM32(eax) = 0x3D7E84;

loc_000E89A3: ;
    PUSH32(esp, 0x3D8224);
    ecx = esp + 8;
    PUSH32(esp, 0x000E89B1u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E89B1: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E89C0u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E89C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E89CA; /* je: equal / zero */

loc_000E89C4: ;
    MEM32(eax) = 0x3D7EA8;

loc_000E89CA: ;
    PUSH32(esp, 0x3D820C);
    ecx = esp + 8;
    PUSH32(esp, 0x000E89D8u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E89D8: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E89E7u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E89E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E89F1; /* je: equal / zero */

loc_000E89EB: ;
    MEM32(eax) = 0x3D7ECC;

loc_000E89F1: ;
    PUSH32(esp, 0x3D8200);
    ecx = esp + 8;
    PUSH32(esp, 0x000E89FFu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E89FF: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8A0Eu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8A0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8A18; /* je: equal / zero */

loc_000E8A12: ;
    MEM32(eax) = 0x3D7EF0;

loc_000E8A18: ;
    PUSH32(esp, 0x3D81F4);
    ecx = esp + 8;
    PUSH32(esp, 0x000E8A26u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E8A26: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8A35u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8A35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8A3F; /* je: equal / zero */

loc_000E8A39: ;
    MEM32(eax) = 0x3D7F14;

loc_000E8A3F: ;
    PUSH32(esp, 0x3D81E4);
    ecx = esp + 8;
    PUSH32(esp, 0x000E8A4Du); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E8A4D: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8A5Cu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8A5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8A66; /* je: equal / zero */

loc_000E8A60: ;
    MEM32(eax) = 0x3D8154;

loc_000E8A66: ;
    PUSH32(esp, 0x3D81D4);
    ecx = esp + 8;
    PUSH32(esp, 0x000E8A74u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E8A74: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8A83u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8A83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8A8D; /* je: equal / zero */

loc_000E8A87: ;
    MEM32(eax) = 0x3D7F38;

loc_000E8A8D: ;
    PUSH32(esp, 0x3D81C0);
    ecx = esp + 8;
    PUSH32(esp, 0x000E8A9Bu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E8A9B: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8AAAu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8AAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8AB4; /* je: equal / zero */

loc_000E8AAE: ;
    MEM32(eax) = 0x3D7F5C;

loc_000E8AB4: ;
    PUSH32(esp, 0x3D81A8);
    ecx = esp + 8;
    PUSH32(esp, 0x000E8AC2u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E8AC2: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8AD1u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8AD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8ADB; /* je: equal / zero */

loc_000E8AD5: ;
    MEM32(eax) = 0x3D7F80;

loc_000E8ADB: ;
    PUSH32(esp, 0x3D8198);
    ecx = esp + 8;
    PUSH32(esp, 0x000E8AE9u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E8AE9: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8AF8u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8AF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8B02; /* je: equal / zero */

loc_000E8AFC: ;
    MEM32(eax) = 0x3D7FA4;

loc_000E8B02: ;
    PUSH32(esp, 0x3D818C);
    ecx = esp + 8;
    PUSH32(esp, 0x000E8B10u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E8B10: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8B1Fu); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8B1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8B29; /* je: equal / zero */

loc_000E8B23: ;
    MEM32(eax) = 0x3D7FC8;

loc_000E8B29: ;
    ecx = MEM32(0x451AB8);
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x000E8B39u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000E8B39: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x4F3410;
    PUSH32(esp, 0x000E8B48u); RECOMP_ABI_CALL(0x000E7AF0u, sub_000E7AF0); /* call 0x000E7AF0 */

loc_000E8B48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8B52; /* je: equal / zero */

loc_000E8B4C: ;
    MEM32(eax) = 0x3D77E4;

loc_000E8B52: ;
    xml1_bishop_register();
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E8B60
 * Original: 0x000E8B60 - 0x000E8B6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8B60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E8B60: ;
    ecx = ecx + 0x7B0;
    g_seh_ebp = ebp; sub_000E7850(); return; /* tail jmp 0x000E7850 */

}

/**
 * sub_000E8B70
 * Original: 0x000E8B70 - 0x000E8BA9 (57 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8B70(void)
{

loc_000E8B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3D8178;
    PUSH32(esp, 0x000E8B8Fu); RECOMP_ABI_CALL(0x000E7A40u, sub_000E7A40); /* call 0x000E7A40 */

loc_000E8B8F: ;
    eax = 0; /* xor self */
    ecx = esi + 0x930;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(esi) = 0x3D85C0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E8BB0
 * Original: 0x000E8BB0 - 0x000E8BCF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8BB0: ;
    eax = MEM32(0x4F3D4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8BCE; /* je: equal / zero */

loc_000E8BB9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E8BC1u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_000E8BC1: ;
    esp = esp + 8;
    MEM32(0x4F3D4C) = 0;

loc_000E8BCE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E8BD0
 * Original: 0x000E8BD0 - 0x000E8BE0 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8BD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E8BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000E8BD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E8BD8: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_000E8BE0
 * Original: 0x000E8BE0 - 0x000E8C00 (32 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8BE0(void)
{

loc_000E8BE0: ;
    PUSH32(esp, 0x000E8BE5u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_000E8BE5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0x3D8634);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000E8BF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E8BF3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E8C00
 * Original: 0x000E8C00 - 0x000E8C41 (65 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8C00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350EB1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000E8C32; /* je: equal / zero */

loc_000E8C2D: ;
    PUSH32(esp, 0x000E8C32u); RECOMP_ABI_CALL(0x000EC570u, sub_000EC570); /* call 0x000EC570 */

loc_000E8C32: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000E8C50
 * Original: 0x000E8C50 - 0x000E8D4E (254 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8C50: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x16594);
    PUSH32(esp, edi);
    edi = ebx + 0x16594;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8C81; /* jne: not equal / not zero */

loc_000E8C66: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x17 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E8D45; /* jge: greater or equal (signed >=) */

loc_000E8C75: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8C66; /* je: equal / zero */

loc_000E8C81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8C8E; /* jne: not equal / not zero */

loc_000E8C88: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_000E8C8E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8C98; /* jne: not equal / not zero */

loc_000E8C92: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_000E8C98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8CA2; /* jne: not equal / not zero */

loc_000E8C9C: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_000E8CA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8CAD; /* jne: not equal / not zero */

loc_000E8CA6: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8CA6; /* je: equal / zero */

loc_000E8CAD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x17 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E8D45; /* jge: greater or equal (signed >=) */

loc_000E8CB6: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_000E8CC0: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF8C);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E8CD1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E8CD1: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E8D44; /* jge: greater or equal (signed >=) */

loc_000E8CD9: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8D07; /* jne: not equal / not zero */

loc_000E8CEC: ;
    /* nop */

loc_000E8CF0: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E8D44; /* jge: greater or equal (signed >=) */

loc_000E8CFB: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8CF0; /* je: equal / zero */

loc_000E8D07: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8D15; /* jne: not equal / not zero */

loc_000E8D0F: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_000E8D15: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8D1F; /* jne: not equal / not zero */

loc_000E8D19: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_000E8D1F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8D2A; /* jne: not equal / not zero */

loc_000E8D24: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_000E8D2A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8D38; /* jne: not equal / not zero */

loc_000E8D2F: ;
    /* nop */

loc_000E8D30: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E8D30; /* je: equal / zero */

loc_000E8D38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E8D44; /* jge: greater or equal (signed >=) */

loc_000E8D3D: ;
    esi = eax;
    goto loc_000E8CC0;

loc_000E8D44: ;
    POP32(esp, esi);

loc_000E8D45: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E8D50
 * Original: 0x000E8D50 - 0x000E8D5E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8D50(void)
{

loc_000E8D50: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E8D60
 * Original: 0x000E8D60 - 0x000E8DBF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8D60: ;
    edx = ecx;
    eax = MEM32(edx + 0x1D8);
    eax = MEM32(edx + eax * 4 + 0x174);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1E0;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x1D8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x17 (32-bit) */
    MEM32(edx + 0x1D8) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000E8DA9; /* jl: less (signed <) */

loc_000E8D9F: ;
    MEM32(edx + 0x1D8) = 0;

loc_000E8DA9: ;
    MEM32(edx + 0x1DC) = MEM32(edx + 0x1DC) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1E4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E8DC0
 * Original: 0x000E8DC0 - 0x000E8DCC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8DC0(void)
{

loc_000E8DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E8DC8u); RECOMP_ABI_CALL(0x000E8D50u, sub_000E8D50); /* call 0x000E8D50 */

loc_000E8DC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E8DD0
 * Original: 0x000E8DD0 - 0x000E8E08 (56 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8DD0: ;
    eax = MEM32(ecx + 0x60);
    edx = MEM32(ecx + 0x68);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    MEM32(ecx + 0x60) = eax;
    MEM32(ecx + 0x68) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000E8DFB; /* jl: less (signed <) */

loc_000E8DE3: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x60) = 0;
    edx = MEM32(edx);
    eax = 0x16;
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

loc_000E8DFB: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E8E10
 * Original: 0x000E8E10 - 0x000E9832 (2594 bytes, 698 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8E10: ;
    PUSH32(esp, 0x3C974C);
    PUSH32(esp, 0x000E8E1Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8E1A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C974C);
    PUSH32(esp, 0x000E8E29u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8E29: ;
    ecx = eax;
    PUSH32(esp, 0x000E8E30u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8E30: ;
    PUSH32(esp, 0x3D6718);
    MEM32(0x4F32A8) = eax;
    PUSH32(esp, 0x000E8E3Fu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8E3F: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D6718);
    PUSH32(esp, 0x000E8E4Eu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8E4E: ;
    ecx = eax;
    PUSH32(esp, 0x000E8E55u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8E55: ;
    PUSH32(esp, 0x3D6714);
    MEM32(0x4F3294) = eax;
    PUSH32(esp, 0x000E8E64u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8E64: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D6714);
    PUSH32(esp, 0x000E8E73u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8E73: ;
    ecx = eax;
    PUSH32(esp, 0x000E8E7Au); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8E7A: ;
    PUSH32(esp, 0x3D6710);
    MEM32(0x4F33BC) = eax;
    PUSH32(esp, 0x000E8E89u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8E89: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D6710);
    PUSH32(esp, 0x000E8E98u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8E98: ;
    ecx = eax;
    PUSH32(esp, 0x000E8E9Fu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8E9F: ;
    PUSH32(esp, 0x3D6708);
    MEM32(0x4F32A4) = eax;
    PUSH32(esp, 0x000E8EAEu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8EAE: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D6708);
    PUSH32(esp, 0x000E8EBDu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8EBD: ;
    ecx = eax;
    PUSH32(esp, 0x000E8EC4u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8EC4: ;
    PUSH32(esp, 0x3D899C);
    MEM32(0x4F328C) = eax;
    PUSH32(esp, 0x000E8ED3u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8ED3: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D899C);
    PUSH32(esp, 0x000E8EE2u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8EE2: ;
    ecx = eax;
    PUSH32(esp, 0x000E8EE9u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8EE9: ;
    PUSH32(esp, 0x3D8990);
    MEM32(0x4F3334) = eax;
    PUSH32(esp, 0x000E8EF8u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8EF8: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8990);
    PUSH32(esp, 0x000E8F07u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8F07: ;
    ecx = eax;
    PUSH32(esp, 0x000E8F0Eu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8F0E: ;
    PUSH32(esp, 0x3D8984);
    MEM32(0x4F32EC) = eax;
    PUSH32(esp, 0x000E8F1Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8F1D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8984);
    PUSH32(esp, 0x000E8F2Cu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8F2C: ;
    ecx = eax;
    PUSH32(esp, 0x000E8F33u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8F33: ;
    MEM32(0x4F3394) = eax;
    PUSH32(esp, 0x3D8978);
    PUSH32(esp, 0x000E8F42u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8F42: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8978);
    PUSH32(esp, 0x000E8F51u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8F51: ;
    ecx = eax;
    PUSH32(esp, 0x000E8F58u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8F58: ;
    PUSH32(esp, 0x3D8970);
    MEM32(0x4F3370) = eax;
    PUSH32(esp, 0x000E8F67u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8F67: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8970);
    PUSH32(esp, 0x000E8F76u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8F76: ;
    ecx = eax;
    PUSH32(esp, 0x000E8F7Du); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8F7D: ;
    PUSH32(esp, 0x3D8964);
    MEM32(0x4F32B0) = eax;
    PUSH32(esp, 0x000E8F8Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8F8C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8964);
    PUSH32(esp, 0x000E8F9Bu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8F9B: ;
    ecx = eax;
    PUSH32(esp, 0x000E8FA2u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8FA2: ;
    PUSH32(esp, 0x3D8958);
    MEM32(0x4F3380) = eax;
    PUSH32(esp, 0x000E8FB1u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8FB1: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8958);
    PUSH32(esp, 0x000E8FC0u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8FC0: ;
    ecx = eax;
    PUSH32(esp, 0x000E8FC7u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8FC7: ;
    PUSH32(esp, 0x3D8944);
    MEM32(0x4F333C) = eax;
    PUSH32(esp, 0x000E8FD6u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8FD6: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8944);
    PUSH32(esp, 0x000E8FE5u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E8FE5: ;
    ecx = eax;
    PUSH32(esp, 0x000E8FECu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E8FEC: ;
    PUSH32(esp, 0x3D8930);
    MEM32(0x4F32C4) = eax;
    PUSH32(esp, 0x000E8FFBu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E8FFB: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8930);
    PUSH32(esp, 0x000E900Au); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E900A: ;
    ecx = eax;
    PUSH32(esp, 0x000E9011u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9011: ;
    PUSH32(esp, 0x3D8920);
    MEM32(0x4F33AC) = eax;
    PUSH32(esp, 0x000E9020u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9020: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8920);
    PUSH32(esp, 0x000E902Fu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E902F: ;
    ecx = eax;
    PUSH32(esp, 0x000E9036u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9036: ;
    PUSH32(esp, 0x3D8910);
    MEM32(0x4F3300) = eax;
    PUSH32(esp, 0x000E9045u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9045: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8910);
    PUSH32(esp, 0x000E9054u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9054: ;
    ecx = eax;
    PUSH32(esp, 0x000E905Bu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E905B: ;
    PUSH32(esp, 0x3C97A0);
    MEM32(0x4F339C) = eax;
    PUSH32(esp, 0x000E906Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E906A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C97A0);
    PUSH32(esp, 0x000E9079u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9079: ;
    ecx = eax;
    PUSH32(esp, 0x000E9080u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9080: ;
    PUSH32(esp, 0x3D6678);
    MEM32(0x4F335C) = eax;
    PUSH32(esp, 0x000E908Fu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E908F: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D6678);
    PUSH32(esp, 0x000E909Eu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E909E: ;
    ecx = eax;
    PUSH32(esp, 0x000E90A5u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E90A5: ;
    PUSH32(esp, 0x3D5D68);
    MEM32(0x4F3324) = eax;
    PUSH32(esp, 0x000E90B4u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E90B4: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D5D68);
    PUSH32(esp, 0x000E90C3u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E90C3: ;
    ecx = eax;
    PUSH32(esp, 0x000E90CAu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E90CA: ;
    PUSH32(esp, 0x3D8904);
    MEM32(0x4F32B8) = eax;
    PUSH32(esp, 0x000E90D9u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E90D9: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8904);
    PUSH32(esp, 0x000E90E8u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E90E8: ;
    ecx = eax;
    PUSH32(esp, 0x000E90EFu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E90EF: ;
    PUSH32(esp, 0x3D88F0);
    MEM32(0x4F3388) = eax;
    PUSH32(esp, 0x000E90FEu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E90FE: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D88F0);
    PUSH32(esp, 0x000E910Du); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E910D: ;
    ecx = eax;
    PUSH32(esp, 0x000E9114u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9114: ;
    PUSH32(esp, 0x3D88DC);
    MEM32(0x4F3308) = eax;
    PUSH32(esp, 0x000E9123u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9123: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D88DC);
    PUSH32(esp, 0x000E9132u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9132: ;
    ecx = eax;
    PUSH32(esp, 0x000E9139u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9139: ;
    PUSH32(esp, 0x3D88C8);
    MEM32(0x4F3368) = eax;
    PUSH32(esp, 0x000E9148u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9148: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D88C8);
    PUSH32(esp, 0x000E9157u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9157: ;
    ecx = eax;
    PUSH32(esp, 0x000E915Eu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E915E: ;
    PUSH32(esp, 0x3D88B4);
    MEM32(0x4F3338) = eax;
    PUSH32(esp, 0x000E916Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E916D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D88B4);
    PUSH32(esp, 0x000E917Cu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E917C: ;
    ecx = eax;
    PUSH32(esp, 0x000E9183u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9183: ;
    PUSH32(esp, 0x3D88A0);
    MEM32(0x4F334C) = eax;
    PUSH32(esp, 0x000E9192u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9192: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D88A0);
    PUSH32(esp, 0x000E91A1u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E91A1: ;
    ecx = eax;
    PUSH32(esp, 0x000E91A8u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E91A8: ;
    PUSH32(esp, 0x3D8890);
    MEM32(0x4F3314) = eax;
    PUSH32(esp, 0x000E91B7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E91B7: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8890);
    PUSH32(esp, 0x000E91C6u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E91C6: ;
    ecx = eax;
    PUSH32(esp, 0x000E91CDu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E91CD: ;
    PUSH32(esp, 0x3D8880);
    MEM32(0x4F3330) = eax;
    PUSH32(esp, 0x000E91DCu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E91DC: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8880);
    PUSH32(esp, 0x000E91EBu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E91EB: ;
    ecx = eax;
    PUSH32(esp, 0x000E91F2u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E91F2: ;
    PUSH32(esp, 0x3D8870);
    MEM32(0x4F337C) = eax;
    PUSH32(esp, 0x000E9201u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9201: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8870);
    PUSH32(esp, 0x000E9210u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9210: ;
    ecx = eax;
    PUSH32(esp, 0x000E9217u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9217: ;
    PUSH32(esp, 0x3D885C);
    MEM32(0x4F337C) = eax;
    PUSH32(esp, 0x000E9226u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9226: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D885C);
    PUSH32(esp, 0x000E9235u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9235: ;
    ecx = eax;
    PUSH32(esp, 0x000E923Cu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E923C: ;
    PUSH32(esp, 0x3D8844);
    MEM32(0x4F33A4) = eax;
    PUSH32(esp, 0x000E924Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E924B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8844);
    PUSH32(esp, 0x000E925Au); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E925A: ;
    ecx = eax;
    PUSH32(esp, 0x000E9261u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9261: ;
    PUSH32(esp, 0x3D8838);
    MEM32(0x4F3364) = eax;
    PUSH32(esp, 0x000E9270u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9270: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8838);
    PUSH32(esp, 0x000E927Fu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E927F: ;
    ecx = eax;
    PUSH32(esp, 0x000E9286u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9286: ;
    PUSH32(esp, 0x3D8828);
    MEM32(0x4F32CC) = eax;
    PUSH32(esp, 0x000E9295u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9295: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8828);
    PUSH32(esp, 0x000E92A4u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E92A4: ;
    ecx = eax;
    PUSH32(esp, 0x000E92ABu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E92AB: ;
    PUSH32(esp, 0x3D8818);
    MEM32(0x4F32B4) = eax;
    PUSH32(esp, 0x000E92BAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E92BA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8818);
    PUSH32(esp, 0x000E92C9u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E92C9: ;
    ecx = eax;
    PUSH32(esp, 0x000E92D0u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E92D0: ;
    PUSH32(esp, 0x3D8808);
    MEM32(0x4F32F8) = eax;
    PUSH32(esp, 0x000E92DFu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E92DF: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8808);
    PUSH32(esp, 0x000E92EEu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E92EE: ;
    ecx = eax;
    PUSH32(esp, 0x000E92F5u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E92F5: ;
    PUSH32(esp, 0x3D87F8);
    MEM32(0x4F32AC) = eax;
    PUSH32(esp, 0x000E9304u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9304: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D87F8);
    PUSH32(esp, 0x000E9313u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9313: ;
    ecx = eax;
    PUSH32(esp, 0x000E931Au); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E931A: ;
    PUSH32(esp, 0x3D8910);
    MEM32(0x4F3350) = eax;
    PUSH32(esp, 0x000E9329u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9329: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8910);
    PUSH32(esp, 0x000E9338u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9338: ;
    ecx = eax;
    PUSH32(esp, 0x000E933Fu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E933F: ;
    PUSH32(esp, 0x3D87E4);
    MEM32(0x4F3390) = eax;
    PUSH32(esp, 0x000E934Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E934E: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D87E4);
    PUSH32(esp, 0x000E935Du); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E935D: ;
    ecx = eax;
    PUSH32(esp, 0x000E9364u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9364: ;
    PUSH32(esp, 0x3D87CC);
    MEM32(0x4F32E8) = eax;
    PUSH32(esp, 0x000E9373u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9373: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D87CC);
    PUSH32(esp, 0x000E9382u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9382: ;
    ecx = eax;
    PUSH32(esp, 0x000E9389u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9389: ;
    PUSH32(esp, 0x3D87C4);
    MEM32(0x4F3320) = eax;
    PUSH32(esp, 0x000E9398u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9398: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D87C4);
    PUSH32(esp, 0x000E93A7u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E93A7: ;
    ecx = eax;
    PUSH32(esp, 0x000E93AEu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E93AE: ;
    PUSH32(esp, 0x3D87B8);
    MEM32(0x4F3328) = eax;
    PUSH32(esp, 0x000E93BDu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E93BD: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D87B8);
    PUSH32(esp, 0x000E93CCu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E93CC: ;
    ecx = eax;
    PUSH32(esp, 0x000E93D3u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E93D3: ;
    PUSH32(esp, 0x3D87AC);
    MEM32(0x4F32C8) = eax;
    PUSH32(esp, 0x000E93E2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E93E2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D87AC);
    PUSH32(esp, 0x000E93F1u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E93F1: ;
    ecx = eax;
    PUSH32(esp, 0x000E93F8u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E93F8: ;
    PUSH32(esp, 0x3D87A4);
    MEM32(0x4F3340) = eax;
    PUSH32(esp, 0x000E9407u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9407: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D87A4);
    PUSH32(esp, 0x000E9416u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9416: ;
    ecx = eax;
    PUSH32(esp, 0x000E941Du); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E941D: ;
    PUSH32(esp, 0x3D8798);
    MEM32(0x4F3318) = eax;
    PUSH32(esp, 0x000E942Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E942C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8798);
    PUSH32(esp, 0x000E943Bu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E943B: ;
    ecx = eax;
    PUSH32(esp, 0x000E9442u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9442: ;
    PUSH32(esp, 0x3CCAC8);
    MEM32(0x4F32F0) = eax;
    PUSH32(esp, 0x000E9451u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9451: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CCAC8);
    PUSH32(esp, 0x000E9460u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9460: ;
    ecx = eax;
    PUSH32(esp, 0x000E9467u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9467: ;
    PUSH32(esp, 0x3D8784);
    MEM32(0x4F336C) = eax;
    PUSH32(esp, 0x000E9476u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9476: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8784);
    PUSH32(esp, 0x000E9485u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9485: ;
    ecx = eax;
    PUSH32(esp, 0x000E948Cu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E948C: ;
    PUSH32(esp, 0x3D8770);
    MEM32(0x4F331C) = eax;
    PUSH32(esp, 0x000E949Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E949B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8770);
    PUSH32(esp, 0x000E94AAu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E94AA: ;
    ecx = eax;
    PUSH32(esp, 0x000E94B1u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E94B1: ;
    PUSH32(esp, 0x3D8760);
    MEM32(0x4F32DC) = eax;
    PUSH32(esp, 0x000E94C0u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E94C0: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8760);
    PUSH32(esp, 0x000E94CFu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E94CF: ;
    ecx = eax;
    PUSH32(esp, 0x000E94D6u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E94D6: ;
    PUSH32(esp, 0x3D8758);
    MEM32(0x4F3310) = eax;
    PUSH32(esp, 0x000E94E5u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E94E5: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8758);
    PUSH32(esp, 0x000E94F4u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E94F4: ;
    ecx = eax;
    PUSH32(esp, 0x000E94FBu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E94FB: ;
    PUSH32(esp, 0x3D8748);
    MEM32(0x4F32E4) = eax;
    PUSH32(esp, 0x000E950Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E950A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8748);
    PUSH32(esp, 0x000E9519u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9519: ;
    ecx = eax;
    PUSH32(esp, 0x000E9520u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9520: ;
    PUSH32(esp, 0x3D8740);
    MEM32(0x4F3298) = eax;
    PUSH32(esp, 0x000E952Fu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E952F: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8740);
    PUSH32(esp, 0x000E953Eu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E953E: ;
    ecx = eax;
    PUSH32(esp, 0x000E9545u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9545: ;
    PUSH32(esp, 0x3D8738);
    MEM32(0x4F32D8) = eax;
    PUSH32(esp, 0x000E9554u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9554: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8738);
    PUSH32(esp, 0x000E9563u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9563: ;
    ecx = eax;
    PUSH32(esp, 0x000E956Au); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E956A: ;
    PUSH32(esp, 0x3D8728);
    MEM32(0x4F338C) = eax;
    PUSH32(esp, 0x000E9579u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9579: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8728);
    PUSH32(esp, 0x000E9588u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9588: ;
    ecx = eax;
    PUSH32(esp, 0x000E958Fu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E958F: ;
    PUSH32(esp, 0x3D871C);
    MEM32(0x4F32E0) = eax;
    PUSH32(esp, 0x000E959Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E959E: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D871C);
    PUSH32(esp, 0x000E95ADu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E95AD: ;
    ecx = eax;
    PUSH32(esp, 0x000E95B4u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E95B4: ;
    PUSH32(esp, 0x3D8710);
    MEM32(0x4F32BC) = eax;
    PUSH32(esp, 0x000E95C3u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E95C3: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8710);
    PUSH32(esp, 0x000E95D2u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E95D2: ;
    ecx = eax;
    PUSH32(esp, 0x000E95D9u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E95D9: ;
    PUSH32(esp, 0x3D8704);
    MEM32(0x4F32C0) = eax;
    PUSH32(esp, 0x000E95E8u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E95E8: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8704);
    PUSH32(esp, 0x000E95F7u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E95F7: ;
    ecx = eax;
    PUSH32(esp, 0x000E95FEu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E95FE: ;
    PUSH32(esp, 0x3D5D78);
    MEM32(0x4F3358) = eax;
    PUSH32(esp, 0x000E960Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E960D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D5D78);
    PUSH32(esp, 0x000E961Cu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E961C: ;
    ecx = eax;
    PUSH32(esp, 0x000E9623u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9623: ;
    PUSH32(esp, 0x3D86F4);
    MEM32(0x4F3354) = eax;
    PUSH32(esp, 0x000E9632u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9632: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D86F4);
    PUSH32(esp, 0x000E9641u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9641: ;
    ecx = eax;
    PUSH32(esp, 0x000E9648u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9648: ;
    PUSH32(esp, 0x3D86E8);
    MEM32(0x4F33B8) = eax;
    PUSH32(esp, 0x000E9657u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9657: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D86E8);
    PUSH32(esp, 0x000E9666u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9666: ;
    ecx = eax;
    PUSH32(esp, 0x000E966Du); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E966D: ;
    PUSH32(esp, 0x3D86DC);
    MEM32(0x4F33A8) = eax;
    PUSH32(esp, 0x000E967Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E967C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D86DC);
    PUSH32(esp, 0x000E968Bu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E968B: ;
    ecx = eax;
    PUSH32(esp, 0x000E9692u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9692: ;
    PUSH32(esp, 0x3C8CD8);
    MEM32(0x4F3304) = eax;
    PUSH32(esp, 0x000E96A1u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E96A1: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8CD8);
    PUSH32(esp, 0x000E96B0u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E96B0: ;
    ecx = eax;
    PUSH32(esp, 0x000E96B7u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E96B7: ;
    PUSH32(esp, 0x3C8CCC);
    MEM32(0x4F33B4) = eax;
    PUSH32(esp, 0x000E96C6u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E96C6: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8CCC);
    PUSH32(esp, 0x000E96D5u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E96D5: ;
    ecx = eax;
    PUSH32(esp, 0x000E96DCu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E96DC: ;
    PUSH32(esp, 0x3D5414);
    MEM32(0x4F3384) = eax;
    PUSH32(esp, 0x000E96EBu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E96EB: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D5414);
    PUSH32(esp, 0x000E96FAu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E96FA: ;
    ecx = eax;
    PUSH32(esp, 0x000E9701u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9701: ;
    PUSH32(esp, 0x3D5404);
    MEM32(0x4F33A0) = eax;
    PUSH32(esp, 0x000E9710u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9710: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D5404);
    PUSH32(esp, 0x000E971Fu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E971F: ;
    ecx = eax;
    PUSH32(esp, 0x000E9726u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9726: ;
    PUSH32(esp, 0x3D86D4);
    MEM32(0x4F3374) = eax;
    PUSH32(esp, 0x000E9735u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9735: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D86D4);
    PUSH32(esp, 0x000E9744u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9744: ;
    ecx = eax;
    PUSH32(esp, 0x000E974Bu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E974B: ;
    PUSH32(esp, 0x3D86BC);
    MEM32(0x4F3398) = eax;
    MEM32(0x4F32D0) = 0;
    PUSH32(esp, 0x000E9764u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9764: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D86BC);
    PUSH32(esp, 0x000E9773u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9773: ;
    ecx = eax;
    PUSH32(esp, 0x000E977Au); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E977A: ;
    PUSH32(esp, 0x3D86AC);
    MEM32(0x4F3348) = eax;
    PUSH32(esp, 0x000E9789u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9789: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D86AC);
    PUSH32(esp, 0x000E9798u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9798: ;
    ecx = eax;
    PUSH32(esp, 0x000E979Fu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E979F: ;
    PUSH32(esp, 0x3D869C);
    MEM32(0x4F329C) = eax;
    PUSH32(esp, 0x000E97AEu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E97AE: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D869C);
    PUSH32(esp, 0x000E97BDu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E97BD: ;
    ecx = eax;
    PUSH32(esp, 0x000E97C4u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E97C4: ;
    PUSH32(esp, 0x3D8690);
    MEM32(0x4F32D4) = eax;
    PUSH32(esp, 0x000E97D3u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E97D3: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8690);
    PUSH32(esp, 0x000E97E2u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E97E2: ;
    ecx = eax;
    PUSH32(esp, 0x000E97E9u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E97E9: ;
    PUSH32(esp, 0x3D8684);
    MEM32(0x4F330C) = eax;
    PUSH32(esp, 0x000E97F8u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E97F8: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D8684);
    PUSH32(esp, 0x000E9807u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9807: ;
    ecx = eax;
    PUSH32(esp, 0x000E980Eu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E980E: ;
    PUSH32(esp, 0x3D8674);
    ecx = 0x4F3378;
    MEM32(0x4F32F4) = eax;
    PUSH32(esp, 0x000E9822u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000E9822: ;
    PUSH32(esp, 0x3D8664);
    ecx = 0x4F33B0;
    PUSH32(esp, 0x000E9831u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000E9831: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9840
 * Original: 0x000E9840 - 0x000E98A5 (101 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9840: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000E9854u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000E9854: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E98A0; /* je: equal / zero */

loc_000E985E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000E9866u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_000E9866: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF8C);
    eax = MEM32(edx + edi + 0x1F4);
    ecx = edx + edi + 0x1F4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E9880u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E9880: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = edi + ecx * 4 + 0x16788;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_000E98A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E98B0
 * Original: 0x000E98B0 - 0x000E990D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E98B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E98B0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1D4) = esi;
    MEM32(ecx + 0x1D8) = esi;
    MEM32(ecx + 0x1DC) = esi;
    edx = 0; /* xor self */
    goto loc_000E98D0;

    /* nop */

loc_000E98D0: ;
    eax = MEM32(ecx + 0x1D4);
    edi = MEM32(ecx + 0x1DC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    MEM32(ecx + 0x1D4) = eax;
    MEM32(ecx + 0x1DC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000E98FC; /* jl: less (signed <) */

loc_000E98EF: ;
    MEM32(ecx + 0x1D4) = esi;
    eax = 0x16;
    goto loc_000E98FD;

loc_000E98FC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E98FD: ;
    MEM32(ecx + eax * 4 + 0x174) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x17 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E98D0; /* jl: less (signed <) */

loc_000E990A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E9910
 * Original: 0x000E9910 - 0x000E9956 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9910: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x17;
    goto loc_000E9920;

    /* nop */

loc_000E9920: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E9920; /* jne: not equal / not zero */

loc_000E992C: ;
    ecx = esi + 0x174;
    PUSH32(esp, 0x000E9937u); RECOMP_ABI_CALL(0x000E8DC0u, sub_000E8DC0); /* call 0x000E8DC0 */

loc_000E9937: ;
    MEM32(esi + 0x1E0) = 0;
    ecx = esi;
    MEM32(esi + 0x1E4) = 0;
    PUSH32(esp, 0x000E9952u); RECOMP_ABI_CALL(0x000E98B0u, sub_000E98B0); /* call 0x000E98B0 */

loc_000E9952: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E9960
 * Original: 0x000E9960 - 0x000E99F0 (144 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9960: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000E9989; /* je: equal / zero */

loc_000E9970: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9989; /* je: equal / zero */

loc_000E9981: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000E9989u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000E9989: ;
    ebx = eax;
    goto loc_000E9990;

    /* nop */

loc_000E9990: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E999C; /* jne: not equal / not zero */

loc_000E9998: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E99EC; /* je: equal / zero */

loc_000E999C: ;
    PUSH32(esp, ebx);
    ecx = edi;
    esi = ebx;
    PUSH32(esp, 0x000E99A6u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000E99A6: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x000E99B0u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_000E99B0: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF8C);
    eax = MEM32(edx + edi + 0x1F4);
    ecx = edx + edi + 0x1F4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E99CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E99CA: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = edi + ecx * 4 + 0x16788;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    goto loc_000E9990;

loc_000E99EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E99F0
 * Original: 0x000E99F0 - 0x000E9A5F (111 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E99F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E99F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000E9A1F; /* je: equal / zero */

loc_000E99FC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9A1F; /* je: equal / zero */

loc_000E9A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E9A07u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9A07: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E9A12u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9A12: ;
    ecx = eax;
    PUSH32(esp, 0x000E9A19u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9A19: ;
    MEM32(esp + 0xC) = eax;
    goto loc_000E9A27;

loc_000E9A1F: ;
    MEM32(esp + 0xC) = 0;

loc_000E9A27: ;
    eax = MEM32(edi + 8);
    esi = edi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000E9A3Au); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000E9A3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9A45; /* jne: not equal / not zero */

loc_000E9A41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9A58; /* je: equal / zero */

loc_000E9A45: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000E9A51u); RECOMP_ABI_CALL(0x000E9840u, sub_000E9840); /* call 0x000E9840 */

loc_000E9A51: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E9A58: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9A60
 * Original: 0x000E9A60 - 0x000E9ACE (110 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9A60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000E9A8F; /* je: equal / zero */

loc_000E9A6C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9A8F; /* je: equal / zero */

loc_000E9A71: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E9A77u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9A77: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E9A82u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9A82: ;
    ecx = eax;
    PUSH32(esp, 0x000E9A89u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9A89: ;
    MEM32(esp + 0xC) = eax;
    goto loc_000E9A97;

loc_000E9A8F: ;
    MEM32(esp + 0xC) = 0;

loc_000E9A97: ;
    eax = MEM32(edi + 8);
    esi = edi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000E9AAAu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000E9AAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9AB5; /* jne: not equal / not zero */

loc_000E9AB1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9AC7; /* je: equal / zero */

loc_000E9AB5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF8C);
    POP32(esp, edi);
    eax = eax + esi + 0x1F4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E9AC7: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9AD0
 * Original: 0x000E9AD0 - 0x000E9B83 (179 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9AD0(void)
{

loc_000E9AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000E9ADFu); RECOMP_ABI_CALL(0x000E8D60u, sub_000E8D60); /* call 0x000E8D60 */

loc_000E9ADF: ;
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    ebx = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x10) = ebx;
    MEM32(ecx + esi + 0x14) = ebx;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000E9B11u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000E9B11: ;
    eax = MEM32(edi);
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | ebx;
    MEM32(eax) = edx;
    ebx = MEM32(esi + 8);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xF8C);
    eax = edi + esi + 0x1F4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E9B55u); RECOMP_ABI_CALL(0x000E8C00u, sub_000E8C00); /* call 0x000E8C00 */

loc_000E9B55: ;
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x16788;
    ecx = ebx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = edi + esi + 0x1F4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9B90
 * Original: 0x000E9B90 - 0x000E9B98 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9B90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E9B90: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000E9BA0(); return; /* tail jmp 0x000E9BA0 */

}

/**
 * sub_000E9BA0
 * Original: 0x000E9BA0 - 0x000E9BD1 (49 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9BA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x1E0;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x000E9BB7u); RECOMP_ABI_CALL(0x0014A7A0u, sub_0014A7A0); /* call 0x0014A7A0 */

loc_000E9BB7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x174;
    PUSH32(esp, 0x000E9BC7u); RECOMP_ABI_CALL(0x000E8DD0u, sub_000E8DD0); /* call 0x000E8DD0 */

loc_000E9BC7: ;
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9BE0
 * Original: 0x000E9BE0 - 0x000E9CBD (221 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9BE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000E9C10; /* je: equal / zero */

loc_000E9BED: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9C10; /* je: equal / zero */

loc_000E9BF2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E9BF8u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000E9BF8: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E9C03u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000E9C03: ;
    ecx = eax;
    PUSH32(esp, 0x000E9C0Au); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000E9C0A: ;
    MEM32(esp + 0x14) = eax;
    goto loc_000E9C18;

loc_000E9C10: ;
    MEM32(esp + 0x14) = 0;

loc_000E9C18: ;
    eax = MEM32(esi + 8);
    edi = esi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000E9C2Bu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000E9C2B: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9C59; /* jne: not equal / not zero */

loc_000E9C34: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9C59; /* jne: not equal / not zero */

loc_000E9C38: ;
    _fa = (uint32_t)(MEM32(esi + 0x1F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1F4), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9C49; /* jne: not equal / not zero */

loc_000E9C41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000E9C49: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000E9C55u); RECOMP_ABI_CALL(0x000E9AD0u, sub_000E9AD0); /* call 0x000E9AD0 */

loc_000E9C55: ;
    esi = eax;
    goto loc_000E9C74;

loc_000E9C59: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF8C);
    esi = eax + edi + 0x1F4;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9C76; /* jne: not equal / not zero */

loc_000E9C6D: ;
    ecx = esi;
    PUSH32(esp, 0x000E9C74u); RECOMP_ABI_CALL(0x000EBE20u, sub_000EBE20); /* call 0x000EBE20 */

loc_000E9C74: ;
    SET_LO8(ecx, 1);

loc_000E9C76: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E9CB5; /* je: equal / zero */

loc_000E9C7A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E9CB5; /* je: equal / zero */

loc_000E9C7E: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000E9C88u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000E9C88: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E9C9Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E9C9B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000E9CA3u); RECOMP_ABI_CALL(0x000ECB00u, sub_000ECB00); /* call 0x000ECB00 */

loc_000E9CA3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9CB5; /* jne: not equal / not zero */

loc_000E9CA7: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000E9CB3u); RECOMP_ABI_CALL(0x000E9840u, sub_000E9840); /* call 0x000E9840 */

loc_000E9CB3: ;
    esi = 0; /* xor self */

loc_000E9CB5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E9CC0
 * Original: 0x000E9CC0 - 0x000E9CEC (44 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9CC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E9CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    eax = 0; /* xor self */
    MEM32(esi + 8) = 0x3FFFFFFF;
    MEM32(ecx + 0x1E4) = eax;
    MEM32(ecx + 0x1E0) = eax;
    PUSH32(esp, 0x000E9CE0u); RECOMP_ABI_CALL(0x000E98B0u, sub_000E98B0); /* call 0x000E98B0 */

loc_000E9CE0: ;
    ecx = esi + 0x1F8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000E8C50(); return; /* tail jmp 0x000E8C50 */

}

/**
 * sub_000E9CF0
 * Original: 0x000E9CF0 - 0x000E9D44 (84 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9CF0(void)
{

loc_000E9CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D89DC;
    ecx = esi + 0x10;
    MEM32(esi + 8) = 0x3FFFFFFF;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    MEM32(esi + 4) = 0x3D89AC;
    PUSH32(esp, 0x000E9D16u); RECOMP_ABI_CALL(0x000E9910u, sub_000E9910); /* call 0x000E9910 */

loc_000E9D16: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x1678C) = eax;
    MEM32(esi + 4) = 0x3D89C4;
    ecx = esi + 0x16798;
    MEM32(esi + 0x16790) = 0x3FFFFFFF;
    MEM32(esi + 0x16794) = eax;
    PUSH32(esp, 0x000E9D40u); RECOMP_ABI_CALL(0x000E33F0u, xml1_guest_combat_event_pool_construct); /* call 0x000E33F0 */

loc_000E9D40: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E9D50
 * Original: 0x000E9D50 - 0x000E9D57 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9D50(void)
{

loc_000E9D50: ;
    eax = ecx + 0x16798;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9D60
 * Original: 0x000E9D60 - 0x000E9DC4 (100 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9D60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    esi = edi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000E9D8A; /* je: equal / zero */

loc_000E9D71: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9D8A; /* je: equal / zero */

loc_000E9D82: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000E9D8Au); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000E9D8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    MEM32(edi + 0x16794) = esi;
    MEM32(edi + 0x16790) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E9DA3; /* jne: not equal / not zero */

loc_000E9D9D: ;
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9DBF; /* je: equal / zero */

loc_000E9DA3: ;
    edx = MEM32(edi + 0x16790);
    eax = MEM32(edi + 0x16794);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF8C);
    POP32(esp, edi);
    eax = edx + eax + 0x1F4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E9DBF: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E9DD0
 * Original: 0x000E9DD0 - 0x000E9E20 (80 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9DD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x16790);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x16794);
    PUSH32(esp, eax);
    ecx = edi;
    ebx = esi + 4;
    PUSH32(esp, 0x000E9DECu); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000E9DEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    MEM32(esi + 0x16790) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E9DFD; /* jne: not equal / not zero */

loc_000E9DF9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9E1A; /* je: equal / zero */

loc_000E9DFD: ;
    ecx = MEM32(esi + 0x16790);
    edx = MEM32(esi + 0x16794);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF8C);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ecx + edx + 0x1F4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E9E1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E9E20
 * Original: 0x000E9E20 - 0x000E9E4A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9E20: ;
    PUSH32(esp, 0x4E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x237AC);
    PUSH32(esp, 0x000E9E2Eu); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_000E9E2E: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E9E42; /* je: equal / zero */

loc_000E9E35: ;
    ecx = eax;
    PUSH32(esp, 0x000E9E3Cu); RECOMP_ABI_CALL(0x000E9CF0u, sub_000E9CF0); /* call 0x000E9CF0 */

loc_000E9E3C: ;
    MEM32(0x4F3D4C) = eax;
    esp += 4; return; /* ret */

loc_000E9E42: ;
    eax = 0; /* xor self */
    MEM32(0x4F3D4C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9E50
 * Original: 0x000E9E50 - 0x000E9E64 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9E50: ;
    eax = MEM32(0x4F3D4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9E63; /* jne: not equal / not zero */

loc_000E9E59: ;
    PUSH32(esp, 0x000E9E5Eu); RECOMP_ABI_CALL(0x000E9E20u, sub_000E9E20); /* call 0x000E9E20 */

loc_000E9E5E: ;
    eax = MEM32(0x4F3D4C);

loc_000E9E63: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9E70
 * Original: 0x000E9E70 - 0x000E9EB5 (69 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9E70: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000E9E79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E9E79: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E9EB2; /* je: equal / zero */

loc_000E9E7F: ;
    PUSH32(esp, edi);

loc_000E9E80: ;
    edx = MEM32(esi);
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E9E8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E9E8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E9EA4; /* je: equal / zero */

loc_000E9E8E: ;
    edi = edi;

loc_000E9E90: ;
    edx = MEM32(eax);
    ecx = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000E9E98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E9E98: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000E9EA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E9EA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9E90; /* jne: not equal / not zero */

loc_000E9EA4: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000E9EABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E9EAB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9E80; /* jne: not equal / not zero */

loc_000E9EB1: ;
    POP32(esp, edi);

loc_000E9EB2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E9EC0
 * Original: 0x000E9EC0 - 0x000E9F59 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9EC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000E9ED7; /* jl: less (signed <) */

loc_000E9ECE: ;
    eax = 0x82;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000E9ED7: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000E9EEA; /* jne: not equal / not zero */

loc_000E9EE8: ;
    edx = ~edx;

loc_000E9EEA: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9F14; /* jne: not equal / not zero */

loc_000E9EF5: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E9F4F; /* jge: greater or equal (signed >=) */

loc_000E9F02: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000E9F10; /* jne: not equal / not zero */

loc_000E9F0E: ;
    edx = ~edx;

loc_000E9F10: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E9EF5; /* je: equal / zero */

loc_000E9F14: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9F22; /* jne: not equal / not zero */

loc_000E9F1C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_000E9F22: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9F2C; /* jne: not equal / not zero */

loc_000E9F26: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_000E9F2C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9F37; /* jne: not equal / not zero */

loc_000E9F31: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_000E9F37: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9F48; /* jne: not equal / not zero */

loc_000E9F3C: ;
    /* nop */

loc_000E9F40: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E9F40; /* je: equal / zero */

loc_000E9F48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E9F54; /* jl: less (signed <) */

loc_000E9F4F: ;
    eax = 0x82;

loc_000E9F54: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E9F60
 * Original: 0x000E9F60 - 0x000E9F67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9F60(void)
{

loc_000E9F60: ;
    MEM32(ecx) = 0x3D8A1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9F70
 * Original: 0x000E9F70 - 0x000E9F8F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9F70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D8A1C;
    if (TEST_Z(_fa, _fb)) goto loc_000E9F89; /* je: equal / zero */

loc_000E9F80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E9F86u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E9F86: ;
    esp = esp + 4;

loc_000E9F89: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9F90
 * Original: 0x000E9F90 - 0x000E9F97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9F90(void)
{

loc_000E9F90: ;
    MEM32(ecx) = 0x3D8A84;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9FA0
 * Original: 0x000E9FA0 - 0x000E9FBF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9FA0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D8A84;
    if (TEST_Z(_fa, _fb)) goto loc_000E9FB9; /* je: equal / zero */

loc_000E9FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E9FB6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000E9FB6: ;
    esp = esp + 4;

loc_000E9FB9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9FC0
 * Original: 0x000E9FC0 - 0x000E9FE9 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9FC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9FCE; /* jne: not equal / not zero */

loc_000E9FC8: ;
    eax = 0x4F33B4;
    esp += 4; return; /* ret */

loc_000E9FCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9FD9; /* jne: not equal / not zero */

loc_000E9FD3: ;
    eax = 0x4F3384;
    esp += 4; return; /* ret */

loc_000E9FD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    eax = 0x4F33A0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E9FE8; /* je: equal / zero */

loc_000E9FE3: ;
    eax = 0x4F3374;

loc_000E9FE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9FF0
 * Original: 0x000E9FF0 - 0x000E9FF9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9FF0(void)
{

loc_000E9FF0: ;
    SET_LO8(eax, MEM8(ecx + 0xD4));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA000
 * Original: 0x000EA000 - 0x000EA02D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA000: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA02C; /* je: equal / zero */

loc_000EA008: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    SET_LO8(ecx, MEM8(ecx + 0xC));
    SET_LO8(edx, MEM8(eax + 0xC));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0xC) = LO8(edx);

loc_000EA02C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA030
 * Original: 0x000EA030 - 0x000EA077 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA030: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA076; /* je: equal / zero */

loc_000EA038: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    SET_LO16(edx, MEM16(ecx + 0x18));
    MEM16(eax + 0x18) = LO16(edx);
    SET_LO8(ecx, MEM8(ecx + 0x1A));
    SET_LO8(edx, MEM8(eax + 0x1A));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x1A) = LO8(edx);

loc_000EA076: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA080
 * Original: 0x000EA080 - 0x000EA154 (212 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA080: ;
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    esi = ecx + 0x40;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA0AB; /* jne: not equal / not zero */

loc_000EA08D: ;
    /* nop */

loc_000EA090: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EA14C; /* jge: greater or equal (signed >=) */

loc_000EA09F: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA090; /* je: equal / zero */

loc_000EA0AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA0B8; /* jne: not equal / not zero */

loc_000EA0B2: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000EA0B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA0C2; /* jne: not equal / not zero */

loc_000EA0BC: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000EA0C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA0CC; /* jne: not equal / not zero */

loc_000EA0C6: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000EA0CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA0D7; /* jne: not equal / not zero */

loc_000EA0D0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA0D0; /* je: equal / zero */

loc_000EA0D7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EA14C; /* jge: greater or equal (signed >=) */

loc_000EA0DC: ;
    /* nop */

loc_000EA0E0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EA14C; /* jge: greater or equal (signed >=) */

loc_000EA0E6: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA117; /* jne: not equal / not zero */

loc_000EA0F9: ;
    /* nop */

loc_000EA100: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EA14C; /* jge: greater or equal (signed >=) */

loc_000EA10B: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA100; /* je: equal / zero */

loc_000EA117: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA124; /* jne: not equal / not zero */

loc_000EA11E: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000EA124: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA12E; /* jne: not equal / not zero */

loc_000EA128: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000EA12E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA138; /* jne: not equal / not zero */

loc_000EA132: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000EA138: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA147; /* jne: not equal / not zero */

loc_000EA13C: ;
    /* nop */

loc_000EA140: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA140; /* je: equal / zero */

loc_000EA147: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EA0E0; /* jl: less (signed <) */

loc_000EA14C: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA160
 * Original: 0x000EA160 - 0x000EA1E7 (135 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA160: ;
    eax = MEM32(ecx + 0xE38);
    PUSH32(esp, esi);
    esi = ecx + 0xE38;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA18D; /* jne: not equal / not zero */

loc_000EA173: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x82 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EA1D5; /* jge: greater or equal (signed >=) */

loc_000EA181: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA173; /* je: equal / zero */

loc_000EA18D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA19A; /* jne: not equal / not zero */

loc_000EA194: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000EA19A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA1A4; /* jne: not equal / not zero */

loc_000EA19E: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000EA1A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA1AE; /* jne: not equal / not zero */

loc_000EA1A8: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000EA1AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA1B9; /* jne: not equal / not zero */

loc_000EA1B2: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA1B2; /* je: equal / zero */

loc_000EA1B9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x82 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EA1D5; /* jge: greater or equal (signed >=) */

loc_000EA1C1: ;
    eax = edx;

loc_000EA1C3: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000EA1CEu); RECOMP_ABI_CALL(0x000E9EC0u, sub_000E9EC0); /* call 0x000E9EC0 */

loc_000EA1CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EA1C3; /* jl: less (signed <) */

loc_000EA1D5: ;
    ecx = 0; /* xor self */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA1F0
 * Original: 0x000EA1F0 - 0x000EA207 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA1F0(void)
{

loc_000EA1F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x20C) = ecx;
    MEM32(eax + 0x210) = ecx;
    MEM32(eax + 0x214) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA210
 * Original: 0x000EA210 - 0x000EA401 (497 bytes, 158 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA210(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EA210: ;
    esp = esp - 0x108;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    MEM32(esp + 0x108) = eax;
    eax = MEM32(esp + 0x110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000EA34A; /* jne: not equal / not zero */

loc_000EA236: ;
    _fa = (uint32_t)(MEM8(edi + 0x134)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x134), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA3E9; /* jne: not equal / not zero */

loc_000EA243: ;
    eax = MEM32(edi + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0x128;
    if (TEST_NZ(_fa, _fb)) goto loc_000EA332; /* jne: not equal / not zero */

loc_000EA257: ;
    PUSH32(esp, 0x000EA25Cu); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_000EA25C: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EA267u); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_000EA267: ;
    eax = MEM32(eax);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000EA332; /* je: equal / zero */

loc_000EA276: ;
    eax = MEM32(edi + 0x12C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA2CD; /* jne: not equal / not zero */

loc_000EA280: ;
    ebp = edi + 0x130;
    ecx = ebp;
    PUSH32(esp, 0x000EA28Du); RECOMP_ABI_CALL(0x00030590u, sub_00030590); /* call 0x00030590 */

loc_000EA28D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000EA2CD; /* jle: less or equal (signed <=) */

loc_000EA291: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x000EA2A2u); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_000EA2A2: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EA2ACu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_000EA2AC: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x000EA2B4u); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_000EA2B4: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000EA2C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA2C5: ;
    edx = MEM32(eax);
    MEM32(edi + 0x12C) = edx;

loc_000EA2CD: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000EA2D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA2D4: ;
    ebp = eax;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000EA2DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA2DE: ;
    eax = MEM32(ebp);
    ecx = edi + 0xD8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000EA2EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA2ED: ;
    eax = MEM32(edi + 0x12C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA31E; /* je: equal / zero */

loc_000EA2F7: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000EA2FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA2FE: ;
    ecx = MEM32(edi + 0x12C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000EA30Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA30C: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000EA313u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA313: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000EA31Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA31C: ;
    xml1_raven_power_icon_grid(edi);
    goto loc_000EA332;

loc_000EA31E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA332; /* je: equal / zero */

loc_000EA323: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EA329u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_000EA329: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_000EA332: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000EA339u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA339: ;
    ecx = eax;
    PUSH32(esp, 0x000EA340u); RECOMP_ABI_CALL(0x00030590u, sub_00030590); /* call 0x00030590 */

loc_000EA340: ;
    SET_LO8(eax, MEM8(edi + 0x134));
    SET_LO8(eax, LO8(eax) | 4);
    goto loc_000EA39B;

loc_000EA34A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA3E9; /* jne: not equal / not zero */

loc_000EA353: ;
    _fa = (uint32_t)(MEM8(edi + 0x134)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x134), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA3E9; /* je: equal / zero */

loc_000EA360: ;
    eax = MEM32(edi + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0x128;
    if (TEST_Z(_fa, _fb)) goto loc_000EA37F; /* je: equal / zero */

loc_000EA370: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EA376u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_000EA376: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_000EA37F: ;
    eax = MEM32(edi + 0x12C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA393; /* je: equal / zero */

loc_000EA389: ;
    MEM32(edi + 0x12C) = 0;

loc_000EA393: ;
    SET_LO8(eax, MEM8(edi + 0x134));
    SET_LO8(eax, LO8(eax) & 0xFB);

loc_000EA39B: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM8(edi + 0x134) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000EA3A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA3A8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA3E9; /* je: equal / zero */

loc_000EA3AE: ;
    edi = edi;

loc_000EA3B0: ;
    eax = MEM32(esi);
    ebp = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000EA3BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA3BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA3DC; /* je: equal / zero */

loc_000EA3BE: ;
    edi = edi;

loc_000EA3C0: ;
    ecx = MEM32(esp + 0x118);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000EA3D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA3D0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000EA3D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA3D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA3C0; /* jne: not equal / not zero */

loc_000EA3DC: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000EA3E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA3E3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA3B0; /* jne: not equal / not zero */

loc_000EA3E9: ;
    ecx = MEM32(esp + 0x110);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000EA3F8u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000EA3F8: ;
    esp = esp + 0x108;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA410
 * Original: 0x000EA410 - 0x000EA472 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA410: ;
    edx = ecx;
    eax = MEM32(edx + 0x16920);
    eax = MEM32(edx + eax * 4 + 0x16468);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x16928;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x16920);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12C (32-bit) */
    MEM32(edx + 0x16920) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000EA45C; /* jl: less (signed <) */

loc_000EA452: ;
    MEM32(edx + 0x16920) = 0;

loc_000EA45C: ;
    MEM32(edx + 0x16924) = MEM32(edx + 0x16924) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x16924)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x16950);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x16950) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA420
 * Original: 0x000EA420 - 0x000EA472 (82 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA420: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x16928;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x16920);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12C (32-bit) */
    MEM32(edx + 0x16920) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000EA45C; /* jl: less (signed <) */

loc_000EA452: ;
    MEM32(edx + 0x16920) = 0;

loc_000EA45C: ;
    MEM32(edx + 0x16924) = MEM32(edx + 0x16924) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x16924)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x16950);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x16950) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA480
 * Original: 0x000EA480 - 0x000EA4C9 (73 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA480: ;
    eax = MEM32(ecx + 0x20C);
    edx = MEM32(ecx + 0x214);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82 (32-bit) */
    MEM32(ecx + 0x20C) = eax;
    MEM32(ecx + 0x214) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000EA4BC; /* jl: less (signed <) */

loc_000EA4A1: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x20C) = 0;
    edx = MEM32(edx);
    eax = 0x81;
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

loc_000EA4BC: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA4D0
 * Original: 0x000EA4D0 - 0x000EA532 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA4D0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xA30) = esi;
    MEM32(ecx + 0xA34) = esi;
    MEM32(ecx + 0xA38) = esi;
    edx = 0; /* xor self */
    goto loc_000EA4F0;

    /* nop */

loc_000EA4F0: ;
    eax = MEM32(ecx + 0xA30);
    edi = MEM32(ecx + 0xA38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82 (32-bit) */
    MEM32(ecx + 0xA30) = eax;
    MEM32(ecx + 0xA38) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000EA51E; /* jl: less (signed <) */

loc_000EA511: ;
    MEM32(ecx + 0xA30) = esi;
    eax = 0x81;
    goto loc_000EA51F;

loc_000EA51E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000EA51F: ;
    MEM32(ecx + eax * 4 + 0x824) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x82 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EA4F0; /* jl: less (signed <) */

loc_000EA52F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA540
 * Original: 0x000EA540 - 0x000EA5A2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA540: ;
    edx = ecx;
    eax = MEM32(edx + 0xA34);
    eax = MEM32(edx + eax * 4 + 0x824);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xA3C;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0xA34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x82 (32-bit) */
    MEM32(edx + 0xA34) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000EA58C; /* jl: less (signed <) */

loc_000EA582: ;
    MEM32(edx + 0xA34) = 0;

loc_000EA58C: ;
    MEM32(edx + 0xA38) = MEM32(edx + 0xA38) - 1;
    _fa = (uint32_t)(MEM32(edx + 0xA38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xA50);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xA50) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA5B0
 * Original: 0x000EA5B0 - 0x000EA5BC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA5B0(void)
{

loc_000EA5B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000EA5B8u); RECOMP_ABI_CALL(0x000EA1F0u, sub_000EA1F0); /* call 0x000EA1F0 */

loc_000EA5B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA5C0
 * Original: 0x000EA5C0 - 0x000EA741 (385 bytes, 135 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA5C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EA5C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(ebp + 4) = eax;
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    eax = ecx;
    if ((ecx == 0)) goto loc_000EA73C; /* je: equal / zero */

loc_000EA5DF: ;
    edi = MEM32(eax + 0x54);
    eax = eax + 0x2C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000EA6FF; /* je: equal / zero */

loc_000EA5F1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA6FF; /* je: equal / zero */

loc_000EA5F9: ;
    /* nop */

loc_000EA600: ;
    esi = edi + 4;
    PUSH32(esp, 0x3C8690);
    ecx = esi;
    PUSH32(esp, 0x000EA60Fu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000EA60F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EA615u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000EA615: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA656; /* jne: not equal / not zero */

loc_000EA61C: ;
    ecx = edi + 0x14;
    PUSH32(esp, 0x000EA624u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000EA624: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA64E; /* je: equal / zero */

loc_000EA62A: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA64E; /* je: equal / zero */

loc_000EA62E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EA634u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000EA634: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EA63Fu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000EA63F: ;
    ecx = eax;
    PUSH32(esp, 0x000EA646u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000EA646: ;
    MEM32(ebp + 0xC) = eax;
    goto loc_000EA6EE;

loc_000EA64E: ;
    MEM32(ebp + 0xC) = ebx;
    goto loc_000EA6EE;

loc_000EA656: ;
    PUSH32(esp, 0x3D8B84);
    ecx = esi;
    PUSH32(esp, 0x000EA662u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000EA662: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EA668u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000EA668: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA6A3; /* jne: not equal / not zero */

loc_000EA66F: ;
    ecx = edi + 0x14;
    PUSH32(esp, 0x000EA677u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000EA677: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA69E; /* je: equal / zero */

loc_000EA67D: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA69E; /* je: equal / zero */

loc_000EA681: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EA687u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000EA687: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EA692u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000EA692: ;
    ecx = eax;
    PUSH32(esp, 0x000EA699u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000EA699: ;
    MEM32(ebp + 0x14) = eax;
    goto loc_000EA6EE;

loc_000EA69E: ;
    MEM32(ebp + 0x14) = ebx;
    goto loc_000EA6EE;

loc_000EA6A3: ;
    PUSH32(esp, 0x3D3B0C);
    ecx = esi;
    PUSH32(esp, 0x000EA6AFu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000EA6AF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EA6B5u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000EA6B5: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA6EE; /* jne: not equal / not zero */

loc_000EA6BC: ;
    ecx = edi + 0x14;
    PUSH32(esp, 0x000EA6C4u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000EA6C4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA6EB; /* je: equal / zero */

loc_000EA6CA: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA6EB; /* je: equal / zero */

loc_000EA6CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EA6D4u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000EA6D4: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EA6DFu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000EA6DF: ;
    ecx = eax;
    PUSH32(esp, 0x000EA6E6u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000EA6E6: ;
    MEM32(ebp + 0x10) = eax;
    goto loc_000EA6EE;

loc_000EA6EB: ;
    MEM32(ebp + 0x10) = ebx;

loc_000EA6EE: ;
    ecx = edi;
    PUSH32(esp, 0x000EA6F5u); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_000EA6F5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA600; /* jne: not equal / not zero */

loc_000EA6FF: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA71B; /* jne: not equal / not zero */

loc_000EA706: ;
    eax = 0x3C806C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EA711u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000EA711: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000EA71B: ;
    PUSH32(esp, 0x000EA720u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000EA720: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x4008;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EA737u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000EA737: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000EA73C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA750
 * Original: 0x000EA750 - 0x000EA8D7 (391 bytes, 139 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA750: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3D8BC0);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000EA763u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000EA763: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA7A7; /* jne: not equal / not zero */

loc_000EA76A: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA799; /* je: equal / zero */

loc_000EA772: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA799; /* je: equal / zero */

loc_000EA777: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EA77Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000EA77D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EA788u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000EA788: ;
    ecx = eax;
    PUSH32(esp, 0x000EA78Fu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000EA78F: ;
    MEM32(esi + 0x10) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000EA799: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000EA7A7: ;
    PUSH32(esp, 0x3CC6BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EA7B2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000EA7B2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA7CD; /* jne: not equal / not zero */

loc_000EA7B9: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x000EA7C6u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000EA7C6: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000EA7CD: ;
    PUSH32(esp, 0x3D8BB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EA7D8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000EA7D8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA7F6; /* jne: not equal / not zero */

loc_000EA7DF: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi + 0x130;
    PUSH32(esp, 0x000EA7EFu); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000EA7EF: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000EA7F6: ;
    PUSH32(esp, 0x3D8BA8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EA801u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000EA801: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA832; /* jne: not equal / not zero */

loc_000EA808: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EA812u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000EA812: ;
    SET_LO8(ecx, MEM8(esi + 0x124));
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    MEM8(esi + 0x124) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000EA832: ;
    PUSH32(esp, 0x3D8B9C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EA83Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000EA83D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA86C; /* jne: not equal / not zero */

loc_000EA844: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EA84Eu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000EA84E: ;
    SET_LO8(ecx, MEM8(esi + 0x124));
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x124) = LO8(ecx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000EA86C: ;
    PUSH32(esp, 0x3D67E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EA877u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000EA877: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA8B1; /* jne: not equal / not zero */

loc_000EA87E: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EA88Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000EA88D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x134));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x134) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000EA8B1: ;
    PUSH32(esp, 0x3D8B90);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EA8BCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000EA8BC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA8D0; /* jne: not equal / not zero */

loc_000EA8C3: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esi + 0x14;
    PUSH32(esp, 0x000EA8D0u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000EA8D0: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EA8E0
 * Original: 0x000EA8E0 - 0x000EA937 (87 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA8E0(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EA8E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    eax = eax << 4;
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA902; /* je: equal / zero */

loc_000EA8F8: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00171BB0(); return; /* tail jmp 0x00171BB0 */

loc_000EA902: ;
    eax = MEM32(eax + 0xC);
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA933; /* je: equal / zero */

loc_000EA911: ;
    PUSH32(esp, edi);

loc_000EA912: ;
    edx = eax;
    edx = edx << 4;
    edi = MEM32(edx + ecx + 0x14);
    edx = edx + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA932; /* jne: not equal / not zero */

loc_000EA921: ;
    esi = eax;
    eax = MEM32(edx + 0xC);
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA912; /* jne: not equal / not zero */

loc_000EA932: ;
    POP32(esp, edi);

loc_000EA933: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA940
 * Original: 0x000EA940 - 0x000EA9D3 (147 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA940: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x130);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000EA95Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EA95A: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x16440);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x16440) = ecx;
    MEM32(eax + esi + 0x16928) = MEM32(eax + esi + 0x16928) & edx;
    eax = MEM32(esi + 0x1691C);
    edx = MEM32(esi + 0x16924);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    MEM32(esi + 0x1691C) = eax;
    MEM32(esi + 0x16924) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000EA9B9; /* jl: less (signed <) */

loc_000EA9A8: ;
    MEM32(esi + 0x1691C) = 0;
    eax = 0x12B;
    goto loc_000EA9BA;

loc_000EA9B9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000EA9BA: ;
    MEM32(esi + eax * 4 + 0x16468) = edi;
    eax = MEM32(esi + 0x16950);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x16950) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000EAA50
 * Original: 0x000EAA50 - 0x000EAA9E (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAA50(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    if (_talent_expanded) xml1_talent_registry_clear_bits(g_ecx,3);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EAA50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = (_talent_expanded ? 0xFEu : 0x96u);
    goto loc_000EAA60;

    /* nop */

loc_000EAA60: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000EAA60; /* jne: not equal / not zero */

loc_000EAA6C: ;
    ecx = esi + (_talent_expanded ? 0xFE4u : 0x964u);
    PUSH32(esp, 0x000EAA77u); RECOMP_ABI_CALL(0x000B3CE0u, sub_000B3CE0); /* call 0x000B3CE0 */

loc_000EAA77: ;
    eax = 0; /* xor self */
    ecx = esi + (_talent_expanded ? 0x13ECu : 0xBCCu);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    ecx = esi;
    MEM32(esi + (_talent_expanded ? 0x140Cu : 0xBE0u)) = eax;
    PUSH32(esp, 0x000EAA9Au); RECOMP_ABI_CALL(0x000EA9E0u, xml1_guest_talent_id_pool_construct); /* call 0x000EA9E0 */

loc_000EAA9A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAAA0
 * Original: 0x000EAAA0 - 0x000EAAEE (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EAAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x82;
    goto loc_000EAAB0;

    /* nop */

loc_000EAAB0: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000EAAB0; /* jne: not equal / not zero */

loc_000EAABC: ;
    ecx = esi + 0x824;
    PUSH32(esp, 0x000EAAC7u); RECOMP_ABI_CALL(0x000EA5B0u, sub_000EA5B0); /* call 0x000EA5B0 */

loc_000EAAC7: ;
    eax = 0; /* xor self */
    ecx = esi + 0xA3C;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    ecx = esi;
    MEM32(esi + 0xA50) = eax;
    PUSH32(esp, 0x000EAAEAu); RECOMP_ABI_CALL(0x000EA4D0u, sub_000EA4D0); /* call 0x000EA4D0 */

loc_000EAAEA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAAF0
 * Original: 0x000EAAF0 - 0x000EABC7 (215 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAAF0(void)
{

loc_000EAAF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350ED6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3D8BDC;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x4C) = ecx;
    MEM32(esi + 0x50) = ecx;
    MEM32(esi + 0x54) = ecx;
    MEM32(esi + 0x58) = ecx;
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0x64) = ecx;
    MEM32(esi + 0x68) = ecx;
    MEM32(esi + 0x6C) = ecx;
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    MEM32(esi + 0x78) = ecx;
    MEM32(esi + 0x7C) = ecx;
    MEM32(esi + 0x80) = ecx;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x108) = 0x3C9748;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x120) = eax;
    ecx = esi;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x000EABB5u); RECOMP_ABI_CALL(0x000E2220u, sub_000E2220); /* call 0x000E2220 */

loc_000EABB5: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000EABD0
 * Original: 0x000EABD0 - 0x000EABD7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EABD0(void)
{

loc_000EABD0: ;
    eax = MEM32(ecx + 0xB8);
    esp += 4; return; /* ret */

}

/**
 * sub_000EABE0
 * Original: 0x000EABE0 - 0x000EABE7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EABE0(void)
{

loc_000EABE0: ;
    eax = ecx + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_000EABF0
 * Original: 0x000EABF0 - 0x000EAC06 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EABF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EABF0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EAC10
 * Original: 0x000EAC10 - 0x000EAC19 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC10(void)
{

loc_000EAC10: ;
    SET_LO8(eax, MEM8(ecx + 0x12C));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAC20
 * Original: 0x000EAC20 - 0x000EAC2B (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC20(void)
{

loc_000EAC20: ;
    SET_LO8(eax, MEM8(ecx + 0x12C));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAC30
 * Original: 0x000EAC30 - 0x000EAC3C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC30(void)
{

loc_000EAC30: ;
    SET_LO8(eax, MEM8(ecx + 0x12C));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAC40
 * Original: 0x000EAC40 - 0x000EAC4C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC40(void)
{

loc_000EAC40: ;
    SET_LO8(eax, MEM8(ecx + 0x12C));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAC50
 * Original: 0x000EAC50 - 0x000EAC5C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC50(void)
{

loc_000EAC50: ;
    SET_LO8(eax, MEM8(ecx + 0x12C));
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAC60
 * Original: 0x000EAC60 - 0x000EAC6C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC60(void)
{

loc_000EAC60: ;
    SET_LO8(eax, MEM8(ecx + 0x12C));
    SET_LO8(eax, LO8(eax) >> 5);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAC70
 * Original: 0x000EAC70 - 0x000EAC7C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC70(void)
{

loc_000EAC70: ;
    SET_LO8(eax, MEM8(ecx + 0x12C));
    SET_LO8(eax, LO8(eax) >> 6);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAC80
 * Original: 0x000EAC80 - 0x000EAC8A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC80(void)
{

loc_000EAC80: ;
    SET_LO8(eax, MEM8(ecx + 0x12C));
    SET_LO8(eax, LO8(eax) >> 7);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAC90
 * Original: 0x000EAC90 - 0x000EAC99 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC90(void)
{

loc_000EAC90: ;
    SET_LO8(eax, MEM8(ecx + 0x12D));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EACA0
 * Original: 0x000EACA0 - 0x000EACAB (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EACA0(void)
{

loc_000EACA0: ;
    SET_LO8(eax, MEM8(ecx + 0x12D));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EACB0
 * Original: 0x000EACB0 - 0x000EACBC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EACB0(void)
{

loc_000EACB0: ;
    SET_LO8(eax, MEM8(ecx + 0x12D));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EACC0
 * Original: 0x000EACC0 - 0x000EACCC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EACC0(void)
{

loc_000EACC0: ;
    SET_LO8(eax, MEM8(ecx + 0x12D));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}
