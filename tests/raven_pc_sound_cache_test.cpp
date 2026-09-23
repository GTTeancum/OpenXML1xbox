#include "raven_pc_sound_cache.h"
#include "raven_pc_bank.h"
#include <windows.h>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <iostream>
#include <stdexcept>
#include <string>
static void check(bool ok,const char* message){if(!ok)throw std::runtime_error(message);}
static std::vector<uint8_t> read(const std::filesystem::path& p){
    std::ifstream f(p,std::ios::binary);check(bool(f),"Missing test input");return {(std::istreambuf_iterator<char>(f)),{}};
}
static void write(const std::filesystem::path& p,const std::vector<uint8_t>& bytes){
    std::ofstream f(p,std::ios::binary);f.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());check(bool(f),"Write failed");
}
int main(int argc,char**argv){try{
    if(argc!=2)return 2;
    auto bytes=read(std::filesystem::u8path(argv[1]));
    const auto root=std::filesystem::temp_directory_path()/ (L"xml1-pc-cache-test-"+std::to_wstring(GetCurrentProcessId()));
    check(!std::filesystem::exists(root),"Test directory already exists");
    std::filesystem::create_directories(root/L"sounds/eng");
    const auto source=root/L"sounds/eng/test.zsm";write(source,bytes);
    check(raven_pc_sound_cache_init(root.u8string().c_str()),"Init failed");
    char first[4096],second[4096];
    check(raven_pc_sound_path("D:/sounds/eng/test.zsm",first,sizeof(first))==1,"PC bank not routed");
    auto cache=root/std::filesystem::u8path(first+3);
    check(read(cache)==raven::pc_bank_pcm_view(bytes),"Cached PCM differs");
    check(read(source)==bytes,"Original PC bank changed");
    check(raven_pc_sound_path("\\Device\\CdRom0\\sounds/eng/test.zsm",second,sizeof(second))==1&&std::string(first)==second,"Path variants differ");
    std::filesystem::remove(cache);
    check(raven_pc_sound_path("D:/sounds/eng/test.zsm",second,sizeof(second))==1&&read(cache)==raven::pc_bank_pcm_view(bytes),"Deleted cache not rebuilt");
    bytes.back()^=1;write(source,bytes);
    check(raven_pc_sound_path("D:/sounds/eng/test.zsm",second,sizeof(second))==1&&std::string(first)!=second,"Modified bank reused stale PCM");
    check(read(root/std::filesystem::u8path(second+3))==raven::pc_bank_pcm_view(bytes),"Modified bank incorrectly decoded");
    check(raven_pc_sound_path("D:/sounds/../test.zsm",second,sizeof(second))==-1,"Traversal accepted");
    check(raven_pc_sound_path("D:/data/test.zsm",second,sizeof(second))==0,"Non-sound resource changed");
    check(raven_pc_sound_path("D:/sounds/eng/missing.zsm",second,sizeof(second))==0,"Missing-file behavior changed");
    write(source,raven::pc_bank_pcm_view(bytes));
    check(raven_pc_sound_path("D:/sounds/eng/test.zsm",second,sizeof(second))==0,"Xbox bank intercepted");
    std::cout<<"PASS original preservation, PCM view, path forms, cache rebuild, source edits and native exclusions\n";
    // Only the uniquely named directory created above is removed.
    std::filesystem::remove_all(root);return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
