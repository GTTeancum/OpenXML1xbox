#ifndef XML1_RAVEN_OPERAND_TRACE_H
#define XML1_RAVEN_OPERAND_TRACE_H
#include <stdint.h>
#ifdef XML1_RAVEN_OPERAND_TRACE
void xml1_raven_trace_projectile(unsigned event,unsigned actor,unsigned manager);
void xml1_raven_trace_prototype(uint32_t manager,uint32_t name,uint32_t result,uint32_t caller);
void xml1_raven_trace_prototype_slot(uint32_t manager,uint32_t name,uint32_t index,uint32_t caller);
void xml1_raven_trace_prototype_map(uint32_t manager,uint32_t name,uint32_t copied,uint32_t caller,int found);
void xml1_raven_trace_parse(uint32_t event, uint32_t field, uint32_t value);
void xml1_raven_trace_apply(uint32_t event, uint32_t actor, int attack);
void xml1_raven_trace_rank(uint32_t stats, uint32_t key, uint32_t index);
void xml1_raven_trace_talent_name(uint32_t system, uint32_t name, unsigned expected);
void xml1_raven_trace_copy(uint32_t destination,uint32_t source,int attack);
void xml1_raven_trace_lifetime(uint32_t event,int kind);
void xml1_raven_trace_damage(uint32_t stage,uint32_t event,uint32_t actor,uint32_t record);
void xml1_raven_trace_hit(uint32_t stage,uint32_t source,uint32_t recipient,uint32_t record,uint32_t copy,uint32_t before_bits);
void xml1_raven_trace_hit_gate(uint32_t recipient,uint32_t record);
void xml1_raven_trace_blast(uint32_t stage,uint32_t event,uint32_t owner,uint32_t candidate,uint32_t position,uint32_t selected);
void xml1_raven_trace_blast_area_begin(uint32_t event,uint32_t owner);
void xml1_raven_trace_blast_area_candidate(uint32_t source,uint32_t candidate,uint32_t center);
void xml1_raven_trace_blast_area_call(uint32_t candidate,uint32_t argument,uint32_t scalar);
void xml1_raven_trace_blast_area_result(uint32_t candidate,uint32_t argument,int stage);
void xml1_raven_trace_blast_delivery(uint32_t actor,uint32_t timer,int stage);
void xml1_raven_trace_blast_area_end(void);
void xml1_raven_trace_blast_attack_begin(uint32_t event,uint32_t owner);
void xml1_raven_trace_blast_attack_dispatch(uint32_t actor,uint32_t attack_id,uint32_t manager);
void xml1_raven_trace_blast_attack_gate(uint32_t attack_id,uint32_t result);
void xml1_raven_trace_blast_attack_end(void);
#else
#define xml1_raven_trace_projectile(event,actor,manager) ((void)0)
#define xml1_raven_trace_prototype(manager,name,result,caller) ((void)0)
#define xml1_raven_trace_prototype_slot(manager,name,index,caller) ((void)0)
#define xml1_raven_trace_prototype_map(manager,name,copied,caller,found) ((void)0)
#define xml1_raven_trace_parse(event, field, value) ((void)0)
#define xml1_raven_trace_apply(event, actor, attack) ((void)0)
#define xml1_raven_trace_rank(stats, key, index) ((void)0)
#define xml1_raven_trace_talent_name(system, name, expected) ((void)0)
#define xml1_raven_trace_copy(destination, source, attack) ((void)0)
#define xml1_raven_trace_lifetime(event, kind) ((void)0)
#define xml1_raven_trace_damage(stage,event,actor,record) ((void)0)
#define xml1_raven_trace_hit(stage,source,recipient,record,copy,before_bits) ((void)0)
#define xml1_raven_trace_hit_gate(recipient,record) ((void)0)
#define xml1_raven_trace_blast(stage,event,owner,candidate,position,selected) ((void)0)
#define xml1_raven_trace_blast_area_begin(event,owner) ((void)0)
#define xml1_raven_trace_blast_area_candidate(source,candidate,center) ((void)0)
#define xml1_raven_trace_blast_area_call(candidate,argument,scalar) ((void)0)
#define xml1_raven_trace_blast_area_result(candidate,argument,stage) ((void)0)
#define xml1_raven_trace_blast_delivery(actor,timer,stage) ((void)0)
#define xml1_raven_trace_blast_area_end() ((void)0)
#define xml1_raven_trace_blast_attack_begin(event,owner) ((void)0)
#define xml1_raven_trace_blast_attack_dispatch(actor,attack_id,manager) ((void)0)
#define xml1_raven_trace_blast_attack_gate(attack_id,result) ((void)0)
#define xml1_raven_trace_blast_attack_end() ((void)0)
#endif
#endif
