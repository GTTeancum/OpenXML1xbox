#include "xmlb.h"
#include <map>
#include <set>
#include <stdexcept>
#include <cstring>
#include <functional>
#include <algorithm>
namespace xml1 {
namespace {
constexpr uint32_t end = 0xffffffffu;
constexpr size_t limit = 16*1024*1024;
struct Node {std::string name; std::vector<std::pair<std::string,std::string>> attrs; std::vector<Node> children;};
bool space(unsigned char c) {return c==' '||c=='\t'||c=='\r'||c=='\n'||c=='\v'||c=='\f';}
bool first(unsigned char c) {return (c>='a'&&c<='z')||(c>='A'&&c<='Z')||c=='_';}
bool next(unsigned char c) {return first(c)||(c>='0'&&c<='9')||c=='-'||c==':';}
void valid_name(const std::string& s) {
    if(s.empty()||s.size()>=2048||!first(s[0])||!std::all_of(s.begin()+1,s.end(),next))throw std::runtime_error("Invalid Raven XML name");
}
class TextReader {
    const std::string& s; size_t at=0, nodes=0;
    void ws(){while(at<s.size()&&space(s[at]))++at;}
    bool is(const char *p){return s.compare(at,std::strlen(p),p)==0;}
    void need(bool yes,const char *msg){if(!yes)throw std::runtime_error(std::string(msg)+" at byte "+std::to_string(at));}
    std::string name(){size_t start=at;need(at<s.size()&&first(s[at]),"Expected name");++at;while(at<s.size()&&next(s[at]))++at;need(at-start<2048,"Name exceeds native XML string buffer");return s.substr(start,at-start);}
public:
    explicit TextReader(const std::string& text):s(text){need(s.size()<=limit&&s.find('\0')==s.npos,"Invalid XML length/NUL");}
    std::vector<Node> list(const std::string& close={},unsigned depth=0) {
        need(depth<128,"XML nesting limit");std::vector<Node> result;
        for(;;) {
            ws();if(at==s.size()){need(close.empty(),"Missing closing tag");return result;}
            if(is("<!--")){auto pos=s.find("-->",at+4);need(pos!=s.npos,"Unterminated comment");at=pos+3;continue;}
            if(is("<?")){auto pos=s.find("?>",at+2);need(pos!=s.npos,"Unterminated declaration");at=pos+2;continue;}
            if(is("</")){at+=2;auto n=name();ws();need(at<s.size()&&s[at++]=='>',"Closing tag");need(n==close,"Mismatched closing tag");return result;}
            // XMLB represents element/attribute trees, not the retail parser's
            // unqueried text nodes. Four shipped combat files contain an extra
            // '/>' after a complete element; it has no element/attribute meaning.
            // Accept only that known punctuation, never discard arbitrary text.
            if(is("/>")){at+=2;continue;}
            need(s[at]=='<',"XMLB cannot represent character data");++at;
            Node n;n.name=name();need(++nodes<1000000,"XML node limit");
            for(;;){ws();need(at<s.size(),"Truncated tag");
                if(is("/>")){at+=2;break;}
                if(s[at]=='>'){++at;n.children=list(n.name,depth+1);break;}
                auto key=name();ws();need(at<s.size()&&s[at++]== '=',"Expected equals");ws();need(at<s.size(),"Missing value");
                std::string value;
                // sub_001282C0 retains quoted bytes verbatim. It also permits
                // unquoted values terminated by whitespace, '/' or '>'. No UTF-8
                // conversion or XML entity expansion may change localized strings.
                if(s[at]=='\''||s[at]=='"'){char quote=s[at++];auto pos=s.find(quote,at);need(pos!=s.npos,"Unterminated value");value=s.substr(at,pos-at);at=pos+1;}
                else{auto start=at;while(at<s.size()&&!space(s[at])&&s[at]!='/'&&s[at]!='>')++at;need(at>start,"Empty unquoted value");value=s.substr(start,at-start);}
                need(value.size()<2048,"Attribute exceeds native XML string buffer");
                n.attrs.emplace_back(std::move(key),std::move(value));
            }
            result.push_back(std::move(n));
        }
    }
};
void word(BinaryXml& b,uint32_t v){for(unsigned i=0;i<4;++i)b.push_back((unsigned char)(v>>(8*i)));}
void patch(BinaryXml& b,size_t at,uint32_t v){for(unsigned i=0;i<4;++i)b.at(at+i)=(unsigned char)(v>>(8*i));}
}
bool xml_text_extension(const std::string& extension){
    std::string e=extension;for(char& c:e)if(c>='A'&&c<='Z')c+=32;
    return e==".chr"||e==".nav"||e==".boy"||e==".xml"||e==".eng"||e==".fre"||e==".ger"||e==".ita"||e==".spa"||e==".pol"||e==".rus";
}
BinaryXml compile_xmlb(const std::string& text){
    auto roots=TextReader(text).list(); BinaryXml b;word(b,0x11b1);word(b,1);
    std::vector<std::pair<size_t,std::string>> refs;
    std::function<uint32_t(const std::vector<Node>&)> emit=[&](const std::vector<Node>& list){
        uint32_t first=end,previous=end;
        for(const auto& n:list){
            if(b.size()>limit)throw std::runtime_error("XMLB size limit");
            uint32_t at=(uint32_t)b.size();if(first==end)first=at;if(previous!=end)patch(b,previous+4,at);previous=at;
            refs.emplace_back(at,n.name);word(b,0);word(b,end);word(b,end);word(b,(uint32_t)n.attrs.size());
            for(const auto& a:n.attrs){refs.emplace_back(b.size(),a.first);word(b,0);refs.emplace_back(b.size(),a.second);word(b,0);}
            uint32_t child=emit(n.children);patch(b,at+8,child);
        }return first;
    };
    emit(roots);std::map<std::string,uint32_t> pool;
    for(const auto& r:refs){auto it=pool.find(r.second);uint32_t off;
        if(it==pool.end()){off=(uint32_t)b.size();pool.emplace(r.second,off);b.insert(b.end(),r.second.begin(),r.second.end());b.push_back(0);}else off=it->second;
        patch(b,r.first,off);
    }
    if(b.size()>limit)throw std::runtime_error("XMLB size limit");return b;
}
std::string decode_xmlb(const void *bytes,unsigned length){
    if(!bytes||length<8||length>limit)throw std::runtime_error("Invalid XMLB length");
    const auto *data=(const unsigned char*)bytes;
    auto get=[&](uint64_t at){if(at+4>length)throw std::runtime_error("Truncated XMLB record");return uint32_t(data[at])|uint32_t(data[at+1])<<8|uint32_t(data[at+2])<<16|uint32_t(data[at+3])<<24;};
    auto str=[&](uint32_t at){if(at>=length)throw std::runtime_error("XMLB string offset");auto p=(const char*)data+at;auto stop=(const char*)memchr(p,0,length-at);if(!stop)throw std::runtime_error("Unterminated XMLB string");return std::string(p,stop);};
    if(get(0)!=0x11b1||get(4)!=1)throw std::runtime_error("Unsupported XMLB header/version");
    std::set<uint32_t> visited;std::map<uint32_t,uint32_t> ranges;std::vector<uint32_t> string_offsets;std::string xml;
    std::function<void(uint32_t,unsigned)> emit=[&](uint32_t at,unsigned depth){
        if(depth>=128)throw std::runtime_error("XMLB nesting limit");
        while(at!=end){
            if(at<8||(at&3)||!visited.insert(at).second)throw std::runtime_error("Invalid/shared/cyclic XMLB node");
            uint32_t name_offset=get(at);string_offsets.push_back(name_offset);std::string n=str(name_offset);valid_name(n);uint32_t sibling=get(uint64_t(at)+4),child=get(uint64_t(at)+8),count=get(uint64_t(at)+12);
            if(uint64_t(at)+16+uint64_t(count)*8>length)throw std::runtime_error("Truncated XMLB attributes");
            uint32_t record_end=at+16+count*8;
            auto following=ranges.lower_bound(at);
            if((following!=ranges.end()&&following->first<record_end)||(following!=ranges.begin()&&std::prev(following)->second>at))throw std::runtime_error("Overlapping XMLB records");
            ranges.emplace(at,record_end);
            xml+="<"+n;
            for(uint32_t i=0;i<count;++i){auto pos=uint64_t(at)+16+uint64_t(i)*8;auto key_offset=get(pos),value_offset=get(pos+4);string_offsets.push_back(key_offset);string_offsets.push_back(value_offset);auto key=str(key_offset),value=str(value_offset);valid_name(key);
                if(value.size()>=2048)throw std::runtime_error("XMLB value exceeds native XML buffer");
                // Feed the retained Raven parser literal bytes, not escaped XML:
                // its attribute reader does not decode entities (001282C0).
                char quote=value.find('"')==value.npos?'"':'\'';
                if(value.find(quote)!=value.npos)throw std::runtime_error("XMLB value contains both quote delimiters");
                if(xml.size()+key.size()+value.size()+4>limit)throw std::runtime_error("Decoded XMLB size limit");
                xml+=' ';xml+=key;xml+='=';xml+=quote;xml+=value;xml+=quote;
            }
            if(child==end)xml+="/>\n";else {xml+='>';emit(child,depth+1);xml+="</"+n+">\n";}
            if(xml.size()>limit)throw std::runtime_error("Decoded XMLB size limit");at=sibling;
        }
    };
    if(length>8)emit(8,0);
    if(!ranges.empty())for(uint32_t offset:string_offsets)if(offset<ranges.rbegin()->second)throw std::runtime_error("XMLB string overlaps records");
    return xml;
}
}
