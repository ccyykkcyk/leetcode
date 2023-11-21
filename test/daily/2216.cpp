#include "2216.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("minDeletion") {
    Solution s;
    SECTION("ex1") {
        vector<int> nums{1, 1, 2, 3, 5};
        REQUIRE(s.minDeletion(nums) == 1);
    }
    SECTION("ex2") {
        vector<int> nums{1, 1, 2, 2, 3, 3};
        REQUIRE(s.minDeletion(nums) == 2);
    }
}