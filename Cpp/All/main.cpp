#include <iostream>
#include <string>

using namespace std;

// 0,1,2,3,5,8,13;

void Fibonacci()
{
  int n1 = 1;
  int n2 = 1;
  int tmp;

  for (int i = 0; i < 10; i++)
  {
    cout << n1 << " ";

    tmp = n1;
    n1 = n2;
    n2 = n1 + tmp;
  }
  cout << endl;
}

int Number(int x)
{
  return 2 * x + 2;
}

int main()
{
  string name;
  int number;
  cout << "Enter a number: ";
  cin >> number;
  int function = Number(number);
  cout << function << endl;

  cout << "What's your name?\n";
  cin >> name;

  Fibonacci();
  cout << "Dale mano" << name << "!\n";
}