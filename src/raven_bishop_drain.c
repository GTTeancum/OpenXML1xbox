#include "raven_bishop_drain.h"

int raven_bishop_record_contact(raven_bishop_contact_history *history,
    uint32_t handle, float time)
{
    /* XML2 2C3E0: strictly newer contacts replace both fields together.
     * Equal-time contacts retain the first target. Do not filter a zero handle
     * here: a newer empty contact invalidates the old target at decision time. */
    if (!history || !(time > history->time)) return 0;
    history->handle = handle;
    history->time = time;
    return 1;
}

int raven_bishop_drain_decide(const raven_bishop_contact *contact,
    raven_bishop_followup select, void *context, uint32_t *pending_node)
{
    /* Missing XML2 CCHBishopDrain callback FB180..FB213. Its only new
     * behavior is choosing the drain follow-up after a qualifying contact.
     * It does not apply damage, transfer energy, or change an existing node.
     * Ordered comparison also rejects NaN, as the original x87 branch does. */
    if (!contact || !select || !pending_node ||
        !(contact->contact_time > contact->move_start_time) ||
        !contact->handle || !contact->valid ||
        !(contact->actor || contact->discharge_trigger))
        return 0;
    /* FB1F3 writes even on a failed lookup. Returning false delegates to the
     * ordinary XML1 decision handler; it must not retain a stale pending move. */
    *pending_node = select(context, RAVEN_BISHOP_XML1_FOLLOWUP_ACTION);
    return *pending_node != 0;
}
