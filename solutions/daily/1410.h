#include <algorithm>
#include <regex>
#include <string>
#include <unordered_map>
#include <vector>

using ::std::string, ::std::regex, ::std::regex_replace;
class Solution {
  public:
    string entityParser(string text) {
        std::vector<std::pair<string, string>> parseMap{
            {R"(&quot;)", R"(")"},  {R"(&apos;)", R"(')"},
            {R"(&gt;)", R"(>)"},    {R"(&lt;)", R"(<)"},
            {R"(&frasl;)", R"(/)"}, {R"(&amp;)", R"(&)"}};
        for (const auto &[substr, replaceStr] : parseMap) {
            text = std::regex_replace(text, std::regex(substr), replaceStr);
        }
        return text;
    }
};