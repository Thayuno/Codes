#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void swap (int array[], int smallestIndex, int index);
int findSmallestIndexNumber (int array[], int size, int index);
void sortArray(int array[], int size);
void printArray(int array[], int size);
bool isSorted(int array[], int size);

int main()
{
  int size = 0;

  if (size != 0)
  {
    cout << "Enter the size of the list: ";
    cin >> size;
  }
  else
  {
    cout << "Enter 10 itens for the list.\n";
    size = 10;
  }
  int array[size];

  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << i << " number of the list: ";
    cin >> array[i];
  }
  if (isSorted(array, size))
  {
    cout << "The list is sorted.\n";
    printArray(array, size);
  }
  else
  {
    cout << "The list is unsorted:\n";
    printArray(array, size);

    cout << "Sorted:\n";
    sortArray(array, size);
    printArray(array, size);
  }
}

bool isSorted(int array[], int size)
{
  int small = array[0];
  for (int i = 1; i < size; i++)
  {
    if (small > array[i])
      return false;
    small = array[i];
  }
  return true;
}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << ' ';
  }
  cout << endl;
}

void sortArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int smallestIndexNumber = findSmallestIndexNumber(array, size, i);
    swap(array, smallestIndexNumber, i);
  }
}

int findSmallestIndexNumber (int array[], int size, int index)
{
  int smallestIndex = index;
  for (int i = index; i < size; i++)
  {
    if (array[smallestIndex] > array[i])
      smallestIndex = i;
  }
  return smallestIndex;
}

void swap (int array[], int smallestIndex, int index)
{
  int tmp = array[index];
  array[index] = array[smallestIndex];
  array[smallestIndex] = tmp;
}