#include "2810.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("faulty-keyboard") {
    Solution s;
    SECTION("ex1") {
        string str = "string";
        REQUIRE(s.finalString(str) == "rtsng");
    }
}