#include <iostream>
using namespace std;

//type casting
//variant #4

int iMyNumber1 = 9742;
float fMyNumber2 = -3.54e3;
ushort usMyNumber =  34033;

double dMyNumber4;
int iMyNumber5;
char cMyChar1;

void *pMyVoidPointer;
char *pcMyCharPointer;

int main() {
  //implicit type casts
  dMyNumber4 = iMyNumber1;
  iMyNumber5 = fMyNumber2;
  cMyChar1 = usMyNumber;

  cout << "Double type after implicit type cast: " << dMyNumber4 << "\n";
  cout << "Int type after implicit type cast: " << iMyNumber5 << "\n";
  cout << "Char type after implicit type cast: " << cMyChar1 << "\n";

  //explicit type casts
  dMyNumber4 = (double)iMyNumber1;
  iMyNumber5 = (int)fMyNumber2;
  cMyChar1 = (char)usMyNumber;

  cout << "Double type after explicit type cast: " << dMyNumber4 << "\n";
  cout << "Int type after explicit type cast: " << iMyNumber5 << "\n";
  cout << "Char type after explicit type cast: " << cMyChar1 << "\n";

  //strict typing bypass
  pMyVoidPointer = &usMyNumber;
  pcMyCharPointer = (char*)pMyVoidPointer;
  cMyChar1 = *pcMyCharPointer;
  cout << "Char type after bypass type cast: " << cMyChar1 << "\n";

  return 0;
}