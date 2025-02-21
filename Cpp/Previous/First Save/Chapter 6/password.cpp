#include <iostream>
#include <string>

using namespace std;

bool checkPassword(string password)
{
  if (password == "1511" || password == "2510")
    return true;
  return false;
}

int main()
{
  string password;
  for (int i = 3; i > 0; i--)
  {
    cout << "Enter your password: ";
    getline(cin, password, '\n');

    if (checkPassword(password))
      break;
    if (i > 1)
      cout << "You entered the wrong password, try again.\n";
    else
    {
      cout << "Invalid password, quitting!\n";
      return 0;
    }
  }
  cout << "Hello master.\n";
}