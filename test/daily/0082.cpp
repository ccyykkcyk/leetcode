#include "0082.h"
#include "leetcode/list.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("remove-duplicates-from-sorted-list-ii") {
    Solution s;
    SECTION("ex1") {
        ListNode *head = new ListNode({1, 1});
        ListNode *res = nullptr;
        REQUIRE(s.deleteDuplicates(head) == res);
    }
    SECTION("ex2") {
        ListNode *head = new ListNode({1, 2, 2});
        ListNode *res = new ListNode(1);
        REQUIRE(*res == *s.deleteDuplicates(head));
    }
}