#include <bit>
#include <cstddef>
#include <vector>

using ::std::vector;
class Solution {
  public:
    int sumIndicesWithKSetBits(vector<int> &nums, int k) {
        int res = 0;
        for (size_t i = 0; i < nums.size(); ++i) {
            if (std::popcount(i) == k) {
                res += nums[i];
            }
        }
        return res;
    }
};