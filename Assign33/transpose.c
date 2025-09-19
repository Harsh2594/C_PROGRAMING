// WAP to find transpose of a matrice of order 3*3:
#include <stdio.h>
void main()
{
  int a[3][3], c[3][3], i, j;
  printf("Enter 9 numbers of first matrices ");
  for (i = 0; i <= 2; i++)
    for (j = 0; j <= 2; j++)
      scanf("%d", &a[i][j]);

  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i <= 2; i++)
    for (j = 0; j <= 2; j++)
      c[i][j] = a[j][i];

  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
    {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
}