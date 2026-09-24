#include "asset_routes.h"
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
static Xml1BuildSettings config={1,"eng","eng","eng"};
static int movie_ntsc,movie_pal,audio;
static char game_root[4096]=".";
static int directory(const char *root,const char *prefix,const char *language) {
    char path[4096];int n=snprintf(path,sizeof(path),"%s/%s/%s",root,prefix,language);
    if(n<0||n>=sizeof(path))return 0;
    DWORD attr=GetFileAttributesA(path);return attr!=INVALID_FILE_ATTRIBUTES&&(attr&FILE_ATTRIBUTE_DIRECTORY);
}
int xml1_asset_routes_init(const char *root,const Xml1BuildSettings *settings,char *error,unsigned size) {
    int ntsc=directory(root,"movies/ntsc",settings->movie_language);
    int pal=directory(root,"movies/pal",settings->movie_language);
    int sound=directory(root,"sounds",settings->audio_language);
    if(strcmp(settings->movie_language,"eng") && !ntsc && !pal) {
        if(size)snprintf(error,size,"Movie language %s needs movies/ntsc/%s or movies/pal/%s assets",settings->movie_language,settings->movie_language,settings->movie_language);return 0;
    }
    if(strcmp(settings->audio_language,"eng") && !sound) {
        if(size)snprintf(error,size,"Audio language %s needs sounds/%s assets",settings->audio_language,settings->audio_language);return 0;
    }
    if(strlen(root)>=sizeof(game_root)) {
        if(size)snprintf(error,size,"Game directory path is too long");return 0;
    }
    strcpy(game_root,root);
    config=*settings;
    movie_ntsc=ntsc||strcmp(config.movie_language,"eng");
    movie_pal=pal||strcmp(config.movie_language,"eng");
    audio=sound||strcmp(config.audio_language,"eng");
    return 1;
}
int xml1_asset_path_filter(const char *input,char *output,unsigned size) {
    char normalized[4096];size_t length=strlen(input);
    if(length>=sizeof(normalized))return -1;
    for(size_t i=0;i<=length;++i)normalized[i]=input[i]=='\\'?'/':(char)tolower((unsigned char)input[i]);
    const char *relative=NULL;
    if(!strncmp(normalized,"d:/",3))relative=normalized+3;
    else if(!strncmp(normalized,"/device/cdrom0/",15))relative=normalized+15;
    else if(!strncmp(normalized,"/??/d:/",7))relative=normalized+7;
    if(!relative)return 0;
    const char *base=strrchr(relative,'/');base=base?base+1:relative;
    if(config.prefer_files_loose && !strcmp(base,"assetsfb.zip")) {
        fprintf(stderr,"[LOOSE ASSET DENIED] %s\n",input);return -1;
    }
    /* First-run setup compiles these Raven data types to their later-game
       binary extensions. Select the compiled file explicitly, with no text or
       archive fallback. This does not alter the PKGB's extensionless names. */
    if(config.prefer_files_loose) {
        const char *ext=strrchr(base,'.');
        if(ext && (!strcmp(ext,".xml")||!strcmp(ext,".eng")||!strcmp(ext,".fre")||
                   !strcmp(ext,".ger")||!strcmp(ext,".ita")||!strcmp(ext,".spa")||
                   !strcmp(ext,".pol")||!strcmp(ext,".rus")||!strcmp(ext,".chr")||
                   !strcmp(ext,".nav")||!strcmp(ext,".boy"))) {
            int n=snprintf(output,size,"D:/%sb",relative);
            return n>=0&&(unsigned)n<size?1:-1;
        }
    }
    const char *rest=NULL,*prefix=NULL,*language=NULL;
    if(movie_ntsc&&!strncmp(relative,"movies/ntsc/",12)) {prefix="movies/ntsc";language=config.movie_language;rest=relative+12;}
    else if(movie_pal&&!strncmp(relative,"movies/pal/",11)) {prefix="movies/pal";language=config.movie_language;rest=relative+11;}
    else if(audio&&!strncmp(relative,"sounds/zsds/",12)) {
        /* Route a bank only when the language folder holds it. A partial
           folder, such as sounds/eng with just the imported PC banks, must
           not hide every disc bank still in sounds/zsds. */
        char candidate[4096];
        int n=snprintf(candidate,sizeof(candidate),"%s/sounds/%s/%s",game_root,config.audio_language,relative+12);
        if(n<0||(unsigned)n>=sizeof(candidate))return -1;
        DWORD attr=GetFileAttributesA(candidate);
        if(attr==INVALID_FILE_ATTRIBUTES||(attr&FILE_ATTRIBUTE_DIRECTORY))return 0;
        prefix="sounds";language=config.audio_language;rest=relative+12;
    }
    if(!rest)return 0;
    int n=snprintf(output,size,"D:/%s/%s/%s",prefix,language,rest);
    return n>=0&&(unsigned)n<size?1:-1;
}
