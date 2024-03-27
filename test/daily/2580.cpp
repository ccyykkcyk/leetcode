#include "2580.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("count-ways-to-group-overlapping-ranges") {
    Solution s;
    SECTION("ex1") {
        vector<vector<int>> ranges{{6, 10}, {5, 15}};
        REQUIRE(s.countWays(ranges) == 2);
    }
    SECTION("ex2") {
        vector<vector<int>> ranges{{1, 3}, {10, 20}, {2, 5}, {4, 8}};
        REQUIRE(s.countWays(ranges) == 4);
    }
}