#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_slot_layout.h"
#include "engine/saves/raven_saved_stats_guest.h"
#include "engine/world/raven_extraction_guest.h"
#include "engine/world/raven_extraction_owner.h"
#include "ui/pc_prompts.h"
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/progression/character_talent_guest.h"
#include "game/xml1/newgame_plus.h"
#include "diagnostics/newgame_trace.h"
#include "game/xml1/character_limits.h"
#include <math.h>

/* xml1_guest_popup_manager_get; original guest entry 0x00187AF0.
 * Evidence: src/engine/world/raven_campaign_menu_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00187AF0
 * Original: 0x00187AF0 - 0x00187B04 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_popup_manager_get(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187AF0: ;
    eax = MEM32(0x577670);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00187B03; /* jne: not equal / not zero */

loc_00187AF9: ;
    PUSH32(esp, 0x00187AFEu); RECOMP_ABI_CALL(0x00187A80u, sub_00187A80); /* call 0x00187A80 */

loc_00187AFE: ;
    eax = MEM32(0x577670);

loc_00187B03: ;
    esp += 4; return; /* ret */

}
