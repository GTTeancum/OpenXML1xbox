#include "worker_lifetime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static HANDLE launch(const char *mode,unsigned code) {
    char executable[MAX_PATH],command[2*MAX_PATH];
    if(!GetModuleFileNameA(NULL,executable,sizeof(executable))) ExitProcess(90);
    snprintf(command,sizeof(command),"\"%s\" %s %u",executable,mode,code);
    STARTUPINFOA startup={0}; PROCESS_INFORMATION process={0}; startup.cb=sizeof(startup);
    if(!CreateProcessA(NULL,command,NULL,NULL,FALSE,CREATE_NO_WINDOW,NULL,NULL,&startup,&process)) ExitProcess(91);
    CloseHandle(process.hThread); return process.hProcess;
}
int main(int argc,char **argv) {
    if(argc==3 && !strcmp(argv[1],"--child")) { Sleep(50); return atoi(argv[2]); }
    if(argc==3 && !strcmp(argv[1],"--blocked-parent")) {
        if(!xml1_monitor_worker_exit(launch("--child",(unsigned)atoi(argv[2])))) return 92;
        Sleep(INFINITE); return 93;
    }
    const unsigned codes[]={0,7};
    for(unsigned i=0;i<2;++i) {
        HANDLE process=launch("--blocked-parent",codes[i]); DWORD code=99;
        if(WaitForSingleObject(process,5000)!=WAIT_OBJECT_0) {
            TerminateProcess(process,94); CloseHandle(process); return 94;
        }
        if(!GetExitCodeProcess(process,&code) || code!=codes[i]) return 95;
        CloseHandle(process);
    }
    puts("PASS: worker close and failure stop a parent whose main thread is blocked");
    return 0;
}
