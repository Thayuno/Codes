#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  int slot1,slot2,slot3;

  cout << "Slot Machine game.\n";

  for (int i = 0; i < 3; i++)
  {
    cout << "Press any key to get a number.\n";
    cin.get();
    switch (i)
    {
    case 0:
      slot1 = rand() % 9 + 1;
      cout << slot1 << endl;
      break;
    case 1:
      slot2 = rand() % 9 + 1;
      cout << slot2 << endl;
      break;
    case 2:
      slot3 = rand() % 9 + 1;
      cout << slot3 << endl;
      break;
    
    default:
      break;
    }
  }

  if (slot1 == slot2 && slot2 == slot3)
    cout << "You won.\n";
    
}