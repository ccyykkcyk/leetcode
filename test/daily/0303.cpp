#include "0303.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("range-sum-query-immutable") {
    vector<int> nums{-2, 0, 3, -5, 2, -1};
    NumArray n(nums);
    SECTION("ex1") {
        REQUIRE(n.sumRange(0, 2) == 1);
        REQUIRE(n.sumRange(2, 5) == -1);
        REQUIRE(n.sumRange(0, 5) == -3);
    }
}