#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef struct raven_ai_mode_config {
    uint32_t actor,handle; int mode; float patrol_speed,run_time;
    uint64_t epoch;
    int teleporter;
} raven_ai_mode_config;
void raven_ai_definition_class(uint32_t definition,const char* value);
void raven_ai_definition_reset(uint32_t definition);
int raven_ai_definition_teleporter(uint32_t definition);
void raven_ai_definition_capture(uint32_t definition,uint32_t node);
typedef struct raven_ai_point { float x,y,z; } raven_ai_point;
typedef struct raven_ai_wander_route {
    raven_ai_point points[9];
    uint8_t valid[9];
    int current;
} raven_ai_wander_route;
/* Adapter supplies the native navigation manager's point test, not collision
 * approximations. Origins have already been projected by the native grid. */
typedef int (*raven_ai_point_test)(void* context,const raven_ai_point* point);
/* XML2 Teleporter attack destination. target may be null; facing is the
 * actor's roll/pitch/yaw vector used only in that case. phase is 0 (none),
 * 1 (approach/melee follow-up), or 2 (retreat/power follow-up). No actor write. */
int raven_ai_teleport_destination(const raven_ai_point* origin,
    const raven_ai_point* target,const raven_ai_point* facing,
    raven_ai_point* destination,int* phase);
typedef struct raven_ai_teleport_state {
    int phase; float deadline,started;
} raven_ai_teleport_state;
typedef struct raven_ai_teleport_step_result {
    uint32_t input_bits; int delegate_base,write_destination;
} raven_ai_teleport_step_result;
typedef struct raven_ai_teleport_runtime {
    raven_ai_teleport_state state; raven_ai_point destination;
    int pending; uint64_t revision;
} raven_ai_teleport_runtime;
int raven_ai_teleport_read(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_teleport_runtime* out);
int raven_ai_teleport_publish(uint32_t decision,const raven_ai_mode_config* owner,const raven_ai_teleport_runtime* next);
int raven_ai_teleport_take(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_point* out);
/* Returns -1 for stock main dispatch, otherwise the handled result.
 * Input is a process-local game frame; no host input is generated. */
int raven_ai_teleport_attack(uint32_t handler,uint32_t caller,uint32_t input);
/* Returns -1 for the stock event path, otherwise native teleport success.
 * The range word is already prepared by XML1's event, not recomputed here. */
int raven_ai_teleport_event(uint32_t event,uint32_t context,uint32_t parameters,uint32_t range);
/* Existing native action/aim gates and RNG are supplied by the adapter.
 * destination_phase comes from teleport_destination when starting a move. */
int raven_ai_teleport_step(raven_ai_teleport_state* state,float now,
    int can_teleport,int can_attack,int aligned,int destination_phase,float random,
    raven_ai_teleport_step_result* result);
/* Missing HitAndRun retreat search. Native adapter supplies point validity;
 * a failed search leaves out unchanged. No movement/target mutation here. */
int raven_ai_hit_run_destination(const raven_ai_point* origin,
    const raven_ai_point* target,raven_ai_point_test test,void* context,raven_ai_point* out);
typedef struct raven_ai_retreat_state {
    uint32_t target; float deadline; int active;
} raven_ai_retreat_state;
int raven_ai_retreat_read(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_retreat_state* out);
int raven_ai_retreat_publish(uint32_t decision,const raven_ai_mode_config* owner,const raven_ai_retreat_state* state);
/* Native movement adapter. Notification/update dispatch is installed only
 * once the surrounding retreat lifecycle has been validated. */
int raven_ai_hit_run_notify(uint32_t decision,uint32_t target_handle);
/* Suppress attack selection while the owned retreat deadline is pending.
 * Completion consumes the remembered target for facing, never retargeting. */
int raven_ai_hit_run_waiting(uint32_t decision);
void raven_ai_hit_run_finish(uint32_t decision);
int raven_ai_hit_run_incoming(uint32_t recipient,uint32_t attacker_handle);
void raven_ai_wander_build(raven_ai_wander_route* route,
    const raven_ai_point* home,const raven_ai_point* origin,
    raven_ai_point_test test,void* context);
int raven_ai_wander_next(raven_ai_wander_route* route,raven_ai_point* out);
int raven_ai_wander_publish(uint32_t decision,const raven_ai_mode_config* owner,
    const raven_ai_wander_route* route);
int raven_ai_wander_take(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_point* out);
void raven_ai_wander_initialize(uint32_t decision);
/* Returns1 when the missing mode handled idle,0 to run stock XML1 idle. */
int raven_ai_wander_idle(uint32_t decision);
typedef struct raven_ai_protect_input {
    raven_ai_point actor,partner,threat,threat_velocity,current_destination;
    int partner_alive,threat_alive,state;
} raven_ai_protect_input;
typedef struct raven_ai_protect_result {
    raven_ai_point destination;
    float speed;
    int write_speed,write_speed_override;
    /* 0: no destination change; 1: reset state then native move;
     * 2: redirect existing state7 movement through the native actor method. */
    int action;
} raven_ai_protect_result;
void raven_ai_protect_plan(const raven_ai_protect_input* input,raven_ai_protect_result* result);
/* Called only after native query/type/health eligibility. Bind the first
 * eligible opposite-mode candidate in native query order, not by distance. */
int raven_ai_protect_bind(uint32_t decision,const raven_ai_mode_config* owner,
    uint32_t candidate_decision,const raven_ai_mode_config* candidate);
int raven_ai_protect_partner(uint32_t decision,const raven_ai_mode_config* owner,uint32_t* handle);
/* Native actor query snapshot; caller owns register preservation and must
 * resolve returned full handles before use. No borrowed result escapes. */
unsigned raven_ai_protect_candidates(uint32_t source,uint32_t* handles,unsigned capacity);
uint32_t raven_ai_mode_find(uint32_t actor,uint32_t handle,raven_ai_mode_config* out);
uint32_t raven_ai_protect_refresh(uint32_t decision,const raven_ai_mode_config* owner);
/* Runs after stock event gates. Nonzero consumes this update; zero leaves
 * the existing XML1 state dispatcher in charge. */
int raven_ai_protect_update(uint32_t decision);
typedef struct raven_ai_pack_state {
    int phase; /* Native PackHunt phases: 0 waiting, 1 moving, 3 engaging. */
    float deadline;
} raven_ai_pack_state;
int raven_ai_pack_read(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_pack_state* out);
int raven_ai_pack_publish(uint32_t decision,const raven_ai_mode_config* owner,const raven_ai_pack_state* state);
/* Native116090 coordinates only two live PackHunt decisions. */
int raven_ai_pack_contact(uint32_t decision,const raven_ai_mode_config* owner,
    uint32_t other_decision,const raven_ai_mode_config* other,float now);
/* Returns1 when an active pack phase was cancelled, else delegate stock. */
int raven_ai_pack_interrupt(uint32_t decision,const raven_ai_mode_config* owner,float now);
typedef struct raven_ai_pack_world {
    uint32_t leader,target; uint64_t revision;
} raven_ai_pack_world;
int raven_ai_pack_world_read(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_pack_world* out);
/* Caller has resolved the snapshot's leader and found it absent/dead. The
 * revision check rejects selection from a snapshot superseded by reentry. */
int raven_ai_pack_claim(uint32_t decision,const raven_ai_mode_config* owner,uint64_t revision);
int raven_ai_pack_launch(uint32_t decision,const raven_ai_mode_config* owner,
    uint64_t revision,uint32_t target,float deadline);
/* Native handle/health validation; caller preserves guest register state. */
uint32_t raven_ai_pack_refresh(uint32_t decision,const raven_ai_mode_config* owner);
int raven_ai_pack_update(uint32_t decision);
int raven_ai_pack_interrupt_guest(uint32_t decision);
void raven_ai_pack_contact_guest(uint32_t decision,uint32_t actor_handle);
/* Extra XML2 actor modes own metadata separately from the stock decision.
 * Native decision destruction/reinitialization retires the entry. */
void raven_ai_mode_begin(uint32_t decision,const raven_ai_mode_config* config);
void raven_ai_mode_reset(uint32_t decision);
int raven_ai_mode_read(uint32_t decision,uint32_t actor,uint32_t handle,raven_ai_mode_config* out);
int raven_ai_mode_native_fixture(uint32_t scratch);
void (*raven_ai_mode_fixture_lookup(uint32_t address))(void);
void raven_ai_mode_capture(uint32_t decision,uint32_t actor,uint32_t properties);
#ifdef __cplusplus
}
#endif
