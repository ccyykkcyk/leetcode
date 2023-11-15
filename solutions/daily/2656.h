#include <algorithm>
#include <climits>
#include <vector>
using ::std::vector;
class Solution {
  public:
    int maximizeSum(vector<int> &nums, int k) {
        int max_num = INT_MIN;
        for (const auto num : nums) {
            max_num = std::max(num, max_num);
        }
        return (max_num + max_num + k - 1) * k / 2;
    }
};