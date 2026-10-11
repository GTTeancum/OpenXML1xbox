#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_harming_callbacks.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_powerup_definition_allocate; original guest entry 0x00096740.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00096740
 * Original: 0x00096740 - 0x000967A2 (98 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_powerup_definition_allocate(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096740: ;
    PUSH32(esp, 0x00096745u); RECOMP_ABI_CALL(0x000966F0u, sub_000966F0); /* call 0x000966F0 */

loc_00096745: ;
    _fa = (uint32_t)(MEM32(eax + 0x7DD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x7DD0), 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096754; /* jne: not equal / not zero */

loc_00096751: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00096754: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009675Cu); RECOMP_ABI_CALL(0x000966F0u, sub_000966F0); /* call 0x000966F0 */

loc_0009675C: ;
    ebx = eax;
    ecx = ebx;
    PUSH32(esp, 0x00096765u); RECOMP_ABI_CALL(0x00094DC0u, sub_00094DC0); /* call 0x00094DC0 */

loc_00096765: ;
    esi = eax;
    edi = esi + esi * 2;
    edi = edi << 6;
    eax = edi + ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096776u); RECOMP_ABI_CALL(0x000965B0u, sub_000965B0); /* call 0x000965B0 */

loc_00096776: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ebx + ecx * 4 + 0x7B00;
    ecx = esi;
    esi = MEM32(eax);
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    esp = esp + 4;
    esi = esi | edx;
    MEM32(eax) = esi;
    PUSH32(esp, 0x0009679Cu); RECOMP_ABI_CALL(0x000966F0u, sub_000966F0); /* call 0x000966F0 */

loc_0009679C: ;
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
