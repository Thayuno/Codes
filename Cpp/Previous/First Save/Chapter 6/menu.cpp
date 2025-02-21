#include <iostream>
#include <string>

using namespace std;

void menu()
{
  int order;
  bool exit = true;

  do
  {
    cout << "Make a order:\n1 - chips.\n2 - Soda.\n3 - Hot Dog\n4 - Die.\n";
    cin >> order;
    if (order < 1 || order > 4)
      continue;
    cout << "You made a order, thank you.\n";
    exit = false;

  } while (exit);
}

void bottlesOfBeer()
{
  for (int i = 99; i > 0; i--)
    cout << i << "bottles of beer on the wall,\n" << i << "bottles of beer.\nTakes one down, pass it around.\n" << endl;
}

int main()
{
  int option;
  do
  {
    cout << "Do you wanna see a song[1] or make a order[2]? ";
    cin >> option;

    if (option == 1)
      bottlesOfBeer();
    else if (option == 2)
      menu();
    else
    {
      cout << "Invalid input, try again.\n";
      continue;
    }
  } while (0);
}