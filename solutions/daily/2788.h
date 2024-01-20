#include <sstream>
#include <string>
#include <vector>

using ::std::string, ::std::vector;
class Solution {
  public:
    vector<string> splitWordsBySeparator(vector<string> &words,
                                         char separator) {
        vector<string> result;
        for (const auto &word : words) {
            std::istringstream iss(word);
            string subword;
            while (std::getline(iss, subword, separator)) {
                if (subword.size() > 0) {
                    result.emplace_back(subword);
                }
            }
        }
        return result;
    }
};