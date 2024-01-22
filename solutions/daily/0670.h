#include <algorithm>
#include <vector>

using ::std::vector;

class Solution {
  public:
    int maximumSwap(int num) {
        if (num == 0) {
            return 0;
        }
        auto vec2num = [](vector<int> &num_digits) -> int {
            int res = 0;
            for (int i = 0; i < num_digits.size(); ++i) {
                res = res * 10 + num_digits[i];
            }
            return res;
        };
        int res = num;
        vector<int> num_digits;
        while (num) {
            num_digits.push_back(num % 10);
            num /= 10;
        }
        std::reverse(num_digits.begin(), num_digits.end());
        for (int i = 0; i < num_digits.size(); ++i) {
            for (int j = i + 1; j < num_digits.size(); ++j) {
                std::swap(num_digits[i], num_digits[j]);
                res = std::max(res, vec2num(num_digits));
                std::swap(num_digits[i], num_digits[j]);
            }
        }
        return res;
    }
};