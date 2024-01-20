#include "2788.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("split-strings-by-separator") {
    Solution s;
    vector<string> words;
    SECTION("ex1") {
        words = {"one.two.three", "four.five", "six"};
        REQUIRE(s.splitWordsBySeparator(words, '.') ==
                vector<string>{"one", "two", "three", "four", "five", "six"});
    }
}