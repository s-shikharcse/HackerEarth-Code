#include<iostream>
using namespace std;

int main()
{
int t,n,x,y;
cin>>t;
while(t--)
{
cin>>n;
x=0;
y=0;
if(n%4==2)
{
x=x+(n/2);
y=x+1;
}
else if(n%4==3)
{
x=x-n+((n-1)/2);
y=-x;
}
else if(n%4==0)
{
x=x-n/2;
y=x;
}
else
{
x=x+((n+1)/2);
y=-x+1;
}
cout<<x<<" "<<y<<endl;
}
}