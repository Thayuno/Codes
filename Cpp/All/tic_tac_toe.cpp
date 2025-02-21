#include <iostream>
#include <string>

using namespace std;

enum BOARD
{
  Blank,
  X,
  O
};

void clear_board(int board[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      board[i][j] = Blank;
    }
  }
}

void show_board(int board[3][3])
{
  cout << endl;
  for (int i = 0; i < 3; i++)
  {
    if (i != 0)
      cout << " - + - + - \n";
    for (int j = 0; j < 3; j++)
    {
      if (j == 0)
        cout << ' ';
      else
      {
        cout << " | ";
      }

      switch (board[i][j])
      {
      case Blank:
        cout << ' ';
        break;
      case X:
        cout << 'X';
        break;
      case O:
        cout << 'O';
      default:
        break;
      }
    }
    cout << endl;
  }
  cout << endl;
}

void help_board()
{
  cout << "\n 1 | 2 | 3 \n";
  cout << " - + - + - \n";
  cout << " 4 | 5 | 6 \n";
  cout << " - + - + - \n";
  cout << " 7 | 8 | 9 \n\n";
}

bool check_win(int board[3][3], int player)
{
  int horizontal = 0;
  int vertical = 0;
  int Diagonal = 0;
  int AntiDiagonal = 0;

  for (int i = 0; i < 3; i++)
  {
    horizontal = 0;
    vertical = 0;
    Diagonal = 0;
    AntiDiagonal = 0;
    for (int j = 0; j < 3; j++)
    {
      if (board[i][j] == player && board[i][j] != Blank)
        horizontal++;
      if (board[j][i] == player && board[j][i] != Blank)
        vertical++;
      if (board[j][j] == player && board[j][j] != Blank)
        Diagonal++;
      if (board[2 - j][j] == player && board[2 - j][j] != Blank)
        AntiDiagonal++;
    }
    if (horizontal == 3 || vertical == 3 || Diagonal == 3 || AntiDiagonal == 3)
      return true;
  }
  return false;
}

int main()
{
  int board[3][3];
  int turn, player;
  int choiceX, choiceY, choice;
  string exit;

  do
  {
    turn = 0;
    clear_board(board);
    help_board();

    while (turn < 9)
    {
      player = (turn % 2) + 1;

      cout << "Enter your place to play: ";
      cin >> choice;

      choiceY = (choice - 1) % 3;
      choiceX = (choice - 1) / 3;

      if (board[choiceX][choiceY] != Blank)
      {
        cout << "This place is aldeary played, try another.\n";
        help_board();
        continue;
      }

      board[choiceX][choiceY] = player;

      show_board(board);

      turn++;

      if (check_win(board, player))
      {
        cout << "The player: " << player << " won the game.\n";
        break;
      }
    }

    cout << "Do you wanna play again? (Y)\n";
    cin >> exit;
  } while (exit[0] == 'y' || exit[0] == 'Y');
}