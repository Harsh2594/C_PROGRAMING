#include<stdio.h>
#include<string.h>

/*Count number of vowel and consonant in string*/
void count_vowel_conso(char a[])
{
  int vowel = 0, consonant = 0;
  for (int i = 0; a[i]; i++)
  {
    char ch = tolower(a[i]);
    if (ch >= 'a' && ch <= 'z')
      if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        vowel++;
      else if (a[i] != ' ')
        consonant++;
  }
  printf("vowel = %d\n", vowel);
  printf("consonant = %d", consonant);
}