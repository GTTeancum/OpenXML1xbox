#include "raven_pc_adpcm.h"
#include <algorithm>
#include <stdexcept>

namespace raven {
std::vector<int16_t> decode_pc_adpcm(const uint8_t* bytes,size_t count) {
    if(count&&!bytes)throw std::invalid_argument("Null PC sound data");
    std::vector<int16_t> pcm;
    if(count>pcm.max_size()/2)throw std::length_error("PC sound too large");
    pcm.reserve(count*2);
    static constexpr int steps[]={
        7,8,9,10,11,12,13,14,16,17,19,21,23,25,28,31,34,37,41,45,
        50,55,60,66,73,80,88,97,107,118,130,143,157,173,190,209,
        230,253,279,307,337,371,408,449,494,544,598,658,724,796,
        876,963,1060,1166,1282,1411,1552,1707,1878,2066,2272,2499,
        2749,3024,3327,3660,4026,4428,4871,5358,5894,6484,7132,
        7845,8630,9493,10442,11487,12635,13899,15289,16818,18500,
        20350,22385,24623,27086,29794,32767};
    static constexpr int change[]={-1,-1,-1,-1,2,4,6,8};
    int predictor=0,index=0;
    for(size_t i=0;i<count;++i)for(unsigned shift:{0u,4u}) {
        const unsigned code=(bytes[i]>>shift)&15;
        const int step=steps[index];
        // PC's independently truncated terms differ from Xbox's single
        // multiply-and-shift. Keep these separate to preserve reference PCM.
        int delta=step>>3;
        if(code&1)delta+=step>>2;
        if(code&2)delta+=step>>1;
        if(code&4)delta+=step;
        predictor=std::clamp(predictor+((code&8)?-delta:delta),-32768,32767);
        index=std::clamp(index+change[code&7],0,88);
        pcm.push_back(static_cast<int16_t>(predictor));
    }
    return pcm;
}
}
