#include <set>

using ::std::set;
class SmallestInfiniteSet {
  public:
    set<int> not_in;
    SmallestInfiniteSet() {}

    int popSmallest() {
        int i = 1;
        while (not_in.contains(i)) {
            ++i;
        }
        not_in.emplace(i);
        return i;
    }

    void addBack(int num) {
        if (not_in.contains(num)) {
            not_in.erase(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */