#include "nv2a_vsh_disassembler.h"
#include <fstream>
#include <vector>
#include <iterator>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <stdexcept>

int main(int argc,char**argv) {try {
    if(argc!=2)throw std::runtime_error("Expected native shader-object capture");
    std::ifstream file(argv[1],std::ios::binary);
    if(!file)throw std::runtime_error("Cannot open capture");
    std::vector<char> bytes((std::istreambuf_iterator<char>(file)),{});
    if(bytes.size()<0x114||bytes.size()%4)throw std::runtime_error("Invalid shader object size");
    std::vector<uint32_t> words(bytes.size()/4);std::memcpy(words.data(),bytes.data(),bytes.size());
    const size_t count=words[3],start=0x114/4;
    if(count!=words.size()-start)throw std::runtime_error("Upload length mismatch");
    std::vector<uint32_t> program;
    // CreateVertexShader stores prebuilt NV push commands, not just instruction
    // words. SetVertexShader copies these after setting the program load index.
    for(size_t at=start;at<words.size();) {
        uint32_t command=words[at++];size_t n=(command>>18)&0x7ff;
        if((command&0xE003FFFFu)!=0xB00||!n||n%4||n>32||n>words.size()-at)
            throw std::runtime_error("Unexpected transform-program upload command");
        program.insert(program.end(),words.begin()+at,words.begin()+at+n);at+=n;
    }
    if(program.empty()||program.size()/4>136)throw std::runtime_error("Invalid program instruction count");
    Nv2aVshProgram decoded{};
    if(nv2a_vsh_parse_program(&decoded,program.data(),(uint32_t)program.size()/4)!=NV2AVPR_SUCCESS)
        throw std::runtime_error("NV2A program decode failed");
    const char *names[]={"nop","mov","mul","add","mad","dp3","dph","dp4","dst","min","max","slt","sge","arl","rcp","rcc","rsq","exp","log","lit"};
    for(size_t i=0;i<program.size()/4;++i) {
        auto& step=decoded.steps[i];std::cout<<i<<(step.is_final?" FINAL":"")<<'\n';
        for(auto op:{step.mac,step.ilu}) {
            if(!op.opcode)continue;std::cout<<"  "<<names[op.opcode];
            for(auto output:op.outputs)if(output.type)
                std::cout<<" out("<<output.type<<','<<output.index<<",mask="<<output.writemask<<')';
            for(auto input:op.inputs)if(input.type) {
                std::cout<<" in("<<input.type<<','<<input.index<<","<<(input.is_relative?"relative":"direct")<<","<<(input.is_negated?"-":"+")<<',';
                for(auto c:input.swizzle)std::cout<<"xyzw"[c];std::cout<<')';
            }
            std::cout<<'\n';
        }
        if(step.is_final) {
            if(i+1!=program.size()/4){nv2a_vsh_program_destroy(&decoded);throw std::runtime_error("Trailing shader instructions");}
            break;
        }
    }
    nv2a_vsh_program_destroy(&decoded);return 0;
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
