#include <iostream>
using namespace std;
//Chars
//Variant #4
//short = A ^ -B / * C < D * E >> sizeof F

const int iMyNumberA = 593;
const int iMyNumberB = -145;
float fMyNumberC = 9.23;
const int iMyNumberD = 43;
const int iMyNumberE = 891;
const short sAbstract = 8;

int main() {
  float* fpMyNumberC = &fMyNumberC;
  int iLeftHandAssignedVariable = iMyNumberA;

  int result = (iMyNumberA ^ -iMyNumberB) / ((*fpMyNumberC < iMyNumberD) * (iMyNumberE >> sizeof sAbstract));
  cout << "Result: " << result << "\n";
  //
  /*
  унарні операції,
  бітові операції,
  арифметичні операції,
  операція відношення
  */

  return 0;
}