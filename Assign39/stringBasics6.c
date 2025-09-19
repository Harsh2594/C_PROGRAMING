#include <stdio.h>
#include <string.h>

void sort(char str[])
{
  int r, i, n;
  char ch;
  n = strlen(str);
  for (r = 1; r <= n - 1; r++)
  {
    for (i = 0; i <= n - 1 - r; i++)
    {
      if (str[i] > str[i + 1])
      {
        ch = str[i];
        str[i] = str[i + 1];
        str[i + 1] = ch;
      }
    }
  }
}

// WAF to count frequency of each character of this given string:

void countFrequency(char str[])
{
  char temp[100];
  int i, count;
  strcpy(temp, str);
  sort(temp);
  for (i = 0, count = 1; temp[i]; i++)
  {

    if (temp[i] == temp[i + 1])
      count++;
    else
    {
      printf("%c comes - %d times.\n", temp[i], count);
      count = 1;
    }
  }
}
// Count no. of words in given string:

int count_words(char str[])
{
  int i, count = 0;
  for (i = 0; str[i]; i++)
  {
    if (str[i] == ' ')
      count++;
  }
  return count + 1;
}

// WAF to find a word in a given string:

int find_word(char str[], char ch[])
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
  for (i = 0; i < no_of_words; i++)
  {
    if (strcmp(s[i], ch) == 0) // function to compare two string:
      return 1;
  }
  return 0;
}

// int main()
// {
//   char str[] = "harsh pratap singh";
//   char ch[] = "singh";
//   printf("%d", find_word(str, ch));
//   printf("\n");
//   return 0;
// }

// WAF to make first character of each word of the string capital:

char *make_first_char_capital(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
      str[i] = str[i] - 32;
    else if (str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
      str[i + 1] = str[i + 1] - 32;
  }
  return str;
}

// int main()
// {
//   char str[] = "harsh pratap singh";
//   printf("%s", make_first_char_capital(str));
//   printf("\n");
//   return 0;
// }

// WAF to make acronym name from a given name. Ex- Abhi Priya Singh become A P Singh:

char *make_acronym(char str[])
{
  int no_of_words, i, j = 1, k = 0;
  char temp[50];
  no_of_words = count_words(str);
  if (str[0] >= 'a' && str[0 <= 'z'])
    temp[0] = str[0] - 32;
  else
    temp[0] = str[0];
  for (i = 0; str[i]; i++)
  {
    if (str[i - 1] == ' ')
    {
      j++;
      if (j == no_of_words)
      {
        k++;
        temp[k] = ' ';
        for (k++; str[i]; i++, k++)
          if (str[i - 1] == ' ')
            temp[k] = str[i] - 32;
          else
            temp[k] = str[i];
        temp[k] = '\0';
      }
      else
      {
        k++;
        temp[k] = ' ';
        k++;
        if (str[i] >= 'a' && str[i] <= 'z')
          temp[k] = str[i] - 32;
        else
          temp[k] = str[i];
      }
    }
  }
  strcpy(str, temp);
  return str;
}

// int main()
// {
//   char str[] = "abhi priya singh";
//   printf("%s", make_acronym(str));
//   printf("\n");
//   return 0;
// }

// WAF to concatenate two strings:

char *concatenate(char s1[], char s2[])
{
  int i, j;
  for (i = 0; s1[i]; i++)
    ;
  for (j = 0; s2[j]; j++, i++)
  {
    s1[i] = s2[j];
  }
  s1[i] = '\0';
  return s1;
}

// int main()
// {
//   char s1[] = "abhi priya singh";
//   char s2[] = "Sweden";
//   printf("%s", concatenate(s1, s2));
//   printf("\n");
//   return 0;
// }