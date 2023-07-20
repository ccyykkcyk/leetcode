#include <algorithm>
#include <string>
#include <unordered_set>
#include <vector>

using ::std::vector;

class Solution {
  public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> results;
        std::unordered_set<std::string> sets;
        if (nums.size() == 3) {
            if (nums[0] + nums[1] + nums[2] == 0) {
                results.emplace_back(nums);
            }
            return results;
        }
        std::sort(nums.begin(), nums.end());

        int t1 = -100001;
        int t2 = -100001;
        int t3 = -100001;
        for (int i = 0; i < nums.size() - 2; ++i) {
            if (nums[i] == t1) {
                continue;
            }
            t1 = nums[i];

            int temp = -t1;
            for (int n = i + 1, m = nums.size() - 1; n < m;) {
                t2 = nums[n];
                t3 = nums[m];
                if (t2 + t3 > temp) {
                    --m;
                    continue;
                }
                if (t2 + t3 < temp) {
                    ++n;
                    continue;
                }
                auto res = std::to_string(t1) + std::to_string(t2) +
                           std::to_string(t3);
                auto foo = sets.find(res);
                if (foo == sets.end()) {
                    sets.insert(res);
                    results.emplace_back(vector<int>{t1, t2, t3});
                    --m;
                }
                ++n;
            }
        }
        return results;
    }
};