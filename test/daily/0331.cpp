#include "0331.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("verify-preorder-serialization-of-a-binary-tree") {
    Solution s;
    SECTION("ex1") {
        string preorder = "9,3,4,#,#,1,#,#,2,#,6,#,#";
        REQUIRE(s.isValidSerialization(preorder) == true);
    }
}