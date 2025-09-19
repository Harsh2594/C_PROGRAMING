#include <stdio.h>
#include <string.h>

// /*Short array without using function*/
// void bubble_sort(int a[], int size)
// {
//   int i, r;
//   for (r = 1; r < size; r++)
//   {
//     int isSwap = 0;
//     for (i = 0; i <= size - 1 - r; i++)
//     {
//       if (a[i] > a[i + 1])
//       {
//         int t = a[i];
//         a[i] = a[i + 1];
//         a[i + 1] = t;
//         isSwap = 1;
//       }
//     }
//     if (!isSwap)
//       break;
//   }
// }

// /*Write a function to find second largest element*/

// int second_largest(int a[], int size)
// {
//   bubble_sort(a, size);
//   int max = a[size - 1];
//   printf("%d", max);
//   for (int i = size - 1; i >= 0; i--)
//   {
//     if (a[i] != max)
//     {
//       return a[i];
//       break;
//     }
//     continue;
//   }
// }
// /*Write a function to reverse an array*/
// void reverse_array(int a[], int size)
// {
//   int right = size - 1;
//   int left = 0;
//   while (left <= right)
//   {
//     int t = a[left];
//     a[left] = a[right];
//     a[right] = t;
//     left++;
//     right--;
//   }
// }

// int main()
// {
//   int size;
//   printf("Enter size of array: ");
//   scanf("%d", &size);
//   int a[size];
//   printf("Enter element in array\n");
//   for (int i = 0; i < size; i++)
//     scanf("%d", &a[i]);
//   // printf("Second largest element in array = %d", second_largest(a, size));
//   reverse_array(a, size);
//   for (int i = 0; i < size; i++)
//     printf("%d ", a[i]);
// }

// void print_N_prime(int n)
// {
//   int count = 0, num = 2, j;
//   while (count < n)
//   {
//     j = 2;
//     while (j <= num / 2)
//     {
//       if (num % j == 0)
//       {
//         break;
//       }
//       j++;
//     }
//     if (j > num / 2)
//     {
//       printf("%d ", num);
//       count++;
//     }
//     num++;
//   }
// }
// int main()
// {
//   print_N_prime(10);
// }

/*Reverse a string without using loop and function*/

// void reverse_string(char *str)
// {
//   if (*str == '\0')
//     return;

//   reverse_string(str + 1);
//   printf("%c", *str);
// }
// int main()
// {
//   int i;
//   char str[100];
//   printf("Enter a string ");
//   fgets(str, 100, stdin);
//   for (i = 0; str[i]; i++)
//     ;
//   if (str[i - 1] == '\n')
//   {
//     str[i - 1] = '\0';
//   }
//   reverse_string(str);
//   return 0;
// }
