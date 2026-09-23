#include "raven_imported_talents.h"
#include "raven_power_bindings.h"
#include "raven_power_bindings_guest.h"
#include <cstring>
#include <set>
#include <algorithm>
#include <fstream>
#include <iterator>
#include <cstdio>
#include <stdexcept>

namespace raven {
namespace {
std::shared_ptr<const TalentBindings> active;
std::shared_ptr<const PowerBindings> powers;
std::set<std::string> automatic_icons;
std::string folded(std::string value) {
    for(char& c:value){if(c>='A'&&c<='Z')c+=32;if(c=='\\')c='/';}return value;
}
}
std::shared_ptr<const TalentBindings> imported_talents(){return active;}
std::shared_ptr<const TalentBindings> load_imported_talents(
    const std::filesystem::path& root,const std::string& language) {
    if(language.size()!=3||language.find_first_not_of("abcdefghijklmnopqrstuvwxyz")!=std::string::npos)
        throw std::runtime_error("Invalid imported talent language");
    const auto directory=root/"data"/"talents";
    if(!std::filesystem::exists(directory))return {};
    std::vector<std::filesystem::path> files;
    const std::string extension="."+language+"b";
    for(const auto& entry:std::filesystem::directory_iterator(directory)) {
        if(!entry.is_regular_file())continue;
        auto ext=entry.path().extension().string();
        std::transform(ext.begin(),ext.end(),ext.begin(),[](unsigned char c){return c>='A'&&c<='Z'?c+32:c;});
        if(ext==extension)files.push_back(entry.path());
    }
    std::sort(files.begin(),files.end());
    std::vector<TalentDefinition> definitions;
    for(const auto& path:files) {
        try {
            std::ifstream file(path,std::ios::binary);
            if(!file)throw std::runtime_error("Cannot open resource");
            std::vector<char> bytes((std::istreambuf_iterator<char>(file)),{});
            if(file.bad()||bytes.size()>UINT32_MAX)throw std::runtime_error("Cannot read resource");
            auto loaded=load_talents(bytes.data(),(unsigned)bytes.size());
            definitions.insert(definitions.end(),std::make_move_iterator(loaded.begin()),std::make_move_iterator(loaded.end()));
        }catch(const std::exception& e){throw std::runtime_error(path.string()+": "+e.what());}
    }
    if(definitions.empty())return {};
    // Constructor diagnoses collisions across resources before publishing.
    return std::make_shared<const TalentBindings>(std::move(definitions));
}
}
extern "C" int raven_imported_talents_init(const char *root,const char *language,char *error,unsigned size) {
    try {
        if(!root||!language)throw std::runtime_error("Missing imported talent root/language");
        auto next=raven::load_imported_talents(std::filesystem::u8path(root),language);
        std::shared_ptr<const raven::PowerBindings> power_next;
        std::set<std::string> icons_next,protected_icons;
        auto roster=std::filesystem::u8path(root)/"data"/(std::string("herostat.")+language+"b");
        if(std::filesystem::exists(roster)) {
            std::ifstream file(roster,std::ios::binary);
            if(!file)throw std::runtime_error("Cannot open compiled herostat for power bindings");
            std::vector<char> bytes((std::istreambuf_iterator<char>(file)),{});
            if(file.bad()||bytes.size()>UINT32_MAX)throw std::runtime_error("Cannot read compiled herostat");
            auto roots=xml1::parse_xmlb(bytes.data(),(unsigned)bytes.size());
            power_next=std::make_shared<const raven::PowerBindings>(roots);
            for(const auto& character:roots[0].children) {
                bool imported=false;std::string style;
                for(const auto& attr:character.attrs) {
                    if(attr.first=="power1"||attr.first=="power2"||attr.first=="power3"||attr.first=="power4")imported=true;
                    if(attr.first=="powerstyle")style=attr.second;
                }
                if(style.empty())continue;
                if(style.find_first_of("/\\:")!=std::string::npos||style=="..")
                    throw std::runtime_error("Invalid imported powerstyle name");
                auto path=std::filesystem::u8path(root)/"data"/"powerstyles"/(style+"."+language+"b");
                if(!std::filesystem::exists(path))continue;
                std::ifstream resource(path,std::ios::binary);
                std::vector<char> data((std::istreambuf_iterator<char>(resource)),{});
                if(resource.bad()||data.size()>UINT32_MAX)throw std::runtime_error("Cannot read imported powerstyle");
                auto styles=xml1::parse_xmlb(data.data(),(unsigned)data.size());
                for(const auto& node:styles) {
                    if(raven::folded(node.name)!="powerstyle")continue;
                    bool explicit_grid=false;std::string texture;
                    for(const auto& attr:node.attrs) {
                        auto key=raven::folded(attr.first);
                        if(key=="iconcolumns"||key=="iconrows")explicit_grid=true;
                        if(key=="iconfile")texture=raven::folded(attr.second);
                    }
                    if(!texture.empty()) {
                        if(imported&&!explicit_grid)icons_next.insert(texture);
                        else protected_icons.insert(texture);
                    }
                }
            }
        }
        for(const auto& texture:protected_icons)icons_next.erase(texture);
        raven::active=std::move(next);
        raven::powers=std::move(power_next);
        raven::automatic_icons=std::move(icons_next);
        return 1;
    }catch(const std::exception& e){if(error&&size)std::snprintf(error,size,"%s",e.what());return 0;}
}
extern "C" int raven_imported_talents_active(void){return !!raven::imported_talents();}
extern "C" int raven_power_binding_name(const char *character,unsigned action,char output[20]) {
    if(!character||!output||!raven::powers)return 0;
    auto name=raven::powers->resolve(character,action,true);
    if(!name)return 0;
    std::memcpy(output,name->c_str(),name->size()+1);return 1;
}
extern "C" int raven_power_icon_automatic(const char *texture) {
    return texture&&raven::automatic_icons.count(raven::folded(texture));
}
