#include<iostream>
using namespace std;
int main()
{
int i,l,r,k,count;
count=0;
cin>>l>>r>>k;
for(i=l;i<=r;i++)
{
 if((i%k)==0)
 count++;
}
cout<<count;
}
