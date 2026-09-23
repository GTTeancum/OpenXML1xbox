#include "raven_shared_powerups.h"
#include "raven_shared_powerups_runtime.h"
#include "raven_powerup_metadata.h"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>

static void check(bool ok,const char* message) {
    if(!ok)throw std::runtime_error(message);
}
static raven::SharedPowerups load(const std::string& text) {
    auto bytes=xml1::compile_xmlb(text);
    return raven::SharedPowerups(xml1::parse_xmlb(bytes.data(),(unsigned)bytes.size()));
}
static bool equal(const xml1::XmlNode& a,const xml1::XmlNode& b) {
    if(a.name!=b.name||a.attrs!=b.attrs||a.children.size()!=b.children.size())return false;
    for(size_t i=0;i<a.children.size();++i)if(!equal(a.children[i],b.children[i]))return false;
    return true;
}
int wmain(int argc,wchar_t** argv) {
    try {
        auto data=load("<powerups><powerup tag_name='shared_test' class='harming' damage='%original' life='3'>"
            "<special_fx effect='base/one' bolt='Bip01 Head'/><special_fx effect='base/one' bolt='Bip01 Spine2'/>"
            "<affecter attribute='defense_rating' level='0.2'/></powerup></powerups>");
        check(data.size()==1&&!data.find("missing"),"Lookup exclusions");
        const auto* node=data.find("SHARED_TEST");
        check(node&&node->children.size()==3,"Template children lost");
        check(node->attrs[2].second=="%original","Symbol altered");
        check(node->children[0].attrs[1].second=="Bip01 Head"&&
              node->children[1].attrs[1].second=="Bip01 Spine2","Repeated effects collapsed");
        for(const auto* invalid:{"<other/>","<powerups><unknown/></powerups>",
            "<powerups><powerup/></powerups>","<powerups><powerup tag_name=''/></powerups>",
            "<powerups><powerup tag_name='same'/><powerup tag_name='SAME'/></powerups>"}) {
            bool rejected=false;try{load(invalid);}catch(const std::exception&){rejected=true;}
            check(rejected,"Invalid template accepted");
        }
        if(argc>1) {
            std::ifstream file(std::filesystem::path(argv[1]),std::ios::binary);
            check(bool(file),"Cannot open original PC shared powerups");
            std::string bytes((std::istreambuf_iterator<char>(file)),{});
            auto roots=xml1::parse_xmlb(bytes.data(),(unsigned)bytes.size());
            raven::SharedPowerups original(roots);
            for(const auto& child:roots[0].children) {
                std::string tag;
                for(const auto& attr:child.attrs)if(attr.first=="tag_name")tag=attr.second;
                auto* saved=original.find(tag);
                check(saved&&equal(*saved,child),"Original definition changed");
            }
            check(original.find("shared_stunned")&&original.find("shared_radiated"),"Required original templates missing");
            const auto root=std::filesystem::path(argv[1]).parent_path().parent_path().u8string();
            check(raven_shared_powerups_init(root.c_str())==1,"Runtime catalog load");
            const uint32_t definition=0x123456;
            raven_xml1_powerup_metadata_reset(definition);
            check(raven_shared_powerups_apply(definition,"shared_radiated",raven_xml1_powerup_metadata_attribute)==1,"Runtime shared binding");
            auto fields=raven::xml1_powerup_metadata_snapshot(definition);
            check(fields&&fields->at("class")=="harming"&&fields->at("damagetype")=="dmg_radiation","Shared class/type lost");
            raven_xml1_powerup_metadata_attribute(definition,"life","%original_life");
            raven_xml1_powerup_metadata_attribute(definition,"damage","%original_damage");
            fields=raven::xml1_powerup_metadata_snapshot(definition);
            check(fields->at("life")=="%original_life"&&fields->at("damage")=="%original_damage","Event overrides lost");
            auto effects=raven::xml1_powerup_effects_snapshot(definition);
            check(effects.size()==1&&effects[0].at("effect")=="effects/base/hit/hit_radiation","Shared effect path changed");
            raven_xml1_powerup_metadata_clone(definition+1,definition);
            raven_xml1_powerup_metadata_retire(definition);
            check(raven::xml1_powerup_metadata_snapshot(definition+1)->at("damage")=="%original_damage","Clone lost overrides");
            check(raven::xml1_powerup_effects_snapshot(definition+1).size()==1,"Clone lost effect");
            raven_xml1_powerup_metadata_retire(definition+1);
            std::cout<<"Preserved "<<original.size()<<" original shared definitions. ";
        }
        std::cout<<"PASS symbols, ordered fields/children, duplicate effects, missing lookup and malformed authoring.\n";
        return 0;
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
