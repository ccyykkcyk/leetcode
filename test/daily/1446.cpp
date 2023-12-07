#include "1446.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("reorder-routes-to-make-all-paths-lead-to-the-city-zero") {
    Solution s;
    vector<vector<int>> connections;
    SECTION("ex1") {
        connections = {{0, 1}, {1, 3}, {2, 3}, {4, 0}, {4, 5}};
        REQUIRE(s.minReorder(6, connections) == 3);
    }
}