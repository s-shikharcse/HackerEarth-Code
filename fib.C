#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
int n[t];
int max=0;
for(int i=0;i<t;i++)
{
cin>>n[i];
if(n[i]>max)
max=n[i];
}
int a[max];
a[0]=0;
a[1]=0;
a[2]=1;
int s;
for(int i=3;i<=max;i++)
{
s=a[i-1]+a[i-2]+a[i-3];
a[i-2]=a[i-1];
a[i-1]=a[i];
a[i]=s;
}

cout<<a[n-1]<<endl;
}
