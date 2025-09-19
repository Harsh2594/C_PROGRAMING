#include <stdio.h>
#include <string.h>

/*Define a function check number is palindrome using array:*/
// void check_palindrome(int n)
// {
//   int temp = n;
//   int count = 0, i = 0, left, right;
//   while (temp != 0) // length of number
//   {
//     temp = temp / 10;
//     count++;
//   }
//   temp = n;
//   int a[count];
//   while (temp != 0)
//   {
//     a[i++] = temp % 10;
//     temp = temp / 10;
//   }
//   left = 0;
//   right = count - 1;
//   while (left < right)
//   {
//     if (a[left] != a[right])
//     {
//       printf("Not a palindrome number\n");
//       return;
//     }
//     left++;
//     right--;
//   }
//   printf("palindrome number!\n");
// }

/*Define a function check number is palindrome:*/
void isPalindrome(int n)
{
  int temp = n, reversed = 0;
  while (temp > 0)
  {
    reversed = reversed * 10 + temp % 10;
    temp = temp / 10;
  }
  if (n == reversed)
    printf("%d is palindrome number!\n", n);
  else
    printf("%d is Not a palindrome number!\n", n);
}
int main()
{
  isPalindrome(121);
  isPalindrome(122);
  return 0;
}