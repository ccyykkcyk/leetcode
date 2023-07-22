#include "0860.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("lemonade-change") {
    Solution s;
    vector<int> bills;
    SECTION("ex1") {
        bills = {5, 5, 5, 10, 20};
        REQUIRE(s.lemonadeChange(bills) == true);
    }
    SECTION("ex2") {
        bills = {5, 5, 10, 10, 20};
        REQUIRE(s.lemonadeChange(bills) == false);
    }
}