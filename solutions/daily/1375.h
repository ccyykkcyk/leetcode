#include <cstddef>
#include <cstdint>
#include <vector>

using ::std::vector;

class Solution {
  public:
    int numTimesAllBlue(vector<int> &flips) {
        if (flips.back() == 1)
            return 1;
        size_t except_sum = 0;
        size_t sum = 0;
        int count = 0;
        for (size_t i = 0; i < flips.size(); ++i) {
            sum += flips[i];
            except_sum = (i + 2) * (i + 1) / 2;
            if (sum == except_sum) {
                ++count;
            }
        }
        return count;
    }
};