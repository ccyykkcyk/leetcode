#include "2454.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("next-greater-element-iv") {
    Solution s;
    SECTION("ex1") {
        vector<int> nums{2, 4, 0, 9, 6};
        vector<int> ans{9, 6, 6, -1, -1};
        REQUIRE(s.secondGreaterElement(nums) == ans);
    }
}