#include "geometry-test.h"

int circle(int x1, int y1, float r1) {
  float p = 3.14;

  float s1, p1;
  p1 = 2 * p * r1;
  s1 = p * r1 * r1;

  return p1 + s1;
}

TEST_CASE("get parametrs", "[p1+s1]") {
  REQUIRE(circle(0, 0, 1) == 9);
  REQUIRE(circle(4, 4, 4) == 75);
  cout << "Test circle" << endl;
}
