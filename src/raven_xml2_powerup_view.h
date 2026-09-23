#pragma once
#include "raven_xml1_talent_view.h"
#ifdef __cplusplus
extern "C" {
#endif
typedef int (*raven_handle_valid)(void *context,uint32_t handle);
typedef raven_lookup (*raven_handle_actor)(void *context,uint32_t handle,uint32_t *actor);
typedef struct raven_xml2_powerup_context {
    uint32_t actor;
    float inherited;
} raven_xml2_powerup_context;
typedef struct raven_xml2_powerup_node {
    uint32_t address,next_handle,next_pool,definition_handle,definition_pool;
} raven_xml2_powerup_node;
typedef struct raven_xml2_powerup_definition {
    uint32_t address,affecter_handle,affecter_pool;
} raven_xml2_powerup_definition;
typedef struct raven_xml2_affecter_node {
    uint32_t address,next_handle,next_pool,scope_handle,scope_pool;
    uint8_t attribute,mode,sharing,is_reference;
    uint16_t native_value_id;
    float literal[2];
} raven_xml2_affecter_node;
typedef struct raven_xml2_powerup_scope {
    uint32_t address,character_symbol,node_symbol,damage_mask,attack_mask;
    uint16_t race,talent;
    uint8_t flags;
} raven_xml2_powerup_scope;
/* 15A540/15A590: scope pool membership, then original CPowerupScope fields.
 * Interned character/node symbols stay native IDs, not host strings. */
raven_lookup raven_xml2_powerup_scope_read(raven_guest_read read,void *context,
    uint32_t pool,uint32_t handle,raven_xml2_powerup_scope *output);
/* Metadata callbacks resolve the query's actor at +38 through the title's
 * current handle manager. FOUND means match, MISSING means no match (including
 * a missing actor), INVALID means unreadable/unsupported. No guessed defaults.
 * Character selectors are interned symbols; race selectors remain native words. */
typedef raven_lookup (*raven_xml2_scope_actor_match)(void *context,uint32_t actor_handle,uint32_t selector);
/* 145AF0: first bitmap uses 5AA7A8; flag-clear second uses 58BDCC.
 * Both type indices must be read from the current title runtime. */
raven_lookup raven_xml2_scope_actor(raven_guest_read read,void *context,uint32_t manager,
    uint32_t handle,uint32_t source_type,uint32_t actor_type,uint32_t *actor);
/* 15A0D0/C6E30: native race bit against stats +4C8. A null stats pointer
 * is invalid native state, not an unrestricted race. */
raven_lookup raven_xml2_scope_race(raven_guest_read read,void *context,uint32_t manager,
    uint32_t handle,uint32_t source_type,uint32_t actor_type,uint16_t race);
/* 15A120: string_pool is 209520's current provider, locale_state is the
 * current CRT global 72E068. Nonzero locale needs a separate CRT adapter. */
raven_lookup raven_xml2_scope_character(raven_guest_read read,void *context,uint32_t manager,
    uint32_t handle,uint32_t source_type,uint32_t actor_type,
    uint32_t string_pool,uint32_t locale_state,uint32_t symbol);
raven_lookup raven_xml2_powerup_scope_matches(raven_guest_read read,void *context,
    const raven_xml2_powerup_scope *scope,uint32_t query,
    raven_xml2_scope_actor_match race_match,raven_xml2_scope_actor_match character_match);
typedef struct raven_xml2_scope_runtime {
    uint32_t manager,source_type,actor_type,string_pool,locale_state;
} raven_xml2_scope_runtime;
/* Uses native guest actor/race/string readers for both metadata predicates. */
raven_lookup raven_xml2_powerup_scope_guest_matches(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime *runtime,const raven_xml2_powerup_scope *scope,uint32_t query);
/* 144380: missing/unrestricted scope bypasses sharing; attribute 8 negates
 * a restricted scope's result after sharing. INVALID is never inverted. */
raven_lookup raven_xml2_affecter_eligible(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime *runtime,const raven_xml2_affecter_node *affecter,
    uint32_t query,int sharing_enabled,int owner_matches);
/* 1446C0/F6CD0: inherited values bypass CValue evaluation; literals remain
 * raw floats. Reference values without an actor/stats object evaluate to zero.
 * Missing live entries remain MISSING for diagnostics, never guessed values. */
raven_lookup raven_xml2_affecter_value(raven_guest_read read,void *context,
    uint32_t provider,uint32_t actor_type,uint32_t actor,
    const raven_xml2_affecter_node *affecter,float inherited,float output[2]);
raven_lookup raven_xml2_affecter_evaluate(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime *runtime,uint32_t provider,uint32_t actor,
    const raven_xml2_affecter_node *affecter,uint32_t query,
    int sharing_enabled,int owner_matches,float inherited,float output[2]);
/* 15E8C0 -> 144E90 / 146D40: booleans are definition +3C > 0 and
 * NOT attached +64 bit 1. The second is not a pointer ownership comparison. */
raven_lookup raven_xml2_powerup_sharing(raven_guest_read read,void *context,
    uint32_t attached,int *sharing_enabled,int *owner_matches);
/* Collection query's null-context branch excludes node-scoped affecters;
 * nonnull queries use 144380 with sharing derived from this attachment. */
raven_lookup raven_xml2_query_affecter_eligible(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime *runtime,uint32_t attached,
    const raven_xml2_affecter_node *affecter,uint32_t query);
raven_lookup raven_xml2_powerup_definition_read(raven_guest_read read,void *context,
    uint32_t pool,uint32_t handle,raven_xml2_powerup_definition *output);
raven_lookup raven_xml2_affecter_node_read(raven_guest_read read,void *context,
    uint32_t pool,uint32_t handle,raven_xml2_affecter_node *output);
/* D0BF0/D0B40 native symbol tree. Name excludes '%'; IDs remain native,
 * never shared-catalog IDs. Missing registration is not an invented zero. */
raven_lookup raven_xml2_talent_value_id(raven_guest_read read,void *context,
    uint32_t provider,const char *name,uint16_t *id);
/* D0950/D0A70/E4D60 live endpoint lookup. Missing lower is MISSING;
 * missing upper falls back to lower. FOUND sanitizes endpoints separately.
 * INVALID/MISSING leave output unchanged for explicit adapter diagnostics. */
raven_lookup raven_xml2_talent_value_read(raven_guest_read read,void *context,
    uint32_t provider,int16_t actor_context,uint16_t native_id,float output[2]);
/* 147180/147190 validate attached-pool generation/occupancy before
 * 1471E0 resolves its inline object. Pool zero or retired handle is MISSING. */
raven_lookup raven_xml2_attached_powerup_node(raven_guest_read read,void *context,
    uint32_t pool,uint32_t handle,raven_xml2_powerup_node *output);
/* D5DC0/D5E10: generation equality AND occupied-slot bit, followed by the
 * entity pointer. FOUND may contain a null pointer; validity and actor type
 * are separate checks. This never executes guest vtables. */
raven_lookup raven_xml2_entity_handle(raven_guest_read read,void *context,
    uint32_t manager,uint32_t handle,uint32_t *entity);
/* 14F940 actor cast. actor_type is the current value of XML2 global
 * 5AA7A8. Recognizes the traced constant-return class-info accessor only;
 * unsupported accessors fail explicitly rather than executing guest code. */
raven_lookup raven_xml2_entity_actor(raven_guest_read read,void *context,
    uint32_t entity,uint32_t actor_type,uint32_t *actor);
/* 1446C0 -> D0A70: this predicate uses global 58BDCC, which must be
 * supplied separately from 14F940's 5AA7A8. FOUND yields signed stats +28E;
 * a rejected actor or null stats object is MISSING. */
raven_lookup raven_xml2_affecter_context(raven_guest_read read,void *context,
    uint32_t actor,uint32_t affecter_actor_type,int16_t *talent_context);
/* Composed bounded-memory path; manager/type/sentinel are supplied from
 * the selected title runtime. No synthetic validity/actor callbacks. */
raven_lookup raven_xml2_powerup_guest_context(raven_guest_read read,void *context,
    uint32_t manager,uint32_t actor_type,uint32_t sentinel,uint32_t powerup,
    uint32_t queried_actor,raven_xml2_powerup_context *output);
/* Read-only CAttachedPowerup view, XML2 World only. Callbacks must use the
 * current native handle manager, including generation/type validation.
 * valid: -1 unreadable, 0 invalid, 1 valid. actor: MISSING means valid
 * non-actor and selects actor zero WITHOUT falling through to another owner.
 * FOUND publishes context; MISSING is ineligible; INVALID changes no output.
 * Expiration/list membership must already be checked by the native caller. */
raven_lookup raven_xml2_attached_powerup_context(raven_guest_read read,
    raven_handle_valid valid,raven_handle_actor resolve,void *context,
    uint32_t powerup,uint32_t queried_actor,uint32_t sentinel,
    raven_xml2_powerup_context *output);
#ifdef __cplusplus
}
#endif
