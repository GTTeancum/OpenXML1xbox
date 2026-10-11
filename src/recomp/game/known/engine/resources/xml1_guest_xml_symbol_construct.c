#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_package_guest.h"
#include "engine/resources/pkgb_decode.h"
#include "app/build_settings.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_xml_symbol_construct; original guest entry 0x00125DA0.
 * Evidence: src/engine/actors/raven_character_race_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00125DA0
 * Original: 0x00125DA0 - 0x00125DF5 (85 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_xml_symbol_construct(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125DA0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00125DACu); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_00125DAC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00125DBCu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00125DBC: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00125DC4u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00125DC4: ;
    edx = MEM32(esp + 0x18);
    eax = edx;
    MEM32(esi + 0xC) = 0;
    edi = eax + 1;

loc_00125DD4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125DD4; /* jne: not equal / not zero */

loc_00125DDB: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    eax = eax - edi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00125DEBu); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00125DEB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}
