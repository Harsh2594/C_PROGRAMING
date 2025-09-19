#include<iostream>
using namespace std;

//Find the missing number in an array of size n-1 with elements from 1 to n:

int  find_missing(int a[],int n)
{
  int total = (n*(n+1))/2;
  int sum = 0;
  for(int i = 0;a[i];i++)
    sum = sum + a[i];
  return total-sum;
}

// Move all 0s to the end of array while maintaining order of others:

void move_zero(int a[],int size)
{
  int r,i,t;
  for(r=1;r<size;r++)
    for(i=0;i<size-1;i++) 
      if(a[i]==0)
        {
          if(a[i+1]==0)
            continue;
          else  
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
      else  
        continue;
  for(i=0;i<size;i++)
        printf("%d ",a[i]);
}

// int main()
// {
//   int a[]={2,0,5,4,0,1,8,0};
//   move_zero(a,8);
//   return 0;
// }