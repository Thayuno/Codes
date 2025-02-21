#include <iostream>

int main ()
{
  long long unsigned int max, primes = 0;

  std::cout << "What is the max range? ";
  std::cin >> max;

  for (long long unsigned int i = 2; i < max; i++)
  {
    primes++;
    for (long long unsigned int j = 2; j <= i/2; j++)
    {
      if ( !(i % j) )
      {
        primes--;
        break;
      }
    }
  }
  std::cout << "The quantity of primes until " << max << " is: " << primes << std::endl;
}