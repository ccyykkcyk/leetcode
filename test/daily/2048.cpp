#include "2048.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("next-greater-numerically-balanced-number") {
    Solution s;
    SECTION("ex1") {
        REQUIRE(s.nextBeautifulNumber(1) == 22);
        REQUIRE(s.nextBeautifulNumber(1000) == 1333);
        REQUIRE(s.nextBeautifulNumber(3000) == 3133);
    }
}