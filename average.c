#include <stdio.h>
int main()
{
  int a,b,c;
  float avg;
  printf("Enter three number \n");
  scanf("%d%d%d",&a,&b,&c);
  avg = (a+b+c)/3.0;
  printf("Average of three number is %f",avg);
  return 0;
}