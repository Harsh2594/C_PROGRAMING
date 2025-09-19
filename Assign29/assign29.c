#include <stdio.h>
float avg(int n);
int main()
{
  int i, a[10], sum = 0;
  printf("Enter 10 numbers ");
  for (i = 0; i <= 9; i++)
    scanf("%d", &a[i]);
  for (i = 0; i <= 9; i++)
    sum = sum + a[i];
  printf("Sum of 10 numbers is %d", sum);
  printf("\n");
  printf("average of 10 number is %f", avg(sum));
  return 0;
}

float avg(int n)
{
  float avge;
  avge = n / 10.0;
  return avge;
}
