#include <algorithm>
#include <functional>
#include <string>
#include <vector>

using ::std::string, ::std::vector;
class Solution {
  public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) {
            return false;
        }
        vector<int> vec1(26, 0);
        vector<int> vec2(26, 0);
        std::for_each(word1.cbegin(), word1.cend(),
                      [&](auto ch) { ++vec1[ch - 'a']; });
        std::for_each(word2.cbegin(), word2.cend(),
                      [&](auto ch) { ++vec2[ch - 'a']; });
        for (auto i = 0; i < 26; ++i) {
            if ((vec1[i] > 0 && vec2[i] == 0) ||
                (vec1[i] == 0 && vec2[i] > 0)) {
                return false;
            }
        }
        std::sort(vec1.begin(), vec1.end(), std::greater<int>());
        std::sort(vec2.begin(), vec2.end(), std::greater<int>());
        return vec1 == vec2;
    }
};