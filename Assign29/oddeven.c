#include <stdio.h>
int main()
{
  int a[10], i, oddsum = 0, evensum = 0;
  printf("Enter 10 value in array");
  for (i = 0; i <= 9; i++)
    scanf("%d", &a[i]);
  for (i = 0; i <= 9; i++)
  {
    if (a[i] % 2 == 0)
      evensum = evensum + a[i];
    else
      oddsum = oddsum + a[i];
  }
  printf("Sum of odd numbers is %d.", oddsum);
  printf("\n");
  printf("Sum of even numbers is %d.", evensum);
  return 0;
}
