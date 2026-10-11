#pragma once
#include <stdint.h>
/* Move one unequipped equipment instance. Deposit=1, withdrawal=0.
 * Preserves guest registers; returns zero without mutation on rejection. */
int xml1_stash_shared_transfer(uint32_t inventory,unsigned item,int deposit);
int xml1_stash_equipped_deposit(uint32_t inventory,uint32_t character,unsigned item);
