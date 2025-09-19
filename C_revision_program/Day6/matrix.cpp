#include<iostream>
using namespace std;

/*Matrix operations*/
void Add_two_matrix(int a[][3],int b[][3],int sum[][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      sum[i][j]=a[i][j]+b[i][j];
}
void Multiply_matrix(int a[][3],int b[][3],int product[][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      for(int k=0;k<3;k++)
        product[i][j]+=a[i][k]*b[j][k];
}

int main()
{
  int a[3][3],b[3][3],sum[3][3]={0},product[3][3]={0};
  cout<<"Enter matrix 'A' elements."<<endl;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      cin>>a[i][j];
  
  cout<<"Enter matrix 'B' elements."<<endl;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      cin>>b[i][j];
  
  Add_two_matrix(a,b,sum);
  Multiply_matrix(a,b,product);
  
  cout<<"Sum of two given two matix is "<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
      cout<<sum[i][j]<<" ";
    cout<<endl;  
  } 
  cout<<"product of two given two matix is "<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
      cout<<product[i][j]<<" ";
    cout<<endl;  
  } 
  
  return 0;
}