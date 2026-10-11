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

/* xml1_guest_danger_room_progression_read; original guest entry 0x001716F0.
 * Evidence: scripts/guard-danger-room-unlock.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_001716F0
 * Original: 0x001716F0 - 0x001719E7 (759 bytes, 225 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_danger_room_progression_read(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001716F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001716FBu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_001716FB: ;
    edi = eax;
    PUSH32(esp, 0x00171702u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00171702: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x174); PUSH32(esp, 0x00171710u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00171710: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x34); PUSH32(esp, 0x00171716u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00171716: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00171727u); RECOMP_ABI_CALL(0x00163520u, sub_00163520); /* call 0x00163520 */

loc_00171727: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00171732; /* jne: not equal / not zero */

loc_0017172B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00171732: ;
    PUSH32(esp, 0x00171737u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_00171737: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0017173Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017173E: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x457F84);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3DE6D4);
    ecx = esi;
    PUSH32(esp, 0x00171758u); RECOMP_ABI_CALL(0x00162660u, sub_00162660); /* call 0x00162660 */

loc_00171758: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017175Eu); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_0017175E: ;
    esp = esp + 0x14;
    MEM32(esi + 0xED8) = eax;
    PUSH32(esp, 0x0017176Cu); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_0017176C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017178A; /* jne: not equal / not zero */

loc_00171770: ;
    PUSH32(esp, 0x00171775u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00171775: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0017177Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017177F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017178A; /* jne: not equal / not zero */

loc_00171783: ;
    eax = 1;
    goto loc_0017178C;

loc_0017178A: ;
    eax = 0; /* xor self */

loc_0017178C: ;
    MEM8(esi + 0xEE0) = LO8(eax);
    PUSH32(esp, 0x00171797u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_00171797: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0017179Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017179E: ;
    /* dangerRoomUnlockAll: the menu sees the level cap. */
    if (xml1_build_settings.danger_room_unlock_all) eax = 45;
    MEM32(esi + 0xEDC) = eax;
    SET_LO8(eax, MEM8(esi + 0xEE0));
    MEM8(esi + 0xED4) = LO8(eax);
    MEM8(esi + 0xECC) = LO8(ebx);
    MEM8(esi + 0xECE) = LO8(ebx);
    MEM8(esi + 0xED7) = LO8(ebx);
    MEM32(esi + 0xED0) = ebx;
    MEM8(esi + 0xED5) = 0xFF;
    MEM8(esi + 0xED6) = 0xFF;
    MEM8(esi + 0xECD) = 0xFF;
    PUSH32(esp, 0x001717E2u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_001717E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00171895; /* je: equal / zero */

loc_001717EA: ;
    PUSH32(esp, 0x001717EFu); RECOMP_ABI_CALL(0x000BF6F0u, sub_000BF6F0); /* call 0x000BF6F0 */

loc_001717EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0xED7) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00171809; /* jne: not equal / not zero */

loc_001717F9: ;
    PUSH32(esp, 0x001717FEu); RECOMP_ABI_CALL(0x000BF740u, sub_000BF740); /* call 0x000BF740 */

loc_001717FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00171809; /* je: equal / zero */

loc_00171802: ;
    eax = 1;
    goto loc_0017180B;

loc_00171809: ;
    eax = 0; /* xor self */

loc_0017180B: ;
    MEM8(esi + 0xECC) = LO8(eax);
    _fa = (uint32_t)(MEM8(esi + 0xED7)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xED7), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00171829; /* jne: not equal / not zero */

loc_00171819: ;
    PUSH32(esp, 0x0017181Eu); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_0017181E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00171829; /* je: equal / zero */

loc_00171822: ;
    eax = 1;
    goto loc_0017182B;

loc_00171829: ;
    eax = 0; /* xor self */

loc_0017182B: ;
    SET_LO8(ecx, MEM8(esi + 0xED7));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    MEM8(esi + 0xECE) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0017184E; /* jne: not equal / not zero */

loc_0017183B: ;
    _fa = (uint32_t)(MEM8(esi + 0xECC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xECC), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017184E; /* jne: not equal / not zero */

loc_00171843: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017184E; /* jne: not equal / not zero */

loc_00171847: ;
    eax = 1;
    goto loc_00171850;

loc_0017184E: ;
    eax = 0; /* xor self */

loc_00171850: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0xED4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00171870; /* je: equal / zero */

loc_0017185A: ;
    PUSH32(esp, 0x0017185Fu); RECOMP_ABI_CALL(0x000BF760u, sub_000BF760); /* call 0x000BF760 */

loc_0017185F: ;
    PUSH32(esp, ebx);
    MEM8(esi + 0xED5) = LO8(eax);
    PUSH32(esp, 0x0017186Bu); RECOMP_ABI_CALL(0x000BF6D0u, sub_000BF6D0); /* call 0x000BF6D0 */

loc_0017186B: ;
    esp = esp + 4;
    goto loc_001718A9;

loc_00171870: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017188A; /* jne: not equal / not zero */

loc_00171874: ;
    PUSH32(esp, 0x00171879u); RECOMP_ABI_CALL(0x000BF770u, sub_000BF770); /* call 0x000BF770 */

loc_00171879: ;
    MEM8(esi + 0xECD) = LO8(eax);
    PUSH32(esp, 0x00171884u); RECOMP_ABI_CALL(0x000BF790u, sub_000BF790); /* call 0x000BF790 */

loc_00171884: ;
    MEM32(esi + 0xED0) = eax;

loc_0017188A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00171890u); RECOMP_ABI_CALL(0x000BF6D0u, sub_000BF6D0); /* call 0x000BF6D0 */

loc_00171890: ;
    esp = esp + 4;
    goto loc_001718A9;

loc_00171895: ;
    _fa = (uint32_t)(MEM8(esi + 0xED4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xED4), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001718A9; /* jne: not equal / not zero */

loc_0017189D: ;
    PUSH32(esp, 0x001718A2u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_001718A2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001718A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001718A9: ;
    PUSH32(esp, 0x3DE8F4);
    PUSH32(esp, 0x3DE8CC);
    ecx = esi;
    MEM32(esi + 0xEF0) = ebx;
    MEM32(esi + 0xEE8) = ebx;
    MEM32(esi + 0xEEC) = ebx;
    PUSH32(esp, 0x001718CCu); RECOMP_ABI_CALL(0x001633C0u, sub_001633C0); /* call 0x001633C0 */

loc_001718CC: ;
    _fa = (uint32_t)(MEM8(esi + 0xED4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xED4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001718E4; /* je: equal / zero */

loc_001718D4: ;
    _fa = (uint32_t)(MEM8(esi + 0xECC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xECC), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001718E4; /* jne: not equal / not zero */

loc_001718DC: ;
    _fa = (uint32_t)(MEM8(esi + 0xED7)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xED7), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001718EE; /* je: equal / zero */

loc_001718E4: ;
    MEM32(esi + 0xEE8) = 2;

loc_001718EE: ;
    _fa = (uint32_t)(MEM8(esi + 0xECE)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xECE), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00171900; /* je: equal / zero */

loc_001718F6: ;
    MEM32(esi + 0xEE8) = 4;

loc_00171900: ;
    PUSH32(esp, 0x00171905u); RECOMP_ABI_CALL(0x000C0DB0u, sub_000C0DB0); /* call 0x000C0DB0 */

loc_00171905: ;
    edi = esi + 0xEE4;
    MEM32(edi) = 0x3C;
    PUSH32(esp, 0x00171916u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00171916: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DE974);
    PUSH32(esp, 0x3D4F40);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0017192Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017192B: ;
    _fa = (uint32_t)(MEM32(esi + 0xED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xED8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001719D7; /* je: equal / zero */

loc_00171937: ;
    ecx = esi;
    PUSH32(esp, 0x0017193Eu); RECOMP_ABI_CALL(0x001707D0u, sub_001707D0); /* call 0x001707D0 */

loc_0017193E: ;
    _fa = (uint32_t)(MEM8(esi + 0xED7)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xED7), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017195D; /* je: equal / zero */

loc_00171946: ;
    ecx = esi;
    PUSH32(esp, 0x0017194Du); RECOMP_ABI_CALL(0x0016F890u, sub_0016F890); /* call 0x0016F890 */

loc_0017194D: ;
    ecx = esi;
    PUSH32(esp, 0x00171954u); RECOMP_ABI_CALL(0x0016EBE0u, sub_0016EBE0); /* call 0x0016EBE0 */

loc_00171954: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0017195D: ;
    SET_LO8(ecx, MEM8(esi + 0xED4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017198E; /* je: equal / zero */

loc_00171967: ;
    _fa = (uint32_t)(MEM8(esi + 0xED5)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xED5), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017198E; /* je: equal / zero */

loc_00171970: ;
    ecx = esi;
    PUSH32(esp, 0x00171977u); RECOMP_ABI_CALL(0x0016FA70u, sub_0016FA70); /* call 0x0016FA70 */

loc_00171977: ;
    ecx = esi;
    PUSH32(esp, 0x0017197Eu); RECOMP_ABI_CALL(0x001707D0u, sub_001707D0); /* call 0x001707D0 */

loc_0017197E: ;
    ecx = esi;
    PUSH32(esp, 0x00171985u); RECOMP_ABI_CALL(0x0016EBE0u, sub_0016EBE0); /* call 0x0016EBE0 */

loc_00171985: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0017198E: ;
    SET_LO8(eax, MEM8(esi + 0xECC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001719A0; /* jne: not equal / not zero */

loc_00171998: ;
    _fa = (uint32_t)(MEM8(esi + 0xECE)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xECE), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001719C0; /* je: equal / zero */

loc_001719A0: ;
    _fa = (uint32_t)(MEM8(esi + 0xECD)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xECD), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001719C0; /* je: equal / zero */

loc_001719A9: ;
    ecx = esi;
    PUSH32(esp, 0x001719B0u); RECOMP_ABI_CALL(0x00170E90u, xml1_guest_danger_room_character_list); /* call 0x00170E90 */

loc_001719B0: ;
    ecx = esi;
    PUSH32(esp, 0x001719B7u); RECOMP_ABI_CALL(0x0016EBE0u, sub_0016EBE0); /* call 0x0016EBE0 */

loc_001719B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001719C0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001719D7; /* jne: not equal / not zero */

loc_001719C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001719D7; /* jne: not equal / not zero */

loc_001719C8: ;
    _fa = (uint32_t)(MEM8(esi + 0xECE)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xECE), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001719D7; /* jne: not equal / not zero */

loc_001719D0: ;
    ecx = esi;
    PUSH32(esp, 0x001719D7u); RECOMP_ABI_CALL(0x0016EF30u, sub_0016EF30); /* call 0x0016EF30 */

loc_001719D7: ;
    ecx = esi;
    PUSH32(esp, 0x001719DEu); RECOMP_ABI_CALL(0x0016EBE0u, sub_0016EBE0); /* call 0x0016EBE0 */

loc_001719DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
