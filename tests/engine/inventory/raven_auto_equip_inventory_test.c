#include "engine/inventory/raven_auto_equip_inventory.h"
#include "engine/inventory/raven_auto_equip_selection.h"
#include <stdio.h>
#include <stdlib.h>
#define CHECK(x) do { if (!(x)) { fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x); exit(1); } } while(0)

typedef struct selection_fixture {
    unsigned equipped[2][3], count[2], calls, fail;
} selection_fixture;
static int eligible(void *context,uint32_t hero,unsigned item) {
    selection_fixture *f=context;
    CHECK(hero==11 || hero==22); /* Excluded heroes must never reach callbacks. */
    unsigned h=hero==22;
    if(f->count[h]>=3)return 0;
    return !(hero==11 && item==1); /* Native requirement rejects top-price gear. */
}
static int assign(void *context,uint32_t hero,unsigned item) {
    selection_fixture *f=context;unsigned h=hero==22;
    ++f->calls;
    if(f->fail)return 0;
    CHECK(eligible(context,hero,item));
    f->equipped[h][f->count[h]++]=item;return 1;
}
static void selection_test(void) {
    raven_auto_equip_inventory pool;
    const uint8_t quantities[]={1,1,2,2,1}, maximum[]={2,2,2,2,2};
    /* Deliberately unordered categories and prices. Category42 is mod data. */
    const raven_auto_equip_candidate items[]={
        {3,42,800}, {0,0,50}, {1,0,100}, {4,42,800}, {2,1,70}};
    const uint32_t heroes[]={11,22};
    selection_fixture f={0};uint8_t result[5];
    CHECK(raven_auto_equip_inventory_begin(&pool,quantities,maximum,5));
    CHECK(raven_auto_equip_select(&pool,items,5,heroes,2,eligible,assign,&f));
    CHECK(f.count[0]==3 && f.count[1]==3 && f.calls==6);
    CHECK(f.equipped[0][0]==0 && f.equipped[1][0]==1);
    CHECK(f.equipped[0][1]==2 && f.equipped[1][1]==2);
    CHECK(f.equipped[0][2]==3 && f.equipped[1][2]==3);
    CHECK(raven_auto_equip_inventory_finish(&pool,result,5));
    CHECK(result[0]==0&&result[1]==0&&result[2]==0&&result[3]==0&&result[4]==1);
    /* A failing native insertion must stop, without consuming that copy or
     * attempting another character. Runtime owns rollback of earlier inserts. */
    memset(&f,0,sizeof f);f.fail=1;
    CHECK(raven_auto_equip_inventory_begin(&pool,quantities,maximum,5));
    CHECK(!raven_auto_equip_select(&pool,items,5,heroes,2,eligible,assign,&f));
    CHECK(f.calls==1&&pool.available[0]==1);
    memset(&f,0,sizeof f);
    CHECK(raven_auto_equip_select(&pool,items,5,NULL,0,eligible,assign,&f));
    CHECK(!f.calls);
}

int main(void)
{
    selection_test();
    raven_auto_equip_inventory pool, before;
    uint8_t quantity[3] = {255, 1, 0}, maximum[3] = {255, 1, 4};
    uint8_t result[3] = {90, 91, 92};
    CHECK(raven_auto_equip_inventory_begin(&pool, quantity, maximum, 3));
    /* Four participants release and re-equip identical gear. The intermediate
     * quantity exceeds both a byte and the native maximum; no copy is lost. */
    for (unsigned hero=0; hero<4; ++hero)
        CHECK(raven_auto_equip_inventory_release(&pool, 0));
    CHECK(pool.available[0] == 259);
    CHECK(!raven_auto_equip_inventory_finish(&pool, result, 3));
    CHECK(result[0]==90 && result[1]==91 && result[2]==92);
    for (unsigned hero=0; hero<4; ++hero)
        CHECK(raven_auto_equip_inventory_take(&pool, 0));
    CHECK(raven_auto_equip_inventory_finish(&pool, result, 3));
    CHECK(result[0]==255 && result[1]==1 && result[2]==0);

    /* One available unique item cannot be handed to two heroes. An untouched
     * item (including gear belonging to excluded characters) stays unchanged. */
    CHECK(raven_auto_equip_inventory_take(&pool, 1));
    before=pool;
    CHECK(!raven_auto_equip_inventory_take(&pool, 1));
    CHECK(!raven_auto_equip_inventory_take(&pool, 255));
    CHECK(!raven_auto_equip_inventory_release(&pool, 255));
    CHECK(!memcmp(&before,&pool,sizeof(pool)));
    CHECK(raven_auto_equip_inventory_finish(&pool, result, 3));
    CHECK(result[0]==255 && result[1]==0 && result[2]==0);

    /* Overflow in a later item must not partially publish an earlier change. */
    CHECK(raven_auto_equip_inventory_release(&pool, 1));
    CHECK(raven_auto_equip_inventory_release(&pool, 1));
    result[0]=90; result[1]=91; result[2]=92;
    CHECK(!raven_auto_equip_inventory_finish(&pool, result, 3));
    CHECK(result[0]==90 && result[1]==91 && result[2]==92);
    before=pool;
    quantity[2]=5;
    CHECK(!raven_auto_equip_inventory_begin(&pool,quantity,maximum,3));
    CHECK(!memcmp(&before,&pool,sizeof(pool)));
    CHECK(!raven_auto_equip_inventory_begin(&pool,quantity,maximum,256));
    CHECK(!raven_auto_equip_inventory_finish(&pool,result,2));
    pool.available[0]=UINT32_MAX;
    CHECK(!raven_auto_equip_inventory_release(&pool,0));
    CHECK(pool.available[0]==UINT32_MAX);
    puts("PASS auto-equip inventory: temporary overflow, copy conservation, exhaustion, sentinel rejection and atomic output");
    return 0;
}
