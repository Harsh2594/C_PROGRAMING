int stringlength(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
    ;
  return i;
}

char *reverseString(char str[])
{
  int i, j, length = 0, temp;
  length = stringlength(str);
  i = 0;
  j = length - 1;
  while (i < j)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
  return str;
}

char *reverse(char str[])
{
  char ch;
  int i, l;
  for (l = 0; str[l]; l++)
    ;
  for (i = 0; i < l / 2; i++)
  {
    ch = str[i];
    str[i] = str[l - 1 - i];
    str[l - 1 - i] = ch;
  }
  return str;
}

int compare(char str1[], char str2[])
{
  int i;
  for (i = 0; str1[i] && str2[i]; i++)
  {
    if (str1[i] != str2[i])
      return str1[i] - str2[i];
  }
  return str1[i] - str2[i];
}

char *lowercase(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = str[i] + 32;
  }
  return str;
}

char *uppercase(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;
  }
  return str;
}
