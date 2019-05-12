#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void is_more_then_0(float &r2) {

  cout << "enter radius (more than 0) ";
  cin >> r2;
  if (r2 <= 0) {
    cout << "the data is erroneous";
    exit(1);
  }
}
