#include<iostream>
using namespace std;
int main()
{

while(1)
{
int x,n,flag;
cin>>x>>n;
if(x==0)
break;
int count=0;
for(int i=1;i<=x;i++)
{
flag=0;
for(int j=2;j<i;j++)
{
if(i%j!=0)
{
flag=1;
continue;
}
else
{
flag=0;
break;
}
}
if((flag==0)||((flag==1)&&(i<=n)))
count++;
else if((flag==1)&&(i>n))
continue;
}
cout<<count;
}
}
