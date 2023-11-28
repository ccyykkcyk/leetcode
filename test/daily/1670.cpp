#include "1670.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("design-front-middle-back-queue") {
    FrontMiddleBackQueue fmbq;
    SECTION("ex1") {
        fmbq.pushFront(1);
        fmbq.pushBack(2);
        fmbq.pushMiddle(3);
        fmbq.pushMiddle(4);
        REQUIRE(fmbq.popFront() == 1);
        REQUIRE(fmbq.popMiddle() == 3);
        REQUIRE(fmbq.popMiddle() == 4);
        REQUIRE(fmbq.popBack() == 2);
        REQUIRE(fmbq.popFront() == -1);
    }
}