#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "asset_routes.h"
#define CHECK(x) do{if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
int main(void) {
    char root[MAX_PATH],temp[MAX_PATH],error[256],output[1024],path[MAX_PATH];Xml1BuildSettings s={1,"fre","eng","eng"};
    CHECK(GetTempPathA(sizeof(temp),temp));CHECK(GetTempFileNameA(temp,"xar",0,root));CHECK(DeleteFileA(root));CHECK(CreateDirectoryA(root,NULL));
    CHECK(xml1_asset_routes_init(root,&s,error,sizeof(error)));
    CHECK(xml1_asset_path_filter("D:\\z\\assetsFB.zip",output,sizeof(output))==-1);
    CHECK(xml1_asset_path_filter("\\Device\\CdRom0\\z\\assetsfb.zip",output,sizeof(output))==-1);
    CHECK(xml1_asset_path_filter("D:\\movies\\ntsc\\i\\1\\i101.sfd",output,sizeof(output))==0);
    CHECK(xml1_asset_path_filter("U:\\save.dat",output,sizeof(output))==0);
    CHECK(xml1_asset_path_filter("D:/data/herostat.eng",output,sizeof(output))==1);
    CHECK(!strcmp(output,"D:/data/herostat.engb"));
    CHECK(xml1_asset_path_filter("D:/maps/test.nav",output,sizeof(output))==1);
    CHECK(!strcmp(output,"D:/maps/test.navb"));
    CHECK(xml1_asset_path_filter("D:/maps/test.chr",output,sizeof(output))==1);
    CHECK(!strcmp(output,"D:/maps/test.chrb"));
    CHECK(xml1_asset_path_filter("D:/data/colors.xmlb",output,sizeof(output))==0);
    CHECK(xml1_asset_path_filter("U:/data/test.xml",output,sizeof(output))==0);
    CHECK(xml1_asset_path_filter("D:/data/test.xml",output,3)==-1);
    strcpy(s.audio_language,"fre");CHECK(!xml1_asset_routes_init(root,&s,error,sizeof(error)));
    snprintf(path,sizeof(path),"%s/sounds",root);CHECK(CreateDirectoryA(path,NULL));
    snprintf(path,sizeof(path),"%s/sounds/fre",root);CHECK(CreateDirectoryA(path,NULL));
    CHECK(xml1_asset_routes_init(root,&s,error,sizeof(error)));
    CHECK(xml1_asset_path_filter("D:\\sounds\\ZSDs\\x\\_\\x_common.zsm",output,sizeof(output))==1);
    CHECK(!strcmp(output,"D:/sounds/fre/x/_/x_common.zsm"));
    CHECK(RemoveDirectoryA(path));snprintf(path,sizeof(path),"%s/sounds",root);CHECK(RemoveDirectoryA(path));
    strcpy(s.audio_language,"eng");strcpy(s.movie_language,"fre");CHECK(!xml1_asset_routes_init(root,&s,error,sizeof(error)));
    snprintf(path,sizeof(path),"%s/movies",root);CHECK(CreateDirectoryA(path,NULL));
    snprintf(path,sizeof(path),"%s/movies/ntsc",root);CHECK(CreateDirectoryA(path,NULL));
    snprintf(path,sizeof(path),"%s/movies/ntsc/fre",root);CHECK(CreateDirectoryA(path,NULL));
    CHECK(xml1_asset_routes_init(root,&s,error,sizeof(error)));
    CHECK(xml1_asset_path_filter("\\Device\\CdRom0\\movies\\ntsc\\i\\1\\i101.sfd",output,sizeof(output))==1);
    CHECK(!strcmp(output,"D:/movies/ntsc/fre/i/1/i101.sfd"));
    CHECK(xml1_asset_path_filter("D:/movies/ntsc/i/1/i101.sfd",output,3)==-1);
    s.prefer_files_loose=0;CHECK(xml1_asset_routes_init(root,&s,error,sizeof(error)));
    CHECK(xml1_asset_path_filter("D:/z/assetsfb.zip",output,sizeof(output))==0);
    CHECK(RemoveDirectoryA(path));snprintf(path,sizeof(path),"%s/movies/ntsc",root);CHECK(RemoveDirectoryA(path));snprintf(path,sizeof(path),"%s/movies",root);CHECK(RemoveDirectoryA(path));CHECK(RemoveDirectoryA(root));
    puts("Asset language routing and archive denial tests passed");return 0;
}
