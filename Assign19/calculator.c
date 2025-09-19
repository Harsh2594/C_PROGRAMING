#include <stdio.h>
#include <stdlib.h>
int main()
{
  int choice, a, b;
  float r;
  while (1)
  {
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter Two numbers. ");
      scanf("%d%d", &a, &b);
      printf("Sum is %d", a + b);
      break;
    case 2:
      printf("Enter Two numbers. ");
      scanf("%d%d", &a, &b);
      printf("Subtraction is %d", a - b);
      break;
    case 3:
      printf("Enter Two numbers. ");
      scanf("%d%d", &a, &b);
      printf("MUltiplication is %d", a * b);
      break;
    case 4:
      printf("Enter Two numbers. ");
      scanf("%d%d", &a, &b);
      r = a / b;
      printf("Division is %f", r);
      break;
    case 5:
      exit(0);
    default:
      break;
    }
  }
  printf("\n");
  return 0;
}