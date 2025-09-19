//STAR PATTERN:

// #include<stdio.h>
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++)
//   {
//     for(j=1;j<=5;j++)
//     {
//       if (j<=6-i)
//         printf("*");
//       else
//         printf(" ");
//     }
//     printf("\n");
//  }
// }

//WAP to print all prime numbers under 100:

//#include<stdio.h>
// int main()
// {
//   int i,j;
//   int isPrime=1;
//   for(i=1;i<=100;i++)
//   {
//    if(i==1)
//     isPrime=0;
//    else if(i==2)
//     isPrime=1; 
//    else 
//     for(j=2;j<=i/2;j++)
//     {
//       if(i%j==0)
//       {
//         isPrime=0;
//         break;
//       }
//       else
//         isPrime=1;
//     }
//     if(isPrime)
//       printf("%d\n",i);
//     else
//       continue; 
//   }
// }

//WAP to print all prime numbers between two numbers:

// int main()
// {
//   int i,n1,n2,j;
//   printf("Enter value of n1 ");
//   scanf("%d",&n1);
//   printf("Enter value of n2 ");
//   scanf("%d",&n2);

  
//   for(i=n1+1;i<=n2-1;i++)
//   {
//    int isPrime=1;
//    if(i==1)
//     isPrime=0;
//    else if(i==2)
//     isPrime=1; 
//    else 
//     for(j=2;j<=i/2;j++)
//     {
//       if(i%j==0)
//       {
//         isPrime=0;
//         break;
//       }
//       else
//         isPrime=1;
//     }
//     if(isPrime)
//       printf("%d\n",i);
//     else
//       continue; 
//   }
// }

//WAP to print prime number:
// #include<stdio.h>
// int main()
// {
//   int i,x;
//   for(x=2;x<=100;x++)
//   {
//     for(i=2;i<=x;i++)
//     {
//       if(x%i==0)
//         break;
//     }
//     if(i==x)
//       printf("%d ",x);
//   }
// }

//WAP to calculate HCF of two numbers:
// #include<stdio.h>
// int main()
// {
//   int H,a,b;
//   printf("Enter value of a and b ");
//   scanf("%d%d",&a,&b);
//   for(H=a>b?a:b;H>=1;H--)
//   {
//     if(a%H==0 && b%H==0)
//     {
//       printf("HCF of %d and %d is %d ",a,b,H);
//       break;
//     }
//   }
// }

//WAP to calculate HCF of two numbers:
// #include<stdio.h>
// int main()
// {
//   int H,a,b;
//   printf("Enter value of a and b ");
//   scanf("%d%d",&a,&b);
//   for(H=a>b?a:b;H>=1;H--)
//   {
//     if(a%H==0 && b%H==0)
//     {
//       break;
//     }
    
//   }
//   if(H==1)
//     printf("Given number are co-prime");
//   else
//     printf("Not co-Prime numbers."); 
// }