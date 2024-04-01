#include <algorithm>
#include <string>

using ::std::string;
class Solution {
public:
    string finalString(string s) {
        string res{};
        for (auto i = 0; i < s.size(); ++i) {
            if (s[i] == 'i') {
                std::reverse(res.begin(), res.end());
            } else {
                res += s[i];
            }
        }
        return res;
    }
};