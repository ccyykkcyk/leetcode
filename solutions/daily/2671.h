#include <algorithm>
#include <unordered_map>

using ::std::unordered_map;
class FrequencyTracker {
public:
    FrequencyTracker() { map2 = {{0, 0}, {1, 0}}; }

    void add(int number) {
        if (auto it = map1.find(number); it != map1.end()) {
            map2[it->second] = std::max(-1, map2[it->second] - 1);
            it->second++;
            if (auto it2 = map2.find(it->second); it2 != map2.end())
                it2->second++;
            else
                map2[it->second] = 1;
            return;
        }
        map1[number] = 1;
        map2[1]++;
    }

    void deleteOne(int number) {
        if (auto it = map1.find(number); it != map1.end()) {
            map2[it->second] = std::max(-1, map2[it->second] - 1);
            it->second = std::max(0, it->second - 1);
            map2[it->second]++;
        }
    }

    bool hasFrequency(int frequency) {
        if (auto it = map2.find(frequency); it != map2.end())
            return it->second > 0;
        return false;
    }

private:
    unordered_map<int, int> map1;
    unordered_map<int, int> map2;
};
