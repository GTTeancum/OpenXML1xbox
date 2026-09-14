#pragma once
#ifdef __cplusplus
extern "C" {
#endif
/* Host-owned XML for XML1's parser; caller frees with xml1_free_decoded_pkgb. */
char *xml1_decode_pkgb(const void *bytes,unsigned length,unsigned *xml_length,char *error,unsigned error_size);
void xml1_free_decoded_pkgb(char *xml);
#ifdef __cplusplus
}
#endif
