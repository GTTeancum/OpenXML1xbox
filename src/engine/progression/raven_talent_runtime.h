#pragma once
#ifdef __cplusplus
#include <string>
namespace raven { std::string runtime_talent_xml(const void* bytes,unsigned length); }
extern "C" {
#endif
/* Cache-owned result; release with xml1_free_decoded_pkgb (malloc/free ABI). */
char* xml1_decode_runtime_xmlb(const void* bytes,unsigned length,unsigned* xml_length,
    char* error,unsigned error_size);
#ifdef __cplusplus
}
#endif
