#include <iostream>
using namespace std;

//variant #4


int switchFunc(int iMyChoiceNumber) {
  int iMyReturnNumber;

  switch(iMyChoiceNumber) {
    case 42:
      iMyReturnNumber = 84;
      break;
    case 36:
      iMyReturnNumber = 72;
      break;
    case 18:
    case 19:
      iMyReturnNumber = 36;
      break;
    default:
      iMyReturnNumber = 0;
      break;
  }
  return iMyReturnNumber;
}



int main() {

  //composite operator + choice operator

  bool bMyCondition = true;
  int iMyNumber;
  if (bMyCondition) {
    /* code */
    iMyNumber = 42;
  }

  //verify that myNumber is 42
  cout << "iMyVar2 assignment: " << iMyNumber <<"\n";

  //alternative choice

  bMyCondition = false;
  if (bMyCondition) {
    //never get here
  } else {
    iMyNumber = 45;
  }

  //verify that myNumber is 45
  cout << "iMyVar2 else assignment: " << iMyNumber <<"\n";

  //switch case
  int iMyResult1 = switchFunc(42);
  int iMyResult2 = switchFunc(36);
  int iMyResult3 = switchFunc(18);
  int iMyResult4 = switchFunc(19);
  int iMyDefaultResult = switchFunc(99);

  cout << "iMyResult1: " << iMyResult1 <<"\n";
  cout << "iMyResult2: " << iMyResult2 <<"\n";
  cout << "iMyResult3: " << iMyResult3 <<"\n";
  cout << "iMyResult4: " << iMyResult4 <<"\n";
  cout << "iMyDefaultResult: " << iMyDefaultResult <<"\n";

  //repeating operators

  int iMyGrowingNumber = 1;
  int iMyDecreasingNumber = 20;

  do {
    iMyGrowingNumber++;
  } while(iMyGrowingNumber < 20);

  //verify that iMyGrowingNumber is 20;
  cout << "iMyGrowingNumber: " << iMyGrowingNumber <<"\n";

  while(iMyDecreasingNumber > 0) {
    iMyDecreasingNumber--;
  }
  //should be 0
  cout << "iMyDecreasingNumber: " << iMyDecreasingNumber <<"\n";
  int iMyGrowingNumber2 = 0;

  for (int i = 0; i < 20; i++) {
    iMyGrowingNumber2 += i;
  }
  //should be 190
  cout << "iMyGrowingNumber 2: " << iMyGrowingNumber2 <<"\n";


  return 0;
}

