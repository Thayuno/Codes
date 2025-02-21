#include <iostream>

using namespace std;

int main()
{
  int operation;
  double x1, x2;
  cout << "Enter one of the following operations:\n1 - Addition.\n2 - Subtraction.\n3 - Multiplication.\n4 - Division.\n";
  cin >> operation;

  if (operation < 1 || operation > 4)
  {
    cout << "Error, enter a valid operation.\n";
    return 0;
  }

  cout << "Enter your first number: ";
  cin >> x1;

  cout << "Enter your second number: ";
  cin >> x2;

  if (operation == 1)
    cout << x1 << " + " << x2 << " = " << x1 + x2 << endl;
  if (operation == 2)
    cout << x1 << " - " << x2 << " = " << x1 - x2 << endl;
  if (operation == 3)
    cout << x1 << " * " << x2 << " = " << x1 * x2 << endl;
  if (operation == 4)
    cout << x1 << " / " << x2 << " = " << x1 / x2 << endl;
}