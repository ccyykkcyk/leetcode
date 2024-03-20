#include "1969.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("minimum-non-zero-product-of-the-array-elements") {
    Solution s;
    SECTION("ex1") {
        int p = 1;
        REQUIRE(s.minNonZeroProduct(p) == 1);
    }
    SECTION("ex2") {
        int p = 2;
        REQUIRE(s.minNonZeroProduct(p) == 6);
    }
    SECTION("ex3") {
        int p = 3;
        REQUIRE(s.minNonZeroProduct(p) == 1512);
    }
    SECTION("ex4") {
        int p = 4;
        REQUIRE(s.minNonZeroProduct(p) == 581202553);
    }
    SECTION("ex5") {
        int p = 35;
        REQUIRE(s.minNonZeroProduct(p) == 112322054);
    }
}