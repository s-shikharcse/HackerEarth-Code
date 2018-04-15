#include<iostream>
using namespace std;
int main()
{
int t,n;
cin>>t;
unsigned long long fact=1;
while(t--)
{
cin>>n;
for(unsigned long long int i=n;i>=1;i--)
{
fact*=i;
}
cout<<fact<<endl;
}
}
