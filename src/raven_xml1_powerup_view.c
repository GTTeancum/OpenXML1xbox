#include "raven_xml1_powerup_view.h"

static int word(raven_guest_read read,void *ctx,uint32_t base,uint32_t offset,
    uint32_t *out) {
    uint8_t b[4];
    uint64_t at=(uint64_t)base+offset;
    if (!read || !base || at+4>0x100000000ull ||
        !read(ctx,(uint32_t)at,b,4)) return 0;
    *out=(uint32_t)b[0]|((uint32_t)b[1]<<8)|((uint32_t)b[2]<<16)|((uint32_t)b[3]<<24);
    return 1;
}

raven_lookup raven_xml1_active_powerup(raven_guest_read read,void *ctx,
    uint32_t system,uint32_t handle,uint32_t *address) {
    uint32_t mask,generation,live;
    if (!address) return RAVEN_INVALID;
    /* 299B0 constructs precisely 128 slots and a 0x7F index mask. Treat a
     * foreign/corrupt pool layout as invalid rather than following its mask
     * outside the allocation. 29C00 tests generation before the live bit. */
    if (!word(read,ctx,system,0x2438,&mask) || mask!=0x7f) return RAVEN_INVALID;
    const uint32_t index=handle&mask;
    if (!word(read,ctx,system,0x2238+4*index,&generation)) return RAVEN_INVALID;
    if (generation!=handle) return RAVEN_MISSING;
    if (!word(read,ctx,system,0x2224+4*(index>>5),&live)) return RAVEN_INVALID;
    if (!(live&(1u<<(index&31)))) return RAVEN_MISSING;
    /* The successful reads above also establish non-wrapping slot arithmetic.
     * 2A730 clears live state and advances this generation on destruction;
     * an address alone is never an identity suitable for handler metadata. */
    *address=system+4+64*index;
    return RAVEN_FOUND;
}

raven_lookup raven_xml1_active_powerup_identity(raven_guest_read read,void *ctx,
    uint32_t system,uint32_t address,uint32_t *handle) {
    const uint64_t start=(uint64_t)system+4;
    if (!handle || !system || start+128*64>0x100000000ull ||
        address<start || (uint64_t)address>=start+128*64 ||
        ((uint64_t)address-start)%64) return RAVEN_INVALID;
    const uint32_t index=(uint32_t)(((uint64_t)address-start)/64);
    uint32_t candidate,resolved;
    if (!word(read,ctx,system,0x2238+4*index,&candidate)) return RAVEN_INVALID;
    /* Corrupt generation low bits must not redirect us to another slot. */
    if ((candidate&127)!=index) return RAVEN_INVALID;
    const raven_lookup status=raven_xml1_active_powerup(read,ctx,system,candidate,&resolved);
    if (status!=RAVEN_FOUND) return status;
    if (resolved!=address) return RAVEN_INVALID;
    *handle=candidate;
    return RAVEN_FOUND;
}
