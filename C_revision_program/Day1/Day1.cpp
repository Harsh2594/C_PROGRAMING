#include<iostream>
using namespace std;
#include<string.h>
//Reverse an array using two pointer method:

void reverse_array(int arr[],int size)
{
  int left = 0,right=size-1;
  while(left<right)
  {
    int temp;
    temp=arr[left];
    arr[left]=arr[right];
    arr[right]=temp;
    left++;
    right--;
  }
}
//Reverse a string:
char* reverse_string(char arr[])
{
  int left = 0,right=strlen(arr)-1;
  while(left<right)
  {
    char ch;
    ch=arr[left];
    arr[left]=arr[right];
    arr[right]=ch;
    left++;
    right--;
  }
  return arr;
}
//check palindrome string:
bool is_palindrome(char arr[])
{
  int left = 0,right=strlen(arr)-1;
  for(int i=0;arr[i];i++)
    if(arr[i]>='A'&&arr[i]<='Z')
      arr[i] = arr[i]+32;
  while(left<right)
  {
    if(arr[left]!=arr[right])
      return false;
    left++;
    right--;
  }
  return true;
}


