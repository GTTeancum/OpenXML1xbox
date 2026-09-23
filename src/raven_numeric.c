#include "raven_numeric.h"
#include <math.h>

int raven_xml1_imported_damage_short(float value,int16_t *output) {
    if(!output || !isfinite(value))return 0;
    double rounded=round((double)value);
    if(value>0 && rounded<1)rounded=1;
    if(value<0 && rounded>-1)rounded=-1;
    if(rounded<-32768 || rounded>32767)return 0;
    *output=(int16_t)rounded;
    return 1;
}

void raven_xml2_affecter_range_reset(float endpoints[2],uint32_t mode) {
    // 15E8DD / 15E8F1: max and min also start at ZERO, not +/- infinity.
    endpoints[0]=endpoints[1]=mode==1?1.f:0.f;
}
void raven_xml2_affecter_range_apply(float endpoints[2],uint32_t mode,
    double lower,float upper) {
    // 15EC3F..15ECC7: lower arrives in x87, upper through a float local.
    // Round on each write. Explicit comparisons preserve native unordered
    // selection; fmin/fmax would prefer the non-NaN operand instead.
    if(mode==1) {
        endpoints[0]=(float)(lower*(double)endpoints[0]);
        endpoints[1]=(float)((double)upper*(double)endpoints[1]);
    } else if(mode==2) {
        endpoints[0]=(float)(lower<(double)endpoints[0]?endpoints[0]:lower);
        endpoints[1]=endpoints[1]>upper?endpoints[1]:upper;
    } else if(mode==3) {
        endpoints[0]=(float)(lower>(double)endpoints[0]?endpoints[0]:lower);
        endpoints[1]=endpoints[1]<upper?endpoints[1]:upper;
    } else {
        endpoints[0]=(float)(lower+(double)endpoints[0]);
        endpoints[1]=(float)((double)upper+(double)endpoints[1]);
    }
}
int raven_xml2_affecter_range_needs_random(const float endpoints[2]) {
    return endpoints[1]>endpoints[0];
}
float raven_xml2_affecter_range_sample(const float endpoints[2],double random_unit) {
    // 15EDF6 consumes one native random value only if upper > lower.
    if(!raven_xml2_affecter_range_needs_random(endpoints))return endpoints[0];
    volatile double scaled=random_unit*((double)endpoints[1]-(double)endpoints[0]);
    return (float)(scaled+(double)endpoints[0]);
}

void raven_xml2_stat_cache_reset(raven_xml2_stat_cache *cache) {
    for(unsigned i=0;i<4;++i){cache->add[i]=0;cache->scale[i]=1;}
    cache->all_add=0;cache->all_scale=1;
}

int raven_xml2_stat_cache_apply(raven_xml2_stat_cache *cache,uint32_t type,
    uint32_t mode,double evaluated_value) {
    if(type<2||type>6||mode>1)return 0;
    float *destination;
    if(type==6)destination=mode?&cache->all_scale:&cache->all_add;
    else destination=mode?&cache->scale[type-2]:&cache->add[type-2];
    // 148E99/148EF4 and parallel stat cases consume the evaluated x87
    // return value directly, then round at EACH cache write. Do not first
    // narrow the input to float or defer rounding until the rebuild ends.
    *destination=(float)(mode?evaluated_value*(double)*destination:
        evaluated_value+(double)*destination);
    return 1;
}

int16_t raven_xml2_effective_stat(uint8_t base,uint8_t extra,uint8_t allocated,
    float stat_add,float stat_scale,float all_add,float all_scale) {
    /* C6F80: sum byte sources without narrowing, add shared then per-stat
     * offsets, multiply shared then per-stat factors. C7079 stores float
     * before the truncating conversion and C7153/C7183 signed AX read.
     * Refresh callbacks remain the native adapter's responsibility. */
    const float base_sum=(float)((unsigned)base+(unsigned)extra+(unsigned)allocated);
    volatile double added=(double)all_add+(double)stat_add;
    volatile double total=added+(double)base_sum;
    volatile double shared=total*(double)all_scale;
    const float effective=(float)(shared*(double)stat_scale);
    return raven_xml2_energy_short((double)effective);
}

unsigned raven_xml2_damage_stat_index(uint32_t damage_flags) {
    return (damage_flags&0xF00u)?3u:0u;
}

double raven_xml2_damage_stat_factor(int16_t effective_stat,uint32_t damage_flags) {
    /* Original float constants: 4923F0 = 3D4CCCCD (stat 0),
     * 491EAC = 3C23D70A (stat 3). C7140/C7170 sign-extend AX,
     * multiply in x87 and return without a float-store rounding step. */
    const float coefficient=raven_xml2_damage_stat_index(damage_flags)==3?0.01f:0.05f;
    volatile double scaled=(double)effective_stat*(double)coefficient;
    return scaled+1.0;
}

float raven_xml2_damage_stat_bonus(float sample,double factor) {
    /* 3D49B1 selects x87 control word 1B3F (round toward +infinity),
     * calls FRNDINT, then restores the old control word. Using host rint
     * would silently use the host's rounding mode instead. */
    volatile double scaled=factor*(double)sample;
    return (float)(ceil(scaled-(double)sample)+(double)sample);
}

float raven_xml2_damage_callback_bonus(float sample,float scale,float flat) {
    volatile double scaled=(double)scale*(double)sample;
    const double rounded=ceil((scaled-(double)sample)+(double)flat);
    uint32_t low=0;
    /* 228110 returns the low dword of the truncating signed-qword conversion.
     * Masked-invalid inputs produce integer indefinite, whose low dword is 0.
     * Avoid undefined C casts and implementation-defined signed narrowing. */
    if(rounded>=-9223372036854775808.0&&rounded<9223372036854775808.0)
        low=(uint32_t)(uint64_t)(int64_t)rounded;
    const int64_t bonus=low<2147483648u?(int64_t)low:(int64_t)low-4294967296ll;
    double result=(double)sample+(double)bonus;
    // Native FCOM leaves unordered values on the unclamped path as well.
    if(result>1000000.0)result=1000000.0;
    return (float)result;
}

double raven_xml2_harming_interval(uint8_t attacks_per_second) {
    return attacks_per_second ? 1.0/(double)attacks_per_second : (double)0.33f;
}

int raven_xml2_harming_tick_due(float next_tick,float now) {
    return next_tick<now;
}

int raven_xml2_harming_deliver(uint32_t source,uint32_t target,int skirmish,float damage) {
    /* Original unordered comparison permits NaN here. Do not silently add
     * a finite/positive gate: negative damage also reaches the consumer. */
    return (source!=target||skirmish) && damage!=0.0f;
}

uint8_t raven_xml2_harming_record_flags(uint8_t previous,uint8_t definition_flags) {
    return (uint8_t)((previous&0x87u)|((definition_flags&2u)?8u:0u)|2u);
}

float raven_xml2_harming_damage(float sampled_damage,float life,float remaining,
    uint8_t attacks_per_second) {
    /* 14EFE9 rounds the interval to float before 293A0 selects the minimum.
     * Damage is a total over life, not damage-per-tick or damage-per-second.
     * The native FCOM gates reject unordered and nonpositive durations. */
    if (!(life>0.0f) || !(remaining>0.0f)) return 0.0f;
    const float interval=(float)raven_xml2_harming_interval(attacks_per_second);
    const float slice=remaining<interval ? remaining : interval;
    volatile double rate=(double)sampled_damage/(double)life;
    return (float)(rate*(double)slice);
}

int raven_xml2_harming_next_tick(float end_time,float now_first,float now_second,
    uint8_t attacks_per_second,float *next_tick) {
    /* 14EB0D stores the difference before testing the unrounded x87 value.
     * For two finite float operands the subtraction is exact in double. */
    const double difference=(double)end_time-(double)now_first;
    float remaining=(float)difference;
    if (!(difference>0.0)) return 0;
    const double interval=raven_xml2_harming_interval(attacks_per_second);
    if ((double)remaining>=interval) remaining=(float)interval;
    *next_tick=(float)((double)now_second+(double)remaining);
    return 1;
}

float raven_xml2_damage_sample(int16_t lower,int16_t upper,double random_unit,int average) {
    if(average)return (float)(((double)lower+(double)upper)*0.5);
    /* Preserve separate multiply/add and round only at the damage-record
     * float store. Do not sort endpoints, round to integer or use the XML1
     * inclusive-integer sampler. Volatile prevents contraction into FMA. */
    volatile double scaled=random_unit*((double)upper-(double)lower);
    return (float)(scaled+(double)lower);
}

int raven_xml2_held_energy_charge(int16_t rate,float previous,float now,float *charge) {
    const float elapsed=now-previous;
    if(!charge||!isfinite(elapsed)||!(elapsed>0.25f))return 0;
    float amount=(float)rate*elapsed;
    if(amount>0.0f&&amount<1.0f)amount=1.0f;
    *charge=amount;
    return 1;
}

int16_t raven_xml2_energy_short(double value) {
    uint16_t low;
    /* 3D6A14 saves the control word, selects truncation, FISTPs a signed
     * qword, then restores the control word. Masked invalid conversion
     * produces integer indefinite (8000000000000000), whose low word is
     * zero. Compare before casting: out-of-range C conversions are undefined.
     * The upper bound is exclusive; +2^63 is exactly representable. */
    if (!(value >= -9223372036854775808.0 && value < 9223372036854775808.0))
        return 0;
    low = (uint16_t)(uint64_t)(int64_t)value;
    /* Avoid implementation-defined unsigned-to-signed narrowing. The native
     * caller sign-extends AX; it does not clamp negative or wrapped costs. */
    return (int16_t)(low < 32768u ? (int32_t)low : (int32_t)low - 65536);
}
