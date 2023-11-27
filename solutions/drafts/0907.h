#include <span>
#include <vector>

using ::std::vector, ::std::span;

class Solution {
  public:
    int sumSubarrayMins(vector<int> &arr) {
        auto res = 0;
        auto foo = [&res, &arr](int idx, int val) {
            int l = idx;
            int r = idx;
            int dup = 0;
            for (l = idx - 1; l >= 0; --l) {
                if (arr[l] < val) {
                    break;
                }
            }
            for (r = idx + 1; r < arr.size(); ++r) {
                if (arr[r] <= val) {
                    break;
                }
            }
            res += ((idx - l) * (r - idx)) * val;
            res %= int(1e9 + 7);
        };
        for (auto i = 0; i < arr.size(); ++i) {
            foo(i, arr[i]);
        }
        return res;
    }
};