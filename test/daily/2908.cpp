#include "2908.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("minimum-sum-of-mountain-triplets-i") {
    Solution s;
    SECTION("ex1") {
        vector<int> nums{8, 6, 1, 5, 3};
        REQUIRE(s.minimumSum(nums) == 9);
    }
}