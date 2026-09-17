#include "xmlb.h"
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <cstring>
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);std::exit(1);}}while(0)
void rejects(std::function<void()> fn){bool failed=false;try{fn();}catch(...){failed=true;}CHECK(failed);}
void put(xml1::BinaryXml& b,unsigned at,unsigned v){for(unsigned i=0;i<4;++i)b[at+i]=(unsigned char)(v>>(i*8));}
int main(){
 const unsigned char golden[]={0xb1,0x11,0,0,1,0,0,0,24,0,0,0,255,255,255,255,255,255,255,255,0,0,0,0,'r',0};
 auto b=xml1::compile_xmlb("<r/>");CHECK(b.size()==sizeof(golden)&&!memcmp(b.data(),golden,sizeof(golden)));
 std::string text="<!--comment--><root><x a='&amp; < & >' b=unquoted c=\"caf\xe9\"/><x a='second'/></root><other/>";
 auto compiled=xml1::compile_xmlb(text);auto decoded=xml1::decode_xmlb(compiled.data(),(unsigned)compiled.size());
 CHECK(decoded.find("&amp; < & >")!=decoded.npos);CHECK(decoded.find("caf\xe9")!=decoded.npos);
 CHECK(xml1::compile_xmlb(decoded)==compiled);CHECK(decoded.find("second")>decoded.find("caf"));
 CHECK(xml1::compile_xmlb("").size()==8);
 CHECK(xml1::compile_xmlb("<x/> />")==xml1::compile_xmlb("<x/>"));
 rejects([]{xml1::compile_xmlb("<r>meaningful text</r>");});
 rejects([]{xml1::compile_xmlb("<r><x></r>");});
 rejects([]{xml1::compile_xmlb("<!DOCTYPE x SYSTEM 'external'><x/>");});
 rejects([&]{xml1::decode_xmlb(b.data(),7);});
 auto bad=b;put(bad,12,8);rejects([&]{xml1::decode_xmlb(bad.data(),(unsigned)bad.size());});
 bad=b;put(bad,16,8);rejects([&]{xml1::decode_xmlb(bad.data(),(unsigned)bad.size());});
 bad=b;put(bad,20,0xffffffff);rejects([&]{xml1::decode_xmlb(bad.data(),(unsigned)bad.size());});
 bad=b;bad.pop_back();rejects([&]{xml1::decode_xmlb(bad.data(),(unsigned)bad.size());});
 bad=b;put(bad,8,0xfffffffe);rejects([&]{xml1::decode_xmlb(bad.data(),(unsigned)bad.size());});
 puts("XMLB golden layout, nested/forest data, raw localization, and malformed-input checks passed");
}
