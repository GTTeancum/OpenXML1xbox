#pragma once
#include <stdint.h>
#ifdef XML1_RAVEN_OPERAND_TRACE
#ifdef __cplusplus
extern "C" {
#endif
/* Explicit synchronous imported-hit lifetime. Audit-only native seeds cannot
 * be read as imported values. End after all native delivery callbacks return. */
uint64_t raven_native_damage_import_begin(uint32_t event,uint32_t actor,uint32_t record,float amount);
void raven_native_damage_import_end(uint64_t token);
int raven_native_damage_import_value(uint32_t record,float *amount);
int raven_native_damage_imported_event(uint32_t record);
double raven_native_damage_amount(uint32_t record,int32_t native_amount);
void raven_native_damage_enter(uint32_t site, uint32_t frame);
void raven_native_damage_leave(uint32_t site, uint32_t frame);
void raven_native_damage_seed(uint32_t event,uint32_t actor,uint32_t record,int32_t amount);
void raven_native_damage_copy(uint32_t source,uint32_t destination);
void raven_native_damage_copy_back(uint32_t source,uint32_t destination);
void raven_native_damage_clear(uint32_t record);
void raven_native_damage_scale(uint32_t site,uint32_t record,double factor,int32_t native_before);
void raven_native_damage_set(uint32_t site,uint32_t record,double amount,int32_t native_before);
void raven_native_damage_add(uint32_t site,uint32_t record,double amount,int32_t native_before);
void raven_native_damage_observe(uint32_t site,uint32_t record,int32_t native_amount);
void raven_native_damage_context(uint32_t site,uint32_t record,int32_t native_amount,int32_t working,double multiplier,double subtraction);
void raven_native_damage_bonus(uint32_t site,uint32_t record,int32_t sample,double scale,int32_t flat,int32_t stat);
#ifdef __cplusplus
}
#endif
#else
#define raven_native_damage_amount(record,native_amount) ((double)(native_amount))
#define raven_native_damage_imported_event(record) (0)
#define raven_native_damage_enter(site,frame) ((void)0)
#define raven_native_damage_leave(site,frame) ((void)0)
#define raven_native_damage_seed(event,actor,record,amount) ((void)0)
#define raven_native_damage_copy(source,destination) ((void)0)
#define raven_native_damage_copy_back(source,destination) ((void)0)
#define raven_native_damage_clear(record) ((void)0)
#define raven_native_damage_scale(site,record,factor,native_before) ((void)0)
#define raven_native_damage_set(site,record,amount,native_before) ((void)0)
#define raven_native_damage_add(site,record,amount,native_before) ((void)0)
#define raven_native_damage_observe(site,record,native_amount) ((void)0)
#define raven_native_damage_context(site,record,native_amount,working,multiplier,subtraction) ((void)0)
#define raven_native_damage_bonus(site,record,sample,scale,flat,stat) ((void)0)
#endif
