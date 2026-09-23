#include "raven_talent_binding.h"
#include "raven_xml2_query_probe.h"
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <cstring>
#include <cmath>
#include <limits>
static unsigned char guest[0x24000];
static void put(unsigned at,uint32_t value){for(unsigned i=0;i<4;++i)guest[at+i]=(unsigned char)(value>>(8*i));}
static int read_guest(void*,uint32_t at,void *out,size_t n) {
    if(at>sizeof(guest)||n>sizeof(guest)-at)return 0;
    std::memcpy(out,guest+at,n);return 1;
}
static void guest_fixture(int16_t context) {
    std::memset(guest,0,sizeof(guest));
    put(0x400,0x49ef3c);put(0x400+0xc3c,0xff);
    put(0x400+0x83c+7*4,0x107);put(0x400+0x818,1u<<7);put(0x400+4+7*4,0x2200);
    put(32,0x4a6af4);put(32+0x18,0x107);
    put(0x2200,0x1800);put(0x1800,0x1900);guest[0x1900]=0xb8;put(0x1901,0x1a00);guest[0x1905]=0xc3;
    put(0x1a18,1u<<11);guest[0x2200+0x258]=1;put(0x2200+0x35c,0x2700);
    guest[0x2700+0x28e]=(unsigned char)context;guest[0x2700+0x28f]=(unsigned char)((uint16_t)context>>8);
}
static void check(bool value,const char *why){if(!value)throw std::runtime_error(why);}
static unsigned race_calls,character_calls;
static raven_lookup match_race(void*,uint32_t actor,uint32_t selector) {
    ++race_calls;return raven_xml2_scope_race(read_guest,nullptr,0x400,actor,7,8,(uint16_t)selector);
}
static raven_lookup match_character(void*,uint32_t actor,uint32_t selector) {
    ++character_calls;return raven_xml2_scope_character(read_guest,nullptr,0x400,actor,7,8,0x1000,0,selector);
}
static xml1::BinaryXml resource(const char *path) {
    std::ifstream file(path,std::ios::binary);
    if(!file)throw std::runtime_error(std::string("Cannot read ")+path);
    std::string text((std::istreambuf_iterator<char>(file)),{});
    return xml1::compile_xmlb(text);
}
static void collect(const xml1::XmlNode& node,std::vector<raven::AffecterDeclaration>& output) {
    if(node.name=="affecter")output.push_back(raven::read_xml2_affecter(node));
    for(const auto& child:node.children)collect(child,output);
}
int main(int argc,char **argv){try {
    if(argc==3&&std::string(argv[1])=="--oracle-fixture") {
        std::ifstream file(argv[2],std::ios::binary);
        if(!file)throw std::runtime_error("Cannot open original-code oracle fixture");
        std::vector<unsigned char> memory((std::istreambuf_iterator<char>(file)),{});
        auto reader=[](void *context,uint32_t at,void *out,size_t n)->int {
            const auto& bytes=*static_cast<const std::vector<unsigned char>*>(context);
            if(at>bytes.size()||n>bytes.size()-at)return 0;
            std::memcpy(out,bytes.data()+at,n);return 1;
        };
        auto fixture_word=[&](uint32_t at){uint32_t value;if(!reader(&memory,at,&value,4))
            throw std::runtime_error("Truncated oracle arguments");return value;};
        const raven_xml2_scope_runtime runtime={0x5f92d0,fixture_word(0x5aa7a8),
            fixture_word(0x58bdcc),0x6cfd10,fixture_word(0x72e068)};
        auto result=raven::query_xml2_native_affecters(reader,&memory,runtime,0x5f3af8,0,0x1002200,
            (uint8_t)fixture_word(0x1f00004),(uint8_t)fixture_word(0x1f00014),fixture_word(0x1f00010));
        void *probe=raven_xml2_query_probe_begin(reader,&memory,&runtime,0x5f3af8,0,0x1002200,
            (uint8_t)fixture_word(0x1f00004),(uint8_t)fixture_word(0x1f00014),fixture_word(0x1f00010));
        check(raven_xml2_query_probe_finish(probe,result.native_return,result.endpoints.data())==1,
              "C ABI query probe failed comparison/lifetime");
        std::cout<<"{\"native_return\":"<<(result.native_return?"true":"false")
                 <<",\"endpoints\":["<<result.endpoints[0]<<","<<result.endpoints[1]<<"]}\n";
        return 0;
    }
    guest_fixture(1);
    const unsigned pool=0x4000,first=pool+4+0x68,second_node=pool+4+2*0x68;
    put(pool,0x4a6be8);put(pool+0x3838,0x7f);
    put(pool+0x3638+4,0x81);put(pool+0x3638+8,0x82);put(pool+0x3624,6);
    put(first,0x4a6af4);put(first+4,0x82);put(first+8,pool);put(first+0x20,17);put(first+0x24,0x8000);
    put(second_node,0x4a6af4);put(0x2200+0x21c,0x81);put(0x2200+0x220,pool);
    auto attached=raven::read_xml2_actor_powerup_list(read_guest,nullptr,0x2200);
    check(attached.size()==2&&attached[0].address==first&&attached[1].address==second_node&&
          attached[0].definition_handle==17&&attached[0].definition_pool==0x8000,"Native list order/definition identity lost");
    put(pool+0x3624,2);
    check(raven::read_xml2_actor_powerup_list(read_guest,nullptr,0x2200).size()==1,"Detached node stayed visible");
    put(pool+0x3624,6);put(pool+0x3638+8,0x102);
    check(raven::read_xml2_actor_powerup_list(read_guest,nullptr,0x2200).size()==1,"Reused slot accepted stale link");
    put(pool+0x3638+8,0x82);put(second_node+4,0x81);put(second_node+8,pool);
    bool cyclic=false;
    try{raven::read_xml2_actor_powerup_list(read_guest,nullptr,0x2200);}catch(const std::runtime_error&){cyclic=true;}
    check(cyclic,"Cyclic attached list was accepted");
    put(0x2200+0x220,0);
    check(raven::read_xml2_actor_powerup_list(read_guest,nullptr,0x2200).empty(),"Empty list invented a node");
    for(unsigned slot=0;slot<128;++slot) {
        const unsigned handle=0x180|slot,address=pool+4+slot*0x68;
        put(pool+0x3638+slot*4,handle);put(pool+0x3624+(slot>>5)*4,1u<<(slot&31));
        put(address,0x4a6af4);
        raven_xml2_powerup_node node;
        check(raven_xml2_attached_powerup_node(read_guest,nullptr,pool,handle,&node)==RAVEN_FOUND&&
              node.address==address,"Attached pool slot layout failed");
    }
    const unsigned definitions=0xa000,affecter_pool=0x14000;
    put(definitions,0x4a7d6c);put(definitions+0x9058,0xff);put(0x1878,0x147c20);
    for(unsigned slot=0;slot<256;++slot) {
        const unsigned handle=0x300|slot,address=definitions+4+slot*0x88;
        put(definitions+0x8c58+slot*4,handle);put(definitions+0x8c34+(slot>>5)*4,1u<<(slot&31));
        put(address,0x1800);put(address+0xc,0x401);put(address+0x10,affecter_pool);
        raven_xml2_powerup_definition definition;
        check(raven_xml2_powerup_definition_read(read_guest,nullptr,definitions,handle,&definition)==RAVEN_FOUND&&
              definition.address==address&&definition.affecter_handle==0x401&&definition.affecter_pool==affecter_pool,
              "Definition pool/head resolution failed");
    }
    put(affecter_pool,0x4a6a58);put(affecter_pool+0x4278,0x1ff);
    for(unsigned slot=0;slot<384;++slot) {
        const unsigned handle=0x400|slot,address=affecter_pool+4+slot*0x24;
        put(affecter_pool+0x3c78+slot*4,handle);put(affecter_pool+0x3c44+(slot>>5)*4,1u<<(slot&31));
        put(address,0x4a6a6c);put(address+4,0x3f000000);put(address+8,0x40000000);
        guest[address+0x10]=57;guest[address+0x11]=1;guest[address+0x12]=2;
        raven_xml2_affecter_node node;
        check(raven_xml2_affecter_node_read(read_guest,nullptr,affecter_pool,handle,&node)==RAVEN_FOUND&&
              node.address==address&&node.attribute==57&&node.mode==1&&node.sharing==2&&
              !node.is_reference&&node.literal[0]==0.5f&&node.literal[1]==2,
              "Affecter inline layout/literal decoding failed");
        guest[address+0xc]=1;put(address+4,0x1234);
        check(raven_xml2_affecter_node_read(read_guest,nullptr,affecter_pool,handle,&node)==RAVEN_FOUND&&
              node.is_reference&&node.native_value_id==0x1234,"Native reference ID mistaken for float");
        put(affecter_pool+0x3c78+slot*4,handle+0x200);
        check(raven_xml2_affecter_node_read(read_guest,nullptr,affecter_pool,handle,&node)==RAVEN_MISSING,
              "Affecter slot reuse retained old handle");
    }
    raven::TalentBindings empty({});raven::TalentContextValues values;
    const unsigned scopes=0x21000;
    put(scopes,0x4a9b94);put(scopes+0x1238,0x7f);
    for(unsigned slot=0;slot<128;++slot) {
        const unsigned handle=0x180|slot,address=scopes+4+slot*0x1c;
        put(scopes+0x1038+slot*4,handle);put(scopes+0x1024+(slot>>5)*4,1u<<(slot&31));
        put(address,0x4a9bac);put(address+4,0x123456);put(address+8,0x654321);
        put(address+0xc,0x80);put(address+0x10,0x80000000);put(address+0x14,0xffff0021);
        guest[address+0x18]=0x3b;
        raven_xml2_powerup_scope scope={};
        check(raven_xml2_powerup_scope_read(read_guest,nullptr,scopes,handle,&scope)==RAVEN_FOUND&&
              scope.address==address&&scope.character_symbol==0x123456&&scope.node_symbol==0x654321&&
              scope.damage_mask==0x80&&scope.attack_mask==0x80000000&&scope.race==0x21&&
              scope.talent==0xffff&&scope.flags==0x3b,"Native scope fields/slot layout lost");
        put(scopes+0x1038+slot*4,handle+0x80);
        check(raven_xml2_powerup_scope_read(read_guest,nullptr,scopes,handle,&scope)==RAVEN_MISSING&&
              scope.address==address,"Stale scope handle accepted or changed output");
        put(scopes+0x1038+slot*4,handle);put(address,0);
        check(raven_xml2_powerup_scope_read(read_guest,nullptr,scopes,handle,&scope)==RAVEN_INVALID&&
              scope.address==address,"Unknown scope layout accepted or changed output");
    }
    const unsigned provider=0x1b000;
    const unsigned query=0x23000;
    raven_xml2_powerup_scope scope={};scope.flags=4;
    check(raven_xml2_powerup_scope_matches(nullptr,nullptr,&scope,0,nullptr,nullptr)==RAVEN_FOUND,
          "Unrestricted scope touched query");
    scope.flags=0x39;scope.damage_mask=0x80;scope.attack_mask=0x80000000;
    scope.node_symbol=0x654321;scope.character_symbol=0x12000005;scope.race=0x21;scope.talent=0xffff;
    put(0x1000+4+5*4,8);
    std::memcpy(guest+0x5010,"Bishop",7);std::memcpy(guest+0x2700+0x150,"bIsHoP",7);
    put(query+0x10,0x80);put(query+0xc,63);put(query+0x20,0x654321);
    put(query+0x38,0x107);guest[query+0x35]=4;
    guest[0x2700+0x4c8]=2;guest[0x2700+0x4c9]=0;
    auto matches=[&](){return raven_xml2_powerup_scope_matches(read_guest,nullptr,&scope,query,match_race,match_character);};
    check(matches()==RAVEN_FOUND,"Combined scope/masked attack index rejected matching query");
    const raven_xml2_scope_runtime runtime={0x400,7,8,0x1000,0};
    put(32+0x20,0x3ff);put(32+0x24,definitions);put(0x18a0,0x146d20);
    const unsigned sharing_value=definitions+4+255*0x88+0x3c;
    put(sharing_value,0x3f800000);guest[32+0x64]=0;
    int sharing_enabled=9,owner_matches=9;
    check(raven_xml2_powerup_sharing(read_guest,nullptr,32,&sharing_enabled,&owner_matches)==RAVEN_FOUND&&
          sharing_enabled==1&&owner_matches==1,"Native sharing derivation failed");
    guest[32+0x64]=1;put(sharing_value,0x7fc00000);
    check(raven_xml2_powerup_sharing(read_guest,nullptr,32,&sharing_enabled,&owner_matches)==RAVEN_FOUND&&
          sharing_enabled==0&&owner_matches==0,"Sharing NaN/attachment flag behavior failed");
    put(sharing_value,0x3f800000);put(0x18a0,0);
    check(raven_xml2_powerup_sharing(read_guest,nullptr,32,&sharing_enabled,&owner_matches)==RAVEN_INVALID&&
          sharing_enabled==0&&owner_matches==0,"Unsupported definition getter published sharing");
    put(0x18a0,0x146d20);guest[32+0x64]=0;
    raven_xml2_affecter_node eligibility={};eligibility.sharing=1;eligibility.attribute=57;
    check(raven_xml2_affecter_eligible(read_guest,nullptr,&runtime,&eligibility,0,1,0)==RAVEN_FOUND,
          "Missing scope incorrectly applied sharing filter");
    eligibility.scope_pool=scopes;eligibility.scope_handle=0x181;
    const unsigned scoped=scopes+4+0x1c;
    put(scopes+0x1038+4,0x181);put(scopes+0x1024,2);put(scoped,0x4a9bac);
    guest[scoped+0x18]=4;
    check(raven_xml2_affecter_eligible(read_guest,nullptr,&runtime,&eligibility,0,1,0)==RAVEN_FOUND,
          "Unrestricted scope incorrectly read query or sharing");
    guest[scoped+0x18]=0;put(scoped+0xc,0x80);put(scoped+0x10,0);put(scoped+0x14,0xffff0000);
    check(raven_xml2_query_affecter_eligible(read_guest,nullptr,&runtime,32,&eligibility,query)==RAVEN_FOUND,
          "Derived sharing rejected eligible query");
    guest[32+0x64]=1;
    check(raven_xml2_query_affecter_eligible(read_guest,nullptr,&runtime,32,&eligibility,query)==RAVEN_MISSING,
          "Derived sharing ignored attachment flag");guest[32+0x64]=0;
    guest[scoped+0x18]=0x20;
    check(raven_xml2_query_affecter_eligible(read_guest,nullptr,&runtime,0,&eligibility,0)==RAVEN_MISSING,
          "Null query accepted node scope");guest[scoped+0x18]=0;
    check(raven_xml2_query_affecter_eligible(read_guest,nullptr,&runtime,0,&eligibility,0)==RAVEN_FOUND,
          "Null query required attachment or evaluated damage scope");
    check(raven_xml2_affecter_eligible(read_guest,nullptr,&runtime,&eligibility,0,1,0)==RAVEN_MISSING,
          "Rejected sharing still read query");
    check(raven_xml2_affecter_eligible(read_guest,nullptr,&runtime,&eligibility,query,1,1)==RAVEN_FOUND,
          "Matching damage scope rejected");
    eligibility.attribute=8;
    check(raven_xml2_affecter_eligible(read_guest,nullptr,&runtime,&eligibility,query,1,1)==RAVEN_MISSING,
          "Attribute 8 did not invert matching scope");
    put(scoped+0xc,0x100);
    check(raven_xml2_affecter_eligible(read_guest,nullptr,&runtime,&eligibility,query,1,1)==RAVEN_FOUND,
          "Attribute 8 did not accept nonmatching scope");
    check(raven_xml2_affecter_eligible(read_guest,nullptr,&runtime,&eligibility,0,1,1)==RAVEN_INVALID,
          "Attribute 8 inverted unreadable state into eligibility");
    put(scopes+0x1038+4,0x201);
    check(raven_xml2_affecter_eligible(read_guest,nullptr,&runtime,&eligibility,0,1,0)==RAVEN_FOUND,
          "Retired scope did not use native no-scope behavior");
    check(raven_xml2_powerup_scope_guest_matches(read_guest,nullptr,&runtime,&scope,query)==RAVEN_FOUND,
          "Production guest scope composition failed");
    guest[0x2700+0x150]='X';check(matches()==RAVEN_MISSING,"Character mismatch accepted");
    check(raven_xml2_powerup_scope_guest_matches(read_guest,nullptr,&runtime,&scope,query)==RAVEN_MISSING,
          "Production guest scope ignored character mismatch");
    guest[0x2700+0x150]='b';
    check(raven_xml2_scope_character(read_guest,nullptr,0x400,0x107,7,8,0x1000,1,scope.character_symbol)==RAVEN_INVALID,
          "Unsupported locale silently used ASCII comparison");
    check(raven_xml2_scope_character(read_guest,nullptr,0x400,0x107,7,8,0x1000,0,4096)==RAVEN_INVALID,
          "Out-of-range string offset index accepted");
    check(raven_xml2_scope_character(read_guest,nullptr,0x400,0x107,7,8,0,0,0)==RAVEN_MISSING,
          "Empty selector matched nonempty name");
    guest[0x2700+0x150]=0;
    check(raven_xml2_scope_character(read_guest,nullptr,0x400,0x107,7,8,0,0,0)==RAVEN_FOUND,
          "Empty selector accessed string pool");guest[0x2700+0x150]='b';
    put(0x1000+4+5*4,0xffffffff);
    check(matches()==RAVEN_INVALID,"Overflowing string offset accepted");put(0x1000+4+5*4,8);
    guest[0x2700+0x4c8]=0;check(matches()==RAVEN_MISSING,"Combined scope ignored native race mismatch");
    guest[0x2700+0x4c8]=2;
    put(query+0xc,32);check(matches()==RAVEN_MISSING,"Nonmatching attack index accepted");put(query+0xc,31);
    put(query+0x10,0x100);race_calls=character_calls=0;
    check(matches()==RAVEN_MISSING&&race_calls==1&&character_calls==1,
          "Damage mismatch bypassed native actor predicates");put(query+0x10,0x180);
    scope.talent=7;guest[query+0x2c]=6;
    check(matches()==RAVEN_MISSING,"Nonmatching talent accepted");guest[query+0x2c]=7;
    check(matches()==RAVEN_FOUND,"Matching talent rejected");
    put(query+0x20,1);check(matches()==RAVEN_MISSING,"Nonmatching node accepted");put(query+0x20,0x654321);
    guest[query+0x35]=0;check(matches()==RAVEN_MISSING,"Power scope accepted non-power query");
    scope.flags=0x3a;check(matches()==RAVEN_FOUND,"Non-power scope rejected non-power query");
    guest[query+0x35]=4;check(matches()==RAVEN_MISSING,"Non-power scope accepted power query");
    scope.flags=0x3b;check(matches()==RAVEN_MISSING,"Contradictory power filters accepted query");
    scope.flags=0x38;put(query+0x38,0);
    check(matches()==RAVEN_MISSING,"Absent actor qualified for actor scope");put(query+0x38,0x107);
    check(raven_xml2_powerup_scope_matches(read_guest,nullptr,&scope,query,nullptr,match_character)==RAVEN_INVALID,
          "Missing actor metadata resolver treated as success");
    check(raven_xml2_powerup_scope_matches(read_guest,nullptr,&scope,0xfffffff0,match_race,match_character)==RAVEN_INVALID,
          "Overflowing query address accepted");
    put(provider,0x49e410);put(provider+8,0);
    for(unsigned slot=0;slot<3;++slot){put(provider+4+slot*32+0x10,0x3fffffff);put(provider+4+slot*32+0x14,0x3fffffff);}
    std::memcpy(guest+provider+0x1c,"middle",7);
    std::memcpy(guest+provider+0x1c+32,"alpha",6);
    std::memcpy(guest+provider+0x1c+64,"zeta",5);
    put(provider+0x14,1);put(provider+0x18,2);
    guest[provider+0x2a80+2]=0x34;guest[provider+0x2a80+3]=0x12;
    uint16_t native_id=999;
    check(raven_xml2_talent_value_id(read_guest,nullptr,provider,"ALPHA",&native_id)==RAVEN_FOUND&&native_id==0x1234,
          "Native symbol tree/case folding failed");
    check(raven_xml2_talent_value_id(read_guest,nullptr,provider,"missing",&native_id)==RAVEN_MISSING&&native_id==0x1234,
          "Missing native symbol changed output");
    put(provider+0x14,0);
    check(raven_xml2_talent_value_id(read_guest,nullptr,provider,"alpha",&native_id)==RAVEN_INVALID,"Cyclic symbol tree accepted");
    put(provider+8,299);std::memcpy(guest+provider+0x1c+299*32,"last",5);
    guest[provider+0x2a80+299*2]=0xff;guest[provider+0x2a81+299*2]=0x7f;
    check(raven_xml2_talent_value_id(read_guest,nullptr,provider,"last",&native_id)==RAVEN_FOUND&&native_id==0x7fff,
          "Final symbol slot/maximum native ID rejected");
    guest[provider+0x2a81+299*2]=0x80;
    check(raven_xml2_talent_value_id(read_guest,nullptr,provider,"last",&native_id)==RAVEN_INVALID,
          "Tagged native ID accepted as plain ID");
    put(provider+8,300);
    check(raven_xml2_talent_value_id(read_guest,nullptr,provider,"last",&native_id)==RAVEN_INVALID,
          "Out-of-range symbol node accepted");
    // D0A70 packs signed actor contexts into the native value-tree key.
    const unsigned tree=provider+0x2cdc, end=0x3fffffff;
    auto endpoint=[&](unsigned slot,unsigned key,uint32_t bits) {
        put(tree+slot*16+0x10,end);put(tree+slot*16+0x14,end);
        put(tree+slot*16+0x18,key);put(tree+0x1f98+slot*4,bits);
    };
    put(tree+4,0);
    endpoint(0,0x12340002,0x40000000); // Context 1: lower 2, upper 3.
    endpoint(1,0x12340003,0x40400000);put(tree+0x14,1);
    endpoint(2,0x1233fffc,0x40800000);put(tree+0x10,2); // Context -2: scalar 4.
    float pair[2]={99,98};
    check(raven_xml2_talent_value_read(read_guest,nullptr,provider,1,0x1234,pair)==RAVEN_FOUND&&
          pair[0]==2&&pair[1]==3,"Live native range lookup failed");
    raven_xml2_affecter_node value_node={};value_node.is_reference=1;value_node.native_value_id=0x1234;
    check(raven_xml2_affecter_evaluate(read_guest,nullptr,&runtime,provider,0x2200,&value_node,0,0,0,0,pair)==RAVEN_FOUND&&
          pair[0]==2&&pair[1]==3,"Native eligible reference did not read actor endpoints");
    value_node.native_value_id=0x1235;
    check(raven_xml2_affecter_evaluate(read_guest,nullptr,&runtime,provider,0x2200,&value_node,0,0,0,0,pair)==RAVEN_MISSING&&
          pair[0]==2&&pair[1]==3,"Missing native reference published guessed values");
    check(raven_xml2_affecter_value(read_guest,nullptr,0,8,0,&value_node,0,pair)==RAVEN_FOUND&&
          pair[0]==0&&pair[1]==0,"Actorless reference accessed provider");
    value_node.is_reference=0;value_node.literal[0]=std::numeric_limits<float>::quiet_NaN();value_node.literal[1]=-3;
    check(raven_xml2_affecter_value(nullptr,nullptr,0,8,0,&value_node,-0.0f,pair)==RAVEN_FOUND&&
          std::isnan(pair[0])&&pair[1]==-3,"Literal endpoints sanitized or negative zero bypassed evaluation");
    check(raven_xml2_affecter_value(nullptr,nullptr,0,8,0,&value_node,7,pair)==RAVEN_FOUND&&
          pair[0]==7&&pair[1]==7,"Inherited value failed to bypass literal");
    check(raven_xml2_affecter_value(nullptr,nullptr,0,8,0,&value_node,std::numeric_limits<float>::quiet_NaN(),pair)==RAVEN_FOUND&&
          std::isnan(pair[0])&&std::isnan(pair[1]),"Inherited NaN evaluated literal");
    value_node.scope_pool=scopes;value_node.scope_handle=0x181;value_node.sharing=1;
    put(scopes+0x1038+4,0x181);pair[0]=9;pair[1]=10;
    check(raven_xml2_affecter_evaluate(read_guest,nullptr,&runtime,0,0,&value_node,0,1,0,7,pair)==RAVEN_MISSING&&
          pair[0]==9&&pair[1]==10,"Rejected eligibility evaluated/published inherited value");
    check(raven_xml2_talent_value_read(read_guest,nullptr,provider,-2,0x1234,pair)==RAVEN_FOUND&&
          pair[0]==4&&pair[1]==4,"Signed context/scalar fallback failed");
    check(raven_xml2_talent_value_read(read_guest,nullptr,provider,2,0x1234,pair)==RAVEN_MISSING&&
          pair[0]==4&&pair[1]==4,"Missing context changed caller output");
    put(tree+0x1f98,0x7fc00000);
    check(raven_xml2_talent_value_read(read_guest,nullptr,provider,1,0x1234,pair)==RAVEN_FOUND&&
          pair[0]==0&&pair[1]==3,"Invalid lower discarded valid upper");
    put(tree+0x1f98,0x40000000);put(tree+0x1f9c,0x7f800000);
    check(raven_xml2_talent_value_read(read_guest,nullptr,provider,1,0x1234,pair)==RAVEN_FOUND&&
          pair[0]==2&&pair[1]==0,"Invalid upper discarded valid lower");
    put(tree+4,1); // Upper exists but lower does not: do not synthesize lower.
    check(raven_xml2_talent_value_read(read_guest,nullptr,provider,1,0x1234,pair)==RAVEN_MISSING&&
          pair[0]==2&&pair[1]==0,"Upper-only entry invented a range");
    put(tree+4,399);endpoint(399,0x7ffefffc,0x40a00000);
    check(raven_xml2_talent_value_read(read_guest,nullptr,provider,-2,0x7fff,pair)==RAVEN_FOUND&&
          pair[0]==5&&pair[1]==5,"Final live-value slot failed");
    put(tree+399*16+0x14,399);
    check(raven_xml2_talent_value_read(read_guest,nullptr,provider,-2,0x7fff,pair)==RAVEN_INVALID&&
          pair[0]==5&&pair[1]==5,"Cyclic upper lookup published partial range");
    put(tree+4,400);
    check(raven_xml2_talent_value_read(read_guest,nullptr,provider,1,0x1234,pair)==RAVEN_INVALID,
          "Out-of-bounds live-value node accepted");
    check(raven_xml2_talent_value_read(read_guest,nullptr,provider,1,0,pair)==RAVEN_INVALID,
          "Zero native value ID accepted");
    put(affecter_pool+0x3c78+4,0x401);put(affecter_pool+0x3c78+8,0x402);
    put(affecter_pool+0x3c44,6);
    put(affecter_pool+4+0x24+0x1c,0x402);put(affecter_pool+4+0x24+0x20,affecter_pool);
    auto native_affecters=raven::read_xml2_definition_affecters(read_guest,nullptr,definitions,0x3ff);
    check(native_affecters&&native_affecters->size()==2&&native_affecters->at(0).native_value_id==0x1234,
          "Definition-to-affecter traversal failed");
    check(!raven::read_xml2_definition_affecters(read_guest,nullptr,definitions,0x2ff),
          "Missing definition confused with empty affecter list");
    auto b=xml1::compile_xmlb("<affecter attribute='damage' affect_type='scale' level='2' scope_damage='dmg_fire'/>");
    auto nodes=xml1::parse_xmlb(b.data(),(unsigned)b.size());
    auto fire=raven::read_xml2_affecter(nodes[0]);
    auto second=fire;second.level="0.5";
    std::vector<raven::AffecterQueryEntry> entries{{&fire,true,std::nullopt,0,true,true},
                                                {&second,true,std::nullopt,0,true,true}};
    auto result=empty.query_damage_affecters(values,entries,57,1,0x10000);
    check(result&&result->applied==2&&result->endpoints[0]==1,"Ordered query failed to compose multipliers");
    result=empty.query_damage_affecters(values,entries,57,1,0x8000);
    check(result&&result->applied==0&&result->endpoints[0]==1,"Fire modifiers leaked to energy");
    second.scopes.emplace_back("scope_node","power1");
    check(!empty.query_damage_affecters(values,entries,57,1,0x10000),"Unresolved scope published a partial query");
    entries[1].eligible=false;
    result=empty.query_damage_affecters(values,entries,57,1,0x10000);
    check(result&&result->applied==1&&result->endpoints[0]==2,"Ineligible modifier inspected/applied");
    fire.share_filter=2;
    result=empty.query_damage_affecters(values,entries,57,1,0x10000);
    check(result&&result->applied==0,"Shared-only modifier applied to owner");
    entries[0].owner_matches=false;
    result=empty.query_damage_affecters(values,entries,57,1,0x10000);
    check(result&&result->applied==1,"Shared-only modifier rejected matching context");
    fire.level="%not_registered";
    auto unrestricted=second;unrestricted.scopes.clear();unrestricted.share_filter=1;
    std::vector<raven::AffecterQueryEntry> unscoped{{&unrestricted,true,std::nullopt,0,true,false}};
    auto unscoped_result=empty.query_damage_affecters(values,unscoped,57,1,0);
    check(unscoped_result&&unscoped_result->applied==1,"Declaration path filtered sharing without scope");
    unrestricted.attribute_id=8;unrestricted.scopes={{"scope_damage","dmg_fire"}};
    auto inverted=empty.query_damage_affecters(values,unscoped,8,1,0x10000);
    check(inverted&&inverted->applied==0,"Sharing rejection was inverted");
    unscoped[0].owner_matches=true;
    inverted=empty.query_damage_affecters(values,unscoped,8,1,0x8000);
    check(inverted&&inverted->applied==1,"Declaration path omitted attribute 8 inversion");
    result=empty.query_damage_affecters(values,entries,57,0,0x10000);
    check(result&&result->applied==0&&result->endpoints[0]==0,"Wrong mode evaluated operand");
    check((argc-1)%2==0,"Supply talent-text/powerstyle-text pairs");
    unsigned declarations=0,queries=0;
    for(int i=1;i<argc;i+=2) {
        auto talent=resource(argv[i]);
        auto defs=raven::load_talents(talent.data(),(unsigned)talent.size());
        raven::TalentBindings registry(defs);raven::TalentContextValues live;
        for(const auto& d:defs){registry.populate(live,1,d.name,1);registry.populate(live,2,d.name,20);}
        auto ps=resource(argv[i+1]);auto roots=xml1::parse_xmlb(ps.data(),(unsigned)ps.size());
        std::vector<raven::AffecterDeclaration> affecters;
        for(const auto& root:roots)collect(root,affecters);
        for(const auto& d:affecters) {
            check(d.attribute_id.has_value(),"Original affecter attribute unresolved");
            for(int16_t context:{1,2}) {
                // Explicit fixture list membership, but real guest-layout
                // handle/type/context decoding. Not live combat validation.
                guest_fixture(context);
                auto entry=raven::read_xml2_powerup_query_entry(read_guest,nullptr,
                    0x400,7,8,0,32,0x500,d,true,true,d.share_filter!=2);
                check(entry.eligible&&entry.context==context,"Native source context was not selected");
                std::vector<raven::AffecterQueryEntry> one{entry};
                auto q=registry.query_damage_affecters(live,one,*d.attribute_id,d.mode,0xffffffff);
                check(q&&q->applied==1,"Original declaration failed composed query");
                auto retired=raven::read_xml2_powerup_query_entry(nullptr,nullptr,
                    0,0,0,0,0,0,d,false,true,true);
                check(!retired.eligible,"Retired fixture accessed or published guest state");
                ++queries;
            }
            if(!d.level.empty()&&d.level[0]=='%') {
                put(provider,0x49e410);put(provider+8,0);
                put(provider+0x14,0x3fffffff);put(provider+0x18,0x3fffffff);
                std::memset(guest+provider+0x1c,0,20);
                std::memcpy(guest+provider+0x1c,d.level.data()+1,d.level.size()-1);
                guest[provider+0x2a80]=0x34;guest[provider+0x2a81]=0x12;
                check(registry.native_xml2_value_id(read_guest,nullptr,provider,d.level)==0x1234&&
                      registry.bind(d.level).value_id!=0x1234,"Native/shared identity spaces mixed");
                put(tree+4,0);endpoint(0,0x12340002,0x40000000);
                auto native_range=registry.native_xml2_value(read_guest,nullptr,provider,d.level,1);
                check(native_range&&(*native_range)[0]==2&&(*native_range)[1]==2,
                      "Symbol-to-live-value bridge failed");
                check(!registry.native_xml2_value(read_guest,nullptr,provider,d.level,2),
                      "Native bridge leaked another actor's value");
                guest[provider+0x2a80]=0x35;
                check(registry.native_xml2_value_id(read_guest,nullptr,provider,d.level)==0x1235,
                      "Registry reload retained cached native ID");
                check(!registry.native_xml2_value(read_guest,nullptr,provider,d.level,1),
                      "Rebound symbol retained old native endpoints");
                endpoint(0,0x12350002,0x40800000);
                native_range=registry.native_xml2_value(read_guest,nullptr,provider,d.level,1);
                check(native_range&&(*native_range)[0]==4&&(*native_range)[1]==4,
                      "Rebound symbol did not read fresh native endpoints");
                auto literal=d;literal.level="2";
                std::vector<raven::AffecterQueryEntry> absent{{&literal,true,1,0,true,d.share_filter!=2},
                                                          {&d,true,3,0,true,d.share_filter!=2}};
                check(!registry.query_damage_affecters(live,absent,*d.attribute_id,d.mode,0xffffffff),
                      "Missing actor publication exposed a partial aggregate");
            }
            ++declarations;
        }
    }
    guest_fixture(1);
    put(pool,0x4a6be8);put(pool+0x3838,0x7f);put(pool+0x3638+4,0x81);put(pool+0x3624,2);
    put(first,0x4a6af4);put(first+0x20,0x301);put(first+0x24,definitions);
    put(0x2200+0x21c,0x81);put(0x2200+0x220,pool);put(0x2200+0x214,1u<<25);
    put(definitions,0x4a7d6c);put(definitions+0x9058,0xff);
    put(definitions+0x8c58+4,0x301);put(definitions+0x8c34,2);put(0x1878,0x147c20);
    const unsigned def=definitions+4+0x88;
    put(def,0x1800);put(def+0xc,0x401);put(def+0x10,affecter_pool);
    put(affecter_pool,0x4a6a58);put(affecter_pool+0x4278,0x1ff);
    put(affecter_pool+0x3c78+4,0x401);put(affecter_pool+0x3c78+8,0x402);put(affecter_pool+0x3c44,6);
    const unsigned af1=affecter_pool+4+0x24,af2=affecter_pool+4+0x48;
    for(unsigned af:{af1,af2}) {put(af,0x4a6a6c);guest[af+0x10]=57;guest[af+0x11]=1;}
    put(af1+4,0x40000000);put(af1+8,0x40000000);put(af1+0x1c,0x402);put(af1+0x20,affecter_pool);
    put(af2+4,0x40400000);put(af2+8,0x40800000);
    auto native_query=[&](){return raven::query_xml2_native_affecters(read_guest,nullptr,runtime,provider,0,0x2200,57,1,0);};
    auto nq=native_query();
    check(nq.native_return&&nq.applied==2&&nq.endpoints[0]==6&&nq.endpoints[1]==8,
          "Native collection traversal/range aggregation failed");
    put(0x2200+0x214,0);put(def,0);
    nq=native_query();check(!nq.native_return&&nq.applied==0&&nq.endpoints[0]==1,
          "Attribute bitmask did not short-circuit definition reads");
    put(0x2200+0x214,1u<<25);put(def,0x1800);
    guest[af2+0x11]=0;nq=native_query();
    check(nq.applied==1&&nq.endpoints[0]==2,"Native mode filtering failed");guest[af2+0x11]=1;
    put(af2+0x1c,0x401);put(af2+0x20,affecter_pool);
    bool query_cycle=false;try{native_query();}catch(const std::runtime_error&){query_cycle=true;}
    check(query_cycle,"Native collection accepted cyclic affecters");
    put(af2+0x1c,0);put(af2+0x20,0);
    put(first+4,0x82);put(first+8,pool);put(pool+0x3638+8,0x82);put(pool+0x3624,6);
    put(second_node,0x4a6af4); // Missing next definition: native false, retaining partial endpoints.
    nq=native_query();check(!nq.native_return&&nq.applied==2&&nq.endpoints[0]==6,
          "Native early-false/partial endpoints behavior lost");
    std::cout<<"PASS native collection and composed affecter query; "<<declarations<<" original declarations, "<<queries
             <<" rank-context queries. Component validation only, not gameplay.\n";
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
