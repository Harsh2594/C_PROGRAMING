int totaldublicate(int a[], int size)
{
  int i = 0, j = 1, count = 0;
  sort(a, size);
  while (j < size)
  {
    while (a[i] == a[j] && j < size)
    {
      j++;
    }
    if (i + 1 < j)
      count++;
    i = j;
    j = i + 1;
  }
  return count;
}

void uniqueElement(int a[], int size)
{
  int i = 0, j = 1;
  sort(a, size);
  while (j < size)
  {
    while (a[i] == a[j] && j < size)
    {
      j++;
    }
    i = j;
    j = i + 1;
    if (a[i] != a[j])
      printf("%d ", a[i]);
  }
}

void sort(int a[], int size)
{
  int round, i, t;
  for (round = 1; round <= size - 1; round++)
  {
    for (i = 0; i <= size - round - 1; i++)
    {
      if (a[i] > a[i + 1])
      {
        t = a[i];
        a[i] = a[i + 1];
        a[i + 1] = t;
      }
    }
  }
}

// WAP to print frequency of each element in array:
void frequency(int a[], int size)
{
  int i = 0, j = 1, count = 1;
  sort(a, size);
  while (j < size)
  {
    while (a[i] == a[j] && j < size)
    {
      j++;
      count++;
    }
    printf("%d comes %d times", a[i], count);
    printf("\n");
    count = 1;
    i = j;
    j = i + 1;
  }
}

#include <stdio.h>
int main()
{
  int a[10] = {5, 5, 7, 9, 8, 10, 11, 8, 12, 8};
  frequency(a, 10);
  return 0;
}
