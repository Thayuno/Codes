#include <iostream>
#include <string>

using namespace std;

enum BOARD
{
  BLANK,
  TTT_X,
  TTT_O
};

char checkPlayer(int player);
void helpBoard(int size);
string displayPlayer(int player);

int main()
{
  int boardSize, boardLimit, player, turn, move, maxMoves, winSequence, playAgain = true;
  int horizontal, vertical, mainDiag, antiDiag;
  bool won;
  int row, column;
  do
  {
    cout << "Enter the size of the board (between 3 and 9): \n";
    cin >> boardSize;

    if (boardSize < 3 || boardSize > 9)
    {
      cout << "Size not valid.\nTry again.\n"
           << endl;
      continue;
    }

    int board[boardSize][boardSize];

    // Reset board.
    for (int i = 0; i < boardSize; i++)
      for (int j = 0; j < boardSize; j++)
        board[i][j] = BLANK;
    won = false;
    boardLimit = boardSize - 1;

    // Conditions to Win.
    turn = 0;
    maxMoves = boardSize * boardSize;

    if (boardSize > 3)
      winSequence = 4;
    else
      winSequence = 3;

    // Start game.
    while (turn < maxMoves && !won)
    {
      player = (turn % 2) + 1;

      helpBoard(boardSize);

      // Display board.
      cout << endl;
      for (int i = boardLimit; i >= 0; i--)
      {
        if (i != boardLimit)
        {
          cout << " -- ";
          for (int j = 0; j < boardLimit; j++)
            cout << "+ -- ";
          cout << endl;
        }
        cout << ' ';
        for (int j = 0; j < boardSize; j++)
        {
          if (j)
            cout << " | ";
          if (board[i][j] < 10)
            cout << checkPlayer(board[i][j]);
          cout << checkPlayer(board[i][j]);
        }
        cout << endl;
      }
      cout << endl;

      cout << displayPlayer(player) << " make your move: ";
      cin >> move;

      // check move validity of the move.

      if (move < 1 || move > maxMoves)
      {
        cout << "Invalid move, try again.\n";
        continue;
      }

      turn++;

      row = (move - 1) / boardSize;
      column = (move - 1) % boardSize;

      if (board[row][column] != BLANK)
      {
        cout << "This position has aldeary been played.\n";
        continue;
      }

      board[row][column] = player;

      // Check sequence.
      for (int i = 0; i < boardSize; i++)
      {
        horizontal = 0, vertical = 0, mainDiag = 0, antiDiag = 0;
        for (int j = 0; j < boardSize; j++)
        {
          if (board[i][j] == player)
            horizontal++;
          else
            horizontal = 0;
          if (board[j][i] == player)
            vertical++;
          else
            vertical = 0;

          // Check Diagonals

          if (i + j < boardSize)
          {
            if (board[j][i + j] == player)
              mainDiag++;
            else
              mainDiag = 0;
            if (board[i + j][j] == player)
              antiDiag++;
            else
              antiDiag = 0;
          }

          // check win.
          if (horizontal == winSequence || vertical == winSequence || mainDiag == winSequence || antiDiag == winSequence)
          {
            cout << displayPlayer(player) << " won the game, congratulations!!!\n";
            won = true;
            break;
          }
        }
      }

      if (turn == maxMoves)
        cout << "Draw.\n";
    }

    cout << endl;
    cout << "Do you wanna play again? Yes[1], No[0]\n";
    cin >> playAgain;
  } while (playAgain);
}

void helpBoard(int size)
{
  cout << endl;
  for (int i = size - 1; i >= 0; i--)
  {
    if (i != size - 1)
    {
      cout << " -- ";
      for (int i = 0; i < (size - 1); i++)
        cout << "+ -- ";
    }
    cout << endl;
    cout << ' ';

    for (int j = 0; j < size; j++)
    {
      if (j)
        cout << " | ";
      if ((i * size + j + 1) < 10)
        cout << '0';
      cout << i * size + j + 1;
    }
    cout << endl;
  }
  cout << endl;
}

string displayPlayer(int player)
{
  switch (player)
  {
  case TTT_X:
    return "Player 1";
  case TTT_O:
    return "Player 2";

  default:
    return "Invalid player";
  }
}

char checkPlayer(int player)
{
  switch (player)
  {
  case BLANK:
    return ' ';
  case TTT_X:
    return 'X';
  case TTT_O:
    return 'O';
  default:
    cout << "\nInvalid player.\n";
    break;
  }
  return ' ';
}