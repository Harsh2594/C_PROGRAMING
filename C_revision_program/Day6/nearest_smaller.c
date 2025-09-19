#include <stdio.h>
/*Define a function to find nearest smaller number in the left side of a number in an array*/
void nearest_smallest(int a[], int n)
{
  int i, temp[n], j = 0;
  for (i = 0; i < n; i++)
  {
    for (j = i - 1; j >= 0; j--)
    {
      if (a[j] < a[i])
      {
        temp[i] = a[j];
        break;
      }
    }
    if (j == -1)
      temp[i] = -1;
  }
  for (i = 0; i < n; i++)
    printf("%d,", temp[i]);
}

int main()
{
  int a[] = {1, 5, 2, 4, 3};
  int n = sizeof(a) / sizeof(a[0]);
  nearest_smallest(a, n);
  return 0;
}
