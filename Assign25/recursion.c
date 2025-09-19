#include <stdio.h>
void even(int n);
int main()
{
  even(5);
}

void naturalNumber(int n)
{
  if (n == 0)
    return;
  naturalNumber(n - 1); // recursive call
  printf("%d ", n);     // print in asending order
}

void naturalNumberreverse(int n)
{
  if (n == 0)
    return;
  printf("%d ", n);            // print in desending order
  naturalNumberreverse(n - 1); // recursive call
}

void odd(int n)
{
  if (n == 0)
    return;
  odd(n - 1);
  printf("%d ", 2 * n - 1);
}

void oddreverse(int n)
{
  if (n == 0)
    return;
  printf("%d ", 2 * n - 1);
  oddreverse(n - 1);
}

void even(int n)
{
  if (n == 0)
    return;
  even(n - 1);
  printf("%d ", 2 * n);
}
