//Input three digit number and display sum of its digits:
#include<stdio.h>
// int main()
// {
//   int num;
//   int num1,num2,num3;
//   printf("Enter a three digit number ");
//   scanf("%d",&num);
//   num3 = num%10; //3
//   num2 = num/10; //12
//   num2 = num2%10; //2
//   num1 = num/100; //1
//   printf("Sum of digits of given number is %d",num1+num2+num3);
//   return 0;
// }

//Find ASCII code for '+' character:

// int main()
// {
//   char ch = '+';
//   printf("ASCII code for %c is %d.",ch,ch);
//   return 0;
// }

//WAP to print size of int,float,double and char type of variable:

// int main()
// {
//   int a;
//   float f;
//   double df;
//   char ch;
//   printf("Size of integer 'a' is %d bytes.\n",sizeof(a));
//   printf("Size of float 'f' is %d bytes.\n",sizeof(f));
//   printf("Size of double 'df' is %d bytes.\n",sizeof(df));
//   printf("Size of character 'ch' is %d bytes.\n",sizeof(ch));
//   return 0;
// }

//WAP to make the last digit of a number stored in a variable as zero:

// int main()
// {
//   int num,n;
//   printf("Enter the number ");
//   scanf("%d",&num);
//   n = num%10;
//   num = num-n;
//   printf("After change number become %d",num);
//   return 0;

// }

//input: num = 234, di = 9, output num = 2349:

// int main()
// {
//   int num,n;
//   printf("Enter a number and a single digit number ");
//   scanf("%d %d",&num,&n);
//   num = num*10;
//   num = num+n;
//   printf("Required output is %d.",num);
//   return 0;

// }