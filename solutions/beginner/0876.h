#include <leetcode/list.h>

class Solution {
  public:
    ListNode *middleNode(ListNode *head) {
        if (head->next == nullptr)
            return head;

        ListNode *p1 = head;
        ListNode *p2 = head;

        while (p2->next != nullptr) {
            p2 = p2->next->next;
            p1 = p1->next;
            if (p2 == nullptr) {
                return p1;
            }
        }
        return p1;
    }
};