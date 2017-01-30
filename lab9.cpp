#include <iostream>
using namespace std;

static int iMyNumber1 = 30;
static int iMyNumber2;
int iMyNotInitializedNumber;
int iGlobalNumber;;

int main() {
  int *ipMyHeapNumber = new int(25);

  iMyNumber2 = 34;
  int iGlobalNumber = 24;
  ::iGlobalNumber = 56;

  cout << "Block scoped iGlobalNumber: " << iGlobalNumber << "\n";
  cout << "Global iGlobalNumber: " << ::iGlobalNumber << "\n";

  cout << "Static iMyNumber1 " << iMyNumber1 << "\n";
  cout << "Static iMyNumber2 " << iMyNumber2 << "\n";
  {
    static float fMyfloat34 = 3.14;
    cout << "Static fMyfloat34 " << fMyfloat34 << "\n";
    *ipMyHeapNumber = 34;

  }

  cout << "ipMyHeapNumber after first block: " << *ipMyHeapNumber << "\n";

  {
    int iMyInnerNumber1;
    iMyInnerNumber1 = 42;
    cout << "my inner number 1: " << iMyInnerNumber1 << "\n";
  }

  {
    iMyNotInitializedNumber = 43;
    cout << "my inner number 2: " << iMyNotInitializedNumber << "\n";
  }
  cout << "my inner number 2 outside block: " << iMyNotInitializedNumber << "\n";

  {
    int iMyNotInitializedNumber = 345;
    int *ipMyHeapNumber = new int(42);
    cout << "my inner number 2 membraned: " << iMyNotInitializedNumber << "\n";
    cout << "my heap number membraned: " << *ipMyHeapNumber << "\n";
    delete ipMyHeapNumber;
  }

  cout << "my inner number 2 outside block after membrane: " << iMyNotInitializedNumber << "\n";
  cout << "my heap number after membrane: " << *ipMyHeapNumber << "\n";
  delete ipMyHeapNumber;

  for (int i = 0; i < 5; i = i + 1) {
    static int iA = 0;
    auto int iB = 0;
    iA = iA + 1;
    iB = iB + 1;
    cout << "iA static iteration " << i << ": " << iA << "\n";
    cout << "iB static iteration " << i << ": " << iB << "\n";
  }

  {

  }
  return 0;
}