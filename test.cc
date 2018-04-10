#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "math_utils.h"


TEST_CASE("IsSquare computed properly", "[isSquare]"){
  bool result = Math::IsSquare(25);
  REQUIRE(result == true);

  result = Math::IsSquare(28);
  REQUIRE(result == false);

  result = Math::IsSquare(37);
  REQUIRE(result == false);

  result = Math::IsSquare(49);
  REQUIRE(result == true);


  result = Math::IsSquare(269);
  REQUIRE(result == false);
}


TEST_CASE("GetDigit computed properly", "[GetDigit]"){
  short digit = Math::GetDigit(123, 1);
  REQUIRE(digit == 3);

  digit = Math::GetDigit(49012, 10);
  REQUIRE(digit == 1);


  digit = Math::GetDigit(10089324, 10000);
  REQUIRE(digit == 8);
}


TEST_CASE("EqualParity with two nums computed properly", "[EqualParity 2 numbers]"){
  bool parity = Math::EqualParity(4, 8);
  REQUIRE(parity == true);

  parity = Math::EqualParity(1256, 129);
  REQUIRE(parity == false);

  parity = Math::EqualParity(25001, 9001);
  REQUIRE(parity == true);

  parity = Math::EqualParity(4211, 8200);
  REQUIRE(parity == false);
}


TEST_CASE("EqualParity with vector computed properly", "[EqualParity vector]"){
  std::vector<int> test = {1,2,3};
  bool parity = Math::EqualParity(test);
  REQUIRE(parity == false);


  test = {2,4,6,8};
  parity = Math::EqualParity(test);
  REQUIRE(parity == true);

  test = {1,3,5,7};
  parity = Math::EqualParity(test);
  REQUIRE(parity == true);


  test = {1,3,8, 5, 7};
  parity = Math::EqualParity(test);
  REQUIRE(parity == false);
}