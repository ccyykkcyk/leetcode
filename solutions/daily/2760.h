#include <algorithm>
#include <vector>
using ::std::vector;

class Solution {
  public:
    int longestAlternatingSubarray(vector<int> &nums, int threshold) {
        int result = 0;
        for (auto i = 0; i < nums.size(); ++i) {
            if (nums[i] % 2 == 0) {
                auto tmp_result = 0;
                for (auto j = i; j < nums.size(); ++j) {
                    if (nums[j] > threshold) {
                        i += tmp_result;
                        break;
                    } else if (nums[j] % 2 == (j - i) % 2) {
                        ++tmp_result;
                    } else {
                        i += tmp_result - 1;
                        break;
                    }
                }
                result = std::max(result, tmp_result);
            }
        }
        return result;
    }
};