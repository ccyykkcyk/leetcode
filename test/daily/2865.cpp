#include "2865.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("beautiful-towers-i") {
    Solution s;
    vector<int> maxHeights;
    SECTION("ex1") {
        maxHeights = {5, 3, 4, 1, 1};
        REQUIRE(s.maximumSumOfHeights(maxHeights) == 13);
    }
}