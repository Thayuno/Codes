#include <iostream>

using namespace std;

void thousands (long long thousand)
{
  if (thousand == 1)
    cout << "thousand ";
  if (thousand == 2)
    cout << "million ";
  if (thousand == 3)
    cout << "billion ";
  if (thousand == 4)
    cout << "trillion ";
  if (thousand == 5)
    cout << "quadrillion ";
  if (thousand == 6)
    cout << "quintillion ";
}

void translate(long long number)
{
  long long hundred = number / 100;
  if (hundred)
  {
    translate(hundred);
    cout << "hundred ";
    number %= 100;
  }
  if (number < 20)
  {
    if (number < 10)
    {
      if (number == 1)
        cout << "one ";
      else if (number == 2)
        cout << "two ";
      else if (number == 3)
        cout << "three ";
      else if (number == 4)
        cout << "four ";
      else if (number == 5)
        cout << "five ";
      else if (number == 6)
        cout << "six ";
      else if (number == 7)
        cout << "seven ";
      else if (number == 8)
        cout << "eight ";
      else if (number == 9)
        cout << "nine ";
    }
    else
    {
      if (number == 10)
        cout << "ten ";
      else if (number == 11)
        cout << "eleven ";
      else if (number == 12)
        cout << "twelve ";
      else if (number == 13)
        cout << "thirteen ";
      else if (number == 14)
        cout << "fourteen ";
      else if (number == 15)
        cout << "fifteen ";
      else if (number == 16)
        cout << "sixteen ";
      else if (number == 17)
        cout << "seventeen ";
      else if (number == 18)
        cout << "eighteen ";
      else
        cout << "nineteen ";
    }
  }
  else
  {
    if (number < 30)
      cout << "twenty ";
    else if (number < 40)
      cout << "thirty ";
    else if (number < 50)
      cout << "fourty ";
    else if (number < 60)
      cout << "fifty ";
    else if (number < 70)
      cout << "sixty ";
    else if (number < 80)
      cout << "seventy ";
    else if (number < 90)
      cout << "eighty ";
    else
      cout << "ninety ";
    translate(number % 10);
  }
}

int main()
{
  long long number, copy;
  int thousand = 0;

  cout << "Enter a number to \"translate\" to english: ";
  cin >> number;
  copy = number;

  while (copy / 1000)
  {
    thousand++;
    copy /= 1000;
  }

  while (thousand >= 0) // 8 540 003 200
  {
    long long divisor = 1;
    copy = number; // 789 452 758; 

    for (int i = 0; i < thousand; i++)
      divisor *= 1000;
    copy /= divisor;
    copy %= 1000;
    translate(copy);
    thousands(thousand);

    thousand--;
  }
}