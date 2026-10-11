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

/* xml1_guest_talent_name_pool_allocate; original guest entry 0x000B3640.
 * Evidence: tests/engine/progression/talent_registry_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B3640
 * Original: 0x000B3640 - 0x000B36A2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_name_pool_allocate(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3640: ;
    edx = ecx;
    eax = MEM32(edx + (_talent_expanded ? 0x2FACu : 0x1C2Cu));
    eax = MEM32(edx + eax * 4 + (_talent_expanded ? 0x2BACu : 0x19CCu));
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + (_talent_expanded ? 0x2FB4u : 0x1C34u);
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + (_talent_expanded ? 0x2FACu : 0x1C2Cu));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_expanded ? 0xFEu : 0x96u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x96 (32-bit) */
    MEM32(edx + (_talent_expanded ? 0x2FACu : 0x1C2Cu)) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000B368C; /* jl: less (signed <) */

loc_000B3682: ;
    MEM32(edx + (_talent_expanded ? 0x2FACu : 0x1C2Cu)) = 0;

loc_000B368C: ;
    MEM32(edx + (_talent_expanded ? 0x2FB0u : 0x1C30u)) = MEM32(edx + (_talent_expanded ? 0x2FB0u : 0x1C30u)) - 1;
    _fa = (uint32_t)(MEM32(edx + (_talent_expanded ? 0x2FB0u : 0x1C30u))) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + (_talent_expanded ? 0x2FD4u : 0x1C48u));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + (_talent_expanded ? 0x2FD4u : 0x1C48u)) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
