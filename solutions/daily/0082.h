#include "leetcode/list.h"

class Solution {
  public:
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *pprev = nullptr;
        ListNode *prev = head;
        if (prev == nullptr) {
            return head;
        }
        ListNode *curr = head->next;
        while (curr != nullptr) {
            int flag = 0;
            while (prev != nullptr && curr != nullptr &&
                   curr->val == prev->val) {
                flag = 1;
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }
            if (flag == 0) {
                pprev = prev;
                prev = curr;
                curr = curr->next;
            } else {
                if (pprev == nullptr) {
                    head = curr;
                    prev = head;
                    if (prev != nullptr) {
                        curr = prev->next;
                    }
                } else {
                    pprev->next = curr;
                    prev = curr;
                    if (curr != nullptr) {
                        curr = prev->next;
                    }
                }
            }
        }
        return head;
    }
};