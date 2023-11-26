#include <algorithm>
#include <iterator>
#include <vector>

using ::std::vector;

class Solution {
  public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        vector<int> nums;
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),
                   std::back_inserter(nums));
        return 1.0 * (nums[nums.size() / 2] + nums[(nums.size() - 1) / 2]) / 2;
    }
};