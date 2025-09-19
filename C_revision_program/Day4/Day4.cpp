#include<iostream>
#include<string.h>
using namespace std;

/*Binary Search on a sorted array (return index if found, else -1)*/

int binary_search(int a[],int size,int n)
{
  int left = 0,right = size-1;
  while (left<=right)
  {
    int mid = left + (right-left)/2;
    if(a[mid]==n)
      return mid;
    else if(a[mid]>n)
      right = mid-1;
    else if(a[mid]<n)
      left = mid+1;    
  }
  return -1;
              
}

/*Find the first non-repeating character in a string*/

char first_non_repeating(char a[])
{
  int i,j;
  int freq[256] = {0};
  for(i=0;a[i];i++)
    freq[(unsigned char)a[i]]++;
  for(i=0;a[i];i++)  
    if(freq[a[i]]==1)
      return a[i];
}
int main()
{
  char a[] = "harsh pratap singh";
  cout<<first_non_repeating(a);
  return 0;
}