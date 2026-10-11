#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_slot_layout.h"
#include "engine/powers/raven_power_bindings_guest.h"
#include "engine/inventory/raven_stash_menu_guest.h"
#include "engine/inventory/raven_stash_owner.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/progression/character_talent_guest.h"
#include "app/build_settings.h"
#include <math.h>
#include "game/xml1/character_limits.h"
#include "game/xml1/modder_mode.h"

/* xml1_guest_danger_room_character_list; original guest entry 0x00170E90.
 * Evidence: scripts/guard-danger-room-unlock.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00170E90
 * Original: 0x00170E90 - 0x001710E6 (598 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_danger_room_character_list(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00170E90: ;
    esp = esp - 0x70;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xED8);
    PUSH32(esp, edi);
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, 0x00170EABu); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_00170EAB: ;
    edi = 0; /* xor self */
    MEM8(esp + 8) = 1;
    PUSH32(esp, 0x00170EB7u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00170EB7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00170EBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00170EBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001710B2; /* jle: less or equal (signed <=) */

loc_00170EC7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* nop */

loc_00170ED0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001710B0; /* jl: less (signed <) */

loc_00170ED8: ;
    PUSH32(esp, 0x00170EDDu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00170EDD: ;
    ebp = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00170EECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00170EEC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017108F; /* je: equal / zero */

loc_00170EF4: ;
    SET_LO8(eax, MEM8(esi + 0xECE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00170F16; /* je: equal / zero */

loc_00170EFE: ;
    PUSH32(esp, 0x00170F03u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00170F03: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00170F0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00170F0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017108F; /* je: equal / zero */

loc_00170F16: ;
    PUSH32(esp, 0x00170F1Bu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00170F1B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00170F26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00170F26: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00170F58; /* je: equal / zero */

loc_00170F2A: ;
    PUSH32(esp, 0x00170F2Fu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00170F2F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00170F37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00170F37: ;
    ebx = eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170F58; /* je: equal / zero */

loc_00170F3E: ;
    PUSH32(esp, 0x3DE968);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00170F4Cu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00170F4C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017108F; /* je: equal / zero */

loc_00170F58: ;
    PUSH32(esp, 0x00170F5Du); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_00170F5D: ;
    ebx = ZX8(MEM8(esp + 0x10));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00170F6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00170F6A: ;
    /* dangerRoomUnlockAll: every listed character counts as unlocked. */
    if (xml1_build_settings.danger_room_unlock_all) SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017104C; /* je: equal / zero */

loc_00170F72: ;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x00170F7Cu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00170F7C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00170F84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00170F84: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00170F91; /* jne: not equal / not zero */

loc_00170F8A: ;
    eax = 0x3C806C;
    goto loc_00170FA7;

loc_00170F91: ;
    PUSH32(esp, 0x00170F96u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00170F96: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_00170FA7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    edx = esp + 0x20;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00170FB9u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_00170FB9: ;
    ecx = MEM32(esi + 0xED8);
    eax = MEM32(ecx);
    esp = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00170FCEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00170FCE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0017108F; /* jl: less (signed <) */

loc_00170FD8: ;
    ecx = MEM32(esi + 0xED8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00170FE5u); RECOMP_ABI_CALL(0x00177D50u, sub_00177D50); /* call 0x00177D50 */

loc_00170FE5: ;
    SET_LO8(eax, MEM8(esi + 0xECE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00170FFD; /* jne: not equal / not zero */

loc_00170FEF: ;
    SET_LO8(eax, MEM8(esi + 0xECC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017108F; /* je: equal / zero */

loc_00170FFD: ;
    ebp = 0; /* xor self */
    /* nop */

loc_00171000: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00171006u); RECOMP_ABI_CALL(0x000C0DC0u, sub_000C0DC0); /* call 0x000C0DC0 */

loc_00171006: ;
    SET_LO8(ebx, MEM8(esp + 0x14));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017101F; /* jne: not equal / not zero */

loc_00171011: ;
    ecx = MEM32(esi + 0xED8);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017101Fu); RECOMP_ABI_CALL(0x001782F0u, sub_001782F0); /* call 0x001782F0 */

loc_0017101F: ;
    SET_LO8(eax, MEM8(esi + 0xECC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00171044; /* je: equal / zero */

loc_00171029: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0017102Fu); RECOMP_ABI_CALL(0x000C0DE0u, sub_000C0DE0); /* call 0x000C0DE0 */

loc_0017102F: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00171044; /* jne: not equal / not zero */

loc_00171036: ;
    ecx = MEM32(esi + 0xED8);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00171044u); RECOMP_ABI_CALL(0x001782F0u, sub_001782F0); /* call 0x001782F0 */

loc_00171044: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00171000; /* jl: less (signed <) */

loc_0017104A: ;
    goto loc_0017108F;

loc_0017104C: ;
    eax = MEM32(esi + 0xED8);
    edi = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2CD);
    PUSH32(esp, 0x00171060u); RECOMP_ABI_CALL(0x000BF630u, sub_000BF630); /* call 0x000BF630 */

loc_00171060: ;
    ecx = MEM32(esi + 0xED8);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x60); PUSH32(esp, 0x0017106Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017106D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0017108F; /* jl: less (signed <) */

loc_00171073: ;
    ecx = MEM32(esi + 0xED8);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00171081u); RECOMP_ABI_CALL(0x00177D50u, sub_00177D50); /* call 0x00177D50 */

loc_00171081: ;
    ecx = MEM32(esi + 0xED8);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0017108Fu); RECOMP_ABI_CALL(0x001782F0u, sub_001782F0); /* call 0x001782F0 */

loc_0017108F: ;
    SET_LO8(ebx, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x10) = LO8(ebx);
    PUSH32(esp, 0x0017109Eu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0017109E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x001710A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001710A5: ;
    ecx = ZX8(LO8(ebx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00170ED0; /* jl: less (signed <) */

loc_001710B0: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001710B2: ;
    esi = MEM32(esi + 0xED8);
    ecx = esi;
    MEM8(0x571748) = 0;
    PUSH32(esp, 0x001710C6u); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_001710C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001710D0; /* jle: less or equal (signed <=) */

loc_001710CA: ;
    MEM16(esi + 0x7C) = 0;

loc_001710D0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001710D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001710D7: ;
    ecx = MEM32(esp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x001710E2u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001710E2: ;
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}
