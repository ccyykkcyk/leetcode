#include "2859.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("sum-of-values-at-indices-with-k-set-bits") {
    Solution s;
    vector<int> nums;
    SECTION("ex1") {
        nums = {5, 10, 1, 5, 2};
        REQUIRE(s.sumIndicesWithKSetBits(nums, 1) == 13);
    }
}