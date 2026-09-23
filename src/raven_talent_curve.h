#ifndef RAVEN_TALENT_CURVE_H
#define RAVEN_TALENT_CURVE_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/* Values arrive after the game's numeric parser has resolved a scalar/range.
 * Keep this evaluator independent of XML1/XML2 actor and XML-node layouts. */
typedef struct raven_talent_point {
    int32_t level;
    float value[2];
    int interpolate;
} raven_talent_point;

/* Points for ONE named value, in original declaration order. Rank is one-based.
 * Returns zero for missing data or invalid arguments, leaving output unchanged.
 * This does not bind names, allocate actor state or apply a character level cap. */
int raven_talent_curve_evaluate(const raven_talent_point *points, size_t count,
                               unsigned rank, float output[2]);
#ifdef __cplusplus
}
#endif
#endif
