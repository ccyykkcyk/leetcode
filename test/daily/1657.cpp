#include "1657.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("determine-if-two-strings-are-close") {
    Solution s;
    SECTION("ex1") {
        string word1 = "abc";
        string word2 = "bca";
        REQUIRE(s.closeStrings(word1, word2) == true);
    }
}