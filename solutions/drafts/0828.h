#include <algorithm>
#include <string>
#include <string_view>
#include <unordered_set>
#include <vector>

using ::std::string, ::std::vector, ::std::string_view;
class Solution {
  public:
    int uniqueLetterString(string s) {
        int res = 0;
        for (int i = 0; i < s.length(); ++i) {
            for (int j = 2; i + j - 1 < s.length(); ++j) {
                res += getUnique(string_view(s.c_str() + i, j));
            }
        }
        return res + s.length();
    }
    int getUnique(const string_view &str) {
        int res = 0;
        vector<int> counts(26, 0);
        std::for_each(str.begin(), str.end(),
                      [&counts](auto letter) { ++counts[letter - 'A']; });
        std::for_each(counts.begin(), counts.end(), [&res](auto count) {
            if (count == 1) {
                ++res;
            }
        });
        return res;
    }
};

class Solution1 {
  public:
    int uniqueLetterString(string s) {
        int res = 0;
        std::unordered_set<char> sets;
        auto count_one = [](vector<int> &counts) {
            int res = 0;
            std::for_each(counts.begin(), counts.end(), [&res](auto num) {
                if (num == 1) {
                    ++res;
                }
            });
            return res;
        };
        for (int i = 0; i < s.length(); ++i) {
            vector<int> counts(26, 0);
            for (int j = 0; i + j < s.length(); ++j) {
                counts[s[i + j] - 'A']++;
                res += count_one(counts);
            }
        }
        return res;
    }
};

class Solution2 {
  public:
    int uniqueLetterString(string s) {
        std::unordered_set<char> suc;
        std::unordered_set<char> fail;
        int res = 0;
        for (int i = 0; i < s.length(); ++i) {
            suc.clear();
            fail.clear();
            suc.insert(s[i]);
            for (int j = 0; i + j < s.length(); ++j) {
                auto foo = s[i + j];
                if (suc.contains(foo)) {
                    fail.insert(foo);
                } else {
                    suc.insert(foo);
                }
                res += (suc.size() - fail.size());
            }
        }
        return res;
    }
};