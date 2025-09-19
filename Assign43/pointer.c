// WAF to swap strings of two char arrays:
#include <stdio.h>
#include <string.h>
void swap_string(char str1[], char str2[])
{
  char temp[50];
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
}

// WAF to sort an array of int type values:

void sort(int *ptr, int size)
{
  int r, i, temp;
  for (r = 1; r < size; r++)
  {
    for (i = 0; i <= size - r - 1; i++)
    {
      if (ptr[i] > ptr[i + 1])
      {
        temp = ptr[i];
        ptr[i] = ptr[i + 1];
        ptr[i + 1] = temp;
      }
    }
  }
}

// WAF to merge two arrays in given array:

void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
  int i, j, k;
  for (i = 0, j = 0, k = 0; i < size1 && j < size2; k++)
  {
    if (arr1[i] < arr2[j])
    {
      arr3[k] = arr1[i];
      i++;
    }
    else
    {
      arr3[k] = arr2[j];
      j++;
    }
  }
  while ((i < size1))
  {
    arr3[k] = arr1[i];
    i++;
    k++;
  }
  while ((j < size2))
  {
    arr3[k] = arr2[j];
    j++;
    k++;
  }
}

// int main()
// {
//   int i;
//   int a1[] = {2, 5, 12, 9};
//   int a2[] = {11, 1, 8, 3, 14, 6};
//   int a3[25];
//   merge(a1, 4, a2, 6, a3);
//   for (i = 0; i < 10; i++)
//     printf("%d ", a3[i]);
// }

// WAF to move first value of the array to the position where all smaller values will be in the left and greater
// values will be in the right:

int f4(int A[], int size)
{
  int mid, temp;
  int left_side = 1;
  int right_side = size - 1;
  mid = 0;
  while ((left_side < right_side))
  {
    while (left_side < right_side && A[mid] < A[right_side])
      right_side--;
    while (left_side < right_side && A[mid] > A[left_side])
      left_side++;
    if (left_side == right_side)
      break;
    temp = A[mid];
    A[mid] = A[right_side];
    A[right_side] = temp;
    mid = right_side;
    left_side++;
    right_side--;
  }
}

// There are five classes with different number of students in them. five arrays containing marks
// of students of each class. WAF to receive an address of an array of pointers to access marks of
// all students. the job of the function is to find the highest marks among all the classes.

int highest_marks(int **p, int num_of_classes, int num_of_students)
{
  int max, i, j;
  max = p[0][0];
  for (i = 0; i < num_of_classes; i++)
  {
    for (j = 0; j < num_of_students; j++)
    {
      if (max < p[i][j])
        max = p[i][j];
    }
  }
  return max;
}
