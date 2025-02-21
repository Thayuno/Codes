#include<iostream>

using namespace std;

enum TTT {
  TTT_BLANK,
  TTT_X,
  TTT_O
};

void reset_table(int table[3][3])
{
  for (int i=0; i<3; i++)
  {
    for (int j=0; j<3; j++)
    {
      table[i][j]=TTT_BLANK;
    }
  }
}

void display_table(int table[3][3])
{
  cout << endl;
  for (int i=0; i<3; i++)
  {
    if (i!=0)
      cout <<  "\n - + - + - \n";
    for (int j=0; j<3; j++)
    {
      if (j==0)
        cout << ' ';
      if (j!=0)
        cout << " | ";
      switch (table[i][j])
      {
        case TTT_BLANK: cout << ' '; break;
        case TTT_O: cout << 'O'; break;
        case TTT_X: cout << 'X'; break;
        default: cout << "Error"; return;
      }
    }
  }
  cout << endl << endl;
}

int convert_move(int move)
{
  int row, column;
  row = move / 3 * 10;
  column = move % 3;
  
  return row + column;
}

bool check_diag(int table[3][3], int player)
{
  int anti=0, main=0;
  for (int i = 0; i<3; i++)
  {
    if (table[i][i] == player)
      anti++;
    else
      anti = 0;
      
    if (table[2-i][i] == player)
      main++;
    else
      main = 0;
      
    if (main == 3 || anti == 3)
      return true;
  }
  return false;
}

bool check_row(int table[3][3], int player)
{
  int row=0, column=0;
  
  for (int i=0; i<3; i++)
  {
    for (int h=0; h<3; h++)
    {
      if (table[i][h]==player)
        row += 1;
      
      if (table[h][i]==player)
        column +=1;
        
      if (row == 3 || column == 3)
        return true;
  
    cout << "row: " << row << ", column: " << column;
    }
    row = 0; column = 0;
  }
  return false;
}

bool check_win(int table[3][3], int player)
{
  if (check_diag(table, player))
    return true;
  
  if (check_row(table, player))
    return true;
    
  return false;
}

string player_turn(int player)
{
  if (player == TTT_X)
    return "Player 1 (X)";
  else if (player == TTT_O)
    return "Player 2 (O)";
  else
    return "Error";
}

int main()
{
  string replay;
  int turn;
  int move;
  int row, column;
  int player;
  bool won;
  int table[3][3];
  
  while(true)
  {
  won=false;
  turn = 0;
  reset_table(table);
  
  while(turn < 9 && !won)
  {
    player = turn % 2 + 1;
    
    display_table(table);
    
    cout << player_turn(player) << " make your move: ";
    cin >> move;
    move -= 1;
    
    row = convert_move(move) / 10;
    column = convert_move(move) % 10;
    
    if (table[row][column] == TTT_BLANK)
      table[row][column] = player;
    else
    {
      cout << "This move cannot be done, try again.\n";
      continue;
    }
    
    turn += 1;
    
    if (turn > 4)
    {
      won = check_win(table, player);
      cin.ignore();
    }
  }
  
  display_table(table);
  if (won)
    cout << "The player " << player_turn(player) << " won the game!\n";
  else
    cout << "That was a draw\n";
  
  cout << "Do you wanna play again? (y or n)\n";
  getline(cin,replay,'\n');
  
  if(!(replay[0]=='y'|| replay[0]=='Y'))
    break;
  }
  cout << "I hope you enjoyed the game!\n";
}