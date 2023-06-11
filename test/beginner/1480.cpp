#include "1480.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("running-sum-of-1d-array") {
    Solution test;
    SECTION("ex1") {
        vector<int> nums{1, 2, 3, 4};
        vector<int> ans{1, 3, 6, 10};
        REQUIRE(test.runningSum(nums) == ans);
    }
    SECTION("ex2") {
        vector<int> nums{1, 1, 1, 1, 1};
        vector<int> ans{1, 2, 3, 4, 5};
        REQUIRE(test.runningSum(nums) == ans);
    }
    SECTION("ex3") {
        vector<int> nums{3, 1, 2, 10, 1};
        vector<int> ans{3, 4, 6, 16, 17};
        REQUIRE(test.runningSum(nums) == ans);
    }
}