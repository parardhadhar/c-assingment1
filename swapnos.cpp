#include <iostream>

using namespace std;

int main() {
  int num1, num2, temp;

  cout << "Enter the first number: ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  // Swap logic using a temporary variable
  temp = num1;
  num1 = num2;
  num2 = temp;

  cout << "After swapping: " << endl;
  cout << "First number: " << num1 << endl;
  cout << "Second number: " << num2 << endl;

  return 0;
}
