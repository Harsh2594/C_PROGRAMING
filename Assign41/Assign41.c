#include <stdio.h>
#include <string.h>
#include <ctype.h>

// trim extra spaces:
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

// WAF to store each word a string in a 2D array:

void split_to_string(char str[][20], char ch[])
{
  int no_of_words, i, j = -1, k;
  no_of_words = count_words(ch);
  for (i = 0; i < no_of_words; i++)
  {
    for (j++, k = 0; ch[j] != ' ' && ch[j] != '\0'; j++, k++)
    {
      str[i][k] = ch[j];
    }
    str[i][k] = '\0';
  }
}

// WAF to find words ending with a letter 's' and store each such word in a 2d array:

void find_words()
{
  int i, j = 0, n, m;
  char str[] = "mysirg education services and this is a learning platform for students";
  char s[20][20], temp[20][20];
  n = count_words(str);
  split_to_string(s, str);
  for (i = 0; i < n; i++)
  {
    m = strlen(s[i]);
    if (s[i][m - 1] == 's')
    {
      strcpy(temp[j], s[i]);
      j++;
    }
  }
  // strcpy(s, temp); s is a 2D array — you can't copy all rows in one strcpy:
  for (i = 0; i < j; i++)
  {
    strcpy(s[i], temp[i]);
  }
  for (i = 0; i < j; i++)
    printf("%s\n", s[i]);
}

// WAF to count frequency of each character of this given string:

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

// WAF to return the most repeating character in a list of strings:
char most_repeating_char(char str[])
{
  char temp[100], ch;
  int i, count, highest = 0;
  strcpy(temp, str);
  sort(temp);
  for (i = 0, count = 1; temp[i]; i++)
  {

    if (temp[i] == temp[i + 1])
      count++;
    else
    {
      if (count > highest)
      {
        highest = count;
        ch = temp[i];
      }
      count = 1;
    }
  }
  return ch;
}

// int main()
// {
//   char str[] = "harsh pratap singh";
//   printf("most repeating character is - %c", most_repeating_char(str));
// }

// WAF to return the most repeating character in a list of strings:
char max_freq_character(char s[][20], int n)
{
  int freq[256] = {0};
  int i, j, max;
  char ch;
  for (i = 0; i < n; i++)
  {
    for (j = 0; s[i][j]; j++)
      freq[s[i][j]]++;
  }
  max = freq[0];
  ch = 0;
  for (i = 0; i < 256; i++)
    if (max < freq[i])
    {
      max = freq[i];
      ch = i;
    }
  return ch;
}

// int main()
// {
//   char s[][20] = {"kanpur", "lucknow", "agra", "delhi", "noida"};
//   printf("%c", max_freq_character(s, count_words(s)));
//   printf("\n");
//   return 0;
// }

// WAF to check given pair of strings are anagram or not:

int check_anagram(char s1[], char s2[])
{
  int i, j;
  int count[256] = {0};
  if (strlen(s1) != strlen(s2))
    return 0;
  for (i = 0; s1[i]; i++)
  {
    //// Increase count for s1 and decrease for s2:
    count[s1[i]]++;
    count[s2[i]]--;
  }
  for (i = 0; i < 256; i++)
    if (count[i] != 0)
      return 0; // not anagram
  return 1;     // anagram
}

// int main()
// {
//   char s1[10] = "harsh";
//   char s2[10] = "arhsh";
//   if (check_anagram(s1, s2))
//     printf("Anagram");
//   else
//     printf("Not Anagram");
// }

// WAF to store all words in a given string which are starting from 'a' in 2d array:
void find_words_with_a()
{
  int i, j = 0, n, m;
  char str[] = "Apple runs across a busy street after angry ants attack";
  char s[20][20], temp[20][20];
  n = count_words(str);
  split_to_string(s, str);
  for (i = 0; i < n; i++)
  {
    // m = strlen(s[i]);
    if (s[i][0] == 'a')
    {
      strcpy(temp[j], s[i]);
      j++;
    }
  }
  // strcpy(s, temp); s is a 2D array — you can't copy all rows in one strcpy:
  for (i = 0; i < j; i++)
  {
    strcpy(s[i], temp[i]);
  }
  for (i = 0; i < j; i++)
    printf("%s\n", s[i]);
}

// A 2D array if full with 10 emails id's.WAF to find how many of them end with gmail.com:

void store_emails(char emails[][50], int n)
{
  int i, len;
  printf("Enter %d email addresses:\n", n);
  for (i = 0; i < n; i++)
  {
    printf("Email %d: ", i + 1);
    fgets(emails[i], 50, stdin);

    len = strlen(emails[i]);
    if (len > 0 && emails[i][len - 1] == '\n')
    {
      emails[i][len - 1] = '\0';
    }
  }
}

int count_gmails(char s[][50], int n)
{
  int i, count = 0, j, k;
  char text[] = "@gmail.com";
  for (i = 0; i < n; i++)
  {
    if (strlen(s[i]) > 10)
    {
      for (j = strlen(s[i]) - 10, k = 0; s[i][j]; j++, k++)
        if (text[k] != s[i][j])
          break;
      if (!text[k])
        count++;
    }
  }
  return count;
}

// int main()
// {
//   char emails[20][50], n = 5;
//   store_emails(emails, n);
//   printf("%d", count_gmails(emails, n));
//   printf("\n");
//   return 0;
// }