// WAP to convert agiven string into lowecase:
#include <stdio.h>
#include <string.h>
void p1()
{
  char str[50];
  int i;
  printf("Enter a string ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  for (i = 0; str[i]; i++)
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = (int)str[i] + 32;
    else
      continue;
  printf(str);
}

// WAP to reverse given string:
void p2()
{
  char str[50];
  int i, j, temp;
  printf("Enter a string ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  i = 0;
  j = strlen(str) - 1;
  while (i < j)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
  printf(str);
}

// WAP to count total number of alphabet,digits and special character:

void p3()
{
  char str[50];
  int i, count_alphabet = 0, count_digits = 0, count_special_char = 0;
  printf("Enter a string ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  for (i = 0; str[i]; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
      count_alphabet++;
    else if (str[i] >= '0' && str[i] <= '9')
      count_digits++;
    else
      count_special_char++;
  }
  printf("1) Total alphabet count = %d\n", count_alphabet);
  printf("2) Total digit count = %d\n", count_digits);
  printf("3) Total special char count = %d\n", count_special_char);
}

// WAP to copy one string in another array:

void p4()
{
  char str[50], str_copy[50] = {0};
  int i, count_alphabet = 0, count_digits = 0, count_special_char = 0;
  printf("Enter a string ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  for (i = 0; str[i]; i++)
  {
    str_copy[i] = str[i];
  }
  printf(str_copy);
}
// WAP TO FIND FIRST OCCURNCE OF A GIVEN CHARACTER IN A GIVEN STRING:

void p5()
{
  char str[50], ch;
  int i;
  printf("Enter a string ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  printf("Enter a character ");
  scanf("%c", &ch);
  for (i = 0; str[i]; i++)
  {
    if (str[i] == ch)
    {
      break;
    }
  }
  printf("first occurance of %c at %d", ch, i);
}
int main()
{
  p5();
  printf("\n");
  return 0;
}