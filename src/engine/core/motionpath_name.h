#ifndef XML1_MOTIONPATH_NAME_H
#define XML1_MOTIONPATH_NAME_H
#include <stddef.h>
#include <string.h>

/* PKGB motionpath names are relative to motionpaths/ and conventionally omit
 * the extension. Older XML1 packages explicitly carry .igb; accept both while
 * retaining the same physical resource and the native resource manager. */
static inline int xml1_motionpath_name(char *name, size_t capacity) {
    size_t n=0;
    while(n<capacity && name[n])++n;
    if(n==capacity)return 0;
    if(n>=4 && name[n-4]=='.' && (name[n-3]=='i'||name[n-3]=='I') &&
       (name[n-2]=='g'||name[n-2]=='G') && (name[n-1]=='b'||name[n-1]=='B'))return 1;
    if(!n || capacity-n<5)return 0;
    memcpy(name+n,".igb",5);
    return 1;
}
#endif
