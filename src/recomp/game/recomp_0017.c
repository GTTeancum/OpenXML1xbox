#include "audio/raven_loop_sound_runtime.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "diagnostics/raven_operand_trace.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/actors/raven_ai_modes.h"
/**
 * X-Men Legends - Recompiled code chunk 17
 * Functions: 250 (0x000C9C80 - 0x000D6A90)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/**
 * sub_000C9C80
 * Original: 0x000C9C80 - 0x000C9C97 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9C80(void)
{

loc_000C9C80: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x360) = ecx;
    MEM32(eax + 0x364) = ecx;
    MEM32(eax + 0x368) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9CA0
 * Original: 0x000C9CA0 - 0x000C9CB9 (25 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9CA0: ;
    edx = MEM32(ecx + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C9CB6; /* je: equal / zero */

loc_000C9CA9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C9CB5; /* jge: greater or equal (signed >=) */

loc_000C9CB2: ;
    eax = MEM32(ecx + esi * 4);

loc_000C9CB5: ;
    POP32(esp, esi);

loc_000C9CB6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C9CC0
 * Original: 0x000C9CC0 - 0x000C9CCC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9CC0(void)
{

loc_000C9CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C9CC8u); RECOMP_ABI_CALL(0x000C9AE0u, sub_000C9AE0); /* call 0x000C9AE0 */

loc_000C9CC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9CD0
 * Original: 0x000C9CD0 - 0x000C9D32 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9CD0: ;
    edx = ecx;
    eax = MEM32(edx + 0x3068);
    eax = MEM32(edx + eax * 4 + 0x2460);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x3070;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x3068);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x300 (32-bit) */
    MEM32(edx + 0x3068) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000C9D1C; /* jl: less (signed <) */

loc_000C9D12: ;
    MEM32(edx + 0x3068) = 0;

loc_000C9D1C: ;
    MEM32(edx + 0x306C) = MEM32(edx + 0x306C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x306C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x30D0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x30D0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9D40
 * Original: 0x000C9D40 - 0x000C9D9F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9D40: ;
    edx = ecx;
    eax = MEM32(edx + 0x18C);
    eax = MEM32(edx + eax * 4 + 0x104);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x194;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x18C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(edx + 0x18C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000C9D89; /* jl: less (signed <) */

loc_000C9D7F: ;
    MEM32(edx + 0x18C) = 0;

loc_000C9D89: ;
    MEM32(edx + 0x190) = MEM32(edx + 0x190) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x190)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x198);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x198) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9DA0
 * Original: 0x000C9DA0 - 0x000C9DFF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9DA0: ;
    edx = ecx;
    eax = MEM32(edx + 0xCC);
    eax = MEM32(edx + eax * 4 + 0x84);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xD4;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0xCC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    MEM32(edx + 0xCC) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000C9DE9; /* jl: less (signed <) */

loc_000C9DDF: ;
    MEM32(edx + 0xCC) = 0;

loc_000C9DE9: ;
    MEM32(edx + 0xD0) = MEM32(edx + 0xD0) - 1;
    _fa = (uint32_t)(MEM32(edx + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xD8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xD8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9E00
 * Original: 0x000C9E00 - 0x000C9E3D (61 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9E00: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000C9E33; /* je: equal / zero */

loc_000C9E0D: ;
    edx = MEM32(esp + 0xC);
    edi = MEM32(edx);

loc_000C9E13: ;
    edx = eax;
    edx = edx << 4;
    esi = MEM32(edx + ecx + 0x18);
    edx = edx + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C9E27; /* jbe: below or equal (unsigned <=) */

loc_000C9E22: ;
    eax = MEM32(edx + 0x10);
    goto loc_000C9E2C;

loc_000C9E27: ;
    if (CMP_AE(_fa, _fb)) goto loc_000C9E38; /* jae: above or equal (unsigned >=) */

loc_000C9E29: ;
    eax = MEM32(edx + 0x14);

loc_000C9E2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9E13; /* jne: not equal / not zero */

loc_000C9E33: ;
    eax = 0x3FFFFFFF;

loc_000C9E38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C9E40
 * Original: 0x000C9E40 - 0x000C9EA2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9E40: ;
    edx = ecx;
    eax = MEM32(edx + 0x6BDC);
    eax = MEM32(edx + eax * 4 + 0x64A4);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x6BE4;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x6BDC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1CC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1CC (32-bit) */
    MEM32(edx + 0x6BDC) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000C9E8C; /* jl: less (signed <) */

loc_000C9E82: ;
    MEM32(edx + 0x6BDC) = 0;

loc_000C9E8C: ;
    MEM32(edx + 0x6BE0) = MEM32(edx + 0x6BE0) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x6BE0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x6C20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x6C20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9EB0
 * Original: 0x000C9EB0 - 0x000C9F12 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9EB0: ;
    edx = ecx;
    eax = MEM32(edx + 0x11A0C);
    eax = MEM32(edx + eax * 4 + 0x11804);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x11A14;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x11A0C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    MEM32(edx + 0x11A0C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000C9EFC; /* jl: less (signed <) */

loc_000C9EF2: ;
    MEM32(edx + 0x11A0C) = 0;

loc_000C9EFC: ;
    MEM32(edx + 0x11A10) = MEM32(edx + 0x11A10) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x11A10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x11A24);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x11A24) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9F20
 * Original: 0x000C9F20 - 0x000C9F7F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9F20: ;
    edx = ecx;
    eax = MEM32(edx + 0x42CC);
    eax = MEM32(edx + eax * 4 + 0x4264);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x42D4;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x42CC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    MEM32(edx + 0x42CC) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000C9F69; /* jl: less (signed <) */

loc_000C9F5F: ;
    MEM32(edx + 0x42CC) = 0;

loc_000C9F69: ;
    MEM32(edx + 0x42D0) = MEM32(edx + 0x42D0) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x42D0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x42D8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x42D8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9F80
 * Original: 0x000C9F80 - 0x000C9FDA (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9F80: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xC8) = esi;
    MEM32(ecx + 0xCC) = esi;
    MEM32(ecx + 0xD0) = esi;
    edx = 0; /* xor self */
    goto loc_000C9FA0;

    /* nop */

loc_000C9FA0: ;
    eax = MEM32(ecx + 0xC8);
    edi = MEM32(ecx + 0xD0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    MEM32(ecx + 0xC8) = eax;
    MEM32(ecx + 0xD0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000C9FCC; /* jl: less (signed <) */

loc_000C9FBF: ;
    MEM32(ecx + 0xC8) = esi;
    eax = 0x17;
    goto loc_000C9FCD;

loc_000C9FCC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000C9FCD: ;
    MEM32(ecx + eax * 4 + 0x64) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C9FA0; /* jl: less (signed <) */

loc_000C9FD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9FE0
 * Original: 0x000C9FE0 - 0x000CA056 (118 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9FE0: ;
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
    edi = MEM32(ecx + eax + 0x60);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0x60) = edi;
    MEM32(ecx + eax + 0xD4) = MEM32(ecx + eax + 0xD4) & edx;
    ecx = MEM32(eax + 0xC8);
    edx = MEM32(eax + 0xD0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    MEM32(eax + 0xC8) = ecx;
    MEM32(eax + 0xD0) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000CA03F; /* jl: less (signed <) */

loc_000CA02E: ;
    MEM32(eax + 0xC8) = 0;
    ecx = 0x17;
    goto loc_000CA040;

loc_000CA03F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA040: ;
    MEM32(eax + ecx * 4 + 0x64) = esi;
    ecx = MEM32(eax + 0xD8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0xD8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CA060
 * Original: 0x000CA060 - 0x000CA12A (202 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA060(void)
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

loc_000CA060: ;
    esp = esp - 0xC;
    eax = MEM32(0x47A050);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx + 0xC4);
    edx = edi + edi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CA11A; /* jge: greater or equal (signed >=) */

loc_000CA083: ;
    PUSH32(esp, esi);
    esi = edi + edi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CA0A3; /* jge: greater or equal (signed >=) */

loc_000CA08C: ;
    eax = edi;
    eax = eax << 4;
    fp_push(MEMF(eax + ecx + 0x10)); /* fld float */
    eax = eax + ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CA0A3; /* je: equal / zero */

loc_000CA0A1: ;
    edx = esi;

loc_000CA0A3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA119; /* je: equal / zero */

loc_000CA0A7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* nop */

loc_000CA0B0: ;
    fp_push(MEMF(ecx + edi * 8)); /* fld float */
    esi = ecx + edi * 8;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + edx * 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + edx*8] */
    edi = ecx + edx * 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CA117; /* jne: not equal / not zero */

loc_000CA0C3: ;
    ebx = edi;
    eax = MEM32(ebx);
    ebx = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ebx;
    ebx = esi;
    ebp = MEM32(ebx);
    MEM32(edi) = ebp;
    ebx = MEM32(ebx + 4);
    MEM32(edi + 4) = ebx;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = eax;
    eax = MEM32(ecx + 0xC4);
    esi = edx + edx + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    edi = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000CA117; /* jge: greater or equal (signed >=) */

loc_000CA0F3: ;
    ebx = edx + edx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CA111; /* jge: greater or equal (signed >=) */

loc_000CA0FB: ;
    edx = edx << 4;
    fp_push(MEMF(edx + ecx + 0x10)); /* fld float */
    eax = edx + ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 8] */
    edx = ebx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CA113; /* jne: not equal / not zero */

loc_000CA111: ;
    edx = esi;

loc_000CA113: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA0B0; /* jne: not equal / not zero */

loc_000CA117: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000CA119: ;
    POP32(esp, esi);

loc_000CA11A: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    PUSH32(esp, 0x000CA124u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000CA124: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CA130
 * Original: 0x000CA130 - 0x000CA18D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA130: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x388) = esi;
    MEM32(ecx + 0x38C) = esi;
    MEM32(ecx + 0x390) = esi;
    edx = 0; /* xor self */
    goto loc_000CA150;

    /* nop */

loc_000CA150: ;
    eax = MEM32(ecx + 0x388);
    edi = MEM32(ecx + 0x390);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(ecx + 0x388) = eax;
    MEM32(ecx + 0x390) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA17C; /* jl: less (signed <) */

loc_000CA16F: ;
    MEM32(ecx + 0x388) = esi;
    eax = 0x1F;
    goto loc_000CA17D;

loc_000CA17C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA17D: ;
    MEM32(ecx + eax * 4 + 0x304) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA150; /* jl: less (signed <) */

loc_000CA18A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA190
 * Original: 0x000CA190 - 0x000CA1F2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA190: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x8808) = esi;
    MEM32(ecx + 0x880C) = esi;
    MEM32(ecx + 0x8810) = esi;
    edx = 0; /* xor self */
    goto loc_000CA1B0;

    /* nop */

loc_000CA1B0: ;
    eax = MEM32(ecx + 0x8808);
    edi = MEM32(ecx + 0x8810);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(ecx + 0x8808) = eax;
    MEM32(ecx + 0x8810) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA1DE; /* jl: less (signed <) */

loc_000CA1D1: ;
    MEM32(ecx + 0x8808) = esi;
    eax = 0x7F;
    goto loc_000CA1DF;

loc_000CA1DE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA1DF: ;
    MEM32(ecx + eax * 4 + 0x8604) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA1B0; /* jl: less (signed <) */

loc_000CA1EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA200
 * Original: 0x000CA200 - 0x000CA262 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA200: ;
    edx = ecx;
    eax = MEM32(edx + 0x10D8);
    eax = MEM32(edx + eax * 4 + 0xD74);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x10E0;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x10D8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD7 (32-bit) */
    MEM32(edx + 0x10D8) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA24C; /* jl: less (signed <) */

loc_000CA242: ;
    MEM32(edx + 0x10D8) = 0;

loc_000CA24C: ;
    MEM32(edx + 0x10DC) = MEM32(edx + 0x10DC) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x10DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x10FC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x10FC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA270
 * Original: 0x000CA270 - 0x000CA27C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA270(void)
{

loc_000CA270: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000CA278u); RECOMP_ABI_CALL(0x000C9C80u, sub_000C9C80); /* call 0x000C9C80 */

loc_000CA278: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA280
 * Original: 0x000CA280 - 0x000CA30E (142 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = edi + edi * 2;
    edx = MEM32(esi + eax * 4);
    ecx = esi + eax * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000CA295u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CA295: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x2400);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x2400) = ecx;
    MEM32(eax + esi + 0x3070) = MEM32(eax + esi + 0x3070) & edx;
    eax = MEM32(esi + 0x3064);
    edx = MEM32(esi + 0x306C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x300 (32-bit) */
    MEM32(esi + 0x3064) = eax;
    MEM32(esi + 0x306C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000CA2F4; /* jl: less (signed <) */

loc_000CA2E3: ;
    MEM32(esi + 0x3064) = 0;
    eax = 0x2FF;
    goto loc_000CA2F5;

loc_000CA2F4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA2F5: ;
    MEM32(esi + eax * 4 + 0x2460) = edi;
    eax = MEM32(esi + 0x30D0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x30D0) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CA310
 * Original: 0x000CA310 - 0x000CA33D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA310(void)
{

loc_000CA310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CA319u); RECOMP_ABI_CALL(0x000C9D40u, sub_000C9D40); /* call 0x000C9D40 */

loc_000CA319: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x100;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 8;
    ecx = ecx | edi;
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA340
 * Original: 0x000CA340 - 0x000CA36D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA340(void)
{

loc_000CA340: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CA349u); RECOMP_ABI_CALL(0x000C9DA0u, sub_000C9DA0); /* call 0x000C9DA0 */

loc_000CA349: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x80;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 8;
    ecx = ecx | edi;
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA370
 * Original: 0x000CA370 - 0x000CA3E5 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA370: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x6BE4;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x6BD8);
    edi = MEM32(eax + 0x6BE0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1CC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1CC (32-bit) */
    MEM32(eax + 0x6BD8) = ecx;
    MEM32(eax + 0x6BE0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA3CB; /* jl: less (signed <) */

loc_000CA3BA: ;
    MEM32(eax + 0x6BD8) = 0;
    ecx = 0x1CB;
    goto loc_000CA3CC;

loc_000CA3CB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA3CC: ;
    MEM32(eax + ecx * 4 + 0x64A4) = esi;
    ecx = MEM32(eax + 0x6C20);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x6C20) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CA3F0
 * Original: 0x000CA3F0 - 0x000CA462 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA3F0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x42D4;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x42C8);
    edi = MEM32(eax + 0x42D0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    MEM32(eax + 0x42C8) = ecx;
    MEM32(eax + 0x42D0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA448; /* jl: less (signed <) */

loc_000CA437: ;
    MEM32(eax + 0x42C8) = 0;
    ecx = 0x17;
    goto loc_000CA449;

loc_000CA448: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA449: ;
    MEM32(eax + ecx * 4 + 0x4264) = esi;
    ecx = MEM32(eax + 0x42D8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x42D8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CA470
 * Original: 0x000CA470 - 0x000CA4D2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA470: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x3064) = esi;
    MEM32(ecx + 0x3068) = esi;
    MEM32(ecx + 0x306C) = esi;
    edx = 0; /* xor self */
    goto loc_000CA490;

    /* nop */

loc_000CA490: ;
    eax = MEM32(ecx + 0x3064);
    edi = MEM32(ecx + 0x306C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x300 (32-bit) */
    MEM32(ecx + 0x3064) = eax;
    MEM32(ecx + 0x306C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA4BE; /* jl: less (signed <) */

loc_000CA4B1: ;
    MEM32(ecx + 0x3064) = esi;
    eax = 0x2FF;
    goto loc_000CA4BF;

loc_000CA4BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA4BF: ;
    MEM32(ecx + eax * 4 + 0x2460) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x300 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA490; /* jl: less (signed <) */

loc_000CA4CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA4E0
 * Original: 0x000CA4E0 - 0x000CA53D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA4E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x188) = esi;
    MEM32(ecx + 0x18C) = esi;
    MEM32(ecx + 0x190) = esi;
    edx = 0; /* xor self */
    goto loc_000CA500;

    /* nop */

loc_000CA500: ;
    eax = MEM32(ecx + 0x188);
    edi = MEM32(ecx + 0x190);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(ecx + 0x188) = eax;
    MEM32(ecx + 0x190) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA52C; /* jl: less (signed <) */

loc_000CA51F: ;
    MEM32(ecx + 0x188) = esi;
    eax = 0x1F;
    goto loc_000CA52D;

loc_000CA52C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA52D: ;
    MEM32(ecx + eax * 4 + 0x104) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA500; /* jl: less (signed <) */

loc_000CA53A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA540
 * Original: 0x000CA540 - 0x000CA59D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA540: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xC8) = esi;
    MEM32(ecx + 0xCC) = esi;
    MEM32(ecx + 0xD0) = esi;
    edx = 0; /* xor self */
    goto loc_000CA560;

    /* nop */

loc_000CA560: ;
    eax = MEM32(ecx + 0xC8);
    edi = MEM32(ecx + 0xD0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ecx + 0xC8) = eax;
    MEM32(ecx + 0xD0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA58C; /* jl: less (signed <) */

loc_000CA57F: ;
    MEM32(ecx + 0xC8) = esi;
    eax = 0xF;
    goto loc_000CA58D;

loc_000CA58C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA58D: ;
    MEM32(ecx + eax * 4 + 0x84) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA560; /* jl: less (signed <) */

loc_000CA59A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA5A0
 * Original: 0x000CA5A0 - 0x000CA602 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA5A0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x6BD8) = esi;
    MEM32(ecx + 0x6BDC) = esi;
    MEM32(ecx + 0x6BE0) = esi;
    edx = 0; /* xor self */
    goto loc_000CA5C0;

    /* nop */

loc_000CA5C0: ;
    eax = MEM32(ecx + 0x6BD8);
    edi = MEM32(ecx + 0x6BE0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1CC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1CC (32-bit) */
    MEM32(ecx + 0x6BD8) = eax;
    MEM32(ecx + 0x6BE0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA5EE; /* jl: less (signed <) */

loc_000CA5E1: ;
    MEM32(ecx + 0x6BD8) = esi;
    eax = 0x1CB;
    goto loc_000CA5EF;

loc_000CA5EE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA5EF: ;
    MEM32(ecx + eax * 4 + 0x64A4) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1CC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1CC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA5C0; /* jl: less (signed <) */

loc_000CA5FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA610
 * Original: 0x000CA610 - 0x000CA672 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA610: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x11A08) = esi;
    MEM32(ecx + 0x11A0C) = esi;
    MEM32(ecx + 0x11A10) = esi;
    edx = 0; /* xor self */
    goto loc_000CA630;

    /* nop */

loc_000CA630: ;
    eax = MEM32(ecx + 0x11A08);
    edi = MEM32(ecx + 0x11A10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(ecx + 0x11A08) = eax;
    MEM32(ecx + 0x11A10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA65E; /* jl: less (signed <) */

loc_000CA651: ;
    MEM32(ecx + 0x11A08) = esi;
    eax = 0x7F;
    goto loc_000CA65F;

loc_000CA65E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA65F: ;
    MEM32(ecx + eax * 4 + 0x11804) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA630; /* jl: less (signed <) */

loc_000CA66F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA680
 * Original: 0x000CA680 - 0x000CA6DD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA680: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x42C8) = esi;
    MEM32(ecx + 0x42CC) = esi;
    MEM32(ecx + 0x42D0) = esi;
    edx = 0; /* xor self */
    goto loc_000CA6A0;

    /* nop */

loc_000CA6A0: ;
    eax = MEM32(ecx + 0x42C8);
    edi = MEM32(ecx + 0x42D0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    MEM32(ecx + 0x42C8) = eax;
    MEM32(ecx + 0x42D0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA6CC; /* jl: less (signed <) */

loc_000CA6BF: ;
    MEM32(ecx + 0x42C8) = esi;
    eax = 0x17;
    goto loc_000CA6CD;

loc_000CA6CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA6CD: ;
    MEM32(ecx + eax * 4 + 0x4264) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA6A0; /* jl: less (signed <) */

loc_000CA6DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA6E0
 * Original: 0x000CA6E0 - 0x000CA707 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA6E0(void)
{

loc_000CA6E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x104;
    PUSH32(esp, 0x000CA6EEu); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_000CA6EE: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x154) = eax;
    ecx = esi;
    MEM32(esi + 0x158) = eax;
    PUSH32(esp, 0x000CA703u); RECOMP_ABI_CALL(0x0013C900u, xml1_guest_character_talent_node_pool_construct); /* call 0x0013C900 */

loc_000CA703: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA710
 * Original: 0x000CA710 - 0x000CA772 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA710: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x10D4) = esi;
    MEM32(ecx + 0x10D8) = esi;
    MEM32(ecx + 0x10DC) = esi;
    edx = 0; /* xor self */
    goto loc_000CA730;

    /* nop */

loc_000CA730: ;
    eax = MEM32(ecx + 0x10D4);
    edi = MEM32(ecx + 0x10DC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD7 (32-bit) */
    MEM32(ecx + 0x10D4) = eax;
    MEM32(ecx + 0x10DC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CA75E; /* jl: less (signed <) */

loc_000CA751: ;
    MEM32(ecx + 0x10D4) = esi;
    eax = 0xD6;
    goto loc_000CA75F;

loc_000CA75E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CA75F: ;
    MEM32(ecx + eax * 4 + 0xD74) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA730; /* jl: less (signed <) */

loc_000CA76F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA780
 * Original: 0x000CA780 - 0x000CA7D4 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA780: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0xD7;
    goto loc_000CA790;

    /* nop */

loc_000CA790: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CA790; /* jne: not equal / not zero */

loc_000CA79C: ;
    ecx = esi + 0xD74;
    PUSH32(esp, 0x000CA7A7u); RECOMP_ABI_CALL(0x000CA270u, sub_000CA270); /* call 0x000CA270 */

loc_000CA7A7: ;
    eax = 0; /* xor self */
    ecx = esi + 0x10E0;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    ecx = esi;
    MEM32(esi + 0x10FC) = eax;
    PUSH32(esp, 0x000CA7D0u); RECOMP_ABI_CALL(0x000CA710u, sub_000CA710); /* call 0x000CA710 */

loc_000CA7D0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA7E0
 * Original: 0x000CA7E0 - 0x000CA823 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA7E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x20;
    goto loc_000CA7F0;

    /* nop */

loc_000CA7F0: ;
    MEM8(eax) = 0;
    eax = eax + 0x18;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CA7F0; /* jne: not equal / not zero */

loc_000CA7F9: ;
    ecx = esi + 0x304;
    PUSH32(esp, 0x000CA804u); RECOMP_ABI_CALL(0x00022FE0u, sub_00022FE0); /* call 0x00022FE0 */

loc_000CA804: ;
    MEM32(esi + 0x394) = 0;
    ecx = esi;
    MEM32(esi + 0x398) = 0;
    PUSH32(esp, 0x000CA81Fu); RECOMP_ABI_CALL(0x000CA130u, sub_000CA130); /* call 0x000CA130 */

loc_000CA81F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA830
 * Original: 0x000CA830 - 0x000CA876 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA830: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x10;
    goto loc_000CA840;

    /* nop */

loc_000CA840: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CA840; /* jne: not equal / not zero */

loc_000CA84C: ;
    ecx = esi + 0x104;
    PUSH32(esp, 0x000CA857u); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_000CA857: ;
    MEM32(esi + 0x154) = 0;
    ecx = esi;
    MEM32(esi + 0x158) = 0;
    PUSH32(esp, 0x000CA872u); RECOMP_ABI_CALL(0x0013C900u, xml1_guest_character_talent_node_pool_construct); /* call 0x0013C900 */

loc_000CA872: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA880
 * Original: 0x000CA880 - 0x000CA8CA (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA880: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x80;
    goto loc_000CA890;

    /* nop */

loc_000CA890: ;
    MEM8(eax) = 0;
    eax = eax + 0x10C;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CA890; /* jne: not equal / not zero */

loc_000CA89B: ;
    ecx = esi + 0x8604;
    PUSH32(esp, 0x000CA8A6u); RECOMP_ABI_CALL(0x000145A0u, sub_000145A0); /* call 0x000145A0 */

loc_000CA8A6: ;
    eax = 0; /* xor self */
    ecx = esi + 0x8814;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    ecx = esi;
    MEM32(esi + 0x8824) = eax;
    PUSH32(esp, 0x000CA8C6u); RECOMP_ABI_CALL(0x000CA190u, sub_000CA190); /* call 0x000CA190 */

loc_000CA8C6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA8D0
 * Original: 0x000CA8D0 - 0x000CA8DC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA8D0(void)
{

loc_000CA8D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000CA8D8u); RECOMP_ABI_CALL(0x000C1900u, sub_000C1900); /* call 0x000C1900 */

loc_000CA8D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA8E0
 * Original: 0x000CA8E0 - 0x000CA8FF (31 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA8E0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1E9B8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_000CA8FC; /* jge: greater or equal (signed >=) */

loc_000CA8F2: ;
    eax = edx + edx * 2;
    eax = ecx + eax * 8 + 0x1E62C;

loc_000CA8FC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CA900
 * Original: 0x000CA900 - 0x000CA949 (73 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA900: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1EBA4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CA945; /* jge: greater or equal (signed >=) */

loc_000CA911: ;
    edx = edx << 4;
    esi = MEM32(edx + ecx + 0x1EA58);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = edx + ecx + 0x1EA58;
    if (TEST_NZ(_fa, _fb)) goto loc_000CA92F; /* jne: not equal / not zero */

loc_000CA926: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000CA92F: ;
    PUSH32(esp, 0x000CA934u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000CA934: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_000CA945: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CA950
 * Original: 0x000CA950 - 0x000CA9AA (90 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CA950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA950: ;
    edx = MEM32(ecx + 0x5D4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x300 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA9A7; /* je: equal / zero */

loc_000CA960: ;
    PUSH32(esp, esi);
    esi = ecx + 0x2C7C;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000CA96Fu); RECOMP_ABI_CALL(0x000C9CD0u, sub_000C9CD0); /* call 0x000C9CD0 */

loc_000CA96F: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x2400;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(edx) = MEM32(edx) | edi;
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000CA9A5; /* je: equal / zero */

loc_000CA995: ;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x3D57C4;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

loc_000CA9A5: ;
    eax = 0; /* xor self */

loc_000CA9A7: ;
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000CAA10
 * Original: 0x000CAA10 - 0x000CAA2C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAA10(void)
{

loc_000CAA10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x000CAA28u); RECOMP_ABI_CALL(0x000CA8D0u, sub_000CA8D0); /* call 0x000CA8D0 */

loc_000CAA28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CAA30
 * Original: 0x000CAA30 - 0x000CAA5B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAA30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CAA30: ;
    edx = MEM32(esp + 4);
    edx = edx - ecx;
    edx = edx - 0x2C7C;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 4) = eax;
    ecx = ecx + 0x2C7C;
    g_seh_ebp = ebp; sub_000CA280(); return; /* tail jmp 0x000CA280 */

}

/**
 * sub_000CAA60
 * Original: 0x000CAA60 - 0x000CAAE8 (136 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAA60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CAA60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CAABB; /* jle: less or equal (signed <=) */

loc_000CAA72: ;
    PUSH32(esp, ebp);
    ebp = ebx + 0x2C7C;
    /* nop */

loc_000CAA80: ;
    ecx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CAA91; /* je: equal / zero */

loc_000CAA89: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CAA91; /* jge: greater or equal (signed >=) */

loc_000CAA8D: ;
    eax = MEM32(esi + edi * 4 + 8);

loc_000CAA91: ;
    eax = eax - ebx;
    eax = eax - 0x2C7C;
    ecx = eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000CAAB2u); RECOMP_ABI_CALL(0x000CA280u, sub_000CA280); /* call 0x000CA280 */

loc_000CAAB2: ;
    eax = MEM32(esi + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CAA80; /* jl: less (signed <) */

loc_000CAABA: ;
    POP32(esp, ebp);

loc_000CAABB: ;
    esi = esi - ebx;
    esi = esi - 0x5FC8;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    PUSH32(esp, ecx);
    ecx = ebx + 0x5FC8;
    PUSH32(esp, 0x000CAAE2u); RECOMP_ABI_CALL(0x000CA370u, sub_000CA370); /* call 0x000CA370 */

loc_000CAAE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CAAF0
 * Original: 0x000CAAF0 - 0x000CAB20 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAAF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CAAF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi - ecx;
    esi = esi - 0x27810;
    eax = 0xB92143FBu;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = ecx + 0x27810;
    g_seh_ebp = ebp; sub_000CA3F0(); return; /* tail jmp 0x000CA3F0 */

}

/**
 * sub_000CAB20
 * Original: 0x000CAB20 - 0x000CAB99 (121 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CAB20: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CAB2Cu); RECOMP_ABI_CALL(0x000C9AF0u, sub_000C9AF0); /* call 0x000C9AF0 */

loc_000CAB2C: ;
    ecx = esi + eax * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CAB3B; /* je: equal / zero */

loc_000CAB33: ;
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx);
    MEM32(ecx) = edx;

loc_000CAB3B: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x60;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    esi = esi + 0xDC;
    ecx = ecx | edi;
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 0xC4);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 8) = edx;
    edx = esi + ecx * 8;
    ecx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    edx = MEM32(esi + 0xC4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000CAB84u); RECOMP_ABI_CALL(0x00014DD0u, sub_00014DD0); /* call 0x00014DD0 */

loc_000CAB84: ;
    eax = MEM32(esi + 0xC4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC4) = eax;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CABA0
 * Original: 0x000CABA0 - 0x000CABC3 (35 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CABA0(void)
{

loc_000CABA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000CABB2u); RECOMP_ABI_CALL(0x0005F790u, sub_0005F790); /* call 0x0005F790 */

loc_000CABB2: ;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 4) = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CABD0
 * Original: 0x000CABD0 - 0x000CABDC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CABD0(void)
{

loc_000CABD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000CABD8u); RECOMP_ABI_CALL(0x000CA6E0u, sub_000CA6E0); /* call 0x000CA6E0 */

loc_000CABD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CABE0
 * Original: 0x000CABE0 - 0x000CAC15 (53 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CABE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CABE0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0x000CABF7u); RECOMP_ABI_CALL(0x0005F450u, sub_0005F450); /* call 0x0005F450 */

loc_000CABF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAC02; /* jne: not equal / not zero */

loc_000CABFE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAC0E; /* je: equal / zero */

loc_000CAC02: ;
    eax = MEM32(esi + eax * 8 + 0x1A8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000CAC0E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CAC20
 * Original: 0x000CAC20 - 0x000CAC5D (61 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CAC20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx + 8;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    edi = 0; /* xor self */
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000CAC3Fu); RECOMP_ABI_CALL(0x000C9E00u, sub_000C9E00); /* call 0x000C9E00 */

loc_000CAC3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAC4A; /* jne: not equal / not zero */

loc_000CAC46: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAC56; /* je: equal / zero */

loc_000CAC4A: ;
    eax = MEM32(esi + eax * 4 + 0x168);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000CAC56: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CAC60
 * Original: 0x000CAC60 - 0x000CAC65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAC60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CAC60: ;
    g_seh_ebp = ebp; sub_000C9910(); return; /* tail jmp 0x000C9910 */

}

/**
 * sub_000CAC70
 * Original: 0x000CAC70 - 0x000CACCF (95 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CAC70: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    PUSH32(esp, 0x000CAC8Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000CAC8A: ;
    edx = MEM32(esi + 0x1E618);
    esi = esi + 0x1E614;
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x1B) = 0;
    PUSH32(esp, 0x000CACABu); RECOMP_ABI_CALL(0x0014EA30u, sub_0014EA30); /* call 0x0014EA30 */

loc_000CACAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CACB6; /* jne: not equal / not zero */

loc_000CACB2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CACC5; /* je: equal / zero */

loc_000CACB6: ;
    eax = MEM32(esi + eax * 4 + 0x3A8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_000CACC5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000CAD40
 * Original: 0x000CAD40 - 0x000CADA1 (97 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CAD40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CAD71; /* je: equal / zero */

loc_000CAD4F: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAD71; /* je: equal / zero */

loc_000CAD53: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CAD59u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000CAD59: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CAD64u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000CAD64: ;
    ecx = eax;
    PUSH32(esp, 0x000CAD6Bu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000CAD6B: ;
    MEM32(esp + 0x10) = eax;
    goto loc_000CAD75;

loc_000CAD71: ;
    MEM32(esp + 0x10) = ebx;

loc_000CAD75: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000CAD85u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000CAD85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAD99; /* je: equal / zero */

loc_000CAD8C: ;
    eax = MEM32(esi + eax * 4 + 0x110C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000CAD99: ;
    eax = xml1_script_extension_descriptor(esi, edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CADB0
 * Original: 0x000CADB0 - 0x000CAE0D (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CADB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CADB0: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 0xCBE8);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1CC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1CC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAE07; /* je: equal / zero */

loc_000CADC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000CADD4u); RECOMP_ABI_CALL(0x000CAA10u, sub_000CAA10); /* call 0x000CAA10 */

loc_000CADD4: ;
    edi = ebp + 0x5FC8;
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x000CADE3u); RECOMP_ABI_CALL(0x000C9E40u, sub_000C9E40); /* call 0x000C9E40 */

loc_000CADE3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edi = edi + eax;
    eax = eax + ebp + 0x5FC8;
    ecx = 0xE;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM8(eax + 0x34) = LO8(ebx);
    MEM8(eax + 0x35) = LO8(ebx);
    POP32(esp, esi);

loc_000CAE07: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_000CAE10
 * Original: 0x000CAE10 - 0x000CAE81 (113 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CAE10: ;
    esp = esp - 0x100;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    PUSH32(esp, 0x000CAE33u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000CAE33: ;
    edx = MEM32(esi + 0x1EBF0);
    esi = esi + 0x1EBEC;
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x10F) = 0;
    PUSH32(esp, 0x000CAE57u); RECOMP_ABI_CALL(0x0013DF30u, sub_0013DF30); /* call 0x0013DF30 */

loc_000CAE57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAE62; /* jne: not equal / not zero */

loc_000CAE5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAE74; /* je: equal / zero */

loc_000CAE62: ;
    eax = MEM32(esi + eax * 4 + 0x8834);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x100;
    esp += 8; return; /* ret 4 */

loc_000CAE74: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x100;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CAE90
 * Original: 0x000CAE90 - 0x000CAEB9 (41 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CAE90: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2BBC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2BBC4), 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAEB6; /* je: equal / zero */

loc_000CAE99: ;
    eax = MEM32(esp + 8);
    edx = esp + 8;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x2BAEC;
    PUSH32(esp, 0x000CAEB6u); RECOMP_ABI_CALL(0x000CAB20u, sub_000CAB20); /* call 0x000CAB20 */

loc_000CAEB6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CAEC0
 * Original: 0x000CAEC0 - 0x000CAEEC (44 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAEC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CAEC0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000CAEE9; /* jl: less (signed <) */

loc_000CAECA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CAEE9; /* jge: greater or equal (signed >=) */

loc_000CAECF: ;
    ecx = MEM32(0x4EBF50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CAEE9; /* je: equal / zero */

loc_000CAED9: ;
    eax = edx * 8 + 0x4EC200;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000CAC20(); return; /* tail jmp 0x000CAC20 */

loc_000CAEE9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CAEF0
 * Original: 0x000CAEF0 - 0x000CAF84 (148 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAEF0(void)
{

loc_000CAEF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000CAEFFu); RECOMP_ABI_CALL(0x0005F630u, sub_0005F630); /* call 0x0005F630 */

loc_000CAEFF: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(edx);
    ecx = eax + eax * 4;
    ecx = ecx << 2;
    edi = ecx + edi + 0xC;
    MEM32(edi) = ebx;
    edx = MEM32(edx + 4);
    MEM32(edi + 4) = edx;
    MEM32(esi + 8) = eax;
    ebx = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x10) = ebx;
    MEM32(ecx + esi + 0x14) = ebx;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000CAF3Au); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000CAF3A: ;
    eax = MEM32(edi);
    eax = eax + eax * 4;
    ecx = MEM32(esi + eax * 4 + 0xC);
    eax = esi + eax * 4 + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    edi = MEM32(edi);
    ecx = edi + edi * 4;
    edx = MEM32(esi + ecx * 4 + 0xC);
    eax = esi + ecx * 4 + 0xC;
    edx = edx & 0x40000000;
    edx = edx | ebx;
    MEM32(eax) = edx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esp + 0x14);
    edx = esi + ecx * 8 + 0x1A8;
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
 * sub_000CAF90
 * Original: 0x000CAF90 - 0x000CB018 (136 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAF90(void)
{

loc_000CAF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000CAF9Eu); RECOMP_ABI_CALL(0x000C9B50u, xml1_guest_character_talent_node_pool_allocate); /* call 0x000C9B50 */

loc_000CAF9E: ;
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
    PUSH32(esp, 0x000CAFD3u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000CAFD3: ;
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
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + 0x168) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CB020
 * Original: 0x000CB020 - 0x000CB0B2 (146 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB020(void)
{

loc_000CB020: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000CB02Fu); RECOMP_ABI_CALL(0x000C9BB0u, sub_000C9BB0); /* call 0x000C9BB0 */

loc_000CB02F: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(edx);
    ecx = eax + eax * 2;
    ecx = ecx << 3;
    edi = ecx + edi + 0xC;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    MEM32(esi + 8) = eax;
    ebx = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x10) = ebx;
    MEM32(ecx + esi + 0x14) = ebx;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000CB070u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000CB070: ;
    eax = MEM32(edi);
    eax = eax + eax * 2;
    ecx = MEM32(esi + eax * 8 + 0xC);
    eax = esi + eax * 8 + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    edi = MEM32(edi);
    ecx = edi + edi * 2;
    edx = MEM32(esi + ecx * 8 + 0xC);
    eax = esi + ecx * 8 + 0xC;
    edx = edx & 0x40000000;
    edx = edx | ebx;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + 0x3A8) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CB0C0
 * Original: 0x000CB0C0 - 0x000CB151 (145 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB0C0(void)
{

loc_000CB0C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000CB0CFu); RECOMP_ABI_CALL(0x000C9C10u, sub_000C9C10); /* call 0x000C9C10 */

loc_000CB0CF: ;
    esi = MEM32(esp + 0x10);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10C);
    edi = edx + edi + 0xC;
    ecx = 0x40;
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
    PUSH32(esp, 0x000CB109u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000CB109: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    ecx = MEM32(eax + ebx + 0xC);
    eax = eax + ebx + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    edx = MEM32(ecx + ebx + 0xC);
    eax = ecx + ebx + 0xC;
    edx = edx & 0x40000000;
    edx = edx | edi;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 8);
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + ecx * 4 + 0x8834) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CB160
 * Original: 0x000CB160 - 0x000CB1EC (140 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB160(void)
{

loc_000CB160: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000CB16Fu); RECOMP_ABI_CALL(0x0005F630u, sub_0005F630); /* call 0x0005F630 */

loc_000CB16F: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(edx);
    ecx = eax + eax * 4;
    ecx = ecx << 2;
    edi = ecx + edi + 0xC;
    MEM32(edi) = ebx;
    edx = MEM32(edx + 4);
    MEM32(edi + 4) = edx;
    MEM32(esi + 8) = eax;
    ebx = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x10) = ebx;
    MEM32(ecx + esi + 0x14) = ebx;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000CB1AAu); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000CB1AA: ;
    eax = MEM32(edi);
    eax = eax + eax * 4;
    ecx = MEM32(esi + eax * 4 + 0xC);
    eax = esi + eax * 4 + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    edi = MEM32(edi);
    ecx = edi + edi * 4;
    edx = MEM32(esi + ecx * 4 + 0xC);
    eax = esi + ecx * 4 + 0xC;
    edx = edx & 0x40000000;
    edx = edx | ebx;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + 0x1A8) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CB1F0
 * Original: 0x000CB1F0 - 0x000CB240 (80 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB1F0(void)
{

loc_000CB1F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xCAA10);
    PUSH32(esp, 0x1CC);
    esi = ecx;
    PUSH32(esp, 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB20Bu); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_000CB20B: ;
    edx = 0; /* xor self */
    MEM32(esi + 0x6BD8) = edx;
    MEM32(esi + 0x6BDC) = edx;
    MEM32(esi + 0x6BE0) = edx;
    eax = 0; /* xor self */
    ecx = 0xF;
    edi = esi + 0x6BE4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x6C20) = edx;
    PUSH32(esp, 0x000CB23Bu); RECOMP_ABI_CALL(0x000CA5A0u, sub_000CA5A0); /* call 0x000CA5A0 */

loc_000CB23B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CB240
 * Original: 0x000CB240 - 0x000CB263 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB240(void)
{

loc_000CB240: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3D581C;
    PUSH32(esp, 0x000CB25Fu); RECOMP_ABI_CALL(0x000CABD0u, sub_000CABD0); /* call 0x000CABD0 */

loc_000CB25F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CB270
 * Original: 0x000CB270 - 0x000CB28B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB270: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax << 4;
    eax = MEM32(eax + ecx + 0x18);
    edx = edx << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + ecx + 0x18) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CB290
 * Original: 0x000CB290 - 0x000CB2AB (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB290: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax << 4;
    edx = edx << 4;
    edx = MEM32(edx + ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + ecx + 0x18) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000CB330
 * Original: 0x000CB330 - 0x000CB338 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB330: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000CB340(); return; /* tail jmp 0x000CB340 */

}

/**
 * sub_000CB340
 * Original: 0x000CB340 - 0x000CB3B5 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB340: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x10E0;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x10D4);
    edi = MEM32(eax + 0x10DC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD7 (32-bit) */
    MEM32(eax + 0x10D4) = ecx;
    MEM32(eax + 0x10DC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CB39B; /* jl: less (signed <) */

loc_000CB38A: ;
    MEM32(eax + 0x10D4) = 0;
    ecx = 0xD6;
    goto loc_000CB39C;

loc_000CB39B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CB39C: ;
    MEM32(eax + ecx * 4 + 0xD74) = esi;
    ecx = MEM32(eax + 0x10FC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x10FC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CB3C0
 * Original: 0x000CB3C0 - 0x000CB3CE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB3C0(void)
{

loc_000CB3C0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = ecx + eax * 8 + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CB3D0
 * Original: 0x000CB3D0 - 0x000CB3D8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB3D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB3D0: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000CB3E0(); return; /* tail jmp 0x000CB3E0 */

}

/**
 * sub_000CB3E0
 * Original: 0x000CB3E0 - 0x000CB452 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB3E0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x394;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x388);
    edi = MEM32(eax + 0x390);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(eax + 0x388) = ecx;
    MEM32(eax + 0x390) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CB438; /* jl: less (signed <) */

loc_000CB427: ;
    MEM32(eax + 0x388) = 0;
    ecx = 0x1F;
    goto loc_000CB439;

loc_000CB438: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CB439: ;
    MEM32(eax + ecx * 4 + 0x304) = esi;
    ecx = MEM32(eax + 0x398);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x398) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CB460
 * Original: 0x000CB460 - 0x000CB48D (45 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB460: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10C);
    eax = eax + ecx + 0x18;
    ecx = edx + ecx + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CB482u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CB482: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CB490
 * Original: 0x000CB490 - 0x000CB498 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB490(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB490: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000CB4A0(); return; /* tail jmp 0x000CB4A0 */

}

/**
 * sub_000CB4A0
 * Original: 0x000CB4A0 - 0x000CB515 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB4A0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x8814;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x8808);
    edi = MEM32(eax + 0x8810);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    MEM32(eax + 0x8808) = ecx;
    MEM32(eax + 0x8810) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CB4FB; /* jl: less (signed <) */

loc_000CB4EA: ;
    MEM32(eax + 0x8808) = 0;
    ecx = 0x7F;
    goto loc_000CB4FC;

loc_000CB4FB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CB4FC: ;
    MEM32(eax + ecx * 4 + 0x8604) = esi;
    ecx = MEM32(eax + 0x8824);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x8824) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CB520
 * Original: 0x000CB520 - 0x000CB525 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB520(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB520: ;
    g_seh_ebp = ebp; sub_000C9780(); return; /* tail jmp 0x000C9780 */

}

/**
 * sub_000CB530
 * Original: 0x000CB530 - 0x000CB535 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB530(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB530: ;
    g_seh_ebp = ebp; sub_000C9820(); return; /* tail jmp 0x000C9820 */

}

/**
 * sub_000CB540
 * Original: 0x000CB540 - 0x000CB545 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB540(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB540: ;
    g_seh_ebp = ebp; sub_000C9A00(); return; /* tail jmp 0x000C9A00 */

}

/**
 * sub_000CB550
 * Original: 0x000CB550 - 0x000CB6D9 (393 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB550(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB550: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x27630;
    edi = 0x3FFFFFFF;
    MEM32(esi + 0x27628) = edi;
    ebx = 0; /* xor self */
    MEM32(ecx + 0x198) = ebx;
    MEM32(ecx + 0x194) = ebx;
    PUSH32(esp, 0x000CB57Du); RECOMP_ABI_CALL(0x0005F5B0u, sub_0005F5B0); /* call 0x0005F5B0 */

loc_000CB57D: ;
    MEM32(esi + 0x1EBF0) = edi;
    ecx = esi + 0x1EBF8;
    MEM32(ecx + 0x8824) = ebx;
    eax = 0; /* xor self */
    edx = ecx + 0x8814;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x000CB5A7u); RECOMP_ABI_CALL(0x000CA190u, sub_000CA190); /* call 0x000CA190 */

loc_000CB5A7: ;
    ecx = esi + 0x27810;
    MEM32(ecx + 0x42D8) = ebx;
    MEM32(ecx + 0x42D4) = ebx;
    PUSH32(esp, 0x000CB5BEu); RECOMP_ABI_CALL(0x000CA680u, sub_000CA680); /* call 0x000CA680 */

loc_000CB5BE: ;
    edi = esi + 0x2BAEC;
    MEM32(edi + 0xD8) = ebx;
    ecx = edi;
    MEM32(edi + 0xD4) = ebx;
    PUSH32(esp, 0x000CB5D7u); RECOMP_ABI_CALL(0x000C9A00u, sub_000C9A00); /* call 0x000C9A00 */

loc_000CB5D7: ;
    ecx = edi;
    PUSH32(esp, 0x000CB5DEu); RECOMP_ABI_CALL(0x000C9F80u, sub_000C9F80); /* call 0x000C9F80 */

loc_000CB5DE: ;
    MEM32(edi + 0x1A0) = ebx;
    ecx = esi + 0xCBEC;
    MEM32(ecx + 0x11A24) = ebx;
    eax = 0; /* xor self */
    edx = ecx + 0x11A14;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x000CB608u); RECOMP_ABI_CALL(0x000CA610u, sub_000CA610); /* call 0x000CA610 */

loc_000CB608: ;
    edx = esi + 0x5FC8;
    eax = 0; /* xor self */
    edi = edx + 0x6BE4;
    MEM32(edx + 0x6C20) = ebx;
    ecx = 0xF;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    PUSH32(esp, 0x000CB62Au); RECOMP_ABI_CALL(0x000CA5A0u, sub_000CA5A0); /* call 0x000CA5A0 */

loc_000CB62A: ;
    ebp = esi + 0x2C7C;
    eax = 0; /* xor self */
    MEM32(ebp + 0x30D0) = ebx;
    ecx = 0x18;
    edi = ebp + 0x3070;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebp;
    PUSH32(esp, 0x000CB64Cu); RECOMP_ABI_CALL(0x000C9780u, sub_000C9780); /* call 0x000C9780 */

loc_000CB64C: ;
    ecx = ebp;
    PUSH32(esp, 0x000CB653u); RECOMP_ABI_CALL(0x000CA470u, sub_000CA470); /* call 0x000CA470 */

loc_000CB653: ;
    eax = 1;
    edi = esi + 0x146C;
    PUSH32(esp, eax);
    MEM8(edi + 0x1800) = LO8(ebx);
    MEM32(edi + 0x1804) = eax;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    MEM32(edi + 0x1808) = edi;
    MEM32(edi + 0x180C) = eax;
    PUSH32(esp, 0x000CB682u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000CB682: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x3D589C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(edi) = LO8(ebx);
    PUSH32(esp, 0x000CB698u); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CB698: ;
    ecx = MEM32(eax);
    MEM32(0x4EBFE0) = ecx;
    edx = MEM32(eax + 4);
    PUSH32(esp, 0x3D5890);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(0x4EBFE4) = edx;
    PUSH32(esp, 0x000CB6BAu); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CB6BA: ;
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x4EC070) = ecx;
    edx = MEM32(eax + 4);
    POP32(esp, ebp);
    MEM32(0x4EBF50) = ebx;
    MEM32(0x4EC074) = edx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB6E0
 * Original: 0x000CB6E0 - 0x000CB729 (73 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB6E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB6E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x1E620;
    MEM32(esi + 0x1E618) = 0x3FFFFFFF;
    edi = 0; /* xor self */
    MEM32(ecx + 0x398) = edi;
    MEM32(ecx + 0x394) = edi;
    PUSH32(esp, 0x000CB707u); RECOMP_ABI_CALL(0x000CA130u, sub_000CA130); /* call 0x000CA130 */

loc_000CB707: ;
    esi = esi + 0x5D50;
    MEM32(esi + 0x198) = edi;
    ecx = esi;
    MEM32(esi + 0x194) = edi;
    PUSH32(esp, 0x000CB720u); RECOMP_ABI_CALL(0x000C9820u, sub_000C9820); /* call 0x000C9820 */

loc_000CB720: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000CA4E0(); return; /* tail jmp 0x000CA4E0 */

}

/**
 * sub_000CB730
 * Original: 0x000CB730 - 0x000CB779 (73 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB730: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x1EA4C;
    MEM32(esi + 0x1EA44) = 0x3FFFFFFF;
    edi = 0; /* xor self */
    MEM32(ecx + 0x158) = edi;
    MEM32(ecx + 0x154) = edi;
    PUSH32(esp, 0x000CB757u); RECOMP_ABI_CALL(0x0013C900u, xml1_guest_character_talent_node_pool_construct); /* call 0x0013C900 */

loc_000CB757: ;
    esi = esi + 0x5EEC;
    MEM32(esi + 0xD8) = edi;
    ecx = esi;
    MEM32(esi + 0xD4) = edi;
    PUSH32(esp, 0x000CB770u); RECOMP_ABI_CALL(0x000C9910u, sub_000C9910); /* call 0x000C9910 */

loc_000CB770: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000CA540(); return; /* tail jmp 0x000CA540 */

}

/**
 * sub_000CB780
 * Original: 0x000CB780 - 0x000CB843 (195 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB780: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000CB83B; /* je: equal / zero */

loc_000CB793: ;
    eax = ebx;
    edx = eax + 1;

loc_000CB798: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CB798; /* jne: not equal / not zero */

loc_000CB79F: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000CB83B; /* jae: above or equal (unsigned >=) */

loc_000CB7AA: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000CB7B3u); RECOMP_ABI_CALL(0x000CAC70u, sub_000CAC70); /* call 0x000CAC70 */

loc_000CB7B3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CB81C; /* jne: not equal / not zero */

loc_000CB7B9: ;
    ecx = MEM32(esi + 0x1E9B8);
    eax = 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB83A; /* je: equal / zero */

loc_000CB7C8: ;
    _fa = (uint32_t)(MEM32(esi + 0x5EE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5EE8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB83A; /* je: equal / zero */

loc_000CB7D0: ;
    ecx = esi + 0x5D50;
    PUSH32(esp, 0x000CB7DBu); RECOMP_ABI_CALL(0x000CA310u, sub_000CA310); /* call 0x000CA310 */

loc_000CB7DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CB7EE; /* je: equal / zero */

loc_000CB7DF: ;
    ecx = MEM32(esp + 0x20);
    MEM32(eax) = 0x3D57F0;
    MEM32(eax + 4) = ecx;
    goto loc_000CB7F0;

loc_000CB7EE: ;
    eax = 0; /* xor self */

loc_000CB7F0: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000CB7FEu); RECOMP_ABI_CALL(0x00088740u, sub_00088740); /* call 0x00088740 */

loc_000CB7FE: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0x1E614;
    PUSH32(esp, 0x000CB813u); RECOMP_ABI_CALL(0x000CB020u, sub_000CB020); /* call 0x000CB020 */

loc_000CB813: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_000CB81C: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000CB828u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CB828: ;
    edx = MEM32(edi);
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000CB832u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CB832: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000CB83Au); RECOMP_ABI_CALL(0x000CAA30u, sub_000CAA30); /* call 0x000CAA30 */

loc_000CB83A: ;
    POP32(esp, edi);

loc_000CB83B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}



/**
 * sub_000CB910
 * Original: 0x000CB910 - 0x000CB996 (134 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB910: ;
    esp = esp - 0x100;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x110);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(0x4EC1FC) = ebx;
    MEM32(0x4EC314) = ebx;
    MEM32(0x4EBF40) = ebx;
    MEM32(0x4EBFDC) = ebx;
    MEM32(0x4EC06C) = ebx;
    MEM32(0x4EBF44) = ebx;
    MEM32(0x4EBF48) = ebx;
    PUSH32(esp, 0x000CB954u); RECOMP_ABI_CALL(0x000CAE10u, sub_000CAE10); /* call 0x000CAE10 */

loc_000CB954: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CB98A; /* jne: not equal / not zero */

loc_000CB958: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CB968u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000CB968: ;
    esp = esp + 0xC;
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi + 0x1EBEC;
    MEM8(esp + 0x113) = LO8(ebx);
    PUSH32(esp, 0x000CB98Au); RECOMP_ABI_CALL(0x000CB0C0u, sub_000CB0C0); /* call 0x000CB0C0 */

loc_000CB98A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x100;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CB9A0
 * Original: 0x000CB9A0 - 0x000CBA3B (155 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB9A0: ;
    eax = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000CB9B8u); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CB9B8: ;
    edx = MEM32(esi + 0x27628);
    edi = esi + 0x27624;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000CB9D1u); RECOMP_ABI_CALL(0x0005F450u, sub_0005F450); /* call 0x0005F450 */

loc_000CB9D1: ;
    _fa = (uint32_t)(MEM32(esi + 0x277C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x277C8), 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB9FE; /* je: equal / zero */

loc_000CB9DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB9FE; /* jne: not equal / not zero */

loc_000CB9E1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB9FE; /* jne: not equal / not zero */

loc_000CB9E5: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000CB9F6u); RECOMP_ABI_CALL(0x000CB160u, sub_000CB160); /* call 0x000CB160 */

loc_000CB9F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_000CB9FE: ;
    eax = MEM32(0x4EBF50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CBA21; /* jne: not equal / not zero */

loc_000CBA07: ;
    ecx = MEM32(esi + 0x2C70);
    eax = MEM32(esp + 0xC);
    ecx = ecx - eax;
    POP32(esp, edi);
    MEM32(esi + 0x2C70) = ecx;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_000CBA21: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x2B8);
    edx = edx - ecx;
    POP32(esp, edi);
    MEM32(eax + 0x2B8) = edx;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CBA40
 * Original: 0x000CBA40 - 0x000CBAC8 (136 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBA40(void)
{

loc_000CBA40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000CBA4Eu); RECOMP_ABI_CALL(0x000CA200u, sub_000CA200); /* call 0x000CA200 */

loc_000CBA4E: ;
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
    PUSH32(esp, 0x000CBA83u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000CBA83: ;
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
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + 0x110C) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CBAD0
 * Original: 0x000CBAD0 - 0x000CBAE2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBAD0(void)
{

loc_000CBAD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000CBAD8u); RECOMP_ABI_CALL(0x000601A0u, sub_000601A0); /* call 0x000601A0 */

loc_000CBAD8: ;
    MEM32(esi) = 0x3D58A8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBAF0
 * Original: 0x000CBAF0 - 0x000CBB02 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBAF0(void)
{

loc_000CBAF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000CBAF8u); RECOMP_ABI_CALL(0x000CB240u, sub_000CB240); /* call 0x000CB240 */

loc_000CBAF8: ;
    MEM32(esi) = 0x3D58C0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBB10
 * Original: 0x000CBB10 - 0x000CBB23 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBB10(void)
{

loc_000CBB10: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x1CC);
    PUSH32(esp, 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CBB22u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000CBB22: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CBB30
 * Original: 0x000CBB30 - 0x000CBC21 (241 bytes, 91 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBB30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CBB30: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CBC1C; /* jle: less or equal (signed <=) */

loc_000CBB40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ebp = ebp + 4;
    ebx = eax;
    /* nop */

loc_000CBB50: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CBB76; /* je: equal / zero */

loc_000CBB57: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBB76; /* je: equal / zero */

loc_000CBB5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CBB62u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000CBB62: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CBB6Du); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000CBB6D: ;
    ecx = eax;
    PUSH32(esp, 0x000CBB74u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000CBB74: ;
    goto loc_000CBB78;

loc_000CBB76: ;
    eax = 0; /* xor self */

loc_000CBB78: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CBBC5; /* je: equal / zero */

loc_000CBB87: ;
    ecx = esi;
    ecx = ecx << 4;
    edx = MEM32(ecx + edi + 0x18);
    ecx = ecx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CBBA8; /* jle: less or equal (signed <=) */

loc_000CBB96: ;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000CBBA6u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000CBBA6: ;
    goto loc_000CBBBE;

loc_000CBBA8: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000CBBBC; /* jge: greater or equal (signed >=) */

loc_000CBBAA: ;
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000CBBBAu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000CBBBA: ;
    goto loc_000CBBBE;

loc_000CBBBC: ;
    eax = esi;

loc_000CBBBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CBC0F; /* jne: not equal / not zero */

loc_000CBBC5: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = ebp + -4;
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000CBBF6; /* je: equal / zero */

loc_000CBBD3: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBBF6; /* je: equal / zero */

loc_000CBBD8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CBBDEu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000CBBDE: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CBBE9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000CBBE9: ;
    ecx = eax;
    PUSH32(esp, 0x000CBBF0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000CBBF0: ;
    MEM32(esp + 0x1C) = eax;
    goto loc_000CBBFE;

loc_000CBBF6: ;
    MEM32(esp + 0x1C) = 0;

loc_000CBBFE: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000CBC0Fu); RECOMP_ABI_CALL(0x000CBA40u, sub_000CBA40); /* call 0x000CBA40 */

loc_000CBC0F: ;
    ebp = ebp + 0x10;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CBB50; /* jne: not equal / not zero */

loc_000CBC19: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000CBC1C: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CBC30
 * Original: 0x000CBC30 - 0x000CBC42 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBC30(void)
{

loc_000CBC30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000CBC38u); RECOMP_ABI_CALL(0x000CBAD0u, sub_000CBAD0); /* call 0x000CBAD0 */

loc_000CBC38: ;
    MEM32(esi) = 0x3D58D8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBC50
 * Original: 0x000CBC50 - 0x000CBC62 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBC50(void)
{

loc_000CBC50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000CBC58u); RECOMP_ABI_CALL(0x000CBAF0u, sub_000CBAF0); /* call 0x000CBAF0 */

loc_000CBC58: ;
    MEM32(esi) = 0x3D58F0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBC70
 * Original: 0x000CBC70 - 0x000CBCCA (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBC70(void)
{

loc_000CBC70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    ecx = edi + 8;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    PUSH32(esp, 0x000CBC84u); RECOMP_ABI_CALL(0x000CBC50u, sub_000CBC50); /* call 0x000CBC50 */

loc_000CBC84: ;
    esi = edi + 0x1B4;
    eax = 1;
    PUSH32(esp, eax);
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x10C) = ebx;
    MEM8(esi + 0x100) = LO8(ebx);
    MEM32(esi + 0x104) = eax;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, esi);
    MEM32(esi + 0x108) = esi;
    MEM32(esi + 0x10C) = eax;
    PUSH32(esp, 0x000CBCBFu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000CBCBF: ;
    esp = esp + 0xC;
    eax = edi;
    POP32(esp, edi);
    MEM8(esi) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBCD0
 * Original: 0x000CBCD0 - 0x000CBD20 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBCD0: ;
    esp = esp - 0x2C4;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x2BAE8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBD18; /* je: equal / zero */

loc_000CBCE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000CBCF1u); RECOMP_ABI_CALL(0x000CBC70u, sub_000CBC70); /* call 0x000CBC70 */

loc_000CBCF1: ;
    edi = ebx + 0x27810;
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x000CBD00u); RECOMP_ABI_CALL(0x000C9F20u, sub_000C9F20); /* call 0x000C9F20 */

loc_000CBD00: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C4);
    edi = edi + eax;
    ecx = 0xB1;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    eax = eax + ebx + 0x27810;
    POP32(esp, esi);

loc_000CBD18: ;
    POP32(esp, ebx);
    esp = esp + 0x2C4;
    esp += 4; return; /* ret */

}

/**
 * sub_000CBD20
 * Original: 0x000CBD20 - 0x000CBD35 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBD20(void)
{

loc_000CBD20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esi) = 0;
    PUSH32(esp, 0x000CBD31u); RECOMP_ABI_CALL(0x000CBC30u, sub_000CBC30); /* call 0x000CBC30 */

loc_000CBD31: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBD40
 * Original: 0x000CBD40 - 0x000CBD93 (83 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBD40: ;
    esp = esp - 0x230;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x1E610);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBD8B; /* je: equal / zero */

loc_000CBD59: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000CBD64u); RECOMP_ABI_CALL(0x000CBD20u, sub_000CBD20); /* call 0x000CBD20 */

loc_000CBD64: ;
    edi = ebx + 0xCBEC;
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x000CBD73u); RECOMP_ABI_CALL(0x000C9EB0u, sub_000C9EB0); /* call 0x000C9EB0 */

loc_000CBD73: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x230);
    edi = edi + eax;
    ecx = 0x8C;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    eax = eax + ebx + 0xCBEC;
    POP32(esp, esi);

loc_000CBD8B: ;
    POP32(esp, ebx);
    esp = esp + 0x230;
    esp += 4; return; /* ret */

}

/**
 * sub_000CBDA0
 * Original: 0x000CBDA0 - 0x000CBDF5 (85 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBDA0(void)
{

loc_000CBDA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xCBD20);
    PUSH32(esp, 0x80);
    esi = ecx;
    PUSH32(esp, 0x230);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CBDBDu); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_000CBDBD: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x11A08) = eax;
    MEM32(esi + 0x11A0C) = eax;
    MEM32(esi + 0x11A10) = eax;
    ecx = 0; /* xor self */
    edx = esi + 0x11A14;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = esi;
    MEM32(esi + 0x11A24) = eax;
    PUSH32(esp, 0x000CBDF1u); RECOMP_ABI_CALL(0x000CA610u, sub_000CA610); /* call 0x000CA610 */

loc_000CBDF1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBE00
 * Original: 0x000CBE00 - 0x000CBE13 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBE00(void)
{

loc_000CBE00: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x2C4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CBE12u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000CBE12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CBE20
 * Original: 0x000CBE20 - 0x000CBE36 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBE20(void)
{

loc_000CBE20: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x230);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CBE35u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000CBE35: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CBE40
 * Original: 0x000CBE40 - 0x000CC120 (736 bytes, 153 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBE40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CBE40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350662);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = ebp | 0xFFFFFFFFu;
    PUSH32(esp, edi);
    ecx = esi + 0xC;
    MEM32(esp + 0x10) = esi;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = ebp;
    MEM32(esi) = 0x3D5834;
    PUSH32(esp, 0x000CBE7Du); RECOMP_ABI_CALL(0x000CA780u, sub_000CA780); /* call 0x000CA780 */

loc_000CBE7D: ;
    edi = esi + 0x146C;
    eax = 1;
    MEM32(esi) = 0x3D5908;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    MEM32(edi + 0x1808) = ebx;
    MEM32(edi + 0x180C) = ebx;
    MEM8(edi + 0x1800) = LO8(ebx);
    MEM32(edi + 0x1804) = eax;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    MEM32(edi + 0x1808) = edi;
    MEM32(edi + 0x180C) = eax;
    PUSH32(esp, 0x000CBEC0u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000CBEC0: ;
    MEM8(edi) = LO8(ebx);
    edx = esi + 0x2C7C;
    eax = 0; /* xor self */
    edi = edx + 0x2400;
    ecx = 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0x3064) = ebx;
    MEM32(edx + 0x3068) = ebx;
    MEM32(edx + 0x306C) = ebx;
    edi = edx + 0x3070;
    ecx = 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    esp = esp + 0xC;
    ecx = edx;
    MEM32(edx + 0x30D0) = ebx;
    PUSH32(esp, 0x000CBF06u); RECOMP_ABI_CALL(0x000CA470u, sub_000CA470); /* call 0x000CA470 */

loc_000CBF06: ;
    ecx = esi + 0x5D50;
    MEM32(ecx + 0x100) = ebx;
    MEM32(ecx + 0x188) = ebx;
    MEM32(ecx + 0x18C) = ebx;
    MEM32(ecx + 0x190) = ebx;
    MEM32(ecx + 0x194) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(ecx + 0x198) = ebx;
    PUSH32(esp, 0x000CBF39u); RECOMP_ABI_CALL(0x000CA4E0u, sub_000CA4E0); /* call 0x000CA4E0 */

loc_000CBF39: ;
    ecx = esi + 0x5EEC;
    MEM32(ecx + 0x80) = ebx;
    MEM32(ecx + 0xC8) = ebx;
    MEM32(ecx + 0xCC) = ebx;
    MEM32(ecx + 0xD0) = ebx;
    MEM32(ecx + 0xD4) = ebx;
    MEM32(ecx + 0xD8) = ebx;
    PUSH32(esp, 0x000CBF68u); RECOMP_ABI_CALL(0x000CA540u, sub_000CA540); /* call 0x000CA540 */

loc_000CBF68: ;
    ecx = esi + 0x5FC8;
    MEM8(esp + 0x24) = 2;
    PUSH32(esp, 0x000CBF78u); RECOMP_ABI_CALL(0x000CB1F0u, sub_000CB1F0); /* call 0x000CB1F0 */

loc_000CBF78: ;
    ecx = esi + 0xCBEC;
    MEM8(esp + 0x24) = 3;
    PUSH32(esp, 0x000CBF88u); RECOMP_ABI_CALL(0x000CBDA0u, sub_000CBDA0); /* call 0x000CBDA0 */

loc_000CBF88: ;
    edi = 0x3FFFFFFF;
    ecx = esi + 0x1E620;
    MEM8(esp + 0x24) = 4;
    MEM32(esi + 0x1E618) = edi;
    MEM32(esi + 0x1E61C) = ebp;
    MEM32(esi + 0x1E614) = 0x3D584C;
    PUSH32(esp, 0x000CBFB3u); RECOMP_ABI_CALL(0x000CA7E0u, sub_000CA7E0); /* call 0x000CA7E0 */

loc_000CBFB3: ;
    MEM32(esi + 0x1E614) = 0x3D5920;
    MEM32(esi + 0x1EA44) = edi;
    MEM32(esi + 0x1EA48) = ebp;
    MEM32(esi + 0x1EA40) = 0x3D5864;
    ecx = esi + 0x1EA4C;
    PUSH32(esp, 0x000CBFDEu); RECOMP_ABI_CALL(0x000CA830u, sub_000CA830); /* call 0x000CA830 */

loc_000CBFDE: ;
    MEM32(esi + 0x1EA40) = 0x3D5938;
    ecx = esi + 0x1EBF8;
    MEM32(esi + 0x1EBF0) = edi;
    MEM32(esi + 0x1EBF4) = ebp;
    MEM32(esi + 0x1EBEC) = 0x3D587C;
    PUSH32(esp, 0x000CC009u); RECOMP_ABI_CALL(0x000CA880u, sub_000CA880); /* call 0x000CA880 */

loc_000CC009: ;
    MEM32(esi + 0x1EBEC) = 0x3D5950;
    ecx = esi + 0x27630;
    MEM32(esi + 0x27628) = edi;
    MEM32(esi + 0x2762C) = ebp;
    MEM32(esi + 0x27624) = 0x3CBF2C;
    PUSH32(esp, 0x000CC034u); RECOMP_ABI_CALL(0x0005F9D0u, sub_0005F9D0); /* call 0x0005F9D0 */

loc_000CC034: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xCBC70);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x2C4);
    edi = esi + 0x27810;
    PUSH32(esp, edi);
    MEM32(esi + 0x27624) = 0x3D5968;
    PUSH32(esp, 0x000CC05Bu); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_000CC05B: ;
    MEM32(edi + 0x42C8) = ebx;
    MEM32(edi + 0x42CC) = ebx;
    MEM32(edi + 0x42D0) = ebx;
    MEM32(edi + 0x42D4) = ebx;
    ecx = edi;
    MEM32(edi + 0x42D8) = ebx;
    PUSH32(esp, 0x000CC080u); RECOMP_ABI_CALL(0x000CA680u, sub_000CA680); /* call 0x000CA680 */

loc_000CC080: ;
    edi = esi + 0x2BAEC;
    MEM32(edi + 0x60) = ebx;
    MEM32(edi + 0xC8) = ebx;
    MEM32(edi + 0xCC) = ebx;
    MEM32(edi + 0xD0) = ebx;
    MEM32(edi + 0xD4) = ebx;
    ecx = edi;
    MEM32(edi + 0xD8) = ebx;
    PUSH32(esp, 0x000CC0AEu); RECOMP_ABI_CALL(0x000C9F80u, sub_000C9F80); /* call 0x000C9F80 */

loc_000CC0AE: ;
    MEM32(edi + 0x1A0) = ebx;
    PUSH32(esp, 0x3D589C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x2C) = 6;
    PUSH32(esp, 0x000CC0CAu); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CC0CA: ;
    ecx = MEM32(eax);
    MEM32(0x4EBFE0) = ecx;
    edx = MEM32(eax + 4);
    PUSH32(esp, 0x3D5890);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(0x4EBFE4) = edx;
    PUSH32(esp, 0x000CC0ECu); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CC0EC: ;
    ecx = MEM32(eax);
    MEM32(0x4EC070) = ecx;
    edx = MEM32(eax + 4);
    PUSH32(esp, 0x3D5620);
    PUSH32(esp, 0x10);
    ecx = esi;
    MEM32(0x4EC074) = edx;
    PUSH32(esp, 0x000CC10Bu); RECOMP_ABI_CALL(0x000CBB30u, sub_000CBB30); /* call 0x000CBB30 */

loc_000CC10B: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}



/**
 * sub_000CC1A0
 * Original: 0x000CC1A0 - 0x000CC1F4 (84 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC1A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000CC1A0: ;
    esp = esp - 0x1C;
    fp_push(MEMF(ecx + 4)); /* fld float */
    eax = MEM32(0x47A050);
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x3C8448);
    eax = esp + 0x14;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM8(esp + 0x1C) = 0;
    PUSH32(esp, 0x000CC1CBu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000CC1CB: ;
    esp = esp + 0x14;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CC1DDu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC1DD: ;
    ecx = eax;
    PUSH32(esp, 0x000CC1E4u); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CC1E4: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp);
    PUSH32(esp, 0x000CC1F0u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000CC1F0: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CC200
 * Original: 0x000CC200 - 0x000CC24F (79 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC200(void)
{

loc_000CC200: ;
    esp = esp - 0x18;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8444);
    ecx = esp + 0x10;
    PUSH32(esp, 0xB);
    PUSH32(esp, ecx);
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x000CC226u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000CC226: ;
    esp = esp + 0x10;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC238u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC238: ;
    ecx = eax;
    PUSH32(esp, 0x000CC23Fu); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CC23F: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp);
    PUSH32(esp, 0x000CC24Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000CC24B: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000CC250
 * Original: 0x000CC250 - 0x000CC2B6 (102 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC250(void)
{

loc_000CC250: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350678);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3D5980;
    MEM32(esp + 0x18) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CC290u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC290: ;
    ecx = eax;
    PUSH32(esp, 0x000CC297u); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CC297: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 4);
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CC2C0
 * Original: 0x000CC2C0 - 0x000CC2C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC2C0(void)
{

loc_000CC2C0: ;
    MEM32(ecx) = 0x3D5798;
    esp += 4; return; /* ret */

}

/**
 * sub_000CC2D0
 * Original: 0x000CC2D0 - 0x000CC303 (51 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC2D0(void)
{

loc_000CC2D0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000CC2DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC2DF: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CC2EAu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC2EA: ;
    ecx = eax;
    PUSH32(esp, 0x000CC2F1u); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CC2F1: ;
    edx = MEM32(eax);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 4);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CC310
 * Original: 0x000CC310 - 0x000CC462 (338 bytes, 123 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CC310: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000CC31Fu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC31F: ;
    ecx = eax;
    PUSH32(esp, 0x000CC326u); RECOMP_ABI_CALL(0x000CAD40u, sub_000CAD40); /* call 0x000CAD40 */

loc_000CC326: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 8) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_000CC45A; /* je: equal / zero */

loc_000CC334: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC352; /* je: equal / zero */

loc_000CC33B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC352; /* je: equal / zero */

loc_000CC340: ;
    edx = eax + 1;

loc_000CC343: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CC343; /* jne: not equal / not zero */

loc_000CC34A: ;
    eax = eax - edx;
    MEM32(esp + 0x10) = eax;
    goto loc_000CC35E;

loc_000CC352: ;
    MEM32(esp + 0x10) = 0;
    eax = MEM32(esp + 0x10);

loc_000CC35E: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC451; /* jne: not equal / not zero */

loc_000CC36C: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CC437; /* jle: less or equal (signed <=) */

loc_000CC377: ;
    esi = esi + 4;
    /* nop */

loc_000CC380: ;
    eax = MEM32(ebp + 0x24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC391; /* je: equal / zero */

loc_000CC389: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CC391; /* jge: greater or equal (signed >=) */

loc_000CC38D: ;
    ecx = MEM32(ebp + ebx * 4 + 8);

loc_000CC391: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CC396u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC396: ;
    edi = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC3C7; /* je: equal / zero */

loc_000CC3A2: ;
    ecx = eax + eax * 4;
    ecx = MEM32(esi + ecx * 4 + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC3C0; /* je: equal / zero */

loc_000CC3B1: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000CC3B9u); RECOMP_ABI_CALL(0x0005F4C0u, sub_0005F4C0); /* call 0x0005F4C0 */

loc_000CC3B9: ;
    /* nop */

loc_000CC3C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC3CB; /* jne: not equal / not zero */

loc_000CC3C7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC3F6; /* je: equal / zero */

loc_000CC3CB: ;
    ecx = MEM32(ebp + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC3DC; /* je: equal / zero */

loc_000CC3D4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CC3DC; /* jge: greater or equal (signed >=) */

loc_000CC3D8: ;
    edx = MEM32(ebp + ebx * 4 + 8);

loc_000CC3DC: ;
    _fa = (uint32_t)(MEM32(esi + eax * 8 + 0x1A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 8 + 0x1A8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC3EC; /* jne: not equal / not zero */

loc_000CC3E5: ;
    edi = MEM32(esi + eax * 8 + 0x1AC);

loc_000CC3EC: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CC3F4u); RECOMP_ABI_CALL(0x0005F790u, sub_0005F790); /* call 0x0005F790 */

loc_000CC3F4: ;
    goto loc_000CC3C0;

loc_000CC3F6: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax + ebx);
    eax = eax + 0xFFFFFF9Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000CC426; /* ja: above (unsigned >) */

loc_000CC409: ;
    ecx = ZX8(MEM8(eax + 0xCC474));
    { uint32_t _jt = MEM32(ecx * 4 + 0xCC464); /* switch: 4 entries, 3 targets */
    if (_jt == 0x000CC417u) goto loc_000CC417;
    if (_jt == 0x000CC421u) goto loc_000CC421;
    if (_jt == 0x000CC426u) goto loc_000CC426;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000CC417: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC426; /* je: equal / zero */

loc_000CC41C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    goto loc_000CC424;

loc_000CC421: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */

loc_000CC424: ;
    if (CMP_NE(_fa, _fb)) goto loc_000CC447; /* jne: not equal / not zero */

loc_000CC426: ;
    eax = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CC380; /* jl: less (signed <) */

loc_000CC433: ;
    edi = MEM32(esp + 0x10);

loc_000CC437: ;
    edx = MEM32(edi);
    POP32(esp, ebx);
    MEM32(ebp + 0x28) = edx;
    eax = MEM32(edi + 8);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000CC447: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000CC451: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000CC45A: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CC462
 * Original: 0x000CC462 - 0x000CC490 (46 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC462(void)
{

loc_000CC462: ;
    edi = edi;
    /* TODO: les ecx, ptr es:[eax + eax] */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    /* TODO: les ecx, ptr [eax + eax] */
    esp = esp & eax;
    SET_LO8(eax, LO8(eax) | 0);
    /* TODO: les ecx, ptr es:[eax + eax] */
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ecx);
    eax = eax + MEM32(ebx);
    MEM32(ebx) = MEM32(ebx) + eax;
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    SET_LO8(ecx, LO8(ecx) + HI8(eax));
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
 * sub_000CC490
 * Original: 0x000CC490 - 0x000CC6A4 (532 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC490(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CC490: ;
    esp = esp - 0x38;
    eax = MEM32(0x4EBF50);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 8) = edi;
    MEM32(esp + 0x14) = eax;
    MEM32(0x4EBF50) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_000CC68D; /* je: equal / zero */

loc_000CC4B7: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC4C5; /* je: equal / zero */

loc_000CC4BD: ;
    ebx = eax;
    MEM32(edi) = 0;

loc_000CC4C5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC68D; /* je: equal / zero */

loc_000CC4CD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    /* nop */

loc_000CC4D0: ;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CC4DF; /* jne: not equal / not zero */

loc_000CC4D7: ;
    ebx = MEM32(ebx + 0x2C);
    goto loc_000CC67F;

loc_000CC4DF: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x000CC4E8u); RECOMP_ABI_CALL(0x000CA8D0u, sub_000CA8D0); /* call 0x000CA8D0 */

loc_000CC4E8: ;
    eax = MEM32(ebx + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CC599; /* jle: less or equal (signed <=) */

loc_000CC4F9: ;
    edi = edi + 8;
    /* nop */

loc_000CC500: ;
    ecx = MEM32(ebx + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC511; /* je: equal / zero */

loc_000CC509: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CC511; /* jge: greater or equal (signed >=) */

loc_000CC50D: ;
    eax = MEM32(ebx + edx * 4 + 8);

loc_000CC511: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    ebp = eax;
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000CC526; /* jne: not equal / not zero */

loc_000CC522: ;
    eax = ecx;
    goto loc_000CC55D;

loc_000CC526: ;
    edx = ecx;
    edx = edx << 4;
    esi = MEM32(edx + edi + 0x18);
    edx = edx + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CC547; /* jbe: below or equal (unsigned <=) */

loc_000CC535: ;
    eax = MEM32(edx + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000CC545u); RECOMP_ABI_CALL(0x000C9E00u, sub_000C9E00); /* call 0x000C9E00 */

loc_000CC545: ;
    goto loc_000CC55D;

loc_000CC547: ;
    if (CMP_AE(_fa, _fb)) goto loc_000CC55B; /* jae: above or equal (unsigned >=) */

loc_000CC549: ;
    edx = MEM32(edx + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000CC559u); RECOMP_ABI_CALL(0x000C9E00u, sub_000C9E00); /* call 0x000C9E00 */

loc_000CC559: ;
    goto loc_000CC55D;

loc_000CC55B: ;
    eax = ecx;

loc_000CC55D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC568; /* jne: not equal / not zero */

loc_000CC564: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC575; /* je: equal / zero */

loc_000CC568: ;
    eax = MEM32(edi + eax * 4 + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC575; /* je: equal / zero */

loc_000CC573: ;
    ebp = eax;

loc_000CC575: ;
    ecx = MEM32(esp + 0x44);
    MEM32(esp + ecx * 4 + 0x28) = ebp;
    MEM32(esp + 0x44) = MEM32(esp + 0x44) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000CC500; /* jl: less (signed <) */

loc_000CC595: ;
    edi = MEM32(esp + 0x10);

loc_000CC599: ;
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebx + 0x28); PUSH32(esp, 0x000CC5A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC5A1: ;
    ecx = MEM32(ebx + 4);
    ebp = eax;
    eax = MEM32(ebx);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC61F; /* je: equal / zero */

loc_000CC5AF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC61F; /* je: equal / zero */

loc_000CC5B4: ;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi + 4);
    esi = eax + 4;
    MEM32(esp + 0x24) = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0x000CC5D4u); RECOMP_ABI_CALL(0x0005F450u, sub_0005F450); /* call 0x0005F450 */

loc_000CC5D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC5DF; /* jne: not equal / not zero */

loc_000CC5DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC5E6; /* je: equal / zero */

loc_000CC5DF: ;
    edi = MEM32(esi + eax * 8 + 0x1A8);

loc_000CC5E6: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(esi + 0xC);
    esi = esi + 8;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x000CC601u); RECOMP_ABI_CALL(0x000C9E00u, sub_000C9E00); /* call 0x000C9E00 */

loc_000CC601: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC60C; /* jne: not equal / not zero */

loc_000CC608: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC61F; /* je: equal / zero */

loc_000CC60C: ;
    eax = MEM32(esi + eax * 4 + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC61F; /* je: equal / zero */

loc_000CC617: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000CC61Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC61F: ;
    _fa = (uint32_t)(MEM8(ebx + 0x34)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x34), 1 (8-bit) */
    esi = MEM32(ebx + 0x2C);
    if (CMP_NE(_fa, _fb)) goto loc_000CC636; /* jne: not equal / not zero */

loc_000CC628: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC632; /* je: equal / zero */

loc_000CC62C: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;

loc_000CC632: ;
    ebx = 0; /* xor self */
    goto loc_000CC650;

loc_000CC636: ;
    _fa = (uint32_t)(MEM8(ebx + 0x35)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x35), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC64E; /* jne: not equal / not zero */

loc_000CC63C: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000CC644u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC644: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC64E; /* je: equal / zero */

loc_000CC649: ;
    ebx = MEM32(ebx + 0x30);
    goto loc_000CC650;

loc_000CC64E: ;
    ebx = esi;

loc_000CC650: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC67F; /* je: equal / zero */

loc_000CC654: ;
    PUSH32(esp, 0x000CC659u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC659: ;
    ecx = eax;
    ebp = ebp - ecx;
    ebp = ebp - 0x2C7C;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebp;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = ecx + 0x2C7C;
    PUSH32(esp, 0x000CC67Fu); RECOMP_ABI_CALL(0x000CA280u, sub_000CA280); /* call 0x000CA280 */

loc_000CC67F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    edi = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_000CC4D0; /* jne: not equal / not zero */

loc_000CC68B: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000CC68D: ;
    eax = MEM32(edi);
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    MEM32(0x4EBF50) = ecx;
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_000CC6B0
 * Original: 0x000CC6B0 - 0x000CC757 (167 bytes, 66 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC6B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CC6B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    esi = edi + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    SET_LO8(ebx, 0); /* xor self */
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x000CC6D3u); RECOMP_ABI_CALL(0x000C9E00u, sub_000C9E00); /* call 0x000C9E00 */

loc_000CC6D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC6DE; /* jne: not equal / not zero */

loc_000CC6DA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC6E9; /* je: equal / zero */

loc_000CC6DE: ;
    ecx = MEM32(esi + eax * 4 + 0x168);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CC710; /* jne: not equal / not zero */

loc_000CC6E9: ;
    _fa = (uint32_t)(MEM32(edi + 0x16C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x16C), 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC74E; /* je: equal / zero */

loc_000CC6F2: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x000CC707u); RECOMP_ABI_CALL(0x000CAF90u, sub_000CAF90); /* call 0x000CAF90 */

loc_000CC707: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CC710: ;
    esi = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000CC71Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC71A: ;
    PUSH32(esp, 0x000CC71Fu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC71F: ;
    ecx = eax;
    esi = esi - ecx;
    esi = esi - 0x2C7C;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = ecx + 0x2C7C;
    PUSH32(esp, 0x000CC745u); RECOMP_ABI_CALL(0x000CA280u, sub_000CA280); /* call 0x000CA280 */

loc_000CC745: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CC74E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CC760
 * Original: 0x000CC760 - 0x000CC7A3 (67 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC760(void)
{

loc_000CC760: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000CC76Du); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC76D: ;
    ecx = eax;
    PUSH32(esp, 0x000CC774u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CC774: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4EC200);
    ecx = esi;
    PUSH32(esp, 0x000CC781u); RECOMP_ABI_CALL(0x000CC6B0u, sub_000CC6B0); /* call 0x000CC6B0 */

loc_000CC781: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CC78Bu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC78B: ;
    ecx = eax;
    PUSH32(esp, 0x000CC792u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CC792: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4EC208);
    ecx = esi;
    PUSH32(esp, 0x000CC79Fu); RECOMP_ABI_CALL(0x000CC6B0u, sub_000CC6B0); /* call 0x000CC6B0 */

loc_000CC79F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CC7B0
 * Original: 0x000CC7B0 - 0x000CC827 (119 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC7B0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx + 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CC7D9; /* je: equal / zero */

loc_000CC7C0: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC7D9; /* je: equal / zero */

loc_000CC7D1: ;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000CC7D9u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000CC7D9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC7E7; /* jne: not equal / not zero */

loc_000CC7E3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC823; /* je: equal / zero */

loc_000CC7E7: ;
    esi = MEM32(ebx + edi * 4 + 0x168);
    PUSH32(esp, 0x000CC7F3u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC7F3: ;
    ecx = eax;
    esi = esi - ecx;
    esi = esi - 0x2C7C;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = ecx + 0x2C7C;
    PUSH32(esp, 0x000CC819u); RECOMP_ABI_CALL(0x000CA280u, sub_000CA280); /* call 0x000CA280 */

loc_000CC819: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000CC821u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000CC821: ;
    goto loc_000CC7D9;

loc_000CC823: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CC830
 * Original: 0x000CC830 - 0x000CC863 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC830: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CC840; /* jle: less or equal (signed <=) */

loc_000CC83E: ;
    ecx = MEM32(esi);

loc_000CC840: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC84E; /* je: equal / zero */

loc_000CC846: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CC84E; /* jle: less or equal (signed <=) */

loc_000CC84B: ;
    edx = MEM32(esi + 4);

loc_000CC84E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000CC854u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC854: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC85Au); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC85A: ;
    ecx = eax;
    PUSH32(esp, 0x000CC861u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CC861: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CC870
 * Original: 0x000CC870 - 0x000CC8A8 (56 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000CC870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CC880; /* jle: less or equal (signed <=) */

loc_000CC87E: ;
    ecx = MEM32(esi);

loc_000CC880: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000CC88E; /* je: equal / zero */

loc_000CC886: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000CC88E; /* jle: less or equal (signed <=) */

loc_000CC88B: ;
    edx = MEM32(esi + 4);

loc_000CC88E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000CC894u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC894: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC89Fu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC89F: ;
    ecx = eax;
    PUSH32(esp, 0x000CC8A6u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CC8A6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CC8B0
 * Original: 0x000CC8B0 - 0x000CC8E3 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC8B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CC8C0; /* jle: less or equal (signed <=) */

loc_000CC8BE: ;
    ecx = MEM32(esi);

loc_000CC8C0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC8CE; /* je: equal / zero */

loc_000CC8C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CC8CE; /* jle: less or equal (signed <=) */

loc_000CC8CB: ;
    edx = MEM32(esi + 4);

loc_000CC8CE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000CC8D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC8D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC8DAu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC8DA: ;
    ecx = eax;
    PUSH32(esp, 0x000CC8E1u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CC8E1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CC8F0
 * Original: 0x000CC8F0 - 0x000CC923 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC8F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CC900; /* jle: less or equal (signed <=) */

loc_000CC8FE: ;
    ecx = MEM32(esi);

loc_000CC900: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC90E; /* je: equal / zero */

loc_000CC906: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CC90E; /* jle: less or equal (signed <=) */

loc_000CC90B: ;
    edx = MEM32(esi + 4);

loc_000CC90E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000CC914u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC914: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC91Au); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC91A: ;
    ecx = eax;
    PUSH32(esp, 0x000CC921u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CC921: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CC930
 * Original: 0x000CC930 - 0x000CC98C (92 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC930: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CC941; /* jle: less or equal (signed <=) */

loc_000CC93F: ;
    edi = MEM32(ecx);

loc_000CC941: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC94F; /* je: equal / zero */

loc_000CC947: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CC94F; /* jle: less or equal (signed <=) */

loc_000CC94C: ;
    esi = MEM32(ecx + 4);

loc_000CC94F: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000CC957u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC957: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CC977; /* jne: not equal / not zero */

loc_000CC95B: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000CC963u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC963: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CC977; /* jne: not equal / not zero */

loc_000CC967: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC96Du); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC96D: ;
    ecx = eax;
    PUSH32(esp, 0x000CC974u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CC974: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CC977: ;
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC982u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC982: ;
    ecx = eax;
    PUSH32(esp, 0x000CC989u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CC989: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CC990
 * Original: 0x000CC990 - 0x000CC9EC (92 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC990: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CC9A1; /* jle: less or equal (signed <=) */

loc_000CC99F: ;
    edi = MEM32(ecx);

loc_000CC9A1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC9AF; /* je: equal / zero */

loc_000CC9A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CC9AF; /* jle: less or equal (signed <=) */

loc_000CC9AC: ;
    esi = MEM32(ecx + 4);

loc_000CC9AF: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000CC9B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC9B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CC9D7; /* jne: not equal / not zero */

loc_000CC9BB: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000CC9C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CC9C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CC9D7; /* jne: not equal / not zero */

loc_000CC9C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC9CDu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC9CD: ;
    ecx = eax;
    PUSH32(esp, 0x000CC9D4u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CC9D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CC9D7: ;
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC9E2u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CC9E2: ;
    ecx = eax;
    PUSH32(esp, 0x000CC9E9u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CC9E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CC9F0
 * Original: 0x000CC9F0 - 0x000CCA35 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CC9F0(void)
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

loc_000CC9F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CC9FF; /* jle: less or equal (signed <=) */

loc_000CC9FD: ;
    ecx = MEM32(edx);

loc_000CC9FF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000CCA04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCA04: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CCA0Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000CCA0D: ;
    ecx = MEM32(0x4EBF50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000CCA1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCA1E: ;
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CCA2Bu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCA2B: ;
    ecx = eax;
    PUSH32(esp, 0x000CCA32u); RECOMP_ABI_CALL(0x000CAE90u, sub_000CAE90); /* call 0x000CAE90 */

loc_000CCA32: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CCA40
 * Original: 0x000CCA40 - 0x000CCA6B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CCA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCA40: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CCA4F; /* jle: less or equal (signed <=) */

loc_000CCA4D: ;
    ecx = MEM32(edx);

loc_000CCA4F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000CCA54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCA54: ;
    ecx = MEM32(0x4EBF50);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CCA61u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCA61: ;
    ecx = eax;
    PUSH32(esp, 0x000CCA68u); RECOMP_ABI_CALL(0x000CB9A0u, sub_000CB9A0); /* call 0x000CB9A0 */

loc_000CCA68: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000CCA70
 * Original: 0x000CCA70 - 0x000CCAB5 (69 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCA70(void)
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

loc_000CCA70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CCA80; /* jle: less or equal (signed <=) */

loc_000CCA7E: ;
    ecx = MEM32(esi);

loc_000CCA80: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000CCA85u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCA85: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CCA9A; /* je: equal / zero */

loc_000CCA92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CCA9A; /* jle: less or equal (signed <=) */

loc_000CCA97: ;
    ecx = MEM32(esi + 4);

loc_000CCA9A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000CCA9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCA9F: ;
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CCAACu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCAAC: ;
    ecx = eax;
    PUSH32(esp, 0x000CCAB3u); RECOMP_ABI_CALL(0x000CA950u, sub_000CA950); /* call 0x000CA950 */

loc_000CCAB3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CCAC0
 * Original: 0x000CCAC0 - 0x000CCB09 (73 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCAC0(void)
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

loc_000CCAC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CCAD0; /* jle: less or equal (signed <=) */

loc_000CCACE: ;
    ecx = MEM32(esi);

loc_000CCAD0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000CCAD5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCAD5: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CCAEA; /* je: equal / zero */

loc_000CCAE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CCAEA; /* jle: less or equal (signed <=) */

loc_000CCAE7: ;
    ecx = MEM32(esi + 4);

loc_000CCAEA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000CCAEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCAEF: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000CCB00u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCB00: ;
    ecx = eax;
    PUSH32(esp, 0x000CCB07u); RECOMP_ABI_CALL(0x000CA950u, sub_000CA950); /* call 0x000CA950 */

loc_000CCB07: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CCB10
 * Original: 0x000CCB10 - 0x000CCB55 (69 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCB10(void)
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

loc_000CCB10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CCB20; /* jle: less or equal (signed <=) */

loc_000CCB1E: ;
    ecx = MEM32(esi);

loc_000CCB20: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000CCB25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCB25: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CCB3A; /* je: equal / zero */

loc_000CCB32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CCB3A; /* jle: less or equal (signed <=) */

loc_000CCB37: ;
    ecx = MEM32(esi + 4);

loc_000CCB3A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000CCB3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCB3F: ;
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CCB4Cu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCB4C: ;
    ecx = eax;
    PUSH32(esp, 0x000CCB53u); RECOMP_ABI_CALL(0x000CA950u, sub_000CA950); /* call 0x000CA950 */

loc_000CCB53: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CCB60
 * Original: 0x000CCB60 - 0x000CCBA9 (73 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCB60(void)
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

loc_000CCB60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CCB70; /* jle: less or equal (signed <=) */

loc_000CCB6E: ;
    ecx = MEM32(esi);

loc_000CCB70: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000CCB75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCB75: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CCB8A; /* je: equal / zero */

loc_000CCB82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CCB8A; /* jle: less or equal (signed <=) */

loc_000CCB87: ;
    ecx = MEM32(esi + 4);

loc_000CCB8A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000CCB8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCB8F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000CCBA0u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCBA0: ;
    ecx = eax;
    PUSH32(esp, 0x000CCBA7u); RECOMP_ABI_CALL(0x000CA950u, sub_000CA950); /* call 0x000CA950 */

loc_000CCBA7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CCBB0
 * Original: 0x000CCBB0 - 0x000CCBFA (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCBB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CCBC1; /* jle: less or equal (signed <=) */

loc_000CCBBF: ;
    ecx = MEM32(esi);

loc_000CCBC1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000CCBC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCBC6: ;
    PUSH32(esp, 0x000CCBCBu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CCBCB: ;
    edi = eax;
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CCBDE; /* je: equal / zero */

loc_000CCBD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CCBDE; /* jle: less or equal (signed <=) */

loc_000CCBDB: ;
    ecx = MEM32(esi + 4);

loc_000CCBDE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000CCBE3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCBE3: ;
    PUSH32(esp, 0x000CCBE8u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CCBE8: ;
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CCBF0u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCBF0: ;
    ecx = eax;
    PUSH32(esp, 0x000CCBF7u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CCBF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CCC00
 * Original: 0x000CCC00 - 0x000CCC4A (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCC00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CCC11; /* jle: less or equal (signed <=) */

loc_000CCC0F: ;
    ecx = MEM32(edi);

loc_000CCC11: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000CCC16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCC16: ;
    PUSH32(esp, 0x000CCC1Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CCC1B: ;
    esi = eax;
    eax = MEM32(edi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CCC2E; /* je: equal / zero */

loc_000CCC26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CCC2E; /* jle: less or equal (signed <=) */

loc_000CCC2B: ;
    ecx = MEM32(edi + 4);

loc_000CCC2E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000CCC33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCC33: ;
    PUSH32(esp, 0x000CCC38u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CCC38: ;
    esi = esi - eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CCC40u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCC40: ;
    ecx = eax;
    PUSH32(esp, 0x000CCC47u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CCC47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CCC50
 * Original: 0x000CCC50 - 0x000CCC9B (75 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCC50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CCC61; /* jle: less or equal (signed <=) */

loc_000CCC5F: ;
    ecx = MEM32(esi);

loc_000CCC61: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000CCC66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCC66: ;
    PUSH32(esp, 0x000CCC6Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CCC6B: ;
    edi = eax;
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CCC7E; /* je: equal / zero */

loc_000CCC76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CCC7E; /* jle: less or equal (signed <=) */

loc_000CCC7B: ;
    ecx = MEM32(esi + 4);

loc_000CCC7E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000CCC83u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCC83: ;
    PUSH32(esp, 0x000CCC88u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CCC88: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CCC91u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCC91: ;
    ecx = eax;
    PUSH32(esp, 0x000CCC98u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CCC98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CCCA0
 * Original: 0x000CCCA0 - 0x000CCCEF (79 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCCA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CCCB1; /* jle: less or equal (signed <=) */

loc_000CCCAF: ;
    ecx = MEM32(esi);

loc_000CCCB1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000CCCB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCCB6: ;
    PUSH32(esp, 0x000CCCBBu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CCCBB: ;
    edi = eax;
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CCCCE; /* je: equal / zero */

loc_000CCCC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CCCCE; /* jle: less or equal (signed <=) */

loc_000CCCCB: ;
    ecx = MEM32(esi + 4);

loc_000CCCCE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000CCCD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CCCD3: ;
    PUSH32(esp, 0x000CCCD8u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CCCD8: ;
    ecx = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CCCE5u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCCE5: ;
    ecx = eax;
    PUSH32(esp, 0x000CCCECu); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CCCEC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}



/**
 * sub_000CCD90
 * Original: 0x000CCD90 - 0x000CCE59 (201 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCD90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CCD90: ;
    eax = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x000CCDA9u); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CCDA9: ;
    edx = MEM32(ebp + 0x27628);
    edi = ebp + 0x27624;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000CCDC2u); RECOMP_ABI_CALL(0x0005F450u, sub_0005F450); /* call 0x0005F450 */

loc_000CCDC2: ;
    ecx = MEM32(0x4EBF50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CCDE0; /* jne: not equal / not zero */

loc_000CCDCC: ;
    edx = MEM32(ebp + 0x2C70);
    ecx = MEM32(esp + 0x10);
    edx = edx - ecx;
    MEM32(ebp + 0x2C70) = edx;
    goto loc_000CCDEA;

loc_000CCDE0: ;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x2B8) = MEM32(ecx + 0x2B8) - edx;

loc_000CCDEA: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCDF7; /* jne: not equal / not zero */

loc_000CCDF3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CCE4E; /* je: equal / zero */

loc_000CCDF7: ;
    esi = MEM32(edi + eax * 4 + 0x1A8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000CCE07u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_000CCE07: ;
    ecx = esi;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x000CCE10u); RECOMP_ABI_CALL(0x000CC490u, sub_000CC490); /* call 0x000CC490 */

loc_000CCE10: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCE42; /* jne: not equal / not zero */

loc_000CCE14: ;
    ecx = esi;
    PUSH32(esp, 0x000CCE1Bu); RECOMP_ABI_CALL(0x000CC7B0u, sub_000CC7B0); /* call 0x000CC7B0 */

loc_000CCE1B: ;
    esi = esi - ebp;
    esi = esi - 0x27810;
    eax = 0xB92143FBu;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = ebp + 0x27810;
    PUSH32(esp, 0x000CCE42u); RECOMP_ABI_CALL(0x000CA3F0u, sub_000CA3F0); /* call 0x000CA3F0 */

loc_000CCE42: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_000CCE4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CCE60
 * Original: 0x000CCE60 - 0x000CCF59 (249 bytes, 80 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCE60(void)
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

loc_000CCE60: ;
    esp = esp - 0x14;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebx + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CCF49; /* je: equal / zero */

loc_000CCE7D: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edi = ebx + 0xDC;
    PUSH32(esp, esi);

loc_000CCE86: ;
    eax = MEM32(edi);
    ebp = MEM32(edi + 4);
    MEM32(esp + 0x10) = eax;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CCF46; /* je: equal / zero */

loc_000CCEA2: ;
    edx = MEM32(edi + 0xC4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0xC4) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000CCEE2; /* je: equal / zero */

loc_000CCEB5: ;
    ecx = edi;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(esp + 0x18) = edx;
    eax = edi + eax * 8;
    MEM32(esp + 0x1C) = ecx;
    edx = eax;
    esi = MEM32(edx);
    ecx = edi;
    MEM32(ecx) = esi;
    edx = MEM32(edx + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;

loc_000CCEE2: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000CCEEBu); RECOMP_ABI_CALL(0x000CA060u, sub_000CA060); /* call 0x000CA060 */

loc_000CCEEB: ;
    ecx = MEM32(ebx + ebp * 4);
    PUSH32(esp, 0x000CCEF3u); RECOMP_ABI_CALL(0x000CC490u, sub_000CC490); /* call 0x000CC490 */

loc_000CCEF3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCF30; /* jne: not equal / not zero */

loc_000CCEF7: ;
    ecx = MEM32(ebx + ebp * 4);
    PUSH32(esp, 0x000CCEFFu); RECOMP_ABI_CALL(0x000CC7B0u, sub_000CC7B0); /* call 0x000CC7B0 */

loc_000CCEFF: ;
    esi = MEM32(ebx + ebp * 4);
    PUSH32(esp, 0x000CCF07u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCF07: ;
    ecx = eax;
    esi = esi - ecx;
    esi = esi - 0x27810;
    eax = 0xB92143FBu;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = ecx + 0x27810;
    PUSH32(esp, 0x000CCF30u); RECOMP_ABI_CALL(0x000CA3F0u, sub_000CA3F0); /* call 0x000CA3F0 */

loc_000CCF30: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000CCF38u); RECOMP_ABI_CALL(0x000C9FE0u, sub_000C9FE0); /* call 0x000C9FE0 */

loc_000CCF38: ;
    eax = MEM32(ebx + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CCE86; /* jne: not equal / not zero */

loc_000CCF46: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);

loc_000CCF49: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, ebx);
    PUSH32(esp, 0x000CCF53u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000CCF53: ;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CCF60
 * Original: 0x000CCF60 - 0x000CD9AE (2638 bytes, 737 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCF60(void)
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

loc_000CCF60: ;
    esp = esp - 0x40;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esp + 0x30) = ecx;
    MEM8(esp + 0x15) = 0;
    MEM8(esp + 0x17) = 0;
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x14) = 0;
    ebp = 0; /* xor self */
    MEM32(esp + 0x28) = edi;
    ecx = eax + 1;
    edi = edi;

loc_000CCF90: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CCF90; /* jne: not equal / not zero */

loc_000CCF97: ;
    eax = eax - ecx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x000CCFA6u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CCFA6: ;
    ecx = eax;
    PUSH32(esp, 0x000CCFADu); RECOMP_ABI_CALL(0x000CADB0u, sub_000CADB0); /* call 0x000CADB0 */

loc_000CCFAD: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM8(esp + 0x16) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD9A2; /* je: equal / zero */

loc_000CCFBC: ;
    ecx = MEM32(0x4EBF44);
    eax = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x4EBF44) = ecx;
    MEM32(esp + 0x34) = esi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CD864; /* jle: less or equal (signed <=) */

loc_000CCFDB: ;
    goto loc_000CCFE0;

    /* nop */

loc_000CCFE0: ;
    _fa = (uint32_t)(MEM8(esp + 0x17)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x17), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD06D; /* jne: not equal / not zero */

loc_000CCFEB: ;
    eax = MEM32(esp + 0x54);
    SET_LO8(ecx, MEM8(esi + eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(ebp) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD3D3; /* jne: not equal / not zero */

loc_000CCFFB: ;
    edx = MEM32(esp + 0x54);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3D59E8);
    PUSH32(esp, ebp);
    MEM8(esi + edx) = 0;
    PUSH32(esp, 0x000CD00Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CD00F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD01D; /* jne: not equal / not zero */

loc_000CD016: ;
    eax = 0x4EC200;
    goto loc_000CD057;

loc_000CD01D: ;
    PUSH32(esp, 0x3D59DC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CD028u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CD028: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD04A; /* jne: not equal / not zero */

loc_000CD02F: ;
    edx = MEM32(ebx + 0x24);
    eax = 0x4EC208;
    MEM32(ebx + edx * 4 + 8) = eax;
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x17) = 0;
    ebp = 0; /* xor self */
    goto loc_000CD3D3;

loc_000CD04A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CD050u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD050: ;
    ecx = eax;
    PUSH32(esp, 0x000CD057u); RECOMP_ABI_CALL(0x000CCCF0u, xml1_guest_script_string_result); /* call 0x000CCCF0 */

loc_000CD057: ;
    ecx = MEM32(ebx + 0x24);
    MEM32(ebx + ecx * 4 + 8) = eax;
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x17) = 0;
    ebp = 0; /* xor self */
    goto loc_000CD3D3;

loc_000CD06D: ;
    _fa = (uint32_t)(MEM8(esp + 0x15)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x15), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD255; /* jne: not equal / not zero */

loc_000CD078: ;
    edx = MEM32(esp + 0x54);
    SET_LO8(eax, MEM8(esi + edx));
    ecx = esi + edx;
    edx = SX8(LO8(eax));
    edx = edx + 0xFFFFFFF7u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x31 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000CD231; /* ja: above (unsigned >) */

loc_000CD091: ;
    edx = ZX8(MEM8(edx + 0xCD9C8));
    { uint32_t _jt = MEM32(edx * 4 + 0xCD9B0); /* switch: 6 entries, 6 targets */
    if (_jt == 0x000CD09Fu) goto loc_000CD09F;
    if (_jt == 0x000CD0ABu) goto loc_000CD0AB;
    if (_jt == 0x000CD0B0u) goto loc_000CD0B0;
    if (_jt == 0x000CD21Fu) goto loc_000CD21F;
    if (_jt == 0x000CD231u) goto loc_000CD231;
    if (_jt == 0x000CD2F1u) goto loc_000CD2F1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000CD09F: ;
    MEM8(esp + 0x17) = 1;
    ebp = ecx;
    goto loc_000CD3D3;

loc_000CD0AB: ;
    MEM8(esp + 0x15) = 0;

loc_000CD0B0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD3D3; /* je: equal / zero */

loc_000CD0B8: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), 1 (8-bit) */
    MEM8(ecx) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000CD1C2; /* jne: not equal / not zero */

loc_000CD0C6: ;
    edi = 0x3D5790;
    esi = ebp;
    ecx = 3;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000CD1BC; /* je: equal / zero */

loc_000CD0DC: ;
    edi = 0x3D578C;
    esi = ebp;
    ecx = 3;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000CD1BC; /* je: equal / zero */

loc_000CD0F2: ;
    edi = 0x3D5784;
    esi = ebp;
    ecx = 2;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000CD1BC; /* je: equal / zero */

loc_000CD108: ;
    edi = 0x3D5788;
    esi = ebp;
    ecx = 2;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000CD1BC; /* je: equal / zero */

loc_000CD11E: ;
    edi = 0x3D5780;
    esi = ebp;
    ecx = 3;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000CD1BC; /* je: equal / zero */

loc_000CD134: ;
    edi = 0x3D577C;
    esi = ebp;
    ecx = 3;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000CD1BC; /* je: equal / zero */

loc_000CD146: ;
    PUSH32(esp, 0x3D59D0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CD151u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CD151: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD16A; /* jne: not equal / not zero */

loc_000CD158: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x34) = eax;
    MEM8(esp + 0x16) = 1;
    goto loc_000CD206;

loc_000CD16A: ;
    ecx = esp + 0x38;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CD175u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD175: ;
    ecx = eax;
    PUSH32(esp, 0x000CD17Cu); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CD17C: ;
    edi = MEM32(esp + 0x38);
    ebp = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x30);
    esp = esp - 8;
    eax = esp;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebp;
    PUSH32(esp, 0x000CD197u); RECOMP_ABI_CALL(0x000CABE0u, sub_000CABE0); /* call 0x000CABE0 */

loc_000CD197: ;
    esp = esp - 8;
    esi = eax;
    eax = esp;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebp;
    PUSH32(esp, 0x000CD1A8u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD1A8: ;
    ecx = eax;
    PUSH32(esp, 0x000CD1AFu); RECOMP_ABI_CALL(0x000C9590u, sub_000C9590); /* call 0x000C9590 */

loc_000CD1AF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD206; /* je: equal / zero */

loc_000CD1B3: ;
    edx = MEM32(ebx + 0x24);
    MEM32(ebx + edx * 4 + 8) = esi;
    goto loc_000CD203;

loc_000CD1BC: ;
    MEM32(esp + 0x28) = ebp;
    goto loc_000CD206;

loc_000CD1C2: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x14), 1 (8-bit) */
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_000CD1E7; /* jne: not equal / not zero */

loc_000CD1CA: ;
    PUSH32(esp, 0x000CD1CFu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CD1CF: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CD1D7u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD1D7: ;
    ecx = eax;
    PUSH32(esp, 0x000CD1DEu); RECOMP_ABI_CALL(0x000CA950u, sub_000CA950); /* call 0x000CA950 */

loc_000CD1DE: ;
    ecx = MEM32(ebx + 0x24);
    MEM32(ebx + ecx * 4 + 8) = eax;
    goto loc_000CD203;

loc_000CD1E7: ;
    PUSH32(esp, 0x000CD1ECu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000CD1EC: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD1F5u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD1F5: ;
    ecx = eax;
    PUSH32(esp, 0x000CD1FCu); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CD1FC: ;
    edx = MEM32(ebx + 0x24);
    MEM32(ebx + edx * 4 + 8) = eax;

loc_000CD203: ;
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000CD206: ;
    esi = MEM32(esp + 0x34);
    edi = MEM32(esp + 0x20);
    ebp = 0; /* xor self */
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x14) = 0;
    goto loc_000CD3D3;

loc_000CD21F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD3D3; /* je: equal / zero */

loc_000CD227: ;
    MEM8(esp + 0x14) = 1;
    goto loc_000CD3D3;

loc_000CD231: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD3D3; /* jne: not equal / not zero */

loc_000CD239: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CD241; /* jl: less (signed <) */

loc_000CD23D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CD24E; /* jle: less or equal (signed <=) */

loc_000CD241: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD24E; /* je: equal / zero */

loc_000CD245: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD24E; /* je: equal / zero */

loc_000CD249: ;
    MEM8(esp + 0x13) = 1;

loc_000CD24E: ;
    ebp = ecx;
    goto loc_000CD3D3;

loc_000CD255: ;
    eax = MEM32(esp + 0x54);
    SET_LO8(ecx, MEM8(eax + esi));
    eax = eax + esi;
    edx = SX8(LO8(ecx));
    edx = edx + 0xFFFFFFF7u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x34 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000CD3B4; /* ja: above (unsigned >) */

loc_000CD26D: ;
    edx = ZX8(MEM8(edx + 0xCDA18));
    { uint32_t _jt = MEM32(edx * 4 + 0xCD9FC); /* switch: 7 entries, 7 targets */
    if (_jt == 0x000CD27Bu) goto loc_000CD27B;
    if (_jt == 0x000CD31Eu) goto loc_000CD31E;
    if (_jt == 0x000CD328u) goto loc_000CD328;
    if (_jt == 0x000CD349u) goto loc_000CD349;
    if (_jt == 0x000CD35Eu) goto loc_000CD35E;
    if (_jt == 0x000CD398u) goto loc_000CD398;
    if (_jt == 0x000CD3B4u) goto loc_000CD3B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000CD27B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD3D3; /* je: equal / zero */

loc_000CD283: ;
    PUSH32(esp, 0x3D59CC);
    PUSH32(esp, ebp);
    MEM8(eax) = 0;
    PUSH32(esp, 0x000CD291u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CD291: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD2B7; /* jne: not equal / not zero */

loc_000CD298: ;
    edi = 2;
    MEM8(esp + 0x15) = 1;
    MEM32(esp + 0x20) = edi;

loc_000CD2A6: ;
    ebp = 0; /* xor self */
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x14) = 0;
    goto loc_000CD3D3;

loc_000CD2B7: ;
    PUSH32(esp, 0x3D59C4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CD2C2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CD2C2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD2FF; /* je: equal / zero */

loc_000CD2C9: ;
    PUSH32(esp, 0x3D59BC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CD2D4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CD2D4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD2FF; /* je: equal / zero */

loc_000CD2DB: ;
    PUSH32(esp, 0x3D59B8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CD2E6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CD2E6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD3D3; /* jne: not equal / not zero */

loc_000CD2F1: ;
    esi = MEM32(esp + 0x18);
    MEM8(esp + 0x16) = 1;
    goto loc_000CD3D3;

loc_000CD2FF: ;
    edi = 3;
    MEM8(esp + 0x15) = 1;
    MEM32(esp + 0x20) = edi;
    ebp = 0; /* xor self */
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x14) = 0;
    goto loc_000CD3D3;

loc_000CD31E: ;
    MEM8(esp + 0x17) = 1;
    goto loc_000CD3D1;

loc_000CD328: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD33F; /* je: equal / zero */

loc_000CD32C: ;
    MEM32(esp + 0x28) = ebp;
    MEM8(eax) = 0;
    ebp = 0; /* xor self */
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x14) = 0;

loc_000CD33F: ;
    MEM8(esp + 0x15) = 1;
    goto loc_000CD3D3;

loc_000CD349: ;
    eax = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD3D3; /* jne: not equal / not zero */

loc_000CD357: ;
    MEM8(esp + 0x16) = 1;
    goto loc_000CD3D3;

loc_000CD35E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD3D3; /* je: equal / zero */

loc_000CD362: ;
    MEM8(eax) = 0;
    eax = esp + 0x40;
    PUSH32(esp, ebp);
    edi = 1;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0x000CD379u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD379: ;
    ecx = eax;
    PUSH32(esp, 0x000CD380u); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CD380: ;
    ecx = MEM32(eax);
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 4) = edx;
    ebp = 0; /* xor self */
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x14) = 0;
    goto loc_000CD3D3;

loc_000CD398: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD3D3; /* je: equal / zero */

loc_000CD39C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD2A6; /* je: equal / zero */

loc_000CD3A4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD2A6; /* je: equal / zero */

loc_000CD3AD: ;
    MEM8(esp + 0x14) = 1;
    goto loc_000CD3D3;

loc_000CD3B4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD3D3; /* jne: not equal / not zero */

loc_000CD3B8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CD3C2; /* jl: less (signed <) */

loc_000CD3BD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CD3D1; /* jle: less or equal (signed <=) */

loc_000CD3C2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD3D1; /* je: equal / zero */

loc_000CD3C7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD3D1; /* je: equal / zero */

loc_000CD3CC: ;
    MEM8(esp + 0x13) = 1;

loc_000CD3D1: ;
    ebp = eax;

loc_000CD3D3: ;
    eax = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x34) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000CCFE0; /* jl: less (signed <) */

loc_000CD3E4: ;
    _fa = (uint32_t)(MEM8(esp + 0x16)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x16), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD995; /* je: equal / zero */

loc_000CD3EF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD4DB; /* je: equal / zero */

loc_000CD3F7: ;
    PUSH32(esp, 0x3D59B0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CD402u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CD402: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD413; /* jne: not equal / not zero */

loc_000CD409: ;
    edi = 4;
    goto loc_000CD4DB;

loc_000CD413: ;
    PUSH32(esp, 0x3D59A8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CD41Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CD41E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD42F; /* jne: not equal / not zero */

loc_000CD425: ;
    edi = 5;
    goto loc_000CD4DB;

loc_000CD42F: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD864; /* je: equal / zero */

loc_000CD43B: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), 1 (8-bit) */
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_000CD498; /* jne: not equal / not zero */

loc_000CD443: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD44Du); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD44D: ;
    ecx = eax;
    PUSH32(esp, 0x000CD454u); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CD454: ;
    ebp = MEM32(esp + 0x38);
    edi = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x30);
    esp = esp - 8;
    eax = esp;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = edi;
    PUSH32(esp, 0x000CD46Fu); RECOMP_ABI_CALL(0x000CABE0u, sub_000CABE0); /* call 0x000CABE0 */

loc_000CD46F: ;
    esp = esp - 8;
    esi = eax;
    eax = esp;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = edi;
    PUSH32(esp, 0x000CD480u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD480: ;
    ecx = eax;
    PUSH32(esp, 0x000CD487u); RECOMP_ABI_CALL(0x000C9590u, sub_000C9590); /* call 0x000C9590 */

loc_000CD487: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = MEM32(esp + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_000CD4DB; /* je: equal / zero */

loc_000CD48F: ;
    ecx = MEM32(ebx + 0x24);
    MEM32(ebx + ecx * 4 + 8) = esi;
    goto loc_000CD4D8;

loc_000CD498: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x18), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD4BC; /* jne: not equal / not zero */

loc_000CD49F: ;
    PUSH32(esp, 0x000CD4A4u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CD4A4: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CD4ACu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD4AC: ;
    ecx = eax;
    PUSH32(esp, 0x000CD4B3u); RECOMP_ABI_CALL(0x000CA950u, sub_000CA950); /* call 0x000CA950 */

loc_000CD4B3: ;
    edx = MEM32(ebx + 0x24);
    MEM32(ebx + edx * 4 + 8) = eax;
    goto loc_000CD4D8;

loc_000CD4BC: ;
    PUSH32(esp, 0x000CD4C1u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000CD4C1: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD4CAu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD4CA: ;
    ecx = eax;
    PUSH32(esp, 0x000CD4D1u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CD4D1: ;
    ecx = MEM32(ebx + 0x24);
    MEM32(ebx + ecx * 4 + 8) = eax;

loc_000CD4D8: ;
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000CD4DB: ;
    esi = MEM32(esp + 0x28);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD864; /* je: equal / zero */

loc_000CD4E9: ;
    PUSH32(esp, 0x3C6EAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CD4F4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CD4F4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD864; /* je: equal / zero */

loc_000CD4FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    ecx = esi;
    PUSH32(esp, 0x000CD50Cu); RECOMP_ABI_CALL(0x000CC310u, sub_000CC310); /* call 0x000CC310 */

loc_000CD50C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD9A2; /* je: equal / zero */

loc_000CD518: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD51E; /* jne: not equal / not zero */

loc_000CD51C: ;
    MEM32(esi) = ebx;

loc_000CD51E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x2C) = ebp;
    if (CMP_A(_fa, _fb)) goto loc_000CD9A2; /* ja: above (unsigned >) */

loc_000CD52F: ;
    { uint32_t _jt = MEM32(edi * 4 + 0xCDA50); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000CD536u) goto loc_000CD536;
    if (_jt == 0x000CD686u) goto loc_000CD686;
    if (_jt == 0x000CD728u) goto loc_000CD728;
    if (_jt == 0x000CD7C2u) goto loc_000CD7C2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000CD536: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 4);
    esi = MEM32(esp + 0x30);
    esp = esp - 8;
    eax = esp;
    MEM32(esp + 0x30) = ecx;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x34) = edx;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x000CD558u); RECOMP_ABI_CALL(0x000CABE0u, sub_000CABE0); /* call 0x000CABE0 */

loc_000CD558: ;
    edx = MEM32(esp + 0x34);
    ecx = eax;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x66 (8-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD582; /* je: equal / zero */

loc_000CD568: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x69 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD57B; /* je: equal / zero */

loc_000CD56C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x73 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD666; /* jne: not equal / not zero */

loc_000CD574: ;
    eax = 3;
    goto loc_000CD587;

loc_000CD57B: ;
    eax = 2;
    goto loc_000CD587;

loc_000CD582: ;
    eax = 1;

loc_000CD587: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x54) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000CD5C1; /* jne: not equal / not zero */

loc_000CD58F: ;
    ecx = MEM32(0x4EBF48);
    edx = ecx * 8 + 0x4EC078;
    MEM32(esp + 0x3C) = eax;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi + 4;
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0x000CD5B6u); RECOMP_ABI_CALL(0x000CAEF0u, sub_000CAEF0); /* call 0x000CAEF0 */

loc_000CD5B6: ;
    MEM32(0x4EBF48) = MEM32(0x4EBF48) + 1;
    _fa = (uint32_t)(MEM32(0x4EBF48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000CD686;

loc_000CD5C1: ;
    edx = esp + 0x40;
    esi = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000CD5D0u); RECOMP_ABI_CALL(0x0005FC20u, sub_0005FC20); /* call 0x0005FC20 */

loc_000CD5D0: ;
    ebp = MEM32(eax);
    edi = MEM32(eax + 4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x24) = 0x3FFFFFFF;
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0x000CD5F7u); RECOMP_ABI_CALL(0x000C9440u, sub_000C9440); /* call 0x000C9440 */

loc_000CD5F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD686; /* je: equal / zero */

loc_000CD5FF: ;
    goto loc_000CD610;

loc_000CD601: ;
    edi = MEM32(esp + 0x2C);
    ebp = MEM32(esp + 0x28);
    /* nop */

loc_000CD610: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + ebp * 8 + 0x1A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + ebp * 8 + 0x1A8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD64D; /* je: equal / zero */

loc_000CD61D: ;
    PUSH32(esp, 0);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x000CD62Du); RECOMP_ABI_CALL(0x000CABA0u, sub_000CABA0); /* call 0x000CABA0 */

loc_000CD62D: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEM32(esp + 0x24) = 0x3FFFFFFF;
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0x000CD647u); RECOMP_ABI_CALL(0x000C9440u, sub_000C9440); /* call 0x000C9440 */

loc_000CD647: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD601; /* jne: not equal / not zero */

loc_000CD64B: ;
    goto loc_000CD686;

loc_000CD64D: ;
    ecx = MEM32(esp + 0x54);
    _fa = (uint32_t)(MEM32(edi + ebp * 8 + 0x1AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + ebp * 8 + 0x1AC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD686; /* je: equal / zero */

loc_000CD65A: ;
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    goto loc_000CD670;

loc_000CD666: ;
    PUSH32(esp, 0x3C806C);
    eax = esp + 0x4C;
    PUSH32(esp, eax);

loc_000CD670: ;
    PUSH32(esp, 0x000CD675u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD675: ;
    ecx = eax;
    PUSH32(esp, 0x000CD67Cu); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CD67C: ;
    ecx = MEM32(eax);
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 4) = edx;

loc_000CD686: ;
    _fa = (uint32_t)(MEM8(0x4EBF4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x4EBF4C), 1 (8-bit) */
    eax = MEM32(0x4EC06C);
    if (CMP_NE(_fa, _fb)) goto loc_000CD6AA; /* jne: not equal / not zero */

loc_000CD694: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD6AA; /* je: equal / zero */

loc_000CD698: ;
    eax = MEM32(eax * 4 + 0x4EBFE4);
    MEM32(eax + 0x30) = ebx;
    MEM32(0x4EC06C) = MEM32(0x4EC06C) - 1;
    _fa = (uint32_t)(MEM32(0x4EC06C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000CD6D7;

loc_000CD6AA: ;
    SET_LO8(ecx, MEM8(0x4EBF4D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CD6D7; /* jne: not equal / not zero */

loc_000CD6B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD6D7; /* je: equal / zero */

loc_000CD6B8: ;
    goto loc_000CD6C0;

    /* nop */

loc_000CD6C0: ;
    ecx = MEM32(eax * 4 + 0x4EBFE4);
    MEM32(ecx + 0x30) = ebx;
    eax = MEM32(0x4EC06C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x4EC06C) = eax;
    if ((_fa != 0)) goto loc_000CD6C0; /* jne: not equal / not zero */

loc_000CD6D7: ;
    eax = MEM32(0x4EBFDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD6F7; /* je: equal / zero */

loc_000CD6E0: ;
    edx = MEM32(eax * 4 + 0x4EBF54);
    MEM32(edx + 0x2C) = ebx;
    eax = MEM32(0x4EBFDC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x4EBFDC) = eax;
    if ((_fa != 0)) goto loc_000CD6E0; /* jne: not equal / not zero */

loc_000CD6F7: ;
    MEM32(eax * 4 + 0x4EBF58) = ebx;
    edx = MEM32(0x4EBFDC);
    eax = MEM32(esp + 0x34);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x4EBFDC) = edx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x77) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x77 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD9A2; /* jne: not equal / not zero */

loc_000CD718: ;
    MEM8(ebx + 0x34) = 1;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

loc_000CD728: ;
    MEM8(ebx + 0x35) = 1;
    eax = MEM32(0x4EC06C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD758; /* je: equal / zero */

loc_000CD735: ;
    goto loc_000CD740;

    /* nop */
    edi = edi;

loc_000CD740: ;
    ecx = MEM32(0x4EC06C);
    edx = MEM32(ecx * 4 + 0x4EBFE4);
    MEM32(edx + 0x30) = ebx;
    MEM32(0x4EC06C) = MEM32(0x4EC06C) - 1;
    _fa = (uint32_t)(MEM32(0x4EC06C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CD740; /* jne: not equal / not zero */

loc_000CD758: ;
    eax = MEM32(0x4EBFDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD778; /* je: equal / zero */

loc_000CD761: ;
    eax = MEM32(eax * 4 + 0x4EBF54);
    MEM32(eax + 0x2C) = ebx;
    eax = MEM32(0x4EBFDC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x4EBFDC) = eax;
    if ((_fa != 0)) goto loc_000CD761; /* jne: not equal / not zero */

loc_000CD778: ;
    edx = MEM32(0x4EC1FC);
    ecx = MEM32(0x4EBF40);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx * 8 + 0x4EC0F8;
    MEM32(edx) = ecx;
    MEM32(eax * 4 + 0x4EBF58) = ebx;
    eax = MEM32(0x4EBFDC);
    MEM32(0x4EBF40) = ecx;
    MEM32(edx + 4) = ebx;
    ecx = MEM32(0x4EC1FC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x4EBFDC) = eax;
    MEM32(0x4EC1FC) = ecx;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

loc_000CD7C2: ;
    edx = MEM32(0x4EBF40);
    MEM8(ebx + 0x35) = 1;
    eax = MEM32(0x4EBFDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD80E; /* je: equal / zero */

loc_000CD7D5: ;
    goto loc_000CD7E0;

    /* nop */
    edi = edi;

loc_000CD7E0: ;
    esi = MEM32(0x4EC314);
    ecx = MEM32(eax * 4 + 0x4EBF54);
    esi = esi * 8 + 0x4EC210;
    MEM32(esi) = edx;
    MEM32(esi + 4) = ecx;
    esi = MEM32(0x4EC314);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x4EC314) = esi;
    MEM32(0x4EBFDC) = eax;
    if ((_fa != 0)) goto loc_000CD7E0; /* jne: not equal / not zero */

loc_000CD80E: ;
    ecx = MEM32(0x4EC1FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CD844; /* jle: less or equal (signed <=) */

loc_000CD818: ;
    eax = MEM32(ecx * 8 + 0x4EC0F4);
    MEM32(eax + 0x30) = ebx;
    eax = MEM32(0x4EC1FC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x4EC1FC) = eax;
    ecx = eax * 8 + 0x4EC0F8;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = ebx;
    MEM32(0x4EC1FC) = MEM32(0x4EC1FC) + 1;
    _fa = (uint32_t)(MEM32(0x4EC1FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x4EBFDC);

loc_000CD844: ;
    MEM32(eax * 4 + 0x4EBF58) = ebx;
    MEM32(0x4EBFDC) = MEM32(0x4EBFDC) + 1;
    _fa = (uint32_t)(MEM32(0x4EBFDC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x4EBF4D) = 1;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

loc_000CD864: ;
    eax = edi;
    eax = eax - 4;
    if ((eax == 0)) goto loc_000CD918; /* je: equal / zero */

loc_000CD86F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CD995; /* jne: not equal / not zero */

loc_000CD876: ;
    eax = MEM32(0x4EC314);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(0x4EBF40);
    if (TEST_Z(_fa, _fb)) goto loc_000CD8BD; /* je: equal / zero */

loc_000CD885: ;
    _fa = (uint32_t)(MEM32(eax * 8 + 0x4EC208)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0x4EC208), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD8BD; /* jne: not equal / not zero */

loc_000CD88E: ;
    ecx = MEM32(eax * 8 + 0x4EC20C);
    esi = MEM32(0x4EBFDC);
    MEM32(esi * 4 + 0x4EBF58) = ecx;
    ebp = MEM32(0x4EBFDC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, ((_fa != 0)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    MEM32(0x4EBFDC) = ebp;
    MEM32(0x4EC314) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD885; /* je: equal / zero */

loc_000CD8BD: ;
    eax = MEM32(0x4EC1FC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x4EBF40) = edx;
    MEM8(0x4EBF4C) = 0;
    MEM8(0x4EBF4D) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000CD995; /* je: equal / zero */

loc_000CD8DF: ;
    _fa = (uint32_t)(MEM32(eax * 8 + 0x4EC0F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0x4EC0F0), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CD995; /* jle: less or equal (signed <=) */

loc_000CD8EC: ;
    edx = MEM32(eax * 8 + 0x4EC0F4);
    ecx = MEM32(0x4EC06C);
    MEM32(ecx * 4 + 0x4EBFE8) = edx;
    edx = MEM32(0x4EC06C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x4EC06C) = edx;
    MEM32(0x4EC1FC) = eax;
    goto loc_000CD995;

loc_000CD918: ;
    eax = MEM32(0x4EBFDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CD95E; /* je: equal / zero */

loc_000CD921: ;
    edx = MEM32(0x4EBF40);
    goto loc_000CD930;

    /* nop */

loc_000CD930: ;
    esi = MEM32(0x4EC314);
    ecx = MEM32(eax * 4 + 0x4EBF54);
    esi = esi * 8 + 0x4EC210;
    MEM32(esi) = edx;
    MEM32(esi + 4) = ecx;
    esi = MEM32(0x4EC314);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x4EC314) = esi;
    MEM32(0x4EBFDC) = eax;
    if ((_fa != 0)) goto loc_000CD930; /* jne: not equal / not zero */

loc_000CD95E: ;
    eax = MEM32(0x4EC1FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000CD98E; /* jle: less or equal (signed <=) */

loc_000CD967: ;
    edx = MEM32(eax * 8 + 0x4EC0F4);
    ecx = MEM32(0x4EC06C);
    MEM32(ecx * 4 + 0x4EBFE8) = edx;
    edx = MEM32(0x4EC06C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x4EC06C) = edx;
    MEM32(0x4EC1FC) = eax;

loc_000CD98E: ;
    MEM8(0x4EBF4C) = 1;

loc_000CD995: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CD99Bu); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CD99B: ;
    ecx = eax;
    PUSH32(esp, 0x000CD9A2u); RECOMP_ABI_CALL(0x000CAA60u, sub_000CAA60); /* call 0x000CAA60 */

loc_000CD9A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CD9AE
 * Original: 0x000CD9AE - 0x000CD9F8 (74 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD9AE(void)
{

loc_000CD9AE: ;
    edi = edi;
    SET_LO8(eax, 0xD0);
    SET_LO8(eax, LO8(eax) | 0);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    MEM8(eax + eax) = ROR32(MEM8(eax + eax), 1);
    /* TODO: int1  */
    MEM8(eax + eax) = ROR32(MEM8(eax + eax), LO8(ecx));
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM8(eax + eax) = ROR32(MEM8(eax + eax), 1);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */
    MEM8(eax + eax) = ROR32(MEM8(eax + eax), LO8(ecx));
    edx = 0; /* xor self */
    SET_LO8(eax, LO8(eax) | 0);
    MEM8(0x5050505) = MEM8(0x5050505) + LO8(eax);
    eax = eax + 0x5050505;
    eax = eax + 0x5050505;
    eax = eax + 0x5050505;
    eax = eax + 0x1050005;
    eax = eax + 0x1050505;
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    eax = eax + 0x4050005;
    eax = eax + 0x5050505;
    eax = eax + 0x5050505;

}

/**
 * sub_000CDA60
 * Original: 0x000CDA60 - 0x000CDB24 (196 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDA60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CDA60: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x000CDA74u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CDA74: ;
    ecx = eax;
    PUSH32(esp, 0x000CDA7Bu); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CDA7B: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    esi = esi + 4;
    PUSH32(esp, 0x4EBFE0);
    ecx = esi;
    MEM32(esp + 0x1C) = 0x4EC200;
    MEM32(esp + 0x20) = 2;
    PUSH32(esp, 0x000CDA9Fu); RECOMP_ABI_CALL(0x000CAEF0u, sub_000CAEF0); /* call 0x000CAEF0 */

loc_000CDA9F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000CDAA6u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CDAA6: ;
    ecx = eax;
    PUSH32(esp, 0x000CDAADu); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CDAAD: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4EC070);
    ecx = esi;
    MEM32(esp + 0x1C) = 0x4EC208;
    PUSH32(esp, 0x000CDAC6u); RECOMP_ABI_CALL(0x000CAEF0u, sub_000CAEF0); /* call 0x000CAEF0 */

loc_000CDAC6: ;
    ebx = MEM32(esp + 0x24);
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_000CDAD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDAD0; /* jne: not equal / not zero */

loc_000CDAD7: ;
    edi = MEM32(esp + 0x20);
    eax = eax - edx;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x000CDAE6u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000CDAE6: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CDB10; /* je: equal / zero */

loc_000CDAEF: ;
    /* nop */

loc_000CDAF0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    MEM8(esi) = 0;
    PUSH32(esp, 0x000CDAFDu); RECOMP_ABI_CALL(0x000CCF60u, sub_000CCF60); /* call 0x000CCF60 */

loc_000CDAFD: ;
    edi = esi + ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDB07u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000CDB07: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDAF0; /* jne: not equal / not zero */

loc_000CDB10: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDB1Au); RECOMP_ABI_CALL(0x000CCF60u, sub_000CCF60); /* call 0x000CCF60 */

loc_000CDB1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CDB30
 * Original: 0x000CDB30 - 0x000CDBF3 (195 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDB30: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax + 4;
    MEM32(ebx + 4) = eax;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDB61; /* je: equal / zero */

loc_000CDB4A: ;
    ecx = eax + eax * 4;
    ecx = MEM32(edi + ecx * 4 + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDB61; /* je: equal / zero */

loc_000CDB59: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000CDB61u); RECOMP_ABI_CALL(0x0005F4C0u, sub_0005F4C0); /* call 0x0005F4C0 */

loc_000CDB61: ;
    esi = eax;
    eax = MEM32(ebx + 4);
    eax = eax + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CDB75; /* jne: not equal / not zero */

loc_000CDB71: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDBEC; /* je: equal / zero */

loc_000CDB75: ;
    eax = MEM32(edi + esi * 8 + 0x1AC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = 0;
    if ((_fa == 0)) goto loc_000CDBB0; /* je: equal / zero */

loc_000CDB87: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000CDBA0; /* je: equal / zero */

loc_000CDB8A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CDBC2; /* jne: not equal / not zero */

loc_000CDB8D: ;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x000CDB97u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CDB97: ;
    ecx = eax;
    PUSH32(esp, 0x000CDB9Eu); RECOMP_ABI_CALL(0x000CCCF0u, xml1_guest_script_string_result); /* call 0x000CCCF0 */

loc_000CDB9E: ;
    goto loc_000CDBBE;

loc_000CDBA0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000CDBA7u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CDBA7: ;
    ecx = eax;
    PUSH32(esp, 0x000CDBAEu); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CDBAE: ;
    goto loc_000CDBBE;

loc_000CDBB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000CDBB7u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000CDBB7: ;
    ecx = eax;
    PUSH32(esp, 0x000CDBBEu); RECOMP_ABI_CALL(0x000CA950u, sub_000CA950); /* call 0x000CA950 */

loc_000CDBBE: ;
    MEM32(esp + 0x14) = eax;

loc_000CDBC2: ;
    edx = MEM32(edi + esi * 8 + 0x1A8);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx + 8;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000CDBDFu); RECOMP_ABI_CALL(0x000CAF90u, sub_000CAF90); /* call 0x000CAF90 */

loc_000CDBDF: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000CDBE7u); RECOMP_ABI_CALL(0x0005F790u, sub_0005F790); /* call 0x0005F790 */

loc_000CDBE7: ;
    goto loc_000CDB61;

loc_000CDBEC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CDC00
 * Original: 0x000CDC00 - 0x000CDC0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDC00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CDC00: ;
    ecx = ecx + 0x2BAEC;
    g_seh_ebp = ebp; sub_000CCE60(); return; /* tail jmp 0x000CCE60 */

}

/**
 * sub_000CDC10
 * Original: 0x000CDC10 - 0x000CDC9D (141 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDC10: ;
    xml1_raven_trace_parse(ecx, MEM32(esp + 4), MEM32(esp + 8));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000CDC24u); RECOMP_ABI_CALL(0x000E3FB0u, sub_000E3FB0); /* call 0x000E3FB0 */

loc_000CDC24: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CDC95; /* je: equal / zero */

loc_000CDC28: ;
    PUSH32(esp, 0x3D03F4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDC33u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDC33: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDC5A; /* jne: not equal / not zero */

loc_000CDC3A: ;
    /* powerusage comparison succeeded; preserve the native literal path. */
    if(xml1_raven_energy_parse(esi, ebx, edi)) {
        POP32(esp, edi); POP32(esp, esi); SET_LO8(eax, 1); POP32(esp, ebx);
        esp += 12; return; /* same thiscall ret 8 as the native parser */
    }
    PUSH32(esp, 0x000CDC3Fu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000CDC3F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CDC49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CDC49: ;
    PUSH32(esp, 0x000CDC4Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CDC4E: ;
    POP32(esp, edi);
    MEM16(esi + 0x10) = LO16(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CDC5A: ;
    PUSH32(esp, 0x3D5A08);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDC65u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDC65: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDC8D; /* jne: not equal / not zero */

loc_000CDC6C: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDC77u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDC77: ;
    SET_LO8(ebx, MEM8(esi + 0x12));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x12) = LO8(ecx);

loc_000CDC8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CDC95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CDCA0
 * Original: 0x000CDCA0 - 0x000CDE3A (410 bytes, 162 insns)
 * Category: game_physics
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDCA0(void)
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

loc_000CDCA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000CDCB4u); RECOMP_ABI_CALL(0x000E3FB0u, sub_000E3FB0); /* call 0x000E3FB0 */

loc_000CDCB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CDE32; /* je: equal / zero */

loc_000CDCBC: ;
    PUSH32(esp, 0x3D5A58);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDCC7u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDCC7: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDCE2; /* jne: not equal / not zero */

loc_000CDCCE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDCD4u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CDCD4: ;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CDCE2: ;
    PUSH32(esp, 0x3D5A4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDCEDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDCED: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDD20; /* jne: not equal / not zero */

loc_000CDCF4: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDCFFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDCFF: ;
    SET_LO8(ebx, MEM8(esi + 0x24));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x24) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CDD20: ;
    PUSH32(esp, 0x3D5A3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDD2Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDD2B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDD46; /* jne: not equal / not zero */

loc_000CDD32: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDD38u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CDD38: ;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CDD46: ;
    PUSH32(esp, 0x3D5A30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDD51u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDD51: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDD6C; /* jne: not equal / not zero */

loc_000CDD58: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDD5Eu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CDD5E: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CDD6C: ;
    PUSH32(esp, 0x3C8660);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDD77u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDD77: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDD92; /* jne: not equal / not zero */

loc_000CDD7E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDD84u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CDD84: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CDD92: ;
    PUSH32(esp, 0x3CAD3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDD9Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDD9D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDDCE; /* jne: not equal / not zero */

loc_000CDDA4: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDDAFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDDAF: ;
    SET_LO8(ebx, MEM8(esi + 0x24));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x24) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CDDCE: ;
    PUSH32(esp, 0x3D5A24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDDD9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDDD9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDE0C; /* jne: not equal / not zero */

loc_000CDDE0: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDDEBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDDEB: ;
    SET_LO8(ebx, MEM8(esi + 0x24));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x24) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CDE0C: ;
    PUSH32(esp, 0x3D5A14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDE17u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDE17: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDE2A; /* jne: not equal / not zero */

loc_000CDE1E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDE24u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CDE24: ;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_000CDE2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CDE32: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000CDE40
 * Original: 0x000CDE40 - 0x000CDE86 (70 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDE40(void)
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

loc_000CDE40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000CDE54u); RECOMP_ABI_CALL(0x000E3FB0u, sub_000E3FB0); /* call 0x000E3FB0 */

loc_000CDE54: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CDE7E; /* je: equal / zero */

loc_000CDE58: ;
    PUSH32(esp, 0x3D5A64);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDE63u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CDE63: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDE76; /* jne: not equal / not zero */

loc_000CDE6A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDE70u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CDE70: ;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_000CDE76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CDE7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000CDE90
 * Original: 0x000CDE90 - 0x000CDF08 (120 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000CDE90(void)
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

loc_000CDE90: ;
    xml1_raven_trace_apply(ecx, MEM32(esp + 4), 0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x334), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000CDEE1; /* je: equal / zero */

loc_000CDEA1: ;
    fp_push(MEMF(esi + 0x550)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8C30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8c30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CDEC7; /* jne: not equal / not zero */

loc_000CDEB4: ;
    fp_push(MEMF(esi + 0x550)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C832C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c832c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000CDEE1; /* jnp: not parity */

loc_000CDEC7: ;
    PUSH32(esp, 0x000CDECCu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000CDECC: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1B0); PUSH32(esp, 0x000CDEDDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CDEDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CDEF8; /* je: equal / zero */

loc_000CDEE1: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x10);
    edx = (uint32_t)xml1_raven_energy_cost(edi, esi, (int32_t)edx);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, ecx);
    ecx = esi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CDEF8u); RECOMP_ABI_CALL(0x0003F410u, sub_0003F410); /* call 0x0003F410 */

loc_000CDEF8: ;
    PUSH32(esp, 0x000CDEFDu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000CDEFD: ;
    MEMF(esi + 0x484) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_000CDF10
 * Original: 0x000CDF10 - 0x000CE1C6 (694 bytes, 206 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDF10(void)
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

loc_000CDF10: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x4C);
    esp = esp - 0xC;
    eax = esp;
    esi = ecx;
    ecx = MEM32(0x5BC9D0);
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
    PUSH32(esp, 1);
    MEM32(eax + 8) = edx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000CDF6Cu); RECOMP_ABI_CALL(0x0003E7B0u, sub_0003E7B0); /* call 0x0003E7B0 */

loc_000CDF6C: ;
    eax = MEM32(edi + 0x33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000CE12E; /* je: equal / zero */

loc_000CDF7E: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000CDF87u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000CDF87: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE12E; /* je: equal / zero */

loc_000CDF8F: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000CDF98u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000CDF98: ;
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x28); /* fsub dword ptr [edi + 0x28] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x24); /* fsub dword ptr [edi + 0x24] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x20); /* fsub dword ptr [edi + 0x20] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x10); /* fdiv dword ptr [esp + 0x10] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000CE042; /* jp: parity */

loc_000CE007: ;
    edx = MEM32(edi + 0x34);
    fp_pop(); /* fstp st(0) */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0x000CE02Fu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000CE02F: ;
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;

loc_000CE042: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 3) & 7]; /* fadd st(3) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x4C); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] + fp_top(); fp_pop(); /* faddp st(2) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE0BA; /* jne: not equal / not zero */

loc_000CE09C: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE0BA; /* je: equal / zero */

loc_000CE0A2: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = edi;
    PUSH32(esp, 0x000CE0B2u); RECOMP_ABI_CALL(0x00032140u, sub_00032140); /* call 0x00032140 */

loc_000CE0B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000CE0BA: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x4C); /* fdiv dword ptr [esp + 0x4c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE124; /* jne: not equal / not zero */

loc_000CE10A: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(0x498D90);
    MEM32(esp + 0x4C) = edx;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    MEM32(esp + 8) = eax;
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    goto loc_000CE17F;

loc_000CE124: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    goto loc_000CE17F;

loc_000CE12E: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE1BE; /* jne: not equal / not zero */

loc_000CE138: ;
    ecx = MEM32(0x498D90);
    edx = MEM32(edi + 0x34);
    eax = esp + 0x30;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0x000CE168u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000CE168: ;
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(eax + 4);
    eax = MEM32(esi + 0x10);
    MEM32(esp + 0x54) = eax;
    fp_top() = fp_top() * MEMF(esp + 0x54); /* fmul dword ptr [esp + 0x54] */
    esp = esp + 8;
    MEM32(esp + 0x1C) = edx;

loc_000CE17F: ;
    edx = MEM32(esi + 0x20);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x24));
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    esp = esp - 0xC;
    eax = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    MEM32(eax + 8) = 0;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CE1BEu); RECOMP_ABI_CALL(0x0003AC90u, sub_0003AC90); /* call 0x0003AC90 */

loc_000CE1BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CE1D0
 * Original: 0x000CE1D0 - 0x000CE5FD (1069 bytes, 336 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE1D0(void)
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

loc_000CE1D0: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x58);
    eax = MEM32(edi + 0x554);
    ebx = ecx;
    ecx = esp + 0x14;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000CE1F4u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000CE1F4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE21E; /* je: equal / zero */

loc_000CE1FA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000CE200u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE200: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE220; /* jne: not equal / not zero */

loc_000CE21E: ;
    esi = 0; /* xor self */

loc_000CE220: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE228; /* je: equal / zero */

loc_000CE226: ;
    esi = edi;

loc_000CE228: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE5F3; /* je: equal / zero */

loc_000CE230: ;
    eax = ebx + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CE23Du); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000CE23D: ;
    ecx = eax;
    PUSH32(esp, 0x000CE244u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000CE244: ;
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x000CE24Du); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000CE24D: ;
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x000CE256u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000CE256: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE266; /* je: equal / zero */

loc_000CE25A: ;
    ecx = esi;
    PUSH32(esp, 0x000CE261u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000CE261: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE29B; /* jne: not equal / not zero */

loc_000CE266: ;
    PUSH32(esp, 0x000CE26Bu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000CE26B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000CE272u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE272: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE29B; /* jne: not equal / not zero */

loc_000CE276: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_000CE29F; /* jne: not equal / not zero */

loc_000CE283: ;
    PUSH32(esp, 0);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CE290u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000CE290: ;
    ecx = eax;
    PUSH32(esp, 0x000CE297u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000CE297: ;
    ebp = eax;
    goto loc_000CE29F;

loc_000CE29B: ;
    ebx = MEM32(esp + 0x10);

loc_000CE29F: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE2BD; /* je: equal / zero */

loc_000CE2A5: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE2B4u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000CE2B4: ;
    ecx = eax;
    PUSH32(esp, 0x000CE2BBu); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000CE2BB: ;
    ebp = eax;

loc_000CE2BD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE5F3; /* je: equal / zero */

loc_000CE2C5: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE2E2; /* je: equal / zero */

loc_000CE2CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000CE2E0u); RECOMP_ABI_CALL(0x00040DF0u, sub_00040DF0); /* call 0x00040DF0 */

loc_000CE2E0: ;
    goto loc_000CE2F4;

loc_000CE2E2: ;
    _fa = (uint32_t)(MEM32(esi + 0x2F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2F4), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE2F4; /* je: equal / zero */

loc_000CE2EA: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000CE2F4u); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000CE2F4: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ebx + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000CE313; /* jnp: not parity */

loc_000CE306: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0xBF800000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE394; /* jne: not equal / not zero */

loc_000CE313: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE394; /* jne: not equal / not zero */

loc_000CE319: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0xBF800000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE5E1; /* je: equal / zero */

loc_000CE326: ;
    edx = MEM32(edi);
    eax = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000CE331u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE331: ;
    ecx = edi + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CE33Fu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000CE33F: ;
    ecx = MEM32(eax);
    ebx = MEM32(esi);
    MEM32(esp + 0x2C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = edx;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    eax = esp + 0x2C;
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CE386u); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000CE386: ;
    esp = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x000CE38Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE38F: ;
    goto loc_000CE5E1;

loc_000CE394: ;
    fp_push(MEMF(edi + 0x20)); /* fld float */
    edx = esp + 0x18;
    fp_top() = fp_top() - MEMF(esi + 0x20); /* fsub dword ptr [esi + 0x20] */
    PUSH32(esp, edx);
    fp_push(MEMF(edi + 0x24)); /* fld float */
    eax = esp + 0x28;
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    PUSH32(esp, eax);
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x28); /* fsub dword ptr [esi + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x64); /* fdiv dword ptr [esp + 0x64] */
    MEMF(esp + 0x60) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x60); /* fmul dword ptr [esp + 0x60] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x60); /* fmul dword ptr [esp + 0x60] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CE3F9u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_000CE3F9: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    esp = esp + 8;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C93C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c93c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000CE4AD; /* jnp: not parity */

loc_000CE411: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5A70)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5a70] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE4AD; /* je: equal / zero */

loc_000CE428: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 2 (8-bit) */
    MEM32(esp + 0x28) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000CE442; /* je: equal / zero */

loc_000CE436: ;
    edx = MEM32(esi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000CE442u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE442: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3D59F8); /* fadd dword ptr [0x3d59f8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CE47Fu); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_000CE47F: ;
    SET_LO8(eax, MEM8(ebx + 0x20));
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE499; /* je: equal / zero */

loc_000CE48D: ;
    edx = MEM32(edi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000CE499u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE499: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE51D; /* je: equal / zero */

loc_000CE49F: ;
    edx = MEM32(esi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000CE4ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE4AB: ;
    goto loc_000CE51D;

loc_000CE4AD: ;
    SET_LO8(eax, MEM8(ebx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE4E9; /* je: equal / zero */

loc_000CE4B4: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(edi + 0x30);
    MEM32(esp + 0x2C) = eax;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3D59F8); /* fadd dword ptr [0x3d59f8] */
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CE4DCu); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_000CE4DC: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    eax = esp + 0x24;
    goto loc_000CE4F0;

loc_000CE4E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE4F8; /* je: equal / zero */

loc_000CE4ED: ;
    eax = edi + 0x2C;

loc_000CE4F0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000CE4F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE4F8: ;
    ecx = edi + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CE506u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000CE506: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    eax = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0x20) = eax;

loc_000CE51D: ;
    fp_push(MEMF(ebx + 0x18)); /* fld float */
    eax = MEM32(0x5BC9D4);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(0x5BC9D0);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEM32(esp + 0x4C) = eax;
    eax = esp + 0x3C;
    MEM32(esp + 0x48) = edx;
    fp_top() = fp_top() + MEMF(edi + 0x20); /* fadd dword ptr [edi + 0x20] */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(edi + 0x24); /* fadd dword ptr [edi + 0x24] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_top() = fp_top() + MEMF(edi + 0x28); /* fadd dword ptr [edi + 0x28] */
    fp_top() = fp_top() + MEMF(ebx + 0x1C); /* fadd dword ptr [ebx + 0x1c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x20); /* fsub dword ptr [esi + 0x20] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() - MEMF(esi + 0x28); /* fsub dword ptr [esi + 0x28] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(0x5BC9D8);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x54) = ecx;
    ecx = esi;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000CE597u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE597: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000CE5DF; /* jp: parity */

loc_000CE5A4: ;
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */
    edx = MEM32(edi);
    eax = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    ecx = edi;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000CE5DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE5DB: ;
    fp_pop(); /* fstp st(0) */
    goto loc_000CE5E1;

loc_000CE5DF: ;
    fp_pop(); /* fstp st(0) */

loc_000CE5E1: ;
    eax = MEM32(esi + 0x1C);
    MEM32(edi + 0x158) = eax;
    edi = MEM32(edi + 0x1C);
    MEM32(esi + 0x158) = edi;

loc_000CE5F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CE600
 * Original: 0x000CE600 - 0x000CE81A (538 bytes, 209 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE600(void)
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

loc_000CE600: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000CE614u); RECOMP_ABI_CALL(0x000E3FB0u, sub_000E3FB0); /* call 0x000E3FB0 */

loc_000CE614: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE812; /* je: equal / zero */

loc_000CE61C: ;
    PUSH32(esp, 0x3D07A4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE627u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE627: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE63F; /* jne: not equal / not zero */

loc_000CE62E: ;
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    PUSH32(esp, 0x000CE637u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000CE637: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE63F: ;
    PUSH32(esp, 0x3D5AD4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE64Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE64A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE662; /* jne: not equal / not zero */

loc_000CE651: ;
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    PUSH32(esp, 0x000CE65Au); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000CE65A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE662: ;
    PUSH32(esp, 0x3D5A3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE66Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE66D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE688; /* jne: not equal / not zero */

loc_000CE674: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE67Au); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CE67A: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE688: ;
    PUSH32(esp, 0x3D5AC4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE693u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE693: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE6AE; /* jne: not equal / not zero */

loc_000CE69A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE6A0u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CE6A0: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE6AE: ;
    PUSH32(esp, 0x3D5AB8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE6B9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE6B9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE71A; /* jne: not equal / not zero */

loc_000CE6C0: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE6CBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE6CB: ;
    SET_LO8(ebx, MEM8(esi + 0x20));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM8(esi + 0x20) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_000CE80A; /* jne: not equal / not zero */

loc_000CE6ED: ;
    PUSH32(esp, 0x3D5AB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE6F8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE6F8: ;
    SET_LO8(ebx, MEM8(esi + 0x20));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x20) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE71A: ;
    PUSH32(esp, 0x3D5AA0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE725u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE725: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE756; /* jne: not equal / not zero */

loc_000CE72C: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE737u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE737: ;
    SET_LO8(ebx, MEM8(esi + 0x20));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x20) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE756: ;
    PUSH32(esp, 0x3D5A90);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE761u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE761: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE794; /* jne: not equal / not zero */

loc_000CE768: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE773u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE773: ;
    SET_LO8(ebx, MEM8(esi + 0x20));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x20) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE794: ;
    PUSH32(esp, 0x3D5A80);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE79Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE79F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE7D3; /* jne: not equal / not zero */

loc_000CE7A6: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE7B1u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE7B1: ;
    SET_LO8(ebx, MEM8(esi + 0x20));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x20) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE7D3: ;
    PUSH32(esp, 0x3D5A74);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE7DEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE7DE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE80A; /* jne: not equal / not zero */

loc_000CE7E5: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE7F0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE7F0: ;
    SET_LO8(ebx, MEM8(esi + 0x20));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 5);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0x20);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x20) = LO8(eax);

loc_000CE80A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE812: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000CE820
 * Original: 0x000CE820 - 0x000CE8EA (202 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE820(void)
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

loc_000CE820: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x554);
    ebx = ecx;
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000CE83Du); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000CE83D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE867; /* je: equal / zero */

loc_000CE843: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000CE849u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE849: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE869; /* jne: not equal / not zero */

loc_000CE867: ;
    esi = 0; /* xor self */

loc_000CE869: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = edi;
    PUSH32(esp, 0x000CE87Bu); RECOMP_ABI_CALL(0x0003CDF0u, sub_0003CDF0); /* call 0x0003CDF0 */

loc_000CE87B: ;
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE8C8; /* jne: not equal / not zero */

loc_000CE88B: ;
    edx = MEM32(ebx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000CE8A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE8A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CE8E3; /* je: equal / zero */

loc_000CE8A8: ;
    eax = MEM32(ebx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000CE8C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CE8C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE8C8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = MEM32(0x498D90);
    MEM32(edi + 0x158) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000CE8E3; /* je: equal / zero */

loc_000CE8D7: ;
    ecx = MEM32(0x498D90);
    MEM32(esi + 0x158) = ecx;

loc_000CE8E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CE8F0
 * Original: 0x000CE8F0 - 0x000CEA85 (405 bytes, 158 insns)
 * Category: game_physics
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE8F0(void)
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

loc_000CE8F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000CE904u); RECOMP_ABI_CALL(0x000E3FB0u, sub_000E3FB0); /* call 0x000E3FB0 */

loc_000CE904: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CEA7D; /* je: equal / zero */

loc_000CE90C: ;
    PUSH32(esp, 0x3D07A4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE917u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE917: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE92F; /* jne: not equal / not zero */

loc_000CE91E: ;
    PUSH32(esp, edi);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x000CE927u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000CE927: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE92F: ;
    PUSH32(esp, 0x3D5AD4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE93Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE93A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE952; /* jne: not equal / not zero */

loc_000CE941: ;
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x000CE94Au); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000CE94A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE952: ;
    PUSH32(esp, 0x3D5B28);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE95Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE95D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE975; /* jne: not equal / not zero */

loc_000CE964: ;
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    PUSH32(esp, 0x000CE96Du); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000CE96D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE975: ;
    PUSH32(esp, 0x3D5B18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE980u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE980: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE9AD; /* jne: not equal / not zero */

loc_000CE987: ;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE99Bu); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_000CE99B: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0x11) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE9AD: ;
    PUSH32(esp, 0x3D5B0C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE9B8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE9B8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE9E5; /* jne: not equal / not zero */

loc_000CE9BF: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000CE9D3u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_000CE9D3: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0x10) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE9E5: ;
    PUSH32(esp, 0x3D5AFC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE9F0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CE9F0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEA0B; /* jne: not equal / not zero */

loc_000CE9F7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE9FDu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CE9FD: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CEA0B: ;
    PUSH32(esp, 0x3D5AF0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CEA16u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CEA16: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEA31; /* jne: not equal / not zero */

loc_000CEA1D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CEA23u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CEA23: ;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CEA31: ;
    PUSH32(esp, 0x3D5AE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CEA3Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CEA3C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEA57; /* jne: not equal / not zero */

loc_000CEA43: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CEA49u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CEA49: ;
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CEA57: ;
    PUSH32(esp, 0x3D5A64);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CEA62u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CEA62: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEA75; /* jne: not equal / not zero */

loc_000CEA69: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CEA6Fu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000CEA6F: ;
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_000CEA75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CEA7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000CEA90
 * Original: 0x000CEA90 - 0x000CED6B (731 bytes, 238 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEA90(void)
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

loc_000CEA90: ;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    eax = MEM32(ebp + 0x554);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x48;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x000CEAB0u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000CEAB0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CED61; /* je: equal / zero */

loc_000CEABA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000CEAC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CEAC0: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CED61; /* je: equal / zero */

loc_000CEAE2: ;
    ecx = esi;
    PUSH32(esp, 0x000CEAE9u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000CEAE9: ;
    ecx = ebp;
    ebx = eax;
    PUSH32(esp, 0x000CEAF2u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000CEAF2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB3C; /* jne: not equal / not zero */

loc_000CEAF6: ;
    PUSH32(esp, 0x000CEAFBu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000CEAFB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000CEB02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CEB02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEB3C; /* jne: not equal / not zero */

loc_000CEB06: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEB3C; /* jne: not equal / not zero */

loc_000CEB0F: ;
    eax = MEM32(esi + 0x2D8);
    _fa = (uint32_t)(MEM8(eax + 0x3A2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x3A2), 1 (8-bit) */
    PUSH32(esp, 0);
    if (TEST_Z(_fa, _fb)) goto loc_000CEB26; /* je: equal / zero */

loc_000CEB20: ;
    eax = edi + 0x20;
    PUSH32(esp, eax);
    goto loc_000CEB2A;

loc_000CEB26: ;
    ecx = edi + 0x24;
    PUSH32(esp, ecx);

loc_000CEB2A: ;
    ecx = esi;
    PUSH32(esp, 0x000CEB31u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000CEB31: ;
    ecx = eax;
    PUSH32(esp, 0x000CEB38u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000CEB38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEB93; /* jne: not equal / not zero */

loc_000CEB3C: ;
    ecx = esi;
    PUSH32(esp, 0x000CEB43u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000CEB43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB77; /* jne: not equal / not zero */

loc_000CEB48: ;
    PUSH32(esp, 0x000CEB4Du); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000CEB4D: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x000CEB5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CEB5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CEB77; /* je: equal / zero */

loc_000CEB5F: ;
    PUSH32(esp, 0);
    edx = edi + 0x24;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000CEB6Cu); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000CEB6C: ;
    ecx = eax;
    PUSH32(esp, 0x000CEB73u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000CEB73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEB93; /* jne: not equal / not zero */

loc_000CEB77: ;
    PUSH32(esp, 0);
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CEB84u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000CEB84: ;
    ecx = eax;
    PUSH32(esp, 0x000CEB8Bu); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000CEB8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CED61; /* je: equal / zero */

loc_000CEB93: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CEB9Du); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000CEB9D: ;
    ebx = ebp + 0x2C;
    ecx = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CEBABu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000CEBAB: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 8);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x11);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx + 4);
    MEM32(esp + 0x20) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x10);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ebx);
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x40) = edx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x44) = eax;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    esp = esp + 8;
    ecx = esi;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x28); /* fadd dword ptr [edi + 0x28] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x2C); /* fsub dword ptr [esi + 0x2c] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x30); /* fsub dword ptr [esi + 0x30] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x34); /* fsub dword ptr [esi + 0x34] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 4);
    edx = edx & 0xFFFFFFFDu;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x000CEC42u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000CEC42: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0xFFFFFFFBu;
    ecx = esi;
    PUSH32(esp, 0x000CEC4Du); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000CEC4D: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFFFFFEu;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000CEC5Du); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000CEC5D: ;
    eax = MEM32(esi + 0x1C);
    MEM32(ebp + 0x158) = eax;
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esi + 0x158) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x000CEC7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CEC7A: ;
    eax = MEM32(esi);
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000CEC89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CEC89: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(edi + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000CECAF; /* jp: parity */

loc_000CEC9D: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(edi + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000CECEB; /* jnp: not parity */

loc_000CECAF: ;
    fp_push(MEMF(edi + 0x18)); /* fld float */
    edx = esp + 0x20;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    ecx = esi;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_top() = fp_top() + MEMF(edi + 0x14); /* fadd dword ptr [edi + 0x14] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CECDDu); RECOMP_ABI_CALL(0x000760D0u, xml1_guest_entity_set_velocity); /* call 0x000760D0 */

loc_000CECDD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x000CECEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CECEB: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = ebp;
    PUSH32(esp, 0x000CECFDu); RECOMP_ABI_CALL(0x0003CDF0u, sub_0003CDF0); /* call 0x0003CDF0 */

loc_000CECFD: ;
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CED4A; /* jne: not equal / not zero */

loc_000CED0D: ;
    edx = MEM32(edi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000CED27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CED27: ;
    eax = MEM32(edi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000CED40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CED40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

loc_000CED4A: ;
    eax = MEM32(0x498D90);
    MEM32(ebp + 0x158) = eax;
    ecx = MEM32(0x498D90);
    MEM32(esi + 0x158) = ecx;

loc_000CED61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CED70
 * Original: 0x000CED70 - 0x000CEDA0 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CED70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CED70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CED99; /* je: equal / zero */

loc_000CED7A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x000CED82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CED82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CED99; /* je: equal / zero */

loc_000CED86: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000CED91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CED91: ;
    edx = MEM32(eax);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_000CED99: ;
    eax = 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CEDA0
 * Original: 0x000CEDA0 - 0x000CEDB0 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEDA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000CEDA0: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CEDB0
 * Original: 0x000CEDB0 - 0x000CEDCF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CEDB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D5B48;
    if (TEST_Z(_fa, _fb)) goto loc_000CEDC9; /* je: equal / zero */

loc_000CEDC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CEDC6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000CEDC6: ;
    esp = esp + 4;

loc_000CEDC9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CEDD0
 * Original: 0x000CEDD0 - 0x000CEDD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEDD0(void)
{

loc_000CEDD0: ;
    raven_loop_sound_retire(ecx);
    raven_native_energy_lifetime(ecx, 2);
    xml1_raven_trace_lifetime(ecx, 2);
    MEM32(ecx) = 0x3D5B48;
    esp += 4; return; /* ret */

}

/**
 * sub_000CEDE0
 * Original: 0x000CEDE0 - 0x000CEE79 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CEDE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x186) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x186 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000CEDF7; /* jl: less (signed <) */

loc_000CEDEE: ;
    eax = 0x186;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000CEDF7: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000CEE0A; /* jne: not equal / not zero */

loc_000CEE08: ;
    edx = ~edx;

loc_000CEE0A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEE34; /* jne: not equal / not zero */

loc_000CEE15: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x186) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x186 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CEE6F; /* jge: greater or equal (signed >=) */

loc_000CEE22: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000CEE30; /* jne: not equal / not zero */

loc_000CEE2E: ;
    edx = ~edx;

loc_000CEE30: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CEE15; /* je: equal / zero */

loc_000CEE34: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEE42; /* jne: not equal / not zero */

loc_000CEE3C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_000CEE42: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEE4C; /* jne: not equal / not zero */

loc_000CEE46: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_000CEE4C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEE57; /* jne: not equal / not zero */

loc_000CEE51: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_000CEE57: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEE68; /* jne: not equal / not zero */

loc_000CEE5C: ;
    /* nop */

loc_000CEE60: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CEE60; /* je: equal / zero */

loc_000CEE68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x186) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x186 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEE74; /* jl: less (signed <) */

loc_000CEE6F: ;
    eax = 0x186;

loc_000CEE74: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CEE80
 * Original: 0x000CEE80 - 0x000CEED6 (86 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CEE80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CEED2; /* je: equal / zero */

loc_000CEE89: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    MEM8(ecx + 0xC) = LO8(eax);
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;
    SET_LO8(edx, MEM8(esi + 0xE));
    SET_LO8(eax, MEM8(ecx + 0xE));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(edx, MEM8(ecx + 0xE));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0xE) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0xE));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(ecx + 0xE) = LO8(eax);
    SET_LO8(edx, MEM8(esi + 0xE));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0xE) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0xE));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(ecx + 0xE) = LO8(eax);
    SET_LO8(edx, MEM8(esi + 0xD));
    MEM8(ecx + 0xD) = LO8(edx);

loc_000CEED2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000CEF40
 * Original: 0x000CEF40 - 0x000CF101 (449 bytes, 135 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEF40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEF40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3506D0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x44;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000CEF75; /* jne: not equal / not zero */

loc_000CEF62: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 0x44);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x50;
    esp += 8; return; /* ret 4 */

loc_000CEF75: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CEF80u); RECOMP_ABI_CALL(0x000E3EF0u, sub_000E3EF0); /* call 0x000E3EF0 */

loc_000CEF80: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEF98; /* jne: not equal / not zero */

loc_000CEF84: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x44);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x50;
    esp += 8; return; /* ret 4 */

loc_000CEF98: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    ebp = 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    esi = eax;
    MEM32(esp + 0x60) = esi;
    if ((eax == 0)) goto loc_000CF0EB; /* je: equal / zero */

loc_000CEFB8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D0670);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000CEFC9u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000CEFC9: ;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x64) = 0;
    PUSH32(esp, 0x000CEFDFu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000CEFDF: ;
    ebx = ebx | 0xFFFFFFFFu;
    ecx = esp + 0x14;
    esi = eax;
    MEM32(esp + 0x5C) = ebx;
    PUSH32(esp, 0x000CEFF1u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000CEFF1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF0EA; /* je: equal / zero */

loc_000CEFF9: ;
    goto loc_000CF000;

loc_000CEFFB: ;
    ebp = 1;

loc_000CF000: ;
    edi = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & esi;
    edi = edx;
    if ((edx == 0)) goto loc_000CF0AC; /* je: equal / zero */

loc_000CF015: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2CD4);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000CF025u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000CF025: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x60) = ebp;
    PUSH32(esp, 0x000CF035u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000CF035: ;
    ecx = esp + 0x24;
    ebp = eax;
    MEM32(esp + 0x5C) = ebx;
    PUSH32(esp, 0x000CF044u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000CF044: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF056; /* je: equal / zero */

loc_000CF048: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x14);
    MEM32(edx + 0x10) = 0;

loc_000CF056: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000CF066u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000CF066: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x60) = 2;
    PUSH32(esp, 0x000CF07Au); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000CF07A: ;
    ecx = esp + 0x34;
    edi = eax;
    MEM32(esp + 0x5C) = ebx;
    PUSH32(esp, 0x000CF089u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000CF089: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF0AC; /* je: equal / zero */

loc_000CF08D: ;
    ecx = edi;
    PUSH32(esp, 0x000CF094u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000CF094: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF0A1u); RECOMP_ABI_CALL(0x00049510u, sub_00049510); /* call 0x00049510 */

loc_000CF0A1: ;
    ecx = MEM32(edi + 0x10);
    esp = esp + 4;
    ecx = ecx | eax;
    MEM32(edi + 0x10) = ecx;

loc_000CF0AC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D0670);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x000CF0BCu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000CF0BC: ;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, esi);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    MEM32(esp + 0x64) = 3;
    PUSH32(esp, 0x000CF0D3u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000CF0D3: ;
    ecx = esp + 0x44;
    esi = eax;
    MEM32(esp + 0x5C) = ebx;
    PUSH32(esp, 0x000CF0E2u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000CF0E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CEFFB; /* jne: not equal / not zero */

loc_000CF0EA: ;
    POP32(esp, ebx);

loc_000CF0EB: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x50;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF110
 * Original: 0x000CF110 - 0x000CF243 (307 bytes, 127 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF110(void)
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

loc_000CF110: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF122; /* jne: not equal / not zero */

loc_000CF11B: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000CF122: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 8)); /* fld float */
    PUSH32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5B70)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5b70] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF1B2; /* jne: not equal / not zero */

loc_000CF139: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000CF1B2; /* jp: parity */

loc_000CF149: ;
    PUSH32(esp, 0x000CF14Eu); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000CF14E: ;
    edi = MEM32(ebx + 0x14);
    ebp = eax;
    eax = MEM32(ebp);
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000CF161u); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000CF161: ;
    ecx = MEM32(edi + 0x1C);
    edx = MEM32(edi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x34);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x10));
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x30);
    MEM32(esp + 0x28) = ecx;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    eax = eax & 0xFFFFFF01u;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000CF1A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF1A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000CF1B2: ;
    PUSH32(esp, 0x000CF1B7u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000CF1B7: ;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000CF1E0; /* je: equal / zero */

loc_000CF1C0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000CF1C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF1C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF1E0; /* je: equal / zero */

loc_000CF1CC: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x000CF1D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF1D7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000CF1DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF1DE: ;
    goto loc_000CF1E5;

loc_000CF1E0: ;
    eax = 0xC;

loc_000CF1E5: ;
    ecx = MEM32(ebx + 0x14);
    ebp = (uint32_t)(int32_t)SMEM16(ecx + 0x34);
    SET_LO8(edx, MEM8(esi + 0x10));
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = ebp;
    ebp = 0; /* xor self */
    SET_LO16(ebp, MEM16(ecx + 0x36));
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    ebx = MEM32(edi);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 0x30);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) >> 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    edx = edx & 0xFFFFFF01u;
    eax = eax & 0xFFFFFF01u;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x000CF239u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF239: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
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
 * sub_000CF250
 * Original: 0x000CF250 - 0x000CF449 (505 bytes, 174 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF250(void)
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

loc_000CF250: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF43F; /* je: equal / zero */

loc_000CF262: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF43F; /* je: equal / zero */

loc_000CF26E: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF43F; /* je: equal / zero */

loc_000CF27A: ;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    MEM32(esi) = eax;
    ebx = MEM32(ebp + 0x2F4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF29B; /* jne: not equal / not zero */

loc_000CF28F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

loc_000CF29B: ;
    MEM32(esi + 0x1C) = 0;
    ecx = MEM32(edi + 0x14);
    SET_LO16(edx, MEM16(ecx + 4));
    MEM16(esi + 0xA) = LO16(edx);
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax + 8);
    MEM32(esi + 0xC) = ecx;
    eax = MEM32(edi + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(edi + 0x14);
    MEM32(esp + 0x10) = ecx;
    SET_LO16(ecx, ZX8(MEM8(eax + 0x26)));
    MEM16(esi + 0x14) = LO16(ecx);
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 0x14);
    edx = ZX8(MEM8(ecx + 0x28));
    edx = edx + MEM32(ebp + 0x308);
    MEM32(esi + 0x44) = edx;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x000CF2FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF2FD: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x48) = ecx;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x000CF30Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF30C: ;
    eax = MEM32(eax);
    MEM32(esi + 0x4C) = eax;
    SET_LO8(ecx, MEM8(edi + 0xD));
    MEM8(esi + 0x54) = LO8(ecx);
    edx = MEM32(edi + 0x14);
    SET_LO8(eax, MEM8(edx + 0x27));
    MEM8(esi + 0x55) = LO8(eax);
    MEM8(esi + 0x56) = MEM8(edx + 0x29);
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x000CF32Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF32A: ;
    ecx = MEM32(edi + 0x14);
    SET_LO8(edx, MEM8(ecx + 0x38));
    SET_LO8(ecx, MEM8(esi + 0x60));
    eax = MEM32(eax);
    SET_LO8(edx, LO8(edx) >> 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x60) = LO8(ecx);
    MEM32(esi + 0x5C) = eax;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x000CF34Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF34F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000CF356u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF356: ;
    /* Native CF250 copied the shared endpoints into these locals.
     * Bind against its source actor before the original sampler/modifiers. */
    xml1_raven_attack_range(edi, ebp, esp + 0x10, esp + 0x24);
    eax = MEM32(eax);
    MEM32(esi + 0x50) = eax;
    eax = MEM32(edi + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    edx = (uint32_t)xml1_raven_attack_maxrange(edi, ebp, (int32_t)edx);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000CF386u); RECOMP_ABI_CALL(0x0005CA80u, sub_0005CA80); /* call 0x0005CA80 */

loc_000CF386: ;
    MEM16(esi + 8) = LO16(eax);
    SET_LO8(eax, MEM8(ebp + 0x334));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF3DF; /* jne: not equal / not zero */

loc_000CF397: ;
    PUSH32(esp, 0x000CF39Cu); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_000CF39C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF3AA; /* je: equal / zero */

loc_000CF3A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF3A7u); RECOMP_ABI_CALL(0x000C7BD0u, sub_000C7BD0); /* call 0x000C7BD0 */

loc_000CF3A7: ;
    esp = esp + 8;

loc_000CF3AA: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x000CF3B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF3B5: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000CF3BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF3BC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000CF3C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF3C5: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000CF3D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF3D1: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x000CF3DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF3DD: ;
    fp_pop(); /* fstp st(0) */

loc_000CF3DF: ;
    raven_native_damage_seed(edi, ebp, esi, SMEM16(esi + 8));
    xml1_raven_trace_damage(0, edi, ebp, esi);
    ebx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x14);
    MEM32(ebx) = ebp;
    MEM32(ebx + 4) = esi;
    MEM32(ebx + 8) = eax;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF408; /* jne: not equal / not zero */

loc_000CF3F8: ;
    PUSH32(esp, 0x000CF3FDu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000CF3FD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000CF404u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF404: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF40A; /* je: equal / zero */

loc_000CF408: ;
    SET_LO8(eax, 1);

loc_000CF40A: ;
    SET_LO8(ecx, MEM8(ebx + 0x10));
    edx = MEM32(esp + 0x1C);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(eax, MEM8(ebx + 0x10));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM32(ebx + 0xC) = edx;
    MEM8(ebx + 0x10) = LO8(eax);
    ecx = MEM32(edi + 0x14);
    SET_LO8(edx, MEM8(ecx + 0x38));
    SET_LO8(edx, LO8(edx) >> 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    POP32(esp, esi);
    MEM8(ebx + 0x10) = LO8(edx);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

loc_000CF43F: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CF450
 * Original: 0x000CF450 - 0x000CF4D0 (128 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF450: ;
    eax = MEM32(ecx + 0x5B68);
    PUSH32(esp, edi);
    edi = ecx + 0x5B68;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF47D; /* jne: not equal / not zero */

loc_000CF463: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x186) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x186 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CF4C5; /* jge: greater or equal (signed >=) */

loc_000CF471: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF463; /* je: equal / zero */

loc_000CF47D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF48A; /* jne: not equal / not zero */

loc_000CF484: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000CF48A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF494; /* jne: not equal / not zero */

loc_000CF48E: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000CF494: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF49E; /* jne: not equal / not zero */

loc_000CF498: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000CF49E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF4A9; /* jne: not equal / not zero */

loc_000CF4A2: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF4A2; /* je: equal / zero */

loc_000CF4A9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x186) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x186 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CF4C5; /* jge: greater or equal (signed >=) */

loc_000CF4B1: ;
    eax = edx;

loc_000CF4B3: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000CF4BEu); RECOMP_ABI_CALL(0x000CEDE0u, sub_000CEDE0); /* call 0x000CEDE0 */

loc_000CF4BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x186) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x186 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CF4B3; /* jl: less (signed <) */

loc_000CF4C5: ;
    ecx = 0xD;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF4D0
 * Original: 0x000CF4D0 - 0x000CF59C (204 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF4D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF4D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF596; /* je: equal / zero */

loc_000CF4DE: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF590; /* jne: not equal / not zero */

loc_000CF4EA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CF4F2u); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_000CF4F2: ;
    ebx = eax;
    eax = MEM32(esi + 0x14);
    edi = MEM32(eax + 0x18);
    eax = eax + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF508; /* jne: not equal / not zero */

loc_000CF501: ;
    edi = 0x3C806C;
    goto loc_000CF51E;

loc_000CF508: ;
    PUSH32(esp, 0x000CF50Du); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000CF50D: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    edi = ecx + eax + 0x4008;

loc_000CF51E: ;
    ebp = MEM32(ebx);
    ecx = esi;
    PUSH32(esp, 0x000CF527u); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000CF527: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000CF52Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF52E: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x14) = eax;
    PUSH32(esp, 0x000CF539u); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_000CF539: ;
    ebx = eax;
    eax = MEM32(esi + 0x14);
    edi = MEM32(eax + 0x20);
    eax = eax + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF54F; /* jne: not equal / not zero */

loc_000CF548: ;
    edi = 0x3C806C;
    goto loc_000CF565;

loc_000CF54F: ;
    PUSH32(esp, 0x000CF554u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000CF554: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    edi = ecx + eax + 0x4008;

loc_000CF565: ;
    ebp = MEM32(ebx);
    ecx = esi;
    PUSH32(esp, 0x000CF56Eu); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000CF56E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000CF575u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF575: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x1C) = eax;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000CF590; /* jne: not equal / not zero */

loc_000CF588: ;
    esi = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 0x1C) = ecx;

loc_000CF590: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000CF596: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF5A0
 * Original: 0x000CF5A0 - 0x000CF602 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF5A0: ;
    edx = ecx;
    eax = MEM32(edx + 0x61BC);
    eax = MEM32(edx + eax * 4 + 0x5B9C);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x61C4;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x61BC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x186) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x186 (32-bit) */
    MEM32(edx + 0x61BC) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000CF5EC; /* jl: less (signed <) */

loc_000CF5E2: ;
    MEM32(edx + 0x61BC) = 0;

loc_000CF5EC: ;
    MEM32(edx + 0x61C0) = MEM32(edx + 0x61C0) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x61C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x61F8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x61F8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF610
 * Original: 0x000CF610 - 0x000CF63D (45 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF610(void)
{

loc_000CF610: ;
    raven_native_energy_lifetime(ecx, 0);
    xml1_raven_trace_lifetime(ecx, 0);
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 0xE));
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM16(eax + 0x10) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x12));
    SET_LO8(edx, LO8(edx) & 0xF0);
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    MEM8(eax + 0xE) = LO8(edx);
    MEM32(eax) = 0x3D5B78;
    MEM8(eax + 0x12) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF640
 * Original: 0x000CF640 - 0x000CF64D (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF640(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000CF640: ;
    xml1_raven_energy_observe(ecx, MEM32(esp), esi, edi, g_ebp);
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x10);
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CF650
 * Original: 0x000CF650 - 0x000CF656 (6 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF650(void)
{

loc_000CF650: ;
    SET_LO8(eax, MEM8(ecx + 0x12));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF660
 * Original: 0x000CF660 - 0x000CF6A6 (70 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF660: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CF66Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000CF66E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BE0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CF682u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000CF682: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CF6A1; /* je: equal / zero */

loc_000CF689: ;
    raven_native_energy_copy(esi, eax);
    SET_LO16(ecx, MEM16(eax + 0x10));
    MEM16(esi + 0x10) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x12) = LO8(eax);

loc_000CF6A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000CFAF0
 * Original: 0x000CFAF0 - 0x000CFB72 (130 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFAF0: ;
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
    edi = MEM32(ecx + eax + 0x5B68);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0x5B68) = edi;
    MEM32(ecx + eax + 0x61C4) = MEM32(ecx + eax + 0x61C4) & edx;
    ecx = MEM32(eax + 0x61B8);
    edx = MEM32(eax + 0x61C0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x186) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x186 (32-bit) */
    MEM32(eax + 0x61B8) = ecx;
    MEM32(eax + 0x61C0) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000CFB58; /* jl: less (signed <) */

loc_000CFB47: ;
    MEM32(eax + 0x61B8) = 0;
    ecx = 0x185;
    goto loc_000CFB59;

loc_000CFB58: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CFB59: ;
    MEM32(eax + ecx * 4 + 0x5B9C) = esi;
    ecx = MEM32(eax + 0x61F8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x61F8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFB80
 * Original: 0x000CFB80 - 0x000CFBE2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFB80: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x61B8) = esi;
    MEM32(ecx + 0x61BC) = esi;
    MEM32(ecx + 0x61C0) = esi;
    edx = 0; /* xor self */
    goto loc_000CFBA0;

    /* nop */

loc_000CFBA0: ;
    eax = MEM32(ecx + 0x61B8);
    edi = MEM32(ecx + 0x61C0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x186) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x186 (32-bit) */
    MEM32(ecx + 0x61B8) = eax;
    MEM32(ecx + 0x61C0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CFBCE; /* jl: less (signed <) */

loc_000CFBC1: ;
    MEM32(ecx + 0x61B8) = esi;
    eax = 0x185;
    goto loc_000CFBCF;

loc_000CFBCE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CFBCF: ;
    MEM32(ecx + eax * 4 + 0x5B9C) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x186) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x186 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CFBA0; /* jl: less (signed <) */

loc_000CFBDF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CFBF0
 * Original: 0x000CFBF0 - 0x000CFC77 (135 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFBF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CFBF0: ;
    raven_native_energy_lifetime(ecx, 1);
    xml1_raven_trace_lifetime(ecx, 1);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    SET_LO8(edx, MEM8(esi + 0xE));
    SET_LO8(ecx, MEM8(esi + 0x12));
    SET_LO8(edx, LO8(edx) & 0xF0);
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(ebx);
    MEM8(esi + 0xE) = LO8(edx);
    MEM16(esi + 0x10) = LO16(ebx);
    MEM8(esi + 0x12) = LO8(ecx);
    MEM32(esi) = 0x3D5C88;
    MEM32(esi + 0x14) = ebx;
    _fa = (uint32_t)(MEM32(0x4F2530)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x186) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4F2530), 0x186 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC72; /* je: equal / zero */

loc_000CFC2D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = 0x4EC338;
    PUSH32(esp, 0x000CFC39u); RECOMP_ABI_CALL(0x000CF5A0u, sub_000CF5A0); /* call 0x000CF5A0 */

loc_000CFC39: ;
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    ebp = eax + 0x4EC338;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC4F; /* je: equal / zero */

loc_000CFC48: ;
    ecx = ebp;
    PUSH32(esp, 0x000CFC4Fu); RECOMP_ABI_CALL(0x000CEEE0u, xml1_guest_attack_definition_construct); /* call 0x000CEEE0 */

loc_000CFC4F: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ecx * 4 + 0x4F1EA0;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    MEM32(esi + 0x14) = ebp;
    POP32(esp, ebp);

loc_000CFC72: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CFC80
 * Original: 0x000CFC80 - 0x000CFCF6 (118 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFC80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CFC80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CFC8Eu); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000CFC8E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BE0);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CFCA2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000CFCA2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CFCC1; /* je: equal / zero */

loc_000CFCA9: ;
    raven_native_energy_copy(esi, eax);
    xml1_raven_trace_copy(esi, eax, 0);
    SET_LO16(ecx, MEM16(eax + 0x10));
    MEM16(esi + 0x10) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x12) = LO8(eax);

loc_000CFCC1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450BF8);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CFCD5u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000CFCD5: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CFCF1; /* je: equal / zero */

loc_000CFCDC: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CFCF1; /* je: equal / zero */

loc_000CFCE3: ;
    xml1_raven_trace_copy(esi, eax, 1);
    eax = MEM32(eax + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; xml1_guest_attack_definition_copy(); return; /* tail jmp 0x000CFD00 */

loc_000CFCF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000CFDC0
 * Original: 0x000CFDC0 - 0x000CFE48 (136 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFDC0: ;
    raven_native_damage_enter(0xCFDC0, esp);
    xml1_raven_trace_apply(ecx, MEM32(esp + 4), 1);
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x84);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x84);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000CFDDDu); RECOMP_ABI_CALL(0x000CDE90u, sub_000CDE90); /* call 0x000CDE90 */

loc_000CFDDD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x4C;
    MEM32(eax) = 0;
    PUSH32(esp, 0x000CFE0Cu); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_000CFE0C: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000CFE1Fu); RECOMP_ABI_CALL(0x000CF250u, sub_000CF250); /* call 0x000CF250 */

loc_000CFE1F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CFE33; /* je: equal / zero */

loc_000CFE23: ;
    PUSH32(esp, 1);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFE33u); RECOMP_ABI_CALL(0x00029FD0u, sub_00029FD0); /* call 0x00029FD0 */

loc_000CFE33: ;
    raven_native_damage_observe(0xCFE33, MEM32(esp + 0x10), SMEM16(MEM32(esp + 0x10) + 8));
    xml1_raven_trace_damage(1, edi, esi, MEM32(esp + 0x10));
    eax = MEM32(edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000CFE3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CFE3F: ;
    raven_native_damage_leave(0xCFDC0, esp + 0x84);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFE50
 * Original: 0x000CFE50 - 0x000CFE8D (61 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFE50: ;
    raven_native_energy_lifetime(ecx, 3);
    xml1_raven_trace_lifetime(ecx, 3);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = 0x3D5C88;
    if (TEST_Z(_fa, _fb)) goto loc_000CFE85; /* je: equal / zero */

loc_000CFE60: ;
    eax = eax - 0x4EC338;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = 0x4EC338;
    PUSH32(esp, 0x000CFE85u); RECOMP_ABI_CALL(0x000CFAF0u, sub_000CFAF0); /* call 0x000CFAF0 */

loc_000CFE85: ;
    MEM32(esi) = 0x3D5B48;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CFE90
 * Original: 0x000CFE90 - 0x000CFE95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFE90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CFE90: ;
    g_seh_ebp = ebp; sub_000CF450(); return; /* tail jmp 0x000CF450 */

}

/**
 * sub_000CFEA0
 * Original: 0x000CFEA0 - 0x000CFEBE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFEA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000CFEA8u); RECOMP_ABI_CALL(0x000CFE50u, sub_000CFE50); /* call 0x000CFE50 */

loc_000CFEA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CFEB8; /* je: equal / zero */

loc_000CFEAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CFEB5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000CFEB5: ;
    esp = esp + 4;

loc_000CFEB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFEC0
 * Original: 0x000CFEC0 - 0x000CFF06 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFEC0(void)
{

loc_000CFEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = 0xD;
    edi = esi + 0x5B68;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x61B8) = edx;
    MEM32(esi + 0x61BC) = edx;
    MEM32(esi + 0x61C0) = edx;
    ecx = 0xD;
    edi = esi + 0x61C4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x61F8) = edx;
    PUSH32(esp, 0x000CFF01u); RECOMP_ABI_CALL(0x000CFB80u, sub_000CFB80); /* call 0x000CFB80 */

loc_000CFF01: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CFF10
 * Original: 0x000CFF10 - 0x000D0047 (311 bytes, 116 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFF10(void)
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

loc_000CFF10: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CFF26; /* jne: not equal / not zero */

loc_000CFF1D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_000CFF26: ;
    eax = MEM32(esi + 0x1C);
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x34), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CFF3B; /* je: equal / zero */

loc_000CFF33: ;
    MEM32(esp + 4) = 0;

loc_000CFF3B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CFF43u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000CFF43: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = eax;
    MEM32(esp + 0x18) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_000CFF74; /* je: equal / zero */

loc_000CFF50: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000CFF58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CFF58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CFF74; /* je: equal / zero */

loc_000CFF5C: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x000CFF67u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CFF67: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000CFF6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CFF6E: ;
    MEM32(esp + 0x14) = eax;
    goto loc_000CFF7C;

loc_000CFF74: ;
    MEM32(esp + 0x14) = 0xC;

loc_000CFF7C: ;
    eax = MEM32(ebx);
    edx = MEM32(esi + 0x14);
    ebx = MEM32(edx + 0x30);
    SET_LO8(ecx, MEM8(esi + 0x34));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) >> 3);
    edi = MEM32(esp + 0x28);
    ebp = MEM32(edi);
    ebx = ebx & 0xFFFFFF01u;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) >> 2);
    ebx = ebx & 0xFFFFFF01u;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x30);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM16(edx + 0x24);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x1C);
    edx = MEM32(edx + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x2C));
    PUSH32(esp, ecx);
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(edi + 0xC);
    ecx = ecx & 0xFFFFFF01u;
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x10));
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x2F4);
    PUSH32(esp, edx);
    edx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000D0013u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0013: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x34), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D003B; /* je: equal / zero */

loc_000D0019: ;
    edx = MEM32(esi + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(edx + 0x24);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x000D003Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D003B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D0050
 * Original: 0x000D0050 - 0x000D014A (250 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0050(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D0050: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000D005Eu); RECOMP_ABI_CALL(0x000CF4D0u, sub_000CF4D0); /* call 0x000CF4D0 */

loc_000D005E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0143; /* je: equal / zero */

loc_000D0066: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D013C; /* jne: not equal / not zero */

loc_000D006E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D0075u); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_000D0075: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000D00A0; /* je: equal / zero */

loc_000D007E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x000D0086u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0086: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D00A0; /* je: equal / zero */

loc_000D008A: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000D0095u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0095: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D009Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D009C: ;
    ebp = eax;
    goto loc_000D00A5;

loc_000D00A0: ;
    ebp = 0xC;

loc_000D00A5: ;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D00B3; /* jne: not equal / not zero */

loc_000D00AC: ;
    eax = 0x3C806C;
    goto loc_000D00C9;

loc_000D00B3: ;
    PUSH32(esp, 0x000D00B8u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D00B8: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000D00C9: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000D00D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D00D2: ;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000D00DAu); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_000D00DA: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000D0105; /* je: equal / zero */

loc_000D00E3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x000D00EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D00EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0105; /* je: equal / zero */

loc_000D00EF: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000D00FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D00FA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D0101u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0101: ;
    ebp = eax;
    goto loc_000D010A;

loc_000D0105: ;
    ebp = 0xC;

loc_000D010A: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0118; /* jne: not equal / not zero */

loc_000D0111: ;
    eax = 0x3C806C;
    goto loc_000D012E;

loc_000D0118: ;
    PUSH32(esp, 0x000D011Du); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D011D: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000D012E: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000D0137u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0137: ;
    POP32(esp, ebp);
    MEM32(esi + 0x24) = eax;
    POP32(esp, ebx);

loc_000D013C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D0143: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0150
 * Original: 0x000D0150 - 0x000D033E (494 bytes, 188 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D0150(void)
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

loc_000D0150: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000D0164u); RECOMP_ABI_CALL(0x000CF6B0u, xml1_guest_attack_event_parse_attribute); /* call 0x000CF6B0 */

loc_000D0164: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0336; /* je: equal / zero */

loc_000D016C: ;
    PUSH32(esp, 0x3D0670);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0177u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0177: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D018C; /* jne: not equal / not zero */

loc_000D017E: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(HI8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), HI8(ecx) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_000D018C; /* jns: not sign (positive) */

loc_000D0188: ;
    MEM8(esi + 0x34) = MEM8(esi + 0x34) | 1;

loc_000D018C: ;
    PUSH32(esp, 0x3D071C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0197u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0197: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D01CD; /* jne: not equal / not zero */

loc_000D019E: ;
    SET_LO8(ecx, MEM8(esi + 0x34));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ebp);
    MEM8(esi + 0x34) = LO8(ecx);
    PUSH32(esp, 0x000D01B2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D01B2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D032E; /* jne: not equal / not zero */

loc_000D01BD: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(esi + 0x34) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D01CD: ;
    PUSH32(esp, 0x3C85D8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D01D8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D01D8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D01F3; /* jne: not equal / not zero */

loc_000D01DF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D01E5u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000D01E5: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM8(esi + 0x2C) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D01F3: ;
    PUSH32(esp, 0x3D5D0C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D01FEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D01FE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0222; /* jne: not equal / not zero */

loc_000D0205: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM8(esp + 0x1C) = LO8(eax);
    PUSH32(esp, 0x000D0214u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_000D0214: ;
    esp = esp + 8;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D0222: ;
    PUSH32(esp, 0x3D5D00);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D022Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D022D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0245; /* jne: not equal / not zero */

loc_000D0234: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x20;
    PUSH32(esp, 0x000D023Du); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D023D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D0245: ;
    PUSH32(esp, 0x3D5CF4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0250u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0250: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0268; /* jne: not equal / not zero */

loc_000D0257: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x28;
    PUSH32(esp, 0x000D0260u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D0260: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D0268: ;
    PUSH32(esp, 0x3D5CEC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0273u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0273: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D02A0; /* jne: not equal / not zero */

loc_000D027A: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D0285u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0285: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D032E; /* jne: not equal / not zero */

loc_000D0290: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    SET_LO8(eax, LO8(eax) | 2);
    POP32(esp, edi);
    MEM8(esi + 0x34) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D02A0: ;
    PUSH32(esp, 0x3D5CE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D02ABu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D02AB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D02D2; /* jne: not equal / not zero */

loc_000D02B2: ;
    PUSH32(esp, 0x000D02B7u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D02B7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D02C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D02C1: ;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D02D2: ;
    PUSH32(esp, 0x3D5CD8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D02DDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D02DD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0306; /* jne: not equal / not zero */

loc_000D02E4: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D02EFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D02EF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D032E; /* jne: not equal / not zero */

loc_000D02F6: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    SET_LO8(eax, LO8(eax) | 4);
    POP32(esp, edi);
    MEM8(esi + 0x34) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D0306: ;
    PUSH32(esp, 0x3D5CC4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0311u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0311: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D032E; /* jne: not equal / not zero */

loc_000D0318: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D0323u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0323: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D032E; /* jne: not equal / not zero */

loc_000D032A: ;
    MEM8(esi + 0x34) = MEM8(esi + 0x34) | 8;

loc_000D032E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D0336: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D01C0
 * Original: 0x000D01C0 - 0x000D033E (382 bytes, 150 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D01C0(void)
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

loc_000D01C0: ;
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(esi + 0x34) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D01F3; /* jne: not equal / not zero */

loc_000D01DF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D01E5u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000D01E5: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM8(esi + 0x2C) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D01F3: ;
    PUSH32(esp, 0x3D5D0C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D01FEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D01FE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0222; /* jne: not equal / not zero */

loc_000D0205: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM8(esp + 0x1C) = LO8(eax);
    PUSH32(esp, 0x000D0214u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_000D0214: ;
    esp = esp + 8;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D0222: ;
    PUSH32(esp, 0x3D5D00);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D022Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D022D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0245; /* jne: not equal / not zero */

loc_000D0234: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x20;
    PUSH32(esp, 0x000D023Du); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D023D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D0245: ;
    PUSH32(esp, 0x3D5CF4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0250u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0250: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0268; /* jne: not equal / not zero */

loc_000D0257: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x28;
    PUSH32(esp, 0x000D0260u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D0260: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D0268: ;
    PUSH32(esp, 0x3D5CEC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0273u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0273: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D02A0; /* jne: not equal / not zero */

loc_000D027A: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D0285u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0285: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D032E; /* jne: not equal / not zero */

loc_000D0290: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    SET_LO8(eax, LO8(eax) | 2);
    POP32(esp, edi);
    MEM8(esi + 0x34) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D02A0: ;
    PUSH32(esp, 0x3D5CE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D02ABu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D02AB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D02D2; /* jne: not equal / not zero */

loc_000D02B2: ;
    PUSH32(esp, 0x000D02B7u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D02B7: ;
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D02C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D02C1: ;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D02D2: ;
    PUSH32(esp, 0x3D5CD8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D02DDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D02DD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0306; /* jne: not equal / not zero */

loc_000D02E4: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D02EFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D02EF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D032E; /* jne: not equal / not zero */

loc_000D02F6: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    SET_LO8(eax, LO8(eax) | 4);
    POP32(esp, edi);
    MEM8(esi + 0x34) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D0306: ;
    PUSH32(esp, 0x3D5CC4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0311u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0311: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D032E; /* jne: not equal / not zero */

loc_000D0318: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D0323u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0323: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D032E; /* jne: not equal / not zero */

loc_000D032A: ;
    MEM8(esi + 0x34) = MEM8(esi + 0x34) | 8;

loc_000D032E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D0340
 * Original: 0x000D0340 - 0x000D0458 (280 bytes, 110 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0340(void)
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

loc_000D0340: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000D0354u); RECOMP_ABI_CALL(0x000CF6B0u, xml1_guest_attack_event_parse_attribute); /* call 0x000CF6B0 */

loc_000D0354: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0450; /* je: equal / zero */

loc_000D035C: ;
    PUSH32(esp, 0x3C85D8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D0367u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0367: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0382; /* jne: not equal / not zero */

loc_000D036E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0374u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000D0374: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D0382: ;
    PUSH32(esp, 0x3D5D40);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D038Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D038D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D03B0; /* jne: not equal / not zero */

loc_000D0394: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D039Au); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000D039A: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    esp = esp + 4;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D03B0: ;
    PUSH32(esp, 0x3C8424);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D03BBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D03BB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D03EB; /* jne: not equal / not zero */

loc_000D03C2: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D03CDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D03CD: ;
    SET_LO8(ebx, MEM8(esi + 0x22));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x22) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D03EB: ;
    PUSH32(esp, 0x3D5D34);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D03F6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D03F6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0429; /* jne: not equal / not zero */

loc_000D03FD: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0408u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0408: ;
    SET_LO8(ebx, MEM8(esi + 0x22));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x22) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D0429: ;
    PUSH32(esp, 0x3D5D28);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D0434u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0434: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0448; /* jne: not equal / not zero */

loc_000D043B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0441u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000D0441: ;
    MEM16(esi + 0x20) = LO16(eax);
    esp = esp + 4;

loc_000D0448: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D0450: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000D03C0
 * Original: 0x000D03C0 - 0x000D0458 (152 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D03C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D03C0: ;
    if (_flags /* jne: not equal / not zero */) goto loc_000D03EB;

loc_000D03C2: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D03CDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D03CD: ;
    SET_LO8(ebx, MEM8(esi + 0x22));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x22) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D03EB: ;
    PUSH32(esp, 0x3D5D34);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D03F6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D03F6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0429; /* jne: not equal / not zero */

loc_000D03FD: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0408u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0408: ;
    SET_LO8(ebx, MEM8(esi + 0x22));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x22) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D0429: ;
    PUSH32(esp, 0x3D5D28);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D0434u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0434: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0448; /* jne: not equal / not zero */

loc_000D043B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0441u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000D0441: ;
    MEM16(esi + 0x20) = LO16(eax);
    esp = esp + 4;

loc_000D0448: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0460
 * Original: 0x000D0460 - 0x000D0B16 (1718 bytes, 495 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0460(void)
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

loc_000D0460: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x350703);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x90;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D0491; /* jne: not equal / not zero */

loc_000D048A: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_000D0AFB;

loc_000D0491: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D04AA; /* jp: parity */

loc_000D04A3: ;
    MEM32(ebp + 0x1C) = 0x3F800000;

loc_000D04AA: ;
    edi = MEM32(esp + 0xB0);
    eax = MEM32(edi);
    fp_push(MEMF(eax + 0x34)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = fp_top() + MEMF(ecx + 0x30); /* fadd dword ptr [ecx + 0x30] */
    ecx = esp + 0x34;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 0x17) = 0;
    PUSH32(esp, 0x000D04DCu); RECOMP_ABI_CALL(0x000A0770u, sub_000A0770); /* call 0x000A0770 */

loc_000D04DC: ;
    _fa = (uint32_t)(MEM8(ebp + 0x22)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x22), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0521; /* je: equal / zero */

loc_000D04E2: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x338);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x498D90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x498D90) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0521; /* je: equal / zero */

loc_000D04F2: ;
    _fa = (uint32_t)(MEM16(ebp + 0x20)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x20), 1 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D0521; /* jge: greater or equal (signed >=) */

loc_000D04F9: ;
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000D0506u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D0506: ;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 0x24);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 0x28);
    MEM8(esp + 0x13) = 1;
    goto loc_000D07A0;

loc_000D0521: ;
    xml1_raven_trace_blast(0, ebp, MEM32(edi), 0, 0, 0);
    _fa = (uint32_t)(MEM16(ebp + 0x20)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x20), LO16(ebx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D06AC; /* jl: less (signed <) */

loc_000D052B: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x485874);
    ecx = esp + 0x3C;
    MEM32(esp + 0x4C) = ebx;
    PUSH32(esp, 0x000D0542u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000D0542: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(esp + 0xB0) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000D0556u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0556: ;
    edx = MEM32(ebp + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(edx + 6);
    edx = (uint32_t)xml1_raven_attack_maxrange(ebp, MEM32(edi), (int32_t)edx);
    ecx = MEM32(esp + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(edi);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edx = edx + 0x20;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x000D057Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D057A: ;
    eax = MEM32(edi);
    eax = eax + 0x20;
    MEM32(esp + 0x64) = 0x3CA808;
    ecx = MEM32(eax);
    MEM32(esp + 0x68) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x6C) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esp + 0x34);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = 7;
    PUSH32(esp, 0x000D05B2u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000D05B2: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x54) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0xA8) = 1;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D05D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D05D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D067B; /* jle: less or equal (signed <=) */

loc_000D05D9: ;
    /* nop */

loc_000D05E0: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D05ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D05EC: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x24) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_000D0610; /* je: equal / zero */

loc_000D05F6: ;
    xml1_raven_trace_blast(1, ebp, MEM32(edi), ebx, 0, 0);
    ecx = MEM32(edi);
    PUSH32(esp, 0x000D05FDu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000D05FD: ;
    ecx = ebx;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000D0608u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000D0608: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0629; /* jne: not equal / not zero */

loc_000D0610: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0629; /* jne: not equal / not zero */

loc_000D0619: ;
    PUSH32(esp, 0x000D061Eu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000D061E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000D0625u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0625: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D063C; /* je: equal / zero */

loc_000D0629: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x20);
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D0651; /* jge: greater or equal (signed >=) */

loc_000D0635: ;
    eax = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_000D063C: ;
    ebx = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esp + 0x2C) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D064Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D064B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D05E0; /* jl: less (signed <) */

loc_000D064F: ;
    goto loc_000D0679;

loc_000D0651: ;
    xml1_raven_trace_blast(2, ebp, MEM32(edi), ebx, 0, 1);
    eax = MEM32(ebx);
    ecx = esp + 0x84;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D0660u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0660: ;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    MEM8(esp + 0x13) = 1;

loc_000D0679: ;
    ebx = 0; /* xor self */

loc_000D067B: ;
    PUSH32(esp, esi);
    MEM8(esp + 0xAC) = 0;
    PUSH32(esp, 0x000D0689u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D0689: ;
    esp = esp + 4;
    ecx = esp + 0x34;
    MEM32(esp + 0xA8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D06A0u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D06A0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D07A4; /* jne: not equal / not zero */

loc_000D06AC: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D06BBu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D06BB: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    MEM32(esp + 0x58) = edx;
    esp = esp + 8;
    edx = esp + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D06DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D06DE: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x14);
    MEM32(esp + 0x1C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = eax;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    edx = (uint32_t)xml1_raven_attack_maxrange(ebp, MEM32(edi), (int32_t)edx);
    MEM32(esp + 0x28) = edx;
    eax = esp + 0x30;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    ecx = MEM32(edi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    edx = esp + 0x70;
    MEM32(esp + 0x9C) = 0x41000000;
    MEM32(esp + 0xA0) = 0x41000000;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xA4) = 0x41000000;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D076Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D076C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    ecx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(esp + 0x68) = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000D0780u); RECOMP_ABI_CALL(0x000A2D00u, sub_000A2D00); /* call 0x000A2D00 */

loc_000D0780: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D07A4; /* je: equal / zero */

loc_000D0787: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x000D0790u); RECOMP_ABI_CALL(0x000A0810u, sub_000A0810); /* call 0x000A0810 */

loc_000D0790: ;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 8);

loc_000D07A0: ;
    MEM32(esp + 0x20) = edx;

loc_000D07A4: ;
    xml1_raven_trace_blast(3, ebp, MEM32(edi), 0, esp + 0x18, MEM8(esp + 0x13));
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    MEM32(esp + 0x2C) = ebx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D0AF9; /* jp: parity */

loc_000D07BC: ;
    goto loc_000D07C0;

loc_000D07BE: ;
    ebx = 0; /* xor self */

loc_000D07C0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D087E; /* je: equal / zero */

loc_000D07CA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D087E; /* jne: not equal / not zero */

loc_000D07D6: ;
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D07E1u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000D07E1: ;
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    PUSH32(esp, 0x000D0804u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D0804: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(edi);
    eax = eax + 0x20;
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x60) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x2C) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x000D0840u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000D0840: ;
    ecx = MEM32(ebp + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    edx = (uint32_t)xml1_raven_attack_maxrange(ebp, MEM32(edi), (int32_t)edx);
    MEM32(esp + 0x40) = edx;
    esp = esp + 0x18;
    fp_top() = fp_top() * (double)SMEM32(esp + 0x28); /* fimul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_000D087E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = MEM32(esp + 0x20);
    fp_top() = fp_top() + MEMF(0x3D5D54); /* fadd dword ptr [0x3d5d54] */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x38) = eax;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x78) = eax;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x3C) = ecx;
    fp_top() = fp_top() - MEMF(0x3D5D50); /* fsub dword ptr [0x3d5d50] */
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x80) = 0xC3960000u;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5D4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5d4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D08DF; /* jp: parity */

loc_000D08CE: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3D5D4C); /* fsub dword ptr [0x3d5d4c] */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */

loc_000D08DF: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4C0A5C);
    ecx = esp + 0x1C;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0x000D08F6u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000D08F6: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(esp + 0xB0) = 2;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000D090Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D090E: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x485874);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000D091Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D091E: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4D7378);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000D092Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D092E: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x338);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000D0949u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0949: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000D0966u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0966: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x94;
    PUSH32(esp, 0x000D0977u); RECOMP_ABI_CALL(0x000A08D0u, sub_000A08D0); /* call 0x000A08D0 */

loc_000D0977: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D0982u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000D0982: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x54) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0xA8) = 3;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D0999u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0999: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D0A02; /* jle: less or equal (signed <=) */

loc_000D099D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D09A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D09A5: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D09EE; /* je: equal / zero */

loc_000D09AB: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D09B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D09B1: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    MEM32(esp + 0x24) = eax;
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ecx + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + edx * 4 + 0x14), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D09EE; /* je: equal / zero */

loc_000D09D7: ;
    edx = MEM32(ebx + 0x20);
    MEM32(esp + 0x38) = edx;
    eax = MEM32(ebx + 0x24);
    MEM32(esp + 0x3C) = eax;
    ecx = MEM32(ebx + 0x28);
    MEM32(esp + 0x40) = ecx;
    goto loc_000D0A43;

loc_000D09EE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D09FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D09FC: ;
    ecx = MEM32(esp + 0x34);
    goto loc_000D0A22;

loc_000D0A02: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000D0A0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0A0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0A43; /* je: equal / zero */

loc_000D0A0F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0x9C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000D0A20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0A20: ;
    ecx = MEM32(eax);

loc_000D0A22: ;
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, 0x000D0A2Fu); RECOMP_ABI_CALL(0x000A0810u, sub_000A0810); /* call 0x000A0810 */

loc_000D0A2F: ;
    edx = MEM32(eax);
    MEM32(esp + 0x38) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x40) = edx;

loc_000D0A43: ;
    PUSH32(esp, 0x000D0A48u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000D0A48: ;
    xml1_raven_trace_blast_area_begin(ebp, MEM32(edi));
    xml1_raven_trace_blast(4, ebp, MEM32(edi), 0, esp + 0x38, MEM8(esp + 0x13));
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x54);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x3C) = esp;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x000D0A75u); RECOMP_ABI_CALL(0x0005A810u, sub_0005A810); /* call 0x0005A810 */

loc_000D0A75: ;
    xml1_raven_trace_blast_attack_begin(ebp, MEM32(edi));
    xml1_raven_trace_blast_area_end();
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(edi);
    MEM32(esp + 0x9C) = 0;
    MEM32(esp + 0xA0) = 0;
    MEM32(esp + 0xA4) = 0x3F800000;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    eax = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    esp = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = esp + 0x88;
    PUSH32(esp, ebx);
    ebx = esp + 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000D0ABEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0ABE: ;
    xml1_raven_trace_blast_attack_end();
    PUSH32(esp, esi);
    MEM8(esp + 0xAC) = 2;
    PUSH32(esp, 0x000D0ACCu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D0ACC: ;
    esp = esp + 4;
    ecx = esp + 0x14;
    MEM32(esp + 0xA8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D0AE3u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D0AE3: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000D07BE; /* jnp: not parity */

loc_000D0AF9: ;
    SET_LO8(eax, 1);

loc_000D0AFB: ;
    ecx = MEM32(esp + 0xA0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x9C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D0640
 * Original: 0x000D0640 - 0x000D0B16 (1238 bytes, 353 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0640(void)
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

loc_000D0640: ;
    edx = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esp + 0x2C) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D064Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D064B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000D05E0(); return; } /* jl: less (signed <) */

loc_000D064F: ;
    goto loc_000D0679;

    eax = MEM32(ebx);
    ecx = esp + 0x84;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D0660u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0660: ;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    MEM8(esp + 0x13) = 1;

loc_000D0679: ;
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM8(esp + 0xAC) = 0;
    PUSH32(esp, 0x000D0689u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D0689: ;
    esp = esp + 4;
    ecx = esp + 0x34;
    MEM32(esp + 0xA8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D06A0u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D06A0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D07A4; /* jne: not equal / not zero */

loc_000D06AC: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D06BBu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D06BB: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    MEM32(esp + 0x58) = edx;
    esp = esp + 8;
    edx = esp + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D06DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D06DE: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x14);
    MEM32(esp + 0x1C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = eax;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    edx = (uint32_t)xml1_raven_attack_maxrange(ebp, MEM32(edi), (int32_t)edx);
    MEM32(esp + 0x28) = edx;
    eax = esp + 0x30;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    ecx = MEM32(edi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    edx = esp + 0x70;
    MEM32(esp + 0x9C) = 0x41000000;
    MEM32(esp + 0xA0) = 0x41000000;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xA4) = 0x41000000;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D076Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D076C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    ecx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(esp + 0x68) = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000D0780u); RECOMP_ABI_CALL(0x000A2D00u, sub_000A2D00); /* call 0x000A2D00 */

loc_000D0780: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D07A4; /* je: equal / zero */

loc_000D0787: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x000D0790u); RECOMP_ABI_CALL(0x000A0810u, sub_000A0810); /* call 0x000A0810 */

loc_000D0790: ;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;

loc_000D07A4: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    MEM32(esp + 0x2C) = ebx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D0AF9; /* jp: parity */

loc_000D07BC: ;
    goto loc_000D07C0;

loc_000D07BE: ;
    ebx = 0; /* xor self */

loc_000D07C0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D087E; /* je: equal / zero */

loc_000D07CA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D087E; /* jne: not equal / not zero */

loc_000D07D6: ;
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D07E1u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000D07E1: ;
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    PUSH32(esp, 0x000D0804u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D0804: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(edi);
    eax = eax + 0x20;
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x60) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x2C) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x000D0840u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000D0840: ;
    ecx = MEM32(ebp + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    edx = (uint32_t)xml1_raven_attack_maxrange(ebp, MEM32(edi), (int32_t)edx);
    MEM32(esp + 0x40) = edx;
    esp = esp + 0x18;
    fp_top() = fp_top() * (double)SMEM32(esp + 0x28); /* fimul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_000D087E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = MEM32(esp + 0x20);
    fp_top() = fp_top() + MEMF(0x3D5D54); /* fadd dword ptr [0x3d5d54] */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x38) = eax;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x78) = eax;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x3C) = ecx;
    fp_top() = fp_top() - MEMF(0x3D5D50); /* fsub dword ptr [0x3d5d50] */
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x80) = 0xC3960000u;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5D4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5d4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D08DF; /* jp: parity */

loc_000D08CE: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3D5D4C); /* fsub dword ptr [0x3d5d4c] */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */

loc_000D08DF: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4C0A5C);
    ecx = esp + 0x1C;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0x000D08F6u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000D08F6: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(esp + 0xB0) = 2;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000D090Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D090E: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x485874);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000D091Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D091E: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4D7378);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000D092Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D092E: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x338);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000D0949u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0949: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000D0966u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0966: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x94;
    PUSH32(esp, 0x000D0977u); RECOMP_ABI_CALL(0x000A08D0u, sub_000A08D0); /* call 0x000A08D0 */

loc_000D0977: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D0982u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000D0982: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x54) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0xA8) = 3;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D0999u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0999: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D0A02; /* jle: less or equal (signed <=) */

loc_000D099D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D09A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D09A5: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D09EE; /* je: equal / zero */

loc_000D09AB: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D09B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D09B1: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    MEM32(esp + 0x24) = eax;
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ecx + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + edx * 4 + 0x14), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D09EE; /* je: equal / zero */

loc_000D09D7: ;
    edx = MEM32(ebx + 0x20);
    MEM32(esp + 0x38) = edx;
    eax = MEM32(ebx + 0x24);
    MEM32(esp + 0x3C) = eax;
    ecx = MEM32(ebx + 0x28);
    MEM32(esp + 0x40) = ecx;
    goto loc_000D0A43;

loc_000D09EE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D09FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D09FC: ;
    ecx = MEM32(esp + 0x34);
    goto loc_000D0A22;

loc_000D0A02: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000D0A0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0A0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0A43; /* je: equal / zero */

loc_000D0A0F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0x9C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000D0A20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0A20: ;
    ecx = MEM32(eax);

loc_000D0A22: ;
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, 0x000D0A2Fu); RECOMP_ABI_CALL(0x000A0810u, sub_000A0810); /* call 0x000A0810 */

loc_000D0A2F: ;
    edx = MEM32(eax);
    MEM32(esp + 0x38) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x40) = edx;

loc_000D0A43: ;
    PUSH32(esp, 0x000D0A48u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000D0A48: ;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x54);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x3C) = esp;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x000D0A75u); RECOMP_ABI_CALL(0x0005A810u, sub_0005A810); /* call 0x0005A810 */

loc_000D0A75: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(edi);
    MEM32(esp + 0x9C) = 0;
    MEM32(esp + 0xA0) = 0;
    MEM32(esp + 0xA4) = 0x3F800000;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    eax = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    esp = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = esp + 0x88;
    PUSH32(esp, ebx);
    ebx = esp + 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000D0ABEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0ABE: ;
    PUSH32(esp, esi);
    MEM8(esp + 0xAC) = 2;
    PUSH32(esp, 0x000D0ACCu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D0ACC: ;
    esp = esp + 4;
    ecx = esp + 0x14;
    MEM32(esp + 0xA8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D0AE3u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D0AE3: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000D07BE; /* jnp: not parity */

loc_000D0AF9: ;
    SET_LO8(eax, 1);
    ecx = MEM32(esp + 0xA0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x9C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D0B20
 * Original: 0x000D0B20 - 0x000D0B66 (70 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0B20(void)
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

loc_000D0B20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000D0B34u); RECOMP_ABI_CALL(0x000CF6B0u, xml1_guest_attack_event_parse_attribute); /* call 0x000CF6B0 */

loc_000D0B34: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0B5E; /* je: equal / zero */

loc_000D0B38: ;
    PUSH32(esp, 0x3D5A3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D0B43u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0B43: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0B56; /* jne: not equal / not zero */

loc_000D0B4A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0B50u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000D0B50: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_000D0B56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D0B5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000D0B70
 * Original: 0x000D0B70 - 0x000D0BD0 (96 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000D0B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0B80; /* jne: not equal / not zero */

loc_000D0B7A: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D0B80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000D0B93u); RECOMP_ABI_CALL(0x000CF6B0u, xml1_guest_attack_event_parse_attribute); /* call 0x000CF6B0 */

loc_000D0B93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000D0BC8; /* je: equal / zero */

loc_000D0B97: ;
    PUSH32(esp, 0x3D5D68);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D0BA2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0BA2: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0BC8; /* jne: not equal / not zero */

loc_000D0BA9: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0BB4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D0BB4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x18) = LO8(eax);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D0BC8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0BD0
 * Original: 0x000D0BD0 - 0x000D0D60 (400 bytes, 143 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0BD0(void)
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

loc_000D0BD0: ;
    eax = MEM32(ecx + 0x14);
    esp = esp - 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_000D0BE8; /* jne: not equal / not zero */

loc_000D0BDD: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_000D0BE8: ;
    edi = MEM32(esp + 0x2C);
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x554);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000D0C01u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D0C01: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0CAB; /* je: equal / zero */

loc_000D0C0B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D0C11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0C11: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0CAB; /* je: equal / zero */

loc_000D0C2F: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    eax = MEM32(edi);
    fp_top() = fp_top() - MEMF(eax + 0x28); /* fsub dword ptr [eax + 0x28] */
    eax = eax + 0x20;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    ecx = esp + 0x30;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D0C5Cu); RECOMP_ABI_CALL(0x000A0770u, sub_000A0770); /* call 0x000A0770 */

loc_000D0C5C: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    edx = MEM32(ecx + 0x158);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000D0C6Eu); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000D0C6E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0CCC; /* je: equal / zero */

loc_000D0C75: ;
    ecx = MEM32(edi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edx = ecx + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D0C91u); RECOMP_ABI_CALL(0x0003C720u, sub_0003C720); /* call 0x0003C720 */

loc_000D0C91: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0CCC; /* je: equal / zero */

loc_000D0C95: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000D0C9Eu); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_000D0C9E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0CA4u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_000D0CA4: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0CCC; /* je: equal / zero */

loc_000D0CAB: ;
    ecx = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4F32A8);
    PUSH32(esp, 0x000D0CB9u); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_000D0CB9: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0CC1u); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000D0CC1: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_000D0CCC: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x1C);
    MEM32(esi + 0x158) = eax;
    ecx = MEM32(edi);
    eax = MEM32(esi + 0x1C);
    MEM32(ecx + 0x158) = eax;
    MEM8(esi + 0x54C) = MEM8(esi + 0x54C) | 0x10;
    MEM32(esi + 4) = MEM32(esi + 4) | 2;
    ecx = esi;
    PUSH32(esp, 0x000D0CF4u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000D0CF4: ;
    eax = MEM32(esi + 4);
    eax = eax | 4;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000D0D04u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000D0D04: ;
    ebx = MEM32(esi + 4);
    ebx = ebx | 1;
    ecx = esi;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x000D0D14u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000D0D14: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 0x394);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0D22u); RECOMP_ABI_CALL(0x00046500u, sub_00046500); /* call 0x00046500 */

loc_000D0D22: ;
    esi = MEM32(eax + 0x18);
    eax = eax + 0xC;
    eax = MEM32(0x3DD050);
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0D4F; /* je: equal / zero */

loc_000D0D34: ;
    PUSH32(esp, 0x000D0D39u); RECOMP_ABI_CALL(0x0007A660u, sub_0007A660); /* call 0x0007A660 */

loc_000D0D39: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D0D40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0D40: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0D4F; /* je: equal / zero */

loc_000D0D44: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x000D0D4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0D4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D0D60
 * Original: 0x000D0D60 - 0x000D0E78 (280 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0D60: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0D6C; /* jne: not equal / not zero */

loc_000D0D67: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_000D0D6C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x554);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D0D88u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D0D88: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0DB2; /* je: equal / zero */

loc_000D0D8E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D0D94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0D94: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0DD0; /* jne: not equal / not zero */

loc_000D0DB2: ;
    ecx = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4F32A8);
    PUSH32(esp, 0x000D0DC0u); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_000D0DC0: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0DC8u); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000D0DC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D0DD0: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x1C);
    MEM32(esi + 0x158) = eax;
    ecx = MEM32(edi);
    eax = MEM32(esi + 0x1C);
    MEM32(ecx + 0x158) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) | 2;
    ecx = esi;
    PUSH32(esp, 0x000D0DF1u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000D0DF1: ;
    eax = MEM32(esi + 4);
    eax = eax | 4;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000D0E01u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000D0E01: ;
    ebx = MEM32(esi + 4);
    ebx = ebx | 1;
    ecx = esi;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x000D0E11u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000D0E11: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x000D0E1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0E1B: ;
    ebx = MEM32(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x000D0E27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0E27: ;
    eax = MEM32(eax);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000D0E35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0E35: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + 0x394);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0E43u); RECOMP_ABI_CALL(0x00046500u, sub_00046500); /* call 0x00046500 */

loc_000D0E43: ;
    esi = MEM32(eax + 0x18);
    eax = eax + 0xC;
    eax = MEM32(0x3DD050);
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0E70; /* je: equal / zero */

loc_000D0E55: ;
    PUSH32(esp, 0x000D0E5Au); RECOMP_ABI_CALL(0x0007A660u, sub_0007A660); /* call 0x0007A660 */

loc_000D0E5A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D0E61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0E61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0E70; /* je: equal / zero */

loc_000D0E65: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x000D0E70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0E70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0E80
 * Original: 0x000D0E80 - 0x000D10BF (575 bytes, 185 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0E80(void)
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

loc_000D0E80: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000D0ED3; /* je: equal / zero */

loc_000D0E90: ;
    edi = MEM32(esp + 0x30);
    eax = MEM32(edi);
    eax = MEM32(eax + 0x554);
    ecx = esp + 0x30;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x000D0EA9u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D0EA9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0ED3; /* je: equal / zero */

loc_000D0EAF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D0EB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0EB5: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D0EDF; /* jne: not equal / not zero */

loc_000D0ED3: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_000D0EDF: ;
    eax = MEM32(edi);
    eax = eax + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D0EEFu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D0EEF: ;
    edx = MEM32(edi);
    MEM32(esp + 0x24) = 0x3E800000;
    ebx = MEM32(esi + 0x2D8);
    ecx = MEM32(edx + 0x2D8);
    eax = MEM32(ebx + 0x398);
    edx = MEM32(ecx + 0x398);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0F75; /* je: equal / zero */

loc_000D0F18: ;
    PUSH32(esp, 0x000D0F1Du); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D0F1D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C93CC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D0F2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0F2B: ;
    PUSH32(esp, 0x000D0F30u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000D0F30: ;
    edx = MEM32(0x4F33A4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x43AF0000);

loc_000D0F40: ;
    MEM32(ecx) = edx;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    edx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000D0F5Fu); RECOMP_ABI_CALL(0x0003F980u, sub_0003F980); /* call 0x0003F980 */

loc_000D0F5F: ;
    SET_LO8(eax, MEM8(esi + 0x54C));
    esp = esp + 0x1C;
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM8(esi + 0x54C) = LO8(eax);
    goto loc_000D10A1;

loc_000D0F75: ;
    ecx = esi;
    PUSH32(esp, 0x000D0F7Cu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000D0F7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0FAB; /* jne: not equal / not zero */

loc_000D0F81: ;
    PUSH32(esp, 0x000D0F86u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D0F86: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C93CC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D0F94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D0F94: ;
    PUSH32(esp, 0x000D0F99u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000D0F99: ;
    edx = MEM32(0x4F3370);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x42C80000);
    goto loc_000D0F40;

loc_000D0FAB: ;
    MEM8(esi + 0x54C) = MEM8(esi + 0x54C) & 0xEF;
    _fa = (uint32_t)(MEM8(ebx + 0x3A2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x3A2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0FCB; /* je: equal / zero */

loc_000D0FBB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4F32B8);
    ecx = esi;
    PUSH32(esp, 0x000D0FC9u); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_000D0FC9: ;
    goto loc_000D0FF0;

loc_000D0FCB: ;
    PUSH32(esp, 0x3D5D78);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000D0FD9u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D0FD9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000D0FE9u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000D0FE9: ;
    ecx = eax;
    PUSH32(esp, 0x000D0FF0u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000D0FF0: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0FF8u); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000D0FF8: ;
    SET_LO8(eax, MEM8(ebp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1035; /* je: equal / zero */

loc_000D0FFF: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = esp + 0x20;
    fp_top() = fp_top() * MEMF(0x3D5D74); /* fmul dword ptr [0x3d5d74] */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = esi;
    fp_top() = fp_top() * MEMF(0x3D5D74); /* fmul dword ptr [0x3d5d74] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D5D74); /* fmul dword ptr [0x3d5d74] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D1035u); RECOMP_ABI_CALL(0x000760D0u, xml1_guest_entity_set_velocity); /* call 0x000760D0 */

loc_000D1035: ;
    edx = MEM32(esi + 4);
    edx = edx & 0xFFFFFFFDu;
    ecx = esi;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x000D1045u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000D1045: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0xFFFFFFFBu;
    ecx = esi;
    PUSH32(esp, 0x000D1050u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000D1050: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFFFFFEu;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000D1060u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000D1060: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x000D106Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D106D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000D1087u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1087: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000D10A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D10A1: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, 0x000D10B3u); RECOMP_ABI_CALL(0x0003CDF0u, sub_0003CDF0); /* call 0x0003CDF0 */

loc_000D10B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D10C0
 * Original: 0x000D10C0 - 0x000D11FA (314 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D10C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D10C0: ;
    eax = MEM32(ecx + 0x14);
    esp = esp - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000D1126; /* je: equal / zero */

loc_000D10CD: ;
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi);
    eax = MEM32(eax + 0x554);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000D10E6u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D10E6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1110; /* je: equal / zero */

loc_000D10EC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D10F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D10F2: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1131; /* jne: not equal / not zero */

loc_000D1110: ;
    ecx = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4F32A8);
    PUSH32(esp, 0x000D111Eu); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_000D111E: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1126u); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000D1126: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_000D1131: ;
    eax = MEM32(edi);
    eax = eax + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D1141u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D1141: ;
    esp = esp + 8;
    MEM32(esp + 0x14) = 0x3F800000;
    PUSH32(esp, 0x000D1151u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D1151: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C93CC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D115Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D115F: ;
    PUSH32(esp, 0x000D1164u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000D1164: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x3C806C);
    ebx = eax;
    PUSH32(esp, 0x000D1175u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D1175: ;
    PUSH32(esp, 0x43AF0000);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    ecx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000D1197u); RECOMP_ABI_CALL(0x0003F980u, sub_0003F980); /* call 0x0003F980 */

loc_000D1197: ;
    SET_LO8(ecx, MEM8(esi + 0x54C));
    SET_LO8(ecx, LO8(ecx) & 0xEF);
    esp = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F19999A);
    MEM8(esi + 0x54C) = LO8(ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000D11C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D11C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000D11DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D11DD: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, 0x000D11EFu); RECOMP_ABI_CALL(0x0003CDF0u, sub_0003CDF0); /* call 0x0003CDF0 */

loc_000D11EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1200
 * Original: 0x000D1200 - 0x000D1461 (609 bytes, 186 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1200(void)
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

loc_000D1200: ;
    eax = MEM32(ecx + 0x14);
    esp = esp - 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000D1279; /* je: equal / zero */

loc_000D120E: ;
    edi = MEM32(esp + 0x40);
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x2F4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x000D1222u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1222: ;
    ebp = eax;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x554);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000D1239u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D1239: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1263; /* je: equal / zero */

loc_000D123F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D1245u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1245: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1285; /* jne: not equal / not zero */

loc_000D1263: ;
    ecx = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4F32A8);
    PUSH32(esp, 0x000D1271u); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_000D1271: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1279u); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000D1279: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

loc_000D1285: ;
    eax = MEM32(edi);
    eax = eax + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D1295u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D1295: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D12A9u); RECOMP_ABI_CALL(0x00120A30u, sub_00120A30); /* call 0x00120A30 */

loc_000D12A9: ;
    ebx = MEM32(0x4F32AC);
    esp = esp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x68 (32-bit) */
    MEM8(esp + 0x40) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000D12E7; /* jne: not equal / not zero */

loc_000D12BC: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000D13BA;

loc_000D12E7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x69 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1305; /* jne: not equal / not zero */

loc_000D12EC: ;
    edx = MEM32(esp + 0x30);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    goto loc_000D13BA;

loc_000D1305: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x6A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1346; /* jne: not equal / not zero */

loc_000D130A: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8240); /* fmul dword ptr [0x3c8240] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8240); /* fmul dword ptr [0x3c8240] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8240); /* fmul dword ptr [0x3c8240] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = MEMF(esp + 0x20) - fp_top(); /* fsubr dword ptr [esp + 0x20] */
    goto loc_000D13BA;

loc_000D1346: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x6B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D13B6; /* jne: not equal / not zero */

loc_000D134B: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = MEM32(0x4F3364);
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEM8(esp + 0x40) = 0;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8240); /* fmul dword ptr [0x3c8240] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8240); /* fmul dword ptr [0x3c8240] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8240); /* fmul dword ptr [0x3c8240] */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 3) & 7]; /* fadd st(3) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    goto loc_000D13BA;

loc_000D13B6: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */

loc_000D13BA: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000D13FBu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D13FB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C93CC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D1409u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1409: ;
    PUSH32(esp, 0x000D140Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000D140E: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x43AF0000);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx) = ebx;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    ecx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000D143Au); RECOMP_ABI_CALL(0x0003F980u, sub_0003F980); /* call 0x0003F980 */

loc_000D143A: ;
    MEM8(esi + 0x54C) = MEM8(esi + 0x54C) & 0xEF;
    ecx = MEM32(0x498D90);
    esp = esp + 0x18;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, 0x000D1455u); RECOMP_ABI_CALL(0x0003CDF0u, sub_0003CDF0); /* call 0x0003CDF0 */

loc_000D1455: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D1470
 * Original: 0x000D1470 - 0x000D1638 (456 bytes, 146 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1470(void)
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

loc_000D1470: ;
    eax = MEM32(ecx + 0x14);
    esp = esp - 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000D14C0; /* je: equal / zero */

loc_000D147D: ;
    edi = MEM32(esp + 0x60);
    eax = MEM32(edi);
    eax = MEM32(eax + 0x554);
    ecx = esp + 0x60;
    MEM32(esp + 0x60) = eax;
    PUSH32(esp, 0x000D1496u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D1496: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D14C0; /* je: equal / zero */

loc_000D149C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D14A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D14A2: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D14CB; /* jne: not equal / not zero */

loc_000D14C0: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 8; return; /* ret 4 */

loc_000D14CB: ;
    eax = MEM32(esi + 0x100);
    MEM32(esp + 0x20) = eax;
    ecx = MEM32(esi + 0x104);
    eax = MEM32(edi);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(esi + 0x108);
    eax = eax + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x000D14F9u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D14F9: ;
    edx = MEM32(eax);
    esp = esp + 8;
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41000000);
    ecx = esi;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x000D1520u); RECOMP_ABI_CALL(0x00076420u, sub_00076420); /* call 0x00076420 */

loc_000D1520: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D1534u); RECOMP_ABI_CALL(0x00120A30u, sub_00120A30); /* call 0x00120A30 */

loc_000D1534: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    esp = esp + 0xC;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x44); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D15A6u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D15A6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C93CC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D15B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D15B4: ;
    PUSH32(esp, 0x000D15B9u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000D15B9: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x3C806C);
    ebx = eax;
    PUSH32(esp, 0x000D15CAu); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D15CA: ;
    PUSH32(esp, 0x44160000);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    ecx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000D15ECu); RECOMP_ABI_CALL(0x0003F980u, sub_0003F980); /* call 0x0003F980 */

loc_000D15EC: ;
    ecx = MEM32(edi);
    esp = esp + 0x1C;
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D15F8u); RECOMP_ABI_CALL(0x00031450u, sub_00031450); /* call 0x00031450 */

loc_000D15F8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D161D; /* je: equal / zero */

loc_000D1602: ;
    PUSH32(esp, 0x000D1607u); RECOMP_ABI_CALL(0x0007A660u, sub_0007A660); /* call 0x0007A660 */

loc_000D1607: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D160Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D160E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D161D; /* je: equal / zero */

loc_000D1612: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x000D161Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D161D: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    ecx = MEM32(edi);
    PUSH32(esp, 0x000D162Du); RECOMP_ABI_CALL(0x0003CDF0u, sub_0003CDF0); /* call 0x0003CDF0 */

loc_000D162D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D1640
 * Original: 0x000D1640 - 0x000D169B (91 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1640: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000D1654u); RECOMP_ABI_CALL(0x000CF6B0u, xml1_guest_attack_event_parse_attribute); /* call 0x000CF6B0 */

loc_000D1654: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1693; /* je: equal / zero */

loc_000D1658: ;
    PUSH32(esp, 0x3D5D98);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D1663u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D1663: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D168B; /* jne: not equal / not zero */

loc_000D166A: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D1675u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D1675: ;
    SET_LO8(ebx, MEM8(esi + 0x18));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x18) = LO8(ecx);

loc_000D168B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D1693: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D16A0
 * Original: 0x000D16A0 - 0x000D1827 (391 bytes, 134 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D16A0(void)
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

loc_000D16A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350720);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D1810; /* je: equal / zero */

loc_000D16CF: ;
    ebx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1810; /* je: equal / zero */

loc_000D16DB: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1810; /* je: equal / zero */

loc_000D16E5: ;
    eax = MEM32(eax + 0x1C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x485874);
    ecx = esp + 0x3C;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000D16FFu); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000D16FF: ;
    _fa = (uint32_t)(MEM8(ebx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x10), 1 (8-bit) */
    MEM32(esp + 0x2C) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_000D1719; /* jne: not equal / not zero */

loc_000D1709: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1716u); RECOMP_ABI_CALL(0x00059960u, sub_00059960); /* call 0x00059960 */

loc_000D1716: ;
    esp = esp + 8;

loc_000D1719: ;
    eax = MEM32(esi + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = eax + 0x20;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000D173Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D173D: ;
    esi = MEM32(esi + 0x14);
    esi = MEM32(esi + 0x2C);
    eax = MEM32(ebx);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F800000);
    esi = eax + 0x2C;
    PUSH32(esp, esi);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000D175Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D175E: ;
    ecx = MEM32(esp + 0x34);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0x3C898C;
    PUSH32(esp, 0x000D1775u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000D1775: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x1C) = esi;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x2C) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D1789u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1789: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D17DA; /* jle: less or equal (signed <=) */

loc_000D178D: ;
    /* nop */

loc_000D1790: ;
    PUSH32(esp, 0x000D1795u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000D1795: ;
    ebp = eax;
    eax = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x18));
    ecx = ecx & 0xFFFFFF01u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    edx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(esp + 0x28) = esp;
    MEM32(eax) = edx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D17BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D17BD: ;
    eax = MEM32(eax + 0x5B4);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x1C8); PUSH32(esp, 0x000D17CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D17CF: ;
    edx = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D17D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D17D6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D1790; /* jl: less (signed <) */

loc_000D17DA: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x30) = 0;
    PUSH32(esp, 0x000D17E5u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D17E5: ;
    esp = esp + 4;
    ecx = esp + 0x34;
    MEM32(esp + 0x2C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D17F9u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D17F9: ;
    SET_LO8(eax, 1);
    ecx = MEM32(esp + 0x24);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

loc_000D1810: ;
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D1830
 * Original: 0x000D1830 - 0x000D1885 (85 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1830(void)
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

loc_000D1830: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1840; /* jne: not equal / not zero */

loc_000D183A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D1840: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000D1853u); RECOMP_ABI_CALL(0x000CF6B0u, xml1_guest_attack_event_parse_attribute); /* call 0x000CF6B0 */

loc_000D1853: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D187D; /* je: equal / zero */

loc_000D1857: ;
    PUSH32(esp, 0x3D5DB4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D1862u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D1862: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1875; /* jne: not equal / not zero */

loc_000D1869: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D186Fu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000D186F: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_000D1875: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D187D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D1890
 * Original: 0x000D1890 - 0x000D1913 (131 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1890(void)
{

loc_000D1890: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x44) = eax;
    eax = MEM32(0x5BC9D0);
    MEM32(esi + 0x20) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(0x5BC9D0);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(0x5BC9D0);
    MEM32(esi + 0x38) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(esi + 0x3C) = ecx;
    edx = MEM32(0x5BC9D8);
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x40) = edx;
    SET_LO8(eax, MEM8(esi + 0x60));
    SET_LO8(eax, LO8(eax) & 0xFD);
    SET_LO8(eax, LO8(eax) | 1);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esi + 0x60) = LO8(eax);
    PUSH32(esp, 0x000D190Du); RECOMP_ABI_CALL(0x0005CC00u, sub_0005CC00); /* call 0x0005CC00 */

loc_000D190D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1920
 * Original: 0x000D1920 - 0x000D19E1 (193 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1920(void)
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

loc_000D1920: ;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1936; /* jne: not equal / not zero */

loc_000D192D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 8; return; /* ret 4 */

loc_000D1936: ;
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 0x280) = ecx;
    SET_LO16(edx, MEM16(eax + 8));
    MEM16(esi + 0x294) = LO16(edx);
    SET_LO16(ecx, MEM16(eax + 0xA));
    MEM16(esi + 0x296) = LO16(ecx);
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0x284) = edx;
    eax = MEM32(eax + 0x18);
    PUSH32(esp, edi);
    MEM32(esi + 0x288) = eax;
    PUSH32(esp, 0x000D1977u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000D1977: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000D197Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D197E: ;
    edi = esi + 0x274;
    MEM32(esi + 0x27C) = eax;
    MEM8(edi + 0x2C) = MEM8(edi + 0x2C) | 1;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    MEM32(esi + 0x290) = 0;
    PUSH32(esp, 0x000D19A2u); RECOMP_ABI_CALL(0x000D1890u, sub_000D1890); /* call 0x000D1890 */

loc_000D19A2: ;
    PUSH32(esp, 0x000D19A7u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000D19A7: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000D19B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D19B4: ;
    MEM16(esi + 0x298) = LO16(eax);
    PUSH32(esp, 0x000D19C0u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000D19C0: ;
    fp_top() = fp_top() + MEMF(ebx + 0x18); /* fadd dword ptr [ebx + 0x18] */
    edx = MEM32(esi + 0x1C);
    MEM32(edi) = edx;
    MEMF(esi + 0x28C) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(edi + 0x2C));
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(edi + 0x2C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D19F0
 * Original: 0x000D19F0 - 0x000D1BEB (507 bytes, 171 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D19F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D19F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x350740);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D1BD4; /* je: equal / zero */

loc_000D1A1B: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1BD4; /* je: equal / zero */

loc_000D1A24: ;
    eax = MEM32(esi + 0x34);
    ebp = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000D1BA3; /* jne: not equal / not zero */

loc_000D1A38: ;
    edi = MEM32(esp + 0x44);
    eax = MEM32(edi);
    eax = MEM32(eax + 0x338);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D1A59; /* je: equal / zero */

loc_000D1A4C: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000D1A55u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000D1A55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1A62; /* jne: not equal / not zero */

loc_000D1A59: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x20), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1A7F; /* jne: not equal / not zero */

loc_000D1A62: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    ecx = MEM32(ecx + 0x338);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi);
    MEM32(esp + 0x18) = esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000D1A7Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1A7B: ;
    MEM32(esp + 0x10) = ebp;

loc_000D1A7F: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x20), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D1BBD; /* jbe: below or equal (unsigned <=) */

loc_000D1A8C: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x1C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x485874);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x000D1AA8u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000D1AA8: ;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 1 (8-bit) */
    MEM32(esp + 0x3C) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_000D1AC2; /* jne: not equal / not zero */

loc_000D1AB2: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D1ABFu); RECOMP_ABI_CALL(0x00059960u, sub_00059960); /* call 0x00059960 */

loc_000D1ABF: ;
    esp = esp + 8;

loc_000D1AC2: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(edi);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000D1AD7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1AD7: ;
    eax = MEM32(edi);
    eax = eax + 0x20;
    MEM32(esp + 0x20) = 0x3CA964;
    ecx = MEM32(eax);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x44);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x38) = 3;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x000D1B10u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000D1B10: ;
    ebp = eax;
    esp = esp + 8;
    MEM32(esp + 0x18) = ebp;
    edx = MEM32(esi + 0x18);
    eax = ZX8(MEM8(edx + 0x20));
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    MEM8(esp + 0x3C) = 1;
    if (CMP_GE(_fas, _fbs)) goto loc_000D1B6D; /* jge: greater or equal (signed >=) */

loc_000D1B2B: ;
    goto loc_000D1B30;

    /* nop */

loc_000D1B30: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D1B37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1B37: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D1B6D; /* jge: greater or equal (signed >=) */

loc_000D1B3B: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D1B44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1B44: ;
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    eax = MEM32(esi);
    MEM32(esp + 0x20) = esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000D1B58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1B58: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esp + 0x10);
    edx = ZX8(MEM8(ecx + 0x20));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000D1B30; /* jl: less (signed <) */

loc_000D1B6D: ;
    PUSH32(esp, ebp);
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x000D1B78u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D1B78: ;
    esp = esp + 4;
    ecx = esp + 0x44;
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D1B8Cu); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D1B8C: ;
    SET_LO8(eax, 1);
    ecx = MEM32(esp + 0x34);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

loc_000D1BA3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x1C);
    eax = esp;
    MEM32(esp + 0x20) = esp;
    MEM32(eax) = edx;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000D1BBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1BBD: ;
    SET_LO8(eax, 1);
    ecx = MEM32(esp + 0x34);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

loc_000D1BD4: ;
    ecx = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1BF0
 * Original: 0x000D1BF0 - 0x000D1EEC (764 bytes, 234 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1BF0(void)
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

loc_000D1BF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350760);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x48;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000D1ED5; /* je: equal / zero */

loc_000D1C1B: ;
    edi = MEM32(esp + 0x68);
    eax = MEM32(edi);
    eax = MEM32(eax + 0x338);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000D1C34u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D1C34: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1C8E; /* je: equal / zero */

loc_000D1C3A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D1C40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1C40: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1C8E; /* je: equal / zero */

loc_000D1C5E: ;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0x4F25B0);
    PUSH32(esp, 0x000D1C6Eu); RECOMP_ABI_CALL(0x000B12F0u, sub_000B12F0); /* call 0x000B12F0 */

loc_000D1C6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1DF7; /* jne: not equal / not zero */

loc_000D1C76: ;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0x4F25B8);
    PUSH32(esp, 0x000D1C86u); RECOMP_ABI_CALL(0x000B12F0u, sub_000B12F0); /* call 0x000B12F0 */

loc_000D1C86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1DF7; /* jne: not equal / not zero */

loc_000D1C8E: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 0x1C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x485874);
    ecx = esp + 0x70;
    esi = 0; /* xor self */
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x000D1CC1u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000D1CC1: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x60) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_000D1CEE; /* jne: not equal / not zero */

loc_000D1CCE: ;
    PUSH32(esp, 0x000D1CD3u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000D1CD3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000D1CDAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1CDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1CEE; /* jne: not equal / not zero */

loc_000D1CDE: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D1CEBu); RECOMP_ABI_CALL(0x00059960u, sub_00059960); /* call 0x00059960 */

loc_000D1CEB: ;
    esp = esp + 8;

loc_000D1CEE: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000D1D04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1D04: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(esp + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, 0x3F800000);
    eax = eax + 0x2C;
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000D1D23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1D23: ;
    ecx = MEM32(edi);
    ecx = ecx + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D1D33u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D1D33: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x48) = ecx;
    ecx = esp + 0x40;
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = 0x3CA95C;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x64) = 3;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x60) = 0;
    PUSH32(esp, 0x000D1D82u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000D1D82: ;
    ebp = eax;
    esp = esp + 0x10;
    MEM32(esp + 0x1C) = ebp;
    eax = MEM32(ebp);
    ecx = ebp;
    MEM8(esp + 0x60) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D1D97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1D97: ;
    ebx = eax;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000D1DD8; /* js: sign (negative) */

loc_000D1D9C: ;
    /* nop */

loc_000D1DA0: ;
    edx = MEM32(ebp);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D1DA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1DA9: ;
    esi = eax;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0x4F25B0);
    PUSH32(esp, 0x000D1DBBu); RECOMP_ABI_CALL(0x000B12F0u, sub_000B12F0); /* call 0x000B12F0 */

loc_000D1DBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1DD8; /* jne: not equal / not zero */

loc_000D1DBF: ;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0x4F25B8);
    PUSH32(esp, 0x000D1DCFu); RECOMP_ABI_CALL(0x000B12F0u, sub_000B12F0); /* call 0x000B12F0 */

loc_000D1DCF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1DD8; /* jne: not equal / not zero */

loc_000D1DD3: ;
    esi = 0; /* xor self */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_000D1DA0; /* jns: not sign (positive) */

loc_000D1DD8: ;
    PUSH32(esp, ebp);
    MEM8(esp + 0x64) = 0;
    PUSH32(esp, 0x000D1DE3u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D1DE3: ;
    esp = esp + 4;
    ecx = esp + 0x68;
    MEM32(esp + 0x60) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D1DF7u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D1DF7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1ED5; /* je: equal / zero */

loc_000D1DFF: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    ebx = MEM32(esi + 0x2D8);
    ebp = MEM32(eax);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x000D1E13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1E13: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebx;
    PUSH32(esp, 0x000D1E1Fu); RECOMP_ABI_CALL(0x000B0EA0u, xml1_guest_character_format_skin); /* call 0x000B0EA0 */

loc_000D1E1F: ;
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x170); PUSH32(esp, 0x000D1E28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1E28: ;
    PUSH32(esp, 0x000D1E2Du); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000D1E2D: ;
    edx = MEM32(edi);
    edx = MEM32(edx + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    MEM32(esp + 0x20) = esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1F8); PUSH32(esp, 0x000D1E4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1E4C: ;
    PUSH32(esp, 0x000D1E51u); RECOMP_ABI_CALL(0x00096740u, xml1_guest_powerup_definition_allocate); /* call 0x00096740 */

loc_000D1E51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1EBE; /* je: equal / zero */

loc_000D1E55: ;
    edx = MEM32(eax + 0x6C);
    ecx = MEM32(esp + 0x18);
    edx = edx & 0xFFFFF1FFu;
    MEM8(eax + 0x1C) = 0x3A;
    edx = edx | 0x100;
    MEM32(eax + 0x6C) = edx;
    edx = MEM32(ecx + 0x14);
    edx = ZX8(MEM8(edx + 0x26));
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, ecx);
    MEM32(eax + 0xA0) = 0x2D530;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    ecx = esp;
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esi + 0x1C);
    MEM32(esp + 0x6C) = esp;
    MEM32(eax + 0x20) = esi;
    edx = MEM32(0x498D90);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(ecx) = edx;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1EBEu); RECOMP_ABI_CALL(0x0002AA90u, xml1_guest_actor_attach_powerup); /* call 0x0002AA90 */

loc_000D1EBE: ;
    SET_LO8(eax, 1);
    ecx = MEM32(esp + 0x58);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 8; return; /* ret 4 */

loc_000D1ED5: ;
    ecx = MEM32(esp + 0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D1EF0
 * Original: 0x000D1EF0 - 0x000D1FC5 (213 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1EF0: ;
    eax = MEM32(ecx + 0x9C0);
    PUSH32(esp, esi);
    esi = ecx + 0x9C0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1F1E; /* jne: not equal / not zero */

loc_000D1F03: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D1FBC; /* jge: greater or equal (signed >=) */

loc_000D1F12: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1F03; /* je: equal / zero */

loc_000D1F1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1F2B; /* jne: not equal / not zero */

loc_000D1F25: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000D1F2B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1F35; /* jne: not equal / not zero */

loc_000D1F2F: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000D1F35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1F3F; /* jne: not equal / not zero */

loc_000D1F39: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000D1F3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1F4A; /* jne: not equal / not zero */

loc_000D1F43: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1F43; /* je: equal / zero */

loc_000D1F4A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D1FBC; /* jge: greater or equal (signed >=) */

loc_000D1F4F: ;
    /* nop */

loc_000D1F50: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D1FBC; /* jge: greater or equal (signed >=) */

loc_000D1F56: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1F87; /* jne: not equal / not zero */

loc_000D1F69: ;
    /* nop */

loc_000D1F70: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D1FBC; /* jge: greater or equal (signed >=) */

loc_000D1F7B: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1F70; /* je: equal / zero */

loc_000D1F87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1F94; /* jne: not equal / not zero */

loc_000D1F8E: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000D1F94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1F9E; /* jne: not equal / not zero */

loc_000D1F98: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000D1F9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1FA8; /* jne: not equal / not zero */

loc_000D1FA2: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000D1FA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1FB7; /* jne: not equal / not zero */

loc_000D1FAC: ;
    /* nop */

loc_000D1FB0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D1FB0; /* je: equal / zero */

loc_000D1FB7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D1F50; /* jl: less (signed <) */

loc_000D1FBC: ;
    edx = 0; /* xor self */
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1FD0
 * Original: 0x000D1FD0 - 0x000D2007 (55 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1FD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2003; /* je: equal / zero */

loc_000D1FD9: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D1FE0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D1FE0: ;
    edx = MEM32(0x499794);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000D2003; /* je: equal / zero */

loc_000D1FFF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D2003: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2010
 * Original: 0x000D2010 - 0x000D206B (91 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2010: ;
    SET_LO8(edx, MEM8(0x4F25A8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D202C; /* jne: not equal / not zero */

loc_000D201F: ;
    MEM32(0x4F25A8) = MEM32(0x4F25A8) | eax;
    MEM8(0x4F2580) = 0;

loc_000D202C: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D203B; /* jne: not equal / not zero */

loc_000D2034: ;
    eax = 0x3C806C;
    goto loc_000D2051;

loc_000D203B: ;
    PUSH32(esp, 0x000D2040u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D2040: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000D2051: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D5DD0);
    PUSH32(esp, 0x4F2580);
    PUSH32(esp, 0x000D2061u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_000D2061: ;
    esp = esp + 0xC;
    eax = 0x4F2580;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2070
 * Original: 0x000D2070 - 0x000D2130 (192 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2070(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2070: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000D212A; /* jne: not equal / not zero */

loc_000D207F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2086u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_000D2086: ;
    esi = eax;
    ebx = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x000D2091u); RECOMP_ABI_CALL(0x000D2010u, sub_000D2010); /* call 0x000D2010 */

loc_000D2091: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x20); PUSH32(esp, 0x000D2097u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D2097: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2122; /* jne: not equal / not zero */

loc_000D209F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D20A5u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_000D20A5: ;
    esi = MEM32(edi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000D20B5; /* jne: not equal / not zero */

loc_000D20AE: ;
    ebp = 0x3C806C;
    goto loc_000D20CB;

loc_000D20B5: ;
    PUSH32(esp, 0x000D20BAu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D20BA: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    ebp = ecx + eax + 0x4008;

loc_000D20CB: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D20D9; /* jne: not equal / not zero */

loc_000D20D2: ;
    esi = 0x3C806C;
    goto loc_000D20EF;

loc_000D20D9: ;
    PUSH32(esp, 0x000D20DEu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D20DE: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    esi = edx + eax + 0x4008;

loc_000D20EF: ;
    eax = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000D2101u); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000D2101: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C93D0);
    ecx = edi;
    PUSH32(esp, 0x000D210Fu); RECOMP_ABI_CALL(0x000D2010u, sub_000D2010); /* call 0x000D2010 */

loc_000D210F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000D2119u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D2119: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000D2122: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000D212A: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2130
 * Original: 0x000D2130 - 0x000D218F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2130: ;
    edx = ecx;
    eax = MEM32(edx + 0xA90);
    eax = MEM32(edx + eax * 4 + 0x9C8);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xA98;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0xA90);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    MEM32(edx + 0xA90) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000D2179; /* jl: less (signed <) */

loc_000D216F: ;
    MEM32(edx + 0xA90) = 0;

loc_000D2179: ;
    MEM32(edx + 0xA94) = MEM32(edx + 0xA94) - 1;
    _fa = (uint32_t)(MEM32(edx + 0xA94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xAA0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xAA0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2190
 * Original: 0x000D2190 - 0x000D25B2 (1058 bytes, 422 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2190(void)
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

loc_000D2190: ;
    if(xml1_raven_explosion_parse(ecx, MEM32(esp + 4), MEM32(esp + 8))) {
        SET_LO8(eax, 1); esp += 12; return;
    }
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x000D21A6u); RECOMP_ABI_CALL(0x000CF6B0u, xml1_guest_attack_event_parse_attribute); /* call 0x000CF6B0 */

loc_000D21A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D25A8; /* je: equal / zero */

loc_000D21AE: ;
    eax = MEM32(esi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D25A8; /* je: equal / zero */

loc_000D21BB: ;
    PUSH32(esp, 0x3D5E68);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D21C6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D21C6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D21E3; /* jne: not equal / not zero */

loc_000D21CD: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    ecx = ecx + 0x18;
    PUSH32(esp, 0x000D21D9u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D21D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D21E3: ;
    PUSH32(esp, 0x3D5E60);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D21EEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D21EE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D220B; /* jne: not equal / not zero */

loc_000D21F5: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    ecx = ecx + 0x1C;
    PUSH32(esp, 0x000D2201u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D2201: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D220B: ;
    PUSH32(esp, 0x3D5E58);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D2216u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2216: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2236; /* jne: not equal / not zero */

loc_000D221D: ;
    /* Imported talent count; literal XML1 counts remain native. */
    if(xml1_raven_projectile_count_parse(esi, edi)) {
        POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); SET_LO8(eax, 1);
        POP32(esp, ebx); POP32(esp, ecx); esp += 12; return;
    }
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2223u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000D2223: ;
    ecx = MEM32(esi + 0x18);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx + 0x20) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D2236: ;
    PUSH32(esp, 0x3D5E50);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D2241u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2241: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2261; /* jne: not equal / not zero */

loc_000D2248: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D224Eu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000D224E: ;
    edx = MEM32(esi + 0x18);
    esp = esp + 4;
    MEMF(edx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D2261: ;
    PUSH32(esp, 0x3D5E48);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D226Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D226C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D228C; /* jne: not equal / not zero */

loc_000D2273: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2279u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000D2279: ;
    eax = MEM32(esi + 0x18);
    esp = esp + 4;
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D228C: ;
    PUSH32(esp, 0x3D071C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D2297u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2297: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D22CF; /* jne: not equal / not zero */

loc_000D229E: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D22A9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D22A9: ;
    esi = MEM32(esi + 0x18);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ebx, MEM8(esi + 0x30));
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x30) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D22CF: ;
    PUSH32(esp, 0x3D5D34);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D22DAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D22DA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D230D; /* jne: not equal / not zero */

loc_000D22E1: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D22ECu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D22EC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ebx, MEM8(esi + 0x30));
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x30) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D230D: ;
    PUSH32(esp, 0x3D5E3C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D2318u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2318: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D234D; /* jne: not equal / not zero */

loc_000D231F: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D232Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D232A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ebx, MEM8(esi + 0x30));
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x30) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D234D: ;
    PUSH32(esp, 0x3D5E2C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D2358u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2358: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D238E; /* jne: not equal / not zero */

loc_000D235F: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D236Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D236A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ebx, MEM8(esi + 0x30));
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 5);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x20);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x30) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D238E: ;
    PUSH32(esp, 0x3D5E24);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D2399u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2399: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D23CE; /* jne: not equal / not zero */

loc_000D23A0: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D23ABu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D23AB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ebx, MEM8(esi + 0x30));
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x30) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D23CE: ;
    PUSH32(esp, 0x3D5E18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D23D9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D23D9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D240E; /* jne: not equal / not zero */

loc_000D23E0: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D23EBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D23EB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ebx, MEM8(esi + 0x30));
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x30) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D240E: ;
    PUSH32(esp, 0x3D5E00);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D2419u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2419: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D244F; /* jne: not equal / not zero */

loc_000D2420: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D242Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D242B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ebx, MEM8(esi + 0x30));
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 3);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x30) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D244F: ;
    PUSH32(esp, 0x3D5DF4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D245Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D245A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D24A5; /* jne: not equal / not zero */

loc_000D2461: ;
    ebx = esi + 0x28;
    PUSH32(esp, ebx);
    ebp = esi + 0x24;
    PUSH32(esp, ebp);
    esi = esi + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C875C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2478u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_000D2478: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    esp = esp + 0x14;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp)); /* fld float */
    POP32(esp, esi);
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx)); /* fld float */
    POP32(esp, ebp);
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D24A5: ;
    PUSH32(esp, 0x3D5DE4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D24B0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D24B0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D24DF; /* jne: not equal / not zero */

loc_000D24B7: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x000D24CBu); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_000D24CB: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0x2C) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D24DF: ;
    PUSH32(esp, 0x3D4A54);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D24EAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D24EA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2523; /* jne: not equal / not zero */

loc_000D24F1: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM8(esp + 0x24) = LO8(ebx);
    PUSH32(esp, 0x000D2500u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_000D2500: ;
    MEM32(esi + 0x1C) = eax;
    SET_LO8(eax, MEM8(esp + 0x24));
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D259E; /* jne: not equal / not zero */

loc_000D2512: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 0xFFFFFFFFu;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D2523: ;
    PUSH32(esp, 0x3D3AA8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D252Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D252E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D257D; /* jne: not equal / not zero */

loc_000D2535: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CFBB4);
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x000D255Bu); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_000D255B: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    SET_LO8(edx, MEM8(esp + 0x30));
    SET_LO8(ecx, MEM8(esp + 0x24));
    esp = esp + 0x14;
    POP32(esp, edi);
    MEM8(esi + 0x2E) = LO8(eax);
    MEM8(esi + 0x2D) = LO8(edx);
    MEM8(esi + 0x2F) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D257D: ;
    PUSH32(esp, 0x3C8660);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D2588u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2588: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D259E; /* jne: not equal / not zero */

loc_000D258F: ;
    /* Imported symbolic entity lifetime; literal values remain native. */
    if(xml1_raven_spawn_life_parse(esi, edi)) {
        POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); SET_LO8(eax, 1);
        POP32(esp, ebx); POP32(esp, ecx); esp += 12; return;
    }
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2595u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000D2595: ;
    edx = MEM32(esi + 0x18);
    MEMF(edx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_000D259E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D25A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
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
 * sub_000D25C0
 * Original: 0x000D25C0 - 0x000D29AB (1003 bytes, 334 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D25C0(void)
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

loc_000D25C0: ;
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000D299F; /* je: equal / zero */

loc_000D25D4: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D299F; /* je: equal / zero */

loc_000D25DF: ;
    eax = MEM32(esi + 0x18);
    SET_LO8(edx, MEM8(eax + 0x30));
    edi = MEM32(esp + 0x8C);
    SET_LO8(ecx, MEM8(edi + 0x10));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x30) = LO8(edx);
    raven_projectile_fire_event(esi, MEM32(edi), MEM32(edi + 4));
    eax = MEM32(esi + 0x1C);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2621; /* je: equal / zero */

loc_000D2603: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D260Fu); RECOMP_ABI_CALL(0x0002E900u, sub_0002E900); /* call 0x0002E900 */

loc_000D260F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D264F; /* jne: not equal / not zero */

loc_000D2613: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    edx = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D261Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D261F: ;
    goto loc_000D263C;

loc_000D2621: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x30), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2635; /* je: equal / zero */

loc_000D2627: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    eax = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000D2633u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D2633: ;
    goto loc_000D263C;

loc_000D2635: ;
    eax = MEM32(edi);
    eax = eax + 0x20;
    SET_LO8(ebx, 1);

loc_000D263C: ;
    edx = MEM32(eax);
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;

loc_000D264F: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x2C);
    eax = eax + 0x2C;
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 4);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x2D);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    eax = MEM32(eax + 8);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x2E);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x2F);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = eax;
    ecx = esp + 0x48;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D26A8u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_000D26A8: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    esp = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, 0x000D26C3u); RECOMP_ABI_CALL(0x0023E770u, sub_0023E770); /* call 0x0023E770 */

loc_000D26C3: ;
    PUSH32(esp, 1);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, 0x000D26D6u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000D26D6: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = MEM32(esi + 0x18);
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x334), 1 (8-bit) */
    ecx = MEM32(eax + 0x338);
    if (TEST_Z(_fa, _fb)) goto loc_000D2727; /* je: equal / zero */

loc_000D2706: ;
    PUSH32(esp, 0x000D270Bu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000D270B: ;
    ecx = MEM32(edi);
    ecx = MEM32(ecx + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x16C); PUSH32(esp, 0x000D2723u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D2723: ;
    ecx = MEM32(esp + 0x10);

loc_000D2727: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000D2731u); RECOMP_ABI_CALL(0x0002B810u, sub_0002B810); /* call 0x0002B810 */

loc_000D2731: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x31 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2899; /* je: equal / zero */

loc_000D2740: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2899; /* je: equal / zero */

loc_000D2748: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(esp + 0x38) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000D277C; /* jne: not equal / not zero */

loc_000D275E: ;
    edx = MEM32(eax);
    fp_pop(); /* fstp st(0) */
    ecx = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000D276Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D276C: ;
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;

loc_000D277C: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x30), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2816; /* je: equal / zero */

loc_000D2786: ;
    ecx = MEM32(esi + 0x18);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = 0;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C97B8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c97b8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D27D3; /* jne: not equal / not zero */

loc_000D27CB: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C97B8)); /* fld float */

loc_000D27D3: ;
    fp_push(MEMF(0x3C9404)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8388)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8388] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D27F0; /* jp: parity */

loc_000D27E8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3D5E74)); /* fld float */

loc_000D27F0: ;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000D2806u); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000D2806: ;
    edx = MEM32(esp + 0x4C);
    esp = esp + 8;
    MEM32(esp + 0x20) = edx;
    goto loc_000D2899;

loc_000D2816: ;
    eax = MEM32(esi + 0x18);
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 8); /* fsub dword ptr [eax + 8] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x44);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x18);
    ecx = ecx + 0xC;
    PUSH32(esp, 0x000D2847u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000D2847: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esi + 0x18);
    edx = edx + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D285Au); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000D285A: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(eax);
    ecx = ecx + 0xC;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, MEM8(esi + 0x30));
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2884; /* je: equal / zero */

loc_000D287A: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 0x1C) = edx;

loc_000D2884: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2899; /* je: equal / zero */

loc_000D2888: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x18) = edx;

loc_000D2899: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = esp + 0x18;
    fp_top() = fp_top() + MEMF(esi + 0x20); /* fadd dword ptr [esi + 0x20] */
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D28C9u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D28C9: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(eax);
    ecx = ecx + 0xC;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, MEM8(esi + 0x30));
    ebp = MEM32(edi + 4);
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D28EE; /* je: equal / zero */

loc_000D28EC: ;
    ebp = 0; /* xor self */

loc_000D28EE: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x2C);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D2903u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000D2903: ;
    xml1_raven_trace_projectile(esi, MEM32(edi), eax);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); if(!xml1_raven_projectile_spawn(esi, _icall_target)) { PUSH32(esp, 0x000D2920u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } } /* indirect call */
    }

loc_000D2920: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000D292Eu); RECOMP_ABI_CALL(0x00029470u, sub_00029470); /* call 0x00029470 */

loc_000D292E: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2993; /* je: equal / zero */

loc_000D2937: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D296E; /* je: equal / zero */

loc_000D293B: ;
    fp_push(MEMF(edi + 0x4C)); /* fld float */
    eax = MEM32(edi + 0x20);
    fp_top() = fp_top() - MEMF(edi + 0x40); /* fsub dword ptr [edi + 0x40] */
    ecx = MEM32(edi + 0x24);
    edx = MEM32(edi);
    MEM32(esp + 0x30) = eax;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    eax = esp + 0x30;
    MEM32(esp + 0x34) = ecx;
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    fp_top() = fp_top() + MEMF(edi + 0x28); /* fadd dword ptr [edi + 0x28] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000D296Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D296E: ;
    if(xml1_raven_spawn_lifetime(esi, edi, MEM32(MEM32(esp + 0x8C)))) goto loc_000D2993;
    esi = MEM32(esi + 0x18);
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2993; /* jne: not equal / not zero */

loc_000D2981: ;
    eax = MEM32(esi + 0x2C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x000D2993u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D2993: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 8; return; /* ret 4 */

loc_000D299F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D29B0
 * Original: 0x000D29B0 - 0x000D2BB2 (514 bytes, 157 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D29B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D29B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x350790);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000D2B5B; /* je: equal / zero */

loc_000D29D9: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2B5B; /* je: equal / zero */

loc_000D29E4: ;
    edi = MEM32(esp + 0x84);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D29F1u); RECOMP_ABI_CALL(0x000CF4D0u, sub_000CF4D0); /* call 0x000CF4D0 */

loc_000D29F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2B5B; /* je: equal / zero */

loc_000D29F9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2B72; /* jne: not equal / not zero */

loc_000D2A01: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x000D2A0Au); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000D2A0A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D5E78);
    ecx = esp + 0x18;
    MEM32(esp + 0x84) = edi;
    PUSH32(esp, 0x000D2A21u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000D2A21: ;
    ecx = MEM32(esi + 0x18);
    ecx = ecx + 0x18;
    MEM8(esp + 0x7C) = 1;
    PUSH32(esp, 0x000D2A31u); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_000D2A31: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000D2A3Bu); RECOMP_ABI_CALL(0x001259D0u, sub_001259D0); /* call 0x001259D0 */

loc_000D2A3B: ;
    PUSH32(esp, 0x000D2A40u); RECOMP_ABI_CALL(0x0014A660u, sub_0014A660); /* call 0x0014A660 */

loc_000D2A40: ;
    ecx = esp + 0x10;
    edi = eax;
    PUSH32(esp, 0x000D2A4Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000D2A4B: ;
    ebx = MEM32(edi);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x000D2A56u); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000D2A56: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebx + 0xC); PUSH32(esp, 0x000D2A5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D2A5D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = esp + 0x10;
    PUSH32(esp, 2);
    if (TEST_Z(_fa, _fb)) goto loc_000D2A8C; /* je: equal / zero */

loc_000D2A67: ;
    PUSH32(esp, 0x000D2A6Cu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000D2A6C: ;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000D2A76u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000D2A76: ;
    ecx = esi;
    MEM8(esp + 0x7C) = 2;
    PUSH32(esp, 0x000D2A82u); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000D2A82: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    goto loc_000D2AAC;

loc_000D2A8C: ;
    PUSH32(esp, 0x000D2A91u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000D2A91: ;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000D2A9Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000D2A9B: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    ecx = esp + 0x28;
    MEM8(esp + 0x84) = 3;
    PUSH32(esp, ecx);

loc_000D2AAC: ;
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000D2AB5u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000D2AB5: ;
    ecx = esp + 0x20;
    MEM8(esp + 0x7C) = 1;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000D2AC5u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000D2AC5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2B3C; /* je: equal / zero */

loc_000D2AC9: ;
    PUSH32(esp, 0x000D2ACEu); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_000D2ACE: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 1);
    edi = eax;
    ebx = MEM32(edi);
    PUSH32(esp, 1);
    ecx = ecx + 0x18;
    PUSH32(esp, 0x000D2AE1u); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_000D2AE1: ;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x90) = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D2AF1u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D2AF1: ;
    ecx = esi;
    PUSH32(esp, 0x000D2AF8u); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000D2AF8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 4); PUSH32(esp, 0x000D2B06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D2B06: ;
    ecx = esp + 0x10;
    MEM8(esp + 0x7C) = 0;
    PUSH32(esp, 0x000D2B14u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000D2B14: ;
    ecx = esp + 0x30;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D2B25u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000D2B25: ;
    SET_LO8(eax, 1);
    ecx = MEM32(esp + 0x74);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 8; return; /* ret 4 */

loc_000D2B3C: ;
    ecx = esp + 0x10;
    MEM8(esp + 0x7C) = 0;
    PUSH32(esp, 0x000D2B4Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000D2B4A: ;
    ecx = esp + 0x30;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D2B5Bu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000D2B5B: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 0x74);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 8; return; /* ret 4 */

loc_000D2B72: ;
    PUSH32(esp, 0x000D2B77u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_000D2B77: ;
    ecx = MEM32(esi + 0x18);
    edi = eax;
    ebx = MEM32(edi);
    ecx = ecx + 0x18;
    PUSH32(esp, 0x000D2B86u); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_000D2B86: ;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x88) = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D2B96u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D2B96: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebx + 0x10); PUSH32(esp, 0x000D2B9Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D2B9B: ;
    ecx = MEM32(esp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2BC0
 * Original: 0x000D2BC0 - 0x000D2CCF (271 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2BC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000D2BD4u); RECOMP_ABI_CALL(0x000D2190u, sub_000D2190); /* call 0x000D2190 */

loc_000D2BD4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2CC7; /* je: equal / zero */

loc_000D2BDC: ;
    PUSH32(esp, 0x3D5EB4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D2BE7u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2BE7: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2C17; /* jne: not equal / not zero */

loc_000D2BEE: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2BF9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2BF9: ;
    SET_LO8(ebx, MEM8(esi + 0x38));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x38) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D2C17: ;
    PUSH32(esp, 0x3D5EA4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D2C22u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2C22: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2C55; /* jne: not equal / not zero */

loc_000D2C29: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2C34u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2C34: ;
    SET_LO8(ebx, MEM8(esi + 0x38));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x38) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D2C55: ;
    PUSH32(esp, 0x3D5E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D2C60u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2C60: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2C94; /* jne: not equal / not zero */

loc_000D2C67: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2C72u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2C72: ;
    SET_LO8(ebx, MEM8(esi + 0x38));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x38) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D2C94: ;
    PUSH32(esp, 0x3D5E88);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D2C9Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2C9F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2CBF; /* jne: not equal / not zero */

loc_000D2CA6: ;
    PUSH32(esp, 0x3D3AE8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2CB1u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D2CB1: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2CBF; /* jne: not equal / not zero */

loc_000D2CB8: ;
    MEM32(esi + 0x34) = 1;

loc_000D2CBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D2CC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D2CD0
 * Original: 0x000D2CD0 - 0x000D2F55 (645 bytes, 199 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2CD0(void)
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

loc_000D2CD0: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2F48; /* je: equal / zero */

loc_000D2CE7: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2F48; /* je: equal / zero */

loc_000D2CF2: ;
    ecx = MEM32(0x5BC9D4);
    eax = MEM32(0x5BC9D0);
    edx = MEM32(0x5BC9D8);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x9C);
    eax = esp;
    MEM32(esp + 0x2C) = edx;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000D2D20u); RECOMP_ABI_CALL(0x00027BA0u, sub_00027BA0); /* call 0x00027BA0 */

loc_000D2D20: ;
    ebp = MEM32(esp + 0x98);
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2D72; /* jne: not equal / not zero */

loc_000D2D30: ;
    esi = MEM32(ebp);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D2D41u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D2D41: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    esp = esp + 8;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    goto loc_000D2D76;

loc_000D2D72: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */

loc_000D2D76: ;
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    eax = MEM32(ebp);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = eax + 0x2C;
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x20); /* fadd dword ptr [esi + 0x20] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax);
    MEM32(esp + 0x38) = ecx;
    edx = MEM32(eax + 4);
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x2D);
    MEM32(esp + 0x3C) = edx;
    eax = MEM32(eax + 8);
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x2E);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x40) = eax;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x2F);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(MEM8(edi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x38), 1 (8-bit) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2E20; /* jne: not equal / not zero */

loc_000D2DE3: ;
    ecx = esp + 0x50;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D2DF2u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_000D2DF2: ;
    edx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x40);
    esp = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x000D2E0Du); RECOMP_ABI_CALL(0x0023E770u, sub_0023E770); /* call 0x0023E770 */

loc_000D2E0D: ;
    PUSH32(esp, 1);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x000D2E20u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000D2E20: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    SET_LO8(eax, MEM8(edi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_000D2E55; /* je: equal / zero */

loc_000D2E4B: ;
    ecx = MEM32(ebp);
    edx = MEM32(ecx + 0x28);
    MEM32(esp + 0x1C) = edx;

loc_000D2E55: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2E70; /* je: equal / zero */

loc_000D2E5D: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D2E70u); RECOMP_ABI_CALL(0x0002E970u, sub_0002E970); /* call 0x0002E970 */

loc_000D2E70: ;
    eax = MEM32(edi + 0x18);
    esi = MEM32(eax + 0x1C);
    eax = eax + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2E84; /* jne: not equal / not zero */

loc_000D2E7D: ;
    ebx = 0x3C806C;
    goto loc_000D2E9A;

loc_000D2E84: ;
    PUSH32(esp, 0x000D2E89u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D2E89: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    ebx = ecx + eax + 0x4008;

loc_000D2E9A: ;
    eax = MEM32(edi + 0x18);
    esi = MEM32(eax + 0x1C);
    eax = eax + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D2EAE; /* jne: not equal / not zero */

loc_000D2EA7: ;
    eax = 0x3C806C;
    goto loc_000D2EC4;

loc_000D2EAE: ;
    PUSH32(esp, 0x000D2EB3u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D2EB3: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x4008;

loc_000D2EC4: ;
    PUSH32(esp, 0);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D2ED7u); RECOMP_ABI_CALL(0x00068060u, sub_00068060); /* call 0x00068060 */

loc_000D2ED7: ;
    esi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2F48; /* je: equal / zero */

loc_000D2EE0: ;
    _fa = (uint32_t)(MEM8(edi + 0x38)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x38), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2EF6; /* je: equal / zero */

loc_000D2EE6: ;
    ecx = MEM32(ebp);
    PUSH32(esp, 0x000D2EEEu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000D2EEE: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D2EF6u); RECOMP_ABI_CALL(0x0002E320u, sub_0002E320); /* call 0x0002E320 */

loc_000D2EF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2EFCu); RECOMP_ABI_CALL(0x00059B10u, sub_00059B10); /* call 0x00059B10 */

loc_000D2EFC: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2F0E; /* je: equal / zero */

loc_000D2F03: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000D2F0Eu); RECOMP_ABI_CALL(0x00096810u, xml1_guest_projectile_set_damage_record); /* call 0x00096810 */

loc_000D2F0E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2F14u); RECOMP_ABI_CALL(0x000D1FD0u, sub_000D1FD0); /* call 0x000D1FD0 */

loc_000D2F14: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2F48; /* je: equal / zero */

loc_000D2F1D: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2F3A; /* je: equal / zero */

loc_000D2F24: ;
    ecx = MEM32(eax + 0x2F4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000D2F32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D2F32: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x48) = edx;

loc_000D2F3A: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x000D2F48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D2F48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D2F60
 * Original: 0x000D2F60 - 0x000D302D (205 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2F60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000D3025; /* je: equal / zero */

loc_000D2F70: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3025; /* je: equal / zero */

loc_000D2F7B: ;
    eax = MEM32(esi + 0x18);
    edi = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(edi + 0x10));
    SET_LO8(edx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x30) = LO8(edx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x000D2F99u); RECOMP_ABI_CALL(0x00038D00u, sub_00038D00); /* call 0x00038D00 */

loc_000D2F99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2FAE; /* je: equal / zero */

loc_000D2F9D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2FAE; /* je: equal / zero */

loc_000D2FA2: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    ecx = ecx + 0x1C;
    PUSH32(esp, 0x000D2FAEu); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D2FAE: ;
    edx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x338);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000D2FC0u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000D2FC0: ;
    ebx = eax;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2FE5; /* je: equal / zero */

loc_000D2FC9: ;
    ecx = ebx;
    PUSH32(esp, 0x000D2FD0u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000D2FD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2FE5; /* jne: not equal / not zero */

loc_000D2FD5: ;
    _fa = (uint32_t)(MEM8(ebx + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x334), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2FE5; /* je: equal / zero */

loc_000D2FDE: ;
    ecx = ebx;
    PUSH32(esp, 0x000D2FE5u); RECOMP_ABI_CALL(0x00031D60u, sub_00031D60); /* call 0x00031D60 */

loc_000D2FE5: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    ecx = eax + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D2FFCu); RECOMP_ABI_CALL(0x00038C60u, sub_00038C60); /* call 0x00038C60 */

loc_000D2FFC: ;
    PUSH32(esp, 0x000D3001u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000D3001: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000D301Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D301D: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D3025: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3030
 * Original: 0x000D3030 - 0x000D3264 (564 bytes, 203 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3030: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esp + 0x54) = eax;
    esi = ecx;
    PUSH32(esp, 0x000D3050u); RECOMP_ABI_CALL(0x000E3FB0u, sub_000E3FB0); /* call 0x000E3FB0 */

loc_000D3050: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3250; /* je: equal / zero */

loc_000D3058: ;
    PUSH32(esp, 0x3D5EE8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D3063u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D3063: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D3087; /* jne: not equal / not zero */

loc_000D306A: ;
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    PUSH32(esp, 0x000D3073u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D3073: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x000D3081u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000D3081: ;
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

loc_000D3087: ;
    PUSH32(esp, 0x3C91A4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D3092u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D3092: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D30D9; /* jne: not equal / not zero */

loc_000D3099: ;
    PUSH32(esp, 0x40);
    eax = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D30A6u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000D30A6: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM8(esp + 0x5B) = 0;
    PUSH32(esp, 0x000D30B5u); RECOMP_ABI_CALL(0x003444C3u, sub_003444C3); /* call 0x003444C3 */

loc_000D30B5: ;
    esp = esp + 0x10;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi + 0x10;
    PUSH32(esp, 0x000D30C5u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D30C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x000D30D3u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000D30D3: ;
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

loc_000D30D9: ;
    PUSH32(esp, 0x3C96F4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D30E4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D30E4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D3108; /* jne: not equal / not zero */

loc_000D30EB: ;
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    PUSH32(esp, 0x000D30F4u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D30F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x000D3102u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000D3102: ;
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

loc_000D3108: ;
    PUSH32(esp, 0x3C9708);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D3113u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D3113: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D3137; /* jne: not equal / not zero */

loc_000D311A: ;
    PUSH32(esp, edi);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x000D3123u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D3123: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x000D3131u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000D3131: ;
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

loc_000D3137: ;
    PUSH32(esp, 0x3D5ED8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D3142u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D3142: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D317E; /* jne: not equal / not zero */

loc_000D3149: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3154u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D3154: ;
    SET_LO8(ebx, MEM8(esi + 0x21));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x21) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x000D3178u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000D3178: ;
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

loc_000D317E: ;
    PUSH32(esp, 0x3D5ECC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D3189u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D3189: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D31C8; /* jne: not equal / not zero */

loc_000D3190: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D319Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D319B: ;
    SET_LO8(ebx, MEM8(esi + 0x21));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x21) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x000D31C2u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000D31C2: ;
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

loc_000D31C8: ;
    PUSH32(esp, 0x3D5EC0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D31D3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D31D3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D3213; /* jne: not equal / not zero */

loc_000D31DA: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D31E5u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D31E5: ;
    SET_LO8(ebx, MEM8(esi + 0x21));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x21) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x000D320Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000D320D: ;
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

loc_000D3213: ;
    PUSH32(esp, 0x3CB6D0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D321Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D321E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D323C; /* jne: not equal / not zero */

loc_000D3225: ;
    PUSH32(esp, 0x000D322Au); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D322A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3234u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3234: ;
    PUSH32(esp, 0x000D3239u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000D3239: ;
    MEM8(esi + 0x20) = LO8(eax);

loc_000D323C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x000D324Au); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000D324A: ;
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

loc_000D3250: ;
    ecx = MEM32(esp + 0x4C);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    PUSH32(esp, 0x000D325Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000D325E: ;
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D3270
 * Original: 0x000D3270 - 0x000D3D00 (2704 bytes, 756 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3270(void)
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

loc_000D3270: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3507B6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1F0;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x1EC) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    MEM32(esp + 0x14) = ebp;
    eax = MEM32(esp + 0x210);
    edx = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0x20);
    edi = eax + 0x20;
    eax = eax + 0x2C;
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 8);
    eax = ZX8(MEM8(ebp + 0x20));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000D3403; /* jle: less or equal (signed <=) */

loc_000D32E4: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x485874);
    ecx = esp + 0x38;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x48) = ebx;
    PUSH32(esp, 0x000D3301u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000D3301: ;
    eax = MEM32(esp + 0x30);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x210) = ebx;
    MEM32(esp + 0x18) = 0x3C898C;
    PUSH32(esp, 0x000D331Fu); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000D331F: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x6C) = esi;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x208) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D3336u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3336: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D33B3; /* jle: less or equal (signed <=) */

loc_000D333A: ;
    /* nop */

loc_000D3340: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D3348u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3348: ;
    fp_push(MEMF(eax + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D33A8; /* jne: not equal / not zero */

loc_000D335B: ;
    ebp = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D3369; /* jne: not equal / not zero */

loc_000D3362: ;
    ebp = 0x3C806C;
    goto loc_000D337F;

loc_000D3369: ;
    PUSH32(esp, 0x000D336Eu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D336E: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    ebp = ecx + eax + 0x4008;

loc_000D337F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D3387u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3387: ;
    eax = MEM32(eax + 0x2D8);
    eax = eax + 0x20C;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3399u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D3399: ;
    ebp = MEM32(esp + 0x1C);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D33A8; /* jne: not equal / not zero */

loc_000D33A4: ;
    MEM32(esp + 0x50) = MEM32(esp + 0x50) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D33A8: ;
    eax = MEM32(esi);
    ecx = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D33AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D33AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D3340; /* jl: less (signed <) */

loc_000D33B3: ;
    ecx = ZX8(MEM8(ebp + 0x20));
    _fa = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x50), ecx (32-bit) */
    PUSH32(esp, esi);
    MEM8(esp + 0x20C) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_000D33E7; /* jl: less (signed <) */

loc_000D33C6: ;
    PUSH32(esp, 0x000D33CBu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D33CB: ;
    esp = esp + 4;
    ecx = esp + 0x30;
    MEM32(esp + 0x208) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D33E2u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D33E2: ;
    goto loc_000D3CD9;

loc_000D33E7: ;
    PUSH32(esp, 0x000D33ECu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D33EC: ;
    esp = esp + 4;
    ecx = esp + 0x30;
    MEM32(esp + 0x208) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D3403u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D3403: ;
    ecx = ebp;
    PUSH32(esp, 0x000D340Au); RECOMP_ABI_CALL(0x000D2010u, sub_000D2010); /* call 0x000D2010 */

loc_000D340A: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    edx = esp + 0xC4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D341Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000D341A: ;
    esi = MEM32(ebp + 0x10);
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(esp + 0xFB) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_000D3433; /* jne: not equal / not zero */

loc_000D342C: ;
    eax = 0x3C806C;
    goto loc_000D3449;

loc_000D3433: ;
    PUSH32(esp, 0x000D3438u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D3438: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000D3449: ;
    PUSH32(esp, 0x3D5F38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3454u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000D3454: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D347A; /* je: equal / zero */

loc_000D345B: ;
    PUSH32(esp, 0x40);
    edx = esp + 0xC0;
    PUSH32(esp, 0x3D5F2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D346Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000D346F: ;
    esp = esp + 0xC;
    MEM8(esp + 0xFB) = 0;

loc_000D347A: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D3488; /* jne: not equal / not zero */

loc_000D3481: ;
    eax = 0x3C806C;
    goto loc_000D349E;

loc_000D3488: ;
    PUSH32(esp, 0x000D348Du); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D348D: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000D349E: ;
    PUSH32(esp, 0);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D34B8u); RECOMP_ABI_CALL(0x00068060u, sub_00068060); /* call 0x00068060 */

loc_000D34B8: ;
    esi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3CD9; /* je: equal / zero */

loc_000D34C5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D34CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D34CB: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3CD9; /* je: equal / zero */

loc_000D34ED: ;
    _fa = (uint32_t)(MEM8(ebp + 0x21)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x21), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D34FE; /* je: equal / zero */

loc_000D34F3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x000D34FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D34FE: ;
    eax = MEM32(esi + 0x20);
    fp_push(MEMF(esi + 0x24)); /* fld float */
    MEM32(esp + 0x54) = eax;
    _fa = (uint32_t)(MEM8(ebp + 0x21)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x21), 4 (8-bit) */
    MEM32(esp + 0x68) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000D353A; /* je: equal / zero */

loc_000D3516: ;
    eax = MEM32(esp + 0x210);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    ecx = MEM32(eax + 0x2C);
    fp_top() = fp_top() + MEMF(0x3C837C); /* fadd dword ptr [0x3c837c] */
    edx = MEM32(eax + 0x30);
    eax = eax + 0x2C;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000D35E8;

loc_000D353A: ;
    fp_top() = fp_top() - MEMF(esp + 0x64); /* fsub dword ptr [esp + 0x64] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x60); /* fsub dword ptr [esp + 0x60] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C93C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c93c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D35CF; /* jne: not equal / not zero */

loc_000D3567: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = esp + 0x34;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, eax);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    ecx = esp + 0x48;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D35B6u); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000D35B6: ;
    edx = MEM32(eax);
    MEM32(esp + 0x3C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0x3C) = edx;
    goto loc_000D35F0;

loc_000D35CF: ;
    eax = MEM32(esp + 0x210);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(eax + 0x2C);
    edx = MEM32(eax + 0x30);
    eax = eax + 0x2C;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = eax;

loc_000D35E8: ;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;

loc_000D35F0: ;
    ebp = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D35FE; /* jne: not equal / not zero */

loc_000D35F7: ;
    eax = 0x3C806C;
    goto loc_000D3614;

loc_000D35FE: ;
    PUSH32(esp, 0x000D3603u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D3603: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000D3614: ;
    PUSH32(esp, 0x3D5F1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D361Fu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000D361F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D369B; /* je: equal / zero */

loc_000D3626: ;
    eax = MEM32(esp + 0x210);
    eax = eax + 0x2C;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D363Bu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D363B: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C9780); /* fmul dword ptr [0x3c9780] */
    eax = MEM32(esi);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    esp = esp + 8;
    fp_top() = fp_top() * MEMF(0x3C9780); /* fmul dword ptr [0x3c9780] */
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C9780); /* fmul dword ptr [0x3c9780] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x148); PUSH32(esp, 0x000D368Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D368F: ;
    ebx = MEM32(esp + 0x210);
    goto loc_000D3AE8;

loc_000D369B: ;
    ebx = MEM32(esp + 0x210);
    eax = MEM32(ebx + 0x2D8);
    eax = eax + 0x20C;
    PUSH32(esp, 0x3D5F10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D36B8u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000D36B8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3825; /* je: equal / zero */

loc_000D36C3: ;
    edx = MEM32(esp + 0x14);
    ebp = MEM32(edx + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D36D5; /* jne: not equal / not zero */

loc_000D36CE: ;
    eax = 0x3C806C;
    goto loc_000D36EB;

loc_000D36D5: ;
    PUSH32(esp, 0x000D36DAu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D36DA: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000D36EB: ;
    PUSH32(esp, 0x3D5F10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D36F6u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000D36F6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D3825; /* jne: not equal / not zero */

loc_000D3701: ;
    eax = ebx + 0x2C;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D370Fu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D370F: ;
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D3723u); RECOMP_ABI_CALL(0x00120A30u, sub_00120A30); /* call 0x00120A30 */

loc_000D3723: ;
    PUSH32(esp, 0x42700000);
    PUSH32(esp, 0xC2700000u);
    PUSH32(esp, 0x000D3732u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000D3732: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    PUSH32(esp, 0x42700000);
    PUSH32(esp, 0xC2700000u);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D3781u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000D3781: ;
    fp_push(MEMF(esp + 0x80)); /* fld float */
    eax = MEM32(esi);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    esp = esp + 0x24;
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x44); /* fadd dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x148); PUSH32(esp, 0x000D37DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D37DA: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = esp + 0x24;
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = esp + 0x48;
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D3809u); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000D3809: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(eax + 4);
    esp = esp + 8;
    MEM32(esp + 0x38) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = eax;
    goto loc_000D3AE8;

loc_000D3825: ;
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D3837; /* jne: not equal / not zero */

loc_000D3830: ;
    eax = 0x3C806C;
    goto loc_000D384D;

loc_000D3837: ;
    PUSH32(esp, 0x000D383Cu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D383C: ;
    ebp = ebp & 0xFFFFFF;
    edx = MEM32(eax + ebp * 4 + 4);
    eax = edx + eax + 0x4008;

loc_000D384D: ;
    PUSH32(esp, 0x3D5F04);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3858u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000D3858: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D393D; /* je: equal / zero */

loc_000D3863: ;
    eax = ebx + 0x2C;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3871u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D3871: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CAA5C); /* fmul dword ptr [0x3caa5c] */
    ecx = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    SET_LO8(eax, MEM8(ecx + 0x21));
    fp_top() = fp_top() * MEMF(0x3CAA5C); /* fmul dword ptr [0x3caa5c] */
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CAA5C); /* fmul dword ptr [0x3caa5c] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_000D3929; /* je: equal / zero */

loc_000D38C1: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(0x3CAA5C); /* fmul dword ptr [0x3caa5c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CAA5C); /* fmul dword ptr [0x3caa5c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CAA5C); /* fmul dword ptr [0x3caa5c] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */

loc_000D3929: ;
    edx = MEM32(esi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x000D3938u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3938: ;
    goto loc_000D3AE8;

loc_000D393D: ;
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D394F; /* jne: not equal / not zero */

loc_000D3948: ;
    eax = 0x3C806C;
    goto loc_000D3965;

loc_000D394F: ;
    PUSH32(esp, 0x000D3954u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D3954: ;
    ebp = ebp & 0xFFFFFF;
    edx = MEM32(eax + ebp * 4 + 4);
    eax = edx + eax + 0x4008;

loc_000D3965: ;
    PUSH32(esp, 0x3D5EF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3970u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000D3970: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3AE8; /* je: equal / zero */

loc_000D397B: ;
    ebp = ebx + 0x2C;
    eax = esp + 0x18;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3989u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D3989: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CAA50); /* fmul dword ptr [0x3caa50] */
    ecx = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    SET_LO8(eax, MEM8(ecx + 0x21));
    fp_top() = fp_top() * MEMF(0x3CAA50); /* fmul dword ptr [0x3caa50] */
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CAA50); /* fmul dword ptr [0x3caa50] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_000D3A41; /* je: equal / zero */

loc_000D39D9: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(0x3CAA50); /* fmul dword ptr [0x3caa50] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CAA50); /* fmul dword ptr [0x3caa50] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CAA50); /* fmul dword ptr [0x3caa50] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */

loc_000D3A41: ;
    eax = MEM32(ebp + 4);
    edx = MEM32(ebp);
    ecx = MEM32(ebp + 8);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    eax = esp + 0x24;
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x000D3A65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3A65: ;
    ecx = MEM32(ebx + 0x240);
    edx = MEM32(esi);
    eax = ecx;
    MEM32(esp + 0x10) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x19C); PUSH32(esp, 0x000D3A7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3A7C: ;
    ecx = ebx + 0x260;
    PUSH32(esp, 0x000D3A87u); RECOMP_ABI_CALL(0x0006DE80u, sub_0006DE80); /* call 0x0006DE80 */

loc_000D3A87: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D3A97u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000D3A97: ;
    esp = esp + 0xC;
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    ecx = esi + 0x260;
    MEM8(esp + 0xBF) = 0;
    PUSH32(esp, 0x000D3AB2u); RECOMP_ABI_CALL(0x0006E0A0u, sub_0006E0A0); /* call 0x0006E0A0 */

loc_000D3AB2: ;
    ecx = ebx + 0x25C;
    PUSH32(esp, 0x000D3ABDu); RECOMP_ABI_CALL(0x0006DE80u, sub_0006DE80); /* call 0x0006DE80 */

loc_000D3ABD: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3ACDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000D3ACD: ;
    esp = esp + 0xC;
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = esi + 0x25C;
    MEM8(esp + 0xBF) = 0;
    PUSH32(esp, 0x000D3AE8u); RECOMP_ABI_CALL(0x0006E0A0u, sub_0006E0A0); /* call 0x0006E0A0 */

loc_000D3AE8: ;
    eax = MEM32(ebx + 0x1C);
    MEM32(esi + 0x158) = eax;
    edx = MEM32(0x498D90);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x74) = esp;
    { uint32_t _icall_target = MEM32(eax + 0x104); PUSH32(esp, 0x000D3B0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3B0F: ;
    edx = MEM32(esi);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x000D3B22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3B22: ;
    ebp = MEM32(esp + 0x14);
    edi = MEM32(ebp + 0x14);
    ebp = ebp + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D3B37; /* jne: not equal / not zero */

loc_000D3B30: ;
    eax = 0x3C806C;
    goto loc_000D3B4D;

loc_000D3B37: ;
    PUSH32(esp, 0x000D3B3Cu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D3B3C: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000D3B4D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3B53u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000D3B53: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D3BCC; /* jle: less or equal (signed <=) */

loc_000D3B5A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x000D3B64u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3B64: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3BCC; /* je: equal / zero */

loc_000D3B69: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x000D3B73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3B73: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000D3B7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3B7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3BCC; /* je: equal / zero */

loc_000D3B7E: ;
    eax = esp + 0xFC;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM8(esp + 0x100) = 0;
    PUSH32(esp, 0x000D3B95u); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_000D3B95: ;
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000D3BA1u); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000D3BA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3BA7u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_000D3BA7: ;
    edx = MEM32(esi);
    esp = esp + 0xC;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x000D3BB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3BB4: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000D3BBBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3BBB: ;
    edx = MEM32(eax);
    ecx = esp + 0xFC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000D3BCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3BCA: ;
    goto loc_000D3BD0;

loc_000D3BCC: ;
    ebp = MEM32(esp + 0x14);

loc_000D3BD0: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3C0E; /* je: equal / zero */

loc_000D3BD7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D3BED; /* jne: not equal / not zero */

loc_000D3BDD: ;
    eax = 0x3C806C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3BE8u); RECOMP_ABI_CALL(0x000668E0u, sub_000668E0); /* call 0x000668E0 */

loc_000D3BE8: ;
    esp = esp + 4;
    goto loc_000D3C15;

loc_000D3BED: ;
    PUSH32(esp, 0x000D3BF2u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D3BF2: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    eax = edx + eax + 0x4008;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3C09u); RECOMP_ABI_CALL(0x000668E0u, sub_000668E0); /* call 0x000668E0 */

loc_000D3C09: ;
    esp = esp + 4;
    goto loc_000D3C15;

loc_000D3C0E: ;
    ecx = ebx;
    PUSH32(esp, 0x000D3C15u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000D3C15: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D3C1Du); RECOMP_ABI_CALL(0x0002E320u, sub_0002E320); /* call 0x0002E320 */

loc_000D3C1D: ;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3C61; /* je: equal / zero */

loc_000D3C24: ;
    PUSH32(esp, 0x000D3C29u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D3C29: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    edi = ecx + eax + 0x4008;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3C61; /* je: equal / zero */

loc_000D3C3E: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3C61; /* je: equal / zero */

loc_000D3C43: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3C49u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000D3C49: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3C54u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D3C54: ;
    ecx = eax;
    PUSH32(esp, 0x000D3C5Bu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000D3C5B: ;
    MEM32(esp + 0x14) = eax;
    goto loc_000D3C69;

loc_000D3C61: ;
    MEM32(esp + 0x14) = 0;

loc_000D3C69: ;
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000D3C77u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000D3C77: ;
    ecx = eax;
    PUSH32(esp, 0x000D3C7Eu); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000D3C7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3C8C; /* je: equal / zero */

loc_000D3C82: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D3C8Cu); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000D3C8C: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000D3C95u); RECOMP_ABI_CALL(0x0002F1C0u, sub_0002F1C0); /* call 0x0002F1C0 */

loc_000D3C95: ;
    _fa = (uint32_t)(MEM8(ebp + 0x21)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x21), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3CCD; /* je: equal / zero */

loc_000D3C9B: ;
    eax = MEM32(ebx + 0x47C);
    edi = MEM32(esi);
    MEM32(esi + 0x47C) = eax;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000D3CB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3CB0: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x000D3CB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3CB6: ;
    ecx = ebx + 0x260;
    PUSH32(esp, 0x000D3CC1u); RECOMP_ABI_CALL(0x0006DE80u, sub_0006DE80); /* call 0x0006DE80 */

loc_000D3CC1: ;
    PUSH32(esp, eax);
    ecx = esi + 0x260;
    PUSH32(esp, 0x000D3CCDu); RECOMP_ABI_CALL(0x0006E0A0u, sub_0006E0A0); /* call 0x0006E0A0 */

loc_000D3CCD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x000D3CD9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D3CD9: ;
    ecx = MEM32(esp + 0x200);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x1FC);
    PUSH32(esp, 0x000D3CF3u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000D3CF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1FC;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D3D00
 * Original: 0x000D3D00 - 0x000D3D7F (127 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3D00: ;
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
    edi = MEM32(ecx + eax + 0x9C0);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0x9C0) = edi;
    MEM32(ecx + eax + 0xA98) = MEM32(ecx + eax + 0xA98) & edx;
    ecx = MEM32(eax + 0xA8C);
    edx = MEM32(eax + 0xA94);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    MEM32(eax + 0xA8C) = ecx;
    MEM32(eax + 0xA94) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000D3D65; /* jl: less (signed <) */

loc_000D3D54: ;
    MEM32(eax + 0xA8C) = 0;
    ecx = 0x2F;
    goto loc_000D3D66;

loc_000D3D65: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000D3D66: ;
    MEM32(eax + ecx * 4 + 0x9C8) = esi;
    ecx = MEM32(eax + 0xAA0);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0xAA0) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3D80
 * Original: 0x000D3D80 - 0x000D3DDD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3D80: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xA8C) = esi;
    MEM32(ecx + 0xA90) = esi;
    MEM32(ecx + 0xA94) = esi;
    edx = 0; /* xor self */
    goto loc_000D3DA0;

    /* nop */

loc_000D3DA0: ;
    eax = MEM32(ecx + 0xA8C);
    edi = MEM32(ecx + 0xA94);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    MEM32(ecx + 0xA8C) = eax;
    MEM32(ecx + 0xA94) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000D3DCC; /* jl: less (signed <) */

loc_000D3DBF: ;
    MEM32(ecx + 0xA8C) = esi;
    eax = 0x2F;
    goto loc_000D3DCD;

loc_000D3DCC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000D3DCD: ;
    MEM32(ecx + eax * 4 + 0x9C8) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D3DA0; /* jl: less (signed <) */

loc_000D3DDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3DE0
 * Original: 0x000D3DE0 - 0x000D3E1B (59 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3DE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3DE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = 0x3D5F48;
    if (TEST_Z(_fa, _fb)) goto loc_000D3E13; /* je: equal / zero */

loc_000D3DF0: ;
    eax = eax - 0x4F25C8;
    ecx = eax;
    eax = 0x4EC4EC4F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = 0x4F25C8;
    PUSH32(esp, 0x000D3E13u); RECOMP_ABI_CALL(0x000D3D00u, sub_000D3D00); /* call 0x000D3D00 */

loc_000D3E13: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000CFE50(); return; /* tail jmp 0x000CFE50 */

}

/**
 * sub_000D3E20
 * Original: 0x000D3E20 - 0x000D3ED9 (185 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3E20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3E20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000D3E2Eu); RECOMP_ABI_CALL(0x000CFC80u, sub_000CFC80); /* call 0x000CFC80 */

loc_000D3E2E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450C70);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3E42u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000D3E42: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3ED4; /* je: equal / zero */

loc_000D3E4D: ;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(esi + 0x28) = edx;
    SET_LO8(edx, MEM8(eax + 0x30));
    SET_LO8(ecx, MEM8(esi + 0x30));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(edx, MEM8(esi + 0x30));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x30) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x30) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x30));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x30) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x2C));
    MEM8(esi + 0x2C) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x2D));
    MEM8(esi + 0x2D) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x2E));
    MEM8(esi + 0x2E) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x2F));
    SET_LO8(ecx, MEM8(esi + 0x30));
    MEM8(esi + 0x2F) = LO8(edx);
    SET_LO8(ecx, LO8(ecx) ^ MEM8(eax + 0x30));
    SET_LO8(edx, MEM8(esi + 0x30));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esi + 0x30) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_000D3ED4; /* je: equal / zero */

loc_000D3EC2: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3ED4; /* je: equal / zero */

loc_000D3EC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000D3EE0(); return; /* tail jmp 0x000D3EE0 */

loc_000D3ED4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3EE0
 * Original: 0x000D3EE0 - 0x000D3F55 (117 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3EE0(void)
{

loc_000D3EE0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
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
    SET_LO8(edx, MEM8(eax + 0x30));
    PUSH32(esp, ebx);
    SET_LO8(edx, LO8(edx) ^ MEM8(ecx + 0x30));
    SET_LO8(ebx, MEM8(eax + 0x30));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(eax + 0x30) = LO8(ebx);
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(eax + 0x20) = LO8(edx);
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    SET_LO8(ebx, MEM8(ecx + 0x30));
    SET_LO8(edx, MEM8(eax + 0x30));
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(ebx, MEM8(eax + 0x30));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(eax + 0x30) = LO8(ebx);
    ecx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3F60
 * Original: 0x000D3F60 - 0x000D3F65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3F60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3F60: ;
    g_seh_ebp = ebp; sub_000D1EF0(); return; /* tail jmp 0x000D1EF0 */

}

/**
 * sub_000D3F70
 * Original: 0x000D3F70 - 0x000D3F8E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D3F78u); RECOMP_ABI_CALL(0x000D3DE0u, sub_000D3DE0); /* call 0x000D3DE0 */

loc_000D3F78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3F88; /* je: equal / zero */

loc_000D3F7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D3F85u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000D3F85: ;
    esp = esp + 4;

loc_000D3F88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3F90
 * Original: 0x000D3F90 - 0x000D3FD0 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3F90(void)
{

loc_000D3F90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    ecx = esi + 0x9C0;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(esi + 0xA8C) = eax;
    MEM32(esi + 0xA90) = eax;
    MEM32(esi + 0xA94) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0xA98;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    ecx = esi;
    MEM32(esi + 0xAA0) = eax;
    PUSH32(esp, 0x000D3FCCu); RECOMP_ABI_CALL(0x000D3D80u, sub_000D3D80); /* call 0x000D3D80 */

loc_000D3FCC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3FD0
 * Original: 0x000D3FD0 - 0x000D40A8 (216 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3FD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3507D9);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x000D3FF5u); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000D3FF5: ;
    ebx = 0; /* xor self */
    MEM32(esi) = 0x3D5F48;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = 0xFFFFFFFFu;
    eax = MEM32(0x5BC9D0);
    MEM32(esi + 0x20) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(esi + 0x28) = edx;
    SET_LO8(ecx, MEM8(esi + 0x30));
    SET_LO8(ecx, LO8(ecx) & 0xCC);
    MEM8(esi + 0x2C) = LO8(ebx);
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM8(esi + 0x2E) = LO8(ebx);
    MEM8(esi + 0x2F) = LO8(ebx);
    MEM8(esi + 0x30) = LO8(ecx);
    _fa = (uint32_t)(MEM32(0x4F3068)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4F3068), 0x30 (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D4095; /* je: equal / zero */

loc_000D4043: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = 0x4F25C8;
    PUSH32(esp, 0x000D404Fu); RECOMP_ABI_CALL(0x000D2130u, sub_000D2130); /* call 0x000D2130 */

loc_000D404F: ;
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    ebp = eax + 0x4F25C8;
    ecx = ebp;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x24) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000D4072; /* je: equal / zero */

loc_000D406D: ;
    PUSH32(esp, 0x000D4072u); RECOMP_ABI_CALL(0x000BB240u, sub_000BB240); /* call 0x000BB240 */

loc_000D4072: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ecx * 4 + 0x4F2F88;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    MEM32(esi + 0x18) = ebp;
    POP32(esp, ebp);

loc_000D4095: ;
    ecx = MEM32(esp + 0x14);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000D40B0
 * Original: 0x000D40B0 - 0x000D418E (222 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D40B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D40B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000D40C4u); RECOMP_ABI_CALL(0x000CF6B0u, xml1_guest_attack_event_parse_attribute); /* call 0x000CF6B0 */

loc_000D40C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D4186; /* je: equal / zero */

loc_000D40CC: ;
    PUSH32(esp, 0x3CAD34);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D40D7u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D40D7: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D40FE; /* jne: not equal / not zero */

loc_000D40DE: ;
    PUSH32(esp, 0x000D40E3u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D40E3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D40EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D40ED: ;
    PUSH32(esp, 0x000D40F2u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000D40F2: ;
    POP32(esp, edi);
    MEM16(esi + 0x18) = LO16(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D40FE: ;
    PUSH32(esp, 0x3D0710);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D4109u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D4109: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D412F; /* jne: not equal / not zero */

loc_000D4110: ;
    PUSH32(esp, 0x000D4115u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D4115: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D411Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D411F: ;
    PUSH32(esp, 0x000D4124u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000D4124: ;
    POP32(esp, edi);
    MEM8(esi + 0x1B) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D412F: ;
    PUSH32(esp, 0x3CFD44);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D413Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D413A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4160; /* jne: not equal / not zero */

loc_000D4141: ;
    PUSH32(esp, 0x000D4146u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D4146: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D4150u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4150: ;
    PUSH32(esp, 0x000D4155u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000D4155: ;
    POP32(esp, edi);
    MEM8(esi + 0x1A) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D4160: ;
    PUSH32(esp, 0x3D5F84);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D416Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D416B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D417E; /* jne: not equal / not zero */

loc_000D4172: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D4178u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000D4178: ;
    esp = esp + 4;
    MEM8(esi + 0x1C) = LO8(eax);

loc_000D417E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D4186: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D4190
 * Original: 0x000D4190 - 0x000D424A (186 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4190: ;
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x84);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x84);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000D4212; /* je: equal / zero */

loc_000D41AA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4212; /* je: equal / zero */

loc_000D41AE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x4C;
    MEM32(eax) = 0;
    PUSH32(esp, 0x000D41DDu); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_000D41DD: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000D41F0u); RECOMP_ABI_CALL(0x000CF250u, sub_000CF250); /* call 0x000CF250 */

loc_000D41F0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D4241; /* je: equal / zero */

loc_000D41F8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x000D4209u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4209: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 12; return; /* ret 8 */

loc_000D4212: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000D421Bu); RECOMP_ABI_CALL(0x000CDE90u, sub_000CDE90); /* call 0x000CDE90 */

loc_000D421B: ;
    SET_LO16(eax, MEM16(edi + 0x18));
    MEM16(esi + 0x538) = LO16(eax);
    SET_LO8(ecx, MEM8(edi + 0x1B));
    MEM8(esi + 0x53B) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x1A));
    MEM8(esi + 0x53A) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x53C) = LO8(eax);

loc_000D4241: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D4250
 * Original: 0x000D4250 - 0x000D446E (542 bytes, 207 insns)
 * Category: game_physics
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D4250(void)
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

loc_000D4250: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x000D4264u); RECOMP_ABI_CALL(0x000CF6B0u, xml1_guest_attack_event_parse_attribute); /* call 0x000CF6B0 */

loc_000D4264: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D4466; /* je: equal / zero */

loc_000D426C: ;
    PUSH32(esp, 0x3D603C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D4277u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D4277: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D42A1; /* jne: not equal / not zero */

loc_000D427E: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D4289u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D4289: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D42A1; /* jne: not equal / not zero */

loc_000D4290: ;
    eax = MEM32(esi + 0x18);
    eax = eax | 1;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D42A1: ;
    PUSH32(esp, 0x3D6028);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D42ACu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D42AC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D42D6; /* jne: not equal / not zero */

loc_000D42B3: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D42BEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D42BE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D42D6; /* jne: not equal / not zero */

loc_000D42C5: ;
    eax = MEM32(esi + 0x18);
    eax = eax | 4;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D42D6: ;
    PUSH32(esp, 0x3D6018);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D42E1u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D42E1: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D430B; /* jne: not equal / not zero */

loc_000D42E8: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D42F3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D42F3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D430B; /* jne: not equal / not zero */

loc_000D42FA: ;
    eax = MEM32(esi + 0x18);
    eax = eax | 8;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D430B: ;
    PUSH32(esp, 0x3D6004);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D4316u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D4316: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4340; /* jne: not equal / not zero */

loc_000D431D: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D4328u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D4328: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4340; /* jne: not equal / not zero */

loc_000D432F: ;
    eax = MEM32(esi + 0x18);
    eax = eax | 0x10;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D4340: ;
    PUSH32(esp, 0x3D5FF0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D434Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D434B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4375; /* jne: not equal / not zero */

loc_000D4352: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D435Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D435D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4375; /* jne: not equal / not zero */

loc_000D4364: ;
    eax = MEM32(esi + 0x18);
    eax = eax | 0x20;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D4375: ;
    PUSH32(esp, 0x3D5FDC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D4380u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D4380: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D43AA; /* jne: not equal / not zero */

loc_000D4387: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D4392u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D4392: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D43AA; /* jne: not equal / not zero */

loc_000D4399: ;
    eax = MEM32(esi + 0x18);
    eax = eax | 0x40;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D43AA: ;
    PUSH32(esp, 0x3D5FC8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D43B5u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D43B5: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D43E1; /* jne: not equal / not zero */

loc_000D43BC: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D43C7u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D43C7: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D43E1; /* jne: not equal / not zero */

loc_000D43CE: ;
    eax = MEM32(esi + 0x18);
    eax = eax | 0x80;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D43E1: ;
    PUSH32(esp, 0x3D5FBC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D43ECu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D43EC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4418; /* jne: not equal / not zero */

loc_000D43F3: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D43FEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D43FE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4418; /* jne: not equal / not zero */

loc_000D4405: ;
    eax = MEM32(esi + 0x18);
    eax = eax | 0x200;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D4418: ;
    PUSH32(esp, 0x3D5FAC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D4423u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D4423: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4448; /* jne: not equal / not zero */

loc_000D442A: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | 2;
    PUSH32(esp, 0x000D4433u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000D4433: ;
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D443Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D443D: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D4448: ;
    PUSH32(esp, 0x3D5FA0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D4453u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D4453: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D445E; /* jne: not equal / not zero */

loc_000D445A: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) | 1;

loc_000D445E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D4466: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D4470
 * Original: 0x000D4470 - 0x000D449E (46 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4470: ;
    PUSH32(esp, 0x000D4475u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000D4475: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D447Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D447C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D4499; /* jle: less or equal (signed <=) */

loc_000D4481: ;
    PUSH32(esp, 0x000D4486u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000D4486: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000D4492u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4492: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4499; /* jne: not equal / not zero */

loc_000D4496: ;
    esp += 16; return; /* ret 12 */

loc_000D4499: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000D44A0
 * Original: 0x000D44A0 - 0x000D44E9 (73 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D44A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D44A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000D44AEu); RECOMP_ABI_CALL(0x000CFC80u, sub_000CFC80); /* call 0x000CFC80 */

loc_000D44AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450CAC);
    PUSH32(esp, 0x450BC0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D44C2u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_000D44C2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D44E4; /* je: equal / zero */

loc_000D44C9: ;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    SET_LO8(ecx, MEM8(esi + 0x20));
    MEM32(esi + 0x1C) = edx;
    SET_LO8(eax, MEM8(eax + 0x20));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x20) = LO8(ecx);

loc_000D44E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D44F0
 * Original: 0x000D44F0 - 0x000D45E6 (246 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D44F0(void)
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

loc_000D44F0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4500; /* jne: not equal / not zero */

loc_000D44FA: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000D4500: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    eax = eax + 0x4DC;
    if ((eax == 0)) goto loc_000D4539; /* je: equal / zero */

loc_000D450E: ;
    SET_LO16(ecx, MEM16(eax + 0x10));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    SET_LO16(eax, MEM16(eax + 0x12));
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D4539; /* jle: less or equal (signed <=) */

loc_000D451B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D4539; /* jle: less or equal (signed <=) */

loc_000D4520: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, 0);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D452Fu); RECOMP_ABI_CALL(0x0005CA80u, sub_0005CA80); /* call 0x0005CA80 */

loc_000D452F: ;
    edx = MEM32(esi + 4);
    esp = esp + 0xC;
    MEM16(edx + 8) = LO16(eax);

loc_000D4539: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5B70)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5b70] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D45AA; /* jne: not equal / not zero */

loc_000D4549: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D45AA; /* jp: parity */

loc_000D4559: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D455Fu); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000D455F: ;
    ecx = MEM32(edi + 0x14);
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(esi + 0x10));
    edx = MEM32(eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = edi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    ebx = ebx & 0xFFFFFF01u;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x30);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000D45A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D45A2: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000D45AA: ;
    PUSH32(esp, 0x000D45AFu); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000D45AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = MEM32(eax);
    PUSH32(esp, 0xC);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000D45DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D45DF: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D45F0
 * Original: 0x000D45F0 - 0x000D4660 (112 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D45F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D45F0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4600; /* jne: not equal / not zero */

loc_000D45FA: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D4600: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000D4613u); RECOMP_ABI_CALL(0x000D4250u, sub_000D4250); /* call 0x000D4250 */

loc_000D4613: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D4658; /* je: equal / zero */

loc_000D4617: ;
    PUSH32(esp, 0x3D604C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D4622u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D4622: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4650; /* jne: not equal / not zero */

loc_000D4629: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D462Fu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000D462F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000D4643; /* jge: greater or equal (signed >=) */

loc_000D4636: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    MEM32(ebx + 0x24) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D4643: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D464D; /* jle: less or equal (signed <=) */

loc_000D4648: ;
    eax = 0xA;

loc_000D464D: ;
    MEM32(ebx + 0x24) = eax;

loc_000D4650: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D4658: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D4660
 * Original: 0x000D4660 - 0x000D4823 (451 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4660(void)
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

loc_000D4660: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350800);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4697; /* jne: not equal / not zero */

loc_000D4684: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_000D4697: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4803; /* je: equal / zero */

loc_000D46A4: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    esi = eax + 0x4DC;
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0x485874);
    ecx = esp + 0x40;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000D46C7u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000D46C7: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0x000D46D8u); RECOMP_ABI_CALL(0x00059960u, sub_00059960); /* call 0x00059960 */

loc_000D46D8: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    MEM32(esp + 0x1C) = ecx;
    esp = esp + 8;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4702; /* jne: not equal / not zero */

loc_000D46FB: ;
    edx = MEM32(esi + 0x14);
    MEM32(esp + 0x10) = edx;

loc_000D4702: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x000D4713u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4713: ;
    ecx = MEM32(esp + 0x38);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = 0x3D6048;
    PUSH32(esp, 0x000D472Au); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000D472A: ;
    edi = eax;
    esp = esp + 8;
    MEM32(esp + 0x20) = edi;
    MEM8(esp + 0x2C) = 1;
    PUSH32(esp, 0x000D473Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000D473D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000D4747u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4747: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(edi);
    ecx = edi;
    esi = 0; /* xor self */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D475Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D475D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D47CF; /* jle: less or equal (signed <=) */

loc_000D4761: ;
    ebx = MEM32(esp + 0x3C);

loc_000D4765: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D4771u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4771: ;
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D4779u); RECOMP_ABI_CALL(0x0003B410u, sub_0003B410); /* call 0x0003B410 */

loc_000D4779: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D47A1; /* je: equal / zero */

loc_000D4780: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(esp + 0x34);
    MEM32(ebx + esi * 4) = eax;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x338)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x338) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4798; /* jne: not equal / not zero */

loc_000D4794: ;
    MEM32(esp + 0x14) = esi;

loc_000D4798: ;
    eax = MEM32(esp + 0x40);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D47B4; /* jge: greater or equal (signed >=) */

loc_000D47A1: ;
    ebp = MEM32(esp + 0x10);
    edx = MEM32(edi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    MEM32(esp + 0x10) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D47B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D47B0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4765; /* jl: less (signed <) */

loc_000D47B4: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D47CF; /* jle: less or equal (signed <=) */

loc_000D47BD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D47CF; /* jle: less or equal (signed <=) */

loc_000D47C1: ;
    edx = MEM32(ebx + ecx * 4);
    eax = MEM32(ebx + esi * 4 + -4);
    MEM32(ebx + esi * 4 + -4) = edx;
    MEM32(ebx + ecx * 4) = eax;

loc_000D47CF: ;
    PUSH32(esp, edi);
    MEM8(esp + 0x30) = 0;
    PUSH32(esp, 0x000D47DAu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D47DA: ;
    esp = esp + 4;
    ecx = esp + 0x38;
    MEM32(esp + 0x2C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D47EEu); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D47EE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_000D4803: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(0x498D90);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D4830
 * Original: 0x000D4830 - 0x000D496B (315 bytes, 91 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4830(void)
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

loc_000D4830: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350818);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x28;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0);
    ecx = esp + 0x44;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000D4885u); RECOMP_ABI_CALL(0x000A2950u, sub_000A2950); /* call 0x000A2950 */

loc_000D4885: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CAA64); /* fadd dword ptr [0x3caa64] */
    eax = MEM32(esp + 0x40);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x3C) = 0;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esi = eax;
    fp_top() = fp_top() + MEMF(0x3CAA64); /* fadd dword ptr [0x3caa64] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(eax);
    PUSH32(esp, 0x000D48BBu); RECOMP_ABI_CALL(0x00066AC0u, sub_00066AC0); /* call 0x00066AC0 */

loc_000D48BB: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x000D48C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D48C6: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 9);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000D48D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D48D3: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000D48E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D48E0: ;
    ecx = MEM32(esp + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000D4912u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4912: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(ecx);
    eax = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000D4920u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4920: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x000D4929u); RECOMP_ABI_CALL(0x000A07B0u, sub_000A07B0); /* call 0x000A07B0 */

loc_000D4929: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = esp + 0x38;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_000D4953; /* je: equal / zero */

loc_000D493B: ;
    PUSH32(esp, 0x000D4940u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D4940: ;
    SET_LO8(eax, 1);
    ecx = MEM32(esp + 0x28);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

loc_000D4953: ;
    PUSH32(esp, 0x000D4958u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D4958: ;
    ecx = MEM32(esp + 0x28);
    SET_LO8(eax, 0); /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D4970
 * Original: 0x000D4970 - 0x000D4ACA (346 bytes, 87 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4970(void)
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

loc_000D4970: ;
    esp = esp - 0x60;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0x41400000;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0x42C00000;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0xC1A00000u;
    MEM32(esp + 0x44) = 0x42400000;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0x41A00000;
    MEM32(esp + 0x50) = 0x42400000;
    MEM32(esp + 0x54) = 0xC1A00000u;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0x42400000;
    MEM32(esp + 0x60) = 0x41A00000;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0x42400000;
    edi = 0; /* xor self */
    esi = esp + 0x2C;
    edi = edi;

loc_000D4A10: ;
    fp_push(MEMF(esi + -8)); /* fld float */
    eax = MEM32(esi);
    fp_push(MEMF(esi + -4)); /* fld float */
    ecx = MEM32(esi + 4);
    fp_push(MEMF(esp + 0x70)); /* fld float */
    edx = MEM32(esi + 8);
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0xC) = ecx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = edx;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    MEM32(esp + 0x14) = eax;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = ebx;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x78); /* fadd dword ptr [esp + 0x78] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D4A90u); RECOMP_ABI_CALL(0x000D4830u, sub_000D4830); /* call 0x000D4830 */

loc_000D4A90: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4ABF; /* jne: not equal / not zero */

loc_000D4A94: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000D4AA5u); RECOMP_ABI_CALL(0x000D4830u, sub_000D4830); /* call 0x000D4830 */

loc_000D4AA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4ABF; /* jne: not equal / not zero */

loc_000D4AA9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4A10; /* jl: less (signed <) */

loc_000D4AB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 16; return; /* ret 12 */

loc_000D4ABF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D4AD0
 * Original: 0x000D4AD0 - 0x000D4CAE (478 bytes, 162 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4AD0(void)
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

loc_000D4AD0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350840);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4C99; /* je: equal / zero */

loc_000D4AF8: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4C99; /* je: equal / zero */

loc_000D4B02: ;
    eax = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, ebp);
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x50;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000D4B26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4B26: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x48D8F8);
    fp_top() = fp_top() + MEMF(0x3CAA64); /* fadd dword ptr [0x3caa64] */
    ecx = esp + 0x48;
    MEM32(esp + 0x58) = ebx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D4B4Eu); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000D4B4E: ;
    eax = MEM32(esp + 0x40);
    ebp = MEM32(eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = ebx;
    esi = eax;
    PUSH32(esp, 0x000D4B64u); RECOMP_ABI_CALL(0x00066AC0u, sub_00066AC0); /* call 0x00066AC0 */

loc_000D4B64: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x30); PUSH32(esp, 0x000D4B6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4B6E: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000D4B7Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4B7B: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000D4B84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4B84: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(edi);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x1C;
    esi = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000D4B9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4B9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x74); PUSH32(esp, 0x000D4BAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4BAA: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000D4BB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4BB8: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D4BC1u); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_000D4BC1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D4C2F; /* je: equal / zero */

loc_000D4BC5: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000D4BD3u); RECOMP_ABI_CALL(0x000A08D0u, sub_000A08D0); /* call 0x000A08D0 */

loc_000D4BD3: ;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D4BDEu); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000D4BDE: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x14) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x38) = 1;
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D4BF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4BF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D4C22; /* jle: less or equal (signed <=) */

loc_000D4BF8: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D4C00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4C00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4C17; /* je: equal / zero */

loc_000D4C04: ;
    ecx = MEM32(eax + 4);
    ecx = ecx >> 8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D4C17; /* je: equal / zero */

loc_000D4C0F: ;
    _fa = (uint32_t)(MEM8(eax + 0x2C2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2C2), LO8(ebx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D4C64; /* ja: above (unsigned >) */

loc_000D4C17: ;
    edx = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D4C1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4C1E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4BF8; /* jl: less (signed <) */

loc_000D4C22: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x3C) = LO8(ebx);
    PUSH32(esp, 0x000D4C2Cu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D4C2C: ;
    esp = esp + 4;

loc_000D4C2F: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000D4C38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4C38: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = esp + 0x40;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    if (TEST_NZ(_fa, _fb)) goto loc_000D4C7D; /* jne: not equal / not zero */

loc_000D4C48: ;
    PUSH32(esp, 0x000D4C4Du); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D4C4D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 32; return; /* ret 28 */

loc_000D4C64: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x3C) = LO8(ebx);
    PUSH32(esp, 0x000D4C6Eu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D4C6E: ;
    esp = esp + 4;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    ecx = esp + 0x40;

loc_000D4C7D: ;
    PUSH32(esp, 0x000D4C82u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D4C82: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 32; return; /* ret 28 */

loc_000D4C99: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D4CB0
 * Original: 0x000D4CB0 - 0x000D4E08 (344 bytes, 114 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4CB0(void)
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

loc_000D4CB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350860);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    ecx = MEM32(esp + 0x44);
    fp_top() = fp_top() + MEMF(0x3CB260); /* fadd dword ptr [0x3cb260] */
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x483388);
    ecx = esp + 0x54;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x000D4D04u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000D4D04: ;
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, 2);
    MEM32(esp + 0x3C) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000D4D19u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4D19: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000D4D22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4D22: ;
    eax = MEM32(esp + 0x4C);
    ebp = MEM32(esp + 0x3C);
    ecx = MEM32(ebp);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esp + 0x18;
    esi = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000D4D3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4D3D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x74); PUSH32(esp, 0x000D4D4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4D4D: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000D4D5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4D5B: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000D4D64u); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_000D4D64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D4DE3; /* je: equal / zero */

loc_000D4D68: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000D4D76u); RECOMP_ABI_CALL(0x000A08D0u, sub_000A08D0); /* call 0x000A08D0 */

loc_000D4D76: ;
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D4D81u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000D4D81: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x3C) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x34) = 1;
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D4D97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4D97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000D4DD5; /* jle: less or equal (signed <=) */

loc_000D4D9B: ;
    goto loc_000D4DA0;

    /* nop */

loc_000D4DA0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D4DA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4DA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D4DCA; /* je: equal / zero */

loc_000D4DAC: ;
    ecx = MEM32(eax + 4);
    ecx = ecx >> 0x12;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D4DCA; /* je: equal / zero */

loc_000D4DB7: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000D4DCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4DCA: ;
    edx = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D4DD1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4DD1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4DA0; /* jl: less (signed <) */

loc_000D4DD5: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x38) = 0;
    PUSH32(esp, 0x000D4DE0u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000D4DE0: ;
    esp = esp + 4;

loc_000D4DE3: ;
    ecx = esp + 0x4C;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D4DF4u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000D4DF4: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D4E10
 * Original: 0x000D4E10 - 0x000D4ECA (186 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4E10(void)
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

loc_000D4E10: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4E22; /* jne: not equal / not zero */

loc_000D4E1C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000D4E22: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    esi = esi + 0x4DC;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM16(esi + 0x10) = LO16(eax);
    MEM16(esi + 0x12) = LO16(eax);
    MEM32(esi + 0x14) = eax;
    MEM16(esi + 0x48) = LO16(eax);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(0x498D90);
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x4A) = LO16(eax);
    PUSH32(esp, 0x000D4E5Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000D4E5F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000D4E69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4E69: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM8(edi + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x20), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4EC2; /* jne: not equal / not zero */

loc_000D4E72: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x20);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 0x24);
    eax = eax + 0x20;
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    ecx = MEM32(edi + 0x14);
    SET_LO16(edx, MEM16(ecx));
    MEM16(esi + 0x10) = LO16(edx);
    eax = MEM32(edi + 0x14);
    SET_LO16(ecx, MEM16(eax + 2));
    MEM16(esi + 0x12) = LO16(ecx);
    edx = MEM32(edi + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(edx + 6);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(ecx, MEM16(edi + 0x18));
    SET_LO16(ecx, LO16(ecx) | 0x100);
    MEM16(esi + 0x48) = LO16(ecx);
    edx = MEM32(edi + 0x1C);
    MEM32(esi + 0x18) = edx;

loc_000D4EC2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D4ED0
 * Original: 0x000D4ED0 - 0x000D4F16 (70 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4ED0: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D4EDC; /* jne: not equal / not zero */

loc_000D4ED7: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_000D4EDC: ;
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi);
    PUSH32(esp, ecx);
    esi = esi + 0x4DC;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D4EF9u); RECOMP_ABI_CALL(0x000D4660u, sub_000D4660); /* call 0x000D4660 */

loc_000D4EF9: ;
    esp = esp + 0x10;
    MEM16(esi + 0x4A) = LO16(eax);
    ecx = MEM32(edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    MEM32(ecx + 0x47C) = eax;
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4F20
 * Original: 0x000D4F20 - 0x000D53A3 (1155 bytes, 367 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4F20(void)
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

loc_000D4F20: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_000D4F3C; /* jne: not equal / not zero */

loc_000D4F30: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

loc_000D4F3C: ;
    edx = MEM32(0x5BC9D4);
    ecx = MEM32(0x5BC9D0);
    edi = MEM32(esp + 0x54);
    eax = MEM32(edi);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(0x5BC9D0);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(0x5BC9D8);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x5BC9D8);
    MEM32(esp + 0x34) = edx;
    SET_LO8(edx, MEM8(ebx + 0x2C));
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(0x5BC9D4);
    ebp = eax + 0x4DC;
    SET_LO8(edx, LO8(edx) & 1);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(0x498D90);
    MEM32(esp + 0x18) = ebp;
    MEM8(esp + 0x54) = LO8(edx);
    if ((LO8(edx) != 0)) goto loc_000D51BB; /* jne: not equal / not zero */

loc_000D4F9E: ;
    eax = MEM32(eax + 0x47C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x54) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_000D5057; /* jl: less (signed <) */

loc_000D4FB2: ;
    ecx = ebp + eax * 4 + 0x20;
    MEM32(esp + 0x10) = ecx;
    goto loc_000D4FC0;

loc_000D4FBC: ;
    eax = MEM32(esp + 0x54);

loc_000D4FC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D4FD1; /* jge: greater or equal (signed >=) */

loc_000D4FC5: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx);
    MEM32(esp + 0x14) = eax;
    goto loc_000D4FDB;

loc_000D4FD1: ;
    ecx = MEM32(0x498D90);
    MEM32(esp + 0x14) = ecx;

loc_000D4FDB: ;
    edx = MEM32(esp + 0x14);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x000D4FECu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D4FEC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D501A; /* je: equal / zero */

loc_000D4FF2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D4FF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D4FF8: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    ebp = MEM32(esp + 0x18);
    if (TEST_NZ(_fa, _fb)) goto loc_000D501C; /* jne: not equal / not zero */

loc_000D501A: ;
    esi = 0; /* xor self */

loc_000D501C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5033; /* je: equal / zero */

loc_000D5020: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D504F; /* je: equal / zero */

loc_000D5033: ;
    eax = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000D4FBC; /* jge: greater or equal (signed >=) */

loc_000D504F: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x54);

loc_000D5057: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edx = MEM32(edi);
    MEM32(edx + 0x47C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000D5131; /* je: equal / zero */

loc_000D5067: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, 0x000D5073u); RECOMP_ABI_CALL(0x0003B4F0u, sub_0003B4F0); /* call 0x0003B4F0 */

loc_000D5073: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    eax = MEM32(edi);
    fp_top() = fp_top() - MEMF(eax + 0x28); /* fsub dword ptr [eax + 0x28] */
    eax = eax + 0x20;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    ecx = esp + 0x38;
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D509Eu); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000D509E: ;
    fp_pop(); /* fstp st(0) */
    eax = esp + 0x38;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(ebx + 0x1C); /* fmul dword ptr [ebx + 0x1c] */
    ecx = esp + 0x48;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(ebx + 0x1C); /* fmul dword ptr [ebx + 0x1c] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx + 0x1C); /* fmul dword ptr [ebx + 0x1c] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = MEMF(esi + 0x28) - fp_top(); /* fsubr dword ptr [esi + 0x28] */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x5C); /* fsub dword ptr [esp + 0x5c] */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D50E9u); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000D50E9: ;
    edx = MEM32(eax);
    MEM32(esp + 0x34) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x38) = ecx;
    edx = MEM32(eax + 8);
    SET_LO8(eax, MEM8(ebx + 0x2C));
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM32(esp + 0x34) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000D5248; /* je: equal / zero */

loc_000D510B: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5248; /* je: equal / zero */

loc_000D5116: ;
    PUSH32(esp, 0x000D511Bu); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000D511B: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000D512Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D512C: ;
    goto loc_000D5248;

loc_000D5131: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    edx = MEM32(edi);
    MEM32(edx + 0x47C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000D5248; /* je: equal / zero */

loc_000D5145: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x498D90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x498D90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5248; /* jne: not equal / not zero */

loc_000D5154: ;
    ecx = MEM32(edi);
    ecx = ecx + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D5164u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D5164: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(edi);
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(eax + 0x28); /* fadd dword ptr [eax + 0x28] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 0x24); /* fadd dword ptr [eax + 0x24] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 0x20); /* fadd dword ptr [eax + 0x20] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x2C);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 0x30);
    MEM32(esp + 0x38) = edx;
    eax = MEM32(eax + 0x34);
    goto loc_000D5241;

loc_000D51BB: ;
    ecx = MEM32(ebp);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(ebp + 8);
    MEM32(esp + 0x28) = ecx;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 0x28); /* fsub dword ptr [eax + 0x28] */
    edx = esp + 0x38;
    fp_push(MEMF(ebp + 4)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() - MEMF(eax + 0x24); /* fsub dword ptr [eax + 0x24] */
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 0x20); /* fsub dword ptr [eax + 0x20] */
    eax = esp + 0x48;
    PUSH32(esp, eax);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() * MEMF(esp + 0x5C); /* fmul dword ptr [esp + 0x5c] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000D5231u); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000D5231: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x38) = edx;
    eax = MEM32(eax + 8);

loc_000D5241: ;
    esp = esp + 8;
    MEM32(esp + 0x34) = eax;

loc_000D5248: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D52DF; /* je: equal / zero */

loc_000D5253: ;
    ecx = MEM32(edi);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x28); /* fsub dword ptr [ecx + 0x28] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x24); /* fsub dword ptr [ecx + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x20); /* fsub dword ptr [ecx + 0x20] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C93C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c93c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D52C2; /* jp: parity */

loc_000D529D: ;
    ecx = ecx + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D52ABu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D52AB: ;
    edx = MEM32(eax);
    MEM32(esp + 0x40) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0x40) = edx;

loc_000D52C2: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    edx = MEM32(edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x000D52DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D52DF: ;
    fp_push(MEMF(0x5BC9D0)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D5318; /* jp: parity */

loc_000D52F2: ;
    fp_push(MEMF(0x5BC9D4)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D5318; /* jp: parity */

loc_000D5305: ;
    fp_push(MEMF(0x5BC9D8)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000D5397; /* jnp: not parity */

loc_000D5318: ;
    fp_push(MEMF(ebx + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D5348; /* jp: parity */

loc_000D5328: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    edx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x000D533Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D533C: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

loc_000D5348: ;
    eax = MEM32(edi);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 0x28); /* fsub dword ptr [eax + 0x28] */
    eax = eax + 0x20;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, 1);
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    PUSH32(esp, 0x447A0000);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 0x30);
    PUSH32(esp, edx);
    esp = esp - 0xC;
    eax = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi);
    PUSH32(esp, 0x000D538Bu); RECOMP_ABI_CALL(0x0003AC90u, sub_0003AC90); /* call 0x0003AC90 */

loc_000D538B: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    edx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000D5397u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5397: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D53B0
 * Original: 0x000D53B0 - 0x000D5425 (117 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D53B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D53B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D53C0; /* jne: not equal / not zero */

loc_000D53BA: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000D53C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000D53CDu); RECOMP_ABI_CALL(0x000CF4D0u, sub_000CF4D0); /* call 0x000CF4D0 */

loc_000D53CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D541E; /* je: equal / zero */

loc_000D53D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5417; /* jne: not equal / not zero */

loc_000D53D5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D53DCu); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_000D53DC: ;
    esi = MEM32(edi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000D53EC; /* jne: not equal / not zero */

loc_000D53E5: ;
    esi = 0x3C806C;
    goto loc_000D5402;

loc_000D53EC: ;
    PUSH32(esp, 0x000D53F1u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D53F1: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x4008;

loc_000D5402: ;
    ebp = MEM32(ebx);
    ecx = edi;
    PUSH32(esp, 0x000D540Bu); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000D540B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000D5412u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5412: ;
    POP32(esp, ebp);
    MEM32(edi + 0x24) = eax;
    POP32(esp, ebx);

loc_000D5417: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000D541E: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D5430
 * Original: 0x000D5430 - 0x000D56A4 (628 bytes, 207 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5430(void)
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

loc_000D5430: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5698; /* je: equal / zero */

loc_000D5444: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x000D5461u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000D5461: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5468u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5468: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D5698; /* jle: less or equal (signed <=) */

loc_000D5471: ;
    PUSH32(esp, 0x000D5476u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000D5476: ;
    edx = MEM32(eax);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000D5482u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5482: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5698; /* jne: not equal / not zero */

loc_000D548A: ;
    edx = MEM32(esp + 0x44);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x58);
    ecx = edi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x000D54AAu); RECOMP_ABI_CALL(0x000D4970u, sub_000D4970); /* call 0x000D4970 */

loc_000D54AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5698; /* jne: not equal / not zero */

loc_000D54B2: ;
    ecx = MEM32(esp + 0x44);
    esi = MEM32(esp + 0x50);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x54);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x58);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    esp = esp - 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esp);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000D54DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D54DA: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000D54E2u); RECOMP_ABI_CALL(0x000D4AD0u, sub_000D4AD0); /* call 0x000D4AD0 */

loc_000D54E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5698; /* jne: not equal / not zero */

loc_000D54EF: ;
    ecx = MEM32(esp + 0x44);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x54);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x58);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    esp = esp - 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esp);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000D5513u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5513: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000D551Bu); RECOMP_ABI_CALL(0x000D4CB0u, sub_000D4CB0); /* call 0x000D4CB0 */

loc_000D551B: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x2C);
    eax = eax + 0x2C;
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(esp + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000D55D1; /* je: equal / zero */

loc_000D5551: ;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D55D1; /* je: equal / zero */

loc_000D5559: ;
    ecx = esp + 0x58;
    PUSH32(esp, 0x000D5562u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000D5562: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D55D1; /* je: equal / zero */

loc_000D5566: ;
    ecx = esp + 0x58;
    PUSH32(esp, 0x000D556Fu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D556F: ;
    fp_push(MEMF(eax + 0x20)); /* fld float */
    ecx = MEM32(eax + 0x24);
    fp_top() = fp_top() - MEMF(esp + 0x44); /* fsub dword ptr [esp + 0x44] */
    edx = MEM32(eax + 0x28);
    eax = eax + 0x20;
    MEM32(esp + 0x2C) = ecx;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x48); /* fsub dword ptr [esp + 0x48] */
    MEM32(esp + 0x30) = edx;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    ecx = esp + 0x1C;
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x30);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D55B6u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000D55B6: ;
    ecx = esp + 0x1C;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D55C7u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_000D55C7: ;
    eax = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0x18) = eax;

loc_000D55D1: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x000D55E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D55E5: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D55F4u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D55F4: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x40) = edx;
    eax = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x000D5610u); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_000D5610: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000D563D; /* je: equal / zero */

loc_000D5619: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000D5621u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5621: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D563D; /* je: equal / zero */

loc_000D5625: ;
    edi = MEM32(edi + 4);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x000D5632u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5632: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5639u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5639: ;
    edi = eax;
    goto loc_000D5642;

loc_000D563D: ;
    edi = 0xC;

loc_000D5642: ;
    ebp = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x000D5653u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000D5653: ;
    eax = MEM32(esp + 0x5C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x30); PUSH32(esp, 0x000D5670u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5670: ;
    PUSH32(esp, 0x000D5675u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000D5675: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000D567Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D567C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D568C; /* jne: not equal / not zero */

loc_000D5680: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x000D568Cu); RECOMP_ABI_CALL(0x00090EE0u, sub_00090EE0); /* call 0x00090EE0 */

loc_000D568C: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 32; return; /* ret 28 */

loc_000D5698: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D56B0
 * Original: 0x000D56B0 - 0x000D5C71 (1473 bytes, 438 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D56B0(void)
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

loc_000D56B0: ;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000D5C65; /* je: equal / zero */

loc_000D56C4: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000D56CFu); RECOMP_ABI_CALL(0x000A0770u, sub_000A0770); /* call 0x000A0770 */

loc_000D56CF: ;
    esi = MEM32(esp + 0x9C);
    eax = MEM32(esi);
    ecx = eax + 0x524;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0;
    SET_LO8(edx, MEM8(ecx));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000D573D; /* je: equal / zero */

loc_000D5707: ;
    eax = MEM32(eax + 0x554);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000D573D; /* je: equal / zero */

loc_000D5715: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000D571Eu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000D571E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D573D; /* je: equal / zero */

loc_000D5722: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x554);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000D5734u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000D5734: ;
    edi = eax;
    esp = esp + 4;
    MEM32(esp + 0x14) = edi;

loc_000D573D: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x20);
    MEM32(esp + 0x5C) = edx;
    eax = MEM32(ecx + 0x24);
    MEM32(esp + 0x60) = eax;
    edx = MEM32(ecx + 0x28);
    MEM32(esp + 0x64) = edx;
    eax = MEM32(ecx);
    edx = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D5761u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5761: ;
    fp_push(MEMF(esp + 0x98)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = fp_top() + MEMF(0x3CB69C); /* fadd dword ptr [0x3cb69c] */
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x44) = ecx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x90);
    fp_push(MEMF(esp + 0x98)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3CB69C); /* fsub dword ptr [0x3cb69c] */
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x94);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x4C) = eax;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ecx;
    MEM32(esp + 0x30) = edx;
    ecx = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000D57DCu); RECOMP_ABI_CALL(0x000A2D00u, sub_000A2D00); /* call 0x000A2D00 */

loc_000D57DC: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D57F0; /* je: equal / zero */

loc_000D57E3: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D57ECu); RECOMP_ABI_CALL(0x000A07B0u, sub_000A07B0); /* call 0x000A07B0 */

loc_000D57EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D583D; /* jne: not equal / not zero */

loc_000D57F0: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    eax = esp + 0x10;
    fp_top() = fp_top() - MEMF(0x3CAA50); /* fsub dword ptr [0x3caa50] */
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000D5821u); RECOMP_ABI_CALL(0x000A2D00u, sub_000A2D00); /* call 0x000A2D00 */

loc_000D5821: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5C65; /* je: equal / zero */

loc_000D582C: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D5835u); RECOMP_ABI_CALL(0x000A07B0u, sub_000A07B0); /* call 0x000A07B0 */

loc_000D5835: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5C65; /* je: equal / zero */

loc_000D583D: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D5846u); RECOMP_ABI_CALL(0x000A07E0u, sub_000A07E0); /* call 0x000A07E0 */

loc_000D5846: ;
    edx = MEM32(eax);
    MEM32(esp + 0x90) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x94) = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(esi);
    MEM32(esp + 0x98) = edx;
    eax = MEM32(ecx);
    edx = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x148); PUSH32(esp, 0x000D5875u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5875: ;
    PUSH32(esp, 1);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x000D588Bu); RECOMP_ABI_CALL(0x000345B0u, sub_000345B0); /* call 0x000345B0 */

loc_000D588B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5C41; /* je: equal / zero */

loc_000D5893: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    edx = MEM32(esp + 0x20);
    fp_top() = fp_top() + MEMF(0x3CAA50); /* fadd dword ptr [0x3caa50] */
    eax = MEM32(esp + 0x24);
    ecx = edx;
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = eax;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM32(esp + 0x30) = eax;
    fp_top() = fp_top() - MEMF(0x3CAA50); /* fsub dword ptr [0x3caa50] */
    eax = MEM32(esi);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(eax + 0x1C);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000D58DDu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D58DD: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000D58F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D58F1: ;
    PUSH32(esp, eax);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000D590Bu); RECOMP_ABI_CALL(0x000A2D00u, sub_000A2D00); /* call 0x000A2D00 */

loc_000D590B: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5C41; /* je: equal / zero */

loc_000D5916: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D591Fu); RECOMP_ABI_CALL(0x000A07B0u, sub_000A07B0); /* call 0x000A07B0 */

loc_000D591F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5C41; /* je: equal / zero */

loc_000D5927: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D5930u); RECOMP_ABI_CALL(0x000A07F0u, sub_000A07F0); /* call 0x000A07F0 */

loc_000D5930: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8390)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8390] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5C41; /* jne: not equal / not zero */

loc_000D5944: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x2C);
    eax = eax + 0x2C;
    MEM32(esp + 0x50) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x54) = ecx;
    edx = MEM32(eax + 8);
    ecx = esp + 0x10;
    MEM32(esp + 0x58) = edx;
    PUSH32(esp, 0x000D5967u); RECOMP_ABI_CALL(0x000A07E0u, sub_000A07E0); /* call 0x000A07E0 */

loc_000D5967: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x90);
    MEM32(esp + 0x24) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = eax;
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0xA0);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0xA4);
    MEM32(eax + 8) = ecx;
    ecx = ebx;
    PUSH32(esp, 0x000D59A4u); RECOMP_ABI_CALL(0x000D4470u, sub_000D4470); /* call 0x000D4470 */

loc_000D59A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5C2E; /* je: equal / zero */

loc_000D59AC: ;
    edx = MEM32(esp + 0x20);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x34);
    ecx = ebx;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x000D59CCu); RECOMP_ABI_CALL(0x000D4970u, sub_000D4970); /* call 0x000D4970 */

loc_000D59CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5C2E; /* jne: not equal / not zero */

loc_000D59D4: ;
    ecx = MEM32(esp + 0x20);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x50);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x54);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x000D5A0Eu); RECOMP_ABI_CALL(0x000D4AD0u, sub_000D4AD0); /* call 0x000D4AD0 */

loc_000D5A0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5C2E; /* je: equal / zero */

loc_000D5A16: ;
    ecx = MEM32(esp + 0x20);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x50);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x54);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x000D5A50u); RECOMP_ABI_CALL(0x000D4CB0u, sub_000D4CB0); /* call 0x000D4CB0 */

loc_000D5A50: ;
    SET_LO8(eax, MEM8(esp + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5AD9; /* je: equal / zero */

loc_000D5A5B: ;
    ecx = esp + 0xA4;
    PUSH32(esp, 0x000D5A67u); RECOMP_ABI_CALL(0x0001CD30u, sub_0001CD30); /* call 0x0001CD30 */

loc_000D5A67: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5AD9; /* je: equal / zero */

loc_000D5A6B: ;
    ecx = esp + 0xA4;
    PUSH32(esp, 0x000D5A77u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D5A77: ;
    fp_push(MEMF(eax + 0x20)); /* fld float */
    ecx = MEM32(eax + 0x24);
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    edx = MEM32(eax + 0x28);
    eax = eax + 0x20;
    MEM32(esp + 0x78) = ecx;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    MEM32(esp + 0x7C) = edx;
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    ecx = esp + 0x44;
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x7C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x4C) = eax;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D5ABEu); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000D5ABE: ;
    ecx = esp + 0x44;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D5ACFu); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_000D5ACF: ;
    eax = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0x58) = eax;

loc_000D5AD9: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ecx = MEM32(esi);
    fp_top() = fp_top() + MEMF(0x3CAA64); /* fadd dword ptr [0x3caa64] */
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x000D5AFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5AFB: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D5B0Au); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000D5B0A: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x88) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x8C) = edx;
    eax = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0x88) = eax;
    PUSH32(esp, 0x000D5B2Fu); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_000D5B2F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(edi);
    ecx = esp;
    PUSH32(esp, 0x3C806C);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000D5B46u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000D5B46: ;
    ebp = MEM32(esp + 0xA8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000D5B59u); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000D5B59: ;
    ecx = MEM32(ebp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000D5B74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5B74: ;
    PUSH32(esp, 0x000D5B79u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000D5B79: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000D5B80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5B80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5B90; /* jne: not equal / not zero */

loc_000D5B84: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x000D5B90u); RECOMP_ABI_CALL(0x00090EE0u, sub_00090EE0); /* call 0x00090EE0 */

loc_000D5B90: ;
    eax = MEM32(esi);
    ebx = 0x3F800000;
    MEM32(eax + 0x478) = ebx;
    ecx = MEM32(esi);
    PUSH32(esp, 0x498D90);
    PUSH32(esp, 0x000D5BA9u); RECOMP_ABI_CALL(0x00027260u, sub_00027260); /* call 0x00027260 */

loc_000D5BA9: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5BE5; /* je: equal / zero */

loc_000D5BB1: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    edx = MEM32(edi);
    fp_top() = fp_top() + MEMF(0x3D5F8C); /* fadd dword ptr [0x3d5f8c] */
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x000D5BD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5BD3: ;
    PUSH32(esp, 0x498D90);
    ecx = edi;
    MEM32(edi + 0x478) = ebx;
    PUSH32(esp, 0x000D5BE5u); RECOMP_ABI_CALL(0x00027260u, sub_00027260); /* call 0x00027260 */

loc_000D5BE5: ;
    SET_LO8(eax, MEM8(esp + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5C22; /* jne: not equal / not zero */

loc_000D5BF0: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM8(edx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 1), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5C22; /* je: equal / zero */

loc_000D5BFA: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM8(ecx + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x334), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5C22; /* jne: not equal / not zero */

loc_000D5C05: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D5C0Eu); RECOMP_ABI_CALL(0x00034BB0u, sub_00034BB0); /* call 0x00034BB0 */

loc_000D5C0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5C22; /* jne: not equal / not zero */

loc_000D5C12: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000D5C1Bu); RECOMP_ABI_CALL(0x00033A70u, sub_00033A70); /* call 0x00033A70 */

loc_000D5C1B: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x000D5C22u); RECOMP_ABI_CALL(0x00031860u, sub_00031860); /* call 0x00031860 */

loc_000D5C22: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 32; return; /* ret 28 */

loc_000D5C2E: ;
    esi = MEM32(esi);
    eax = MEM32(esi);
    ecx = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x148); PUSH32(esp, 0x000D5C3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5C3F: ;
    goto loc_000D5C52;

loc_000D5C41: ;
    esi = MEM32(esi);
    edx = MEM32(esi);
    eax = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x000D5C52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5C52: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5C65; /* je: equal / zero */

loc_000D5C56: ;
    edx = MEM32(edi);
    eax = esp + 0x5C;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x000D5C65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5C65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D5C80
 * Original: 0x000D5C80 - 0x000D6021 (929 bytes, 289 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5C80(void)
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

loc_000D5C80: ;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000D6015; /* je: equal / zero */

loc_000D5C94: ;
    eax = MEM32(esp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6015; /* je: equal / zero */

loc_000D5CA0: ;
    ecx = esp + 0x74;
    PUSH32(esp, 0x000D5CA9u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000D5CA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6015; /* je: equal / zero */

loc_000D5CB1: ;
    esi = MEM32(esp + 0x6C);
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 0x524));
    ebx = eax + 0x4DC;
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ecx, LO8(ecx) & 1);
    MEM8(esp + 0x6C) = LO8(ecx);
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x2C) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x30) = edx;
    eax = MEM32(eax + 0x28);
    ecx = esp + 0x74;
    MEM32(esp + 0x54) = 0x42100000;
    MEM32(esp + 0x58) = 0x42400000;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0x42700000;
    MEM32(esp + 0x64) = 0x42900000;
    MEM32(esp + 0x44) = 0x40490FDB;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0x3FC90FDB;
    MEM32(esp + 0x50) = 0xBFC90FDBu;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x000D5D32u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D5D32: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x28);
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x74;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000D5D50u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D5D50: ;
    ecx = MEM32(eax + 0x34);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x1C) = ecx;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000D5D65u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000D5D65: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5D80; /* je: equal / zero */

loc_000D5D6C: ;
    eax = MEM32(eax + 0x2D8);
    _fa = (uint32_t)(MEM8(eax + 0x3A1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x3A1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5D80; /* je: equal / zero */

loc_000D5D7B: ;
    MEM8(esp + 0x6C) = 0;

loc_000D5D80: ;
    SET_LO8(eax, MEM8(ebx + 0x48));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax & 2;
    eax = eax << 1;
    eax = eax | 1;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = 0;
    if (((int32_t)eax <= 0)) goto loc_000D6015; /* jle: less or equal (signed <=) */

loc_000D5DA2: ;
    edi = MEM32(esp + 0x70);
    goto loc_000D5DB0;

    /* nop */
    /* nop */

loc_000D5DB0: ;
    SET_LO8(eax, MEM8(esp + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5EB1; /* je: equal / zero */

loc_000D5DBC: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5DE3; /* je: equal / zero */

loc_000D5DC3: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D5DCFu); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000D5DCF: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9760)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9760] */
    esp = esp + 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D5EB1; /* jp: parity */

loc_000D5DE3: ;
    ecx = esp + 0x74;
    PUSH32(esp, 0x000D5DECu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000D5DEC: ;
    edx = MEM32(eax);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000D5DF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5DF8: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    eax = MEM32(esi);
    eax = eax + 0x20;
    fp_top() = fp_top() + MEMF(0x3C72F0); /* fadd dword ptr [0x3c72f0] */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5FFE; /* jne: not equal / not zero */

loc_000D5E47: ;
    edx = MEM32(esp + 0x74);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    eax = esp;
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x000D5E70u); RECOMP_ABI_CALL(0x000D5430u, sub_000D5430); /* call 0x000D5430 */

loc_000D5E70: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6000; /* je: equal / zero */

loc_000D5E78: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D5E81u); RECOMP_ABI_CALL(0x000381F0u, sub_000381F0); /* call 0x000381F0 */

loc_000D5E81: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4F32D4);
    edi = eax;
    PUSH32(esp, 0x000D5E93u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000D5E93: ;
    ecx = eax;
    PUSH32(esp, 0x000D5E9Au); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000D5E9A: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D5EA2u); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000D5EA2: ;
    MEM32(ebx + 0xC) = edi;

loc_000D5EA5: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x58;
    esp += 16; return; /* ret 12 */

loc_000D5EB1: ;
    MEM32(esp + 0x14) = 0;
    /* nop */

loc_000D5EC0: ;
    _fa = (uint32_t)(MEM8(ebx + 0x48)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x48), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5ED7; /* je: equal / zero */

loc_000D5EC6: ;
    PUSH32(esp, 0x000D5ECBu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000D5ECB: ;
    fp_top() = fp_top() * MEMF(0x3C8328); /* fmul dword ptr [0x3c8328] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    goto loc_000D5EE3;

loc_000D5ED7: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x14);
    fp_top() = fp_top() + MEMF(esp + eax * 4 + 0x44); /* fadd dword ptr [esp + eax*4 + 0x44] */

loc_000D5EE3: ;
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D5EF1u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_000D5EF1: ;
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(ebx + 0x48));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5F04; /* je: equal / zero */

loc_000D5EFF: ;
    fp_push(MEMF(ebx + 0x18)); /* fld float */
    goto loc_000D5F0C;

loc_000D5F04: ;
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(esp + edx * 4 + 0x54)); /* fld float */

loc_000D5F0C: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    eax = MEM32(esi);
    fp_top() = cos(fp_top()); /* fcos */
    eax = eax + 0x20;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x70); /* fadd dword ptr [esp + 0x70] */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x70); /* fsub dword ptr [esp + 0x70] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 3) & 7]; /* fsub st(3) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5FE8; /* jne: not equal / not zero */

loc_000D5F6C: ;
    edx = MEM32(esp + 0x70);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x7C);
    eax = esp;
    PUSH32(esp, edi);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax + 8) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x000D5F95u); RECOMP_ABI_CALL(0x000D56B0u, sub_000D56B0); /* call 0x000D56B0 */

loc_000D5F95: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5FEA; /* je: equal / zero */

loc_000D5F99: ;
    ecx = MEM32(esi);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x20); /* fsub dword ptr [ecx + 0x20] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x24); /* fsub dword ptr [ecx + 0x24] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x28); /* fsub dword ptr [ecx + 0x28] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9784)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9784] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D5EA5; /* je: equal / zero */

loc_000D5FD9: ;
    edx = MEM32(ecx);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x000D5FE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D5FE6: ;
    goto loc_000D5FEA;

loc_000D5FE8: ;
    fp_pop(); /* fstp st(0) */

loc_000D5FEA: ;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000D5EC0; /* jb: below (unsigned <) */

loc_000D5FFC: ;
    goto loc_000D6000;

loc_000D5FFE: ;
    fp_pop(); /* fstp st(0) */

loc_000D6000: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000D5DB0; /* jl: less (signed <) */

loc_000D6015: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x58;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D6030
 * Original: 0x000D6030 - 0x000D6431 (1025 bytes, 339 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6030(void)
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

loc_000D6030: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000D62C1; /* je: equal / zero */

loc_000D6044: ;
    edi = MEM32(esp + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D62C1; /* je: equal / zero */

loc_000D6050: ;
    esi = MEM32(esp + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D62C1; /* je: equal / zero */

loc_000D605C: ;
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x34)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(edi + 0x30); /* fadd dword ptr [edi + 0x30] */
    ebx = eax + 0x4DC;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D6073u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_000D6073: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 6);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x338);
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    ecx = esp;
    MEM32(esp + 0x3C) = eax;
    MEM32(ecx) = eax;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D609Cu); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000D609C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D60AE; /* je: equal / zero */

loc_000D60A3: ;
    ecx = eax;
    PUSH32(esp, 0x000D60AAu); RECOMP_ABI_CALL(0x00029080u, sub_00029080); /* call 0x00029080 */

loc_000D60AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D60B8; /* jne: not equal / not zero */

loc_000D60AE: ;
    ecx = MEM32(0x498D90);
    MEM32(esp + 0x38) = ecx;

loc_000D60B8: ;
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D60CF; /* jne: not equal / not zero */

loc_000D60C8: ;
    edx = MEM32(ebx + 0x14);
    MEM32(esp + 0x34) = edx;

loc_000D60CF: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6117; /* je: equal / zero */

loc_000D60D7: ;
    eax = MEM32(ebx + 8);
    fp_push(MEMF(ebx)); /* fld float */
    ecx = MEM32(esp + 0x3C);
    fp_push(MEMF(ebx + 4)); /* fld float */
    edx = MEM32(esp + 0x38);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = eax;
    ecx = MEM32(esp + 0x28);
    eax = esp;
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    PUSH32(esp, esi);
    esp = esp - 0xC;
    eax = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    ecx = ebp;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D610Du); RECOMP_ABI_CALL(0x000D56B0u, sub_000D56B0); /* call 0x000D56B0 */

loc_000D610D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 20; return; /* ret 16 */

loc_000D6117: ;
    SET_LO8(eax, MEM8(ebx + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_000D61DB; /* jns: not sign (positive) */

loc_000D6122: ;
    ecx = 0x485858;
    PUSH32(esp, 0x000D612Cu); RECOMP_ABI_CALL(0x0001CD30u, sub_0001CD30); /* call 0x0001CD30 */

loc_000D612C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D62C1; /* je: equal / zero */

loc_000D6134: ;
    eax = MEM32(0x485858);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x3C) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, 0x000D6147u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000D6147: ;
    ebx = eax;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D62C1; /* je: equal / zero */

loc_000D6154: ;
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, 0xC0490FDBu);
    PUSH32(esp, 0x000D6163u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000D6163: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    edx = MEM32(ebx + 0x20);
    eax = MEM32(esp + 0x44);
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x20) = edx;
    eax = esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0xC;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = fp_top() * MEMF(0x3CAA50); /* fmul dword ptr [0x3caa50] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3CAA50); /* fmul dword ptr [0x3caa50] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    MEM32(eax) = ecx;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    eax = esp;
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() + MEMF(esp + 0x5C); /* fadd dword ptr [esp + 0x5c] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x38);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 8) = ecx;
    ecx = ebp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D61D1u); RECOMP_ABI_CALL(0x000D56B0u, sub_000D56B0); /* call 0x000D56B0 */

loc_000D61D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 20; return; /* ret 16 */

loc_000D61DB: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D620C; /* je: equal / zero */

loc_000D61E3: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x000D61ECu); RECOMP_ABI_CALL(0x0001CD30u, sub_0001CD30); /* call 0x0001CD30 */

loc_000D61EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D620C; /* je: equal / zero */

loc_000D61F0: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000D6202u); RECOMP_ABI_CALL(0x000D5C80u, sub_000D5C80); /* call 0x000D5C80 */

loc_000D6202: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 20; return; /* ret 16 */

loc_000D620C: ;
    SET_LO16(eax, MEM16(ebx + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D62CD; /* je: equal / zero */

loc_000D6218: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D62C1; /* je: equal / zero */

loc_000D6220: ;
    eax = MEM32(0x5BC9D0);
    ecx = MEM32(0x5BC9D4);
    edx = MEM32(0x5BC9D8);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    /* nop */

loc_000D6240: ;
    PUSH32(esp, 0x000D6245u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000D6245: ;
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D6256u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000D6256: ;
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    ecx = esp + 0x18;
    MEM32(esp + 0x20) = 0;
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D6273u); RECOMP_ABI_CALL(0x00074320u, sub_00074320); /* call 0x00074320 */

loc_000D6273: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C93C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c93c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6240; /* je: equal / zero */

loc_000D6280: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000D6289u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000D6289: ;
    fp_pop(); /* fstp st(0) */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D629Au); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000D629A: ;
    edx = MEM32(eax);
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(esi);
    MEM32(esp + 0x28) = edx;
    eax = MEM32(ecx);
    esp = esp + 8;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x000D62C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D62C1: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 20; return; /* ret 16 */

loc_000D62CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D62DF; /* je: equal / zero */

loc_000D62D1: ;
    eax = MEM32(ebx);
    fp_push(MEMF(ebx + 8)); /* fld float */
    ecx = MEM32(ebx + 4);
    MEM32(esp + 0x18) = eax;
    goto loc_000D62F1;

loc_000D62DF: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x20);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    ecx = MEM32(eax + 0x24);
    eax = eax + 0x20;
    MEM32(esp + 0x18) = edx;

loc_000D62F1: ;
    { int _teleport = raven_ai_teleport_event(ebp, esi, edi, MEM32(esp + 0x38)); if (_teleport >= 0) { fp_pop(); SET_LO8(eax, _teleport); POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); POP32(esp, ebx); esp += 0x20; esp += 20; return; } }
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(esp + 0x38);
    fp_top() = cos(fp_top()); /* fcos */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    PUSH32(esp, esi);
    esp = esp - 0xC;
    eax = esp;
    ecx = ebp;
    MEMF(esp + 0x58) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x5C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x50); /* fmul dword ptr [esp + 0x50] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x50); /* fmul dword ptr [esp + 0x50] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D634Eu); RECOMP_ABI_CALL(0x000D56B0u, sub_000D56B0); /* call 0x000D56B0 */

loc_000D634E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D635E; /* je: equal / zero */

loc_000D6352: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 20; return; /* ret 16 */

loc_000D635E: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = fp_top() * MEMF(0x3D5F9C); /* fmul dword ptr [0x3d5f9c] */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    eax = esp;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    fp_push(MEMF(esp + 0x48)); /* fld float */
    MEM32(eax) = ecx;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    esp = esp - 0xC;
    eax = esp;
    ecx = ebp;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x50); /* fmul dword ptr [esp + 0x50] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D63B9u); RECOMP_ABI_CALL(0x000D56B0u, sub_000D56B0); /* call 0x000D56B0 */

loc_000D63B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D6352; /* jne: not equal / not zero */

loc_000D63BD: ;
    PUSH32(esp, 0x000D63C2u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000D63C2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D63C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D63C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D62C1; /* jle: less or equal (signed <=) */

loc_000D63D2: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = fp_top() * MEMF(0x3D5F9C); /* fmul dword ptr [0x3d5f9c] */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    ecx = MEM32(esp + 0x40);
    fp_push(MEMF(esp + 0x48)); /* fld float */
    eax = esp;
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    PUSH32(esp, edi);
    MEM32(eax) = ecx;
    PUSH32(esp, esi);
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp - 0xC;
    eax = esp;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    ecx = ebp;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x5C); /* fadd dword ptr [esp + 0x5c] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D6427u); RECOMP_ABI_CALL(0x000D56B0u, sub_000D56B0); /* call 0x000D56B0 */

loc_000D6427: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D6440
 * Original: 0x000D6440 - 0x000D6455 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6440(void)
{

loc_000D6440: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6452u); RECOMP_ABI_CALL(0x000D6030u, sub_000D6030); /* call 0x000D6030 */

loc_000D6452: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6460
 * Original: 0x000D6460 - 0x000D6475 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6460(void)
{

loc_000D6460: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6472u); RECOMP_ABI_CALL(0x000D6030u, sub_000D6030); /* call 0x000D6030 */

loc_000D6472: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6480
 * Original: 0x000D6480 - 0x000D65BD (317 bytes, 115 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D65AD; /* je: equal / zero */

loc_000D6490: ;
    esi = MEM32(esp + 0x10);
    ebx = MEM32(esi);
    eax = MEM32(ebx + 0x338);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000D64D7; /* je: equal / zero */

loc_000D64A4: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D64ADu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000D64AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D64D7; /* je: equal / zero */

loc_000D64B1: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x338);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000D64C3u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000D64C3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D64D7; /* je: equal / zero */

loc_000D64CA: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x38), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6561; /* je: equal / zero */

loc_000D64D7: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x000D64F0u); RECOMP_ABI_CALL(0x000D4660u, sub_000D4660); /* call 0x000D4660 */

loc_000D64F0: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6507; /* je: equal / zero */

loc_000D64F7: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(esi);
    PUSH32(esp, 0x000D6507u); RECOMP_ABI_CALL(0x0003B4F0u, sub_0003B4F0); /* call 0x0003B4F0 */

loc_000D6507: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x338);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000D653D; /* je: equal / zero */

loc_000D6517: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D6520u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000D6520: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D653D; /* je: equal / zero */

loc_000D6524: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x338);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000D6536u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000D6536: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D6561; /* jne: not equal / not zero */

loc_000D653D: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000D654Du); RECOMP_ABI_CALL(0x000D6030u, sub_000D6030); /* call 0x000D6030 */

loc_000D654D: ;
    _fa = (uint32_t)(MEM8(ebx + 0x524)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x524), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D65AD; /* jne: not equal / not zero */

loc_000D6556: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4F329C);
    goto loc_000D6597;

loc_000D6561: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000D6571u); RECOMP_ABI_CALL(0x000D6030u, sub_000D6030); /* call 0x000D6030 */

loc_000D6571: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D65B5; /* jne: not equal / not zero */

loc_000D6575: ;
    _fa = (uint32_t)(MEM8(ebx + 0x524)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x524), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D65B5; /* jne: not equal / not zero */

loc_000D657E: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000D658Eu); RECOMP_ABI_CALL(0x000D6030u, sub_000D6030); /* call 0x000D6030 */

loc_000D658E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4F3348);

loc_000D6597: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x000D659Eu); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000D659E: ;
    ecx = eax;
    PUSH32(esp, 0x000D65A5u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000D65A5: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D65ADu); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_000D65AD: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D65B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D65C0
 * Original: 0x000D65C0 - 0x000D66AD (237 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D65C0(void)
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

loc_000D65C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D65D0; /* jne: not equal / not zero */

loc_000D65CA: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D65D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000D65E3u); RECOMP_ABI_CALL(0x000D4250u, sub_000D4250); /* call 0x000D4250 */

loc_000D65E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D66A5; /* je: equal / zero */

loc_000D65EB: ;
    PUSH32(esp, 0x3D6070);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D65F6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D65F6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D660E; /* jne: not equal / not zero */

loc_000D65FD: ;
    PUSH32(esp, edi);
    ecx = esi + 0x28;
    PUSH32(esp, 0x000D6606u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000D6606: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D660E: ;
    PUSH32(esp, 0x3D6064);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D6619u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D6619: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D6642; /* jne: not equal / not zero */

loc_000D6620: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D662Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D662B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D6642; /* jne: not equal / not zero */

loc_000D6632: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(esi + 0x2C) = LO8(eax);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D6642: ;
    PUSH32(esp, 0x3D6058);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D664Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D664D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D667F; /* jne: not equal / not zero */

loc_000D6654: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D665Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D665F: ;
    SET_LO8(ebx, MEM8(esi + 0x2C));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(ecx, LO8(ebx));
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, ebx);
    MEM8(esi + 0x2C) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D667F: ;
    PUSH32(esp, 0x3C8660);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D668Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D668A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D669D; /* jne: not equal / not zero */

loc_000D6691: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D6697u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000D6697: ;
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_000D669D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D66A5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D66B0
 * Original: 0x000D66B0 - 0x000D675D (173 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D66B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D66B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000D66C4u); RECOMP_ABI_CALL(0x000E3FB0u, sub_000E3FB0); /* call 0x000E3FB0 */

loc_000D66C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6755; /* je: equal / zero */

loc_000D66CC: ;
    PUSH32(esp, 0x3C96EC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D66D7u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D66D7: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D66F6; /* jne: not equal / not zero */

loc_000D66DE: ;
    PUSH32(esp, 0x000D66E3u); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000D66E3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000D66EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D66EB: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D66F6: ;
    PUSH32(esp, 0x3D6098);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D6701u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D6701: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D672A; /* jne: not equal / not zero */

loc_000D6708: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44C5F0);
    PUSH32(esp, 0x000D6718u); RECOMP_ABI_CALL(0x00123100u, sub_00123100); /* call 0x00123100 */

loc_000D6718: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0x1C) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D672A: ;
    PUSH32(esp, 0x3D608C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D6735u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000D6735: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D674D; /* jne: not equal / not zero */

loc_000D673C: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D6747u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_000D6747: ;
    esp = esp + 8;
    MEM8(esi + 0x1D) = LO8(eax);

loc_000D674D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D6755: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D6760
 * Original: 0x000D6760 - 0x000D67B2 (82 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6760: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000D676Eu); RECOMP_ABI_CALL(0x000CF4D0u, sub_000CF4D0); /* call 0x000CF4D0 */

loc_000D676E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D67AB; /* je: equal / zero */

loc_000D6772: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D67AB; /* je: equal / zero */

loc_000D6779: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D67A4; /* jne: not equal / not zero */

loc_000D677D: ;
    PUSH32(esp, 0x000D6782u); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000D6782: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D678Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D678D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D67A4; /* je: equal / zero */

loc_000D6793: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x000D679Du); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000D679D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x4C); PUSH32(esp, 0x000D67A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D67A3: ;
    POP32(esp, ebx);

loc_000D67A4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D67AB: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D67C0
 * Original: 0x000D67C0 - 0x000D67CF (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D67C0(void)
{

loc_000D67C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000D67CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D67CC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D67D0
 * Original: 0x000D67D0 - 0x000D681E (78 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D67D0(void)
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

loc_000D67D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3E0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000D67E9; /* jne: not equal / not zero */

loc_000D67E6: ;
    esi = MEM32(edi + 0x18);

loc_000D67E9: ;
    PUSH32(esp, 0x000D67EEu); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000D67EE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D67F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D67F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6816; /* je: equal / zero */

loc_000D67FA: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x1D);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(edi + 0x1C));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esp + 0x1C));
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000D6814u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D6814: ;
    fp_pop(); /* fstp st(0) */

loc_000D6816: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D6820
 * Original: 0x000D6820 - 0x000D6842 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6820: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(esp + 4);
    if (TEST_Z(_fa, _fb)) goto loc_000D6837; /* je: equal / zero */

loc_000D682C: ;
    ecx = ecx + 0x590;
    g_seh_ebp = ebp; sub_000496D0(); return; /* tail jmp 0x000496D0 */

loc_000D6837: ;
    ecx = ecx + 0x598;
    g_seh_ebp = ebp; sub_000496D0(); return; /* tail jmp 0x000496D0 */

}

/**
 * sub_000D6850
 * Original: 0x000D6850 - 0x000D6964 (276 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6850(void)
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

loc_000D6850: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_000D686E; /* je: equal / zero */

loc_000D6862: ;
    ecx = ebx + esi * 8 + 0x590;
    PUSH32(esp, 0x000D686Eu); RECOMP_ABI_CALL(0x000496D0u, sub_000496D0); /* call 0x000496D0 */

loc_000D686E: ;
    esi = ebx + esi * 8 + 0x590;
    ecx = esi;
    PUSH32(esp, 0x000D687Cu); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_000D687C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D6961; /* jne: not equal / not zero */

loc_000D6884: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D68B3; /* je: equal / zero */

loc_000D688D: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D68B3; /* je: equal / zero */

loc_000D6892: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D68B3; /* je: equal / zero */

loc_000D689A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D68B3; /* je: equal / zero */

loc_000D689F: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000D68B1u); RECOMP_ABI_CALL(0x00049A20u, sub_00049A20); /* call 0x00049A20 */

loc_000D68B1: ;
    goto loc_000D68C4;

loc_000D68B3: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000D68C4u); RECOMP_ABI_CALL(0x00049720u, sub_00049720); /* call 0x00049720 */

loc_000D68C4: ;
    ecx = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D68D5; /* je: equal / zero */

loc_000D68CE: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D68D5; /* je: equal / zero */

loc_000D68D3: ;
    eax = ecx;

loc_000D68D5: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x000D68E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D68E5: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D68EDu); RECOMP_ABI_CALL(0x000495E0u, sub_000495E0); /* call 0x000495E0 */

loc_000D68ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_000D68FB; /* jne: not equal / not zero */

loc_000D68F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000496D0(); return; /* tail jmp 0x000496D0 */

loc_000D68FB: ;
    PUSH32(esp, 0x000D6900u); RECOMP_ABI_CALL(0x000495D0u, sub_000495D0); /* call 0x000495D0 */

loc_000D6900: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D6937; /* jne: not equal / not zero */

loc_000D6904: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000D690Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D690B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000D6912u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D6912: ;
    esi = eax;
    edi = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D6922u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000D6922: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D692Bu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000D692B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edi); PUSH32(esp, 0x000D6933u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D6933: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D6937: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6960; /* je: equal / zero */

loc_000D693B: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6960; /* je: equal / zero */

loc_000D6940: ;
    PUSH32(esp, 0x000D6945u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000D6945: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000D6954u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000D6954: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000D6960u); RECOMP_ABI_CALL(0x00049B50u, sub_00049B50); /* call 0x00049B50 */

loc_000D6960: ;
    POP32(esp, edi);

loc_000D6961: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D6970
 * Original: 0x000D6970 - 0x000D6A86 (278 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6970: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D6A81; /* jle: less or equal (signed <=) */

loc_000D6980: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6A81; /* jge: greater or equal (signed >=) */

loc_000D6989: ;
    _fa = (uint32_t)(MEM8(esi + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D69A4; /* je: equal / zero */

loc_000D698F: ;
    ecx = MEM32(esp + 0xC);
    ecx = ecx + eax * 8 + 0x590;
    PUSH32(esp, 0x000D699Fu); RECOMP_ABI_CALL(0x000496D0u, sub_000496D0); /* call 0x000496D0 */

loc_000D699F: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D69A4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D69B8; /* jne: not equal / not zero */

loc_000D69AE: ;
    MEM32(esp + 0x10) = 0x3C806C;
    goto loc_000D69D2;

loc_000D69B8: ;
    PUSH32(esp, 0x000D69BDu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D69BD: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    eax = edx + eax + 0x4008;
    MEM32(esp + 0x10) = eax;

loc_000D69D2: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D69E0; /* jne: not equal / not zero */

loc_000D69D9: ;
    ebp = 0x3C806C;
    goto loc_000D69F6;

loc_000D69E0: ;
    PUSH32(esp, 0x000D69E5u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D69E5: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    ebp = ecx + eax + 0x4008;

loc_000D69F6: ;
    edi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D6A04; /* jne: not equal / not zero */

loc_000D69FD: ;
    ebx = 0x3C806C;
    goto loc_000D6A1A;

loc_000D6A04: ;
    PUSH32(esp, 0x000D6A09u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D6A09: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    ebx = edx + eax + 0x4008;

loc_000D6A1A: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D6A28; /* jne: not equal / not zero */

loc_000D6A21: ;
    edi = 0x3C806C;
    goto loc_000D6A3E;

loc_000D6A28: ;
    PUSH32(esp, 0x000D6A2Du); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000D6A2D: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    edi = ecx + eax + 0x4008;

loc_000D6A3E: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x28));
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) >> 2);
    SET_LO8(eax, LO8(eax) >> 1);
    ecx = esi;
    edx = edx & 0xFFFFFF01u;
    PUSH32(esp, edx);
    eax = eax & 0xFFFFFF01u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6A60u); RECOMP_ABI_CALL(0x000CED70u, sub_000CED70); /* call 0x000CED70 */

loc_000D6A60: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6A7Bu); RECOMP_ABI_CALL(0x000D6850u, sub_000D6850); /* call 0x000D6850 */

loc_000D6A7B: ;
    esp = esp + 0x28;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000D6A81: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D6A90
 * Original: 0x000D6A90 - 0x000D6B0B (123 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6A90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(esp + 7) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000D6B08; /* je: equal / zero */

loc_000D6A9F: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6B08; /* je: equal / zero */

loc_000D6AA4: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6B08; /* je: equal / zero */

loc_000D6AAC: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6B08; /* je: equal / zero */

loc_000D6AB1: ;
    ecx = esp + 7;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6ABCu); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_000D6ABC: ;
    SET_LO8(ecx, MEM8(esp + 0xF));
    esp = esp + 8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6B08; /* je: equal / zero */

loc_000D6AC7: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    if (TEST_Z(_fa, _fb)) goto loc_000D6AF2; /* je: equal / zero */

loc_000D6AD9: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6AECu); RECOMP_ABI_CALL(0x000D6850u, sub_000D6850); /* call 0x000D6850 */

loc_000D6AEC: ;
    esp = esp + 0x28;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D6AF2: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D6B05u); RECOMP_ABI_CALL(0x000D6850u, sub_000D6850); /* call 0x000D6850 */

loc_000D6B05: ;
    esp = esp + 0x28;

loc_000D6B08: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
