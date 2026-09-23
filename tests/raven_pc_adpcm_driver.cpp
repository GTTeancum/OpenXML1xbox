#include "raven_pc_adpcm.h"
#include <fstream>
#include <iterator>
#include <iostream>
int main(int argc,char** argv) {
    try {
        if(argc!=3)return 2;
        std::ifstream input(argv[1],std::ios::binary);
        if(!input)return 2;
        std::vector<uint8_t> bytes((std::istreambuf_iterator<char>(input)),{});
        if(input.bad())return 2;
        const auto pcm=raven::decode_pc_adpcm(bytes.data(),bytes.size());
        std::ofstream output(argv[2],std::ios::binary);
        for(int16_t sample:pcm) {
            output.put(static_cast<char>(static_cast<uint16_t>(sample)&255));
            output.put(static_cast<char>(static_cast<uint16_t>(sample)>>8));
        }
        return output?0:2;
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
