//WAP to print factorial of a number:
#include<stdio.h>
// int main()
// {
//   int fac=1,N,i;
//   printf("Enter a number ");
//   scanf("%d",&N);
//   i=N;
//   while (i>=1)
//   {
//     fac = fac*i;
//     i--;
//   }
//   printf("Factorial of %d is %d",N,fac);
//   return 0;
// }

//WAP to count digits in a number:

// int main()
// {
//   int N,i,count=0;
//   printf("Enter a Number ");
//   scanf("%d",&N);
//   while (N>0)
//   {
//     N = N/10;
//     count++;
//   }
//   printf("Number of digit in given number is %d",count);
//   return 0;
// }

//WAP to check given number is prime or not:

// int main()
// {
//   int i,N;
//   printf("Enter a number to prime or non-prime ");
//   scanf("%d",&N);
//   for(i=2;i<=N/2;i++)
//   {
//     if (N%i==0)
//     {
//       printf("Not a Prime Number!");
//       break;
//     }
//     else if (i==N/2)
//       printf("Prime Number");
//     else
//       continue;    
//   }
// }

//WAP to calculate LCM of two numbers:

// int main()
// {
//   int a,b,max;
//   printf("Enter two numbers ");
//   scanf("%d%d",&a,&b);
//   for(max=a>b?a:b;max<=a*b;max++)
//   {
//     if(max%a==0 && max%b==0)
//       break;

//   }
//   printf("LCM is %d",max);
// }

//WAP to reverse a given number:

// int main()
// {
//   int num,y=0,r;
//   printf("Enter a number ");
//   scanf("%d",&num);
//   while (num)
//   {
//     r = num%10;
//     y = y*10+r;
//     num = num/10;
//   }
//   printf("Reverse of the number is %d",y);
  
// }