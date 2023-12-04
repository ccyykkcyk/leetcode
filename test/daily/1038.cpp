#include "1038.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("binary-search-tree-to-greater-sum-tree") {
    Solution s;
    SECTION("ex1") {
        TreeNode *root = new TreeNode(4);
        root->left = new TreeNode(1);
        root->right = new TreeNode(6);
        root->left->left = new TreeNode(0);
        root->left->right = new TreeNode(2);
        root->right->left = new TreeNode(5);
        root->right->right = new TreeNode(7);
        root->left->right->right = new TreeNode(3);
        root->right->right->right = new TreeNode(8);
        s.bstToGst(root);
        REQUIRE(root->val == 30);
        REQUIRE(root->left->val == 36);
        REQUIRE(root->right->val == 21);
        REQUIRE(root->left->left->val == 36);
        REQUIRE(root->left->right->val == 35);
        REQUIRE(root->right->left->val == 26);
        REQUIRE(root->right->right->val == 15);
        REQUIRE(root->left->right->right->val == 33);
        REQUIRE(root->right->right->right->val == 8);
    }
}