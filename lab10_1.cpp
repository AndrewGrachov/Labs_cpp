#include <iostream>
#include <math.h>
using namespace std;

void printBitwise(int iMyNum) {
	for (int i = 0; i < 31; i++) {
		int myBit = iMyNum >> i & 1;
		cout << myBit;
	}
	cout << "\n";
}

int bitwiseIncrement(int iMyNum) {
	int mask = 1;

	while(iMyNum & mask) {
		iMyNum = iMyNum & ~mask;
		mask  = mask << 1;
	}
	return iMyNum = iMyNum | mask;
}

bool bitwiseBigger(int iMyNumber1, int iMyNumber2) {
	int res = 0;

	for (int i = sizeof(iMyNumber1) * 8; i > 0 ; i--) {
		short bit1 = (iMyNumber1 >> i & 1);
		short bit2 = (iMyNumber2 >> i & 1);
		short condition = (bit1 ^ bit2);
		if (condition) {
 			return !(~bit2 + 1);
		}
	}
	return false;
}

int main () {
	int iMyNumber1 = 63;
	int iMyNumber2 = -19;
	int iMyNumber3 = 92;

	int iMyNumber1Incremented = bitwiseIncrement(iMyNumber1);
	int iMyNumber2Incremented = bitwiseIncrement(iMyNumber2);
	int iMyNumber3Incremented = bitwiseIncrement(iMyNumber3);
  cout << "bitwise increment 1: " << iMyNumber1Incremented  <<"\n";
	cout << "bitwise increment 2: " << iMyNumber2Incremented  <<"\n";
	cout << "bitwise increment 3: " << iMyNumber3Incremented  <<"\n";

	//comparsion
	int iMyNumber4 = 88;
	int iMyNumber5 = 88;

	int iMyNumber6 = 34;
	int iMyNumber7 = 2;

	int iMyNumber8 = 23;
	int iMyNumber9 = 57;

	//equal
	bool bIsBigger0 = bitwiseBigger(iMyNumber4, iMyNumber5);
	cout << "bitwise bigger 0: " << bIsBigger0 << "\n";
	bool bIsBigger1 = bitwiseBigger(iMyNumber6, iMyNumber7);
	cout << "bitwise bigger 1: " << bIsBigger1 << "\n";
	bool bIsBigger2 = bitwiseBigger(iMyNumber8, iMyNumber9);
	cout << "bitwise bigger 2: " << bIsBigger2 << "\n";
	return 0;
}