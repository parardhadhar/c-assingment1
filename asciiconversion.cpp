#include <iostream>

using namespace std;

int main() {
  char ch = 'U';
  int asciiValue = static_cast<int>(ch);  // Cast character to integer

  cout << "The ASCII value of character '" << ch << "' is: " << asciiValue << endl;

  return 0;
}