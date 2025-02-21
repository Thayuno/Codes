#include <iostream>

using namespace std;

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double division(double x, double y);

int main()
{
  double total, answer;
  int operation;

  cout << "This is my calculator, use and send a feedback later!\n";

  cout << "Enter a number: ";
  cin >> total;

  do
  {
    cout << "What operator do you wanna use:\n0 - exit.\n1 - Adittion.\n2 - Subtraction.\n3 - Multiplication.\n4 - Division.\n";
    cin >> operation;

    if (operation > 4 || operation < 0)
    {
      cout << "This operation DO NOT EXIST, please, try again.\n";
      continue;
    }

    cout << "Enter a number: ";
    cin >> answer;

    if (operation == 1)
      total = add(total, answer);
    else if (operation == 2)
      total = subtract(total, answer);
    else if (operation == 3)
      total = multiply(total, answer);
    else if (operation == 4)
      total = division(total, answer);
    
    cout << "The current total is: " << total << endl
         << endl;
  } while (operation != 0);
}

double add(double x, double y)
{
  return x + y;
}

double subtract(double x, double y)
{
  return x - y;
}

double multiply(double x, double y)
{
  return x * y;
}

double division(double x, double y)
{
  return x / y;
}