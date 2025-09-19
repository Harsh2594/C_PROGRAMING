int findDublicate(int a[], int size)
{
  int i;
  for (i = 0; i < size - 1; i++)
  {
    if (a[i] == a[i + 1])
      return a[i];
  }
  return -1;
}
