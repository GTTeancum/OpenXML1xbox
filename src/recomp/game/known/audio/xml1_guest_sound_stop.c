#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_package_guest.h"
#include "ui/pc_menu.h"
#include "engine/progression/raven_talent_runtime.h"
#include "engine/resources/pkgb_decode.h"
#include "app/build_settings.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_sound_stop; original guest entry 0x00150360.
 * Evidence: src/audio/raven_loop_sound_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00150360
 * Original: 0x00150360 - 0x001503B5 (85 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_sound_stop(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150360: ;
    SET_LO8(eax, MEM8(ecx + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001503B2; /* jne: not equal / not zero */

loc_0015036A: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001503B2; /* je: equal / zero */

loc_00150376: ;
    PUSH32(esp, esi);
    esi = ecx + 0x88BC;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0015038Eu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0015038E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015039C; /* jne: not equal / not zero */

loc_00150398: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001503B0; /* je: equal / zero */

loc_0015039C: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001503A4u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_001503A4: ;
    PUSH32(esp, edi);
    ecx = esi + 0x4A0;
    PUSH32(esp, 0x001503B0u); RECOMP_ABI_CALL(0x0014FCF0u, sub_0014FCF0); /* call 0x0014FCF0 */

loc_001503B0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001503B2: ;
    esp += 8; return; /* ret 4 */

}
