#include <algorithm>
#include <unordered_map>
#include <vector>

using ::std::vector, ::std::unordered_map, ::std::for_each;

class Solution {
  public:
    int maximumSum(vector<int> &nums) {
        int result = -1;
        auto digitsSum = [](int num) {
            int sum = 0;
            while (num) {
                sum += num % 10;
                num /= 10;
            }
            return sum;
        };
        auto maxTwoSum = [](const vector<int> &nums) {
            int max1 = 0, max2 = 0;
            for (auto num : nums) {
                if (num > max1) {
                    max2 = max1;
                    max1 = num;
                } else if (num > max2) {
                    max2 = num;
                }
            }
            return max1 + max2;
        };
        unordered_map<int, vector<int>> map;
        for_each(nums.begin(), nums.end(),
                 [&](auto num) { map[digitsSum(num)].push_back(num); });
        for_each(map.begin(), map.end(), [&](const auto &foo) {
            if (foo.second.size() >= 2) {
                result = std::max(maxTwoSum(foo.second), result);
            }
        });
        return result;
    }
};