#include "2824.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("count-pairs-whose-sum-is-less-than-target") {
    Solution s;
    vector<int> nums;
    SECTION("ex1") {
        nums = {-1, 1, 2, 3, 1};
        REQUIRE(s.countPairs(nums, 2) == 3);
    }
    SECTION("ex2") {
        nums = {-6, 2, 5, -2, -7, -1, 3};
        REQUIRE(s.countPairs(nums, -2) == 10);
    }
}

TEST_CASE("count-pairs-whose-sum-is-less-than-target-Solution1") {
    Solution1 s;
    vector<int> nums;
    SECTION("ex1") {
        nums = {-1, 1, 2, 3, 1};
        REQUIRE(s.countPairs(nums, 2) == 3);
    }
    SECTION("ex2") {
        nums = {-6, 2, 5, -2, -7, -1, 3};
        REQUIRE(s.countPairs(nums, -2) == 10);
    }
    SECTION("ex3") {
        nums = {6, -1, 7, 4, 2, 3};
        REQUIRE(s.countPairs(nums, 8) == 8);
    }
}