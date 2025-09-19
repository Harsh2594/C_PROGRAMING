#include <stdio.h>
void reverseNumber(int n);
void dtob(int n);
void dtooctal(int n);
int main()
{
  dtooctal(61);
}

void square(int n)
{
  if (n == 0)
    return;
  square(n - 1);
  printf("%d ", n * n);
}

void reverseNumber(int n)
{
  if (n == 0)
    return;
  printf("%d", n % 10);
  reverseNumber(n / 10);
}

void dtob(int n)
{
  if (n > 0)
  {
    dtob(n / 2);
    printf("%d", n % 2);
  }
}

void dtooctal(int n)
{
  if (n > 0)
  {
    dtooctal(n / 8);
    printf("%d", n % 8);
  }
}
