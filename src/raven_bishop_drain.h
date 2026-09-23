#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Adapter inputs must describe the last recorded contact, not current target.
 * The adapter resolves the handle's generation and entity type on every call. */
typedef struct raven_bishop_contact {
    float contact_time, move_start_time;
    uint32_t handle;
    int valid, actor, discharge_trigger;
} raven_bishop_contact;
/* Per-actor state owned/reset by the guest adapter with the actor lifetime.
 * Store handles rather than entity pointers: validity is checked at decision. */
typedef struct raven_bishop_contact_history {
    uint32_t handle;
    float time;
} raven_bishop_contact_history;
int raven_bishop_record_contact(raven_bishop_contact_history *history,
    uint32_t handle, float time);
/* Select the node for the drain follow-up action using the native chain API.
 * A zero result must still replace pending_node before ordinary fallback. */
/* XML1 chain parser ECDF0 uses table 450F88: entry 451040 maps "special"
 * to 24. XML2 FB1E8 requests this named action for the missing handler. */
enum { RAVEN_BISHOP_XML1_FOLLOWUP_ACTION = 24 };
typedef uint32_t (*raven_bishop_followup)(void *context, unsigned action);
int raven_bishop_drain_decide(const raven_bishop_contact *contact,
    raven_bishop_followup select, void *context, uint32_t *pending_node);
#ifdef __cplusplus
}
#endif
