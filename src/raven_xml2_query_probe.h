#pragma once
#include "raven_xml2_powerup_view.h"
#ifdef __cplusplus
extern "C" {
#endif
/* Opaque per-call state supports nested queries; ownership passes to finish.
 * The probe never changes guest memory or substitutes native results. */
void *raven_xml2_query_probe_begin(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime *runtime,uint32_t provider,uint32_t sentinel,
    uint32_t actor,uint8_t attribute,uint8_t mode,uint32_t query);
/* 1 match, 0 mismatch, -1 adapter unavailable. Always releases the snapshot. */
int raven_xml2_query_probe_finish(void *snapshot,int native_return,
    const float native_endpoints[2]);
#ifdef __cplusplus
}
#endif
