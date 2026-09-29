#pragma once
#include "pc_input_channel.h"
#ifdef __cplusplus
extern "C" {
#endif
/* Returns zero to retain native resolution (controller, unknown or non-input token). */
int xml1_pc_prompt_supported(const char *token);
int xml1_pc_prompt_text(const Xml1PcInputSnapshot *input,const char *token,char *out,unsigned capacity);
void xml1_pc_prompt_begin_measure(void);
int xml1_pc_prompt_was_expanded(void);
void xml1_pc_prompt_native_measure(int enabled);
unsigned xml1_pc_prompt_guest(const char *token);
#ifdef __cplusplus
}
#endif
