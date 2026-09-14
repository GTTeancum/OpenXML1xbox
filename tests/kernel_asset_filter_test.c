#include "kernel.h"
#include "asset_routes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *recomp_lookup(ULONG a) {(void)a;abort();}
void *recomp_lookup_manual(ULONG a) {(void)a;abort();}
extern void xbox_set_asset_path_filter(int (*filter)(const char*,char*,unsigned));
#define CHECK(x) do{if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);exit(1);}}while(0)
static NTSTATUS open_asset(const char *path) {
    XBOX_ANSI_STRING name={(USHORT)strlen(path),(USHORT)(strlen(path)+1),(char*)path};
    XBOX_OBJECT_ATTRIBUTES oa={0,&name,0};XBOX_IO_STATUS_BLOCK io={0};HANDLE h=NULL;
    NTSTATUS status=xbox_NtOpenFile(&h,GENERIC_READ,&oa,&io,7,0x40);
    if(!status)CHECK(xbox_NtClose(h)==0);return status;
}
int main(void) {
    char root[MAX_PATH],temp[MAX_PATH],file[MAX_PATH],error[256];Xml1BuildSettings s={1,"eng","eng","eng"};
    CHECK(GetTempPathA(sizeof(temp),temp));CHECK(GetTempFileNameA(temp,"xaf",0,root));CHECK(DeleteFileA(root));CHECK(CreateDirectoryA(root,NULL));
    snprintf(file,sizeof(file),"%s/assetsfb.zip",root);FILE *f=fopen(file,"wb");CHECK(f);fputs("existing archive",f);fclose(f);
    xbox_path_init(root,NULL);CHECK(xml1_asset_routes_init(root,&s,error,sizeof(error)));xbox_set_asset_path_filter(xml1_asset_path_filter);
    CHECK(open_asset("D:\\assetsfb.zip")!=0);
    CHECK(open_asset("\\Device\\CdRom0\\assetsFB.zip")!=0);
    s.prefer_files_loose=0;CHECK(xml1_asset_routes_init(root,&s,error,sizeof(error)));
    CHECK(open_asset("D:\\assetsfb.zip")==0);
    CHECK(DeleteFileA(file));CHECK(RemoveDirectoryA(root));puts("Kernel file access denies present archive in loose mode and opens it in packaged mode");return 0;
}
