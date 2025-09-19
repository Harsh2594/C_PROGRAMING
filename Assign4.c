//Calculate size of character constant:
// #include<stdio.h>
// int main()
// {
//   char ch;
//   double a;
//   printf("Enter a character constant ");
//   scanf("%c",&ch);
//   printf("Enter a real constant ");
//   scanf("%lf",&a);
//   printf("Size of given character constant is %d\n",sizeof(ch));
//   printf("Size of given real constant is %lu bytes",sizeof(a));
//   printf("\n");
//   return 0;
// }

//Change the value of variale from 'A' to 'B' using increment operator:

// #include<stdio.h>
// int main()
// {
//   char ch;
//   printf("Enter 'A' as character ");
//   scanf("%c",&ch);
//   printf("After increment value of %c is ",ch);
//   printf("%c",++ch);
//   return 0;
// }

//Swap two int variable:

// #include<stdio.h>
// int main()
// {
//   int a,b;
//   printf("Enter two number ");
//   scanf("%d %d",&a,&b);
//   a = a+b;
//   b = a-b;
//   a = a-b;
//   printf("After swaping value of a = %d, b = %d",a,b);
// }

//Swap two variable without using third variable and + - operator;

// #include<stdio.h>
// int main()
// {
//   int a,b;
//   printf("Enter two number ");
//   scanf("%d %d",&a,&b);
//   a = a*b;
//   b = a/b;
//   a = a/b;
//   printf("After swaping value of a = %d, b = %d",a,b);
//   return 0;
// }

//Swap two variable without using third variable and any airthmatic operator;

// #include<stdio.h>
// int main()
// {
//   int a,b;
//   printf("Enter two number ");
//   scanf("%d %d",&a,&b);
//   a = a^b;
//   b = a^b;
//   a = a^b;
//   printf("After swaping value of a = %d, b = %d",a,b);
//   return 0;
// }

//
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d",a,b);
    a=a+b - (b=a);
    printf("\na=%d b=%d",a,b);
    printf("\n");
    return 0;
}