#include <stdio.h>
int main()
{
  int a[10], i, j, temp;
  printf("Enter 10 value in array");
  for (i = 0; i <= 9; i++)
    scanf("%d", &a[i]);
  for (i = 1; i <= 9; i++)
  {
    for (j = 0; j < 10 - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  for (i = 0; i <= 9; i++)
    printf("%d ", a[i]);
  return 0;
}