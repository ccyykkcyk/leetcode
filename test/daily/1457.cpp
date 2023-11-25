#include "1457.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("pseudo-palindromic-paths-in-a-binary-tree") {
    Solution s;
    SECTION("ex1") {
        TreeNode *root = new TreeNode(2);
        root->left = new TreeNode(1);
        root->right = new TreeNode(1);
        root->left->left = new TreeNode(1);
        root->left->right = new TreeNode(3);
        root->left->right->right = new TreeNode(3);
        REQUIRE(s.pseudoPalindromicPaths(root) == 1);
    }
    SECTION("ex2") {
        TreeNode *root = new TreeNode(2);
        root->left = new TreeNode(3);
        root->right = new TreeNode(1);
        root->left->left = new TreeNode(3);
        root->left->right = new TreeNode(1);
        root->right->right = new TreeNode(1);
        REQUIRE(s.pseudoPalindromicPaths(root) == 2);
    }
}