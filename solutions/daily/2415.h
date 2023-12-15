#include "leetcode/binary_tree.h"
#include <queue>
class Solution {
  public:
    void swapNodeVal(TreeNode *a, TreeNode *b) {
        int tmp = a->val;
        a->val = b->val;
        b->val = tmp;
    }
    TreeNode *reverseOddLevels(TreeNode *root) {
        if (root->left == nullptr) {
            return root;
        }
        std::queue<TreeNode *> lq;
        std::queue<TreeNode *> rq;
        lq.emplace(root->left);
        rq.emplace(root->right);
        int level = 1;
        int n = 1;
        while (!lq.empty()) {
            int n = 1 << (level - 1);
            while (n > 0) {
                TreeNode *l = lq.front();
                TreeNode *r = rq.front();
                if (level % 2 == 1) {
                    swapNodeVal(l, r);
                }
                if (r->left) {
                    lq.emplace(l->left);
                    lq.emplace(l->right);
                }
                if (r->right) {
                    rq.emplace(r->right);
                    rq.emplace(r->left);
                }
                lq.pop();
                rq.pop();
                --n;
            }
            ++level;
        }
        return root;
    }
};