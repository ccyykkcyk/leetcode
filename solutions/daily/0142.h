#include "leetcode/list.h"

#include <unordered_set>

class Solution {
  public:
    ListNode *detectCycle(ListNode *head) {
        std::unordered_set<ListNode *> visited;
        while (head != nullptr) {
            visited.insert(head);
            if (visited.count(head->next)) {
                return head->next;
            }
            head = head->next;
        }
        return nullptr;
    }
};