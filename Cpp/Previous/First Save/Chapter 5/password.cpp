#include <iostream>
#include <string>

using namespace std;

int main()
{
  string password;

  for (int i = 3; i > 0; i--)
  {
    cout << "Enter your password: ";
    getline(cin, password, '\n');

    if (password == "2510" || password == "1511")
      break;
    if (i == 1)
    {
      cout << "Too much attempts, quitting!\n";
      return 0;
    }
    cout << "Password incorrect, try again.\n";
  }
  cout << "You're welcome!\n";
}