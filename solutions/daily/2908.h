#include <cstdint>
#include <vector>

using ::std::vector;
class Solution {
public:
    int minimumSum(vector<int> &nums) {
        bool flag = false;
        int res = INT32_MAX;
        for (auto i = 0; i < nums.size() - 2; ++i) {
            for (auto j = i + 1; (j < nums.size() - 1); ++j) {
                if (nums[j] <= nums[i])
                    continue;
                for (auto k = j + 1; (k < nums.size()); ++k) {
                    if (nums[j] <= nums[k])
                        continue;
                    res = std::min(res, nums[i] + nums[j] + nums[k]);
                    flag = true;
                }
            }
        }
        return flag ? res : -1;
    }
};