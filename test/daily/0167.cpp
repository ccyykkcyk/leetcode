#include "0167.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("two-sum-ii-input-array-is-sorted") {
    Solution s;
    SECTION("ex1") {
        vector<int> nums{2, 7, 11, 15};
        vector<int> expected{1, 2};
        REQUIRE(s.twoSum(nums, 9) == expected);
    }
    SECTION("ex2") {
        vector<int> nums{2, 3, 4};
        vector<int> expected{1, 3};
        REQUIRE(s.twoSum(nums, 6) == expected);
    }
    SECTION("ex3") {
        vector<int> nums{-1, 0};
        vector<int> expected{1, 2};
        REQUIRE(s.twoSum(nums, -1) == expected);
    }
}