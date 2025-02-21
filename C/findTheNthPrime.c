#include <stdio.h>
#include <stdlib.h>

int main ()
{
  long int value = 2;
  int index = 0, nth;

  printf("Which nth number prime do you wanna find? ");
  scanf("%d", &nth);

  long int *primes = (long int*) malloc(nth * sizeof(long int));

  while (index < nth)
  {
    for (long int i = 2; i <= value; i++)
    {
      if (i == value)
      {
        primes[index] = i;
        index++;
      }
      if (!(value % i))
       break;
    }

    value++;
  }

  for (int i = 0; i < nth; i++)
  {
    if (i != 0)
      printf ("; ");
    printf("%ld", primes[i]);
  }
  printf ("\n");

  free(primes);

  return 0;
}