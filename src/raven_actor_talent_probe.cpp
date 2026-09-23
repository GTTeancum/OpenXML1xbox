#include "raven_actor_talent_probe.h"
#include "raven_actor_talent.h"
#include "raven_talent_binding.h"
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <stdexcept>

// Optional diagnostic: consume an original XML2 resource against a live
// XML1 actor at attack dispatch. It never replaces an operand or writes
// guest/save state. Keep test-resource loading off the normal gameplay path.
extern "C" void raven_probe_actor_talent(raven_guest_read read,void *context,uint32_t system,uint32_t actor) {
    static bool checked=false,enabled=false;
    static std::vector<raven::TalentDefinition> definitions;
    static std::map<std::string,raven::TalentBinding> operands;
    static std::string selected;
    static unsigned calls=0;
    static std::map<uint32_t,raven::TalentResult> observed;
    if(!checked) {
        checked=true;
        const char *path=std::getenv("XML1_TEST_XML2_TALENTS");
        const char *name=std::getenv("XML1_TEST_XML2_TALENT");
        if(!path||!name)return;
        try {
            std::ifstream file(path,std::ios::binary);
            if(!file)throw std::runtime_error("Cannot open original talent resource");
            std::string bytes((std::istreambuf_iterator<char>(file)),{});
            definitions=raven::load_talents(bytes.data(),(unsigned)bytes.size());
            raven::TalentBindings bindings(definitions);
            selected=name;
            for(const auto& definition:definitions)if(definition.name==selected) {
                for(const auto& value:definition.values)
                    operands.emplace(value.first,bindings.bind("%"+value.first));
                enabled=true;
            }
            if(!enabled)throw std::runtime_error("Selected talent absent from resource");
        }catch(const std::exception& e){std::fprintf(stderr,"[RAVEN ACTOR TALENT FAIL] %s\n",e.what());return;}
    }
    if(!enabled||calls>=64)return;
    // Early combat can belong to NPCs. Two global samples could exhaust the
    // probe before the imported hero attacks. Observe distinct actor/status
    // transitions, keeping this diagnostic read-only and bounded.
    if(operands.empty())return;
    float preview[2];
    auto state=operands.begin()->second.evaluate(read,context,system,actor,preview);
    auto prior=observed.find(actor);
    if(prior!=observed.end()&&prior->second==state)return;
    observed[actor]=state;++calls;
    for(const auto& definition:definitions)if(definition.name==selected) {
        for(const auto& value:definition.values) {
            float result[2];
            auto status=operands.at(value.first).evaluate(read,context,system,actor,result);
            if(status==raven::TalentResult::evaluated)
                std::fprintf(stderr,"[RAVEN ACTOR TALENT EVALUATED] actor=%08X talent=%s value=%s result=%.9g,%.9g\n",
                    actor,selected.c_str(),value.first.c_str(),result[0],result[1]);
            else std::fprintf(stderr,"[RAVEN ACTOR TALENT UNRESOLVED] actor=%08X talent=%s value=%s status=%d\n",
                    actor,selected.c_str(),value.first.c_str(),(int)status);
        }
    }
}
