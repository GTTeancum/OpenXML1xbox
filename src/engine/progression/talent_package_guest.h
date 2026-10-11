#pragma once
#include <stdint.h>
int xml1_talent_package_load(uint32_t node,uint32_t type);
uint32_t xml1_talent_package_path(void);
uint32_t xml1_talent_package_owner(void);
void xml1_talent_package_registered(uint32_t node,uint32_t result,uint32_t document);
void xml1_talent_package_release(uint32_t buffer);
void xml1_talent_package_release_all(void);
