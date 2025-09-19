#include<iostream>
using namespace std;
/*Write a program to print all number in a list on random numbers,all numbers comes only once
example-[1,2,4,5,6,7,8,8,8,7,6,9,9,2,3,3,3,4,5,9]*/
void only_once(int a[],int len)
{
  
  int k=0,count_nonzero=0;
  for(int i=0;i<len;i++)
  {
    for(int j = i+1;j<len;j++)
    {
      if(a[i]==a[j]&&a[j]!=0)
        a[j]=0;
    }
  }
  for(int i=0;i<len;i++)
  {
    if(a[i]!=0)
      count_nonzero++;
  }
  int temp[count_nonzero];
  for(int i=0;i<len;i++)
    if(a[i]!=0){
      temp[k]=a[i];
      k++;
    }
  for(int i=0;i<count_nonzero;i++)  
    cout<<temp[i]<<",";
}
int main()
{
  int a[]={1,5,2,5,4,4,3};
  int len = sizeof(a)/sizeof(a[0]);
  only_once(a,len);
  return 0;
}
