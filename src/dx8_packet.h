#pragma once
#include <stdint.h>
/* Fixed-function XYZ, optional normal/diffuse, and zero or one 2D UV set. */
static unsigned xml1_fvf_stride(uint32_t fvf) {
    if((fvf&~0x152u)||!(fvf&2)) return 0;
    return 12+((fvf&0x10)?12:0)+((fvf&0x40)?4:0)+((fvf&0x100)?8:0);
}
