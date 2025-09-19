#include <stdio.h>
#include <string.h>
/*Define a function to find all permutation of a string:*/

// find factorial of a number:
int fact(int n)
{
  if (n == 1)
    return 1;
  return n * fact(n - 1);
}
// check frequency of each character:
int *store_frequency(char ch[], int freq[])
{
  for (int i = 0; ch[i]; i++)
    freq[(unsigned char)ch[i]]++;
  return freq;
}

int string_permutation(char a[])
{
  int freq[256] = {0}, len, i;
  int denominator = 1, numerator, permutation;
  for (len = 0; a[len]; len++)
    ;
  store_frequency(a, freq);
  // calculate permutation:
  for (i = 0; i < 256; i++) // calculate product of repeated letters
  {
    if (freq[i] > 1)
    {
      denominator *= fact(freq[i]);
    }
  }

  // calculate numerator:
  numerator = fact(len);
  permutation = numerator / denominator;
  return permutation;
}
int main()
{
  char ch[] = "harsh";
  printf("Number of permutation of '%s' string is %d.\n", ch, string_permutation(ch));
  return 0;
}