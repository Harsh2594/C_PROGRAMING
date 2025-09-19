#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Write a C program to find the length of a string (without strlen)

// int main()
// {
//   char a[100];
//   int count = 0, i;
//   printf("Enter a string ");
//   getchar();
//   fgets(a, 100, stdin);
//   for (i = 0; a[i]; i++)
//     ;
//   printf("%d", i);
//   return 0;
// }

/*Write a C program to compare two strings (without strcmp)*/

// int compare_strings(char a[], char b[])
// {
//   int i;
//   for (i = 0; a[i] && b[i]; i++)
//     if (a[i] != b[i])
//       return 0;
//   return (a[i] == '\0' && b[i] == '\0');
// }

// int main()
// {
//   char a[] = "harsh pratap";
//   char b[] = "harsh pratap";
//   printf("%d", compare_strings(a, b));
// }

/*Write a C program to reverse a string (in-place)*/

// void reserse_string(char a[], int size)
// {
//   int right = size - 1, left = 0;
//   while (right != left)
//   {
//     int temp;
//     temp = a[right];
//     a[right] = a[left];
//     a[left] = temp;
//     left++;
//     right--;
//   }
//   for (int i = 0; a[i]; i++)
//     printf("%d", a[i]);
// }

// int main()
// {
//   char a[] = "pratap";
//   int len = strlen(a);
//   reserse_string(a, len);
//   return 0;
// }

/*Write a C program to check if a string is a palindrome*/

// void check_palindrome(char a[], int size)
// {
//   int left = 0, right = size - 1;
//   while (left != right)
//   {
//     if (a[left] != a[right])
//     {
//       printf("Not a palindrome string!");
//       return;
//     }
//     left++;
//     right--;
//     // if(left==right)
//   }
//   printf("Palindrome String!");
// }

// int main()
// {
//   char a[] = "madam";
//   int len = strlen(a);
//   check_palindrome(a, len);
//   return 0;
// }

/*Write a C program to count vowels and consonants in a string*/

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

// int main()
// {
//   char a[] = "harsh pratap singh";
//   count_vowel_conso(a);
//   return 0;
// }

/*Write a function to swap two numbers using pointers*/

void swap(int *p, int *q)
{
  int t;
  t = *p;
  *p = *q;
  *q = t;
}
// int main()
// {
//   int a = 3, b = 5;
//   swap(&a, &b);
//   printf("a = %d,b = %d", a, b);
//   return 0;
// }

/*Write a program to sort an array using selection sort*/
int main()
{
  int i, j, min_index;
  char a[5];
  printf("Enter value 5 in Array\n");
  for (i = 0; i < 5; i++)
  {
    printf("Enter %d value of array\n", i + 1);
    scanf("%d", &a[i]);
  }
  for (i = 0; i < 4; i++)
  {
    min_index = i;
    for (j = i + 1; j < 5; j++)
    {
      if (a[j] < a[min_index])
      {
        min_index = j;
      }
    }
    int t = a[i];
    a[i] = a[min_index];
    a[min_index] = t;
  }

  for (i = 0; i < 5; i++)
    printf("%d,", a[i]);
}

/*Write a function to calculate nCr (combinations) using factorial logic*/

int fact(int n)
{
  if (n == 1)
    return 1;
  return n * fact(n - 1);
}

int combination(int n, int r)
{
  return fact(n) / (fact(n - r) * fact(r));
}
