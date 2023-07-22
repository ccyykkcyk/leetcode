#include <vector>

using ::std::vector;

class Solution {
  public:
    bool lemonadeChange(vector<int> &bills) {
        int num5 = 0;
        int num10 = 0;
        for (const auto &bill : bills) {
            switch (bill) {
            case 5:
                ++num5;
                break;
            case 10:
                if (num5 > 0) {
                    --num5;
                    ++num10;
                } else {
                    return false;
                }
                break;
            case 20:
                if (num10 > 0) {
                    --num10;
                    if (num5 > 0)
                        --num5;
                    else
                        return false;
                } else {
                    if (num5 >= 3)
                        num5 -= 3;
                    else
                        return false;
                }
                break;
            }
        }
        return true;
    }
};