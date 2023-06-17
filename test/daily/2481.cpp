#include "2481.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("minimum-cuts-to-divide-a-circle"){
    Solution s;
    REQUIRE(s.numberOfCuts(4) == 2);
    REQUIRE(s.numberOfCuts(3) == 3);
}