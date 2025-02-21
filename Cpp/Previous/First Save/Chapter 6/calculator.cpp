#include <iostream>
#include <string>

using namespace std;

void addition()
{
  double n1, n2;

  cout << "Enter the first addend: ";
  cin >> n1;  
  cout << "Enter the second addend: ";
  cin >> n2;  
  
  cout << n1 << " + " << n2 << " = " << n1+n2 << endl;
}

void subtraction()
{
  double n1, n2;

  cout << "Enter the minuend: ";
  cin >> n1;  
  cout << "Enter the subtrahend: ";
  cin >> n2;  
  
  cout << n1 << " - " << n2 << " = " << n1-n2 << endl;

}

void multiplication()
{
  double n1, n2;

  cout << "Enter the multiplicand: ";
  cin >> n1;  
  cout << "Enter the multiplier: ";
  cin >> n2;  
  
  cout << n1 << " * " << n2 << " = " << n1*n2 << endl;

}

void division()
{
  double n1, n2;

  cout << "Enter the dividend: ";
  cin >> n1;  
  cout << "Enter the divisor: ";
  cin >> n2;  
  
  cout << n1 << " / " << n2 << " = " << n1/n2 << endl;

}


int main()
{
  int operation;

  do
  {
    cout << "Choose a operation:\n0 - quit.\n1 - addition.\n2 - subtraction.\n3 - multiplication.\n4 - division.\n";
    cin >> operation;
    if (operation < 0 || operation > 4)
    {
      cout << "Invalid operation.\n";
      continue;
    }
    if (operation == 1)
      addition();
    if (operation == 2)
      subtraction();
    if (operation == 3)
      multiplication();
    if (operation == 4)
      division();
  } while (operation);
}