#include <string>
#include <vector>

using ::std::vector, ::std::string;

class Solution {
  public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int i = 1; i <= n; ++i) {
            if (i % 15 == 0) {
                result.emplace_back("FizzBuzz");
                continue;
            }
            if (i % 5 == 0) {
                result.emplace_back("Buzz");
                continue;
            }
            if (i % 3 == 0) {
                result.emplace_back("Fizz");
                continue;
            }
            result.emplace_back(std::to_string(i));
        }
        return result;
    }
};