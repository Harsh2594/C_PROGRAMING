#include <stdio.h>
#include <string.h>

// Sum of two numbers:

int sum(int x, int y)
{
  return x + y;
}

// check Even or odd:
void even_odd(int x)
{
  if (x % 2 == 0)
    printf("Even Number");
  else
    printf("Odd number!");
}
// swap two numbers:
void swap(int x, int y)
{
  x = x + y;
  y = x - y;
  x = x - y;
}

// find factorial:
int factorial(int x)
{
  if (x == 1)
    return 1;
  return x * factorial(x - 1);
}

// print reverse of a number:

void reverse(int x)
{
  int y = 0;
  while (x)
  {
    y = y * 10 + (x % 10);
    x = x / 10;
  }
  x = y;
  printf("%d", y);
}

// Check prime number:

void prime(int x)
{
  if (x == 2)
  {
    printf("Prime Number\n");
    return;
  }
  for (int i = 2; i <= x / 2; i++)
    if (x % i == 0)
    {
      printf("Not prime!");
      return;
    }
  printf("Prime Number!");
}

// print fibonacci series upto N terms

void fibonacci(int N)
{
  int fib;
  int a = 0, b = 1;
  for (int i = 0; i < N; i++)
  {
    if (i <= 1)
      fib = i;
    else
      fib = a + b;
    a = b;
    b = fib;
    printf("%d ", fib);
  }
}

// Largest element in an Array:

int largest(int arr[], int size)
{
  int max = 0;
  for (int i = 0; arr[i]; i++)
  {
    if (arr[i] > max)
      max = arr[i];
    else
      continue;
  }
  return max;
}

// Take input in an array:

void input_array(int arr[], int size)
{
  printf("Enter %d value in array\n");
  for (int i = 0; i < size; i++)
    scanf("%d", arr[i]);
  return;
}

// input string:

void input_string(char ch[], int size)
{
  printf("Enter a String: ");
  getchar();
  fgets(ch, size, stdin);
}

// count vowel,consonant,digits,and spaces in a string:

void count_character(char ch[])
{
  int vowel = 0, consonant = 0, digits = 0, spaces = 0;
  for (int i = 0; ch[i] != '\0'; i++)
    if (ch[i] >= 'A' && ch[i] <= 'Z')
      ch[i] = ch[i] + 32;

  for (int i = 0; ch[i]; i++)
    if (ch[i] >= 'a' && ch[i] <= 'z')
    {
      if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
        vowel++;
      else
        consonant++;
    }
    else if (ch[i] >= '0' && ch[i] <= '9')
      digits++;
    else if (ch[i] == ' ')
      spaces++;

  printf("Number of vowel: %d\n", vowel);
  printf("Number of consonant: %d\n", consonant);
  printf("Number of digits: %d\n", digits);
  printf("Number of spaces: %d\n", spaces);
}

// int main()
// {
//   char str[100];
//   input_string(str, 100);
//   count_character(str);
//   return 0;
// }