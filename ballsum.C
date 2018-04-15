#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
long int m,n;

for(int i=0;i<t;i++)
{
cin>>m>>n;
for(long int j=m;j<=n;j++)
{
int flag=1;

if(j%2==0)
continue;

for(long int k=2;k<j;k++)
{
if((j%k)==0)
{
flag=0;
break;
}
}
if((flag==1)&&(j!=1))
cout<<j<<endl;
}
}


}
