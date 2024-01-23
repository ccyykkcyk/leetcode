#include "2765.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("longest-alternating-subarray") {
    Solution s;
    SECTION("ex1") {
        vector<int> nums = {2, 3, 4, 3, 4};
        REQUIRE(s.alternatingSubarray(nums) == 4);
    }
}