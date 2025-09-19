// WAF to merge to arrays of same size sorted in descending order:
void mergeArray(int a[], int b[], int size)
{
  int merged[2 * size], i;
  for (i = 0; i < size; i++)
  {
    merged[i] = a[i];
  }
  for (i = 0; i < size; i++)
  {
    merged[size + i] = b[i];
  }
  sortDescending(merged, 2 * size);
}