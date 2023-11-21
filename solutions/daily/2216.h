#include <vector>

using ::std::vector;

class Solution {
  public:
    int minDeletion(vector<int> &nums) {
        if (nums.size() < 2) {
            return nums.size();
        }
        int res = 0;
        int even = 0;
        int odd = 1;
        while (odd < nums.size()) {
            if (nums[even] != nums[odd]) {
                even = odd + 1;
                odd += 2;
                continue;
            }
            ++res;
            ++odd;
        }
        return res + (odd > nums.size() ? 0 : 1);
    }
};