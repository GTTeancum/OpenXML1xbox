/* Included only by the recovered XML2 diagnostic runner. Read-only evidence
 * accompanies an explicitly requested packet capture; normal runs are silent.
 * Addresses and indices are logged before compaction so original XBE consumers
 * can be traced without guessing which model produced a damaged draw. */
if (capture_stream) {
    float low[3]={FLT_MAX,FLT_MAX,FLT_MAX};
    float high[3]={-FLT_MAX,-FLT_MAX,-FLT_MAX};
    unsigned invalid=0;
    uint32_t first_index=0,last_index=0;
    const uint16_t *trace_indices=indexed?guest(a[2],vertex_count*2):NULL;
    const uint32_t trace_device=*(const uint32_t*)guest(0x003FF938,4);
    const uint32_t trace_base=indexed?*(const uint32_t*)guest(trace_device+0x1C,4):a[1];
    for(uint32_t i=0;i<vertex_count;++i) {
        uint32_t index=trace_indices?trace_indices[i]:i;
        if(i==0 || index<first_index)first_index=index;
        if(i==0 || index>last_index)last_index=index;
        uint64_t address=(uint64_t)vb[1]+((uint64_t)trace_base+index)*stride;
        if(address+12>64u*1024*1024) {++invalid;continue;}
        float position[3];memcpy(position,guest(0x80000000u+(uint32_t)address,12),12);
        for(unsigned axis=0;axis<3;++axis) {
            if(!isfinite(position[axis])) {++invalid;continue;}
            if(position[axis]<low[axis])low[axis]=position[axis];
            if(position[axis]>high[axis])high[axis]=position[axis];
        }
    }
    fprintf(stderr,"[XML2 VERTEX CAPTURE] frame=%u draw=%u caller=%08X indexed=%d primitive=%u count=%u fvf=%08X stride=%u vb=%08X data=%08X base=%u indices=%u..%u min=%.9g,%.9g,%.9g max=%.9g,%.9g,%.9g invalid=%u\n",
        frames,draws,*(const uint32_t*)guest(g_esp,4),indexed,a[0],vertex_count,fvf,stride,
        stream,vb[1],trace_base,first_index,last_index,low[0],low[1],low[2],high[0],high[1],high[2],invalid);
}
