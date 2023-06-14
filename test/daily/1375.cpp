#include "1375.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("number-of-times-binary-string-is-prefix-aligned") {
    Solution s;
    vector<int> flips;
    SECTION("ex1") {
        flips = {3, 2, 4, 1, 5};
        REQUIRE(s.numTimesAllBlue(flips) == 2);
    }
    SECTION("ex2") {
        flips = {4, 1, 2, 3};
        REQUIRE(s.numTimesAllBlue(flips) == 1);
    }
}