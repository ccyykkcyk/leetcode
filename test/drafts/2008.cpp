#include "2008.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("maximum-earnings-from-taxi") {
    Solution s;
    SECTION("ex1") {
        vector<vector<int>> rides = {{2, 5, 4}, {1, 5, 1}};
        REQUIRE(s.maxTaxiEarnings(5, rides) == 7);
    }
    SECTION("ex2") {
        vector<vector<int>> rides = {{1, 6, 1},   {3, 10, 2},  {10, 12, 3},
                                     {11, 12, 2}, {12, 15, 2}, {13, 18, 1}};
        REQUIRE(s.maxTaxiEarnings(20, rides) == 20);
    }
    SECTION("ex3") {
        vector<vector<int>> rides = {
            {4, 5, 8},  {3, 6, 6}, {1, 3, 3}, {2, 5, 9},  {4, 9, 5},
            {8, 9, 10}, {3, 8, 5}, {3, 5, 2}, {3, 7, 10}, {9, 10, 6}};
        REQUIRE(s.maxTaxiEarnings(10, rides) == 37);
    }
    SECTION("ex4") {
        vector<vector<int>> rides = {
            {2, 3, 6},  {8, 9, 8},   {5, 9, 7}, {8, 9, 1}, {2, 9, 2},
            {9, 10, 6}, {7, 10, 10}, {6, 7, 9}, {4, 9, 7}, {2, 3, 1}};
        REQUIRE(s.maxTaxiEarnings(10, rides) == 33);
    }
}