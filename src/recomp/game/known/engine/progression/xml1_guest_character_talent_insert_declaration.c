#define RECOMP_GENERATED_CODE
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/scripting/raven_remove_events.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "diagnostics/raven_operand_trace.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/actors/raven_ai_modes.h"
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/combat/raven_vitality_save_guest.h"
#include "engine/progression/character_talent_guest.h"
#include <math.h>

/* xml1_guest_character_talent_insert_declaration; original guest entry 0x00048D50.
 * Evidence: src/engine/progression/talent_package_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00048D50
 * Original: 0x00048D50 - 0x00048ED9 (393 bytes, 129 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_talent_insert_declaration(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);
    const int _character_expanded=xml1_character_talent_map_contains(_character_map);
    /* XML1 SIX BIT TALENT RECORD */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048D50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E578);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = MEM32(esp + 0x34);
    ebp = MEM32(eax + 8);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    esi = ecx;
    if ((ecx == 0)) goto loc_00048EC4; /* je: equal / zero */

loc_00048DA3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00048DB3u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00048DB3: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x00048DC3u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00048DC3: ;
    ecx = esp + 0x18;
    ebp = eax;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00048DD6u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00048DD6: ;
    MEM8(esp + 0x13) = 0xFF;
    PUSH32(esp, 0x00048DE0u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_00048DE0: ;
    esi = eax;
    ebx = MEM32(esi);
    ecx = ebp;
    PUSH32(esp, 0x00048DEBu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00048DEB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x3C); PUSH32(esp, 0x00048DF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00048DF1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00048E3F; /* jne: not equal / not zero */

loc_00048DF5: ;
    if (MEM32(_character_map+(_character_expanded?0x1418u:0x164u))>=(_character_expanded?254u:16u)) { fputs("Character talent declaration exceeds map capacity\n",stderr); abort(); }
    PUSH32(esp, 0x00048DFAu); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_00048DFA: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00048E0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00048E0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00048EA2; /* je: equal / zero */

loc_00048E13: ;
    _fa = MEM32(_character_map+(_character_expanded?0x1418u:0x164u)); _fb = _character_expanded?254u:16u;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x194), 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048EC4; /* je: equal / zero */

loc_00048E20: ;
    PUSH32(esp, 0x00048E25u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_00048E25: ;
    esi = eax;
    ebx = MEM32(esi);
    ecx = ebp;
    PUSH32(esp, 0x00048E30u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00048E30: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x1C); PUSH32(esp, 0x00048E36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00048E36: ;
    MEM8(esp + 0x13) = LO8(eax);
    ecx = _character_map;
    goto loc_00048E93;

loc_00048E3F: ;
    PUSH32(esp, 0x00048E44u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_00048E44: ;
    esi = eax;
    ebx = MEM32(esi);
    ecx = ebp;
    PUSH32(esp, 0x00048E4Fu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00048E4F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x1C); PUSH32(esp, 0x00048E55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00048E55: ;
    ecx = MEM32(_character_map+4);
    esi = _character_map;
    PUSH32(esp, ecx);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x1B) = LO8(eax);
    PUSH32(esp, 0x00048E6Cu); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_00048E6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048EA2; /* jne: not equal / not zero */

loc_00048E73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048EA2; /* jne: not equal / not zero */

loc_00048E77: ;
    if (MEM32(_character_map+(_character_expanded?0x1418u:0x164u))>=(_character_expanded?254u:16u)) { fputs("Character talent declaration exceeds map capacity\n",stderr); abort(); }
    PUSH32(esp, 0x00048E7Cu); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_00048E7C: ;
    edx = MEM32(eax);
    ecx = esp + 0x13;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00048E88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00048E88: ;
    _fa = MEM32(_character_map+(_character_expanded?0x1418u:0x164u)); _fb = _character_expanded?254u:16u;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x194), 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048EC4; /* je: equal / zero */

loc_00048E91: ;
    ecx = esi;

loc_00048E93: ;
    MEM32(esp + 0x14) = 0;
    xml1_talent_guest_set(esp + 0x14, XML1_TALENT_CURRENT, MEM8(esp + 0x40));
    edx = esp + 0x14;
    eax = esp + 0x13;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00048EA2u); RECOMP_ABI_CALL(0x00048B40u, sub_00048B40); /* call 0x00048B40 */

loc_00048EA2: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00048EB3u); RECOMP_ABI_CALL(0x000480F0u, xml1_guest_talent_rank_limit_set); /* call 0x000480F0 */

loc_00048EB3: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00048EC4u); RECOMP_ABI_CALL(0x000487F0u, xml1_guest_talent_rank_set); /* call 0x000487F0 */

loc_00048EC4: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 20; return; /* ret 16 */

}
