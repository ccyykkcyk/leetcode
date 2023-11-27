#include "0907.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("sum-of-subarray-minimums") {
    Solution s;
    SECTION("ex1") {
        vector<int> nums{3, 1, 2, 4};
        REQUIRE(s.sumSubarrayMins(nums) == 17);
    }
    SECTION("ex2") {
        vector<int> nums{11, 81, 94, 43, 3};
        REQUIRE(s.sumSubarrayMins(nums) == 444);
    }
    SECTION("ex3") {
        vector<int> nums{71, 55, 82, 55};
        REQUIRE(s.sumSubarrayMins(nums) == 593);
    }
    SECTION("ex4") {
        vector<int> nums{19, 19, 62, 66};
        REQUIRE(s.sumSubarrayMins(nums) == 323);
    }
}