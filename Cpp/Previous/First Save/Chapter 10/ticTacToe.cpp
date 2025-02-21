#include <iostream>
#include <string>

using namespace std;

enum BOARD
{
  BLANK,
  TTT_X,
  TTT_O
};

bool checkWin(int board[][3], int player);
void printHelp();
void printBoard(int board[][3]);
string displayPlayer(int player);
void resetBoard(int board[][3]);

int main()
{
  int board[3][3];
  int wannaPlay, turn, player, move;
  int row, column;

  do
  {
    printHelp();
    resetBoard(board);
    turn = 0;

    while (turn < 9)
    {
      player = (turn % 2) + 1;
      cout << displayPlayer(player) << "make your move: ";
      cin >> move;

      if (move > 9 || move < 1)
      {
        cout << "Invalid move, try again.\n";
        continue;
      }

      row = (move - 1) / 3;
      column = (move - 1) % 3;

      if (board[row][column] != BLANK)
      {
        cout << "This position has aldeary been played.\nTry another.\n"
             << endl;
        continue;
      }

      board[row][column] = player;
      printBoard(board);
      turn++;
      if (checkWin(board, player))
      {
        cout << displayPlayer(player) << "won the game\n";
        break;
      }
      if (turn == 9)
        cout << "Draw.\n";
    }

    cout << "Do you wanna play again? No[0], Yes[1]\n";
    cin >> wannaPlay;
  } while (wannaPlay);
}

void resetBoard(int board[][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      board[i][j] = BLANK;
    }
  }
}

string displayPlayer(int player)
{
  switch (player)
  {
  case TTT_X:
    return "Player 1 ";
  case TTT_O:
    return "Player 2 ";
  default:
    return "Invalid player ";
  }
}

void printBoard(int board[][3])
{
  cout << endl;
  for (int i = 2; i >= 0; i--)
  {
    if (i != 2)
      cout << " - + - + -\n";
    cout << ' ';
    for (int j = 0; j < 3; j++)
    {
      if (j != 0)
        cout << " | ";
      switch (board[i][j])
      {
      case BLANK:
        cout << ' ';
        break;
      case TTT_X:
        cout << 'X';
        break;
      case TTT_O:
        cout << 'O';
        break;

      default:
        cout << "\nBugs!!!\n";
        break;
      }
    }
    cout << endl;
  }
  cout << endl;
}

void printHelp()
{
  cout << endl;
  for (int i = 2; i >= 0; i--)
  {
    if (i != 2)
      cout << " - + - + -\n";
    cout << ' ';
    for (int j = 0; j < 3; j++)
    {
      if (j != 0)
        cout << " | ";
      cout << i * 3 + j + 1;
    }
    cout << endl;
  }
  cout << endl;
}

bool checkWin(int board[][3], int player)
{
  int horizontal, vertical, mainDiag, antiDiag;
  for (int i = 0; i < 3; i++)
  {
    horizontal = 0, vertical = 0, mainDiag = 0, antiDiag = 0;
    for (int j = 0; j < 3; j++)
    {
      if (board[i][j] == player)
        horizontal++;
      if (board[j][i] == player)
        vertical++;
      if (board[j][j] == player)
        mainDiag++;
      if (board[2 - j][j] == player)
        antiDiag++;
    }
    if (horizontal == 3 || vertical == 3 || mainDiag == 3 || antiDiag == 3)
      return true;
  }
  return false;
}