#include "geometry-test.h"

int main() {
  int x1, y1;

  float r1, r2;
  cout << "Enter parametr of 1st circle(WKT)" << endl;
  cin >> x1 >> y1;

  is_more_then_0(r1);
  int x2, y2;

  cout << "Enter parametr of 2nd circle(WKT)" << endl;
  cin >> x2 >> y2;

  is_more_then_0(r2);
  circle(x1, y1, r1);
  circle(x2, y2, r2);
}
