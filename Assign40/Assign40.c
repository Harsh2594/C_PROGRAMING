#include <stdio.h>
#include <string.h>

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

// WAF to store strings,taken from user, to the given 2D char array:
void input_strings(char str[][20], int n)
{
  int i, l;
  for (i = 0; i < n; i++)
  {
    fgets(str[i], 20, stdin);
    for (l = 0; str[i][l]; l++)
      ;
    str[i][l - 1] = '\0';
  }
}
// WAP TO find the number of vowels in each of the 5 strings stored in two D array taken from user:

void find_vowel_in_each_string(char str[][20], int n)
{
  int i, l, k, count;
  char v[] = "aeiouAEIOU";
  input_strings(str, n);
  for (i = 0; i < n; i++)
  {
    for (l = 0, count = 0; str[i][l]; l++)
    {
      for (k = 0; v[k]; k++)
      {
        if (str[i][l] == v[k])
          count++;
      }
    }
    printf("In %d string %d vowels.", i, count);
  }
}

// WAP to sort 10 city names stored in two Dimensional array taken from user:

void sort_names(char str[][20], int n)
{
  int r, i;
  char temp[20];
  // printf("Enter 10 city names.");
  // input_strings(str, n);
  for (r = 1; r < n - 1; r++)
  {
    for (i = 0; i < n - 1 - r; i++)
    {
      if (strcmp(str[i], str[i + 1]) > 0)
      {
        strcpy(temp, str[i]);
        strcpy(str[i], str[i + 1]);
        strcpy(str[i + 1], temp);
      }
    }
  }
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

// WAF to remove duplicatenames stored in the list of names stored in 2D char array:

int remove_dublicate(char str[][20], int n)
{
  int i, j, k = 0;
  char temp[20][30];
  sort_names(str, n);
  strcpy(temp[k], str[0]);
  for (i = 0; i < n - 1;)
  {
    for (j = i + 1; j < n; j++)
      if (strcmp(str[i], str[j]) == 0)
        continue;
      else
      {
        i = j;
        k++;
        strcpy(temp[k], str[j]);
        break;
      }
  }
  for (i = 0; i <= k; i++)
    strcpy(str[i], temp[i]);
  return k + 1;
}

void display(char str[][20], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%s\n", str[i]);
  }
}

int main()
{
  char str[10][20] = {
      "Kanpur",
      "Lucknow",
      "Agra",
      "Shivrajpur", "Kanpur", "Lucknow", "Kanpur", "Agra", "Noida", "Noida"};
  int n;
  n = remove_dublicate(str, 10);
  display(str, n);
  printf("\n");
  return 0;
}
