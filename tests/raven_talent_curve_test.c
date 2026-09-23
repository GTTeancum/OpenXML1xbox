#include "raven_talent_curve.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#ifdef RAVEN_XML2_CURVE_REFERENCE
#include "xml2-talent-curve-reference.inc"
#endif
#define CHECK(c) do { if (!(c)) { fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #c); return 1; } } while (0)

int main(void)
{
    /* Sunfire's source Ignite damage points. A range must retain both sides. */
    raven_talent_point points[] = {{1, {11,15}, 1}, {20, {195,217}, 1}};
    float result[2] = {-1,-2};
    CHECK(raven_talent_curve_evaluate(points, 2, 1, result));
    CHECK(result[0] == 11 && result[1] == 15);
    CHECK(raven_talent_curve_evaluate(points, 2, 20, result));
    CHECK(result[0] == 195 && result[1] == 217);
    CHECK(raven_talent_curve_evaluate(points, 2, 30, result));
    CHECK(result[0] == 195 && result[1] == 217);
    CHECK(raven_talent_curve_evaluate(points, 2, 10, result));
    CHECK(fabsf(result[0] - 98.1578947f) < 0.00002f);
    CHECK(fabsf(result[1] - 110.6842105f) < 0.00002f);
    points[1].interpolate = 0;
    CHECK(raven_talent_curve_evaluate(points, 2, 10, result));
    CHECK(result[0] == 11 && result[1] == 15);
    CHECK(!raven_talent_curve_evaluate(points, 2, 0, result));
    CHECK(result[0] == 11 && result[1] == 15);
    CHECK(!raven_talent_curve_evaluate(points, 2, 256, result));
    CHECK(!raven_talent_curve_evaluate(NULL, 0, 1, result));
    {
        /* XML2 Iceman ice_shards_num explicitly disables interpolation. An
         * intermediate fractional projectile count would change the attack. */
        raven_talent_point shards[] = {
            {1,{1,1},0}, {6,{3,3},0}, {13,{5,5},0}, {20,{7,7},0}
        };
        for (unsigned rank = 1; rank <= 25; ++rank) {
            float expected = rank < 6 ? 1.0f : rank < 13 ? 3.0f : rank < 20 ? 5.0f : 7.0f;
            CHECK(raven_talent_curve_evaluate(shards, 4, rank, result));
            CHECK(result[0] == expected && result[1] == expected);
        }
        raven_talent_point delayed[] = {{10,{100,200},1}};
        CHECK(raven_talent_curve_evaluate(delayed, 1, 5, result));
        CHECK(result[0] == 50 && result[1] == 100);
    }
    {
        /* Exact-rank lock and original ordering are observable native behavior. */
        raven_talent_point duplicate[] = {{1,{2,3},1}, {1,{100,200},1}};
        CHECK(raven_talent_curve_evaluate(duplicate, 2, 1, result));
        CHECK(result[0] == 2 && result[1] == 3);
        raven_talent_point descending[] = {{20,{20,40},1}, {1,{7,9},1}};
        CHECK(raven_talent_curve_evaluate(descending, 2, 10, result));
        CHECK(result[0] == 7 && result[1] == 9);
    }
#ifdef RAVEN_XML2_CURVE_REFERENCE
    {
        unsigned comparisons = 0;
        for (int first = 1; first < 20; ++first) {
            for (int last = first + 2; last < 46; last += 3) {
                raven_talent_point curve[] = {
                    {first, {first * -1.13f, first * 3.71f}, 1},
                    {last, {last * 19.27f, last * -0.31f}, 1}
                };
                for (int rank = first + 1; rank < last; ++rank) {
                    float native[2] = {curve[0].value[0], curve[0].value[1]};
                    recovered_xml2_blend(native, curve[1].value, rank, first, last);
                    CHECK(raven_talent_curve_evaluate(curve, 2, rank, result));
                    CHECK(memcmp(native, result, sizeof native) == 0);
                    ++comparisons;
                }
            }
        }
        printf("PASS: %u recovered XML2 blend comparisons (both float components)\n", comparisons);
    }
#endif
    puts("PASS: talent curve rank, range, boundaries and declaration order");
    return 0;
}
