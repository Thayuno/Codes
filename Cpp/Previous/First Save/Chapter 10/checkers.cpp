#include <iostream>

using namespace std;

enum BOARD
{
  BLANK,
  CHECKERS_X,
  CHECKERS_O
};

int main()
{
  int boardSize = 8, boardLimit = boardSize - 1;
  int board[boardSize][boardSize];
  int playAgain = 1;
  int player, turn, move;

  do
  {
    // ResetBoard
    for (int i = 0; i < boardSize; i++)
      for (int j = 0; j < boardSize; j++)
        board[i][j] = BLANK;

    // Pieces
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < boardSize; j++)
        if ((i + j) % 2)
          board[i][j] = CHECKERS_O;
      for (int j = 0; j < boardSize; j++)
        if ((i + j) % 2)
          board[boardLimit - i][j] = CHECKERS_X;
    }

    // Print board
    for(int i = 0; i < boardSize; i++)
    {
      if (i > 0)
      {
        cout << " - ";
        for (int j = 1; j < boardSize; j++)
          cout << "+ - ";
        cout << endl;
      }
      cout << ' ';
      for (int j = 0; j < boardSize; j++)
      {
        if (j > 0)
          cout << " | ";
        switch (board[i][j])
        {
        case BLANK:
          cout << ' ';
          break;
        case CHECKERS_O:
          cout << 'O';
          break;
        case CHECKERS_X:
          cout << 'X';
          break;        
        default:
          cout << "\nError\n";
          break;
        }
      }
      cout << endl;
    }

    cout << "Do you wanna play again? Yes[1], No[0]\n";
    // cin >> playAgain;
  } while (playAgain = 0);
}