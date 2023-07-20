#include "0918.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("maximum-sum-circular-subarray") {
    Solution s;
    vector<int> nums;
    SECTION("ex1") {
        nums = {1, -2, 3, -2};
        REQUIRE(s.maxSubarraySumCircular(nums) == 3);
    }
    SECTION("ex2") {
        nums = {5, -3, 5};
        REQUIRE(s.maxSubarraySumCircular(nums) == 10);
    }
    SECTION("ex3") {
        nums = {3, -2, 2, -3};
        REQUIRE(s.maxSubarraySumCircular(nums) == 3);
    }
    SECTION("ex4") {
        nums = {-3, -2, -3};
        REQUIRE(s.maxSubarraySumCircular(nums) == -2);
    }
}