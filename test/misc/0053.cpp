#include "0053.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("maximum-subarray"){
    Solution s;
    vector<int> nums;
    SECTION("ex1"){
        nums = {-2,1,-3,4,-1,2,1,-5,4};
        REQUIRE(s.maxSubArray(nums) == 6);
    }
    SECTION("ex2"){
        nums = {1};
        REQUIRE(s.maxSubArray(nums) == 1);
    }
    SECTION("ex3"){
        nums = {5,4,-1,7,8};
        REQUIRE(s.maxSubArray(nums) == 23);
    }
    SECTION("ex4"){
        nums = {-1,-2};
        REQUIRE(s.maxSubArray(nums) == -1);
    }
}