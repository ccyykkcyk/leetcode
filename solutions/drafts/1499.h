#include <algorithm>
#include <climits>
#include <vector>

using ::std::vector;

class Solution {
  public:
    int findMaxValueOfEquation(vector<vector<int>> &points, int k) {
        int max = INT_MIN;
        for (int i = 0; i < points.size() - 1; ++i) {
            for (int j = i + 1; j < points.size(); ++j) {
                if (points[j][0] - points[i][0] > k)
                    break;
                else
                    max = std::max(points[j][0] + points[j][1] - points[i][0] +
                                       points[i][1],
                                   max);
            }
        }
        return max;
    }
};