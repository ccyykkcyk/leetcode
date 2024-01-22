#include "0670.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("maximum-swap") {
    Solution s;
    SECTION("ex1") {
        int num = 2736;
        REQUIRE(s.maximumSwap(num) == 7236);
    }
    SECTION("ex2") {
        int num = 9973;
        REQUIRE(s.maximumSwap(num) == 9973);
    }
}