#include "engine/powers/raven_power_bindings.h"
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
    const std::array<std::string,4> selected={"beam","gun","shield","xtreme"};
    const std::vector<raven::LearnedPower> learned={
        {"beam",1,20},{"gun",1,1},{"locked",1,0},{"drain",1,18},
        {"shield",2,18},{"fury",2,16},{"xtreme",0,7},{"xtreme2",0,5},
        {"passive",3,15}};
    check(raven::rotate_power(selected,learned,0)=="drain","Rotation selected locked/occupied/wrong-category power");
    auto changed=selected;changed[0]="drain";
    check(raven::rotate_power(changed,learned,0)=="beam","Power cycle failed to wrap");
    check(raven::rotate_power(selected,learned,0,-1)=="drain","Reverse power cycle failed");
    check(raven::rotate_power(selected,learned,1)=="drain","Second attack slot category mismatch");
    check(raven::rotate_power(selected,learned,2)=="fury","Boost slot category mismatch");
    check(raven::rotate_power(selected,learned,3)=="xtreme2","Xtreme slot category mismatch");
    check(raven::rotate_power(selected,{},0)=="beam","Empty eligibility list destroyed assignment");
    changed[0]="removed";
    check(raven::rotate_power(changed,learned,0)=="beam","Missing current power did not select first eligible");
    check(raven::rotate_power(selected,{{"beam",1,1}},0)=="beam","Single eligible power changed");
    auto duplicates=learned;duplicates.insert(duplicates.begin()+1,learned[0]);
    check(raven::rotate_power(selected,duplicates,0)=="drain","Duplicate declarations stalled rotation");
    check(selected[0]=="beam","Selection mutated another character's shared defaults");
    for(auto bad:std::array<std::pair<unsigned,int>,3>{{{4,1},{0,0},{0,2}}}) {
        bool rejected=false;try{raven::rotate_power(selected,learned,bad.first,bad.second);}
        catch(const std::invalid_argument&){rejected=true;}
        check(rejected,"Invalid rotation request accepted");
    }
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
    check(bindings.changes().empty(),"Unchanged defaults produced save entries");
    const std::vector<raven::LearnedPower> actor_powers={
        {"power1",1,1},{"power5",1,1},{"power3",1,2},{"power6",1,0}};
    check(bindings.rotate("Bishop",actor_powers,0),"Learned power did not rotate");
    check(*bindings.resolve("Bishop",5,true)=="power3","Combat/HUD resolver missed changed selection");
    check(*bindings.resolve("Bishop",6,true)=="power5","Rotation changed another slot");
    check(*bindings.resolve("Sunfire",5,true)=="power3","Rotation changed another character");
    check(!bindings.rotate("Wolverine",actor_powers,0),"Stock character acquired imported bindings");
    auto saved=bindings.changes();
    check(saved.size()==1&&saved.count("Bishop"),"Snapshot contains unchanged characters");
    auto wire=bindings.save();
    check(wire.size()==102&&wire[0]==1&&wire[1]==0,"Selection wire count/size wrong");
    bindings.reset();bindings.load(wire.data(),wire.size());
    check(bindings.changes()==saved,"Wire selection did not round trip");
    // A damaged save must not erase a player's current bindings.
    for(size_t size=0;size<wire.size();++size) {
        bool rejected=false;try{bindings.load(wire.data(),size);}catch(const std::exception&){rejected=true;}
        check(rejected&&bindings.changes()==saved,"Truncated selection mutated live state");
    }
    for(unsigned kind=0;kind<5;++kind) {
        auto corrupt=wire;
        if(kind==0)corrupt[1]=1; // unbounded count
        if(kind==1)for(unsigned i=2;i<22;++i)corrupt[i]='x'; // missing NUL
        if(kind==2)corrupt[21]=1; // nonzero padding
        if(kind==3)corrupt.push_back(0); // trailing data
        if(kind==4){corrupt[0]=2;corrupt.insert(corrupt.end(),wire.begin()+2,wire.end());} // duplicate
        bool rejected=false;try{bindings.load(corrupt.data(),corrupt.size());}catch(const std::exception&){rejected=true;}
        check(rejected&&bindings.changes()==saved,"Corrupt selection accepted or state changed");
    }
    bindings.reset();
    check(*bindings.resolve("Bishop",5,true)=="power1","New game did not reset defaults");
    bindings.restore(saved);
    check(*bindings.resolve("Bishop",5,true)=="power3","Selection did not survive restore");
    auto bad=saved;bad["Wolverine"]={};
    bool refused=false;try{bindings.restore(bad);}catch(const std::exception&){refused=true;}
    check(refused&&bindings.changes()==saved,"Rejected restore partially changed state");
    bad=saved;bad["Bishop"][2]=std::string(20,'x');refused=false;
    try{bindings.restore(bad);}catch(const std::exception&){refused=true;}
    check(refused&&bindings.changes()==saved,"Overlong move accepted or state changed");
    bindings.restore({});
    check(bindings.changes().empty(),"Legacy save without selections retained later-game state");
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
