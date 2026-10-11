#define RECOMP_GENERATED_CODE
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/progression/talent_registry_guest.h"
#include "engine/actors/raven_leader_definition.h"
#include "engine/actors/raven_ai_modes.h"
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_character_race.h"
#include "engine/combat/raven_filter_event.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/progression/character_talent_guest.h"
#include <math.h>
#include "game/xml1/character_limits.h"

/* xml1_guest_character_definition_construct; original guest entry 0x000B1640.
 * Evidence: tests/engine/progression/progression_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B1640
 * Original: 0x000B1640 - 0x000B18A4 (612 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_definition_construct(void)
{

loc_000B1640: ;
    raven_character_race_reset(ecx);
    raven_leader_definition_reset(ecx);
    raven_transform_definition_reset(ecx);
    raven_ai_definition_reset(ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35005B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 4;
    MEM32(esp + 0xC) = esi;
    MEM32(esi) = 0x3D3E18;
    PUSH32(esp, 0x000B166Du); RECOMP_ABI_CALL(0x00048EF0u, xml1_guest_character_stats_construct); /* call 0x00048EF0 */

loc_000B166D: ;
    PUSH32(esp, 0x20);
    edi = esi + 0x20C;
    PUSH32(esp, 0x3C806C);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x000B1686u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B1686: ;
    PUSH32(esp, 0x20);
    MEM8(edi + 0x1F) = LO8(ebx);
    edi = esi + 0x22C;
    PUSH32(esp, 0x3C8C48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B169Cu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B169C: ;
    PUSH32(esp, 0x20);
    MEM8(edi + 0x1F) = LO8(ebx);
    edi = esi + 0x24C;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B16B2u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B16B2: ;
    MEM8(edi + 0x1F) = LO8(ebx);
    PUSH32(esp, 0x20);
    edi = esi + 0x2AC;
    PUSH32(esp, 0x3D3E08);
    MEM8(esi + 0x26C) = LO8(ebx);
    PUSH32(esp, edi);
    MEM8(esi + 0x28C) = LO8(ebx);
    PUSH32(esp, 0x000B16D4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B16D4: ;
    MEM8(edi + 0x1F) = LO8(ebx);
    PUSH32(esp, 0x20);
    edi = esi + 0x30C;
    PUSH32(esp, 0x3C806C);
    MEM8(esi + 0x2CC) = LO8(ebx);
    PUSH32(esp, edi);
    MEM8(esi + 0x2EC) = LO8(ebx);
    PUSH32(esp, 0x000B16F6u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B16F6: ;
    MEM8(edi + 0x1F) = LO8(ebx);
    MEM8(esi + 0x330) = LO8(ebx);
    MEM8(esi + 0x370) = LO8(ebx);
    MEM8(esi + 0x371) = 0xFF;
    MEM8(esi + 0x37B) = LO8(ebx);
    MEM8(esi + 0x37C) = LO8(ebx);
    MEM8(esi + 0x37D) = LO8(ebx);
    MEM8(esi + 0x37E) = LO8(ebx);
    MEM32(esi + 0x380) = ebx;
    MEM32(esi + 0x384) = 0x3F4CCCCD;
    MEM8(esi + 0x388) = LO8(ebx);
    SET_LO8(ecx, 1);
    MEM8(esi + 0x37F) = LO8(ecx);
    MEM32(esi + 0x394) = 0x42900000;
    eax = 0x42000000;
    MEM32(esi + 0x38C) = eax;
    MEM32(esi + 0x390) = eax;
    MEM32(esi + 0x398) = 0x1A;
    MEM32(esi + 0x39C) = 0xFFFFFFFFu;
    MEM8(esi + 0x3A0) = LO8(ebx);
    SET_LO8(edx, MEM8(esi + 0x3A2));
    esp = esp + 0x3C;
    MEM8(esi + 0x3A1) = LO8(ebx);
    MEM8(esi + 0x3A3) = LO8(ebx);
    MEM8(esi + 0x3A4) = LO8(ebx);
    MEM32(esi + 0x3A8) = 0x3F800000;
    MEM32(esi + 0x3AC) = ebx;
    MEM32(esi + 0x3B0) = ebx;
    MEM32(esi + 0x3B4) = ebx;
    MEM32(esi + 0x3B8) = ebx;
    SET_LO8(edx, LO8(edx) & 0xFE);
    MEM8(esi + 0x3A2) = LO8(edx);
    MEM32(esi + 0x440) = ebx;
    MEM32(esi + 0x444) = ebx;
    MEM32(esi + 0x448) = ebx;
    MEM32(esi + 0x450) = ebx;
    MEM16(esi + 0x454) = LO16(ebx);
    eax = 0x3F99999A;
    MEM32(esi + 0x470) = eax;
    MEM32(esi + 0x474) = eax;
    SET_LO8(eax, MEM8(esi + 0x47C));
    MEM16(esi + 0x456) = 0xFA;
    MEM16(esi + 0x458) = 0x46;
    MEM32(esi + 0x45C) = 0x41A00000;
    MEM32(esi + 0x460) = 0x420C0000;
    MEM32(esi + 0x468) = 0x42C80000;
    MEM32(esi + 0x46C) = 0x3F19999A;
    MEM32(esi + 0x478) = 0x40A00000;
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    MEM8(esi + 0x47C) = LO8(eax);
    eax = 0; /* xor self */
    ecx = esi + 0x372;
    MEM32(esi + 0x484) = 0; /* Reset extra skins when a pool slot is reused. */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM8(ecx + 8) = LO8(eax);
    MEM32(esi + 0x1E8) = ebx;
    MEM32(esi + 0x1EC) = ebx;
    MEM32(esi + 0x1F0) = ebx;
    MEM32(esi + 0x1F4) = ebx;
    MEM32(esi + 0x1FC) = ebx;
    MEM32(esi + 0x200) = ebx;
    MEM32(esi + 0x204) = ebx;
    PUSH32(esp, 0x000B187Eu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000B187E: ;
    ecx = ZX8(MEM8(esi + 0x1C));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x000B188Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B188D: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x18) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
