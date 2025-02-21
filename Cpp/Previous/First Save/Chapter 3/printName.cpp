#include <iostream>
#include <string>

using namespace std;

int main()
{
  string username;
  cout << "Enter your name: ";
  getline(cin, username, '\n');
  cout << username << endl;
}