#include <algorithm>
#include <climits>
#include <vector>

using ::std::vector;

class Solution {
  public:
    int maxSubArray(vector<int> &nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        int f1 = 0, f2 = 0;
        f1 = nums[0];
        int res = f1;
        for (int i = 1; i < nums.size(); ++i) {
            f2 = std::max(f1 + nums[i], nums[i]);
            f1 = f2;
            res = std::max(res, f2);
        }
        return res;
    }
};