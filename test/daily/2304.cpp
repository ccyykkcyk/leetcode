#include "2304.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("minimum-path-cost-in-a-grid") {
    Solution s;
    SECTION("ex1") {
        vector<vector<int>> grid{{5, 3}, {4, 0}, {2, 1}};
        vector<vector<int>> moveCost{{9, 8},  {1, 5}, {10, 12},
                                     {18, 6}, {2, 4}, {14, 3}};
        REQUIRE(s.minPathCost(grid, moveCost) == 17);
    }
    // SECTION("ex2") {
    //     vector<vector<int>> grid{{1, 2, 3}, {4, 5, 6}};
    //     vector<vector<int>> moveCost{{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    //     REQUIRE(s.minPathCost(grid, moveCost) == 9);
    // }
}