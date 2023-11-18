#include "2342.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("maximum-sum-of-two-non-overlapping-subarrays") {
    Solution s;
    vector<int> nums;
    SECTION("ex1") {
        nums = {18, 43, 36, 13, 7};
        REQUIRE(s.maximumSum(nums) == 54);
    }
    SECTION("ex2") {
        nums = {10, 12, 19, 14};
        REQUIRE(s.maximumSum(nums) == -1);
    }
}