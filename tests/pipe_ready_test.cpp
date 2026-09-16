#include <windows.h>
#include <io.h>
#include <fcntl.h>
#include <cstdio>
#include <stdexcept>
#include "../renderer/pipe_ready.h"
#define REQUIRE(x) do {if(!(x))throw std::runtime_error(#x);}while(0)
static bool pump(){return true;}
static bool closed(){return false;}
static DWORD WINAPI writer(void *handle) {
    for(unsigned char i=0;i<100;++i) {
        Sleep(2);DWORD written;
        if(!WriteFile((HANDLE)handle,&i,1,&written,nullptr))return 1;
    }
    CloseHandle((HANDLE)handle);return 0;
}
static unsigned long long ticks(FILETIME t) {
    return (static_cast<unsigned long long>(t.dwHighDateTime)<<32)|t.dwLowDateTime;
}
int main() {
 try {
    HANDLE read,write;REQUIRE(CreatePipe(&read,&write,nullptr,0));
    FILE *file=_fdopen(_open_osfhandle((intptr_t)read,_O_RDONLY|_O_BINARY),"rb");REQUIRE(file);
    HANDLE thread=CreateThread(nullptr,0,writer,write,0,nullptr);REQUIRE(thread);
    FILETIME creation,exit,kernel,user,kernel2,user2;
    GetThreadTimes(GetCurrentThread(),&creation,&exit,&kernel,&user);
    ULONGLONG start=GetTickCount64();
    {
        PipeReady ready(file);
        for(int i=0;i<100;++i)REQUIRE(ready.next(pump)==i);
        REQUIRE(ready.next(pump)==EOF);
    }
    GetThreadTimes(GetCurrentThread(),&creation,&exit,&kernel2,&user2);
    printf("100 delayed commands and EOF: wall_ms=%llu render_thread_cpu_ms=%.3f\n",
        GetTickCount64()-start,(ticks(kernel2)+ticks(user2)-ticks(kernel)-ticks(user))/10000.0);
    fclose(file);WaitForSingleObject(thread,INFINITE);CloseHandle(thread);
    REQUIRE(CreatePipe(&read,&write,nullptr,0));
    file=_fdopen(_open_osfhandle((intptr_t)read,_O_RDONLY|_O_BINARY),"rb");REQUIRE(file);
    {PipeReady ready(file);REQUIRE(ready.next(closed)==EOF);}
    fclose(file);CloseHandle(write);
    puts("PASS: command ownership, blocking wait, EOF and close while read pending");return 0;
 }catch(const std::exception &error){fprintf(stderr,"FAIL %s\n",error.what());return 1;}
}
