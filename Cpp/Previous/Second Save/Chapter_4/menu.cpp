#include <iostream>

using namespace std;

int main ()
{
  int choice;

  do
  {
    cout << "Enter the number of the item you want.\n";
    cout << "1-Hello Kit.\n2-Mario.\n3-Games.\n";

    cin >> choice;
  } while (choice > 3 || choice < 1);

  if (choice == 1)
    cout << "You chose Hello Kit.\n";
  else if (choice == 2)
    cout << "You chose Mario.\n";
  else
    cout << "You chose Games.\n";
    
  return 0;  
}