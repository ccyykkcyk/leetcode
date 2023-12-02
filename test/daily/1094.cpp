#include "1094.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("car-pooling") {
    Solution s;
    vector<vector<int>> trips;
    int capacity;
    SECTION("ex1") {
        trips = {{2, 1, 5}, {3, 3, 7}};
        capacity = 4;
        REQUIRE(s.carPooling(trips, capacity) == false);
    }
}