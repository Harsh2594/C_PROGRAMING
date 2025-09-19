//Character to ASCII value:

// #include<stdio.h>
// int main(){
//   char ch;
//   printf("Enter any character ");
//   scanf("%c",&ch);
//   printf("ASCII value of given character constant is %d",ch);
// }

//ASCII TO character:

// #include<stdio.h>
// int main()
// {
//   int ch;
//   printf("Enter any ASCII code ");
//   scanf("%d",&ch);
//   printf("Character of given ASCII code is %c",ch);
//   return 0;
// }

#include<stdio.h>
int main()
{
  char ch1,ch2,ch3;
  printf("Enter three character ");
  scanf("%c %c %c",&ch1,&ch2,&ch3);
  printf("%c = %d\n%c = %d\n%c = %d",ch1,ch1,ch2,ch2,ch3,ch3);
  printf("\n");
  return 0;
}