#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Coin
{
  TAILS,
  HEADS
};

int main()
{
  srand(time(NULL));
  int wantPlay;
  do
  {
  int coin = rand() % 2;
  cout << "Coin flip program, you get: ";
  switch (coin)
  {
  case HEADS:
    cout << "HEADS.\n";
    break;
  case TAILS:
    cout << "TAILS.\n";
    break;  
  default:
    cout << "Error.\n";
    return 0;
  }
  cout << "You want play again? No[0], Yes[1]\n";
  cin >> wantPlay;
  } while(wantPlay);
  cout << "Thanks to use my program.\n" << endl;
}