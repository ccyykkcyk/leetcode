#include "2744.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("find-maximum-number-of-string-pairs") {
    Solution s;
    vector<string> words;
    SECTION("ex1") {
        words = {"cd", "ac", "dc", "ca", "zz"};
        REQUIRE(s.maximumNumberOfStringPairs(words) == 2);
    }
}