#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a, b, c, choice;
  while (1)
  {
    printf("Enter the length of sides of traingle. ");
    scanf("%d%d%d", &a, &b, &c);
    printf("\n1. Check for Isosceles triangle");
    printf("\n2. Check for right angled triangle");
    printf("\n3. Check for Equilateral triangle");
    printf("\n4. Exit");
    printf("\n\Enter your choice: ");
    scanf("%d", &choice);
    if (a + b > c && b + c > a && c + a > b)
      ;
    else
      choice = 5;
    switch (choice)
    {
    case 1:
      if (a == b || b == c || c == a)
        printf("Isosceles triangle.");
      else
        printf("It is not Isosceles triangle.");
      break;
    case 2:
      if (a * a + b * b == c * c || a * a == b * b + c * c || a * a + c * c == b * b)
        printf("It is a right angle traingle.");
      else
        printf("It is not a right angle traingle.");
      break;
    case 3:
      if (a == b && a == c)
        printf("Equilateral traingle.");
      else
        printf("NOt a equilateral traingle.");
      break;
    case 4:
      exit(0);
    case 5:
      printf("Invalid traingle sides");
      break;
    default:
      printf("Enter the valid choice");
    }
  }
  printf("\n");
  return 0;
}