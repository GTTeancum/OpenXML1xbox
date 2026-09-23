#include "raven_talent_curve.h"

int raven_talent_curve_evaluate(const raven_talent_point *points, size_t count,
                               unsigned rank, float output[2])
{
    float current[2] = {0.0f, 0.0f};
    int32_t previous_level = 0;
    size_t i;
    if (!points || !count || !output || rank < 1 || rank > 255)
        return 0;

    /* XML2 CTalent::000CEC10 receives a zero-based byte rank; 255 is its
     * removal sentinel. 000CEE0C..000CEEA3 compares each point with rank+1.
     * Do not sort the points: XML2's loop updates its previous-level table
     * after EACH declaration and stops considering a name at an exact rank. */
    for (i = 0; i < count; ++i) {
        const raven_talent_point *point = &points[i];
        if (point->level <= (int32_t)rank) {
            current[0] = point->value[0];
            current[1] = point->value[1];
            if (point->level == (int32_t)rank)
                break;
        } else if (previous_level < (int32_t)rank && point->level > 0 && point->interpolate) {
            /* 000CEE66..000CEEA3 uses x87 intermediates and rounds each
             * component on its final float store, not after the subtraction.
             * Generated XML2 code represents that stack using doubles. */
            const double fraction = ((double)rank - previous_level) /
                                    ((double)point->level - previous_level);
            current[0] = (float)(((double)point->value[0] - current[0]) * fraction + current[0]);
            current[1] = (float)(((double)point->value[1] - current[1]) * fraction + current[1]);
        }
        previous_level = point->level;
    }
    output[0] = current[0];
    output[1] = current[1];
    return 1;
}
