#include "xmlb.h"
#include "pkgb_decode.h"
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <cstring>
#include <cstdio>
extern "C" char *xml1_decode_pkgb(const void *bytes,unsigned length,unsigned *xml_length,char *error,unsigned error_size) {
    try {
        if(!bytes||!xml_length)throw std::runtime_error("Invalid XMLB/PKGB input");
        std::string xml=xml1::decode_xmlb(bytes,length);char *result=(char*)malloc(xml.size()+1);
        if(!result)throw std::runtime_error("Cannot allocate decoded XMLB/PKGB");
        memcpy(result,xml.c_str(),xml.size()+1);*xml_length=(unsigned)xml.size();return result;
    } catch(const std::exception& e) {if(error_size)snprintf(error,error_size,"%s",e.what());return nullptr;}
}
extern "C" void xml1_free_decoded_pkgb(char *xml) {free(xml);}
