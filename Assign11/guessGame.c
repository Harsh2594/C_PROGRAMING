#include<stdio.h>
int main()
{
  int i=1,num;
  while (i<=3)
  {
    printf("Enter an even number: ");
    scanf("%d",&num);
    if (num%2==0)
    {
      printf("You Win!");
      break;
    }
    else
    {
      i++;
      if (i==4)
      {
        printf("Game Over!");
      }  
    }  
  }
}


