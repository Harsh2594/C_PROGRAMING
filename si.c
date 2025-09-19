#include <stdio.h>
int main()
{
  int p,t;
  float si,r;
  printf("Enter principle Amount ");
  scanf("%d",&p);
  printf("Enter rate of interest ");
  scanf("%f",&r);
  printf("Enter time duration ");
  scanf("%d",&t);
  si = p*r*t/100;
  printf("Simple interest on given data is %f",si);
  return 0;
}