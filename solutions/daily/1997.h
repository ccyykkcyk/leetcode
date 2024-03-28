#include <cstdint>
#include <vector>

using ::std::vector;
class Solution {
public:
    int firstDayBeenInAllRooms(vector<int> &nextVisit) {
        int roomNum = nextVisit.size();
        vector<int64_t> dp(roomNum, 2);
        vector<int64_t> res(roomNum, 0);
        int64_t mod = 1e9 + 7;
        auto it = dp.begin();
        for (auto i = 0; i < roomNum - 1; ++i) {
            res[i + 1] = (res[i] + dp[i]) % mod;
            int64_t tmp = (res[i + 1] - res[nextVisit[i + 1]] + mod) % mod;
            dp[i + 1] = (dp[i + 1] + tmp) % mod;
        }
        return res[roomNum - 1];
    }
};