#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_harming_callbacks.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_projectile_get_explosion_record; original guest entry 0x00096960.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00096960
 * Original: 0x00096960 - 0x000969E2 (130 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_projectile_get_explosion_record(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096960: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x2C4;
    if (TEST_Z(_fa, _fb)) goto loc_0009697F; /* je: equal / zero */

loc_00096974: ;
    ecx = edi;
    PUSH32(esp, 0x0009697Bu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0009697B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009698A; /* jne: not equal / not zero */

loc_0009697F: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    goto loc_00096992;

loc_0009698A: ;
    edx = MEM32(edi);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;

loc_00096992: ;
    SET_LO16(ecx, ZX8(MEM8(esi + 0x342)));
    MEM16(eax + 0x14) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0x338));
    MEM16(eax + 8) = LO16(edx);
    ecx = MEM32(esi + 0x2D4);
    MEM8(eax + 0x60) = MEM8(eax + 0x60) | 1;
    MEM32(eax + 0x5C) = ecx;
    SET_LO16(ecx, MEM16(esi + 0x33E));
    MEM16(eax + 0xA) = LO16(ecx);
    edx = MEM32(esi + 0x2E0);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(esi + 0x2E8);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(esi + 0x2F0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x44) = edx;
    raven_projectile_explosion_victim_restore(esi, eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
