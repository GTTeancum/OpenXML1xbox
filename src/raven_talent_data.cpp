#include "raven_talent_data.h"
#include <sstream>
#include <locale>
#include <stdexcept>
#include <cmath>
#include <set>
#include <charconv>

namespace raven {
namespace {
const std::string *attribute(const xml1::XmlNode& node, const char *key) {
    const std::string *found=nullptr;
    for(const auto& a:node.attrs) if(a.first==key) {
        if(found) throw std::runtime_error(std::string("Ambiguous talent attribute: ")+key);
        found=&a.second;
    }
    return found;
}
std::string required(const xml1::XmlNode& node,const char *key) {
    auto value=attribute(node,key);
    if(!value||value->empty()) throw std::runtime_error(std::string("Missing talent attribute: ")+key);
    return *value;
}
std::string constant_key(std::string name) {
    for(char& c:name) if(c>='a'&&c<='z') c-=('a'-'A');
    return name;
}
float scalar(const std::string& text) {
    float value;
    std::istringstream stream(text); stream.imbue(std::locale::classic());
    if(!(stream>>value)||!std::isfinite(value)||!(stream>>std::ws).eof())
        throw std::runtime_error("Unsupported constant number: "+text);
    return value;
}
raven_talent_point read_point(const xml1::XmlNode& node,const TalentConstants *constants) {
    raven_talent_point point={};
    const auto level=required(node,"level"), text=required(node,"value");
    std::istringstream levels(level); levels.imbue(std::locale::classic());
    if(!(levels>>point.level)||!(levels>>std::ws).eof()||point.level<1||point.level>255)
        throw std::runtime_error("Unsupported talent point level: "+level);
    // XML2 000D3BF0 resolves five names through the table populated by
    // 000D39C0 from values.xmlb. Resolve against this title's explicit
    // table; the symbols are not fixed numeric constants in the XBE.
    std::istringstream values(text); values.imbue(std::locale::classic());
    std::string token;
    values>>token;
    const auto key=constant_key(token);
    const bool named=key=="DMG2"||key=="DMG3"||key=="DMG4"||key=="K2"||key=="K3";
    if(named) {
        if(!(values>>std::ws).eof()||!constants||!constants->count(key))
            throw std::runtime_error("Unresolved talent constant: "+text);
        const auto& pair=constants->at(key);
        if(!std::isfinite(pair[0])||!std::isfinite(pair[1]))
            throw std::runtime_error("Nonfinite talent constant: "+key);
        point.value[0]=pair[0];point.value[1]=pair[1];
    } else {
        values.clear(); values.str(text);
        if(!(values>>point.value[0])||!std::isfinite(point.value[0]))
            throw std::runtime_error("Unsupported talent numeric value: "+text);
        values>>std::ws;
        if(values.eof()) point.value[1]=point.value[0];
        else if(!(values>>point.value[1])||!std::isfinite(point.value[1])||!(values>>std::ws).eof())
            throw std::runtime_error("Unsupported talent numeric range: "+text);
    }
    point.interpolate=1;
    if(auto flag=attribute(node,"interpolate")) {
        if(*flag=="false"||*flag=="0") point.interpolate=0;
        else if(*flag!="true"&&*flag!="1")
            throw std::runtime_error("Unsupported talent interpolation flag: "+*flag);
    }
    return point;
}
}
TalentConstants load_talent_constants(const void *bytes,unsigned length) {
    auto roots=xml1::parse_xmlb(bytes,length);
    if(roots.size()!=1||roots[0].name!="values")
        throw std::runtime_error("Expected one values root");
    TalentConstants result;
    for(const auto& node:roots[0].children) {
        if(node.name!="value")continue;
        auto name=attribute(node,"name");
        if(!name)continue;
        const auto key=constant_key(*name);
        if(key!="DMG2"&&key!="DMG3"&&key!="DMG4"&&key!="K2"&&key!="K3")continue;
        // Native defaults min to zero and max to min; later declarations
        // replace earlier ones. Keep missing names absent so callers can
        // diagnose a missing table instead of using native fallback zero.
        auto lo=attribute(node,"min"),hi=attribute(node,"max");
        float low=lo?scalar(*lo):0.f;
        result[key]={low,hi?scalar(*hi):low};
    }
    return result;
}
std::optional<uint8_t> xml2_affecter_attribute(const std::string& name) {
    static const struct {const char *name;uint8_t id;} entries[]={
#include "raven_xml2_affecter_names.inc"
    };
    const auto normalized=constant_key(name);
    for(const auto& entry:entries)
        if(normalized==constant_key(entry.name))return entry.id;
    // 1438E0 natively returns none/0 for unknown names. Keep an import
    // diagnostic distinct from explicit 'none' until dispatch is attached.
    return std::nullopt;
}
AffecterDeclaration read_xml2_affecter(const xml1::XmlNode& node) {
    if(constant_key(node.name)!="AFFECTER")
        throw std::runtime_error("Expected XML2 affecter declaration");
    AffecterDeclaration result;
    result.source=node;
    // 144B60 -> 144C20 clears value, mode and sharing. 143B40 handles
    // fields in incoming order; it does not reject duplicate attributes.
    for(const auto& field:node.attrs) {
        const auto name=constant_key(field.first);
        if(name=="ATTRIBUTE") {
            result.attribute=field.second;
            result.attribute_id=xml2_affecter_attribute(field.second);
        }
        else if(name=="LEVEL")result.level=field.second;
        else if(name=="AFFECT_TYPE") {
            const auto value=constant_key(field.second);
            if(value=="SCALE")result.mode=1;
            else if(value=="MAX")result.mode=2;
            else if(value=="MIN")result.mode=3;
            // 143BD5 -> 143D32 acknowledges all other strings WITHOUT
            // assigning mode. In particular, 'add' cannot reset scale.
        } else if(name=="SHARE_FILTER") {
            const auto value=constant_key(field.second);
            result.share_filter=value=="OWNER"?1:value=="SHARED"?2:0;
        } else if(name=="SCOPE_DAMAGE"||name=="SCOPE_ATTACK"||name=="SCOPE_NODE"||
                  name=="SCOPE_TALENT"||name=="SCOPE_RACE"||name=="SCOPE_CHARACTER"||
                  name=="SCOPE_POWERS"||name=="SCOPE_NON_POWERS"||name=="DAMAGETYPE") {
            // 143D25 forwards each occurrence to virtual +10. Keep its
            // spelling, order and duplicates for that downstream consumer.
            result.scopes.push_back(field);
        } else result.unhandled.push_back(field);
    }
    return result;
}
std::optional<bool> xml2_damage_scope_matches(const AffecterDeclaration& declaration,
                                            uint32_t damage_flags) {
    // 15A1A0 -> 4A2D0, original table 53DC28. This is XML2's table;
    // masks describe query context +10, not actor stats or damage amount.
    static const struct {const char *name;uint32_t mask;} entries[]={
        {"DMG_CRUSHING",1},{"DMG_BLADE",2},{"DMG_BLEED",4},{"DMG_TELEPORT",8},
        {"DMG_PHYSICAL",0x80},{"DMG_TELEKINESIS",0x100},{"DMG_MENTAL",0x800},
        {"DMG_MAGNETIC",0x1000},{"DMG_ENERGY",0x8000},{"DMG_FIRE",0x10000},
        {"DMG_ELECTRICITY",0x20000},{"DMG_COLD",0x40000},{"DMG_WIND",0x80000},
        {"DMG_ELEMENTAL",0xff0000},{"DMG_RADIATION",0x8000000},
        {"DMG_DIRECT",0x10000000},{"DMG_SPECIAL",0x20000000}
    };
    uint32_t mask=0;
    for(const auto& scope:declaration.scopes) {
        const auto name=constant_key(scope.first);
        if(name!="SCOPE_DAMAGE"&&name!="DAMAGETYPE")return std::nullopt;
        const auto value=constant_key(scope.second);
        // Native 4A2D0 initializes to physical before the lookup. An
        // unknown token does not become an unrestricted/zero mask.
        uint32_t selected=0x80;
        for(const auto& entry:entries)if(value==entry.name){selected=entry.mask;break;}
        mask|=selected;
    }
    // 159F10: zero is unrestricted; otherwise ANY matching bit suffices.
    return mask==0||(damage_flags&mask)!=0;
}
bool xml2_share_filter_matches(uint8_t filter,bool enabled,bool owner_matches) {
    // 143910 evaluates these separately from the scope predicate. Caller
    // supplies the native context booleans; do not infer actor ownership.
    if(!enabled)return true;
    if(filter==1)return owner_matches;
    if(filter==2)return !owner_matches;
    return true;
}
std::array<float,2> read_xml2_literal(const std::string& text,const TalentConstants *constants) {
    // D3BF0 skips leading CRT whitespace plus byte A0, then accepts a
    // digit, '-' or '.' as numeric. A leading '+' takes the named path.
    auto white=[](unsigned char c){return c==' '||(c>=9&&c<=13);};
    size_t start=0;
    while(start<text.size()&&(white(text[start])||(unsigned char)text[start]==0xa0))++start;
    if(start==text.size())return {0,0};
    const char first=text[start];
    if(!((first>='0'&&first<='9')||first=='-'||first=='.')) {
        const auto key=constant_key(text.substr(start));
        if(key!="DMG2"&&key!="DMG3"&&key!="DMG4"&&key!="K2"&&key!="K3")return {0,0};
        if(!constants||!constants->count(key))
            throw std::runtime_error("Unresolved XML2 literal constant: "+text);
        return constants->at(key);
    }
    // Native selects '%f %f' iff an ASCII space occurs anywhere after
    // the leading trim; a tab alone does not select the range format.
    const bool range=text.find(' ',start)!=std::string::npos;
    const char *at=text.data()+start,*end=text.data()+text.size();
    auto scan=[&](){
        while(at<end&&white(*at))++at;
        if(at<end&&*at=='+')++at;
        float value=0;
        auto parsed=std::from_chars(at,end,value,std::chars_format::general);
        at=parsed.ptr;
        if(parsed.ec!=std::errc{})return 0.f;
        return value>=-1.0e29f&&std::isfinite(value)?value:0.f;
    };
    const float lower=scan();
    return {lower,range?scan():lower};
}
bool TalentDefinition::evaluate(const std::string& symbol,unsigned rank,float output[2]) const {
    auto it=values.find(symbol);
    return it!=values.end()&&raven_talent_curve_evaluate(it->second.data(),it->second.size(),rank,output)!=0;
}
std::vector<TalentDefinition> load_talents(const void *bytes,unsigned length,const TalentConstants *constants) {
    auto roots=xml1::parse_xmlb(bytes,length);
    if(roots.size()!=1||roots[0].name!="talents")
        throw std::runtime_error("Expected one XML2 talents root");
    std::vector<TalentDefinition> result;
    std::set<std::string> names;
    for(auto& node:roots[0].children) {
        if(node.name!="talent") throw std::runtime_error("Unsupported child of talents: "+node.name);
        TalentDefinition talent;
        talent.name=required(node,"name");
        if(!names.insert(talent.name).second) throw std::runtime_error("Duplicate talent definition: "+talent.name);
        for(const auto& child:node.children) if(child.name=="talentvalues") {
            for(const auto& entry:child.children) {
                if(entry.name!="talentvalue") throw std::runtime_error("Unsupported talentvalues child: "+entry.name);
                const auto symbol=required(entry,"name");
                // XML2 000D1060 rejects names >=20 bytes. Keep the original
                // symbol; never shorten it into a colliding runtime alias.
                if(symbol.size()>=20) throw std::runtime_error("Talent value name exceeds native limit: "+symbol);
                try {talent.values[symbol].push_back(read_point(entry,constants));}
                catch(const std::exception& e) {throw std::runtime_error(talent.name+"/"+symbol+": "+e.what());}
            }
        }
        talent.source=std::move(node);
        result.push_back(std::move(talent));
    }
    return result;
}
}
