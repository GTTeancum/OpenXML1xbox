#include "raven_power_bindings.h"
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>
static void check(bool ok,const char* message){if(!ok)throw std::runtime_error(message);}
static raven::PowerBindings parse(const std::string& text){
    auto binary=xml1::compile_xmlb(text);
    return raven::PowerBindings(xml1::parse_xmlb(binary.data(),(unsigned)binary.size()));
}
int main(int argc,char** argv){try {
    auto bindings=parse("<characters><stats name='Wolverine'/><stats name='Bishop' power1='power1' power2='power5' power3='power2' power4='power9'/><stats name='Sunfire' power1='power3'/></characters>");
    const char* expected[]={"power1","power5","power2","power9"};
    for(unsigned i=0;i<4;++i) {
        auto value=bindings.resolve("Bishop",i+5,true);
        check(value && *value==expected[i],"Bishop action binding mismatch");
        check(!bindings.resolve("Bishop",i+5,false),"Explicit chain changed");
        check(!bindings.resolve("Wolverine",i+5,true),"Native hero changed");
    }
    check(!bindings.resolve("Bishop",4,true)&&!bindings.resolve("Bishop",9,true),"Non-power action changed");
    check(*bindings.resolve("Sunfire",5,true)=="power3","Actor binding leaked");
    check(bindings.resolve("Sunfire",6,true)->empty(),"Empty imported slot gained an invented move");
    check(!bindings.resolve("unknown",5,true),"Unknown character changed");
    for(const auto& text:{"<characters><stats name='B' power1='12345678901234567890'/></characters>",
        "<characters><stats name='B'/><stats name='B'/></characters>"}) {
        bool rejected=false;try{parse(text);}catch(const std::exception&){rejected=true;}
        check(rejected,"Ambiguous binding accepted");
    }
    for(int i=1;i<argc;++i){
        std::ifstream file(argv[i],std::ios::binary);
        check(bool(file),"Cannot open compiled roster");
        std::vector<char> bytes((std::istreambuf_iterator<char>(file)),{});
        raven::PowerBindings actual(xml1::parse_xmlb(bytes.data(),(unsigned)bytes.size()));
        auto bishop=actual.resolve("Bishop",5,true),sunfire=actual.resolve("Sunfire",5,true);
        check(bishop && *bishop=="power1" && sunfire && !sunfire->empty(),"Real imported bindings absent");
        check(!actual.resolve("Wolverine",5,true),"Real Wolverine binding changed");
        std::cout<<"PASS compiled roster: "<<argv[i]<<'\n';
    }
    std::cout<<"PASS power binding selection and native/explicit-chain preservation\n";return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
