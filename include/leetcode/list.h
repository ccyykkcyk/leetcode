#ifndef LEETCODE_LIST_H_
#define LEETCODE_LIST_H_
#include <vector>
using ::std::vector;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    ListNode(const vector<int> &nums) {
        if (nums.empty()) {
            return;
        }
        val = nums[0];
        ListNode *node = this;
        for (int i = 1; i < nums.size(); i++) {
            node->next = new ListNode(nums[i]);
            node = node->next;
        }
    }
    friend bool operator==(const ListNode &x, const ListNode &y) {
        if (x.val != y.val) {
            return false;
        }
        if (x.next == nullptr && y.next == nullptr) {
            return true;
        }
        if (x.next == nullptr || y.next == nullptr) {
            return false;
        }
        ListNode *p = x.next, *q = y.next;
        while (p != nullptr && q != nullptr) {
            if (p->val != q->val) {
                return false;
            }
            p = p->next;
            q = q->next;
        }
        return p == nullptr && q == nullptr;
    }
};

#endif