#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "audio/raven_effect_sound_guest.h"
#include "audio/raven_loop_sound_runtime.h"
#include "engine/powers/raven_power_bindings_guest.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/combat/raven_filter_guest.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_id_pool_construct; original guest entry 0x000EA9E0.
 * Evidence: tests/engine/progression/talent_registry_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000EA9E0
 * Original: 0x000EA9E0 - 0x000EAA42 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_id_pool_construct(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA9E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + (_talent_expanded ? 0x13E0u : 0xBC0u)) = esi;
    MEM32(ecx + (_talent_expanded ? 0x13E4u : 0xBC4u)) = esi;
    MEM32(ecx + (_talent_expanded ? 0x13E8u : 0xBC8u)) = esi;
    edx = 0; /* xor self */
    goto loc_000EAA00;

    /* nop */

loc_000EAA00: ;
    eax = MEM32(ecx + (_talent_expanded ? 0x13E0u : 0xBC0u));
    edi = MEM32(ecx + (_talent_expanded ? 0x13E8u : 0xBC8u));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_expanded ? 0xFEu : 0x96u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    MEM32(ecx + (_talent_expanded ? 0x13E0u : 0xBC0u)) = eax;
    MEM32(ecx + (_talent_expanded ? 0x13E8u : 0xBC8u)) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000EAA2E; /* jl: less (signed <) */

loc_000EAA21: ;
    MEM32(ecx + (_talent_expanded ? 0x13E0u : 0xBC0u)) = esi;
    eax = (_talent_expanded ? 0xFDu : 0x95u);
    goto loc_000EAA2F;

loc_000EAA2E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000EAA2F: ;
    MEM32(ecx + eax * 4 + (_talent_expanded ? 0xFE4u : 0x964u)) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_expanded ? 0xFEu : 0x96u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x96 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EAA00; /* jl: less (signed <) */

loc_000EAA3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
