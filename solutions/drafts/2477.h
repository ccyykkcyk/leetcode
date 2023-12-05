#include <algorithm>
#include <unordered_map>
#include <vector>

using ::std::vector, ::std::unordered_map;
class Solution {
  public:
    long long minimumFuelCost(vector<vector<int>> &roads, int seats) {
        int res = 0;
        int n = roads.size() + 1;
        vector<int> flags(n, 0);
        unordered_map<int, vector<int>> maps;
        std::ranges::for_each(
            roads, [](auto &road) { std::sort(road.begin(), road.end()); });
        std::ranges::sort(roads, [](auto &a, auto &b) { return a[0] < b[0]; });
        std::ranges::for_each(roads, [&](auto &road) {
            if (flags[road[0] != 0]) {
                maps[road[0]].emplace_back(road[1]);
                flags[road[1]] = 0;
            } else {
                maps[road[1]].emplace_back(road[0]);
                flags[road[0]] = 0;
            }
        });
        return res;
    }
};