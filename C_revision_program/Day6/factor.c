#include <stdio.h>
/*determine factor of a number*/
void find_factor(int num)
{
  int i = 2;
  printf("prime factors of %d are: ", num);
  while (num > 1)
  {
    if (num % i == 0)
    {
      printf("%d,", i);
      num = num / i;
    }
    else
      i++;
  }
}
int main()
{
  find_factor(24);
  printf("\n");
  return 0;
}