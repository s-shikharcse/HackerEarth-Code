#include<iostream>
using namespace std;

int prime(int );

int main()
{
while(1)
{
int x,n;
cin>>x>>n;
if(x==0)
break;
int count=0;
for(int i=1;i<=x;i++)
{  
  int flag=0;
  for(int j=2;j<i;j++)
  {
  if((i%j==0)&&(j>n))
   {
   int p=prime(j);
   if(p==1)
   {
   flag=1;
   break;
   }
   }       
  }
if(flag==1)
continue;
else
count++;
}
cout<<count;
}

}

int prime(int x)
{
int flag=1;
for(int i=2;i<x;i++)
{
if(x%i!=0)
continue;
else
{
flag=0;
return 0;
}
}

if(flag==1)
return 1;
}
