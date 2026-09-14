#include "build_settings.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);exit(1);}}while(0)
static void put(const char *path,const char *text) {FILE *f=fopen(path,"wb");CHECK(f);fputs(text,f);fclose(f);}
int main(void) {
    char temp[MAX_PATH],path[MAX_PATH],error[256];Xml1BuildSettings s;
    CHECK(GetTempPathA(sizeof(temp),temp));CHECK(GetTempFileNameA(temp,"xbs",0,path));
    const char *values[]={"1","true","TRUE","0","false","FALSE"};
    for(unsigned i=0;i<6;++i) {
        char text[256];snprintf(text,sizeof(text),"[BUILD]\nPreferFilesLoose = %s\n",values[i]);put(path,text);
        CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(s.prefer_files_loose==(i<3));
    }
    put(path,"[BUILD]\nDefaultTextLanguage=fre\nAllowedTextLanguages=eng, fre, ger\n");
    CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(!strcmp(s.text_language,"fre"));CHECK(s.prefer_files_loose);
    const char *invalid[]={"PreferFilesLoose=yes","DefaultTextLanguage=zzz","DefaultMovieLanguage=fre","AllowedTextLanguages=eng,","AllowedTextLanguages=","bad line"};
    for(unsigned i=0;i<sizeof(invalid)/sizeof(invalid[0]);++i) {
        char text[256];snprintf(text,sizeof(text),"[BUILD]\n%s\n",invalid[i]);put(path,text);
        CHECK(!xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(*error);
    }
    CHECK(DeleteFileA(path));CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(s.prefer_files_loose);CHECK(!strcmp(s.text_language,"eng"));
    puts("Build settings parsing/defaults/validation passed");return 0;
}
