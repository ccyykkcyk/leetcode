#include "2656.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("maximize-sum-of-array-after-k-negations") {
    Solution s;
    SECTION("ex1") {
        vector<int> nums{1, 2, 3, 4, 5};
        int k = 3;
        REQUIRE(s.maximizeSum(nums, k) == 18);
    }
    SECTION("ex2") {
        vector<int> nums{5, 5, 5};
        int k = 2;
        REQUIRE(s.maximizeSum(nums, k) == 11);
    }
}