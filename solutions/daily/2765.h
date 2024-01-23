#include <span>
#include <vector>

using ::std::vector, ::std::span;
class Solution {
  public:
    bool isAlternate(span<int> nums) {
        int foo[2] = {1, -1};
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1] + foo[(i - 1) % 2]) {
                return false;
            }
        }
        return true;
    }
    int alternatingSubarray(vector<int> &nums) {
        int res = -1;
        for (int i = 0; i < nums.size() - 1; ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (isAlternate({nums.begin() + i, nums.begin() + j + 1})) {
                    res = std::max(res, j - i + 1);
                }
            }
        }
        return res;
    }
};