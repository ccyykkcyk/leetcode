#include <vector>

using ::std::vector;

class Solution {
  public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        int temp = 0;
        do {
            temp = numbers[i] + numbers[j];
            if (temp < target) {
                ++i;
            }
            if (temp > target) {
                --j;
            }
        } while (temp != target);
        return vector<int>{i + 1, j + 1};
    }
};