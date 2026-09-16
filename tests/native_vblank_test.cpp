#include <windows.h>
#include <cstdio>
#include <cwchar>
#include <stdexcept>
#include "../renderer/native_vblank.h"
static unsigned long long ticks(FILETIME f){return ((unsigned long long)f.dwHighDateTime<<32)|f.dwLowDateTime;}
int main() {
    try {
        NativeVblank blank;POINT origin={0,0};blank.open(MonitorFromPoint(origin,MONITOR_DEFAULTTOPRIMARY));
        FILETIME c,e,k0,u0,k1,u1;GetThreadTimes(GetCurrentThread(),&c,&e,&k0,&u0);
        LARGE_INTEGER start,end,f;QueryPerformanceFrequency(&f);QueryPerformanceCounter(&start);
        for(unsigned i=0;i<30;++i)blank.wait();
        QueryPerformanceCounter(&end);GetThreadTimes(GetCurrentThread(),&c,&e,&k1,&u1);
        double wall=1000.0*(end.QuadPart-start.QuadPart)/f.QuadPart;
        double cpu=(ticks(k1)+ticks(u1)-ticks(k0)-ticks(u0))/10000.0;
        printf("NATIVE VBLANK waits=30 wall_ms=%.3f thread_cpu_ms=%.3f\n",wall,cpu);
        if(wall<10 || cpu>wall*.3+20)throw std::runtime_error("Display wait returned immediately or consumed excessive CPU");
        puts("PASS: real display waits block without scanline polling");return 0;
    }catch(const std::exception& e){fprintf(stderr,"FAIL: %s\n",e.what());return 1;}
}
