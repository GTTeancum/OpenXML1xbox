#include "xml2_test_replay.h"
int main(int argc,char **argv) {
    char output[128]="unchanged";
    if(argc!=3)return 2;
    _putenv_s("XML2_TEST_REPLAY",argv[1]);
    if(!strcmp(argv[2],"cancel")) {
        char marker[1024];
        if(snprintf(marker,sizeof(marker),"%s.cancel",argv[1])>=sizeof(marker))return 10;
        remove(marker);
        _putenv_s("XML2_TEST_REPLAY_CANCEL",marker);
        if(xml2_test_replay(1,output,sizeof(output))!=1)return 11;
        FILE *file=fopen(marker,"wb");if(!file)return 12;
        fclose(file);
        strcpy(output,"unchanged");
        // Cancellation must win even when the next scheduled frame was missed.
        if(xml2_test_replay(12,output,sizeof(output))!=-1||strcmp(output,"unchanged"))return 13;
        remove(marker);
        if(xml2_test_replay(13,output,sizeof(output))!=-1)return 14;
        puts("PASS replay: cancellation hands off permanently without delivering stale commands");
        return 0;
    }
    if(!strcmp(argv[2],"missed")) {
        xml2_test_replay(2,output,sizeof(output));return 3;
    }
    if(!strcmp(argv[2],"invalid")) {
        xml2_test_replay(0,output,sizeof(output));return 3;
    }
    if(xml2_test_replay(0,output,sizeof(output))!=0||strcmp(output,"unchanged"))return 5;
    if(xml2_test_replay(1,output,sizeof(output))!=1||strcmp(output,"1 a 4\n"))return 6;
    if(xml2_test_replay(2,output,sizeof(output))!=0)return 7;
    if(xml2_test_replay(10,output,sizeof(output))!=1||strcmp(output,"2 left+move-up 20\n"))return 8;
    if(xml2_test_replay(11,output,sizeof(output))!=-1)return 9;
    puts("PASS replay: frame scheduling, idle, compound input, EOF handoff");return 0;
}
