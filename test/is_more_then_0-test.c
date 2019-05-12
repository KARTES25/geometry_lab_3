#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int is_more_then_0(float &r2) {

  cin >> r2;
  if (r2 <= 0) return 0;
else return 1;
}

TEST_CASE("Inpur r", "[r]") {
  REQUIRE(is_more_then_0(-4) == 0);
  REQUIRE(is_more_then_0(5) == 1);
  REQUIRE(is_more_then_0(17) == 1);
  REQUIRE(is_more_then_0(-7) == 0);
  cout << "Test radius" << endl;
}
