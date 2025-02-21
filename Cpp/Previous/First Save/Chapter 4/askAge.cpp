#include <iostream>

using namespace std;

int main()
{
  int age;
  cout << "Enter your age: ";
  cin >> age;

  if (age <= 100)
    cout << "You are pretty young, enjoy every moment of your pathetic life...\n";
  else
    cout << "You are almost dying, what are you doing here?\n";
}