#include "0412.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("fizz-buzz") {
    Solution test;
    SECTION("ex1") {
        int n = 3;
        vector<string> ans{"1", "2", "Fizz"};
        REQUIRE(test.fizzBuzz(n) == ans);
    }
    SECTION("ex2") {
        int n = 5;
        vector<string> ans{"1", "2", "Fizz", "4", "Buzz"};
        REQUIRE(test.fizzBuzz(n) == ans);
    }
    SECTION("ex3") {
        int n = 15;
        vector<string> ans{"1",    "2",    "Fizz", "4",    "Buzz",
                           "Fizz", "7",    "8",    "Fizz", "Buzz",
                           "11",   "Fizz", "13",   "14",   "FizzBuzz"};
        REQUIRE(test.fizzBuzz(n) == ans);
    }
}