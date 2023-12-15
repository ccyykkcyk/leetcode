#include "2415.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("reverse-odd-levels-of-binary-tree") {
    Solution s;
    SECTION("ex1") {
        TreeNode *root = new TreeNode(2);
        root->left = new TreeNode(3);
        root->right = new TreeNode(5);
        root->left->left = new TreeNode(8);
        root->left->right = new TreeNode(13);
        root->right->left = new TreeNode(21);
        root->right->right = new TreeNode(34);
        TreeNode *result = s.reverseOddLevels(root);
        REQUIRE(result->val == 2);
        REQUIRE(result->left->val == 5);
        REQUIRE(result->right->val == 3);
        REQUIRE(result->left->left->val == 8);
        REQUIRE(result->left->right->val == 13);
        REQUIRE(result->right->left->val == 21);
        REQUIRE(result->right->right->val == 34);
    }
}
