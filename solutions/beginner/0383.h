#include <string>
#include <vector>

using ::std::string, ::std::vector;

class Solution {
  public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> m(26, 0);
        for (const auto &it : magazine) {
            m[it - 'a'] += 1;
        }
        for (const auto &it : ransomNote) {
            m[it - 'a'] -= 1;
            if (m[it - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};