#include<iostream>
#include<string.h>
using namespace std;

//Sort an arrray:

void sort_array(int arr[],int size)
{
  int r,i,temp;
  for(r=1;r<size;r++)
    for(i=0;i<=size-1-r;i++)
      if(arr[i]>arr[i+1])
        {
          temp = arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=temp;
        }
}

void sort_string(char str[],int size)
  {
    int r,i;
    char ch;
    for(r=1;r<size;r++)
      for(i=0;i<=size-1-r;i++)
        if(str[i]>str[i+1])
        {
          ch = str[i];
          str[i]=str[i+1];
          str[i+1]=ch;
        }
  }
//Find maximum and minimum value in a given Array:

void find_min_max(int arr[],int size)
{
  int max=0,min=0;
  sort_array(arr,size);
  cout<<"max value in given array: "<<arr[size-1]<<endl;
  cout<<"min value in given array: "<<arr[0]<<endl;

}

//count frequency of each character in a string:

void count_frequency(char str[],int size)
{
  int count=0;
  sort_string(str,size);
  for(int i=0;str[i];i++)
  {
    if(str[i]==str[i+1])
    {
      count++;
    }
    else
    {
      cout<<str[i]<<" comes "<<count+1<<"times."<<endl;
      count=0;
    }  
  }
}
/*Try using map<char, int> or simple arrays (int freq[256] = {0};) for character counting.*/
void count_frequency_method2(char str[],int size)
{
  int freq[256] = {0};

  for(int i=0;i<size;i++)
  {
    //Count frequency of each character:
    freq[(unsigned char)str[i]]++; // Cast to avoid negative index

  }
  
  for(int i=0;i<256;i++)
  {
    if(freq[i]!=0)
      cout<<char(i)<<" comes "<<freq[i]<<"times"<<endl;
  }
}

int main()
{
  int len;
  char str[100];
  cout<<"Enter a String"<<endl;
  cin.getline(str,100);
  len = strlen(str);
  count_frequency_method2(str,len);
  return 0;
  // sort_string(str,len);
  // for(int i=0;str[i];i++)
  //   cout<<str[i];
}