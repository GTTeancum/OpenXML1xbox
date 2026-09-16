#pragma once
#include <algorithm>
#include <array>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <windows.h>
struct FrameDistribution {
    std::array<double,120> samples{};
    unsigned count=0,over50=0,over100=0;
    double sum=0;
    void add(double ms) {if(count==samples.size())return;samples[count++]=ms;sum+=ms;over50+=ms>50;over100+=ms>100;}
    double percentile(unsigned percent) const {
        if(!count)return 0;auto copy=samples;std::sort(copy.begin(),copy.begin()+count);
        return copy[(count*percent+99)/100-1]; // nearest rank, including p99's long tail
    }
    double low1fps() const {
        if(!count)return 0;auto copy=samples;std::sort(copy.begin(),copy.begin()+count);
        unsigned n=(count+99)/100;double total=0;for(unsigned i=count-n;i<count;i++)total+=copy[i];
        return total>0?1000*n/total:0;
    }
};
struct PerformanceReport {
    FILE *csv=nullptr;FrameDistribution distribution;
    ULONGLONG previous_cpu=0,previous_tick=0;unsigned last_frame=0;
    void exit_reason(const char *reason,unsigned sequence,DWORD error) {
        if(csv){fprintf(csv,"# exit_reason=%s,sequence=%u,win32=%lu,tick_ms=%llu\n",
            reason,sequence,error,GetTickCount64());fflush(csv);}
    }
    static ULONGLONG cpu_time() {
        FILETIME c,e,k,u;if(!GetProcessTimes(GetCurrentProcess(),&c,&e,&k,&u))return 0;
        return ((ULONGLONG)k.dwHighDateTime<<32)+k.dwLowDateTime+((ULONGLONG)u.dwHighDateTime<<32)+u.dwLowDateTime;
    }
    void start(IDirect3D8 *api,const D3DPRESENT_PARAMETERS &pp,bool visible,unsigned selected=0,const char *window_display="") {
        char base[MAX_PATH],path[MAX_PATH+50];DWORD n=GetEnvironmentVariableA("XML1_PERF_SESSION",base,sizeof(base));if(!n||n>=sizeof(base))return;
        snprintf(path,sizeof(path),"%s-renderer-%lu.txt",base,GetCurrentProcessId());FILE *f=fopen(path,"wb");
        if(f){
            char executable[32768]={};GetModuleFileNameA(nullptr,executable,sizeof(executable));
            MONITORINFOEXA monitor={};monitor.cbSize=sizeof(monitor);GetMonitorInfoA(api->GetAdapterMonitor(selected),&monitor);
            const char *name=std::strrchr(executable,'\\');name=name?name+1:executable;
            fprintf(f,"selected_adapter=%u\nselected_display=%s\nwindow_display=%s\nrenderer_executable_name=%s\ngpu_preference=OS override or high-performance driver hint\n",selected,monitor.szDevice,window_display,name);
            fprintf(f,"format=1\nbuild=%s %s\nrenderer_pid=%lu\nvisible=%d\nwindowed=%d\nwidth=%u\nheight=%u\nmultisample=%u\npresentation_interval=%u\n",__DATE__,__TIME__,GetCurrentProcessId(),visible,pp.Windowed,pp.BackBufferWidth,pp.BackBufferHeight,pp.MultiSampleType,pp.FullScreen_PresentationInterval);
            for(UINT i=0;i<api->GetAdapterCount();i++) {D3DADAPTER_IDENTIFIER8 a={};if(SUCCEEDED(api->GetAdapterIdentifier(i,0,&a)))
                fprintf(f,"adapter_%u=%s\ndriver_%u=%s\nvendor_device_%u=%04lx:%04lx\ndriver_version_%u=%08lx:%08lx\n",i,a.Description,i,a.Driver,i,a.VendorId,a.DeviceId,i,a.DriverVersion.HighPart,a.DriverVersion.LowPart);}
            fputs("timing_note=All cost columns are host wall time; no direct GPU execution timestamp is available through this DX8 path. Texture time is a subset of decode/submit. CPU core equivalents may exceed 1.\n",f);fclose(f);
        }
        snprintf(path,sizeof(path),"%s-frames-%lu.csv",base,GetCurrentProcessId());csv=fopen(path,"wb");if(!csv)return;
        fputs("tick_ms,frame,samples,width,height,fps,mean_ms,p50_ms,p95_ms,p99_ms,max_ms,low_1pct_fps,over_50ms,over_100ms,renderer_cpu_cores,wait_ms,read_ms,decode_submit_ms,texture_ms,fence_ms,present_ms,commands,fences\n",csv);fflush(csv);
        previous_cpu=cpu_time();previous_tick=GetTickCount64();
    }
    void frame(unsigned frame,double ms,unsigned width,unsigned height,double wait,double work,double read,double texture,double fence,double present,unsigned commands,unsigned fences) {
        if(!csv)return;
        // Exclude first presentation's startup interval; record it as an event instead.
        if(frame==1){fprintf(csv,"# first_present_tick_ms=%llu\n",GetTickCount64());fflush(csv);return;}
        distribution.add(ms);last_frame=frame;
        if(frame%120)return;
        ULONGLONG tick=GetTickCount64(),cpu=cpu_time();double elapsed=(double)(tick-previous_tick);
        double cores=elapsed>0?(cpu-previous_cpu)/10000.0/elapsed:0;
        const auto &d=distribution;
        long size=ftell(csv);if(size>=0&&size<16*1024*1024)fprintf(csv,"%llu,%u,%u,%u,%u,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%u,%u,%.4f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%u,%u\n",tick,frame,d.count,width,height,d.sum>0?1000*d.count/d.sum:0,d.count?d.sum/d.count:0,d.percentile(50),d.percentile(95),d.percentile(99),d.percentile(100),d.low1fps(),d.over50,d.over100,cores,wait,read,std::max(0.0,work-read-fence-present),texture,fence,present,commands,fences);
        fflush(csv);distribution={};previous_cpu=cpu;previous_tick=tick;
    }
    ~PerformanceReport(){if(csv){fprintf(csv,"# renderer_exit_tick_ms=%llu,last_frame=%u,unreported_frames=%u\n",GetTickCount64(),last_frame,distribution.count);fclose(csv);}}
};
