#include <iostream>

using namespace std;

int main()
{
  int password;
  cout << "Enter your password: ";
  cin >> password;

  if (password != 2510 && password != 1511)
  {
    cout << "The password is incorrect, closing.\n";
    return 0;
  }
  cout << "Your password is correct, congratulations!\n";

}