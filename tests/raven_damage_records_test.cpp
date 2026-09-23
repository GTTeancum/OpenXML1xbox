#include "raven_damage_records.h"
#include <iostream>
#include <stdexcept>

static void check(bool ok,const char* reason) {
    if(!ok)throw std::runtime_error(reason);
}
template<class F> static void rejects(F operation) {
    bool threw=false;
    try {operation();}catch(const std::logic_error&){threw=true;}
    check(threw,"Invalid lifetime operation was accepted");
}
int main() {try {
    raven::DamageRecords records;
    // Reproduce observed stack reuse across different actors/events. Values
    // must disappear on retirement even when the next attack uses the same
    // source and recipient-copy addresses.
    for(unsigned i=0;i<10000;++i) {
        auto attack=records.enter();
        check(!records.get(0xF7FCEC),"Previous attack leaked");
        records.bind(0xF7FCEC,{100+i,200+i,11.5f});
        auto hit=records.enter();
        records.copy(0xF7FCEC,0xF7FB18);
        check(records.update(0xF7FB18,17.25f),"Copied value disappeared");
        auto value=records.get(0xF7FB18);
        check(value&&value->event==100+i&&value->actor==200+i&&value->amount==17.25f,
            "Fractional amount or origin lost during modifier");
        check(records.get(0xF7FCEC)->amount==11.5f,"Recipient changed source");
        // A reentrant hit may shadow a still-live outer record. Retiring it
        // restores the outer amount, rather than clearing or corrupting it.
        auto nested=records.enter();
        records.bind(0xF7FCEC,{900,901,0.125f});
        records.copy(0xF7FCEC,0xF7FB18);
        check(records.get(0xF7FB18)->amount==0.125f,"Nested attack lost fraction");
        rejects([&]{records.leave(attack);});
        records.leave(nested);
        check(records.get(0xF7FB18)->amount==17.25f,"Nested attack damaged outer hit");
        records.leave(hit);
        check(!records.get(0xF7FB18),"Recipient copy escaped lifetime");
        records.leave(attack);
        check(records.depth()==0&&!records.get(0xF7FCEC),"Attack not retired");
    }
    auto outer=records.enter();
    records.bind(42,{1,2,3.75f});
    auto child=records.enter();
    records.copy(43,42); // Ordinary unbound native record at a reused address.
    check(!records.get(42)&&!records.update(42,7),"Unbound XML1 copy inherited XML2 damage");
    records.leave(child);
    check(records.get(42)->amount==3.75f,"Mask erased parent record");
    records.copy(42,42);
    check(records.get(42)->amount==3.75f,"Self copy lost value");
    records.update(42,0);
    check(records.get(42)&&records.get(42)->amount==0,"Rejected hit confused with unbound");
    records.clear(42);
    check(!records.get(42),"Clear retained stale value");
    rejects([&]{records.bind(0,{1,2,3});});
    records.leave(outer);
    rejects([&]{records.leave(outer);});
    rejects([&]{records.bind(42,{1,2,3});});
    std::cout<<"PASS damage transport: 10000 reused/nested lifetimes, independent copies, fractions, native masking\n";
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
