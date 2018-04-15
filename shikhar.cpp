#include<iostream>
using namespace std;
int main()
{
int t,count,max,n,r,m,value;
cin>>t;
for(int x=0;x<t;x++)
{
cin>>n;
int value_array[n][n];
for(r=0;r<n;r++)
 {
  for(m=0;m<n;m++)
   { 
     if(r+m==n)
      {
      value=m;
      }     
     else if(r+m<n)
      {
      value=m;
      break;
      }
     else if(r+m>n)
      {
        if(r<m)
         {
          value=n-r;
         }
        else if(r>m)
        {
         value=m;
        }
        else
        {
         value=n/2;
        }
      }
    value_array[r][m]=value;
   }
 }
for(int k=0;k<n;k++)
{
count=0;
max=0;
 for(int p=0;p<n;p++)
  {
    if(max<value_array[k][p])
    {
     max=value_array[k][p];
    }
    
  }
 for(int q=0;q<n;q++)
 {
  if(max==value_array[k][q])
   count++;
 }
cout<<count;
}
}
}