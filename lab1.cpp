#include <iostream>
using namespace std;

const int iMyConst1 = 800;

int iMyVar1 = 800,
    iMyVar2,
    iMyVar3;

short sMyShortVar1,
      sMyShortVar2,
      sMyShortVar3;

long lMyLongVar1 = 3475898789,
     lMyLongVar2,
     lMyLongVar3 = 567;

unsigned short usMyUnsignedShortVar1 = 288,
       usMyUnsignedShortVar2,
       usMyUnsignedShortVar3;

int main() {
  //warning here
  iMyVar2 = 67.8;
  cout << "iMyVar2: " << iMyVar2 <<"\n";
  iMyVar3 = -1275978;

  cout << "iMyVar3: " << iMyVar3 <<"\n";;
  //compiler warning here, float conversion
  lMyLongVar2 = -45.78;

  cout << "lMyLongVar2: " << lMyLongVar2 <<"\n";;
  //compiler warning, out of range
  usMyUnsignedShortVar2 = 156378;

  usMyUnsignedShortVar3 = -40;

  return 0;
}
