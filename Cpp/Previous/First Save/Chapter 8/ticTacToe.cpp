#include <iostream>
#include <string>

using namespace std;

enum Tic_Tac_Toe
{
  BLANK,
  TTT_X,
  TTT_O
};

char printPosition(int position);
bool checkWin(int position1, int position2, int position3, int player);
bool checkPosition(int position);
void checkPlayer(int player);

int main()
{
  int turn, player, move, wantPlay;

  // Board:
  int a1, a2, a3;
  int b1, b2, b3;
  int c1, c2, c3;

  do
  {
    // Reset
    turn = 0;
    a1 = BLANK, a2 = BLANK, a3 = BLANK;
    b1 = BLANK, b2 = BLANK, b3 = BLANK;
    c1 = BLANK, c2 = BLANK, c3 = BLANK;

    while (turn < 9)
    {
      player = (turn % 2) + 1;
      checkPlayer(player);
      cout << "is your turn: ";
      cin >> move;

      if (move > 9 || move < 1)
      {
        cout << "Your move is invalid, try again.\n";
        continue;
      }
      switch (move)
      {
      case 1:
        if (checkPosition(a1))
          continue;
        a1 = player;
        break;
      case 2:
        if (checkPosition(a2))
          continue;
        a2 = player;
        break;
      case 3:
        if (checkPosition(a3))
          continue;
        a3 = player;
        break;
      case 4:
        if (checkPosition(b1))
          continue;
        b1 = player;
        break;
      case 5:
        if (checkPosition(b2))
          continue;
        b2 = player;
        break;
      case 6:
        if (checkPosition(b3))
          continue;
        b3 = player;
        break;
      case 7:
        if (checkPosition(c1))
          continue;
        c1 = player;
        break;
      case 8:
        if (checkPosition(c2))
          continue;
        c2 = player;
        break;
      case 9:
        if (checkPosition(c3))
          continue;
        c3 = player;
        break;
      default:
        break;

        // Print table
        cout << ' ' << printPosition(a1) << " | " << printPosition(a2) << " | " << printPosition(a3) << endl;
        cout << " - + - + - \n";
        cout << ' ' << printPosition(b1) << " | " << printPosition(b2) << " | " << printPosition(b3) << endl;
        cout << " - + - + - \n";
        cout << ' ' << printPosition(c1) << " | " << printPosition(c2) << " | " << printPosition(c3) << endl;

        if (turn > 3)
        {
          if (checkWin(a1, a2, a3, player) || checkWin(b1, b2, b3, player) || checkWin(c1, c2, c3, player) || checkWin(a1, b2, c3, player) || checkWin(a3, b2, c1, player) || checkWin(a1, b1, c1, player) || checkWin(a2, b2, c2, player) || checkWin(a3, b3, c3, player))
          {
            checkPlayer(player);
            cout << "won the game with " << turn << " turns.\n";
            break;
          }
        }
      }
      turn++;
    }
    cout << "Do you wanna play again? No[0], Yes[1].\n";
    cin >> wantPlay;
  } while (wantPlay);
  cout << "Thanks for playing my version of Tic-Tac-Toe.\n";
  return 0;
}

void checkPlayer(int player)
{
  cout << "Player ";
  switch (player)
  {
  case TTT_X:
    cout << 'X';
    break;
  case TTT_O:
    cout << 'O';
    break;
  default:
    cout << "Player not valid, quitting.\n";
    return;
  }
  cout << ' ';
}

bool checkPosition(int position)
{
  if (position != BLANK)
  {
    cout << "This move is ilegal, make a valid move.\n";
    return true;
  }
  return false;
}

bool checkWin(int position1, int position2, int position3, int player)
{
  if ((player == position1) && (player == position2) && (player == position3))
    return true;
  return false;
}

char printPosition(int position)
{
  switch (position)
  {
  case BLANK:
    return ' ';
  case TTT_X:
    return 'X';
  case TTT_O:
    return 'O';
  default:
    return '?';
  }
}