#include <iostream>

using namespace std;

int main()
{
  double sum, x;

  while(true)
  {
    cout << "Enter a number to add or zero [0] to stop: ";
    cin >> x;
    if (x == 0)
      break;
    sum += x;
    cout << "The running sum is: " << sum << endl;
  }
  cout << "The total sum is: " << sum;
}