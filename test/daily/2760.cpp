#include "2760.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("longest-alternating-subarray") {
    Solution s;
    SECTION("ex1") {
        vector<int> nums{3, 2, 5, 4};
        int threshold = 5;
        REQUIRE(s.longestAlternatingSubarray(nums, threshold) == 3);
    }
    SECTION("ex2") {
        vector<int> nums{1, 2};
        int threshold = 2;
        REQUIRE(s.longestAlternatingSubarray(nums, threshold) == 1);
    }
    SECTION("ex3") {
        vector<int> nums{2, 3, 4, 5};
        int threshold = 4;
        REQUIRE(s.longestAlternatingSubarray(nums, threshold) == 3);
    }
}