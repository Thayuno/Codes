#include <iostream>

using namespace std;

int main ()
{
  double sum=0, number;

  do
  {
    cout << "Enter a number to sum or 0 to exit: ";
    cin >> number;

    sum += number;

    cout << "Current sum is: " << sum << endl;
  } while (number);
  
}