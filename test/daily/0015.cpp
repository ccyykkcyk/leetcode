#include "0015.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("3sum") {
    Solution s;
    SECTION("ex1") {
        vector<int> nums{-1, 0, 1, 2, -1, -4};
        vector<vector<int>> expected{{-1, -1, 2}, {-1, 0, 1}};
        REQUIRE(s.threeSum(nums) == expected);
    }
    SECTION("ex2") {
        vector<int> nums{0, 1, 1};
        vector<vector<int>> expected{};
        REQUIRE(s.threeSum(nums) == expected);
    }
    SECTION("ex3") {
        vector<int> nums{0, 0, 0};
        vector<vector<int>> expected{{0, 0, 0}};
        REQUIRE(s.threeSum(nums) == expected);
    }
    SECTION("ex4") {
        vector<int> nums{0, 0, 0, 0};
        vector<vector<int>> expected{{0, 0, 0}};
        REQUIRE(s.threeSum(nums) == expected);
    }
    SECTION("ex5") {
        vector<int> nums{1, -1, -1, 0};
        vector<vector<int>> expected{{-1, 0, 1}};
        REQUIRE(s.threeSum(nums) == expected);
    }
}