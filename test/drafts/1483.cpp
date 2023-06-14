#include "1483.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("kth-ancestor-of-a-tree-node") {
    vector<int> parent = {-1, 0, 0, 1, 1, 2, 2};
    TreeAncestor *obj = new TreeAncestor(7, parent);
    REQUIRE(obj->getKthAncestor(3, 1) == 1);
    REQUIRE(obj->getKthAncestor(5, 2) == 0);
    REQUIRE(obj->getKthAncestor(6, 3) == -1);
}
