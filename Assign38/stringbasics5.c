#include <stdio.h>
#include <string.h>

// Check given string is palindrome or not:
int ispalindrome(char str[])
{
  int i, l;
  for (l = 0; str[l]; l++)
    ;
  for (i = 0; i <= l / 2; i++)
  {
    if (str[i] != str[l - 1 - i])
    {
      return 0;
    }
    return 1;
  }
}

// WAF to trim a string(removing leading spaces from both end):
// Input: " Hello World! "
// Output: "Hello World!"

void trim_string(char str[])
{
  int start = 0, end, l, i, j = 0;

  // find first non-space character:
  while (str[start] == ' ')
    start++;

  // find last non-space character:
  for (end = start; str[end] != '\0'; end++)
    ;
  end--;
  while (end > start && str[end] == ' ')
    end--;

  // Shift trimmed part to the beginning
  for (i = start; i <= end; i++)
    str[j++] = str[i];

  str[j] = '\0';
}

// WAF to count words in given string:

int count_words(char str[])
{
  int i, count = 0;
  trim_string(str);
  for (i = 0; str[i]; i++)
  {
    if (str[i] == ' ')
      count++;
  }
  return count + 1;
}

// WAF to return reverse string word wise:

char *reverse_String_wordwise(char str[])
{
  int no_of_words, i, j = -1, k;
  char s[10][20];
  no_of_words = count_words(str);
  for (i = 0; i < no_of_words; i++)
  {
    for (j++, k = 0; str[j] != ' ' && str[j] != '\0'; j++, k++)
    {
      s[i][k] = str[j];
    }
    s[i][k] = '\0';
  }
  strcpy(str, s[no_of_words - 1]);
  strcat(str, " ");
  for (i = no_of_words - 2; i > 0; i--)
  {
    strcat(str, s[i]);
    strcat(str, " ");
  }
  strcat(str, s[0]);
  strcat(str, "\0");
  return str;
}

// WAF to do case insensitive comparison of two strings:
int isSame(char c1, char c2)
{
  if (c1 == c2)
    return 1;
  else if (c1 >= 'a' && c2 <= 'z')
  {
    if (c1 - 32 == c2)
      return 1;
  }
  else if (c1 >= 'A' && c1 <= 'Z')
  {
    if (c1 + 32 == c2)
      return 1;
  }
  else
    return 0;
}

int case_insensitive_comparison(char str1[], char str2[])
{
  int i;
  if (strlen(str1) == strlen(str2))
  {
    for (i = 0; str1[i]; i++)
    {
      if (!isSame(str1[i], str2[i]))
        return 0;
    }
    return 1;
  }
  else
    return 0;
}
