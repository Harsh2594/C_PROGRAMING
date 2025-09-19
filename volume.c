#include<stdio.h>
int main()
{
  int l,b,h,Vol;
  printf("Enter the lenght,breath and height of cuboid ");
  scanf("%d%d%d",&l,&b,&h);
  Vol = l*b*h;
  printf("Volume of cuboid is %d",Vol);
  return 0;

}