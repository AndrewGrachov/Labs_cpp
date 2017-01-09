#include <iostream>
using namespace std;

static int iMyNumber1 = 30;
static int iMyNumber2;

int main() {
  iMyNumber2 = 34;
  cout << "Static iMyNumber1 " << iMyNumber1 << "\n";
  cout << "Static iMyNumber2 " << iMyNumber2 << "\n";

  return 0;
}