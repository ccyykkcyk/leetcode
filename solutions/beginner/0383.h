#include <algorithm>
#include <string>

using ::std::string;
class Solution {
  public:
    bool canConstruct(string ransomNote, string magazine) {
        int foo[26] = {0};
        std::ranges::for_each(magazine, [&](auto ch) { ++foo[ch - 'a']; });
        for (auto ch : ransomNote) {
            if (--foo[ch - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};