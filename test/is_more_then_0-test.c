#include "geometry-test.h"

int is_more_then_0(float &r2) {

  cin >> r2;
  if (r2 <= 0)
    return 0;
  return 1;
}

TEST_CASE("Inpur r", "[r]") {
  float radius1 = -4;
  REQUIRE(is_more_then_0(radius1) == 0);
  float radius2 = 5;

  REQUIRE(is_more_then_0(radius2) == 1);
  float radius3 = 17;
  REQUIRE(is_more_then_0(radius3) == 1);
  float radius4 = -7;
  REQUIRE(is_more_then_0(radius4) == 0);
  cout << "Test radius" << endl;
}
