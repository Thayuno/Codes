#include <iostream>

using namespace std;

int main()
{
  int option;

  while (true)
  {
    cout << "Select one of the items from the list:\n1 - rice.\n2 - hot dog.\n3 - tang.\n4 - beer.\n";
    cin >> option;
    if (1 <= option && option <= 4)
      break;
    cout << "Your input DO NOT is in the list.\n" << endl;
  }
  cout << "We receive the order.";
}