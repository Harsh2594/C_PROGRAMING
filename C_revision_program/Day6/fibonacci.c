#include <stdio.h>
/*Compute 10 fibonacci numbers using recursion*/
int print_fibonacci(int n)
{
  if (n == 1)
    return 0;
  else if (n == 2)
    return 1;
  return print_fibonacci(n - 1) + print_fibonacci(n - 2);
}
int main()
{
  int n;
  printf("Enter length of series you want: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    printf("%d,", print_fibonacci(i));
  return 0;
}