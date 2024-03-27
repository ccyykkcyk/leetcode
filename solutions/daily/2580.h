#include <algorithm>
#include <cstddef>
#include <vector>

using ::std::vector;
class Solution {
public:
    auto binPow(auto base, auto exp, auto mod) {
        base %= mod;
        auto res = 1;
        while (exp) {
            if (exp & 1)
                res = (res * base) % mod;
            base = (base * base) % mod;
            exp >>= 1;
        }
        return res;
    }
    int countWays(vector<vector<int>> &ranges) {
        std::sort(ranges.begin(), ranges.end(),
                  [](const auto &a, const auto &b) {
                      return a[0] < b[0];
                  });
        int foo[2] = {ranges[0][0], ranges[0][1]};
        int num = 1;
        for (const auto &range : ranges) {
            if (range[0] <= foo[1]) {
                foo[0] = std::min(foo[0], range[0]);
                foo[1] = std::max(foo[1], range[1]);
                continue;
            }
            ++num;
            foo[0] = range[0];
            foo[1] = range[1];
        }
        return binPow<size_t, size_t, size_t>(2, num, 1e9 + 7);
    }
};