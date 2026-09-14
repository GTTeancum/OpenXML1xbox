#include "pkgb_decode.h"
#include <string>
#include <set>
#include <stdexcept>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <cstdio>
namespace {
class Reader {
    const unsigned char *data;unsigned size;
public:
    Reader(const void *p,unsigned n):data((const unsigned char*)p),size(n){}
    uint32_t word(uint64_t offset) {
        if(offset+4>size)throw std::runtime_error("Truncated PKGB node");
        return data[offset]|uint32_t(data[offset+1])<<8|uint32_t(data[offset+2])<<16|uint32_t(data[offset+3])<<24;
    }
    std::string string(uint32_t offset) {
        if(offset>=size)throw std::runtime_error("PKGB string offset out of bounds");
        const char *p=(const char*)data+offset,*end=(const char*)memchr(p,0,size-offset);
        if(!end)throw std::runtime_error("Unterminated PKGB string");
        return std::string(p,end);
    }
    static std::string name(const std::string& text) {
        if(text.empty())throw std::runtime_error("Empty PKGB node/attribute name");
        for(size_t i=0;i<text.size();++i) {
            char c=text[i];bool alpha=(c>='a'&&c<='z')||(c>='A'&&c<='Z')||c=='_';
            if(!alpha && !(i && ((c>='0'&&c<='9')||c=='-'||c=='.')))throw std::runtime_error("Invalid PKGB node/attribute name");
        }
        return text;
    }
    static std::string value(const std::string& text) {
        std::string result;
        for(unsigned char c:text) switch(c) {
            case '&':result+="&amp;";break;case '<':result+="&lt;";break;case '>':result+="&gt;";break;
            case '"':result+="&quot;";break;case '\'':result+="&apos;";break;
            default:if(c<32||c>126)throw std::runtime_error("Unsupported PKGB attribute character");result+=(char)c;
        }
        return result;
    }
    std::string parse() {
        if(word(0)!=0x11b1||word(4)!=1)throw std::runtime_error("Unsupported PKGB header/version");
        if(string(word(8))!="packagedef"||word(12)!=UINT32_MAX||word(20)!=0)throw std::runtime_error("Invalid PKGB packagedef root");
        std::string xml="<packagedef>\n";std::set<uint32_t> visited{8};uint32_t node=word(16);
        while(node!=UINT32_MAX) {
            if(!visited.insert(node).second)throw std::runtime_error("Cycle in PKGB nodes");
            if(word(uint64_t(node)+8)!=UINT32_MAX)throw std::runtime_error("Nested PKGB resource nodes unsupported");
            uint32_t count=word(uint64_t(node)+12);
            if(uint64_t(node)+16+uint64_t(count)*8>size)throw std::runtime_error("Truncated PKGB attributes");
            xml+="  <"+name(string(word(node)));std::set<std::string> keys;
            for(uint32_t i=0;i<count;++i) {
                uint64_t at=uint64_t(node)+16+uint64_t(i)*8;
                std::string key=name(string(word(at)));
                if(!keys.insert(key).second)throw std::runtime_error("Duplicate PKGB attribute");
                xml+=" "+key+"=\""+value(string(word(at+4)))+"\"";
            }
            xml+="/>\n";
            if(xml.size()>16*1024*1024)throw std::runtime_error("Decoded PKGB exceeds 16 MiB");
            node=word(uint64_t(node)+4);
        }
        return xml+"</packagedef>\n";
    }
};
}
extern "C" char *xml1_decode_pkgb(const void *bytes,unsigned length,unsigned *xml_length,char *error,unsigned error_size) {
    try {
        if(!bytes||!xml_length)throw std::runtime_error("Invalid PKGB input");
        std::string xml=Reader(bytes,length).parse();char *result=(char*)malloc(xml.size()+1);
        if(!result)throw std::runtime_error("Cannot allocate decoded PKGB");
        memcpy(result,xml.c_str(),xml.size()+1);*xml_length=(unsigned)xml.size();return result;
    } catch(const std::exception& e) {if(error_size)snprintf(error,error_size,"%s",e.what());return nullptr;}
}
extern "C" void xml1_free_decoded_pkgb(char *xml) {free(xml);}
