#include "0322.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("coin-change") {
    Solution s;
    vector<int> coins;
    int amount;
    SECTION("ex1") {
        coins = {1, 2, 5};
        amount = 11;
        REQUIRE(s.coinChange(coins, amount) == 3);
    }
}