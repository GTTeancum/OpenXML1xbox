#include "raven_native_damage.h"
#include <cstdio>
extern "C" int raven_native_attack_damage_bound(uint32_t) { return 0; }
#define CHECK(x) do{if(!(x)){std::fprintf(stderr,"FAIL line %d\n",__LINE__);return 1;}}while(0)
int main() {
    float value=-99;
    CHECK(!raven_native_damage_import_value(100,&value)&&value==-99);
    CHECK(raven_native_damage_amount(100,-32768)==-32768);
    const auto outer=raven_native_damage_import_begin(1,2,100,0.25f);
    CHECK(raven_native_damage_import_value(100,&value)&&value==0.25f);
    CHECK(raven_native_damage_amount(100,0)==0.25);
    CHECK(raven_native_damage_amount(100,0)>0&&raven_native_damage_amount(100,0)!=0);
    CHECK((float)(10.0-raven_native_damage_amount(100,0))==9.75f);
    raven_native_damage_enter(0x5C590,1234);
    raven_native_damage_copy(100,200);
    raven_native_damage_scale(0x92314,200,3,0);
    CHECK(raven_native_damage_import_value(200,&value)&&value==0.75f);
    const auto nested=raven_native_damage_import_begin(3,4,200,7.125f);
    raven_native_damage_set(0x92413,200,0,7);
    CHECK(raven_native_damage_import_value(200,&value)&&value==0);
    raven_native_damage_import_end(nested);
    CHECK(raven_native_damage_import_value(200,&value)&&value==0.75f);
    // A nested ordinary hit is not an imported float just because the outer
    // hit is imported, even when it reuses the same record address.
    raven_native_damage_enter(0xCFDC0,2345);
    raven_native_damage_seed(9,10,200,12);
    value=-99;CHECK(!raven_native_damage_import_value(200,&value)&&value==-99);
    CHECK(raven_native_damage_amount(200,12)==12);
    raven_native_damage_leave(0xCFDC0,2345);
    CHECK(raven_native_damage_import_value(200,&value)&&value==0.75f);
    raven_native_damage_copy_back(200,100);
    CHECK(raven_native_damage_import_value(100,&value)&&value==0.75f);
    raven_native_damage_leave(0x5C590,1234);
    CHECK(raven_native_damage_import_value(100,&value)&&value==0.75f);
    value=-99;CHECK(!raven_native_damage_import_value(200,&value)&&value==-99);
    raven_native_damage_import_end(outer);
    CHECK(!raven_native_damage_import_value(100,&value)&&value==-99);
    const auto reused=raven_native_damage_import_begin(5,6,100,0.125f);
    CHECK(raven_native_damage_import_value(100,&value)&&value==0.125f);
    raven_native_damage_clear(100);
    CHECK(!raven_native_damage_import_value(100,&value));
    raven_native_damage_import_end(reused);
    puts("PASS imported fractional transport: native copy/modifier hooks, nested imported/ordinary isolation, retirement and record reuse");
    return 0;
}
