#include <vector>

using ::std::vector;

class TreeAncestor {
  public:
    TreeAncestor(int n, vector<int> &parent) { tree = parent; }

    int getKthAncestor(int node, int k) {
        for (; k > 0; --k) {
            node = tree[node];
            if (node == -1) {
                return -1;
            }
        }
        return node;
    }

  private:
    vector<int> tree;
};