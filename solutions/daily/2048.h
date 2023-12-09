#include <vector>

using ::std::vector;
class Solution {
  public:
    int nextBeautifulNumber(int n) {
        int foo[8] = {1, 22, 122, 1333, 14444, 122333, 1224444, 1224444};
        auto isbalanced = [](int n) {
            int cnt[10] = {0};
            while (n) {
                ++cnt[n % 10];
                n /= 10;
            }
            for (int i = 0; i < 10; ++i)
                if (cnt[i] > 0 && cnt[i] != i)
                    return false;
            return true;
        };
        auto countDigits = [](int n) {
            int cnt = 0;
            while (n) {
                if (n < 10) {
                    cnt += 1;
                } else {
                    cnt += 2;
                }
                n /= 100;
            }
            return cnt;
        };
        int res = 0;
        for (auto i = n + 1; i <= foo[countDigits(n)]; ++i) {
            if (isbalanced(i)) {
                res = i;
                break;
            }
        }
        return res;
    }
};