#include <iostream>
using namespace std;
//Chars
//Variant #4

char cMyChar1 = 'S'; //0x53
char cMyChar2 = '6'; // 0x36
const char cMyChar3 = '?'; //0x3f

char cMyChar4 = 0x53;
char cMyChar5 = 0x36;
char cMyChar6 = 0x3f;

int main() {
  cout << "Char 1: " << cMyChar1 << "\n";
  cout << "Char 2: " << cMyChar2 << "\n";
  cout << "const char 3: " << cMyChar3 << "\n";
  cout << "char 4: " << cMyChar4 << "\n";
  cout << "Char 5: " << cMyChar5 << "\n";
  cout << "Char 6: " << cMyChar6 << "\n";
  return 0;
}