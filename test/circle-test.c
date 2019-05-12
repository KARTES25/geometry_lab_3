#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int circle(int x1, int y1, float r1) {
  float p = 3.14;
  cout << "circle1" << x1 << y1 << r1;
  float s1, p1;
  p1 = 2 * p * r1;
  s1 = p * r1 * r1;
  cout << "perimetr = " << p1 << endl;
  cout << "area = " << s1 << endl;
  return p1+s1;
}


TEST_CASE("get parametrs", "[parametrs]") {
  REQUIRE(circle(0, 0, 1) == 9);
  REQUIRE(circle(4, 4, 4) == 75);
  cout << "Test circle" << endl;
}
