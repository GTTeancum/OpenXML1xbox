#pragma once
#include <stdint.h>
void xml1_stash_menu_parse(uint32_t menu,uint32_t node);
/* -1 leaves an ordinary shop on its native path; 0/1 are stash results. */
int xml1_stash_menu_stock(uint32_t menu,uint32_t inventory,unsigned item);
int xml1_stash_menu_action(uint32_t menu,int32_t row,int stock_side);
int xml1_stash_menu_eligibility(uint32_t menu);
int xml1_stash_menu_labels(uint32_t menu,uint32_t control_name,int stock_side);
