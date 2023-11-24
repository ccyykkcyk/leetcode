#include <algorithm>
#include <vector>

using ::std::vector;
class Solution {
  public:
    int countPairs(vector<int> &nums, int target) {
        std::sort(nums.begin(), nums.end());
        auto res = 0;
        for (auto i = 0; i < nums.size() - 1; ++i) {
            for (auto j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] < target) {
                    ++res;
                } else {
                    break;
                }
            }
        }
        return res;
    }
};

class Solution1 {
  public:
    int countPairs(vector<int> &nums, int target) {
        std::sort(nums.begin(), nums.end());
        auto res = 0;
        auto i = 0;
        auto j = std::distance(
            nums.cbegin(),
            std::lower_bound(nums.cbegin(), nums.cend() - 1, target - nums[i]));
        while (i < j) {
            if (nums[i] + nums[j] < target) {
                res += j - i;
                ++i;
            } else {
                --j;
            }
        }
        return res;
    }
};