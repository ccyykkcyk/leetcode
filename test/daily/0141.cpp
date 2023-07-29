#include "0141.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("linked-list-cycle") {
    Solution s;
    ListNode *head = nullptr;
    SECTION("ex1") {
        head = new ListNode(3);
        ListNode *p = head;
        p->next = new ListNode(2);
        p = p->next;
        p->next = new ListNode(0);
        p = p->next;
        p->next = new ListNode(-4);
        p = p->next;
        p->next = head->next;
        REQUIRE(s.hasCycle(head));
    }
    SECTION("ex2") {
        head = new ListNode(1);
        ListNode *p = head;
        p->next = new ListNode(2);
        p = p->next;
        p->next = head;
        REQUIRE(s.hasCycle(head));
    }
    SECTION("ex3") {
        head = new ListNode(1);
        REQUIRE_FALSE(s.hasCycle(head));
    }
}