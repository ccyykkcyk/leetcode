#include "0746.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("min-cost-climbing-stairs") {
    Solution s;
    SECTION("ex1") {
        vector<int> cost = {10, 15, 20};
        REQUIRE(s.minCostClimbingStairs(cost) == 15);
    }
}