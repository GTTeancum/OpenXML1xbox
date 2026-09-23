#include "raven_shared_powerups.h"
#include <stdexcept>
#include "raven_shared_powerups_runtime.h"
#include "raven_powerup_metadata.h"
#include <filesystem>
#include <fstream>
#include <iterator>
#include <memory>
#include <cstdio>

namespace raven {
namespace {
std::string fold(std::string value) {
    for(char& c:value)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
    return value;
}

}
SharedPowerups::SharedPowerups(const std::vector<xml1::XmlNode>& roots) {
    if(roots.size()!=1||fold(roots[0].name)!="powerups")
        throw std::runtime_error("Expected one shared powerups root");
    for(const auto& node:roots[0].children) {
        if(fold(node.name)!="powerup")
            throw std::runtime_error("Unexpected shared powerups child: "+node.name);
        std::string tag;
        unsigned count=0;
        for(const auto& field:node.attrs)if(fold(field.first)=="tag_name") {
            tag=field.second;++count;
        }
        if(count!=1||tag.empty())
            throw std::runtime_error("Shared powerup requires one nonempty tag_name");
        // Refuse ambiguous authoring instead of silently choosing one template.
        if(!entries_.emplace(fold(tag),node).second)
            throw std::runtime_error("Duplicate shared powerup: "+tag);
    }
}
const xml1::XmlNode* SharedPowerups::find(const std::string& tag) const {
    auto it=entries_.find(fold(tag));
    return it==entries_.end()?nullptr:&it->second;
}
}

namespace {
// Published before guest threads start; never modified while definitions load.
std::unique_ptr<const raven::SharedPowerups> active_shared;
}
extern "C" int raven_shared_powerups_init(const char *root) {
    try {
        if(!root)throw std::runtime_error("Missing shared powerup resource root");
        const auto path=std::filesystem::u8path(root)/"data"/"shared_powerups.xmlb";
        if(!std::filesystem::exists(path)){active_shared.reset();return 1;}
        std::ifstream file(path,std::ios::binary);
        if(!file)throw std::runtime_error("Cannot open shared_powerups.xmlb");
        const auto length=std::filesystem::file_size(path);
        if(length>16*1024*1024)throw std::runtime_error("Oversized shared powerups resource");
        std::string bytes((std::istreambuf_iterator<char>(file)),{});
        if(file.bad())throw std::runtime_error("Cannot read shared powerups resource");
        auto next=std::make_unique<const raven::SharedPowerups>(xml1::parse_xmlb(bytes.data(),(unsigned)bytes.size()));
        active_shared=std::move(next);return 1;
    }catch(const std::exception& e){std::fprintf(stderr,"[SHARED POWERUP ERROR] %s\n",e.what());return 0;}
}
extern "C" int raven_shared_powerups_apply(uint32_t definition,const char *tag,raven_shared_attribute attribute) {
    try {
        if(!definition||!tag||!attribute)throw std::runtime_error("Invalid shared powerup binding");
        const auto* node=active_shared?active_shared->find(tag):nullptr;
        if(!node)throw std::runtime_error(std::string("Missing shared powerup: ")+tag);
        // XML2 F7010 chooses the shared definition, then supplies event-local
        // duration (event+24) and damage (event+30) at application. XML1 owns
        // definitions per event: load shared defaults first, then its ordinary
        // parser supplies the event's overrides. No authored file is flattened
        // and no shared template is mutated by a particular actor or event.
        for(const auto& field:node->attrs)
            if(field.first!="tag_name")attribute(definition,field.first.c_str(),field.second.c_str());
        for(const auto& child:node->children) {
            const bool effect=child.name=="special_fx",affecter=child.name=="affecter";
            if(!effect&&!affecter)throw std::runtime_error("Unsupported shared powerup child: "+child.name);
            const auto index=effect?raven_xml1_powerup_effect_begin(definition):raven_xml1_powerup_affecter_begin(definition);
            for(const auto& field:child.attrs) {
                if(effect)raven_xml1_powerup_effect_attribute(definition,index,field.first.c_str(),field.second.c_str());
                else raven_xml1_powerup_affecter_attribute(definition,index,field.first.c_str(),field.second.c_str());
            }
        }
        std::fprintf(stderr,"[SHARED POWERUP] definition=%08X tag=%s\n",definition,tag);
        return 1;
    }catch(const std::exception& e){std::fprintf(stderr,"[SHARED POWERUP ERROR] %s\n",e.what());return 0;}
}
