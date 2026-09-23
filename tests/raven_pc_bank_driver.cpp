#include "raven_pc_bank.h"
#include <fstream>
#include <iterator>
#include <iostream>
int main(int argc,char**argv){try{
    if(argc!=3)return 2;
    std::ifstream in(argv[1],std::ios::binary);if(!in)return 2;
    std::vector<uint8_t> bytes((std::istreambuf_iterator<char>(in)),{});
    if(in.bad())return 2;
    auto out=raven::pc_bank_pcm_view(bytes);
    std::ofstream file(argv[2],std::ios::binary);file.write(reinterpret_cast<const char*>(out.data()),out.size());
    return file?0:2;
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
