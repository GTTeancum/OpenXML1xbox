#include "xmlb.h"
#include <filesystem>
#include <fstream>
#include <iterator>
#include <cstdio>
namespace fs=std::filesystem;
int wmain(int argc,wchar_t**argv){
 if(argc!=4)return 2;
 try {
 if(std::wstring(argv[1])==L"tree"||std::wstring(argv[1])==L"reference") {
  const bool reference=std::wstring(argv[1])==L"reference";
  fs::path root(argv[2]),dest(argv[3]);unsigned count=0,failures=0;
  for(auto& e:fs::recursive_directory_iterator(root)) {
   if(!e.is_regular_file())continue;
   auto extension=e.path().extension().string();
   if(reference){if(extension.empty()||(extension.back()!='b'&&extension.back()!='B'))continue;extension.pop_back();}
   if(!xml1::xml_text_extension(extension))continue;
   try {std::ifstream f(e.path(),std::ios::binary);std::string t((std::istreambuf_iterator<char>(f)),{});
    if(reference){auto decoded=xml1::decode_xmlb(t.data(),(unsigned)t.size());auto encoded=xml1::compile_xmlb(decoded);if(xml1::decode_xmlb(encoded.data(),(unsigned)encoded.size())!=decoded)throw std::runtime_error("Reference tree changed");++count;continue;}
    auto b=xml1::compile_xmlb(t);auto decoded=xml1::decode_xmlb(b.data(),(unsigned)b.size());
    if(xml1::compile_xmlb(decoded)!=b)throw std::runtime_error("Non-identical binary round trip");
    auto path=dest/fs::relative(e.path(),root);path+=L"b";fs::create_directories(path.parent_path());
    std::ofstream out(path,std::ios::binary);out.write((const char*)b.data(),b.size());if(!out)throw std::runtime_error("Write failed");++count;
   }catch(const std::exception&err){fprintf(stderr,"%s: %s\n",e.path().string().c_str(),err.what());++failures;}
  }
  printf("Converted %u, failed %u\n",count,failures);return failures?1:0;
 }
 std::ifstream f(fs::path(argv[2]),std::ios::binary);if(!f)throw std::runtime_error("Cannot read input");std::string input((std::istreambuf_iterator<char>(f)),{});std::string output;
 if(std::wstring(argv[1])==L"compile"){auto b=xml1::compile_xmlb(input);output.assign(b.begin(),b.end());}
 else if(std::wstring(argv[1])==L"decode")output=xml1::decode_xmlb(input.data(),(unsigned)input.size());
 else return 2;
 fs::path path(argv[3]);fs::create_directories(path.parent_path());std::ofstream out(path,std::ios::binary);out.write(output.data(),output.size());if(!out)throw std::runtime_error("Cannot write output");return 0;
 }catch(const std::exception&e){fprintf(stderr,"%s\n",e.what());return 1;}
}
