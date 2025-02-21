#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int guess, number, attempts, playAgain;
  srand(time(NULL));
  cout << "You will play \"Guess the number\".\nThe number is beetween 0 and 100.\n"
       << endl;
  while (true)
  {
    number = rand() % 101;
    attempts = 0;

    do
    {
      cout << "Guess the number: ";
      cin >> guess;
      attempts++;

      if (guess < number)
        cout << "The number is greater than " << guess << endl;
      else if (guess > number)
        cout << "The number is less than " << guess << endl;
      else
      {
        cout << "You guessed the number with " << attempts << " attempts.\n";
        break;
      }
    } while (guess != number);
    cout << "Do you wanna play again? No[0], Yes[1]\n";
    cin >> playAgain;

    if (!playAgain)
      break;
  }
  cout << "Thanks for playing";
  return 0;
}