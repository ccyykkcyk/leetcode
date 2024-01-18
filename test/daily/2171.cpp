#include "2171.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("removing-minimum-number-of-magic-beans") {
    Solution s;
    SECTION("ex1") {
        vector<int> beans = {4, 1, 6, 5};
        REQUIRE(s.minimumRemoval(beans) == 4);
    }
    SECTION("ex2") {
        vector<int> beans = {60};
        REQUIRE(s.minimumRemoval(beans) == 0);
    }
}