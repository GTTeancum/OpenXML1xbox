#include "engine/progression/raven_imported_talents.h"
#include "engine/powers/raven_power_bindings_guest.h"
#include "engine/powers/raven_power_selection_save.h"
#include <fstream>
#include <iostream>
#include <chrono>
static void check(bool value,const char* message){if(!value)throw std::runtime_error(message);}
int main(int argc,char** argv){try {
    namespace fs=std::filesystem;
    auto root=fs::temp_directory_path()/("xml1-imported-talents-"+std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    fs::create_directories(root/"data"/"talents");
    auto put_xml=[&](const fs::path& path,const std::string& text){
        auto bytes=xml1::compile_xmlb(text);std::ofstream file(root/"data"/path,std::ios::binary);
        file.write((const char*)bytes.data(),bytes.size());
    };
    put_xml("shared_talents.engb","<Talents><Talent name='stock' description='$EP'><level/></Talent></Talents>");
    check(!raven::load_imported_talents(root,"eng"),"Empty install activated imports");
    auto resource=xml1::compile_xmlb("<talents><talent name='test' icon_texture='textures/ui/passive.png'><talentvalues><talentvalue name='test_damage' level='1' value='3.5'/></talentvalues></talent></talents>");
    auto put=[&](const fs::path& name){std::ofstream f(root/"data"/"talents"/name,std::ios::binary);f.write((const char*)resource.data(),resource.size());};
    put("test.engb");put("test.xmlb");put("test.frab");
    auto profile=raven::load_imported_talents(root,"eng");
    check(profile&&profile->bind("%test_damage").definition->name=="test","Selected-language resource not bound");
    check(!raven::load_imported_talents(root,"ita"),"Unexpected language fallback");
    char error[1024]={};
    check(raven_imported_talents_init(root.string().c_str(),"eng",error,sizeof(error)),error);
    check(raven_power_icon_automatic("textures/ui/passive.png"),"Talent-only passive atlas not selected");
    check(raven_talent_icon_automatic("test"),"Imported talent menu grid not selected");
    check(!raven_talent_icon_automatic("stock"),"Stock talent menu grid changed");
    fs::create_directories(root/"data"/"powerstyles");
    put_xml("shared_talents.engb","<Talents><Talent name='stock' description='$EP'><level/></Talent>"
        "<talent name='shared_import' icon_texture='textures/ui/shared_import.png'>"
        "<talentvalues><talentvalue name='shared_regen' level='1' value='1.3'/></talentvalues>"
        "<level count='15'/></talent></Talents>");
    profile=raven::load_imported_talents(root,"eng");
    check(profile->bind("%shared_regen").definition->name=="shared_import","Shared XML2 symbol missing");
    check(profile->definitions().size()==2,"Native shared talents entered XML2 catalog");
    check(raven_imported_talents_init(root.string().c_str(),"eng",error,sizeof(error)),error);
    check(raven_talent_icon_automatic("shared_import")&&!raven_talent_icon_automatic("stock"),
          "Shared talent atlas isolation failed");
    put_xml("herostat.engb","<characters><stats name='Imported' power1='power1' powerstyle='ps_import'/><stats name='Native' powerstyle='ps_native'/></characters>");
    put_xml("powerstyles/ps_import.engb","<PowerStyle iconfile='textures/ui/import.png'/>");
    put_xml("powerstyles/ps_native.engb","<PowerStyle IconFile='textures/ui/native.png' IconColumns='2' IconRows='2'/>");
    check(raven_imported_talents_init(root.string().c_str(),"eng",error,sizeof(error)),error);
    check(raven_power_icon_automatic("Textures\\UI\\IMPORT.png"),"Imported automatic atlas not selected");
    check(!raven_power_icon_automatic("textures/ui/native.png"),"Native atlas changed");
    put_xml("powerstyles/ps_import.engb","<PowerStyle iconfile='textures/ui/import.png' IconColumns='1' IconRows='1'/>");
    check(raven_imported_talents_init(root.string().c_str(),"eng",error,sizeof(error)),error);
    check(!raven_power_icon_automatic("textures/ui/import.png"),"Explicit 1x1 atlas changed");
    put_xml("powerstyles/ps_import.engb","<PowerStyle iconfile='textures/ui/native.png'/>");
    check(raven_imported_talents_init(root.string().c_str(),"eng",error,sizeof(error)),error);
    check(!raven_power_icon_automatic("textures/ui/native.png"),"Shared native atlas changed");
    auto before=raven::imported_talents();
    auto powers=raven::imported_power_bindings();
    check(powers&&powers->rotate("Imported",{{"power1",1,1},{"power2",1,1}},0),"Published power selection did not change");
    unsigned char selections[102];
    check(raven_power_selections_write(selections,sizeof(selections))==102,"C save bridge lost selection");
    check(raven_power_selections_read(nullptr,0)&&powers->changes().empty(),"Legacy load did not clear changed selection");
    check(raven_power_selections_read(selections,sizeof(selections))&&powers->changes().size()==1,"C load bridge lost selection");
    check(!raven_power_selections_write(selections,1)&&powers->changes().size()==1,"Short save mutated selection");
    check(!raven_power_selections_read(selections,101)&&powers->changes().size()==1,"Short load mutated selection");
    put("duplicate.engb");
    check(!raven_imported_talents_init(root.string().c_str(),"eng",error,sizeof(error)),"Duplicate publication accepted");
    check(raven::imported_talents()==before,"Failed load replaced active catalog");
    check(!raven_imported_talents_init(root.string().c_str(),"../",error,sizeof(error)),"Invalid language accepted");
    for(int i=1;i<argc;++i){
        auto original=raven::load_imported_talents(fs::u8path(argv[i]),"eng");
        check(bool(original),"Original character resources not loaded");
        std::cout<<"PASS original imported talent resource: "<<argv[i]<<"\n";
    }
    std::cout<<"PASS imported catalog: language selection, mixed shared resource, native isolation, duplicate rejection, atomic publication\n";
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<"\n";return 1;}}
