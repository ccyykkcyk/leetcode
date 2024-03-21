#include "2671.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("frequency-tracker") {
    SECTION("ex1") {
        FrequencyTracker s;
        s.add(3);
        s.add(3);
        REQUIRE(s.hasFrequency(2) == true);
    }
    SECTION("ex2") {
        FrequencyTracker s;
        s.add(1);
        s.deleteOne(1);
        REQUIRE(s.hasFrequency(1) == false);
    }
    SECTION("ex3") {
        FrequencyTracker s;
        REQUIRE(s.hasFrequency(2) == false);
        s.add(3);
        REQUIRE(s.hasFrequency(1) == true);
    }
}