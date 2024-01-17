#include <string>
#include <vector>

using ::std::string, ::std::vector;
class Solution {
  public:
    int maximumNumberOfStringPairs(vector<string> &words) {
        int ans = 0;
        for (int i = 0; i < words.size(); ++i) {
            for (int j = i + 1; j < words.size(); ++j) {
                if (words[i][0] == words[j][1] && words[i][1] == words[j][0])
                    ans += 1;
            }
        }
        return ans;
    }
};