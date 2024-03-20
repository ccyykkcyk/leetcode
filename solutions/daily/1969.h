#include <cmath>
#include <cstddef>
#include <cstdint>
class Solution {
public:
    auto binpow(auto a, auto b, auto m) {
        a %= m;
        size_t res = 1;
        while (b > 0) {
            if (b & 1)
                res = res * a % m;
            a = a * a % m;
            b >>= 1;
        }
        return res;
    }
    int minNonZeroProduct(int p) {
        if (p == 1) {
            return 1;
        }
        uint64_t mod = 1e9 + 7;
        uint64_t n = binpow<uint64_t>(2, p, mod) - 1;
        uint64_t m = (uint64_t)1 << (p - 1);
        return binpow(n - 1, m - 1, mod) * n % mod;
    }
};