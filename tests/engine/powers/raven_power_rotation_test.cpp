#include "engine/powers/raven_power_rotation.h"
#include "engine/progression/talent_registry_layout.h"
#include "engine/progression/character_talent_record.h"
#include <cstring>
#include <iostream>
#include <stdexcept>

static unsigned char memory[0x10000];
static void check(bool ok,const char *why){if(!ok)throw std::runtime_error(why);}
static int read_memory(void*,uint32_t at,void *out,size_t n) {
    if(at>sizeof(memory)||n>sizeof(memory)-at)return 0;
    std::memcpy(out,memory+at,n);return 1;
}
static void word(unsigned at,unsigned v){for(unsigned i=0;i<4;++i)memory[at+i]=(unsigned char)(v>>(8*i));}
static void name(unsigned node,const char *value,unsigned id,unsigned next) {
    unsigned at=0x100+4+node*44;
    word(at+0x10,0x3fffffff);word(at+0x14,next);
    std::strcpy((char*)memory+at+0x18,value);
    memory[0x100+4+XML1_TALENT_NAME_VALUES+node]=(unsigned char)id;
}
static void rank(unsigned node,unsigned id,unsigned current,unsigned bonus,unsigned pending,unsigned next) {
    unsigned at=0x6000+0x30+node*16;
    word(at+0x10,0x3fffffff);word(at+0x14,next);memory[at+0x18]=(unsigned char)id;
    uint32_t record=0;
    check(xml1_talent_record_set(&record,XML1_TALENT_CURRENT,current),"rank setup");
    check(xml1_talent_record_set(&record,XML1_TALENT_BONUS,bonus),"bonus setup");
    check(xml1_talent_record_set(&record,XML1_TALENT_PENDING,pending),"pending setup");
    word(0x6000+0x198+node*4,record);
}
int main(){try {
    auto data=xml1::compile_xmlb("<talents>"
        "<talent name='z_attack' power='beam'/>"
        "<talent name='a_attack' power='blast' type='attack'/>"
        "<talent name='b_boost' power='shield' type='boost'/>"
        "<talent name='c_xtreme' power='nova' type='xtreme'/>"
        "<talent name='d_passive' power='passive' type='passive'/>"
        "<talent name='e_pending' power='pending'/>"
        "<talent name='f_foreign' power='foreign'/>"
        "<talent name='g_unloaded' power='unloaded'/>"
        "</talents>");
    raven::TalentBindings catalog(raven::load_talents(data.data(),(unsigned)data.size()));
    word(0x108,0);
    const char *names[]={"a_attack","b_boost","c_xtreme","d_passive","e_pending","f_foreign","z_attack"};
    for(unsigned i=0;i<7;++i)name(i,names[i],10+i,i==6?0x3fffffff:i+1);
    // Actor owns stats at component+4; another actor has a separate empty map.
    word(0x5000+0x2d8,0x5ffc);std::strcpy((char*)memory+0x5ffc+0x20c,"Imported");
    word(0x7000+0x2d8,0x7ffc);word(0x8034,0x3fffffff);
    std::strcpy((char*)memory+0x7ffc+0x20c,"Other");
    word(0x6034,0);
    rank(0,10,0,1,0,1); // Equipment-granted learned rank.
    rank(1,11,2,0,0,2);
    rank(2,12,1,0,0,3);
    rank(3,13,1,0,0,4);
    rank(4,14,0,0,9,5); // Pending upgrade alone cannot enter gameplay cycle.
    rank(5,16,20,0,0,0x3fffffff);
    auto learned=raven::xml1_learned_powers(catalog,read_memory,nullptr,0x100,0x5000);
    check(learned.size()==4,"Included pending, passive, foreign or unloaded talent");
    check(learned[0].move=="beam"&&learned[0].rank==20&&learned[1].move=="blast",
        "Declaration order or expanded rank lost");
    check(learned[1].rank==1&&learned[2].category==2&&learned[3].category==0,
        "Effective rank/category mismatch");
    check(raven::xml1_learned_powers(catalog,read_memory,nullptr,0x100,0x7000).empty(),
        "Another actor inherited learned powers");
    auto roster=xml1::compile_xmlb("<characters><stats name='Imported' power1='beam' power2='other'/><stats name='Stock'/></characters>");
    raven::PowerBindings bindings(xml1::parse_xmlb(roster.data(),(unsigned)roster.size()));
    check(raven::rotate_xml1_power(bindings,catalog,read_memory,nullptr,0x100,0x5000,0),"Live rotation did not change");
    check(*bindings.resolve("Imported",5,true)=="blast","Wrong live power selected");
    rank(0,10,0,0,0,1); // Revoked equipment rank must be noticed immediately.
    check(raven::rotate_xml1_power(bindings,catalog,read_memory,nullptr,0x100,0x5000,0),"Rank removal was cached");
    check(*bindings.resolve("Imported",5,true)=="beam","Removed power still eligible");
    auto before=bindings.changes();
    word(0x6198+5*4,0xffffffff);
    bool rejected=false;
    try {raven::rotate_xml1_power(bindings,catalog,read_memory,nullptr,0x100,0x5000,0);}
    catch(const std::runtime_error&){rejected=true;}
    check(rejected&&bindings.changes()==before,"Corrupt state partially mutated selection");
    std::strcpy((char*)memory+0x5ffc+0x20c,"Stock");
    check(!raven::rotate_xml1_power(bindings,catalog,read_memory,nullptr,0,0x5000,0),
        "Stock actor scanned imported state");
    std::cout<<"PASS live actor power rotation: ownership, ranks, categories, order and atomic rejection\n";
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
