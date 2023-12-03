#include "1423.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("maximum-points-you-can-obtain-from-cards") {
    Solution s;
    vector<int> cardPoints;
    int k;
    SECTION("ex1") {
        cardPoints = {1, 2, 3, 4, 5, 6, 1};
        k = 3;
        REQUIRE(s.maxScore(cardPoints, k) == 12);
    }
}