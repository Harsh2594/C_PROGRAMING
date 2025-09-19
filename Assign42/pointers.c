// WAP to swap two variable using pointers:
#include <stdio.h>

void swap(int *p, int *q)
{
  int c;
  c = *p;
  *p = *q;
  *q = c;
}
// int main()
// {
//   int a, b;
//   printf("Enter two numbers ");
//   scanf("%d %d", &a, &b);
//   swap(&a, &b);
//   printf("%d,%d", a, b);
//   printf("\n");
//   return 0;
// }

// WAF to search all occurence of a given character in a given string:
// Result of search is a list of indices to be stored in the given array.
//[void search_all_occurences(char *str,char ch,int *arr)]

void search_all_occurences(char *str, char ch, int *arr)
{
  int i, count = 0;
  for (i = 0; str[i]; i++)
  {
    if (str[i] == ch)
    {
      arr[count++] = i;
    }
  }
  printf("%c occures at ", ch);
  for (i = 0; i < count; i++)
    printf("%d ", arr[i]);
}

// int main()
// {
//   char str[] = "harsh pratap singh";
//   char ch = 'a';
//   int arr[20];
//   search_all_occurences(str, ch, arr);
// }

// WAF to convert given string in uppercase:

char *upper_case_conversion(char *str)
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;
  }
  return str;
}
int main()
{
  int i;
  char str[50];
  printf("Enter a string ");
  fflush;
  fgets(str, 50, stdin);
  for (i = 0; str[i]; i++)
    ;
  str[i - 1] = '\0';
  printf("%s", upper_case_conversion(str));
}

// WAF to extract a substring from a given string with specified start index(inclusive)
// and end index(exclusive), and store the extracted string in another char array:

void extract_string(char *str, int start_index, int end_index, char *result)
{
  int i, j;
  for (j = 0, i = start_index; i < end_index; i++, j++)
  {
    result[j] = str[i];
  }
  result[j] = '\0';
}
