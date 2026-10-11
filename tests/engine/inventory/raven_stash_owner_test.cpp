#include "engine/inventory/raven_stash_owner.h"
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#define CHECK(x) do {if(!(x)){std::fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);std::exit(1);}}while(0)
static uint64_t read(const char* name,unsigned expected) {
    unsigned quantity=999;uint64_t revision=0;
    CHECK(raven_stash_read(1,name,&quantity,&revision));CHECK(quantity==expected);return revision;
}
static void put32(std::vector<unsigned char>& data,size_t at,uint32_t value) {
    for(unsigned i=0;i<4;++i)data[at+i]=static_cast<unsigned char>(value>>(i*8));
}
static void serialization() {
    raven_stash_reset(1);raven_stash_reset(2);
    std::string long_name(300,'z');
    CHECK(raven_stash_commit(1,read(long_name.c_str(),0),long_name.c_str(),40));
    CHECK(raven_stash_capture(1,0));
    CHECK(raven_stash_commit(1,read(long_name.c_str(),40),long_name.c_str(),10));
    CHECK(raven_stash_capture(1,1));
    CHECK(raven_stash_commit(1,read("other",0),"other",20));
    size_t size=raven_stash_save(1,nullptr,0);CHECK(size>600);
    std::vector<unsigned char> bytes(size,0xaa),small(size-1,0xaa);
    CHECK(!raven_stash_save(1,small.data(),small.size()));
    for(auto byte:small)CHECK(byte==0xaa);
    CHECK(raven_stash_save(1,bytes.data(),bytes.size())==size);
    // A different inventory owner proves the wire record has no host/guest IDs.
    CHECK(raven_stash_load(2,bytes.data(),bytes.size()));CHECK(raven_stash_total(2)==30);
    CHECK(raven_stash_restore(2,0));CHECK(raven_stash_total(2)==40);
    CHECK(!raven_stash_restore(2,1));
    auto old=read("other",20);
    CHECK(raven_stash_load(1,bytes.data(),bytes.size()));
    CHECK(!raven_stash_commit(1,old,"other",0));
    CHECK(raven_stash_restore(1,1));CHECK(raven_stash_total(1)==10);
    CHECK(raven_stash_restore(1,0));CHECK(raven_stash_total(1)==40);
    // Every truncated prefix, including one claiming that shorter length,
    // must fail without changing either live items or their revision.
    old=read(long_name.c_str(),40);
    for(size_t cut=0;cut<size;++cut) {
        auto bad=bytes;
        CHECK(!raven_stash_load(1,bad.data(),cut));
        if(cut>=16){put32(bad,12,static_cast<uint32_t>(cut));CHECK(!raven_stash_load(1,bad.data(),cut));}
        CHECK(read(long_name.c_str(),40)==old);
    }
    for(unsigned mutation=0;mutation<7;++mutation) {
        auto bad=bytes;
        switch(mutation) {
        case 0: put32(bad,8,2);break; // unknown version
        case 1: put32(bad,16,2);break; // invalid boolean
        case 2: put32(bad,20,61);break; // excessive entry count
        case 3: put32(bad,24,0xffffffff);break; // name overrun
        case 4: put32(bad,28,61);break; // quantity over capacity
        case 5: bad[32]=0;break; // embedded NUL
        case 6: bad.push_back(0);put32(bad,12,static_cast<uint32_t>(bad.size()));break;
        }
        CHECK(!raven_stash_load(1,bad.data(),bad.size()));CHECK(read(long_name.c_str(),40)==old);
    }
    // Two identical names must not silently collapse into one item stack.
    std::vector<unsigned char> duplicate(46,0);
    for(unsigned i=0;i<8;++i)duplicate[i]=bytes[i];
    put32(duplicate,8,1);put32(duplicate,12,46);put32(duplicate,20,2);
    put32(duplicate,24,1);put32(duplicate,28,1);duplicate[32]='x';
    put32(duplicate,33,1);put32(duplicate,37,1);duplicate[41]='x';
    CHECK(!raven_stash_load(1,duplicate.data(),duplicate.size()));
    duplicate[41]='y';put32(duplicate,28,40);put32(duplicate,37,21);
    CHECK(!raven_stash_load(1,duplicate.data(),duplicate.size()));
    put32(duplicate,37,20);CHECK(raven_stash_load(1,duplicate.data(),duplicate.size()));
    CHECK(raven_stash_total(1)==60);
    raven_stash_reset(2);size=raven_stash_save(2,nullptr,0);CHECK(size==28);
    bytes.resize(size);CHECK(raven_stash_save(2,bytes.data(),size)==size);
    CHECK(raven_stash_load(1,bytes.data(),size));CHECK(raven_stash_total(1)==0);
    CHECK(!raven_stash_restore(1,0));
    raven_stash_forget(1);raven_stash_forget(2);
}
int main() {
    unsigned quantity=123;uint64_t revision=123;
    CHECK(!raven_stash_read(1,"gear",&quantity,&revision));CHECK(quantity==123&&revision==123);
    raven_stash_reset(1);
    std::string name(300,'x');auto original=name;
    auto before=read(name.c_str(),0);CHECK(raven_stash_commit(1,before,name.c_str(),40));name[0]='y';
    auto next=read(original.c_str(),40);CHECK(!raven_stash_commit(1,before,"other",1));
    CHECK(!raven_stash_commit(1,next,"other",21));CHECK(raven_stash_total(1)==40);
    CHECK(raven_stash_commit(1,next,"other",20));CHECK(raven_stash_total(1)==60);
    CHECK(raven_stash_capture(1,0));
    CHECK(raven_stash_commit(1,read("other",20),"other",0));
    CHECK(raven_stash_capture(1,1));
    CHECK(raven_stash_commit(1,read(original.c_str(),40),original.c_str(),0));
    CHECK(raven_stash_restore(1,0));CHECK(raven_stash_total(1)==60);
    CHECK(!raven_stash_restore(1,0));CHECK(raven_stash_restore(1,1));CHECK(raven_stash_total(1)==40);
    CHECK(!raven_stash_restore(1,1));CHECK(!raven_stash_capture(1,2));
    auto stale=read(original.c_str(),40);raven_stash_reset(1);
    CHECK(!raven_stash_commit(1,stale,"other",1));CHECK(!raven_stash_restore(1,0));
    CHECK(raven_stash_total(1)==0);CHECK(!raven_stash_commit(1,read("other",0),"",1));
    raven_stash_reset(2);CHECK(!raven_stash_commit(2,read("other",0),"other",1));
    raven_stash_forget(1);raven_stash_forget(2);
    CHECK(!raven_stash_read(1,"other",&quantity,&revision));
    serialization();
    puts("PASS stash owner: owned mod names, aggregate capacity, atomic rejection, independent snapshots, one-shot restore, stale revisions, reset/reuse, isolation and transactional save codec");
}
