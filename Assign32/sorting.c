// sort array in ascending order:
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

// sort array in descending order:
void sortDescending(int a[], int size)
{
  int round, i, t;
  for (round = 1; round <= size - 1; round++)
  {
    for (i = size - 1; i >= 1; i--)
    {
      if (a[i] > a[i - 1])
      {
        t = a[i];
        a[i] = a[i - 1];
        a[i - 1] = t;
      }
    }
  }
}