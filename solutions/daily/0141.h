#include "leetcode/list.h"
#include <unordered_map>

class Solution {
  public:
    bool hasCycle(ListNode *head) {
        std::unordered_map<ListNode *, bool> map;
        while (head != nullptr) {
            map.emplace(head, true);
            auto foo = map.find(head->next);
            if (foo != map.end()) {
                return true;
            }
            head = head->next;
        }
        return false;
    }
};