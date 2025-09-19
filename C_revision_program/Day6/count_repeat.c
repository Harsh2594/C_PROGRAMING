#include <stdio.h>
#include <string.h>
/*Write a program to count repeated item in string*/
void to_lower(char a[])
{
  for (int i = 0; a[i]; i++)
  {
    if (a[i] >= 'A' && a[i] <= 'Z')
      a[i] = a[i] + 32;
  }
}
void sort_string(char a[])
{
  int i, r, len = strlen(a);
  char ch;
  to_lower(a);
  for (r = 1; r < len; r++)
  {
    for (i = 0; i <= len - 1 - r; i++)
    {
      if (a[i] > a[i + 1])
      {
        ch = a[i];
        a[i] = a[i + 1];
        a[i + 1] = ch;
      }
    }
  }
}

int main()
{
  char a[100], count = 0;
  printf("Enter a string\n");
  fgets(a, 100, stdin);
  a[strlen(a) - 1] = '\0';
  sort_string(a);
  for (int i = 0; a[i]; i++)
  {
    if (a[i] == a[i + 1])
    {
      count++;
    }
    else
    {
      printf("%c comes %d times\n", a[i], count + 1);
      count = 0;
    }
  }
}