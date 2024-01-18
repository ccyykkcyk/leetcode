#include <algorithm>
#include <cstdint>
#include <utility>
#include <vector>

using ::std::vector;
class Solution {
  public:
    long long minimumRemoval(vector<int> &beans) {
        std::sort(beans.begin(), beans.end());
        vector<std::pair<int, int>> new_beans;
        int count = 0;
        int pre = beans[0];
        for (int i = 0; i < beans.size(); ++i) {
            if (pre == beans[i]) {
                ++count;
                continue;
            } else {
                new_beans.push_back({pre, count});
                pre = beans[i];
                count = 1;
            }
        }
        new_beans.push_back({pre, count});
        int target = new_beans[0].first;
        int64_t tmp_res = 0;
        for (auto [val, cnt] : new_beans) {
            tmp_res += (int64_t)(val - target) * cnt;
        }
        int64_t res = tmp_res;
        int pre_val = new_beans[0].first;
        int pre_cnt = new_beans[0].second;
        int left_cnt = beans.size() - pre_cnt;
        for (int i = 1; i < new_beans.size(); ++i) {
            tmp_res = tmp_res -
                      (int64_t)left_cnt * (new_beans[i].first - pre_val) +
                      (int64_t)pre_val * pre_cnt;
            res = std::min(res, tmp_res);
            pre_val = new_beans[i].first;
            pre_cnt = new_beans[i].second;
            left_cnt = left_cnt - new_beans[i].second;
        }
        return res;
    }
};