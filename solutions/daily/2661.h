#include <utility>
#include <vector>

using ::std::vector, ::std::pair;
class Solution {
  public:
    int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat) {
        auto m = mat.size();
        auto n = mat[0].size();
        vector<int> row(m, 0);
        vector<int> col(n, 0);
        vector<pair<int, int>> matmap(arr.size() + 1);
        for (auto i = 0; i < m; ++i) {
            for (auto j = 0; j < n; ++j) {
                matmap[mat[i][j]] = {i, j};
            }
        }
        for (auto i = 0; i < arr.size(); ++i) {
            auto [x, y] = matmap[arr[i]];
            row[x]++;
            col[y]++;
            if (row[x] == n || col[y] == m) {
                return i;
            }
        }
        return 0;
    }
};
