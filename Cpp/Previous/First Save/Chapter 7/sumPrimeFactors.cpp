#include <iostream>

using namespace std;

bool isPrime (unsigned long long number);
unsigned long long sumPrimeFactors(unsigned long long number);

int main()
{
  cout << "The program will print the numbers whom the prime factors add to a prime number.\n" << endl;

  unsigned long long number = 18043445379727183; // max 18043445379727183

  for (unsigned long long i = 2; i <= number; i++)
  {
    unsigned long long sumPrime = sumPrimeFactors(i);
    if (isPrime(sumPrime))
      cout << "The sum of prime factors of " << i << " is a prime factor: " << sumPrime << endl;
  }  
}

bool isPrime (unsigned long long number)
{
  unsigned long long half = number / 2;

  for (unsigned long long i = 2; i <= half; i++)
  {
    if (!(number % i))
      return false;
  }
  return true;
}

unsigned long long sumPrimeFactors(unsigned long long number)
{
  unsigned long long sum = 0, i = 2;
  while (i <= number)
  {
    if ((number % i) == 0)
    {
      number /= i;
      sum += i;
      continue;
    }
    i++;
  }
  return sum;
}