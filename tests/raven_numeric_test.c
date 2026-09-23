#include "raven_numeric.h"
#include "raven_harming_settings.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
#if defined(_M_X64)
#include <emmintrin.h>
#endif
#define CHECK(x) do { if (!(x)) { fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x); return 1; } } while(0)
int main(void) {
    for(unsigned previous=0;previous<256;++previous)
        for(unsigned definition=0;definition<256;++definition){
            uint8_t result=raven_xml1_harming_trait_flags((uint8_t)previous,(uint8_t)definition);
            CHECK((result&0xFE)==(previous&0xFE));
            CHECK((result&1)==((definition&2)?0:1));
        }
    puts("PASS XML1 harming trait translation: explicit enable/disable, unrelated native flags preserved");
    const struct {float input;int16_t expected;} integer_hits[]={
        {0,0},{0.001f,1},{0.49f,1},{1.49f,1},{1.5f,2},{2.5f,3},
        {-0.001f,-1},{-1.5f,-2},{32767,32767},{-32768,-32768}
    };
    for(unsigned i=0;i<sizeof(integer_hits)/sizeof(integer_hits[0]);++i){
        int16_t hit=99;
        CHECK(raven_xml1_imported_damage_short(integer_hits[i].input,&hit));
        CHECK(hit==integer_hits[i].expected);
    }
    int16_t invalid_hit=99;
    CHECK(!raven_xml1_imported_damage_short(NAN,&invalid_hit));
    CHECK(!raven_xml1_imported_damage_short(INFINITY,&invalid_hit));
    CHECK(!raven_xml1_imported_damage_short(32768,&invalid_hit));
    CHECK(!raven_xml1_imported_damage_short(-32769,&invalid_hit));
    CHECK(invalid_hit==99);
    puts("PASS imported integer-hit policy: rounding, nonzero minimum, true zero, signed range");
    float next_tick=-123.0f;
    CHECK(raven_xml2_harming_interval(0)==(double)0.33f);
    CHECK(raven_xml2_harming_interval(3)==1.0/3.0);
    CHECK(raven_xml2_harming_next_tick(12,10,10.125f,2,&next_tick));
    CHECK(next_tick==10.625f); /* schedule from the second native clock read */
    CHECK(raven_xml2_harming_next_tick(12,11.875f,11.9375f,2,&next_tick));
    CHECK(next_tick==12.0625f); /* native code does not clamp to the end time */
    CHECK(!raven_xml2_harming_next_tick(12,12,13,2,&next_tick));
    CHECK(next_tick==12.0625f);
    CHECK(!raven_xml2_harming_next_tick(12,NAN,13,2,&next_tick));
    CHECK(next_tick==12.0625f);
    CHECK(raven_xml2_harming_damage(60,2,2,2)==15);
    CHECK(raven_xml2_harming_damage(60,2,0.125f,2)==3.75f);
    CHECK(raven_xml2_harming_damage(60,0,2,2)==0);
    CHECK(raven_xml2_harming_damage(60,2,NAN,2)==0);
    float range[2];
    raven_xml2_affecter_range_reset(range,1);
    raven_xml2_affecter_range_apply(range,1,0.5,0.5f);
    CHECK(range[0]==0.5f&&range[1]==0.5f&&!raven_xml2_affecter_range_needs_random(range));
    CHECK(raven_xml2_damage_callback_bonus(7,raven_xml2_affecter_range_sample(range,NAN),0)==4);
    raven_xml2_affecter_range_reset(range,1);
    raven_xml2_affecter_range_apply(range,1,2,2);
    CHECK(raven_xml2_damage_callback_bonus(7,raven_xml2_affecter_range_sample(range,NAN),0)==14);
    raven_xml2_affecter_range_reset(range,0);
    raven_xml2_affecter_range_apply(range,0,2.5,4);
    raven_xml2_affecter_range_apply(range,0,1,2);
    CHECK(range[0]==3.5f&&range[1]==6&&raven_xml2_affecter_range_needs_random(range));
    CHECK(raven_xml2_affecter_range_sample(range,0.5)==4.75f);
    raven_xml2_affecter_range_reset(range,2);
    raven_xml2_affecter_range_apply(range,2,-4,-2);
    CHECK(range[0]==0&&range[1]==0);
    raven_xml2_affecter_range_apply(range,2,3,5);
    CHECK(range[0]==3&&range[1]==5);
    raven_xml2_affecter_range_reset(range,3);
    raven_xml2_affecter_range_apply(range,3,3,5);
    CHECK(range[0]==0&&range[1]==0);
    raven_xml2_affecter_range_apply(range,3,-4,-2);
    CHECK(range[0]==-4&&range[1]==-2);
    for(unsigned mode=2;mode<=3;++mode) {
        range[0]=range[1]=1;
        raven_xml2_affecter_range_apply(range,mode,NAN,NAN);
        CHECK(isnan(range[0])&&isnan(range[1]));
        raven_xml2_affecter_range_apply(range,mode,3,5);
        CHECK(range[0]==3&&range[1]==5);
    }
    range[0]=5;range[1]=3;
    CHECK(!raven_xml2_affecter_range_needs_random(range)&&raven_xml2_affecter_range_sample(range,NAN)==5);
    range[1]=NAN;
    CHECK(!raven_xml2_affecter_range_needs_random(range)&&raven_xml2_affecter_range_sample(range,0.5)==5);
    raven_xml2_affecter_range_reset(range,0);
    raven_xml2_affecter_range_apply(range,0,16777216,16777216);
    raven_xml2_affecter_range_apply(range,0,1,1);
    raven_xml2_affecter_range_apply(range,0,-16777216,-16777216);
    CHECK(range[0]==0&&range[1]==0);
    raven_xml2_stat_cache cache;
    puts("PASS affecter aggregation: modes, endpoints, sampling gate, rounding and damage composition");
    raven_xml2_stat_cache_reset(&cache);
    for(unsigned i=0;i<4;++i) {
        CHECK(cache.add[i]==0&&cache.scale[i]==1);
        CHECK(raven_xml2_stat_cache_apply(&cache,2+i,0,i+1));
        CHECK(raven_xml2_stat_cache_apply(&cache,2+i,1,1.5));
    }
    CHECK(raven_xml2_stat_cache_apply(&cache,6,0,0.5));
    CHECK(raven_xml2_stat_cache_apply(&cache,6,1,2));
    CHECK(raven_xml2_effective_stat(3,2,1,cache.add[0],cache.scale[0],cache.all_add,cache.all_scale)==22);
    CHECK(raven_xml2_effective_stat(3,2,1,cache.add[3],cache.scale[3],cache.all_add,cache.all_scale)==31);
    raven_xml2_stat_cache saved=cache;
    CHECK(!raven_xml2_stat_cache_apply(&cache,7,0,999));
    CHECK(!raven_xml2_stat_cache_apply(&cache,2,2,999));
    CHECK(!memcmp(&cache,&saved,sizeof(cache)));
    // Rebuild after removing all modifiers must not retain a previous buff.
    raven_xml2_stat_cache_reset(&cache);
    CHECK(cache.add[3]==0&&cache.scale[3]==1&&cache.all_add==0&&cache.all_scale==1);
    CHECK(raven_xml2_stat_cache_apply(&cache,2,0,16777216));
    CHECK(raven_xml2_stat_cache_apply(&cache,2,0,1));
    CHECK(raven_xml2_stat_cache_apply(&cache,2,0,-16777216));
    CHECK(cache.add[0]==0); // Per-write rounding, not a final combined sum.
    CHECK(raven_xml2_stat_cache_apply(&cache,2,0,-1));
    CHECK(raven_xml2_stat_cache_apply(&cache,2,0,1.00000002));
    CHECK(cache.add[0]>0); // Evaluated operand must not narrow prematurely.
    puts("PASS stat modifier cache: all stat slots, modes, rebuild, per-write rounding");
    CHECK(raven_xml2_damage_sample(11,15,0.125,0)==11.5f);
    CHECK(raven_xml2_damage_sample(11,15,0.875,0)==14.5f);
    CHECK(raven_xml2_damage_sample(11,15,0,0)==11.0f);
    CHECK(raven_xml2_damage_sample(11,15,1,0)==15.0f);
    CHECK(raven_xml2_damage_sample(15,11,0.125,0)==14.5f);
    CHECK(raven_xml2_damage_sample(-32768,32767,0.5,0)==-0.5f);
    CHECK(raven_xml2_damage_sample(11,14,NAN,1)==12.5f);
    CHECK(raven_xml2_damage_sample(15,15,0.75,0)==15.0f);
    CHECK(raven_xml2_effective_stat(255,255,255,0,1,0,1)==765);
    CHECK(raven_xml2_effective_stat(3,2,1,0.5f,1.5f,0.25f,2)==20);
    CHECK(raven_xml2_effective_stat(3,2,1,-10.5f,1.5f,0.25f,2)==-12);
    CHECK(raven_xml2_effective_stat(255,255,255,0,100,0,1)==10964);
    CHECK(raven_xml2_effective_stat(1,0,0,0,1,0,0)==0);
    // Final float-store rounding is observable before integer truncation.
    CHECK(raven_xml2_effective_stat(1,0,0,-0.00000002f,1,0,1)==1);
    CHECK(raven_xml2_effective_stat(1,0,0,0,INFINITY,0,1)==0);
    CHECK(raven_xml2_damage_stat_index(0)==0);
    CHECK(raven_xml2_damage_stat_index(0x100)==3);
    CHECK(raven_xml2_damage_stat_index(0x800)==3);
    CHECK(raven_xml2_damage_stat_index(0xFFFFF0FFu)==0);
    CHECK(raven_xml2_damage_stat_factor(3,0)==1.1500000022351742);
    CHECK(raven_xml2_damage_stat_factor(3,0x100)==1.0299999993294477);
    CHECK(raven_xml2_damage_stat_factor(-3,0)==0.8499999977648258);
    CHECK(raven_xml2_damage_stat_factor(-32768,0)==-1637.4000244140625);
    // 5% and 1% branches must not share the same multiplier, and the
    // factor must retain precision until its consumer's float store.
    CHECK(raven_xml2_damage_stat_bonus(100.25f,raven_xml2_damage_stat_factor(3,0))==116.25f);
    CHECK(raven_xml2_damage_stat_bonus(100.25f,raven_xml2_damage_stat_factor(3,0x100))==104.25f);
    // These distinguish upward bonus rounding from truncation, nearest
    // rounding, rounding the entire result, and combining the two stages.
    CHECK(raven_xml2_damage_stat_bonus(6.25f,1.25)==8.25f);
    CHECK(raven_xml2_damage_stat_bonus(6.25f,0.75)==5.25f);
    CHECK(raven_xml2_damage_stat_bonus(-6.25f,1.25)==-7.25f);
    CHECK(raven_xml2_damage_stat_bonus(6.25f,1)==6.25f);
    CHECK(raven_xml2_damage_callback_bonus(6.25f,1.25f,0)==8.25f);
    CHECK(raven_xml2_damage_callback_bonus(6.25f,1,-0.25f)==6.25f);
    CHECK(raven_xml2_damage_callback_bonus(6.25f,1,0.25f)==7.25f);
    CHECK(raven_xml2_damage_callback_bonus(
        raven_xml2_damage_stat_bonus(6.25f,1.25),1.25f,0)==11.25f);
    CHECK(raven_xml2_damage_callback_bonus(999999.5f,1,0.25f)==1000000.0f);
    CHECK(raven_xml2_damage_callback_bonus(-2.5f,1,-1.25f)==-3.5f);
    CHECK(raven_xml2_damage_callback_bonus(6.25f,1,4294967296.0f)==6.25f);
    CHECK(raven_xml2_damage_callback_bonus(6.25f,1,INFINITY)==6.25f);
    CHECK(isnan(raven_xml2_damage_callback_bonus(NAN,1,0)));
    puts("PASS XML2 damage bonuses: fractional base, separate ceil stages, cap and low-dword conversion");
    const struct { double input; int16_t output; } cases[] = {
        {0,0},{-0.0,0},{0.999,0},{-0.999,0},{16.999,16},{-16.999,-16},
        {32767.9,32767},{32768,-32768},{65535,-1},{65536,0},
        {-32769,32767},{-65537,-1},{2147483649.0,1},
        {-9223372036854775808.0,0},{9223372036854775808.0,0},
        {INFINITY,0},{-INFINITY,0},{NAN,0}
    };
    for (unsigned i=0;i<sizeof(cases)/sizeof(cases[0]);++i)
        CHECK(raven_xml2_energy_short(cases[i].input)==cases[i].output);
#if defined(_M_X64)
    /* Independent hardware oracle: CVTTSD2SI shares FISTP's signed-qword
     * truncation and masked-invalid result, without changing x87 state.
     * Random bit patterns include normal, subnormal, NaN and huge values. */
    uint64_t bits=0x659eca43708fe918ull;
    for(unsigned i=0;i<100000;++i) {
        double input;
        bits^=bits<<13;bits^=bits>>7;bits^=bits<<17;
        memcpy(&input,&bits,sizeof(input));
        uint16_t low=(uint16_t)(uint64_t)_mm_cvttsd_si64(_mm_set_sd(input));
        int16_t expected=(int16_t)(low<32768u?(int32_t)low:(int32_t)low-65536);
        CHECK(raven_xml2_energy_short(input)==expected);
    }
    puts("PASS energy conversion: boundaries and 100000 hardware comparisons");
#else
    puts("PASS energy conversion boundaries (hardware comparison unavailable)");
#endif
    {
        // Expected charges verified by xml2-held-energy-oracle.py executing
        // original instructions; equality at the gate must not charge early.
        const struct {int16_t rate;float elapsed,expected;} held[]={
            {0,.3f,0},{1,.3f,1},{6,.3f,1.8f},{6,1,6},{-1,.3f,-.3f},{20,.5f,10}
        };
        for(unsigned i=0;i<sizeof(held)/sizeof(held[0]);++i) {
            float charge=-99;
            CHECK(raven_xml2_held_energy_charge(held[i].rate,0,held[i].elapsed,&charge));
            CHECK(fabsf(charge-held[i].expected)<0.000001f);
        }
        const float not_due[]={0,.25f,-1,NAN,INFINITY};
        for(unsigned i=0;i<sizeof(not_due)/sizeof(not_due[0]);++i) {
            float charge=-99;
            CHECK(!raven_xml2_held_energy_charge(6,0,not_due[i],&charge)&&charge==-99);
        }
        // Absolute clock origin cannot alter the charge.
        float charge=0;
        CHECK(raven_xml2_held_energy_charge(6,100,100.5f,&charge)&&charge==3);
        puts("PASS held-energy calculation: original native cases, strict time gate and clock rollback");
    }
    return 0;
}
