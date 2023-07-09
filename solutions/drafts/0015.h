#include <algorithm>
#include <vector>

using ::std::vector;

class Solution {
  public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> results;
        if (nums.size() == 3) {
            if (nums[0] + nums[1] + nums[2] == 0) {
                results.emplace_back(nums);
            }
            return results;
        }
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; ++i) {
            int j = i + 1, k = nums.size() - 1;
            int temp1 = -nums[i];
            int temp2 = 0;
            for (int j = i + 1, k = nums.size() - 1; k - j == 1;) {
                temp2 = nums[j] + nums[k];
                if (temp2 < temp1) {
                    ++j;
                }
                if (temp2 > temp1) {
                    --k;
                }
            }
        }
    }
};