#include <algorithm>
#include <vector>

using ::std::vector;
class Solution {
  public:
    long long maxTaxiEarnings(int n, vector<vector<int>> &rides) {
        namespace ranges = std::ranges;
        ranges::sort(rides,
                     [](const auto &a, const auto &b) { return a[0] < b[0]; });
        vector<long long> dp(n + 1, 0);
        int pre = 1;
        ranges::for_each(rides, [&](const auto &ride) {
            for (auto i = pre; i <= ride[1]; ++i) {
                dp[i] = std::max(dp[i - 1], dp[i]);
            }
            pre = ride[1] + 1;
            dp[ride[1]] = std::max(dp[ride[1]],
                                   ride[1] - ride[0] + ride[2] + dp[ride[0]]);
        });
        return *std::max_element(dp.cbegin(), dp.cend());
    }
};