#include "raven_pc_sound_cache.h"
#include "raven_pc_bank.h"
#include <windows.h>
#include <bcrypt.h>
#include <filesystem>
#include <fstream>
#include <mutex>
#include <set>
#include <string>
#include <cstdio>
#include <cstring>
#include <stdexcept>
namespace {
std::filesystem::path root;
std::mutex mutex;
std::set<std::string> generated;
std::string digest(const std::vector<uint8_t>& bytes) {
    BCRYPT_ALG_HANDLE algorithm=nullptr;
    if(BCryptOpenAlgorithmProvider(&algorithm,BCRYPT_SHA256_ALGORITHM,nullptr,0)<0)
        throw std::runtime_error("Cannot initialize PC sound digest");
    unsigned char hash[32];
    NTSTATUS status=BCryptHash(algorithm,nullptr,0,const_cast<PUCHAR>(bytes.data()),
        static_cast<ULONG>(bytes.size()),hash,sizeof(hash));
    BCryptCloseAlgorithmProvider(algorithm,0);
    if(status<0)throw std::runtime_error("Cannot hash PC sound bank");
    std::string text;for(unsigned char b:hash){text+="0123456789abcdef"[b>>4];text+="0123456789abcdef"[b&15];}
    return text;
}
}
extern "C" int raven_pc_sound_cache_init(const char *path) {
    try {std::lock_guard<std::mutex> lock(mutex);root=std::filesystem::absolute(std::filesystem::u8path(path));generated.clear();return 1;}
    catch(...){return 0;}
}
extern "C" int raven_pc_sound_path(const char *input,char *output,unsigned capacity) {
    try {
        std::string path(input);
        for(char& c:path){if(c=='\\')c='/';else if(c>='A'&&c<='Z')c+=32;}
        size_t start;
        if(path.rfind("d:/",0)==0)start=3;
        else if(path.rfind("/device/cdrom0/",0)==0)start=15;
        else if(path.rfind("/??/d:/",0)==0)start=7;
        else return 0;
        const auto relative=path.substr(start);
        if(relative.rfind("sounds/",0)!=0)return 0;
        auto resource=std::filesystem::u8path(relative);
        auto ext=resource.extension().string();if(ext!=".zsm"&&ext!=".zss")return 0;
        for(const auto& part:resource)if(part==".."||part=="."||part.has_root_path())return -1;
        std::lock_guard<std::mutex> lock(mutex);
        if(root.empty())return -1;
        std::ifstream file(root/resource,std::ios::binary);
        if(!file)return 0; // Preserve ordinary native missing-file behavior.
        char magic[8]={};file.read(magic,8);
        if(file.gcount()!=8||std::memcmp(magic,"ZSNDPC  ",8))return 0;
        file.seekg(0,std::ios::end);auto length=file.tellg();
        if(length<100||length>512*1024*1024)throw std::runtime_error("Invalid PC sound bank length");
        file.seekg(0);std::vector<uint8_t> bytes(static_cast<size_t>(length));
        if(!file.read(reinterpret_cast<char*>(bytes.data()),length))throw std::runtime_error("Cannot read PC sound bank");
        const auto key=digest(bytes);
        const std::string cache=".xml1-cache/pc-sounds-v1/"+key+".zsm";
        const auto destination=root/std::filesystem::u8path(cache);
        if(!generated.count(key)||!std::filesystem::exists(destination)) {
            const auto pcm= raven::pc_bank_pcm_view(bytes);
            std::filesystem::create_directories(destination.parent_path());
            auto temporary=destination;temporary+=L"."+std::to_wstring(GetCurrentProcessId())+L".tmp";
            {std::ofstream out(temporary,std::ios::binary|std::ios::trunc);
             out.write(reinterpret_cast<const char*>(pcm.data()),pcm.size());out.close();
             if(!out)throw std::runtime_error("Cannot write decoded PC sound cache");}
            if(!MoveFileExW(temporary.c_str(),destination.c_str(),MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH))
                throw std::runtime_error("Cannot publish decoded PC sound cache");
            generated.insert(key);
            std::fprintf(stderr,"[PC SOUND BANK] resource=%s source_bytes=%zu pcm_bank_bytes=%zu sha256=%s\n",
                relative.c_str(),bytes.size(),pcm.size(),key.c_str());
        }
        const auto routed="D:/"+cache;
        if(routed.size()+1>capacity)return -1;
        std::memcpy(output,routed.c_str(),routed.size()+1);return 1;
    }catch(const std::exception& e){std::fprintf(stderr,"[PC SOUND BANK ERROR] %s: %s\n",input,e.what());return -1;}
}
