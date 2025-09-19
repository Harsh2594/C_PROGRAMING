#include<stdio.h>
int main()
{
  float cp,sp;
  float profit,loss;
  printf("Enter the cost price of banana per dozen ");
  scanf("%f",&cp);
  printf("Enter the selling price of banana per dozen ");
  scanf("%f",&sp);
  printf("Cost price of 25 banana is %f \n",cp/12*25);
  cp = cp/12*25;
  printf("selling price of 25 banana is %f \n",sp/12*25);
  sp = sp/12*25;
  if (sp>cp){
    profit = (sp-cp)/cp*100;
    printf("profit is %f\"%\"",profit);
  } else {
    loss = (cp-sp)/cp*100;
    printf("loss is %f\"%\"",loss);
  }
  return 0;

}