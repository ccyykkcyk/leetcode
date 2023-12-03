#include <algorithm>
#include <numeric>
#include <vector>

using ::std::vector;
class Solution {
  public:
    int maxScore(vector<int> &cardPoints, int k) {
        int allsum = std::accumulate(cardPoints.cbegin(), cardPoints.cend(), 0);
        if (k == cardPoints.size()) {
            return allsum;
        }
        int i = 0;
        int j = cardPoints.size() - k;
        int partsum =
            std::accumulate(cardPoints.cbegin(), cardPoints.cbegin() + j, 0);
        int minpart = partsum;
        while (j < cardPoints.size()) {
            partsum += cardPoints[j] - cardPoints[i];
            minpart = std::min(minpart, partsum);
            ++i;
            ++j;
        }
        return allsum - minpart;
    }
};