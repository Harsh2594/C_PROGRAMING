#include <stdio.h>
/*Define a function to find missing number and dublicate number in array of  natural numbers(1-to-n)*/
void missing_And_dublicate(int a[], int n)
{

  int max = a[0];
  for (int i = 1; i < n; i++)
    if (a[i] > max)
      max = a[i];
  int freq[max + 1];
  for (int i = 0; i <= max; i++)
    freq[i] = 0;
  for (int i = 0; i < n; i++)
    freq[a[i]]++;

  printf("Missing numbers ");
  for (int j = 0; j <= max; j++)
    if (freq[j] == 0)
      printf("%d,", j);

  printf("\n");

  printf("dublicate numbers ");
  for (int j = 0; j <= max; j++)
    if (freq[j] > 1)
      printf("%d,", j);
}
int main()
{
  int a[] = {2, 3, 3, 5, 6, 5, 9};
  int n = sizeof(a) / sizeof(a[0]);
  missing_And_dublicate(a, n);
  return 0;
}