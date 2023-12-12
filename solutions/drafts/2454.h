#include <vector>

using ::std::vector;
class Solution {
  public:
    vector<int> secondGreaterElement(vector<int> &nums) {
        int n = nums.size();
        vector<int> tmp(n);
        vector<int> ans(n);
        for (auto i = 0; i < n; ++i) {
            tmp[i] = n;
            for (auto j = i + 1; j < n; ++j) {
                if (nums[j] > nums[i]) {
                    tmp[i] = j;
                    break;
                }
            }
        }
        for (auto i = 0; i < n; ++i) {
            ans[i] = -1;
            for (auto j = tmp[i] + 1; j < n; ++j) {
                if (nums[j] > nums[i]) {
                    ans[i] = nums[j];
                    break;
                }
            }
        }
        return ans;
    }
};