#include <sstream>
#include <string>
#include <vector>

using ::std::string, ::std::vector;

class Solution {
public:
    bool checkTree(const vector<int> &tree, int pos) {
        if (pos >= tree.size())
            return false;
        ++num;
        if (tree[pos] == -1)
            return true;
        return checkTree(tree, num) && checkTree(tree, num);
    }
    bool isValidSerialization(string preorder) {
        string node;
        vector<int> tree;
        std::istringstream ss(preorder);
        while (std::getline(ss, node, ',')) {
            if (node != "#") {
                tree.emplace_back(atoi(node.c_str()));
                continue;
            }
            tree.emplace_back(-1);
        }
        bool flag = checkTree(tree, 0);
        return flag && (num == tree.size());
    }
    int num = 0;
};