#include <stdio.h>
int main()
{
  int a[10], big = 0, i;
  printf("Enter 10 value in array");
  for (i = 0; i <= 9; i++)
    scanf("%d", &a[i]);
  for (i = 0; i <= 9; i++)
  {
    if (big > a[i])
      continue;
    else
      big = a[i];
  }
  printf("Greatest value in array is %d", big);
  return 0;
}
