// WAP TO FIND NTH TERM OF Fibonacci:

// WAP TO print first n term of fibonacci:
#include <stdio.h>
// int main()
// {
//   int a=0,b=1,fab,n,i;
//   printf("How many term you want to print ");
//   scanf("%d",&n);
//   printf("%d %d ",a,b);
//   for(i=1;i<=n;i++)
//   {
//     fab=a+b;
//     a=b;
//     b=fab;
//     printf("%d ",fab);
//   }

// }

// WAP to find nth term of fibonacci:
//  int main()
//  {
//    int n,c,i,a=0,b=1;
//    printf("Which term you want to know ");
//    scanf("%d",&n);
//    for(i=1;i<=n-2;i++)
//    {
//      c = a+b;
//      a=b;
//      b=c;
//    }
//    printf("%d term of fibo series is %d",n,c);
//  }

// WAP to know given number is there in fibonacci series or not:

// int main()
// {
//   int a=0,b=1,fab,n,i;
//   int num;
//   printf("How many term you want to print ");
//   scanf("%d",&n);
//   printf("Which number you want to know is there in series or not ");
//   scanf("%d",&num);
//   for(i=1;i<=n;i++)
//   {
//     fab=a+b;
//     a=b;
//     b=fab;
//     if(fab==num)
//     {
//       printf("Number present in this serirs");
//       break;
//     }
//   }
//   if(i==n)
//     printf("Number not present");
// }

// WAP to check whether a given number is an Armstrong number or not.
//  int main()
//  {
//    int num,x,n,sum=0,digit,i,d;
//    printf("Enter a Number ");
//    scanf("%d",&num);
//    x=num;
//    n=0;
//    //count digits
//    while (x)
//    {
//      x=x/10;
//      n++;
//    }
//    //Sum of digits^n
//    for(x=num;x>0;x=x/10)
//    {
//      digit = x%10;
//      //Calculate digit power
//      for(d=1,i=1;i<=n;i++)
//      {
//        d = d*digit;
//      }
//      sum = sum + d;
//    }
//    //compare the result with orignal number
//    if(num==sum)
//      printf("Armstrong Number!");
//    else
//      printf("Not an Armstrong number.");

// }

// WAP to print all armstrong number under 1000:

// int main()
// {
//   int num = 1, x, n, sum = 0, digit, i, d;
//   while (num < 1000)
//   {
//     x = num;
//     n = 0;
//     // count digits
//     while (x)
//     {
//       x = x / 10;
//       n++;
//     }
//     sum = 0;
//     // Sum of digits^n
//     for (x = num; x > 0; x = x / 10)
//     {
//       digit = x % 10;
//       // Calculate digit power
//       for (d = 1, i = 1; i <= n; i++)
//       {
//         d = d * digit;
//       }
//       sum = sum + d;
//     }
//     // compare the result with orignal number
//     if (num == sum)
//       printf("%d\n", num);

//     num++;
//   }
// }