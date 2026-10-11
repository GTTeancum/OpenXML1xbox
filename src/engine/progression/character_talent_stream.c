#include "engine/progression/character_talent_stream.h"
#if defined(_MSC_VER)
#define TALENT_THREAD_LOCAL __declspec(thread)
#else
#define TALENT_THREAD_LOCAL _Thread_local
#endif
static TALENT_THREAD_LOCAL uint32_t active_stream;
static TALENT_THREAD_LOCAL unsigned record_bytes;
void xml1_talent_stream_reset(void)
{
    active_stream = 0;
    record_bytes = 0;
}
int xml1_talent_stream_begin(uint32_t stream, unsigned section_version)
{
    /* Clear failed/replaced contexts so a corrupt header cannot inherit the
     * width of an earlier successful load on a reused stream address. */
    xml1_talent_stream_reset();
    if (!stream || section_version > 2) return 0;
    active_stream = stream;
    record_bytes = section_version == 2 ? 4 : 3;
    return 1;
}
unsigned xml1_talent_stream_record_bytes(uint32_t stream)
{
    return stream && stream == active_stream ? record_bytes : 0;
}
