#include<iostream>
#include<string.h>
using namespace std;
/*Find the index of the first Or last occurrence of an element in a sorted array (Binary Search variation)*/

int firstOrLast_occurence(int a[],int size,int num,int op=0)
{
  int i,result=-1;
  int left=0,right=size-1;
  for(i=left;i<=right;i++)
  {
    int mid = left + (right-left)/2;
    if(num==a[mid])
    {
      result=mid;
      //choose first occurence or last occurence:
      if(op==1)
        right = mid-1;
      else
        left = mid+1;  
    }  
    else if(num<mid)
      right = mid-1;
    else if(num>mid)
      left = mid+1;    
  }
  return result;
}

// int main()
// {
//   int a[]={1,2,4,4,4,6,8};
//   cout<<firstOrLast_occurence(a,7,4);
//   return 0;
// }

/*Rotate an array by k positions (Right rotation)*/

void rorate_right(int a[],int size,int k)
{
  int last;
  for(int j=1;j<=k;j++)
  {
    last=a[size-1];
    for(int i=size-1;i>0;i--)
    {
      a[i]=a[i-1];
    }
    a[0]=last;
  } 
}

/*Rotate an array by k positions (left rotation)*/
void rorate_left(int a[],int size,int k)
{
  int first;
  for(int j=1;j<=k;j++)
  {
    first=a[0];
    for(int i=0;i<size-1;i++)
    {
      a[i]=a[i+1];
    }
    a[size-1]=first;
  } 
}

// int main()
// {
//   int a[]={1,2,4,4,4,6,7};
//   int len = sizeof(a)/sizeof(a[0]);
//   rorate_right(a,len,2);
//   for(int i=0;i<len;i++)
//     cout<<a[i]<<" ";
//   return 0;  
// }