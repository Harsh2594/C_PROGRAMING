#include <stdio.h>
#include <string.h>

void p1()
{
  char str[20];
  int i;
  printf("Enter a string ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  printf("length of given string is %d", i - 1);
}

// WAP to count the occurance of character in given string:
void p2()
{
  char str[50], ch;
  int i, count = 0;
  printf("Enter a string ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  printf("Enter the character ");
  scanf("%c", &ch);
  for (i = 0; str[i]; i++)
  {
    if (str[i] == ch)
      count++;
  }
  printf("Count = %d", count);
}

// WAP TO COUNT VOWEL IN GIVEN STRING:
void p3()
{
  char str[50], vowel[11] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  int i, j, count = 0;
  printf("Enter a string ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  for (i = 0; str[i]; i++)
    for (j = 0; vowel[j]; j++)
    {
      if (str[i] == vowel[j])
      {
        count++;
        break;
      }
    }

  printf("vowel Count = %d", count);
}
// WAP to count spaces in given string:
void p4()
{
  char str[50];
  int i, count = 0;
  printf("Enter a string ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  for (i = 0; str[i]; i++)
  {
    if (str[i] == ' ')
      count++;
  }

  printf("spaces Count = %d", count);
}

// WAP to convert  a string into uppercases:

void p5()
{
  char str[50];
  int i;
  printf("Enter a string ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  for (i = 0; str[i]; i++)
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = (int)str[i] - 32;
    else
      continue;
  printf(str);
}
//
int main()
{
  p5();
  printf("\n");
  return 0;
}
