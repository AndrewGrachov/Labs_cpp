#include <iostream>
using namespace std;

//bitwise NOT
int iMyNumber1 = 18;

//bitwise AND
int iMyNumber2 = 90;
int iMyNumber3 = 122;

//bitwise OR
int iMyNumber4 = 134;
int iMyNumber5 = 65;

//bitwise XOR
int iMyNumber6 = 34;
int iMyNumber7 = 78;

const int shift = 1;
//bitwise left shift
int iMyNumber8 = 907;

//bitwise right shift
int iMyNumber9 = -95;


int main () {
  int iBitwiseNotResult = ~iMyNumber1;
  cout << "iBitwiseNotResult: " << iBitwiseNotResult << "\n";

  int iBitwiseAndResult = iMyNumber2 & iMyNumber3;
  cout << "iBitwiseAndResult: " << iBitwiseAndResult << "\n";

  int iBitwiseOrResult = iMyNumber4 | iMyNumber5;
  cout << "iBitwiseOrResult: " << iBitwiseOrResult << "\n";

  int iBitwiseXorResult = iMyNumber6 ^ iMyNumber7;
  cout << "iBitwiseXorResult: " << iBitwiseXorResult << "\n";

  int iBitwiseLeftShiftResult = iMyNumber8 << shift;
  cout << "iBitwiseLeftShiftResult: " << iBitwiseLeftShiftResult << "\n";

  int iBitwiseRightShiftResult = iMyNumber9 >> shift;
  cout << "iBitwiseRightShiftResult: " << iBitwiseRightShiftResult << "\n";

  return 0;
}