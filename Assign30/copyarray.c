#include <stdio.h>
int main()
{
  int a[5], i, b[5];
  printf("Enter 5 value in array ");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < 5; i++)
  {
    b[i] = a[i];
    printf("%d ", b[i]);
  }
  return 0;
}