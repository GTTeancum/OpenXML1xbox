#include <windows.h>
#include <string.h>
#include "port.h"
#include "recomp_types.h"
#include "build_settings.h"
#include "pkgb_decode.h"
Xml1BuildSettings xml1_build_settings={0,"eng","eng","eng"};
int xml1_prefer_files_loose(void) { return xml1_build_settings.prefer_files_loose; }
char *xml1_decode_pkgb(const void *bytes,unsigned length,unsigned *xml_length,char *error,unsigned error_size)
{
    (void)bytes;(void)length;(void)xml_length;
    if(error_size)snprintf(error,error_size,"NXDK PKGB conversion is not enabled; use original packages");
    return NULL;
}
void xml1_free_decoded_pkgb(char *xml) {free(xml);}
/* These were PC tracing hooks around the guest's own conversion routine. */
void xml1_movie_convert_begin(void) {}
void xml1_movie_convert_end(void) {}
/* Return false to keep the original guest fence test active. */
int xml1_graphics_fence_complete(uint32_t device,uint32_t target) {(void)device;(void)target;return 0;}
void port_audio_creation_result(uint32_t result,uint32_t handle)
{
    MM_STATISTICS stats={.Length=sizeof(stats)};MmQueryStatistics(&stats);
    port_log("DirectSoundCreate result=%08lx handle=%08lx available_pages=%lu image_pages=%lu total_pages=%lu\n",(unsigned long)result,(unsigned long)handle,(unsigned long)stats.AvailablePages,(unsigned long)stats.ImagePagesCommitted,(unsigned long)stats.TotalPhysicalPages);
    if((int32_t)result<0||!handle)nxdk_port_fail("DirectSoundCreate failed",__FILE__,__LINE__);
}
#include <windows.h>
volatile uint32_t port_frame_count,port_frame_tick,port_frame_free_pages;
void port_after_swap(void)
{
    ++port_frame_count;port_frame_tick=GetTickCount();
    if(!(port_frame_count%300)){MM_STATISTICS stats={.Length=sizeof(stats)};if(!MmQueryStatistics(&stats))port_frame_free_pages=stats.AvailablePages;}
}
