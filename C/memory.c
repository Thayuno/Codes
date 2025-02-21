#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int size;

  printf("How many numbers do you want to input? ");
  scanf("%d", &size);

  int *array = (int*) malloc(size * sizeof(int));

  for (int i = 0; i < size; i++)
  {
    printf("Enter the number for the %d value: ", i+1);
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < size; i++)
  {
    if (i != 0)
      printf("; ");
    printf("%d", array[i]);
  }
  printf("\n");
  
  free(array);
}