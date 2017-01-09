#include <iostream>
using namespace std;
//Logical operations
//variant #4


int main() {
  bool logicalResult1 = !(!(66 == 12.9) < ((62 != 59)));
  // not(true < true) = true
  bool logicalResult2 = !(!(3.56 == 89.45) < ((15 != 56.2)));

  cout << "logicalResult1: " << logicalResult1 << "\n";
  cout << "logicalResult2: " << logicalResult2 << "\n";

  return 0;
}