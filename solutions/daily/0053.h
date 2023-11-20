#include <algorithm>
#include <vector>

using ::std::vector, ::std::for_each;

class Solution {
  public:
    int maxSubArray(vector<int> &nums) {
        int result = nums[0];
        int foo = nums[0];
        auto dp = [&](const auto num) {
            foo = std::max(num, foo + num);
            result = std::max(result, foo);
        };
        for_each(nums.cbegin() + 1, nums.cend(), dp);
        return result;
    }
};