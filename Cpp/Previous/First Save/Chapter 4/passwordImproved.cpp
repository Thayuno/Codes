#include <iostream>
#include <string>

using namespace std;

int main()
{
  string password;

  cout << "Enter your password: ";
  getline(cin, password, '\n');

  if (password != "2510" && password != "1511")
  {
    cout << "Your password is incorrect, please try again.\n";
    getline(cin, password, '\n');

    if (password != "2510" && password != "1511")
    {
      cout << "Your password is incorrect, quitting!\n";
      return 0;
    }
  }
  cout << "Password correct, logging...\n";
}