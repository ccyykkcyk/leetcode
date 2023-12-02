#include <algorithm>
#include <vector>

using ::std::vector;
class Solution {
  public:
    bool carPooling(vector<vector<int>> &trips, int capacity) {
        vector<int> vec(1001, 0);
        std::for_each(trips.cbegin(), trips.cend(), [&](auto &trip) {
            for (auto i = trip[1]; i < trip[2]; ++i) {
                vec[i] += trip[0];
            }
        });
        if (*std::max_element(vec.begin(), vec.end()) > capacity) {
            return false;
        } else {
            return true;
        }
    }
};
