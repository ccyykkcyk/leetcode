#include "2336.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("smallest-infinite-set") {
    SmallestInfiniteSet s;
    SECTION("ex1") {
        s.addBack(2);
        REQUIRE(s.popSmallest() == 1);
        REQUIRE(s.popSmallest() == 2);
        REQUIRE(s.popSmallest() == 3);
        s.addBack(1);
        REQUIRE(s.popSmallest() == 1);
        REQUIRE(s.popSmallest() == 4);
        REQUIRE(s.popSmallest() == 5);
    }
}