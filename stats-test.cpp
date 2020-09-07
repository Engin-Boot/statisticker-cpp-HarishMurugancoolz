#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"

#include <cmath>
using namespace std;

TEST_CASE("When the input array are of real numbers then report average ,maximum and minimum ") {
    auto computedStats = Statistics::ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.average - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.max - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.min - 1.5) < epsilon);
}

TEST_CASE("when the input array is empty then reports NaN for average,maximum,minimum"){
    auto computedStats = Statistics::ComputeStatistics({});
    REQUIRE(std::isnan(computedStats.average)==true);
    REQUIRE(std::isnan(computedStats.max)==true);
    REQUIRE(std::isnan(computedStats.min)==true);
    
}
TEST_CASE("when the input array contains NaN value then reports average,minimum,maximum of non NaN values")
{
    auto computedStats = Statistics::ComputeStatistics({nan(""),0.5,7.5,3.9,20.8});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.average - 8.175) < epsilon);
    REQUIRE(std::abs(computedStats.max - 20.8) < epsilon);
    REQUIRE(std::abs(computedStats.min - 0.5) < epsilon);
}

TEST_CASE("when the input array contains only NaN value then reports NaN for average,minimum,maximum")
{
    auto computedStats = Statistics::ComputeStatistics({nan(""),nan(""),nan("")});
    REQUIRE(std::isnan(computedStats.average)==true);
    REQUIRE(std::isnan(computedStats.max)==true);
    REQUIRE(std::isnan(computedStats.min)==true);
    }
