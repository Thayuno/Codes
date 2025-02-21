#include <iostream>

using namespace std;

void ones(long long int number)
{
  if (number >= 100)
  {
    ones(number / 100);
    cout << "hundred ";
    number %= 100;
  }

  if (number >= 20)
  {
    if (number <= 30)
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
  
    else if (number < 100)
      cout << "ninety "; 

    number %= 10;
  }

  if (number == 1)
  {
    cout << "one ";
  }
  if (number == 2)
  {
    cout << "two ";
  }
  if (number == 3)
  {
    cout << "three ";
  }
  if (number == 4)
  {
    cout << "four ";
  }
  if (number == 5)
  {
    cout << "five ";
  }
  if (number == 6)
  {
    cout << "six ";
  }
  if (number == 7)
  {
    cout << "seven ";
  }
  if (number == 8)
  {
    cout << "eight ";
  }
  if (number == 9)
  {
    cout << "nine ";
  }
  if (number == 10)
  {
    cout << "ten ";
  }
  if (number == 11)
  {
    cout << "eleven ";
  }
  if (number == 12)
  {
    cout << "twelve ";
  }
  if (number == 13)
  {
    cout << "thirteen ";
  }
  if (number == 14)
  {
    cout << "fourteen ";
  }
  if (number == 15)
  {
    cout << "fifteen ";
  }
  if (number == 16)
  {
    cout << "sixteen ";
  }
  if (number == 17)
  {
    cout << "seventeen ";
  }
  if (number == 18)
  {
    cout << "eighteen ";
  }
  if (number == 19)
  {
    cout << "nineteen ";
  }
}

int main()
{
  long long int number, copy;
  int thousand = 0;

  cout << "Enter your number: ";
  cin >> number;

  copy = number;

  while(copy != 0)
  {
    copy /= 1000;
    thousand++;
  }
  ones(number);
}