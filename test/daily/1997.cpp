#include "1997.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("first-day-where-you-have-been-in-all-the-rooms") {
    Solution s;
    SECTION("ex1") {
        vector<int> nextVisit{0, 0, 2};
        REQUIRE(s.firstDayBeenInAllRooms(nextVisit) == 6);
    }
    SECTION("ex2") {
        vector<int> nextVisit{0, 1, 2, 0};
        REQUIRE(s.firstDayBeenInAllRooms(nextVisit) == 6);
    }
}