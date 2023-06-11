#include "0383.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("ransom-note") {
    Solution s;
    SECTION("ex1") { REQUIRE(s.canConstruct("a", "b") == false); }
    SECTION("ex2") { REQUIRE(s.canConstruct("aa", "ab") == false); }
    SECTION("ex3") { REQUIRE(s.canConstruct("aa", "aab") == true); }
}