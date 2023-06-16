#include "1494.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("parallel-courses-ii") {
    Solution s;
    vector<vector<int>> relations;
    int n, k;
    SECTION("ex1") {
        n = 4;
        relations = {{2, 1}, {3, 1}, {1, 4}};
        k = 2;
        REQUIRE(s.minNumberOfSemesters(n, relations, k) == 3);
    }
    SECTION("ex2") {
        n = 5;
        relations = {{2, 1}, {3, 1}, {4, 1}, {1, 5}};
        k = 2;
        REQUIRE(s.minNumberOfSemesters(n, relations, k) == 4);
    }
    SECTION("ex3") {
        n = 11;
        relations = {};
        k = 2;
        REQUIRE(s.minNumberOfSemesters(n, relations, k) == 6);
    }
    SECTION("ex4") {
        n = 4;
        relations = {{2, 1}, {2, 4}};
        k = 2;
        REQUIRE(s.minNumberOfSemesters(n, relations, k) == 2);
    }
    SECTION("ex5") {
        n = 13;
        relations = {{12, 8}, {2, 4},  {3, 7},  {6, 8},  {11, 8}, {9, 4},
                     {9, 7},  {12, 4}, {11, 4}, {6, 4},  {1, 4},  {10, 7},
                     {10, 4}, {1, 7},  {1, 8},  {2, 7},  {8, 4},  {10, 8},
                     {12, 7}, {5, 4},  {3, 4},  {11, 7}, {7, 4},  {13, 4},
                     {9, 8},  {13, 8}};
        k = 9;
        REQUIRE(s.minNumberOfSemesters(n, relations, k) == 3);
    }
}