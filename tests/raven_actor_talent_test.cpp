#include "raven_actor_talent.h"
#include "raven_talent_binding.h"
#include <cstring>
#include <iostream>
#include <stdexcept>

static unsigned char memory[0x7000];
static void check(bool pass,const char *message) {if(!pass)throw std::runtime_error(message);}
static int read_memory(void*,uint32_t at,void *out,size_t n) {
    if(at>sizeof(memory)||n>sizeof(memory)-at)return 0;
    memcpy(out,memory+at,n);return 1;
}
static void word(unsigned at,unsigned value) {for(unsigned i=0;i<4;++i)memory[at+i]=(unsigned char)(value>>(8*i));}
static void actor(unsigned address,unsigned stats,unsigned packed) {
    word(address+0x2d8,stats-4);word(stats+0x34,0);
    word(stats+0x40,0x3fffffff);word(stats+0x44,0x3fffffff);
    memory[stats+0x48]=107;memory[stats+0x198]=(unsigned char)packed;
}
int main() {
    try {
        auto binary=xml1::compile_xmlb("<talents><talent name='wolv_slash'><talentvalues>"
            "<talentvalue name='test_damage' level='1' value='11 15'/>"
            "<talentvalue name='test_damage' level='15' value='195 217'/>"
            "</talentvalues></talent></talents>");
        auto definitions=raven::load_talents(binary.data(),(unsigned)binary.size());
        auto& definition=definitions[0];
        word(0x108,0);word(0x114,0x3fffffff);word(0x118,0x3fffffff);
        strcpy((char*)memory+0x11c,"wolv_slash");memory[0x1d5c]=107;
        actor(0x2000,0x3000,0xa1);actor(0x4000,0x5000,0xbf);
        float output[2]={-1,-2};
        auto evaluate=[&](unsigned address,const char *symbol="test_damage") {
            return raven::evaluate_xml1_actor(definition,symbol,read_memory,nullptr,0x100,address,output);
        };
        using Result=raven::TalentResult;
        check(evaluate(0x2000)==Result::evaluated&&output[0]==11&&output[1]==15,"Actor one's rank was not used");
        check(evaluate(0x4000)==Result::evaluated&&output[0]==195&&output[1]==217,"Actor two inherited actor one's value");
        raven::TalentBinding cloned;
        {
            raven::TalentBindings bindings(definitions);
            cloned=bindings.bind("%TEST_DAMAGE");
            check(cloned.evaluate(read_memory,nullptr,0x100,0x2000,output)==Result::evaluated&&output[0]==11,
                  "Case-insensitive operand binding failed");
            for(const char *bad:{"test_damage","%","%missing","%test_damage suffix","%01234567890123456789"}) {
                bool rejected=false;
                try{bindings.bind(bad);}catch(const std::runtime_error&){rejected=true;}
                check(rejected,"Invalid or missing operand was silently accepted");
            }
            auto conflicting=definitions;conflicting.push_back(definitions[0]);
            conflicting.back().name="another_hero";
            bool rejected=false;
            try{raven::TalentBindings duplicate(std::move(conflicting));}catch(const std::runtime_error&){rejected=true;}
            check(rejected,"Cross-talent symbol collision was silently accepted");
        }
        // A cloned event's binding outlives its loader, but resolves the
        // current actor each time rather than retaining the first actor.
        check(cloned.evaluate(read_memory,nullptr,0x100,0x4000,output)==Result::evaluated&&output[0]==195,
              "Cloned operand lost ownership or retained another actor's rank");
        memory[0x3198]=0xa0;output[0]=-1;output[1]=-2;
        check(evaluate(0x2000)==Result::unlearned&&output[0]==-1&&output[1]==-2,"Rank zero produced damage");
        check(evaluate(0x4000,"missing")==Result::unknown_value&&output[0]==-1,"Unknown value produced damage");
        definition.name="sun_ignite";
        check(evaluate(0x2000)==Result::unknown_talent,"Unknown talent aliased a native ID");
        definition.name="wolv_slash";
        // Reuse the actor address for another character component, with no
        // notification: the resolver must not cache the old character rank.
        word(0x22d8,0x4ffc);
        check(evaluate(0x2000)==Result::evaluated&&output[0]==195,"Actor reuse retained stale rank");
        word(0x22d8,0);output[0]=-1;
        check(evaluate(0x2000)==Result::invalid_state&&output[0]==-1,"Destroyed actor produced a value");
        check(evaluate(0xfffffff0)==Result::invalid_state,"Address overflow was accepted");
        std::cout<<"Actor talent integration: XMLB -> native name/rank -> curve; ownership, changes, reuse and failures passed\n";
        return 0;
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
