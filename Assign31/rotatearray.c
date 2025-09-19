// create new array after n rotation without changing given array:
void rotate(int a[], int size, int n, int d)
{
  int i, b[size];
  if (d == 1) // left shift:
  {
    for (i = 0; i < size; i++)
    {
      if (i < size - n)
        b[i] = a[i + n];
      else
        b[i] = a[i - (size - n)];
    }
  }
  else // right shift:
  {
    for (i = 0; i < size; i++)
    {
      if (i < n)
        b[i] = a[i + (size - n)];
      else
        b[i] = a[i - n];
    }
  }
  // print given array:
  for (i = 0; i < size; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
  // after shifting array become:
  for (i = 0; i < size; i++)
  {
    printf("%d ", b[i]);
  }
}

// best logic (if we can not use another array):

void rotate1(int a[], int size, int n, int d)
{
  int i, temp;

  if (d < 0)
  {
    while (n)
    {
      temp = a[0];
      for (i = 0; i < size - 2; i++)
      {
        a[i] = a[i + 1];
      }
      a[size - 1] = temp;
      n--;
    }
  }
  else
    while (n)
    {
      temp = a[size - 1];
      for (i = size - 1; i >= 1; i++)
      {
        a[i] = a[i - 1];
      }
      a[0] = temp;
      n--;
    }
}