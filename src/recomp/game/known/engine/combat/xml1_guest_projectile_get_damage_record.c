#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_harming_callbacks.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_projectile_get_damage_record; original guest entry 0x00096870.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00096870
 * Original: 0x00096870 - 0x00096906 (150 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_projectile_get_damage_record(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096870: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x2C4;
    if (TEST_Z(_fa, _fb)) goto loc_0009688F; /* je: equal / zero */

loc_00096884: ;
    ecx = edi;
    PUSH32(esp, 0x0009688Bu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0009688B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009689A; /* jne: not equal / not zero */

loc_0009688F: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    goto loc_000968A2;

loc_0009689A: ;
    edx = MEM32(edi);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;

loc_000968A2: ;
    SET_LO16(ecx, ZX8(MEM8(esi + 0x342)));
    MEM16(eax + 0x14) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0x336));
    MEM16(eax + 8) = LO16(edx);
    SET_LO16(ecx, MEM16(esi + 0x33C));
    MEM16(eax + 0xA) = LO16(ecx);
    edx = MEM32(esi + 0x2DC);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(esi + 0x2E4);
    SET_LO8(edx, MEM8(eax + 0x60));
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esi + 0x2D0);
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(eax + 0x60) = LO8(edx);
    MEM32(eax + 0x5C) = ecx;
    edx = MEM32(esi + 0x2F0);
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0xC) = 5;
    ecx = MEM32(esi + 0x2D8);
    POP32(esp, edi);
    MEM32(eax + 0x48) = ecx;
    raven_projectile_victim_restore(esi, eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
