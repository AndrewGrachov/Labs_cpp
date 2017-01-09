#include <iostream>
using namespace std;
//Pointers
//variant #4

ushort uMyNumber1 = 87;
int iMyNumber2 = 11239;
float fMyNumber3 = -532.98987;

int main() {
  ushort* upMyNumber1 = &uMyNumber1;
  int* ipMyNumber2 = &iMyNumber2;
  float* fpMyNumber3 = &fMyNumber3;

  cout << "upMyNumber1: " << upMyNumber1 << "\n"; //memory address

  //dereference
  ushort uDereferenced = *upMyNumber1;
  int iDereferenced = *ipMyNumber2;
  float fDereferenced = *fpMyNumber3;

  //Pointer sizes
  int iMyNumber1PointerSize = sizeof upMyNumber1;
  int iMyNumber2PointerSize = sizeof ipMyNumber2;
  int iMyNumber3PointerSize = sizeof fpMyNumber3;

  cout << "ushort pointer size: " << iMyNumber1PointerSize << "\n"; // 8 bytes on 64bit machine
  cout << "int pointer size: " << iMyNumber2PointerSize << "\n"; // 8 bytes
  cout << "float pointer size: " << iMyNumber3PointerSize << "\n"; // 8 bytes

  //real vars sizes

  int iMyNumber1Size = sizeof uMyNumber1;
  int iMyNumber2Size = sizeof iMyNumber2;
  int iMyNumber3Size = sizeof fMyNumber3;

  cout << "ushort size: " << iMyNumber1Size << "\n"; // 2 bytes
  cout << "int size: " << iMyNumber2Size << "\n"; // 4 bytes
  cout << "float size: " << iMyNumber3Size << "\n"; // 4 bytes

  // reference

  int& irMyReferenceNumber1 = iMyNumber2;
  cout << "Reference: " << irMyReferenceNumber1 << "\n"; // 11239
  return 0;
}
