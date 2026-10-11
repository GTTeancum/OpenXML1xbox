#include "engine/inventory/raven_stash_owner.h"
#include <map>
#include <mutex>
#include <string>
#include <cstring>
#include <limits>
#include <vector>
#include <set>

namespace {
using Items=std::map<std::string,unsigned>;
struct Owner { Items live,snapshot[2];bool valid[2]={false,false};uint64_t revision=0; };
std::map<uint32_t,Owner> owners;
std::set<uint32_t> stash_menus;
std::mutex owner_mutex;
uint64_t revision_counter=0;
unsigned total(const Items& items) {unsigned n=0;for(const auto& item:items)n+=item.second;return n;}
}
extern "C" void raven_stash_menu_set(uint32_t menu,int enabled) {
    if(!menu)return;
    std::lock_guard<std::mutex> lock(owner_mutex);
    if(enabled)stash_menus.insert(menu);else stash_menus.erase(menu);
}
extern "C" int raven_stash_menu_enabled(uint32_t menu) {
    std::lock_guard<std::mutex> lock(owner_mutex);return stash_menus.count(menu)!=0;
}
extern "C" void raven_stash_reset(uint32_t inventory) {
    if(!inventory)return;
    std::lock_guard<std::mutex> lock(owner_mutex);
    Owner next;next.revision=++revision_counter;owners.insert_or_assign(inventory,std::move(next));
}
extern "C" void raven_stash_forget(uint32_t inventory) {
    std::lock_guard<std::mutex> lock(owner_mutex);owners.erase(inventory);
}
extern "C" void raven_stash_clear_live(uint32_t inventory) {
    std::lock_guard<std::mutex> lock(owner_mutex);
    auto found=owners.find(inventory);if(found==owners.end())return;
    // Native7E2F0 resets current inventory, not either snapshot. Do not make
    // starting a new inventory consume otherwise-restorable campaign state.
    found->second.live.clear();found->second.revision=++revision_counter;
}
extern "C" int raven_stash_read(uint32_t inventory,const char* name,unsigned* quantity,uint64_t* revision) {
    if(!name||!*name||!quantity||!revision)return 0;
    std::lock_guard<std::mutex> lock(owner_mutex);
    auto owner=owners.find(inventory);if(owner==owners.end())return 0;
    const auto item=owner->second.live.find(name);
    *quantity=item==owner->second.live.end()?0:item->second;
    *revision=owner->second.revision;return 1;
}
extern "C" int raven_stash_commit(uint32_t inventory,uint64_t revision,const char* name,unsigned quantity) {
    if(!name||!*name||quantity>60)return 0;
    std::lock_guard<std::mutex> lock(owner_mutex);
    auto found=owners.find(inventory);
    if(found==owners.end()||found->second.revision!=revision)return 0;
    auto& owner=found->second;auto old=owner.live.find(name);
    unsigned before=old==owner.live.end()?0:old->second;
    /* XML2 inventory8A7D0/eligibility1B5B72 limits stashed item instances
     * to60. Count quantities, not unique names; do not truncate a deposit.
     * Revision guards a guest callback resetting/restoring/reusing the owner. */
    if(total(owner.live)-before+quantity>60)return 0;
    if(quantity)owner.live.insert_or_assign(std::string(name),quantity);
    else if(old!=owner.live.end())owner.live.erase(old);
    owner.revision=++revision_counter;return 1;
}
extern "C" unsigned raven_stash_total(uint32_t inventory) {
    std::lock_guard<std::mutex> lock(owner_mutex);auto found=owners.find(inventory);
    return found==owners.end()?0:total(found->second.live);
}
extern "C" int raven_stash_capture(uint32_t inventory,unsigned slot) {
    if(slot>=2)return 0;
    std::lock_guard<std::mutex> lock(owner_mutex);auto found=owners.find(inventory);
    if(found==owners.end())return 0;
    auto& owner=found->second;owner.snapshot[slot]=owner.live;owner.valid[slot]=true;return 1;
}
extern "C" int raven_stash_restore(uint32_t inventory,unsigned slot) {
    if(slot>=2)return 0;
    std::lock_guard<std::mutex> lock(owner_mutex);auto found=owners.find(inventory);
    if(found==owners.end()||!found->second.valid[slot])return 0;
    auto& owner=found->second;owner.live=owner.snapshot[slot];owner.valid[slot]=false;
    owner.snapshot[slot].clear();owner.revision=++revision_counter;return 1;
}

namespace {
void write32(std::vector<unsigned char>& bytes,uint32_t value) {
    for(unsigned i=0;i<4;++i)bytes.push_back(static_cast<unsigned char>(value>>(8*i)));
}
bool write_items(std::vector<unsigned char>& bytes,const Items& items) {
    write32(bytes,static_cast<uint32_t>(items.size()));
    for(const auto& item:items) {
        if(item.first.size()>std::numeric_limits<uint32_t>::max())return false;
        write32(bytes,static_cast<uint32_t>(item.first.size()));write32(bytes,item.second);
        bytes.insert(bytes.end(),item.first.begin(),item.first.end());
    }
    return true;
}
struct Reader {
    const unsigned char* bytes;size_t size,offset;
    bool u32(uint32_t& result) {
        if(size-offset<4)return false;
        result=0;for(unsigned i=0;i<4;++i)result|=uint32_t(bytes[offset++])<<(8*i);
        return true;
    }
    bool items(Items& result) {
        uint32_t count,length,quantity;unsigned aggregate=0;
        if(!u32(count)||count>60)return false;
        for(uint32_t i=0;i<count;++i) {
            if(!u32(length)||!u32(quantity)||!length||length>size-offset||
               !quantity||quantity>60||aggregate+quantity>60)return false;
            const char* name=reinterpret_cast<const char*>(bytes+offset);
            if(std::memchr(name,0,length)||!result.emplace(std::string(name,length),quantity).second)return false;
            offset+=length;aggregate+=quantity;
        }
        return true;
    }
};
}
extern "C" size_t raven_stash_save(uint32_t inventory,void* buffer,size_t capacity) {
    std::lock_guard<std::mutex> lock(owner_mutex);
    auto found=owners.find(inventory);if(found==owners.end())return 0;
    const auto& owner=found->second;
    std::vector<unsigned char> bytes={'X','M','L','1','S','T','S','H'};
    write32(bytes,1);write32(bytes,0);write32(bytes,owner.valid[0]?1:0);
    /* XML1 inventory7E5A0 persists live and slot0 only. Never serialize the
     * temporary snapshot, transient row IDs, guest pointers or host padding. */
    if(!write_items(bytes,owner.live)||!write_items(bytes,owner.snapshot[0])||
       bytes.size()>std::numeric_limits<uint32_t>::max())return 0;
    for(unsigned i=0;i<4;++i)bytes[12+i]=static_cast<unsigned char>(bytes.size()>>(8*i));
    if(!buffer)return bytes.size();
    if(capacity<bytes.size())return 0;
    std::memcpy(buffer,bytes.data(),bytes.size());return bytes.size();
}
extern "C" int raven_stash_load(uint32_t inventory,const void* buffer,size_t size) {
    if(!inventory||!buffer||size<28||std::memcmp(buffer,"XML1STSH",8))return 0;
    Reader reader{static_cast<const unsigned char*>(buffer),size,8};
    uint32_t version,length,valid;Items live,snapshot;
    if(!reader.u32(version)||version!=1||!reader.u32(length)||length!=size||
       !reader.u32(valid)||valid>1||!reader.items(live)||!reader.items(snapshot)||
       reader.offset!=size||(!valid&&!snapshot.empty()))return 0;
    /* Validate the entire section before replacing anything. Truncated,
     * duplicate-name or over-capacity records cannot partially load items. */
    std::lock_guard<std::mutex> lock(owner_mutex);
    auto found=owners.find(inventory);if(found==owners.end())return 0;
    auto& owner=found->second;owner.live=std::move(live);
    owner.snapshot[0]=std::move(snapshot);owner.valid[0]=valid!=0;
    owner.revision=++revision_counter;return 1;
}
extern "C" int raven_stash_has_saved_items(uint32_t inventory) {
    std::lock_guard<std::mutex> lock(owner_mutex);
    auto found=owners.find(inventory);
    return found!=owners.end()&&(!found->second.live.empty()||!found->second.snapshot[0].empty());
}
extern "C" void raven_stash_load_legacy(uint32_t inventory,int persisted_valid) {
    std::lock_guard<std::mutex> lock(owner_mutex);
    auto found=owners.find(inventory);if(found==owners.end())return;
    auto& owner=found->second;
    // A legacy save has empty live/persisted stash, not the previous campaign's
    // items. Its native snapshot may still be valid and must restore emptiness.
    // Native inventory load deliberately does not touch the temporary snapshot.
    owner.live.clear();owner.snapshot[0].clear();owner.valid[0]=persisted_valid!=0;
    owner.revision=++revision_counter;
}
