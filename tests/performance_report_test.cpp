#include <windows.h>
typedef BOOL WINBOOL;
#ifndef __MSABI_LONG
#define __MSABI_LONG(value) value##L
#endif
#include <d3d8.h>
#include "../renderer/performance_report.h"
#include <cstdio>
int main(){
 FrameDistribution d;if(d.percentile(99)!=0||d.low1fps()!=0)return 1;
 for(int i=1;i<=120;i++)d.add(i);
 if(d.percentile(50)!=60||d.percentile(95)!=114||d.percentile(99)!=119||d.percentile(100)!=120||d.over50!=70||d.over100!=20)return 2;
 if(std::abs(d.low1fps()-2000.0/239)>1e-8)return 3;
 d={};for(int i=0;i<120;i++)d.add(1000.0/60);
 if(std::abs(d.low1fps()-60)>1e-8||d.over50)return 4;
 d={};for(int i=0;i<119;i++)d.add(10);d.add(500);
 if(d.percentile(99)!=10||d.percentile(100)!=500||d.over100!=1||std::abs(d.low1fps()-2000.0/510)>1e-8)return 5;
 puts("Frame distribution: uniform, tail spikes, nearest-rank percentiles and 1% low passed");return 0;
}
