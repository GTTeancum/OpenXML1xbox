#include "raven_powerup_metadata.h"
#include "raven_harming_operand.h"
#include "raven_powerup_guest.h"
#include <cstdio>
#include "raven_imported_talents.h"
#include <fstream>
#include <chrono>
extern "C" int raven_startup_catalog_fixture(void) {
    try {
        auto root=std::filesystem::temp_directory_path()/("xml1-energy-startup-"+
            std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
        std::filesystem::create_directories(root/"data"/"talents");
        auto bytes=xml1::compile_xmlb("<talents><talent name='sun_flmthrow'><talentvalues>"
            "<talentvalue name='sun_flmthrow_pwr' level='1' value='6.25'/>"
            "<talentvalue name='sun_flmthrow_pwr' level='15' value='117.25'/>"
            "<talentvalue name='sun_flmthrow_life' level='1' value='3 8'/>"
            "<talentvalue name='sun_flmthrow_life' level='15' value='7 19'/>"
            "<talentvalue name='sun_flmthrow_sdmg' level='1' value='6.25 9.75'/>"
            "<talentvalue name='sun_flmthrow_sdmg' level='15' value='117.25 132.75'/>"
            "<talentvalue name='sun_flmthrow_ft' level='1' value='120'/>"
            "<talentvalue name='sun_flmthrow_ft' level='15' value='240'/>"
            "</talentvalues></talent></talents>");
        {std::ofstream f(root/"data"/"talents"/"sunfire.engb",std::ios::binary);
         f.write((const char*)bytes.data(),bytes.size());}
        auto roster=xml1::compile_xmlb("<characters><stats name='sunfire' power1='power1' power2='power2' power3='power3' power4='power4'/></characters>");
        {std::ofstream f(root/"data"/"herostat.engb",std::ios::binary);
         f.write((const char*)roster.data(),roster.size());}
        char error[1024]={};
        if(!raven_imported_talents_init(root.string().c_str(),"eng",error,sizeof(error)))
            throw std::runtime_error(error);
        return !raven_imported_talents_active();
    }catch(const std::exception& e){std::fprintf(stderr,"Startup catalog fixture: %s\n",e.what());return 1;}
}
extern "C" int raven_harming_native_fixture(raven_guest_read read,uint32_t definition,
    uint32_t powerups,uint32_t talents,uint32_t actor,float expected,int valid) {
    try {
        auto bytes=xml1::compile_xmlb("<talents><talent name='sun_flmthrow'><talentvalues>"
            "<talentvalue name='sun_flmthrow_sdmg' level='1' value='6.25 9.75'/>"
            "<talentvalue name='sun_flmthrow_sdmg' level='15' value='117.25 132.75'/>"
            "</talentvalues></talent></talents>");
        raven::TalentBindings profile(raven::load_talents(bytes.data(),(unsigned)bytes.size()));
        auto bound=raven::bind_xml1_harming_damage(definition,profile);
        if(!bound)return 1;
        float result=-123;
        auto status=bound->evaluate_active(read,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,nullptr,powerups,128,talents,actor,0,0.25,&result);
        return valid ? (status!=raven::TalentResult::evaluated||result!=expected) :
            (status!=raven::TalentResult::invalid_state||result!=-123);
    }catch(const std::exception& e){std::fprintf(stderr,"Harming native fixture: %s\n",e.what());return 1;}
}
extern "C" int raven_powerup_fixture(int stage,uint32_t source,uint32_t destination) {
    const raven::PowerupFields fields={{"class","harming"},{"damage","%sun_flmthrow_sdmg"}};
    if(stage==0){raven::xml1_powerup_metadata_bind(source,fields);return 0;}
    auto a=raven::xml1_powerup_metadata_snapshot(source);
    auto b=raven::xml1_powerup_metadata_snapshot(destination);
    if(stage==4) {
        auto parsed=fields;parsed["attacks_per_second"]="3";
        auto settings=raven::read_xml1_harming_settings(source);
        return a!=parsed||!settings||settings->attacks_per_second!=3||settings->flags!=1;
    }
    if(stage==1)return a!=fields||b!=fields;
    if(stage==2)return bool(a)||b!=fields;
    if(stage==3)return bool(a)||bool(b);
    return 1;
}
