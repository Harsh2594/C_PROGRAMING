#include <stdio.h>
int main()
{
  int r;
  float Area;
  printf("Enter the radius of circle. \n");
  scanf("%d",&r);
  Area = 3.14*r*r;
  printf("Area of circle is %f",Area);
  return 0;
}