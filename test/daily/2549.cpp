#include "2549.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("count-distinct-numbers-on-board") {
    Solution s;
    SECTION("ex1") {
        int n = 5;
        REQUIRE(s.distinctIntegers(n) == 4);
    }
    SECTION("ex2") {
        int n = 3;
        REQUIRE(s.distinctIntegers(n) == 2);
    }
}