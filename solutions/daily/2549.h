class Solution {
public:
    int distinctIntegers(int n) {
        if (n < 3) {
            return 1;
        }
        return n - 1;
    }
};