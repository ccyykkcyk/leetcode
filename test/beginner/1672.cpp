#include "1672.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("richest-customer-wealth"){
    Solution test;
    SECTION("ex1") {
        vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
        REQUIRE(test.maximumWealth(accounts) == 6);
    }
    SECTION("ex2") {
        vector<vector<int>> accounts = {{1, 5}, {7, 3}, {3, 5}};
        REQUIRE(test.maximumWealth(accounts) == 10);
    }
    SECTION("ex3") {
        vector<vector<int>> accounts = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
        REQUIRE(test.maximumWealth(accounts) == 17);
    }
}