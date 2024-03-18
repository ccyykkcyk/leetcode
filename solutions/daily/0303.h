#include <numeric>
#include <vector>

using ::std::vector;
class NumArray {
public:
    NumArray(vector<int> &nums) {
        part_sum = vector<int>(nums.size());
        std::partial_sum(nums.begin(), nums.end(), part_sum.begin());
    }

    int sumRange(int left, int right) {
        if (left == 0) {
            return part_sum[right];
        }
        return part_sum[right] - part_sum[left - 1];
    }

private:
    vector<int> part_sum;
};