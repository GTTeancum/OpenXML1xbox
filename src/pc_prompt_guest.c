#include "pc_prompts.h"
#include "xbox_memory_layout.h"
#include "kernel.h"
#include <string.h>
extern ptrdiff_t g_xbox_mem_offset;
static RECOMP_TLS int measuring_native, expanded;
void xml1_pc_prompt_begin_measure(void) { expanded=0; }
int xml1_pc_prompt_was_expanded(void) { return expanded; }
void xml1_pc_prompt_native_measure(int enabled) { measuring_native=enabled; }
/* The native text consumers immediately measure/copy an expansion before
 * asking for another token. Thread-local storage avoids shared temporary labels
 * and remains guest-addressable through the ordinary runtime heap. */
unsigned xml1_pc_prompt_guest(const char *token) {
    /* Color/format tokens are frequent; do not lock/copy the input channel for them. */
    if(measuring_native || !xml1_pc_prompt_supported(token))return 0;
    Xml1PcInputSnapshot input;
    char label[128];
    if(!xml1_pc_channel_read(&input,1) || !xml1_pc_prompt_text(&input,token,label,sizeof(label)))return 0;
    static RECOMP_TLS unsigned storage;
    if(!storage)storage=xbox_HeapAlloc(sizeof(label),16);
    if(!storage)return 0;
    memcpy((void*)((uintptr_t)g_xbox_mem_offset+storage),label,strlen(label)+1);
    expanded=1;
    return storage;
}
