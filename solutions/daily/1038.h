#include "leetcode/binary_tree.h"
#include <algorithm>
#include <bits/ranges_algo.h>
#include <numeric>
#include <vector>

using ::std::vector;
class Solution {
  public:
    vector<int> nodes;
    void dfs1(const TreeNode *root) {
        if (root != nullptr) {
            nodes.emplace_back(root->val);
            dfs1(root->left);
            dfs1(root->right);
        }
    }
    void dfs2(TreeNode *root) {
        if (root != nullptr) {
            root->val = std::accumulate(
                std::ranges::lower_bound(nodes, root->val), nodes.end(), 0);
            dfs2(root->left);
            dfs2(root->right);
        }
    }
    TreeNode *bstToGst(TreeNode *root) {
        dfs1(root);
        std::sort(nodes.begin(), nodes.end());
        dfs2(root);
        return root;
    }
};