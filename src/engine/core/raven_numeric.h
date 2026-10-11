#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* XML2 E9D60 -> 228110 -> 3D6A14, followed by E9EA0's signed AX read.
 * This takes the evaluated operand, not a tagged reference or cached range. */
int16_t raven_xml2_energy_short(double value);
/* User-selected XML2 -> XML1 delivery policy: nearest integer (ties away
 * from zero), nonzero magnitudes at least1. True zero remains zero.
 * Reject nonfinite/out-of-short-range results without changing output.
 * Apply after calculating a hit/tick, before constructing its native record;
 * subsequent XML1 resistance/immunity rules still own the final damage. */
int raven_xml1_imported_damage_short(float value,int16_t *output);
/* XML2 624D0/16E190 -> EB6BB: signed endpoints, fractional damage output.
 * random_unit must come from the title's own RNG; this consumes no RNG state.
 * average selects the native midpoint path and ignores random_unit. */
float raven_xml2_damage_sample(int16_t lower,int16_t upper,double random_unit,int average);
/* XML2 62643..6265D: apply an evaluated actor-stat factor to the sampled
 * float. Only the bonus is rounded upward; retain the original fraction.
 * Caller selects the record-type branch and supplies the native stat result. */
float raven_xml2_damage_stat_bonus(float sample,double factor);
/* XML2 62530/62628 select stat 3 when any record flags 0xF00 are set,
 * otherwise stat 0. Feed the signed low word returned by C6F80 AFTER its
 * native actor-cache refresh/modifiers; this is not the raw base stat byte. */
unsigned raven_xml2_damage_stat_index(uint32_t damage_flags);
double raven_xml2_damage_stat_factor(int16_t effective_stat,uint32_t damage_flags);
/* C6F80 inputs captured after the caller's native refreshes. Three unsigned
 * byte contributions form the base; modifiers are cache +10/+20/+30/+34.
 * No identity defaults are inferred: caller must provide all evaluated terms. */
int16_t raven_xml2_effective_stat(uint8_t base,uint8_t extra,uint8_t allocated,
    float stat_add,float stat_scale,float all_add,float all_scale);
typedef struct raven_xml2_stat_cache {
    float add[4],scale[4],all_add,all_scale;
} raven_xml2_stat_cache;
/* Numeric portion of 1489B0/148D60 only. Modifier eligibility and evaluation
 * stay with the native caller. Type IDs 2..5 select stat 0..3; 6 selects all.
 * Mode 0 adds; mode 1 multiplies. Returns 0 without mutation for other cases. */
void raven_xml2_stat_cache_reset(raven_xml2_stat_cache *cache);
int raven_xml2_stat_cache_apply(raven_xml2_stat_cache *cache,uint32_t type,
    uint32_t mode,double evaluated_value);
/* XML2 6269C..626E0: callback bonus, signed-low-dword conversion and upper
 * cap. Inputs are the post-stat sample and attribute-57 (0x39, damage)
 * query outputs. This is an affecter query, not a script event ID.
 * This performs no callbacks, RNG calls or native branch selection. */
float raven_xml2_damage_callback_bonus(float sample,float scale,float flat);
/* 15E8C0 endpoint aggregation AFTER native type/mode/eligibility checks.
 * 15ED50 samples only an increasing range. RNG ownership stays with caller. */
void raven_xml2_affecter_range_reset(float endpoints[2],uint32_t mode);
void raven_xml2_affecter_range_apply(float endpoints[2],uint32_t mode,
    double lower,float upper);
int raven_xml2_affecter_range_needs_random(const float endpoints[2]);
float raven_xml2_affecter_range_sample(const float endpoints[2],double random_unit);
/* CPUHarming 14E970/14EAB0/14EFB9. APS is the parsed unsigned byte, not
 * an unbounded configuration integer. Zero uses the title's 0.33f fallback.
 * These are numeric policies only: the adapter owns handles, clock reads,
 * actor eligibility, damage delivery and active-instance lifetimes. */
double raven_xml2_harming_interval(uint8_t attacks_per_second);
/* 14EF1E..14EF33 requires strictly later than the scheduled time.
 * 14F02B..14F053 suppresses self damage outside skirmish and +/-zero.
 * These predicates do not resolve handles or establish actor eligibility. */
int raven_xml2_harming_tick_due(float next_tick,float now);
int raven_xml2_harming_deliver(uint32_t source,uint32_t target,int skirmish,float damage);
/* 14F097..14F0B6 updates the XML2 damage-record flag byte. Translate the
 * resulting semantics at the XML1 boundary; record offsets are not shared. */
uint8_t raven_xml2_harming_record_flags(uint8_t previous,uint8_t definition_flags);
float raven_xml2_harming_damage(float sampled_damage,float life,float remaining,
    uint8_t attacks_per_second);
/* 14EAB0 reads the clock twice. Preserve that distinction. Return 0 without
 * touching next_tick for expired/unordered remaining time. */
int raven_xml2_harming_next_tick(float end_time,float now_first,float now_second,
    uint8_t attacks_per_second,float *next_tick);
/* Held powers, XML2 105747..105818: game-time interval and resolved signed
 * rate only. The caller owns node lifetime, actor modifiers and deduction.
 * Return 0 without changing charge until more than a quarter second elapsed. */
int raven_xml2_held_energy_charge(int16_t rate,float previous,float now,float *charge);
#ifdef __cplusplus
}
#endif
