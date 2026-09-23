#include "raven_pc_bank.h"
#include "raven_pc_adpcm.h"
#include <cstring>
#include <stdexcept>
#include <array>
namespace raven {
std::vector<uint8_t> pc_bank_pcm_view(const std::vector<uint8_t>& in) {
    auto span=[&](size_t at,size_t n){if(at>in.size()||n>in.size()-at)
        throw std::runtime_error("Truncated PC sound bank");};
    auto word=[&](size_t at){span(at,4);return uint32_t(in[at])|uint32_t(in[at+1])<<8|
        uint32_t(in[at+2])<<16|uint32_t(in[at+3])<<24;};
    span(0,100);
    if(std::memcmp(in.data(),"ZSNDPC  ",8))throw std::runtime_error("Not a PC ZSND bank");
    if(word(8)!=in.size()||word(12)<100||word(12)>in.size())throw std::runtime_error("Invalid PC sound bank size");
    std::array<uint32_t,7> counts{},hashes{},tables{},newhash{},newtable{};
    for(unsigned i=0;i<7;++i){counts[i]=word(16+12*i);hashes[i]=word(20+12*i);tables[i]=word(24+12*i);}
    // These title banks have no phrase/track/reserved/keymap records. Do not
    // silently discard a bank that needs an additional format implementation.
    for(unsigned i=3;i<7;++i)if(counts[i])throw std::runtime_error("PC phrase/track/keymap bank not supported yet");
    const unsigned oldstride[]={24,24,76},newstride[]={24,28,84};
    std::vector<uint8_t> out(100);
    std::memcpy(out.data(),"ZSNDXBOX",8);
    auto put=[&](size_t at,uint32_t v){for(unsigned b=0;b<4;++b)out.at(at+b)=uint8_t(v>>(8*b));};
    for(unsigned i=0;i<3;++i){
        if(counts[i]>65535)throw std::runtime_error("Too many PC bank records");
        span(hashes[i],size_t(counts[i])*8);span(tables[i],size_t(counts[i])*oldstride[i]);
        newhash[i]=uint32_t(out.size());out.insert(out.end(),in.begin()+hashes[i],in.begin()+hashes[i]+counts[i]*8);
        newtable[i]=uint32_t(out.size());out.resize(out.size()+counts[i]*newstride[i]);
        for(unsigned j=0;j<counts[i];++j){
            const size_t src=tables[i]+j*oldstride[i],dst=newtable[i]+j*newstride[i];
            if(i<2)std::memcpy(out.data()+dst,in.data()+src,oldstride[i]);
            else {std::memcpy(out.data()+dst,in.data()+src,12);std::memcpy(out.data()+dst+20,in.data()+src+12,64);}
        }
    }
    out.resize((out.size()+15)&~size_t(15));put(12,uint32_t(out.size()));
    for(unsigned i=0;i<7;++i){put(16+12*i,counts[i]);put(20+12*i,i<3?newhash[i]:uint32_t(out.size()));put(24+12*i,i<3?newtable[i]:uint32_t(out.size()));}
    for(unsigned i=0;i<counts[0];++i){size_t at=tables[0]+24*i;unsigned sample=in[at]|unsigned(in[at+1])<<8;
        if(sample>=counts[1])throw std::runtime_error("Invalid PC sound sample index");}
    for(unsigned i=0;i<counts[1];++i){size_t at=tables[1]+24*i;unsigned file=in[at]|unsigned(in[at+1])<<8;
        unsigned flags=in[at+2]|unsigned(in[at+3])<<8;
        if(file>=counts[2])throw std::runtime_error("Invalid PC sample file index");
        if(flags&6)throw std::runtime_error("PC bank requires stereo/8-bit codec support");
        if(!word(at+4)||word(at+4)>192000)throw std::runtime_error("Invalid PC sample rate");
    }
    for(unsigned i=0;i<counts[2];++i){size_t at=tables[2]+76*i;uint32_t off=word(at),size=word(at+4),format=word(at+8);
        span(off,size);
        if(off<word(12))throw std::runtime_error("PC sample overlaps bank header");
        if(format!=106)throw std::runtime_error("Unsupported PC bank codec");
        if(size>128*1024*1024||out.size()+uint64_t(size)*4>512*1024*1024)throw std::runtime_error("Decoded PC bank too large");
        auto pcm=decode_pc_adpcm(in.data()+off,size);
        const size_t dst=newtable[2]+84*i;put(dst,uint32_t(out.size()));put(dst+4,uint32_t(pcm.size()*2));put(dst+8,0);
        for(int16_t s:pcm){out.push_back(uint8_t(s));out.push_back(uint8_t(uint16_t(s)>>8));}
    }
    put(8,uint32_t(out.size()));return out;
}
}
