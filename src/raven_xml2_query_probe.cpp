#include "raven_xml2_query_probe.h"
#include "raven_talent_binding.h"
#include <memory>
#include <new>
#include <cstdio>
#include <cstring>
#include <atomic>
namespace {
struct Snapshot {
    raven::NativeAffecterQueryResult result;
    uint32_t actor,query;
    unsigned attribute,mode;
};
}
extern "C" void *raven_xml2_query_probe_begin(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime *runtime,uint32_t provider,uint32_t sentinel,
    uint32_t actor,uint8_t attribute,uint8_t mode,uint32_t query) {
    try {
        if(!runtime)return nullptr;
        auto p=std::make_unique<Snapshot>();
        p->actor=actor;p->query=query;p->attribute=attribute;p->mode=mode;
        p->result=raven::query_xml2_native_affecters(read,context,*runtime,provider,sentinel,actor,attribute,mode,query);
        return p.release();
    } catch(const std::exception& e) {
        std::fprintf(stderr,"[XML2 QUERY UNVERIFIED] actor=%08X query=%08X attribute=%u mode=%u reason=%s\n",
            actor,query,attribute,mode,e.what());
        return nullptr;
    }
}
extern "C" int raven_xml2_query_probe_finish(void *snapshot,int native_return,const float native_endpoints[2]) {
    // Count observed comparisons explicitly: silence must never be interpreted
    // as parity when a game flow has not reached this consumer at all.
    static std::atomic<unsigned long long> compared{0}, mismatches{0};
    std::unique_ptr<Snapshot> p(static_cast<Snapshot*>(snapshot));
    if(!p||!native_endpoints)return -1;
    const bool same=p->result.native_return==(native_return!=0)&&
        std::memcmp(p->result.endpoints.data(),native_endpoints,2*sizeof(float))==0;
    if(!same)++mismatches;
    const auto count=++compared;
    if(count==1 || count%4096==0)
        std::fprintf(stderr,"[XML2 QUERY OBSERVED] compared=%llu mismatches=%llu\n",
            count,mismatches.load());
    if(!same)std::fprintf(stderr,
        "[XML2 QUERY MISMATCH] actor=%08X query=%08X attribute=%u mode=%u native=%d,%.9g,%.9g shared=%d,%.9g,%.9g applied=%u missing=%u\n",
        p->actor,p->query,p->attribute,p->mode,native_return!=0,native_endpoints[0],native_endpoints[1],
        p->result.native_return,p->result.endpoints[0],p->result.endpoints[1],p->result.applied,p->result.missing_references);
    return same?1:0;
}
