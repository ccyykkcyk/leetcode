#include "leetcode/list.h"
#include <numeric>
class Solution {
  public:
    ListNode *insertGreatestCommonDivisors(ListNode *head) {
        ListNode *first = head;
        while (first->next != nullptr) {
            ListNode *second = first->next;
            insertNode(first, std::gcd(first->val, second->val));
            first = second;
        };
        return head;
    }
    void insertNode(ListNode *head, int val) {
        ListNode *node = new ListNode(val);
        node->next = head->next;
        head->next = node;
    }
};