#include <stdio.h>
int sumofn(int n);
int sumOfeven(int n);
int main()
{
  int sum;
  // sum = sumofn(5);
  sum = sumOfeven(4);
  printf("%d", sum);
}

int sumofn(int n)
{
  if (n == 1)
    return 1;
  return n + sumofn(n - 1);
}

int sumOfeven(int n)
{
  if (n == 1)
    return 2;
  return 2 * n + sumOfeven(n - 1);
}

int sumOfodd(int n)
{
  if (n == 1)
    return 1;
  return (2 * n - 1) + sumOfodd(n - 1);
}

int sumofsquare(int n)
{
  if (n == 1)
    return 1;
  return n * n + sumofsquare(n - 1);
}

int sumofdigit(int n)
{
  if (n > 0)
  {
    return (n % 10) + sumofdigit(n / 10);
  }
}
