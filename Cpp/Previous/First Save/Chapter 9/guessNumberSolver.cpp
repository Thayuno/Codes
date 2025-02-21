#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  int guess, attempts, number, playAgain;

  do
  {
    number = rand() % 100;
    attempts = 0;
    guess = 50;
    do
    {
      cout << "Guess the number: ";
      attempts++;


      if (guess < number)
      {
        cout << "The number is greater than " << guess << endl;
        guess += 25/attempts;
      }
      else if (guess > number)
      {
        cout << "The number is less than " << guess << endl;
        guess -= 25/attempts;
      }
      else
        cout << "You guessed the number.\n";

    } while (guess!=number);
    cout << "Do you wanna play again? No[0], Yes[1]";
    cin >> playAgain;
  } while (playAgain);
  cout << "Thanks for run the program.\n";
}