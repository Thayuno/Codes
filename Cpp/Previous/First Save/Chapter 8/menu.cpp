#include <iostream>

using namespace std;

int main()
{
  int order;

  do
  {
    cout << "Make your order:\n1 - salad.\n2 - chicken.\n3 - soup.\n4 - hamburguer.\n"
         << endl;
    cin >> order;
  } while (order < 1 || order > 4);

  switch (order)
  {
  case 1:
    cout << "You ordered salad.\n";
    //break;
  case 2:
    cout << "You ordered chicken.\n";
    //break;
  case 3:
    cout << "You ordered soup.\n";
    //break;
  case 4:
    cout << "You ordered hamburguer.\n";
    //break;
  default:
    cout << "Your order is invalid.\n";
  }
}