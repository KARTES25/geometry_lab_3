#include "circle.c"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
const float p = 3.1415912;

int main() {
  int x1, y1;
  float r1;
  cout << "Enter parametr of 1st circle(WKT)" << endl;
  cin >> x1 >> y1 >> r1;
  if (r1 <= 0) {
    cout << "Error:Circle can't have negative radius" << endl;
  }
  int x2, y2;
  float r2;
  cout << "Enter parametr of 2nd circle(WKT)" << endl;
  cin >> x2 >> y2 >> r2;
  if (r2 <= 0) {
    cout << "Error:Circle can't have negative radius\n" << endl;
  }
  circle(x1, y1, r1);
  circle(x2, y2, r2);
}
