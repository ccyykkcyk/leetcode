#include <deque>

using ::std::deque;
class FrontMiddleBackQueue {
  public:
    deque<int> fmbq;
    FrontMiddleBackQueue() {}

    void pushFront(int val) { fmbq.emplace_front(val); }

    void pushMiddle(int val) {
        fmbq.insert(fmbq.begin() + fmbq.size() / 2, val);
    }

    void pushBack(int val) { fmbq.emplace_back(val); }

    int popFront() {
        if (fmbq.empty()) {
            return -1;
        } else {
            int val = fmbq.front();
            fmbq.pop_front();
            return val;
        }
    }

    int popMiddle() {
        if (fmbq.empty()) {
            return -1;
        } else {
            int val = fmbq[(fmbq.size() - 1) / 2];
            fmbq.erase(fmbq.begin() + (fmbq.size() - 1) / 2);
            return val;
        }
    }

    int popBack() {
        if (fmbq.empty()) {
            return -1;
        } else {
            int val = fmbq.back();
            fmbq.pop_back();
            return val;
        }
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */