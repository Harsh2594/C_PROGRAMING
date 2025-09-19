#include <stdio.h>
#include <string.h>
/*Write a C program to add two matrices (2D array)*/

// int main()
// {
//   int i, j, k, temp[3][3] = {0}, temp2[3][3] = {0}, transpose_a[3][3] = {0}, sum_mainDg = 0, sum_AntiDg = 0;
//   int a[3][3] = {0}, b[3][3] = {0};
//   printf("Enter 1st matrix element seperated by space\n");
//   for (i = 0; i < 3; i++)
//   {
//     for (j = 0; j < 3; j++)
//       scanf("%d", &a[i][j]);
//     printf("\n");
//   }
//   printf("Enter 2st matrix element seperated by space or newline\n");
//   for (i = 0; i < 3; i++)
//   {
//     for (j = 0; j < 3; j++)
//       scanf("%d", &b[i][j]);
//     printf("\n");
//   }
//   // Add to matrix:
//   for (i = 0; i < 3; i++)
//     for (j = 0; j < 3; j++)
//       temp[i][j] = a[i][j] + b[i][j];

//   // Write a C program to multiply two matrices:
//   for (i = 0; i < 3; i++)
//     for (j = 0; j < 3; j++)
//       for (k = 0; k < 3; k++)
//         temp2[i][j] += a[i][k] * b[k][j];

//   /*Write a C program to transpose a matrix*/
//   for (i = 0; i < 3; i++)
//     for (j = 0; j < 3; j++)
//       transpose_a[i][j] = a[j][i];
//   /*Write a program to find sum of diagonal elements of a matrix*/
//   for (i = 0; i < 3; i++)
//     sum_mainDg += a[i][i];
//   for (i = 2; i >= 0; i--)
//     for (j = 0; j < 3; j++)
//       sum_AntiDg += a[i][j];

//   // show resulting matrix:
//   for (i = 0; i < 3; i++)
//   {
//     for (j = 0; j < 3; j++)
//       printf("%d ", transpose_a[i][j]);
//     printf("\n");
//   }
//   return 0;
// }

/*Write a program to generate first N prime numbers*/

void first_N_prime(int N)
{
  int count = 0, num = 2;
  while (count < N)
  {
    int isPrime = 1;
    for (int i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
      {
        isPrime = 0;
        break;
      }
    }
    if (isPrime)
    {
      printf("%d,", num);
      count++;
    }
    num++;
  }
}

// int main()
// {
//   first_N_prime(5);
//   return 0;
// }

/*Write a C program to find LCM and GCD of two numbers*/
// 1.remender theorum
int GCD(int a, int b) // a=18,b=12
{
  while (b)
  {
    int x = b;
    b = a % b;
    a = x;
  }
  return a;
}
// 2.using loop

int gcd(int a, int b)
{
  for (int s = (a < b ? a : b); s > 0; s--)
    if (a % s == 0 && b % s == 0)
      return s;
}

/*LCM of two number:*/

// 1.Repeated Addition / Brute Force Method
int LCM(int a, int b)
{
  for (int h = (a > b ? a : b); h <= a * b; h++)
    if (h % a == 0 && h % b == 0)
      return h;
}

// 2.using gcd;
int LCM_using_gcd(int a, int b)
{
  return (a * b) / GCD(a, b);
}

// int main()
// {
//   printf("%d", LCM(48, 18));
//   return 0;
// }
// 3.using prime factorization:

int max(int a, int b) { return (a > b ? a : b); }

// int main()
// {
//   int a, b;
//   printf("Enter two numbers: ");
//   scanf("%d %d", &a, &b);
//   int lcm = 1, prime = 2;
//   while (a > 1 || b > 1)
//   {
//     int countA = 0, countB = 0;

//     while (a % prime == 0)
//     {
//       countA++;
//       a = a / prime;
//     }

//     while (b % prime == 0)
//     {
//       countB++;
//       b = b / prime;
//     }

//     for (int i = 0; i < max(countA, countB); i++)
//       lcm *= prime;
//     prime++;
//   }
//   printf("LCM = %d\n", lcm);
//   return 0;
// }

/*Write a function to reverse an array 0r entire string */

char *reverse_array(char a[], int size)
{
  char temp[size];
  for (int i = size; i >= 0; i--)
    temp[size - i] = a[i - 1];
  strcpy(a, temp);
  a[size] = '\0';
  return a;
}
// int main()
// {
//   char a[] = "harsh pratap";
//   int len = strlen(a);
//   printf("%s", reverse_array(a, len));
//   return 0;
// }

/*Reverse string word by word*/

/*insertion sort*/

void insertion_Sort(int a[], int size)
{
  for (int i = 1; i < size; i++)
  {
    int key = a[i];
    int j = i - 1;

    while (j >= 0 && a[j] > key)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }
  printf("\nSorted array: ");
  for (int i = 0; i < size; i++)
    printf("%d ", a[i]);
}
int main()
{
  int a[5] = {5, 3, 4, 1, 2};
  int n = sizeof(a) / sizeof(a[0]);
  insertion_Sort(a, n);
  return 0;
}