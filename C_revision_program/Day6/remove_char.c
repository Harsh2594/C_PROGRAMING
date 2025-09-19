#include <stdio.h>
#include <string.h>
/*Write a function to remove special character from string*/
void remove_special_char(char a[])
{
  int k = 0, j = 0, len = strlen(a);
  char temp[len + 1];
  for (int i = 0; a[i]; i++)
    if (a[i] >= 'A' && a[i] <= 'Z')
      a[i] = a[i] + 32;
  for (int i = 0; a[i]; i++)
  {
    if (a[i] >= 'a' && a[i] <= 'z')
      temp[k++] = a[i];
  }
  temp[k] = '\0';
  for (int i = 0; temp[i]; i++)
    a[j++] = temp[i];
  a[j] = '\0';

  printf("%s", a);
}
int main()
{
  char a[] = "Harsh@gmail.com";
  remove_special_char(a);
  return 0;
}