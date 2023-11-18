#include <algorithm>
#include <unordered_map>
#include <vector>

using ::std::vector, ::std::unordered_map;

class Solution {
  public:
    int maximumSum(vector<int> &nums) {
        unordered_map<int, vector<int>> map;
        int result = -1;
        for (int i = 0; i < nums.size(); i++) {
            map[getDigitsSum(nums[i])].push_back(nums[i]);
        }
        for (const auto &foo : map) {
            if (foo.second.size() >= 2) {
                result = std::max(getTopTwoSum(foo.second), result);
            }
        }
        return result;
    }
    int getDigitsSum(int num) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int getTopTwoSum(const vector<int> &nums) {
        int max1 = 0, max2 = 0;
        for (const auto num : nums) {
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }
        return max1 + max2;
    }
};