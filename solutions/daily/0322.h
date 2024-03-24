#include <algorithm>
#include <vector>

using ::std::vector;
class Solution {
public:
    int coinChange(vector<int> &coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;
        for (auto i = 1; i <= amount; ++i) {
            for (auto coin : coins) {
                if (coin <= i)
                    dp[i] = std::min(dp[i], dp[i - coin] + 1);
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
    }
};