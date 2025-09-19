#include <stdio.h>
int main()
{
  int a[10], small = 0, i;
  printf("Enter 10 value in array");
  for (i = 0; i <= 9; i++)
    scanf("%d", &a[i]);
  for (i = 0; i <= 9; i++)
  {
    if (small > a[i])
      small = a[i];
    else
      continue;
  }
  printf("Greatest value in array is %d", small);
  return 0;
}
