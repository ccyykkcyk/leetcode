#include "0876.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("middle-of-the-linked-list") {
    Solution s;
    ListNode *head = new ListNode(1);
    ListNode *p = head;
    SECTION("ex1") {
        for (int i = 2; i <= 5; i++) {
            p->next = new ListNode(i);
            p = p->next;
        }
        ListNode *res = s.middleNode(head);
        REQUIRE(res->val == 3);
    }
    SECTION("ex2") {
        for (int i = 2; i <= 6; i++) {
            p->next = new ListNode(i);
            p = p->next;
        }
        ListNode *res = s.middleNode(head);
        REQUIRE(res->val == 4);
    }
    delete head;
}