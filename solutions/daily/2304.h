#include <algorithm>
#include <climits>
#include <vector>
using ::std::vector;
class Solution {
  public:
    int minPathCost(vector<vector<int>> &grid, vector<vector<int>> &moveCost) {
        vector<int> res(grid[0].size(), 0);
        vector<int> res1(grid[0].size(), 0);
        for (auto i = 0; i < res.size(); ++i) {
            res[i] += grid[0][i];
            res1[i] += grid[0][i];
        }
        for (auto i = 1; i < grid.size(); ++i) {
            for (auto n = 0; n < res.size(); ++n) {
                int min = INT_MAX;
                for (auto m = 0; m < res.size(); ++m) {
                    min = std::min(min, res1[m] + moveCost[grid[i - 1][m]][n]);
                }
                res[n] = min;
            }
            for (auto k = 0; k < res.size(); ++k) {
                res[k] += grid[i][k];
                res1[k] = res[k];
            }
        }
        return *std::min_element(res.cbegin(), res.cend());
    }
};