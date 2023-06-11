#include <leetcode/leetcode.h>

class Solution {
  public:
    int numberOfSteps(int num) {
        int count = 0;
        for (count = 0; num != 0; num >>= 1, ++count) {
            if (num == 1) {
                ++count;
                break;
            }
            if ((num & 1) != 0) {
                ++count;
            }
        }
        return count;
    }
};