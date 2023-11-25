#include "leetcode/binary_tree.h"
#include <algorithm>
#include <vector>

using ::std::vector;

class Solution {
  public:
    void dfs(TreeNode *root, vector<int> &counts, int &res) {
        if (root != nullptr) {
            ++counts[root->val];
            if (root->left == nullptr && root->right == nullptr) {
                res += isPalindromic(counts);
            } else {
                if (root->left != nullptr) {
                    dfs(root->left, counts, res);
                }
                if (root->right != nullptr) {
                    dfs(root->right, counts, res);
                }
            }
            --counts[root->val];
        }
    }
    bool isPalindromic(vector<int> counts) {
        int odd = 0;
        std::for_each(counts.begin(), counts.end(),
                      [&odd](int num) { odd += num % 2; });
        return odd <= 1;
    }
    int pseudoPalindromicPaths(TreeNode *root) {
        int res = 0;
        vector<int> count(10, 0);
        dfs(root, count, res);
        return res;
    }
};