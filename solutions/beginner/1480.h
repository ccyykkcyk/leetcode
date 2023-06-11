#include <vector>

using ::std::vector;

class Solution {
  public:
    vector<int> runningSum(vector<int> &nums) {
        vector<int> dsum(nums.size());
        dsum[0] = nums[0];
        size_t numsize = nums.size();
        for (size_t i = 1; i < numsize; ++i) {
            dsum[i] = dsum[i - 1] + nums[i];
        }
        return dsum;
    }
};