#include "2697.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("lexicographically-smallest-palindrome") {
    Solution s;
    SECTION("ex1") {
        string word = "egcfe";
        REQUIRE(s.makeSmallestPalindrome(word) == "efcfe");
    }
}