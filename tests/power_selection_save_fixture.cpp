#include "engine/progression/raven_imported_talents.h"
#include <chrono>
#include <fstream>
#include <cstdio>

// Exercise the production C bridge and native section header together with a
// real imported roster. No fake save functions or runtime IDs in the fixture.
extern "C" int power_selection_save_fixture(unsigned phase) {
    try {
        if(phase==0) {
            namespace fs=std::filesystem;
            const auto root=fs::temp_directory_path()/
                ("xml1-selection-save-"+std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
            fs::create_directories(root/"data");
            const auto bytes=xml1::compile_xmlb("<characters><stats name='Imported' power1='power1'/><stats name='Stock'/></characters>");
            {
                std::ofstream file(root/"data/herostat.engb",std::ios::binary);
                file.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());
            }
            char error[1024]={};
            const bool loaded=raven_imported_talents_init(root.string().c_str(),"eng",error,sizeof(error));
            fs::remove_all(root);
            if(!loaded)throw std::runtime_error(error);
            return raven::imported_power_bindings()->rotate("Imported",{{"power1",1,1},{"power2",1,1}},0);
        }
        auto bindings=raven::imported_power_bindings();
        if(!bindings||bindings->resolve("Stock",5,true))return 0;
        const auto* move=bindings->resolve("Imported",5,true);
        return move&&*move==(phase==1?"power1":"power2");
    }catch(const std::exception& e){std::fprintf(stderr,"Selection fixture: %s\n",e.what());return 0;}
}
