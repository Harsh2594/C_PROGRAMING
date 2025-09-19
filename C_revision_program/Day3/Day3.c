#include <stdio.h>
#include <stdbool.h>
// print all even number from 1 to N:

void print_even(int N)
{
  for (int i = 1; i <= N; i++)
    if (i % 2 == 0)
      printf("%d ", i);
}

// check palindrome number:

void check_palindrome(int N)
{
  int num = 0;
  while (N)
  {
    num = num * 10 + (N % 10);
    N = N / 10;
  }
  if (num == N)
    printf("Palindrome Number!");
  else
    printf("Not a palindrome Number!");
}

// factorial using recursion:

int factorial(int n)
{
  if (n == 1)
    return 1;
  return n * factorial(n - 1);
}

// check prime using recursion:

bool is_prime(int n, int i)
{
  if (n < i)
    return false;
  else if (n == i)
    return true;
  else if (i * i > n)
    return true;
  else if (n % i == 0)
    return false;
  return is_prime(n, i + 1);
}

// Write a program to insert an element at a given position in an array:

void insert_element(int arr[], int ele, int i)
{
  for (int j = 0; arr[j]; j++)
    if (j == i)
      arr[j] = ele;
}

// Write a program to delete an element from an array:

void delete_element(int arr[], int ele, int size)
{
  int pos;
  for (int i = 0; arr[i]; i++)
    if (arr[i] == ele)
    {
      pos = i;
      break;
    }
  for (int j = pos; j < size - 1; j++)
    arr[j] = arr[j + 1];
  arr[size - 1] = 0;
}

void display(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
    printf("%d ", arr[i]);
}

// Write a program to sort an array using bubble sort:

void sort_array(int arr[], int size)
{
  int r, i;
  int temp;
  for (r = 1; r < size; r++)
    for (i = 0; i <= size - r - 1; i++)
      if (arr[i] > arr[i + 1])
      {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
}
// Write a program to find second largest element in array:

void find_second_largest(int arr[], int size)
{
  int max, i;
  sort_array(arr, size);
  max = arr[size - 1];
  for (i = 0; arr[i]; i++)
    if (arr[i] == max)
    {
      break;
    }
  printf("Second largest element in array is %d", arr[i - 1]);
}

//	Write a program to merge two arrays into one:

char *merge_array(int a1[], int a2[])
{
  int a1_size, a2_size;
  a1_size = len(a1);
  a2_size = len(a2);
  int temp[a1_size + a2_size];
  for (int i = 0; a1[i]; i++)
    temp[i] = a1[i];
  for (int i = 0; a2[i]; i++)
    temp[a1_size + i] = a2[i];
  return temp;
}

int main()
{
  //   int size;
  //   printf("Enter size of array ");
  //   scanf("%d", &size);
  //   int arr[size];
  //   printf("Enetr %d value in array\n", size);
  //   for (int i = 0; i < size; i++)
  //   {
  //     printf("Enter %d index value ", i);
  //     scanf("%d", &arr[i]);
  //   }
  //   delete_element(arr, 4, size);
  //   display(arr, size);
  //   return 0;
}