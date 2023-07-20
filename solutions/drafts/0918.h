#include <algorithm>
#include <climits>
#include <vector>

using ::std::vector;

// class Solution {
//   public:
//     int maxSubarraySumCircular(vector<int> &nums) {
//         int max = INT_MIN, min = INT_MAX;
//         int allsum = 0;
//         if (nums.size() == 1) {
//             return nums[0];
//         }
//         for (int i = 0; i < nums.size(); ++i) {
//             int t = 0;
//             for (int j = i; j < nums.size(); ++j) {
//                 t += nums[j];
//                 if (j - i == nums.size() - 1) {
//                     continue;
//                 }
//                 max = std::max(max, t);
//                 min = std::min(min, t);
//             }
//             if (i == 0) {
//                 allsum = t;
//             }
//         }
//         if (min < 0) {
//             return std::max(max, allsum - min);
//         } else {
//             return std::max(max, allsum);
//         }
//     }
// };

class Solution {
  public:
    int maxSubarraySumCircular(vector<int> &nums) {
        int max = INT_MIN, min = INT_MAX;
        int allsum = 0;
        if (nums.size() == 1) {
            return nums[0];
        }
        vector<int> nums2(nums.size() + 1);
        nums2[0] = 0;
        for (int i = 1; i <= nums.size(); ++i) {
            nums2[i] = nums2[i - 1] + nums[i - 1];
        }
        for (int i = 0; i < nums.size(); ++i) {
            int t = 0;
            vector<int> temp(nums2.begin() + i + 1, nums2.end());
            std::sort(temp.begin(), temp.end());
            max = std::max(max, temp.back() - nums2[i]);
            min = std::min(min, temp.front() - nums2[i]);
        }
        if (min < 0 && min != nums2[nums.size()]) {
            return std::max(max, nums2[nums.size()] - min);
        } else {
            return std::max(max, nums2[nums.size()]);
        }
    }
};