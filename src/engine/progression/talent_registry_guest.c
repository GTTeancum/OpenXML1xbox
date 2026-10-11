#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_registry_ids.h"
#include <string.h>

static uint32_t constructing;
unsigned xml1_talent_registry_id_predecessor(uint32_t manager) {
    return xml1_talent_id_predecessor(manager);
}
static int contains(uint32_t base,uint32_t pointer) {
    return base&&pointer>=base&&pointer-base<XML1_TALENT_REGISTRY_SIZE;
}
int xml1_talent_registry_contains(uint32_t pointer) {
    /* Shared 150-entry queue/tree methods also serve unrelated native objects.
     * Select the expanded layout from their entry this pointer, once per call.
     * During construction the singleton has not yet been assigned. */
    return contains(constructing,pointer)||contains(MEM32(0x4d7300u),pointer);
}
void xml1_talent_registry_begin(uint32_t pointer) {
    constructing=pointer;
    memset((void*)XBOX_PTR(pointer),0,XML1_TALENT_REGISTRY_SIZE);
}
void xml1_talent_registry_end(void) {constructing=0;}
void xml1_talent_registry_clear_bits(uint32_t pointer,unsigned kind) {
    uint32_t bitmap=kind==1?XML1_TALENT_NAME_BITMAP:
        kind==2?XML1_TALENT_META_BITMAP:XML1_TALENT_ID_BITMAP;
    memset((void*)XBOX_PTR(pointer+bitmap),0,XML1_TALENT_REGISTRY_BIT_BYTES);
    if(kind==2)memset((void*)XBOX_PTR(pointer+XML1_TALENT_META_CONSTRUCTED),
        0,XML1_TALENT_REGISTRY_BIT_BYTES);
}
