#include <stdio.h>
#include <string.h>
/*Count the Number of matching characters in a pair of strings*/
int matching_pair(char ch1[], char ch2[])
{
  int i, j, count = 0;
  int freq1[256] = {0}, freq2[256] = {0};
  for (i = 0; ch1[i]; i++)
  {
    freq1[(unsigned char)ch1[i]]++;
  }
  for (i = 0; ch2[i]; i++)
  {
    freq2[(unsigned char)ch2[i]]++;
  }
  for (j = 0, i = 0; j < 256; j++, i++)
  {
    if (freq1[j] != 0 && freq2[j] != 0)
    {
      count++;
    }
  }
  return count;
}
int main()
{
  char ch1[] = "apple";
  char ch2[] = "pineapple";
  printf("number of match character is %d", matching_pair(ch1, ch2));
  return 0;
}
