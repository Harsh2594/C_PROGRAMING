int countvowel(char str[])
{
  int i, j, count = 0;
  char vowel[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  for (i = 0; str[i]; i++)
  {
    for (j = 0; vowel[j]; j++)
    {
      if (str[i] == vowel[j])
      {
        count++;
        break;
      }
    }
  }
  return count;
}
// WAF to find a character in string:

int findCharacter(char str[], char ch)
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (ch == str[i])
    {
      return i;
    }
  }
  return -1;
}

// WAP TO find character in a given string between specified indices(start index)inclusive and end
// indices exclusive:
int findcharacter2(char str[], char ch, int startIndex, int endIndex)
{
  int i;
  for (i = startIndex; str[i] && i < endIndex; i++)
  {
    if (ch == str[i])
    {
      return 1;
    }
  }
  return -1;
}
// waf to swap to characters of a given string with specified indices:

void swapCharacter(char str[], int i, int j)
{
  char ch;
  ch = str[i];
  str[i] = str[j];
  str[j] = ch;
}
// waf to check given string is alphanumeric or not:

void isAlphanumeric(char str[])
{
  int i, digit = 0, alpha = 0;
  for (i = 0; str[i]; i++)
  {
    if (str[i] >= '0' && str[i] <= '9')
      digit = 1;
    if (str[i] >= 'a' && str[i] <= 'z')
      alpha = 1;
    if (str[i] >= 'A' && str[i] <= 'Z')
      alpha = 1;
  }
  if (digit && alpha)
    return 1;
  else
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
  char str[50], ch;
  int i;
  printf("Enter a string ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
}