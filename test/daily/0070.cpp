#include "0070.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("climbing-stairs") {
    Solution s;
    SECTION("ex1") {
        int n = 2;
        REQUIRE(s.climbStairs(n) == 2);
    }
    SECTION("ex2") {
        int n = 3;
        REQUIRE(s.climbStairs(n) == 3);
    }
}