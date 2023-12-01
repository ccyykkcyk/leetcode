#include "2661.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("first-completely-painted-row-or-column") {
    Solution s;
    SECTION("ex1") {
        vector<vector<int>> mat{{1, 4}, {2, 3}};
        vector<int> arr{1, 3, 4, 2};
        REQUIRE(s.firstCompleteIndex(arr, mat) == 2);
    }
}