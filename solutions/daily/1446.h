#include <algorithm>
#include <set>
#include <utility>
#include <vector>

using ::std::vector, ::std::set;
class Solution {
  public:
    set<std::pair<int, int>> roads;
    int flags[50001] = {0};
    int dfs(int n, const vector<vector<int>> &foo) {
        int res = 0;
        flags[n] = 1;
        for (const auto &n1 : foo[n]) {
            if (flags[n1] == 1) {
                continue;
            } else if (roads.contains(std::pair{n, n1})) {
                ++res;
            }
            res += dfs(n1, foo);
        }
        return res;
    }
    int minReorder(int n, vector<vector<int>> &connections) {
        int res = 0;
        vector<vector<int>> foo(n);
        std::ranges::for_each(connections, [&](const auto &conn) {
            roads.emplace(std::pair{conn[0], conn[1]});
            foo[conn[0]].emplace_back(conn[1]);
            foo[conn[1]].emplace_back(conn[0]);
        });
        return dfs(0, foo);
    }
};