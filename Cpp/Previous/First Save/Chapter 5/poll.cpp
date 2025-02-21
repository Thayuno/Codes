#include <iostream>
#include <string>

using namespace std;

int main()
{
  string question;
  int answer1 = 0, answer2 = 0, answer3 = 0, option;

  cout << "Enter your question: ";
  getline(cin, question, '\n');

  do
  {
    cout << question << endl;
    cin >> option;

    if (option > 3 || option < 1)
    {
      cout << "Option not valid.\n";
      continue;
    }

    if (option == 1)
      answer1++;
    else if (option == 2)
      answer2++;
    else
      answer3++;
  } while (option);

  cout << "The first answer has: ";
  for (int i = 0; i < answer1; i++)
    cout << "#";
  cout << endl;
  cout << "The second answer has: ";
  for (int i = 0; i < answer2; i++)
    cout << "#";
  cout << endl;
  cout << "The third answer has: ";
  for (int i = 0; i < answer3; i++)
    cout << "#";
  cout << endl;
}