#include <algorithm>
#include <vector>

using ::std::vector;
class Solution {
  public:
    long long sumOfHeights(const vector<int> &maxHeights, int peak) {
        long long res = 0;
        for (int foo = maxHeights[peak], i = peak; i < maxHeights.size(); ++i) {
            foo = std::min(maxHeights[i], foo);
            res += foo;
        }
        for (int foo = maxHeights[peak], i = peak; i >= 0; --i) {
            foo = std::min(maxHeights[i], foo);
            res += foo;
        }
        return res - maxHeights[peak];
    }
    long long maximumSumOfHeights(vector<int> &maxHeights) {
        long long res = 0;
        for (int i = 0; i < maxHeights.size(); ++i) {
            res = std::max(res, sumOfHeights(maxHeights, i));
        }
        return res;
    }
};