#include "2807.h"
#include "leetcode/list.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("insert-greatest-common-divisors-in-linked-list") {
    Solution s;
    SECTION("ex1") {
        ListNode *head = new ListNode(
            18, new ListNode(6, new ListNode(10, new ListNode(3))));
        ListNode *ans = new ListNode(
            18,
            new ListNode(
                6, new ListNode(
                       6, new ListNode(
                              2, new ListNode(
                                     10, new ListNode(1, new ListNode(3)))))));
        ListNode *res = s.insertGreatestCommonDivisors(head);
        while (res->next != nullptr) {
            REQUIRE(res->val == ans->val);
            res = res->next;
            ans = ans->next;
        }
    }
}