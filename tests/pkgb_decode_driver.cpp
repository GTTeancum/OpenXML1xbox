#include "pkgb_decode.h"
#include <filesystem>
#include <fstream>
#include <vector>
#include <iterator>
#include <cstdio>
namespace fs=std::filesystem;
static bool convert(const fs::path& input,const fs::path& output) {
    std::ifstream f(input,std::ios::binary);std::vector<char> b((std::istreambuf_iterator<char>(f)),{});
    unsigned length=0;char error[256];char *xml=xml1_decode_pkgb(b.data(),(unsigned)b.size(),&length,error,sizeof(error));
    if(!xml){fprintf(stderr,"%s: %s\n",input.u8string().c_str(),error);return false;}
    fs::create_directories(output.parent_path());std::ofstream out(output,std::ios::binary);out.write(xml,length);xml1_free_decoded_pkgb(xml);return bool(out);
}
int wmain(int argc,wchar_t **argv) {
    if(argc!=3)return 2;fs::path input(argv[1]),output(argv[2]);unsigned count=0;
    if(fs::is_regular_file(input))return convert(input,output)?0:1;
    for(auto& e:fs::recursive_directory_iterator(input)) {
        if(!e.is_regular_file())continue;
        auto ext=e.path().extension().wstring();for(auto& c:ext)if(c>='A'&&c<='Z')c+=32;
        if(ext!=L".pkgb")continue;
        if(!convert(e.path(),output/fs::relative(e.path(),input)))return 1;++count;
    }
    printf("Decoded %u native PKGBs\n",count);return count?0:1;
}
