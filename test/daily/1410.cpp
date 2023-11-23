#include "1410.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("html-entity-parser") {
    Solution s;
    SECTION("ex1") {
        REQUIRE(s.entityParser(
                    R"(&amp; is an HTML entity but &ambassador; is not.)") ==
                R"(& is an HTML entity but &ambassador; is not.)");
    }
    SECTION("ex2") {
        REQUIRE(s.entityParser(R"(and I quote: &quot;...&quot;)") ==
                R"(and I quote: "...")");
    }
}