#include "1342.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("number-of-steps-to-reduce-a-number-to-zero") {
    Solution test;
    SECTION("ex1") { REQUIRE(test.numberOfSteps(14) == 6); }
    SECTION("ex2") { REQUIRE(test.numberOfSteps(8) == 4); }
    SECTION("ex3") { REQUIRE(test.numberOfSteps(123) == 12); }
}