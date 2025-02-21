#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printArray(int array[], int size);
void getValues(int array[], int size, int max_value);

int main()
{
  srand(time(NULL));
  int size = 50;
  int max_value = 101;
  int array[size];

  getValues(array, size, max_value);
  printArray(array, size);

}

void getValues(int array[], int size, int max_value)
{
  for (int i = 0; i < size; i++)
    array[i] = rand() % max_value;
}

void printArray(int array[], int size)
{
  int highest = array[0], lowest = array[0];
  double average = 0;
  for (int i = 0; i < size; i++)
  {
    if (array[i] > highest)
      highest = array[i];
    if (array[i] < lowest)
      lowest = array[i];
    average += array[i];
  }
  average /= size;

  cout << "The highest value was: " << highest << endl;
  cout << "The lowest value was: " << lowest << endl;
  cout << "The average was: " << average << endl;

  for (int i = 0; i < size; i++)
    cout << array[i] << '\n';
}