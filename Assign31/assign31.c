int greatestNumber(int a[], int size)
{
  int i, greatest = 0;
  for (i = 0; i < size; i++)
  {
    if (a[i] > greatest)
      greatest = a[i];
  }
  return greatest;
}
#include <stdio.h>
int main()
{
  int a[5], i;
  printf("Enter 5 value in array ");
  for (i = 0; i < 5; i++)
    scanf("%d", &a[i]);
  printf("Greatest value in given array is %d ", greatestNumber(a, 5));
}