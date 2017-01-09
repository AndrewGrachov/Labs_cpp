#include <iostream>
using namespace std;

//variant #4
//unary operations
int iMyNumber = -34;
int iMyNumber2 = 98;

float fMyNumber = 34.2;
float fMyNumber2 = 65.3;

//binary operations
//sum
int iMyNumber3 = 345;
int iMyNumber4 = -55;

float fMyNumber3 = 14.5;
float fMyNumber4 = 23.3;

//subtract
int iMyNumber5 = 43;
int iMyNumber6 = 87;

float fMyNumber5 = 54.5;
float fMyNumber6 = 14.8;

//multiply
int iMyNumber7 = 7;
int iMyNumber8 = 23;

float fMyNumber7 = 34.5;
float fMyNumber8 = 9.4;

//int division
int iMyNumber9 = 18;
int iMyNumber10 = 6;
int iMyNumber11 = 5;

float fMyNumber9 = 25.3;
float fMyNumber10 = 3.4;
float fMyNumber11 = 4.2;

//int remainder division

int iMyNumber12 = 19;
int iMyNumber13 = 4;

float fMyNumber12 = 20.6;
float fMyNumber13 = 9.2;

//pure division

int iMyNumber14 = 81;
int iMyNumber15 = 10;

float fMyNumber14 = 56.4;
float fMyNumber15 = 23.3;


int main() {
  //unary operations
  iMyNumber = -34;
  iMyNumber2 = -98;

  fMyNumber = 34.2;
  fMyNumber2 = -65.3;

  //binary operations
  //sum:
  int iSumResult = iMyNumber3 + iMyNumber4;
  float fSumResult = fMyNumber3 + fMyNumber4;
  cout << "int SumResult: " << iSumResult << "\n";
  cout << "float SumResult: " << fSumResult << "\n";

  //subtract
  int iSubtractResult = iMyNumber5 - iMyNumber6;
  float fSubtractResult = fMyNumber5 - fMyNumber6;
  cout << "int SubtractResult: " << iSubtractResult << "\n";
  cout << "float SubtractResult: " << fSubtractResult << "\n";

  //multiply
  int iMultiplyResult = iMyNumber7 * iMyNumber8;
  float fMultiplyResult = fMyNumber7 * fMyNumber8;
  cout << "int MultiplyResult: " << iMultiplyResult << "\n";
  cout << "float MultiplyResult: " << fMultiplyResult << "\n";

  //int division
  int iDivisionResult1 = iMyNumber9 / iMyNumber10;
  int iDivisionResult2 = iMyNumber9 / iMyNumber11;

  int iDivisionResult3 = fMyNumber9 / fMyNumber10;
  int iDivisionResult4 = fMyNumber9 / fMyNumber11;
  cout << "int division result 1: " << iDivisionResult1 << "\n";
  cout << "int division result 2: " << iDivisionResult2 << "\n";
  cout << "float int division result 1: " << iDivisionResult3 << "\n";
  cout << "float int division result 2: " << iDivisionResult4 << "\n";

  //int division remainder
  int iRemainderDivisionResult1 = iMyNumber12 % iMyNumber13;
  int iRemainderDivisionResult2 = (int)fMyNumber12 % (int)fMyNumber13;
  cout << "int remainder division result 1: " << iRemainderDivisionResult1 << "\n";
  cout << "float int remainder division result 2: " << iRemainderDivisionResult2 << "\n";

  //pure division
  float fDivisionResult1 = (float)iMyNumber14 / (float)iMyNumber15;
  float fDivisionResult2 = fMyNumber14 / fMyNumber15;
  cout << "float division result 2: " << fDivisionResult2 << "\n";

  return 0;
}
