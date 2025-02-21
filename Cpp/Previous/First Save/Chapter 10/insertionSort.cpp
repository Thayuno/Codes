#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void swap(int array[], int smallestNumber, int index);
int findSmallestNumber (int array[], int size, int index);
void sortArray(int array[], int size);
void printArray(int array[], int size);
void getValues(int array[], int size);

int main()
{
  srand(time(NULL));
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int array [size];
  getValues(array, size);

  cout << "The array has the following elements:\n";
  printArray(array, size);

  sortArray(array, size);
  printArray(array, size);
  
}

void getValues(int array[], int size)
{
  for (int i = 0; i < size; i++)
    array[i] = rand() % 101;
}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
    cout << array[i] << ' ';
  cout << '\n';
}

void sortArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int smallestIndex = findSmallestNumber(array, size, i);
    swap(array, smallestIndex, i);
  }
}

int findSmallestNumber (int array[], int size, int index)
{
  int smallestNumber = index;

  for (int i = index; i < size; i++)
  {
    if (array[i] < array[smallestNumber])
      smallestNumber = i;
  }
  return smallestNumber;
}

void swap(int array[], int smallestNumber, int index)
{
  int tmp = array[index];
  array[index] = array[smallestNumber];
  array[smallestNumber] = tmp;
}