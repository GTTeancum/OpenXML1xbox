#include "engine/progression/raven_talent_runtime.h"
#include "engine/progression/raven_talent_data.h"
#include "engine/progression/character_talent_record.h"
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <stdexcept>
#include <cmath>
#include <iomanip>
#include <limits>
#include <locale>
#include <sstream>

namespace raven {
namespace {
bool symbol_char(char c) {
    return (c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_';
}
std::string text_tokens(const std::string& text) {
    // XML2 1A5207..1A582F binds these semantic tokens to strings 1500..1523.
    // XML1 does not register them, and its text renderer drops unknown $words.
    // Keep the source English labels for imported English descriptions. XML2
    // resistance strings 1516..1519 are font-specific glyphs: spell their
    // meaning out in XML1's font instead of displaying unrelated glyphs.
    // Other tokens (notably device prompts) remain for the native renderer.
    static const std::pair<const char*,const char*> tokens[]={
        {"AR","ATK"},{"DR","DEF"},{"HP","HP"},{"EP","EP"},
        {"KB","Knockback"},{"XP","XP"},{"DMG_PHYSICAL","Physical Dmg"},
        {"DMG_ENERGY","Energy Dmg"},{"DMG_COLD","Cold Dmg"},
        {"DMG_ELECTRICITY","Electricity Dmg"},{"DMG_WIND","Wind Dmg"},
        {"DMG_MENTAL","Mental Dmg"},{"DMG_RADIATION","Radiation Dmg"},
        {"DMG_FIRE","Fire Dmg"},{"DMG","Damage"},
        {"RES_PHYSICAL","Physical Resistance"},{"RES_ENERGY","Energy Resistance"},
        {"RES_MENTAL","Mental Resistance"},{"RES_ELEMENTAL","Elemental Resistance"},
        {"RES_RADIATION","Radiation Resistance"},{"DMG_MAX","Max Dmg"},
        {"DMG_MIN","Min Dmg"},{"DMG_MELEE","DMG"},{"DMG_BLEED","Bleed Dmg"}
    };
    std::string out;
    for(size_t i=0;i<text.size();) {
        if(text[i]!='$'){out+=text[i++];continue;}
        size_t end=i+1;while(end<text.size()&&symbol_char(text[end]))++end;
        auto key=text.substr(i+1,end-i-1);const char* replacement=nullptr;
        for(const auto& token:tokens)if(key==token.first){replacement=token.second;break;}
        out+=replacement?std::string(replacement):text.substr(i,end-i);i=end;
    }
    return out;
}
void resolve_text_tokens(xml1::XmlNode& node) {
    for(auto& attr:node.attrs)
        if(attr.first=="description"||attr.first=="descname"||attr.first=="descshort")
            attr.second=text_tokens(attr.second);
    for(auto& child:node.children)resolve_text_tokens(child);
}
std::string number(double value,bool precise=false) {
    if(!std::isfinite(value))throw std::runtime_error("Nonfinite talent value");
    std::ostringstream out;out.imbue(std::locale::classic());
    if(precise)out<<std::setprecision(std::numeric_limits<float>::max_digits10)<<value;
    else out<<std::fixed<<std::setprecision(0)<<value;
    return out.str();
}
std::string description_number(float value,char format) {
    // XML2 CTalent D0400: D is an integer, P a fraction as percent,
    // S a multiplier's signed change from 1, F one decimal place.
    // XML2's caret before digits is its own text markup. Emit ordinary digits
    // for XML1's existing description widget; retain surrounding XML1 art/text.
    switch(format) {
    case 'd':return number(std::trunc(value));
    case 'p':return number(std::trunc((double(value)+0.001)*100))+"%";
    case 's': {
        const double delta=(double(value)-1)*100;
        return std::string(delta<0?"-":"+")+number(std::floor(std::abs(delta)))+"%";
    }
    case 'f': {
        std::ostringstream out;out.imbue(std::locale::classic());
        out<<std::fixed<<std::setprecision(1)<<value;return out.str();
    }
    default:throw std::runtime_error("Talent description format needs a runtime context: "+std::string(1,format));
    }
}
std::string resolve(const TalentDefinition& definition,unsigned rank,const std::string& text,bool description) {
    std::string result;
    for(size_t i=0;i<text.size();) {
        if(text[i]!='%'||i+1==text.size()||!symbol_char(text[i+1])||
           (text[i+1]>='0'&&text[i+1]<='9')) {result+=text[i++];continue;}
        size_t end=i+1;while(end<text.size()&&symbol_char(text[end]))++end;
        const auto symbol=text.substr(i+1,end-i-1);
        float pair[2];
        if(!definition.evaluate(symbol,rank,pair))
            throw std::runtime_error(definition.name+": unresolved talent value %"+symbol);
        if(!std::isfinite(pair[0])||!std::isfinite(pair[1]))
            throw std::runtime_error(definition.name+": nonfinite talent value %"+symbol);
        if(description) {
            char format='d';
            if(end+1<text.size()&&text[end]==':') {
                format=text[end+1];if(format>='A'&&format<='Z')format+=('a'-'A');end+=2;
            }
            result+=description_number(pair[0],format);
            if(pair[0]!=pair[1])result+='-'+description_number(pair[1],format);
        }else {
            // Numeric declarations consume the original evaluated floats,
            // never the rounded presentation text used by descriptions.
            if(i||end!=text.size())throw std::runtime_error(definition.name+": compound numeric talent expression "+text);
            result+=number(pair[0],true);
            if(pair[0]!=pair[1])result+=' '+number(pair[1],true);
        }
        i=end;
    }
    return result;
}
void resolve_level(xml1::XmlNode& node,const TalentDefinition& definition,unsigned rank) {
    for(auto& attr:node.attrs)if(attr.second.find('%')!=std::string::npos)
        attr.second=resolve(definition,rank,attr.second,attr.first=="description");
    for(auto& child:node.children)resolve_level(child,definition,rank);
}
void adapt_passive_nodes(xml1::XmlNode& talent) {
    // Native B5E00 enumerates activepowerup children of the selected rank
    // and passes each to 96370. The existing 96370 adapter retains XML2's
    // nested affecters and callbacks. Expose that same ownership/activation
    // route for imported talent powerups, without flattening their scopes,
    // splitting grouped effects, or changing powerstyle declarations.
    for(auto& level:talent.children)if(level.name=="level")
        for(auto& child:level.children)if(child.name=="powerup")
            child.name="activepowerup";
}
}
std::string runtime_talent_xml(const void* bytes,unsigned length) {
    auto decoded=xml1::decode_xmlb(bytes,length);
    if(decoded.compare(0,12,"<characters>")==0 || decoded.compare(0,12,"<characters ")==0) {
        auto roots=xml1::parse_xmlb(bytes,length);
        bool changed=false;
        // XML2 herostat permits an unlearned reference without level="0".
        // XML1 542F0 -> 54424 skips such references altogether, so shared
        // prerequisites never enter CharacterStats. Supply only the missing
        // default on named leaf references; preserve explicit earned ranks,
        // inline definitions, nested affecters and the original disk resource.
        for(auto& root:roots)if(root.name=="characters")
            for(auto& stats:root.children)if(stats.name=="stats")
                for(auto& talent:stats.children)if(talent.name=="Talent"&&talent.children.empty()) {
                    bool named=false,has_level=false;
                    for(const auto& attr:talent.attrs) {
                        if(attr.first=="name"&&!attr.second.empty())named=true;
                        if(attr.first=="level")has_level=true;
                    }
                    if(named&&!has_level){talent.attrs.emplace_back("level","0");changed=true;}
                }
        return changed?xml1::write_xml_nodes(roots):decoded;
    }
    // Most cache traffic is packages, menus and ordinary XML1 resources.
    // Keep that path to one decode with no extra tree allocation/parsing.
    if((decoded.compare(0,8,"<talents")&&decoded.compare(0,8,"<Talents"))||decoded.size()<=8||
       (decoded[8]!='>'&&decoded[8]!=' '&&decoded[8]!='/')||
       (decoded.find(" count=")==std::string::npos&&decoded.find("<talentvalues")==std::string::npos&&
        decoded.find('$')==std::string::npos))return decoded;
    auto roots=xml1::parse_xmlb(bytes,length);
    if(roots.size()!=1||(roots[0].name!="talents"&&roots[0].name!="Talents"))return decoded;
    auto imported=imported_shared_talent_nodes(roots[0]);
    if(imported.empty())return decoded;
    const auto definitions=load_talent_nodes(std::move(imported));
    // Native XML1 B4870 searches for case-sensitive "Talent" children through
    // 125F00 -> 199F10. XML2 emits lowercase "talent". Translate this schema
    // boundary in cache-owned text, preserving filenames, identifiers and the
    // original on-disk resource. Nested "level" remains lowercase in XML1.
    roots[0].name="Talents";
    bool changed=false;
    size_t imported_index=0;
    for(size_t index=0;index<roots[0].children.size();++index) {
        auto& talent=roots[0].children[index];
        if(talent.name!="talent")continue;
        talent.name="Talent";changed=true;
        resolve_text_tokens(talent);
        adapt_passive_nodes(talent);
        bool counted=false;
        for(const auto& level:talent.children)if(level.name=="level")
            for(const auto& attr:level.attrs)if(attr.first=="count")counted=true;
        const auto& definition=definitions[imported_index++];
        if(!counted&&definition.values.empty())continue;
        // XML1 B5CD0 walks individual level nodes. Expand XML2's count only
        // in the cache-owned text; names, original files and tier relationships
        // stay intact. Materialize requirements, descriptions and nested passive
        // declarations from this same rank so UI eligibility and combat agree.
        const unsigned ranks=definition.rank_count();
        if(ranks>XML1_TALENT_RANK_MAX)
            throw std::runtime_error("Talent declares more ranks than native storage supports (63)");
        std::vector<xml1::XmlNode> children;
        unsigned rank=1;
        for(const auto& child:talent.children) {
            if(child.name!="level"){children.push_back(child);continue;}
            const auto* level=&child;
            // Source is a copy, so associate this node by logical rank rather
            // than comparing its address with the owned definition tree.
            const auto* owned=definition.level_for_rank(rank);
            do {
                auto copy=*level;
                copy.attrs.erase(std::remove_if(copy.attrs.begin(),copy.attrs.end(),
                    [](const auto& a){return a.first=="count";}),copy.attrs.end());
                resolve_level(copy,definition,rank);
                children.push_back(std::move(copy));++rank;
            }while(rank<=ranks&&definition.level_for_rank(rank)==owned);
        }
        talent.children=std::move(children);changed=true;
    }
    return changed?xml1::write_xml_nodes(roots):decoded;
}
}
extern "C" char* xml1_decode_runtime_xmlb(const void* bytes,unsigned length,
    unsigned* xml_length,char* error,unsigned error_size) {
    try {
        if(!bytes||!xml_length)throw std::runtime_error("Invalid runtime XMLB input");
        auto text=raven::runtime_talent_xml(bytes,length);
        auto* result=static_cast<char*>(std::malloc(text.size()+1));
        if(!result)throw std::runtime_error("Cannot allocate runtime XMLB text");
        std::memcpy(result,text.c_str(),text.size()+1);*xml_length=static_cast<unsigned>(text.size());
        return result;
    }catch(const std::exception& e){if(error&&error_size)std::snprintf(error,error_size,"%s",e.what());return nullptr;}
}
