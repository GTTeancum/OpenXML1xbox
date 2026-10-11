#ifndef RAVEN_AUTO_EQUIP_SELECTION_H
#define RAVEN_AUTO_EQUIP_SELECTION_H
#include "engine/inventory/raven_auto_equip_inventory.h"

typedef struct raven_auto_equip_candidate {
    unsigned item;
    int32_t category, cost;
} raven_auto_equip_candidate;

/* The caller supplies only participating living, auto-enabled characters and
 * actual equipment definitions. XML2 4A7E0 selects category-major, then party
 * order; 1B5B90 mode1 ranks by descending cost. XML1's categories are authored
 * values (stock 0..2), not XML2's 1..3. Enumerate those values instead of
 * renumbering assets or hardcoding three categories and excluding mod items.
 * Native eligibility retains XML1's capacity, requirements and class rules.
 * Equally priced items retain input order; no new balance policy is added.
 *
 * Assignment must update the native eligibility view for subsequent picks.
 * A failed assignment rejects the whole pass: caller rolls back stats/effects
 * and discards this private ledger. No native inventory has been published. */
static inline int raven_auto_equip_select(
    raven_auto_equip_inventory *pool,
    const raven_auto_equip_candidate *items, unsigned count,
    const uint32_t *characters, unsigned character_count,
    int (*eligible)(void *,uint32_t,unsigned),
    int (*assign)(void *,uint32_t,unsigned), void *context)
{
    int32_t categories[RAVEN_AUTO_EQUIP_ITEMS];
    unsigned category_count=0;
    if(!pool || (!items&&count) || count>RAVEN_AUTO_EQUIP_ITEMS ||
       (!characters&&character_count) || !eligible || !assign) return 0;
    for(unsigned i=0;i<count;++i) {
        unsigned position=0;
        if(items[i].item>=pool->count || items[i].item>=RAVEN_AUTO_EQUIP_ITEMS)
            return 0;
        for(unsigned j=0;j<i;++j)if(items[j].item==items[i].item)return 0;
        while(position<category_count && categories[position]<items[i].category)
            ++position;
        if(position<category_count && categories[position]==items[i].category)continue;
        memmove(categories+position+1,categories+position,
                (category_count-position)*sizeof(*categories));
        categories[position]=items[i].category;++category_count;
    }
    for(unsigned c=0;c<category_count;++c) {
        for(unsigned h=0;h<character_count;++h) {
            unsigned best=count;
            for(unsigned i=0;i<count;++i) {
                if(items[i].category!=categories[c] ||
                   !pool->available[items[i].item] ||
                   (best!=count && items[i].cost<=items[best].cost))continue;
                if(eligible(context,characters[h],items[i].item))best=i;
            }
            if(best==count)continue;
            if(!assign(context,characters[h],items[best].item))return 0;
            if(!raven_auto_equip_inventory_take(pool,items[best].item))return 0;
        }
    }
    return 1;
}
#endif
