#define RECOMP_GENERATED_CODE
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_leader_event_guest.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/actors/raven_leader_actor.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_actor_remove_powerup; original guest entry 0x0002AF30.
 * Evidence: src/engine/powers/raven_powerup_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0002AF30
 * Original: 0x0002AF30 - 0x0002B0FB (459 bytes, 166 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void xml1_guest_actor_remove_powerup(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AF30: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0002AF43; /* jne: not equal / not zero */

loc_0002AF3C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0002AF43: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AF7C; /* je: equal / zero */

loc_0002AF4A: ;
    _fa = (uint32_t)(MEM8(ebp + 0x235)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x235), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AF7C; /* jne: not equal / not zero */

loc_0002AF53: ;
    raven_xml1_powerup_effect_event(edi, 2, 0);
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AF7C; /* je: equal / zero */

loc_0002AF5A: ;
    eax = MEM32(eax + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AF7C; /* je: equal / zero */

loc_0002AF64: ;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0002AF67u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002AF67: ;
    eax = MEM32(ebp + 0x1FC);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AF85; /* jne: not equal / not zero */

loc_0002AF75: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0002AF7C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1FC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AF3C; /* je: equal / zero */

loc_0002AF85: ;
    raven_xml1_scale_affecter_changed(edi, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0002AF8Du); RECOMP_ABI_CALL(0x000294B0u, sub_000294B0); /* call 0x000294B0 */

loc_0002AF8D: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B079; /* je: equal / zero */

loc_0002AF98: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002AF9Eu); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_0002AF9E: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B079; /* je: equal / zero */

loc_0002AFAB: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B079; /* je: equal / zero */

loc_0002AFB6: ;
    _fa = (uint32_t)(MEM8(eax + 0x72)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x72), 2 (8-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002AFEA; /* je: equal / zero */

loc_0002AFBD: ;
    ecx = eax + 0x3C;
    PUSH32(esp, 0x0002AFC5u); RECOMP_ABI_CALL(0x00029360u, sub_00029360); /* call 0x00029360 */

loc_0002AFC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002AFEA; /* jle: less or equal (signed <=) */

loc_0002AFC9: ;
    ebx = edi + 0x38;
    ecx = ebx;
    PUSH32(esp, 0x0002AFD3u); RECOMP_ABI_CALL(0x00029360u, sub_00029360); /* call 0x00029360 */

loc_0002AFD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002AFEA; /* jle: less or equal (signed <=) */

loc_0002AFD7: ;
    PUSH32(esp, 0x16);
    ecx = ebx;
    PUSH32(esp, 0x0002AFE0u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0002AFE0: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002AFE8u); RECOMP_ABI_CALL(0x0003A520u, sub_0003A520); /* call 0x0003A520 */

loc_0002AFE8: ;
    goto loc_0002B01A;

loc_0002AFEA: ;
    ecx = MEM32(edi + 0x2C);
    ecx = ecx + 0x3C;
    PUSH32(esp, 0x0002AFF5u); RECOMP_ABI_CALL(0x00029360u, sub_00029360); /* call 0x00029360 */

loc_0002AFF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002B01A; /* jle: less or equal (signed <=) */

loc_0002AFF9: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(MEM8(eax + 0x72)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x72), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B01A; /* jne: not equal / not zero */

loc_0002B002: ;
    ecx = eax + 0x3C;
    PUSH32(esp, 0x0002B00Au); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0002B00A: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0002B012u); RECOMP_ABI_CALL(0x00029690u, sub_00029690); /* call 0x00029690 */

loc_0002B012: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002B01Au); RECOMP_ABI_CALL(0x0002EAF0u, sub_0002EAF0); /* call 0x0002EAF0 */

loc_0002B01A: ;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002B035; /* jle: less or equal (signed <=) */

loc_0002B022: ;
    PUSH32(esp, 0x0002B027u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002B027: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0002B035u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B035: ;
    edx = MEM32(edi + 0x2C);
    SET_LO8(eax, MEM8(edx + 0x71));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0002B054; /* jns: not sign (positive) */

loc_0002B03F: ;
    PUSH32(esp, 0x0002B044u); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002B044: ;
    ecx = MEM32(esi + 0x2D4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0002B054u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B054: ;
    edx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(MEM8(edx + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x36) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x1C), 0x36 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B079; /* jne: not equal / not zero */

loc_0002B05D: ;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0002B06Bu); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_0002B06B: ;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002B079u); RECOMP_ABI_CALL(0x000290D0u, sub_000290D0); /* call 0x000290D0 */

loc_0002B079: ;
    ecx = MEM32(ebp + 0x1FC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002B085u); RECOMP_ABI_CALL(0x00029C00u, sub_00029C00); /* call 0x00029C00 */

loc_0002B085: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    eax = MEM32(ebp + 0x1FC);
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_0002B0B2; /* jne: not equal / not zero */

loc_0002B093: ;
    edx = MEM32(edi);
    MEM32(ebp + 0x1FC) = edx;

loc_0002B09B: ;
    PUSH32(esp, 0x0002B0A0u); RECOMP_ABI_CALL(0x0002A730u, sub_0002A730); /* call 0x0002A730 */

loc_0002B0A0: ;
    esp = esp + 4;
    ecx = ebp;
    PUSH32(esp, 0x0002B0AAu); RECOMP_ABI_CALL(0x00029D10u, sub_00029D10); /* call 0x00029D10 */

loc_0002B0AA: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0002B0B2: ;
    PUSH32(esp, 0x0002B0B7u); RECOMP_ABI_CALL(0x00029C00u, sub_00029C00); /* call 0x00029C00 */

loc_0002B0B7: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B0EA; /* je: equal / zero */

loc_0002B0C0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B0EA; /* je: equal / zero */

loc_0002B0C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002B0CDu); RECOMP_ABI_CALL(0x00029C00u, sub_00029C00); /* call 0x00029C00 */

loc_0002B0CD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B0F2; /* je: equal / zero */

loc_0002B0D4: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B0EA; /* je: equal / zero */

loc_0002B0DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002B0E1u); RECOMP_ABI_CALL(0x00029C00u, sub_00029C00); /* call 0x00029C00 */

loc_0002B0E1: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B0C0; /* jne: not equal / not zero */

loc_0002B0EA: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0002B0F2: ;
    eax = MEM32(esi);
    ecx = MEM32(edi);
    MEM32(esi) = ecx;
    PUSH32(esp, eax);
    goto loc_0002B09B;

}
