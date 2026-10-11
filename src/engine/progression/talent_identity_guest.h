#pragma once
#include <stdint.h>
unsigned xml1_talent_identity_write(void *output,unsigned capacity);
int xml1_talent_identity_load(uint32_t stream,const void *input,unsigned size);
unsigned xml1_talent_identity_remap(uint32_t stream,unsigned saved_id);
void xml1_talent_identity_load_end(void);
