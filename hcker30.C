/*shill and square sum*/
#include<iostream>
using namespace std;
int main()
{
int t,n,sum,k,m;
cin>>t;
cin>>n>>k;
m=n-k+1;
int a[100000];
 for(int p=0;p<n;p++)
 { 
  cin>>a[p];
 }

for(int i=0;i<m;i++)
 {
  sum=0;
  for(int j=1;j<=k;j++)
   { 
   sum=sum+(a[j+i-1]*j*j);  
   }
  cout<<sum<<" ";
  
 }


}
