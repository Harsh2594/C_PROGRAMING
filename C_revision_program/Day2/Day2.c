#include <stdio.h>
#include <string.h>

// find largest of three number using if else:

int max_of_three(int x, int y, int z)
{
  if (x > y)
    if (x > z)
      return x;
    else
      return z;
  else if (y > z)
    return y;
  else
    return z;
}

// check leap year:

void check_leap_year(int year)
{
  if (year % 4 == 0)
  {
    if (year % 100 == 0)
    {
      if (year % 400 == 0)
        printf("Leap year");
      else
        printf("Not a leap year!");
    }
    else
      printf("Leap year!");
  }
  else
    printf("Not a leap year!");
}

// Reverse an array:

void reverse_array(int arr[], int len)
{
  int left = 0, right = len - 1;
  while (left < right)
  {
    int temp;
    temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    left++;
    right--;
  }
  for (int i = 0; arr[i]; i++)
    printf("%d ", arr[i]);
}

// search an element in array(linear search):

void search_ele(int arr[], int n)
{
  for (int i = 0; arr[i]; i++)
  {
    if (arr[i] == n)
    {
      printf("element found at %d index", i);
      return;
    }
  }
  printf("Element Not found!");
  return;
}

// Calculate  X power Y:
int x_power_y(int x, int y)
{
  int result = 1;
  for (int i = 1; i <= y; i++)
    result *= x;
  return result;
}
// check Armstrong Number:

void armstrong(int n)
{
  int sum = 0, len = 0;
  int num = n;
  while (num > 0)
  {
    len++;
    num = num / 10;
  }
  num = n;
  while (num > 0)
  {
    int x;
    x = num % 10;
    sum = sum + x_power_y(x, 3);
    num = num / 10;
  }
  if (sum == n)
    printf("Armstrong Number!");
  else
    printf("Not an Armstrong Number!");
}

// Find GCD:

int GCD(int x, int y)
{
  while (y)
  {
    int temp = y;
    y = x % y;
    x = temp;
  }
  return x;
}

// Copy one string to another without using strcpy:

char *copy_string(char arr[], int size)
{
  char temp[size];
  for (int i = 0; arr[i]; i++)
    temp[i] = arr[i];
  return temp;
}

int main()
{
  // int arr[] = {1, 2, 3, 5, 33, 12};
  // search_ele(arr, 33);
  // return 0;
  // armstrong(144);
}