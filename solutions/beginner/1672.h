#include <numeric>
#include <vector>

using ::std::vector;

class Solution {
  public:
    int maximumWealth(vector<vector<int>> &accounts) {
        int res = 0;
        for (const auto &it : accounts) {
            int sum = std::accumulate(it.begin(), it.end(), 0);
            if (res < sum)
                res = sum;
        }
        return res;
    }
};