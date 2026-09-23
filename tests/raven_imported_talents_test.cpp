#include "raven_imported_talents.h"
#include "raven_power_bindings_guest.h"
#include <fstream>
#include <iostream>
#include <chrono>
static void check(bool value,const char* message){if(!value)throw std::runtime_error(message);}
int main(int argc,char** argv){try {
    namespace fs=std::filesystem;
    auto root=fs::temp_directory_path()/("xml1-imported-talents-"+std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    fs::create_directories(root/"data"/"talents");
    {std::ofstream stock(root/"data"/"shared_talents.engb",std::ios::binary);stock<<"must not be parsed as an XML2 catalog";}
    check(!raven::load_imported_talents(root,"eng"),"Empty install activated imports");
    auto resource=xml1::compile_xmlb("<talents><talent name='test'><talentvalues><talentvalue name='test_damage' level='1' value='3.5'/></talentvalues></talent></talents>");
    auto put=[&](const fs::path& name){std::ofstream f(root/"data"/"talents"/name,std::ios::binary);f.write((const char*)resource.data(),resource.size());};
    put("test.engb");put("test.xmlb");put("test.frab");
    auto profile=raven::load_imported_talents(root,"eng");
    check(profile&&profile->bind("%test_damage").definition->name=="test","Selected-language resource not bound");
    check(!raven::load_imported_talents(root,"ita"),"Unexpected language fallback");
    char error[1024]={};
    check(raven_imported_talents_init(root.string().c_str(),"eng",error,sizeof(error)),error);
    fs::create_directories(root/"data"/"powerstyles");
    auto put_xml=[&](const fs::path& path,const std::string& text){
        auto bytes=xml1::compile_xmlb(text);std::ofstream file(root/"data"/path,std::ios::binary);
        file.write((const char*)bytes.data(),bytes.size());
    };
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
    put("duplicate.engb");
    check(!raven_imported_talents_init(root.string().c_str(),"eng",error,sizeof(error)),"Duplicate publication accepted");
    check(raven::imported_talents()==before,"Failed load replaced active catalog");
    check(!raven_imported_talents_init(root.string().c_str(),"../",error,sizeof(error)),"Invalid language accepted");
    for(int i=1;i<argc;++i){
        auto original=raven::load_imported_talents(fs::u8path(argv[i]),"eng");
        check(bool(original),"Original character resources not loaded");
        std::cout<<"PASS original imported talent resource: "<<argv[i]<<"\n";
    }
    std::cout<<"PASS imported catalog: language selection, no shared-file substitution, duplicate rejection, atomic publication\n";
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<"\n";return 1;}}
